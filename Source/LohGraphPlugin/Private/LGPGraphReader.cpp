// Copyright by Loh Zhi Kang


#include "LGPGraphReader.h"
#include "LGPGraphWriter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet\KismetSystemLibrary.h"

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

	if (CurrentFrameDelay > 0)
	{
		CurrentFrameDelay--;
	}
	else if (IsFollowingPath && !IsManualMoving && LocalNode)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Ticking"));

		if (!LocalNode->IsPathGenerating())
		{
			AActor* Owner = GetOwner();

			if (FollowingNode)
			{
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Following"));

				Owner->SetActorLocation(FMath::VInterpConstantTo(Owner->GetActorLocation(), FollowingNode->GetComponentLocation(), DeltaTime, MovingSpeed));
			
				if (FVector::Dist(Owner->GetActorLocation(), FollowingNode->GetComponentLocation()) < ReachDistance)
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

		PathData.Empty();

		StartNode = StartN;
		EndNode = Node;

		IsFollowingPath = false;
		FollowIndex = -1;

		MarkGraphComponentDirty();

		return true;
	}

	return false;
}

bool ULGPGraphNavigator::GoToLocation(const FVector Location)
{
	return GoToNode(GetOverlappingNodeByLocation(Location));
}

bool ULGPGraphNavigator::NextFollowingNode()
{
	if (IsManualMoving && GetNextFollowingNode(GetOverlappingNode()))
	{
		return true;
	}

	return false;
}

bool ULGPGraphNavigator::StopFollowingNode(const bool ClearData)
{
	if (IsFollowingPath)
	{
		IsFollowingPath = false;

		if (ClearData)
		{
			FollowingNode = nullptr;
			LocalNode = nullptr;
			StartNode = nullptr;
			EndNode = nullptr;

			PathData.Empty();
		}

		return true;
	}

	return false;
}

bool ULGPGraphNavigator::ContinualFollowingNode()
{
	if (!IsGraphComponentWorking() && LocalNode)
	{
		IsFollowingPath = true;

		return true;
	}

	return false;
}

void ULGPGraphNavigator::BeginPathFollowing()
{
	IsFollowingPath = true;

	FollowIndex = PathData.Num();

	GetNextFollowingNode(GetOverlappingNode());

	OnBeginFollowingPath.Broadcast();

	return;
}

ULGPNode* ULGPGraphNavigator::GetNextFollowingNode(ULGPNode* OverlapingNode)
{
	if (!OverlapingNode) return nullptr; // Not Valid Skip Process

	FLGPWeightPrefab WeightData;

	if (!GetWeightData(WeightData))
	{
		FollowingNode = nullptr;

		LocalNode = nullptr;

		IsFollowingPath = false;

		return nullptr;
	}

	AActor* Owner = GetOwner();

	if ((FollowingNode && OverlapingNode == FollowingNode && FollowingNode == LocalNode) || !LocalNode)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Next Group"));

		FollowingNode = nullptr;

		if (FollowIndex > 0)
		{
			FollowIndex--;

			ULGPNode* NextGroupNode = PathData.IsValidIndex(FollowIndex - 1) ? PathData[FollowIndex - 1].EndNode : EndNode;

			ULGPNode* NextNode = nullptr;

			float NextNodeScore = -1.0f;

			for (const FLGPNodePathData& PathItem : PathData[FollowIndex].GetProxyPath())
			{
				float NodeScore = (FVector::Dist(PathItem.StartNode->GetComponentLocation(), NextGroupNode->GetComponentLocation()) * WeightData.DistanceToEndMultiply) + PathItem.StartNode->GetPassWeight();

				if (NodeScore < NextNodeScore || NextNodeScore < 0.0f)
				{
					NextNode = PathItem.StartNode;

					NextNodeScore = NodeScore;
				}
			}

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
	}

	// Path Is Generating Can't Find Data Now !!!
	if (LocalNode->IsPathGenerating())
	{
		FollowingNode = nullptr;
	}
	else
	{
		FLGPNodePathData NextNode;

		const int32 OverlapStep = LocalNode->GetFlowFieldStep(OverlapingNode);

		float OverlapWeight = 0.0f;

		if (OverlapStep != INDEX_NONE) OverlapWeight = (OverlapStep * WeightData.StepMultiply) + OverlapingNode->GetPassWeight();

		float NextNodeScore = OverlapStep != INDEX_NONE ? OverlapWeight : MAX_FLT;

		for (const FLGPNodePathData& PathItem : OverlapingNode->GetPathList())
		{
			const int32 FlowHeat = LocalNode->GetFlowFieldStep(PathItem.EndNode);

			if (FlowHeat != INDEX_NONE && PathItem.EndNode->IsNodeValid())
			{
				float NodeScore = (FlowHeat * WeightData.StepMultiply) + OverlapingNode->GetPassWeight();

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
		else
		{
			FollowingNode = nullptr;
		}
	}

	return FollowingNode;
}

bool ULGPGraphNavigator::OnThreadWorkStart()
{
	return StartNode && StartNode->IsNodeValid() && EndNode && EndNode->IsNodeValid();
}

void ULGPGraphNavigator::DoThreadWork()
{
	if (StartNode == EndNode) // Check Is Already On Target
	{
		return;
	}

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
	if (!StopTaskerWork)
	{
		//for (FLGPGroupPathData& PathItem : PathData)
		//{
		//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, PathItem.StartNode->GetReadableName());
		//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, PathItem.EndNode->GetReadableName());
		//
		//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("%d"), PathItem.GetProxyPath().Num()));
		//
		//	for (const FLGPNodePathData& NodePath : PathItem.GetProxyPath())
		//	{
		//		GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Red, NodePath.StartNode->GetReadableName());
		//		GEngine->AddOnScreenDebugMessage(-1, 50.f, FColor::Green, NodePath.EndNode->GetReadableName());
		//	}
		//}

		OnPathReceive.Broadcast(PathData);

		FLGPWeightPrefab WeightData;

		if (GetWeightData(WeightData) && EndNode)
		{
			BeginPathFollowing();
		}

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Reader Threae Exit Safe"));
	}
}
