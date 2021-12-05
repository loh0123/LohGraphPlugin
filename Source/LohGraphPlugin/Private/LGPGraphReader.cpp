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

	if (IsPrintDebug) PrintNavDiagnostics();

	if (CurrentFrameDelay > 0)
	{
		CurrentFrameDelay--;
	}
	else if (IsFollowingPath && LocalNode)
	{
		if (FollowingTarget && CurrentTargetDelay-- == 0 && GetOverlappingNodeByLocation(FollowingTarget->GetActorLocation()) != EndNode)
		{
			GoToActor(FollowingTarget);
		}

		if (!LocalNode->IsPathGenerating())
		{
			AActor* Owner = GetOwner();

			if (FollowingNode)
			{
				if (!IsManualMoving) Owner->SetActorLocation(FMath::VInterpConstantTo(Owner->GetActorLocation(), GetFollowingLocation(), DeltaTime, MovingSpeed));
			
				if (FVector::Dist(Owner->GetActorLocation(), GetFollowingLocation()) < ReachDistance)
				{
					if (GetNextFollowingNode(GetOverlappingNode()) == nullptr)
					{
						CurrentFrameDelay = FrameDelay;
					}
				}
			}
			else
			{
				if (GetNextFollowingNode(GetOverlappingNode()) == nullptr)
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

	if (StartN && StartN->IsNodeValid() && Node && Node->IsNodeValid())
	{
		StopGraphComponentTasker();

		StartNode = StartN;
		EndNode = Node;

		if (StartNode->GetGroupDataPointer() == EndNode->GetGroupDataPointer())
		{
			ClearPathData();

			IsFollowingPath = true;
			FollowIndex = 0;

			LocalNode = EndNode;
			LocalNode->RequestPath();
		}
		else
		{
			IsFollowingPath = false;
			FollowIndex = -1;

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
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("NextFollowingNode"));

	if (IsManualMoving && GetNextFollowingNode(GetOverlappingNode()))
	{
		return true;
	}

	return false;
}

bool ULGPGraphNavigator::StopFollowingNode(const bool ClearData)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("StopFollowingNode"));

	if (IsFollowingPath)
	{
		IsFollowingPath = false;

		if (ClearData)
		{
			ClearPathData();
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
		IsFollowingPath = true;

		return true;
	}

	return false;
}

void ULGPGraphNavigator::PrintNavDiagnostics() const
{
	GEngine->AddOnScreenDebugMessage(0, 15.f, FColor::Red, FString::Printf(TEXT("FollowingTarget: %s"), FollowingNode ? *FollowingNode->GetReadableName() : TEXT("Null")));
	GEngine->AddOnScreenDebugMessage(1, 15.f, FColor::Red, FString::Printf(TEXT("LocalNode: %s"), LocalNode ? *LocalNode->GetReadableName() : TEXT("Null")));
	GEngine->AddOnScreenDebugMessage(2, 15.f, FColor::Red, FString::Printf(TEXT("FollowIndex: %d"), FollowIndex));
	GEngine->AddOnScreenDebugMessage(3, 15.f, FColor::Red, FString::Printf(TEXT("IsFollowingPath: %s"), IsFollowingPath ? TEXT("True") : TEXT("False")));
	GEngine->AddOnScreenDebugMessage(4, 15.f, FColor::Red, FString::Printf(TEXT("IsManualMoving: %s"), IsManualMoving ? TEXT("True") : TEXT("False")));

	GEngine->AddOnScreenDebugMessage(5, 15.f, FColor::Red, FString::Printf(TEXT("OverlapingNode: %s"), GetOverlappingNode() ? *GetOverlappingNode()->GetReadableName() : TEXT("Null")));
	GEngine->AddOnScreenDebugMessage(6, 15.f, FColor::Red, FString::Printf(TEXT("Dist To Target: %f"), FVector::Dist(GetOwner()->GetActorLocation(), GetFollowingLocation())));


	GEngine->AddOnScreenDebugMessage(8, 15.f, FColor::Red, FString::Printf(TEXT("PathDataNum: %d"), PathData.Num()));
	GEngine->AddOnScreenDebugMessage(9, 15.f, FColor::Red, FString::Printf(TEXT("Dist To Target: %f"), FVector::Dist(GetOwner()->GetActorLocation(), GetFollowingLocation())));

	return;
}

void ULGPGraphNavigator::ClearPathData()
{
	if (PathData.Num() == 0) return;

	PathData[0].StartNode->GetOwingWriter()->OnComponentUpdate.RemoveAll(this);

	for (FLGPGroupPathData& PathItem : PathData)
	{
		PathItem.EndNode->GetOwingWriter()->OnComponentUpdate.RemoveAll(this);
	}

	PathData.Empty();

	LocalNode = nullptr;
	FollowingNode = nullptr;

	FollowIndex = -1;

	return;
}

void ULGPGraphNavigator::OnPathNeedUpdate(const bool bIsForce)
{
	if (!bIsForce) return;

	StopFollowingNode();

	if (EndNode && EndNode->IsNodeValid())
	{
		GoToNode(EndNode);
	}
	else
	{
		ClearPathData();
	}

	return;
}

void ULGPGraphNavigator::BeginPathFollowing()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("BeginPathFollowing"));

	IsFollowingPath = true;

	FollowIndex = PathData.Num() - 1;

	GetNextFollowingNode(GetOverlappingNode());

	OnBeginFollowingPath.Broadcast();

	return;
}

ULGPNode* ULGPGraphNavigator::GetNextFollowingNode(ULGPNode* OverlapingNode)
{
	FLGPWeightPrefab WeightData;

	AActor* Owner = GetOwner();

	if (!OverlapingNode || !GetWeightData(WeightData) || !Owner) return nullptr; // Not Valid Skip Process

	SCOPE_CYCLE_COUNTER(STAT_ReaderNexCycle);

	if ((OverlapingNode && OverlapingNode == LocalNode) || !LocalNode)
	{
		FollowingNode = nullptr;

		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("FN: %s, LC: %s"), FollowingNode ? *FollowingNode->GetReadableName() : TEXT("Null"), LocalNode ? *LocalNode->GetReadableName() : TEXT("Null")));

		if (FollowIndex > 0)
		{
			if (LocalNode) { FollowIndex--; LocalNode->GetOwingWriter()->OnComponentUpdate.RemoveAll(this); }

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

			//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Local: %s, ID: %d"), *NextNode->GetReadableName(), FollowIndex));

			LocalNode = NextNode;

			LocalNode->RequestPath();
		}
		else
		{
			FollowIndex = -1;

			if (LocalNode == EndNode)
			{
				LocalNode = nullptr;

				IsFollowingPath = false;

				OnEndFollowingPath.Broadcast();

				return nullptr;
			}
			else
			{
				LocalNode = EndNode;

				LocalNode->RequestPath();
			}
		}

		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("ReLocal: %s"), *LocalNode->GetReadableName()));
	}

	// Path Is Generating Can't Find Data Now !!!
	if (LocalNode->IsPathGenerating())
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Path Generating"));

		FollowingNode = nullptr;

		return nullptr;
	}



	const int32 OverlapStep = LocalNode->GetFlowFieldStep(OverlapingNode);

	float NextNodeScore = OverlapStep != INDEX_NONE ? (OverlapStep * WeightData.StepMultiply) + OverlapingNode->GetPassWeight() : MAX_FLT;

	FLGPNodePathData NextNode;

	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::White, FString::Printf(TEXT("Num: %d, Weight: %f, Local: %s"), OverlapingNode->GetPathList().Num(), NextNodeScore, *LocalNode->GetReadableName()));

	for (const FLGPNodePathData& PathItem : OverlapingNode->GetPathList())
	{
		const int32 FlowHeat = LocalNode->GetFlowFieldStep(PathItem.EndNode);

		if (FlowHeat != INDEX_NONE && PathItem.EndNode->IsNodeValid())
		{
			float NodeScore = (FlowHeat * WeightData.StepMultiply) + OverlapingNode->GetPassWeight();

			if (NodeScore < NextNodeScore)
			{
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Finded"));

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
	else
	{
		FollowingNode = nullptr;
	}

	return FollowingNode;
}

bool ULGPGraphNavigator::OnThreadWorkStart()
{
	ClearPathData();

	return StartNode && StartNode->IsNodeValid() && EndNode && EndNode->IsNodeValid();
}

void ULGPGraphNavigator::DoThreadWork()
{
	if (StartNode == EndNode) // Check Is Already On Target
	{
		return;
	}

	SCOPE_CYCLE_COUNTER(STAT_ReaderNavCycle);

	FLGPWeightPrefab WeightData = FLGPWeightPrefab();
	GetWeightData(WeightData);

	TArray<FLGPAStarHelper> OpenGroups = { FLGPAStarHelper(StartNode->GetGroupDataPointer(), EndNode, WeightData)};
	TSet<FLGPAStarHelper> CloseGroups;
	
	OpenGroups.Heapify();
	
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
		PathData[0].StartNode->GetOwingWriter()->OnComponentUpdate.AddUObject(this, &ULGPGraphNavigator::OnPathNeedUpdate);

		for (FLGPGroupPathData& PathItem : PathData)
		{
			PathItem.EndNode->GetOwingWriter()->OnComponentUpdate.AddUObject(this, &ULGPGraphNavigator::OnPathNeedUpdate);
		}

		OnPathReceive.Broadcast(PathData);

		FLGPWeightPrefab WeightData;

		if (GetWeightData(WeightData) && EndNode)
		{
			BeginPathFollowing();
		}
	}
}
