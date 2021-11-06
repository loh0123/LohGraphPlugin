// Copyright by Loh Zhi Kang


#include "LGPNode.h"
#include "LGPGraphWriter.h"

void ULGPNodeBase::BeginPlay()
{
	Super::BeginPlay();

	ULGPGraphWriter* FindedWriter = Cast<ULGPGraphWriter>(GetOwner()->GetComponentByClass(ULGPGraphWriter::StaticClass()));

	if (FindedWriter)
	{
		FindedWriter->RegisterGraphNode(Cast<ULGPNode>(this));
	}
}

void ULGPNodeBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	ClearPath();

	if (NodeGraphWriter)
	{
		NodeGraphWriter->UnregisterGraphNode(Cast<ULGPNode>(this));
	}
}

void ULGPNodeBase::SetupNode(TSet<FLGPNodePathData>& Paths, const bool WeightType, const bool IsTrigger)
{
	checkf(!HasBegunPlay(), TEXT("Setup Node Only Can Run Before Begin Play"));

	PathList = Paths;
	NodeWeightType = WeightType;
	bIsTrigger = IsTrigger;

	return;
}

bool ULGPNodeBase::AddPath(ULGPNode* Node, const uint8 WeightType, const bool IsReturnable, const bool Trigger)
{
	if (Node && !Node->IsPendingKill())
	{
		FLGPNodePathData* Data = PathList.Find(Node);

		if (Data)
		{
			Data->IsWalkable = true;
			Node->PathList.Find(Cast<ULGPNode>(this))->IsReturnable = true;

			Data->PathWeightType = WeightType;
			Data->bIsTrigger = Trigger;
		}
		else
		{
			PathList.Add(FLGPNodePathData(Node, WeightType, true, IsReturnable, Trigger));
			Node->PathList.Add(FLGPNodePathData(Cast<ULGPNode>(this), WeightType, IsReturnable, true, Trigger));
		}

		return true;
	}

	return false;
}

bool ULGPNodeBase::RemovePath(ULGPNode* Node)
{
	if (Node && !Node->IsPendingKill())
	{
		FLGPNodePathData* SelfData = PathList.Find(Node);
		FLGPNodePathData* NodeData = Node->PathList.Find(Node);

		if (SelfData && NodeData)
		{
			if (SelfData->IsWalkable)
			{
				if (SelfData->IsReturnable)
				{
					SelfData->IsWalkable = false;
					NodeData->IsReturnable = false;
				}
				else
				{
					PathList.Remove(Node);
					Node->PathList.Remove(Cast<ULGPNode>(this));
				}
			}

			return true;
		}
	}

	return false;
}

bool ULGPNodeBase::ClearPath()
{
	TArray<FLGPNodePathData> LocalPathNode = PathList.Array();

	for (FLGPNodePathData& Path : LocalPathNode)
	{
		RemovePath(Path.ConnectNode);
	}

	return LocalPathNode.Num() > 0;
}
