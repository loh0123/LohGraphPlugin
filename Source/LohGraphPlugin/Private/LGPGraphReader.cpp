// Copyright by Loh Zhi Kang


#include "LGPGraphReader.h"
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
						float NewWeight = CurrentGroupData.StartWeight + (FVector::Dist(CurrentGroupData.GroupPointer->IdentifyNode->GetComponentLocation(), OpenGroups[OpenIndex].GroupPointer->IdentifyNode->GetComponentLocation()) * WeightData.DistanceToEndMultiply);

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
	for (FLGPGroupPathData& PathItem : PathData)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, PathItem.StartNode->GetReadableName());
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, PathItem.EndNode->GetReadableName());

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("%d"), PathItem.GetProxyPath().Num()));
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Reader Threae Exit Safe"));
}
