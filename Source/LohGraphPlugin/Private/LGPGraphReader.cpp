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

	PathData.Empty();

	FLGPWeightPrefab WeightData = FLGPWeightPrefab();

	GetWeightData(WeightData);

	TArray<FLGPAStarHelper> OpenGroups = { FLGPAStarHelper(nullptr, StartNode->GetGroupData().IdentifyNode, EndNode, WeightData) };
	
	TSet<FLGPAStarHelper> CloseGroups;
	
	OpenGroups.Heapify();
	
	while (OpenGroups.Num() > 0 && !StopTaskerWork)
	{
		FLGPAStarHelper CurrentGroupData;
	
		OpenGroups.HeapPop(CurrentGroupData);
		
		CloseGroups.Add(CurrentGroupData);
	
		if (CurrentGroupData.IdentifyNode == EndNode->GetGroupData().IdentifyNode)
		{
			FLGPAStarHelper* CurrentGroupPointer = &CurrentGroupData;

			while (CurrentGroupPointer != nullptr && !StopTaskerWork)
			{
				PathData.Add(*(CurrentGroupData.FromNode->GetGroupData().GroupPath.Find(CurrentGroupData.IdentifyNode)));

				CurrentGroupPointer = CloseGroups.Find(CurrentGroupData.FromNode);
			}
		}
		else
		{
			for (const FLGPGroupPathData& PathItem : CurrentGroupData.GetGroupPath()) // Loop All Group Path
			{
				if (CloseGroups.Contains(PathItem.EndNode->GetGroupData().IdentifyNode))
				{
					continue;
				}

				int32 OpenIndex = OpenGroups.IndexOfByKey(PathItem.EndNode->GetGroupData().IdentifyNode);

				if (OpenIndex != INDEX_NONE)
				{
					OpenGroups[OpenIndex].UpdateStartWeight(CurrentGroupData, WeightData);
				}
				else
				{
					OpenGroups.Add(FLGPAStarHelper(CurrentGroupData.IdentifyNode, PathItem.EndNode->GetGroupData().IdentifyNode, EndNode, WeightData));
				}
			}
		}
	}

	return;
}
