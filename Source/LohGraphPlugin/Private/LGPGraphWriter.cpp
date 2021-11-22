// Copyright by Loh Zhi Kang

#include "LGPGraphWriter.h"

void ULGPGraphWriter::BeginPlay()
{
	Super::BeginPlay();

	TInlineComponentArray<ULGPNode*> NodeList(GetOwner());

	GetOwner()->GetComponents<ULGPNode>(NodeList, true);

	for (ULGPNode* Node : NodeList)
	{
		RegisterGraphNode(Node);
	}
}

void ULGPGraphWriter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	TSet<ULGPNode*> CacheNode = RegisteredNode;

	for (ULGPNode* Node : CacheNode)
	{
		UnregisterGraphNode(Node);
	}
}

void ULGPGraphWriter::RegisterGraphNode(ULGPNode* Node)
{
	RegisteredNode.Add(Node);

	Node->NodeGraphWriter = this;

	MarkGraphWriterDirty();

	return;
}

void ULGPGraphWriter::UnregisterGraphNode(ULGPNode* Node)
{
	RegisteredNode.Remove(Node);

	Node->NodeGraphWriter = nullptr;

	MarkGraphWriterDirty();

	return;
}

void ULGPGraphWriter::DoThreadWork()
{
	if (CurrentPathProcessNode)
	{
		// Process Node Paths
	}
	else if (NodeGroupList.Num() == 0)
	{
		// Process Group Data

		TArray<ULGPNode*> UnMarkNode = RegisteredNode.Array();
		TArray<ULGPNode*> StackNode;
		TMap<ULGPNode*, FLGSNodeGroupProcess> MarkNode;
		TArray<FLGPNodeGroupData> LocalGroupList;


		// Setup Container
		StackNode.Reserve(UnMarkNode.Num());
		MarkNode.Reserve(UnMarkNode.Num());
		LocalGroupList.Reserve(UnMarkNode.Num());


		auto AddStackNode = [&](ULGPNode* Node)
		{
			StackNode.Add(Node);
			MarkNode.Add(Node, FLGSNodeGroupProcess(MarkNode.Num()));

			return;
		};

		auto SetLowLink = [&] (FLGSNodeGroupProcess& A, FLGSNodeGroupProcess& B)
		{
			if (A.LowLinkValue >= B.LowLinkValue)
			{
				A.LowLinkValue = B.LowLinkValue;

				if (B.SCCID != INDEX_NONE)
				{
					if (A.SCCID != INDEX_NONE)
					{
						if (LocalGroupList[A.SCCID].GroupMember.Num() > LocalGroupList[B.SCCID].GroupMember.Num())
						{
							LocalGroupList[A.SCCID].GroupMember.Append(LocalGroupList[B.SCCID].GroupMember);
							LocalGroupList[B.SCCID].GroupMember.Empty();

							return;
						}
						else
						{
							LocalGroupList[B.SCCID].GroupMember.Append(LocalGroupList[A.SCCID].GroupMember);
							LocalGroupList[A.SCCID].GroupMember.Empty();
						}
					}

					A.SCCID = B.SCCID;
				}
			}

			return;
		};


		// Ensure UnMarkNode is empty before continues and Graph Write is lock
		while (UnMarkNode.Num() > 0 && !StopTaskerWork)
		{
			ULGPNode* LastReverseNode = nullptr;
			FLGSNodeGroupProcess* LastNodeData = nullptr;

			// Loop the last item on array and check is visited
			while (UnMarkNode.Num() > 0)
			{
				if (MarkNode.Contains(UnMarkNode.Last()) || !UnMarkNode.Last()->IsActive())
				{
					// remove visited item on the array or not active item
					UnMarkNode.Pop(false);
				}
				else
				{
					// Find Unvisited item , start process it (stop the loop)
					AddStackNode(UnMarkNode.Pop(false));

					break;
				}
			}

			UnMarkNode.Shrink();

			// Get new graph node to proccess

			// Ensure all stack node was processed
			while (StackNode.Num() > 0 && !StopTaskerWork)
			{
				// Get head of StackNode and Cache it
				ULGPNode* CurrentNode = StackNode.Last();
				FLGSNodeGroupProcess& NodeData = MarkNode.FindChecked(CurrentNode);

				// Check if no stack node was added in this process
				bool Reverse = true;

				// Check last process end in reverse and min self low link value
				if (LastReverseNode)
				{
					SetLowLink(NodeData, *LastNodeData);
				}

				// Process all connected path in this node
				for (const FLGPNodePathData& Path : CurrentNode->GetPathList())
				{
					if (Path.ConnectNode->NodeGraphWriter == this && Path.IsWalkable && Path.ConnectNode->IsActive())
					{
						FLGSNodeGroupProcess* ProcNodeData = MarkNode.Find(Path.ConnectNode);

						if (ProcNodeData)
						{
							if (StackNode.Contains(Path.ConnectNode))
							{
								SetLowLink(NodeData, *ProcNodeData);
							}
						}
						else
						{
							AddStackNode(Path.ConnectNode);

							Reverse = false;

							break;
						}
					}
				}

				// Node Finish Check
				if (Reverse)
				{
					if (NodeData.SCCID == INDEX_NONE) NodeData.SCCID = LocalGroupList.Add(FLGPNodeGroupData()); // Ensure SCC ID Valid

					LocalGroupList[NodeData.SCCID].GroupMember.Add(CurrentNode); // Add To Group

					if (NodeData.LowLinkID == NodeData.LowLinkValue) // Store Data If Complete
					{
						// Add To Data List
						NodeGroupList.Add(LocalGroupList[NodeData.SCCID]);

						LocalGroupList[NodeData.SCCID].GroupMember.Empty();
					}

					// Set This Node To Last Node
					LastReverseNode = StackNode.Pop();
					LastNodeData = &NodeData;
				}
				else
				{
					// Clear Last Node
					LastReverseNode = nullptr;
					LastNodeData = nullptr;
				}
			}
		}

		int32 Index = 0;

		for (FLGPNodeGroupData& GroupData : NodeGroupList)
		{
			for (ULGPNode*& Node : GroupData.GroupMember)
			{
				Node->GroupID = Index;

				for (const FLGPNodePathData& Path : Node->GetPathList())
				{
					if (Path.IsWalkable && Path.ConnectNode->IsActive() && !GroupData.GroupMember.Contains(Path.ConnectNode))
					{
						GroupData.GroupPath.Add(Path);
					}
				}

				if (StopTaskerWork) break;
			}

			Index++;

			if (StopTaskerWork) break;
		}
	}

	return;
}

FLGPNodeGroupData* ULGPGraphWriter::GetGroupDataPointer(ULGPNode* Node)
{
	if (!IsGraphComponentWorking() && BuildVersion == CurrentBuildVersion && NodeGroupList.IsValidIndex(Node->GroupID))
	{
		return &NodeGroupList[Node->GroupID];
	}

	return nullptr;
}
