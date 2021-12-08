// Copyright (c) 2021 Loh Zhi Kang (loh0123@hotmail.com)
//
// Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
// or copy at http://opensource.org/licenses/MIT)


#include "LGPGraphReader.h"
#include "LGPGraphWriter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet\KismetSystemLibrary.h"


DECLARE_CYCLE_STAT(TEXT("Reader Graoup Navigation Cycle"), STAT_ReaderNavCycle, STATGROUP_LGPGraphCycle);
DECLARE_CYCLE_STAT(TEXT("Reader Next Node Cycle"), STAT_ReaderNexCycle, STATGROUP_LGPGraphCycle);

float ULGPGraphReader::GetNodeWeight(ULGPNode* Node) const
{
	FLGPWeightPrefab Data;

	if (Node && GetWeightPrefab(ReaderType, Data))
	{
		return Data.WeightList[Node->NodeWeightType];
	}

	return -1.0f;
}

ULGPNode* ULGPGraphReader::GetOverlappingNode(const bool ReturnFirst) const
{
	ULGPNode* OutComp = nullptr;

	TArray<UPrimitiveComponent*> OverlapComp;

	GetOwner()->GetOverlappingComponents(OverlapComp);

	for (UPrimitiveComponent* Comp : OverlapComp)
	{
		ULGPNode* NewComp = Cast<ULGPNode>(Comp);

		if (NewComp && NewComp->IsNodeValid())
		{
			if (ReturnFirst)
			{
				return NewComp;
			}

			if (!OutComp ||
				FVector::Dist(GetOwner()->GetActorLocation(), NewComp->GetComponentLocation()) <
				FVector::Dist(GetOwner()->GetActorLocation(), OutComp->GetComponentLocation()))
			{
				OutComp = NewComp;
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Overlap Node Not Found"));
		}
	}

	return OutComp;
}

ULGPNode* ULGPGraphReader::GetOverlappingNodeByLocation(const FVector Point, const bool ReturnFirst) const
{
	ULGPNode* OutComp = nullptr;

	TArray<UPrimitiveComponent*> OutComps;

	TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;
	TraceObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldDynamic));

	TArray<AActor*> IgnoreActors;
	IgnoreActors.Init(GetOwner(), 1);

	if (UKismetSystemLibrary::SphereOverlapComponents(this, Point, 100.0f, TraceObjectTypes, ULGPNode::StaticClass(), IgnoreActors, OutComps))
	{
		for (UPrimitiveComponent* Comp : OutComps)
		{
			ULGPNode* NewComp = Cast<ULGPNode>(Comp);

			if (NewComp && NewComp->IsNodeValid())
			{
				if (ReturnFirst)
				{
					return NewComp;
				}

				if (!OutComp ||
					(FVector::Dist(Point, NewComp->GetComponentLocation()) <
					 FVector::Dist(Point, OutComp->GetComponentLocation())))
				{
					OutComp = NewComp;
				}
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Overlap Node Not Found"));
	}

	return OutComp;
}


// Sets default values for this component's properties
ULGPGraphNavigator::ULGPGraphNavigator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


	// ...
}

void ULGPGraphNavigator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsPrintDebug) PrintNavDiagnostics();

	if (CurrentFrameDelay > 0)
	{
		CurrentFrameDelay--;
	}
	else if (bRetryPath)
	{
		if (FollowingTarget)
		{
			if (GoToActor(FollowingTarget)) { bRetryPath = false; }
			else { CurrentFrameDelay = FrameDelay; }
		}
		else
		{
			if (GoToNode(EndNode)) { bRetryPath = false; }
			else { CurrentFrameDelay = FrameDelay; }
		}
	}
	else if (bIsFollowingPath && LocalNode)
	{
		if (!LocalNode->IsPathGenerating())
		{
			if (FollowingNode)
			{
				if (!bIsManualMoving) GetOwner()->SetActorLocation(FMath::VInterpConstantTo(GetOwner()->GetActorLocation(), GetFollowingLocation(), DeltaTime, MovingSpeed));
			
				if (FVector::Dist(GetOwner()->GetActorLocation(), GetFollowingLocation()) < ReachDistance)
				{
					if (!NextFollowingNode())
					{
						CurrentFrameDelay = FrameDelay;
					}
				}
			}
			else
			{
				if (!NextFollowingNode())
				{
					CurrentFrameDelay = FrameDelay;
				}
			}
		}
	}

	return;
}

bool ULGPGraphNavigator::GoToNode(ULGPNode* Node)
{
	ULGPNode* StartN = GetOverlappingNode();

	ClearPathData();

	StartNode = StartN;
	EndNode = Node;

	if (StartNode && StartNode->IsNodeValid() && EndNode && EndNode->IsNodeValid() && StartNode->GetGroupDataPointer() && EndNode->GetGroupDataPointer())
	{
		StopGraphComponentTasker();

		if (StartNode->GetGroupDataPointer() == EndNode->GetGroupDataPointer())
		{
			StartNode->GetOwingWriter()->OnComponentUpdate.AddUObject(this, &ULGPGraphNavigator::OnPathNeedUpdate);

			BeginPathFollowing();
		}
		else
		{
			MarkGraphComponentDirty();
		}

		return true;
	}

	return false;
}

bool ULGPGraphNavigator::GoToLocation(const FVector Location)
{
	return GoToNode(GetOverlappingNodeByLocation(Location));
}

bool ULGPGraphNavigator::GoToActor(AActor* Node)
{
	if (!Node) return false;

	FollowingTarget = Node;

	return GoToLocation(Node->GetActorLocation());
}

bool ULGPGraphNavigator::NextFollowingNode()
{
	ULGPNode* OverlapingNode = GetOverlappingNode();

	FLGPWeightPrefab WeightData;

	AActor* Owner = GetOwner();

	if (!OverlapingNode || !GetWeightData(WeightData) || !Owner) return false; // Not Valid Skip Process

	SCOPE_CYCLE_COUNTER(STAT_ReaderNexCycle);

	// Stop Navigation If Reach End Node Already
	if (OverlapingNode == EndNode)
	{
		FollowingNode = nullptr;

		LocalNode = nullptr;

		bIsFollowingPath = false;

		OnEndFollowingPath.Broadcast();

		return nullptr;
	}

	// Clear Local Node If Reached
	if (LocalNode && OverlapingNode == LocalNode) { LocalNode = nullptr; }

	// Local Node Invalid Find New Local Node If Possible
	if (!LocalNode)
	{
		if (FollowIndex >= 0)
		{
			FollowingNode = nullptr;

			ULGPNode* NextGroupNode = PathData.IsValidIndex(FollowIndex - 1) ? PathData[FollowIndex - 1].EndNode : EndNode;

			ULGPNode* NextNode = nullptr;

			float NextNodeScore = MAX_FLT;

			for (const FLGPNodePathData& PathItem : PathData[FollowIndex].GetProxyPath())
			{
				float NodeScore = (FVector::Dist(PathItem.StartNode->GetComponentLocation(), NextGroupNode->GetComponentLocation()) * WeightData.DistanceToEndMultiply) + PathItem.StartNode->GetPassWeight();

				if (NodeScore < NextNodeScore)
				{
					NextNode = PathItem.StartNode;

					NextNodeScore = NodeScore;
				}
			}

			LocalNode = NextNode;

			FollowIndex--;
		}
		else
		{
			LocalNode = EndNode;
		}
	}

	LocalNode->RequestPath();

	// Path Is Generating Can't Find Data Now !!!
	if (LocalNode->IsPathGenerating()) { FollowingNode = nullptr; }

	// Find Next Node To Follow
	else
	{
		// Get Current OverlapingNode Step To LocalNode
		int32 OverlapStep = LocalNode->GetFlowFieldStep(OverlapingNode);

		float NextNodeScore = OverlapStep != INDEX_NONE ? (OverlapStep * WeightData.StepMultiply) + OverlapingNode->GetPassWeight() : MAX_FLT;

		FLGPNodePathData NextNode;

		for (const FLGPNodePathData& PathItem : OverlapingNode->GetPathList())
		{
			OverlapStep = LocalNode->GetFlowFieldStep(PathItem.EndNode);

			if (OverlapStep != INDEX_NONE && PathItem.EndNode->IsNodeValid())
			{
				float NodeScore = (OverlapStep * WeightData.StepMultiply) + OverlapingNode->GetPassWeight();

				if (NodeScore < NextNodeScore)
				{
					NextNode = PathItem;

					NextNodeScore = NodeScore;
				}
			}
		}

		if (NextNode.EndNode)
		{
			OverlapingNode->RemovePassWeight(this);

			FollowingNode = NextNode.EndNode;

			FollowingNode->AddPassWeight(this);

			if (NextNode.bIsTrigger)
			{
				NextNode.EndNode->GetOwingWriter()->OnAlertPathUsed.Broadcast(NextNode, this);
			}

			if (NextNode.EndNode->bIsTrigger)
			{
				NextNode.EndNode->GetOwingWriter()->OnAlertNodeUsed.Broadcast(NextNode, this);
			}
		}
		// All Path Weight Too High
		else
		{
			FollowingNode = nullptr;
		}
	}

	return FollowingNode != nullptr;
}


bool ULGPGraphNavigator::StopFollowingNode(const bool ClearData)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("StopFollowingNode"));

	if (bIsFollowingPath)
	{
		if (ClearData)
		{
			ClearPathData();
		}
		else
		{
			bIsFollowingPath = false;
		}

		return true;
	}

	return false;
}

bool ULGPGraphNavigator::ContinualFollowingNode()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("ContinualFollowingNode"));

	if (!IsGraphComponentWorking() && LocalNode)
	{
		bIsFollowingPath = true;

		return true;
	}

	return false;
}

void ULGPGraphNavigator::PrintNavDiagnostics() const
{
	GEngine->AddOnScreenDebugMessage(0, 15.f, FColor::Red, FString::Printf(TEXT("FollowingTarget: %s"), FollowingNode ? *FollowingNode->GetReadableName() : TEXT("Null")));
	GEngine->AddOnScreenDebugMessage(1, 15.f, FColor::Red, FString::Printf(TEXT("LocalNode: %s"), LocalNode ? *LocalNode->GetReadableName() : TEXT("Null")));
	GEngine->AddOnScreenDebugMessage(2, 15.f, FColor::Red, FString::Printf(TEXT("FollowIndex: %d"), FollowIndex));
	GEngine->AddOnScreenDebugMessage(3, 15.f, FColor::Red, FString::Printf(TEXT("IsFollowingPath: %s"), bIsFollowingPath ? TEXT("True") : TEXT("False")));
	GEngine->AddOnScreenDebugMessage(4, 15.f, FColor::Red, FString::Printf(TEXT("IsManualMoving: %s"), bIsManualMoving ? TEXT("True") : TEXT("False")));

	GEngine->AddOnScreenDebugMessage(5, 15.f, FColor::Red, FString::Printf(TEXT("OverlapingNode: %s"), GetOverlappingNode() ? *GetOverlappingNode()->GetReadableName() : TEXT("Null")));
	GEngine->AddOnScreenDebugMessage(6, 15.f, FColor::Red, FString::Printf(TEXT("Dist To Target: %f"), FVector::Dist(GetOwner()->GetActorLocation(), GetFollowingLocation())));


	GEngine->AddOnScreenDebugMessage(8, 15.f, FColor::Red, FString::Printf(TEXT("PathDataNum: %d"), PathData.Num()));
	GEngine->AddOnScreenDebugMessage(9, 15.f, FColor::Red, FString::Printf(TEXT("Dist To Target: %f"), FVector::Dist(GetOwner()->GetActorLocation(), GetFollowingLocation())));

	GEngine->AddOnScreenDebugMessage(10, 15.f, FColor::Red, FString::Printf(TEXT("Retry Path : %s"), bRetryPath ? TEXT("True") : TEXT("False")));

	return;
}

void ULGPGraphNavigator::ClearPathData()
{
	if (PathData.Num() == 0) return;

	for (ULGPGraphWriter* WriterItem : PassWriter)
	{
		WriterItem->OnComponentUpdate.RemoveAll(this);
	}

	PathData.Empty();
	PassWriter.Empty();

	LocalNode = nullptr;
	FollowingNode = nullptr;

	FollowIndex = -1;
	bIsFollowingPath = false;

	return;
}

void ULGPGraphNavigator::OnPathNeedUpdate(const bool bIsForce)
{
	if (!bIsForce) return;

	StopFollowingNode(true);

	bRetryPath = true;

	return;
}

void ULGPGraphNavigator::BeginPathFollowing()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::White, FString::Printf(TEXT("FollowIndex: %d"), FollowIndex));

	bIsFollowingPath = true;

	FollowIndex = PathData.Num() - 1;

	NextFollowingNode();

	OnBeginFollowingPath.Broadcast();

	return;
}

bool ULGPGraphNavigator::OnThreadWorkStart()
{
	ClearPathData();

	return StartNode && StartNode->IsNodeValid() && EndNode && EndNode->IsNodeValid();
}

void ULGPGraphNavigator::DoThreadWork()
{
	if (StartNode == EndNode) return; // Check Is Already On Target

	SCOPE_CYCLE_COUNTER(STAT_ReaderNavCycle);

	FLGPWeightPrefab WeightData = FLGPWeightPrefab();
	GetWeightData(WeightData);

	TArray<FLGPAStarHelper> OpenGroups = { FLGPAStarHelper(StartNode->GetGroupDataPointer(), EndNode, WeightData)};
	TSet<FLGPAStarHelper> CloseGroups;
	
	OpenGroups.Heapify();

	if (!StartNode->GetGroupDataPointer() || !EndNode->GetGroupDataPointer()) StopTaskerWork = true;
	
	while (OpenGroups.Num() > 0 && !StopTaskerWork)
	{
		FLGPAStarHelper CurrentGroupData;
	
		OpenGroups.HeapPop(CurrentGroupData);
		
		FSetElementId GroupKey = CloseGroups.Add(CurrentGroupData);
	
		if (CurrentGroupData.GroupPointer == EndNode->GetGroupDataPointer())
		{
			while (CurrentGroupData.ParentKey.IsValidId())
			{
				PathData.Add(CloseGroups[CurrentGroupData.ParentKey].GroupPointer->GroupPath[CurrentGroupData.PathKey]);

				PassWriter.Add(CloseGroups[CurrentGroupData.ParentKey].GroupPointer->GroupMember[0].Member->GetOwingWriter());

				CurrentGroupData = CloseGroups[CurrentGroupData.ParentKey];
			} 

			break;
		}
		else
		{
			for (auto PathItem = CurrentGroupData.GetGroupPath().CreateConstIterator(); PathItem; ++PathItem)
			{
				if (PathItem->IsWalkable && !CloseGroups.Contains(PathItem->EndNode->GetGroupDataPointer()))
				{
					int32 OpenIndex = OpenGroups.IndexOfByKey(PathItem->EndNode->GetGroupDataPointer());

					if (OpenIndex != INDEX_NONE)
					{
						float NewWeight = CurrentGroupData.StartWeight + (FVector::Dist(CurrentGroupData.GroupPointer->GetIdentifyNode()->GetComponentLocation(), OpenGroups[OpenIndex].GroupPointer->GetIdentifyNode()->GetComponentLocation()) * WeightData.DistanceToEndMultiply);

						if (NewWeight < OpenGroups[OpenIndex].StartWeight)
						{
							OpenGroups[OpenIndex].StartWeight = NewWeight;
							OpenGroups[OpenIndex].ParentKey = GroupKey;
						}
					}
					else
					{
						OpenGroups.Add(FLGPAStarHelper(GroupKey, PathItem.GetId(), PathItem->EndNode->GetGroupDataPointer(), EndNode, WeightData));
					}
				}
			}
		}
	}

	return;
}

void ULGPGraphNavigator::OnThreadWorkDone()
{
	if (!StopTaskerWork && PathData.Num() > 0)
	{
		for (ULGPGraphWriter* WriterItem : PassWriter)
		{
			if (WriterItem->IsGraphComponentWorking()) { MarkGraphComponentDirty(); ClearPathData(); return; }

			WriterItem->OnComponentUpdate.AddUObject(this, &ULGPGraphNavigator::OnPathNeedUpdate);
		}

		OnPathReceive.Broadcast(PathData);

		FLGPWeightPrefab WeightData;

		if (GetWeightData(WeightData) && EndNode)
		{
			BeginPathFollowing();
		}
	}
}
