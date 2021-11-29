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

	return;
}

void ULGPGraphWriter::RegisterGraphNode(ULGPNode* Node)
{
	RegisteredNode.Add(Node);

	Node->NodeGraphWriter = this;

	MarkGraphComponentDirty();

	return;
}

void ULGPGraphWriter::UnregisterGraphNode(ULGPNode* Node)
{
	RegisteredNode.Remove(Node);

	Node->NodeGraphWriter = nullptr;

	MarkGraphComponentDirty();

	return;
}

bool ULGPGraphWriter::ProcessPathToNode(ULGPNode* Node)
{
	if (Node && Node->IsNodeValid() && GetGroupMemberData(Node).FlowFieldStep.Num() == 0)
	{
		PathProcessQueue.Add(Node);

		MarkGraphComponentDirty(false);

		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("PathQuest Process"));

		return true;
	}

	return false;
}

bool ULGPGraphWriter::OnThreadWorkStart()
{
	auto ClearData = [&]()
	{
		for (FLGPNodeGroupData& GroupItem : NodeGroupList)
		{
			GroupItem.ClearGroupPath();
		}

		PathProcessQueue.Empty();
		NodeGroupList.Empty();
		CurrentPathProcessNode = nullptr;

		return;
	};

	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Thread Work On"));

	if (RegisteredNode.Num() > 0)
	{
		if (BuildVersion != CurrentBuildVersion)
		{
			ClearData();

			return true;
		}
		else if (PathProcessQueue.Num() > 0)
		{
			while (PathProcessQueue.Num() > 0)
			{
				CurrentPathProcessNode = PathProcessQueue.Pop(false);

				if (CurrentPathProcessNode->GetGroupMemberData().FlowFieldStep.Num() == 0)
				{
					break;
				}
				else
				{
					CurrentPathProcessNode = nullptr;
				}
			} 

			PathProcessQueue.Shrink();

			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("PathQuest"));

			return CurrentPathProcessNode != nullptr;
		}
	}
	else
	{
		ClearData();
	}

	return false;
}

void ULGPGraphWriter::DoThreadWork()
{
	if (CurrentPathProcessNode) // Process Node Flow Field Paths
	{
		ReturnPathData.Empty();

		TSet<ULGPNode*> OpenNodes = { CurrentPathProcessNode };
		TSet<ULGPNode*> CloseNodes;

		ReturnPathData.SetNum(GetGroupData(CurrentPathProcessNode).GroupMember.Num());
		CloseNodes.Reserve(GetGroupData(CurrentPathProcessNode).GroupMember.Num());

		int32 Iteration = 0;

		while (OpenNodes.Num() != 0 && !StopTaskerWork)
		{
			TSet<ULGPNode*> NextNodes;

			for (ULGPNode* CurrentNode : OpenNodes)
			{
				ReturnPathData[CurrentNode->GroupMemberIndex] = Iteration;

				CloseNodes.Add(CurrentNode);

				for (const FLGPNodePathData& PathItem : CurrentNode->GetPathList())
				{
					if (!CloseNodes.Contains(PathItem.EndNode) &&
						PathItem.EndNode->IsNodeValid() && 
						PathItem.EndNode->GetOwingWriter() == this &&
						PathItem.EndNode->GroupID == CurrentPathProcessNode->GroupID)
					{
						NextNodes.Add(PathItem.EndNode);
					}
				}
			}

			OpenNodes = NextNodes;

			Iteration++;
		}
	}
	else if (NodeGroupList.Num() == 0) // Generate Group Data
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
						if (B.SCCID != A.SCCID)
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
				if (MarkNode.Contains(UnMarkNode.Last()) || !UnMarkNode.Last()->IsNodeValid())
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
					if (Path.EndNode->NodeGraphWriter == this && Path.IsWalkable && Path.EndNode->IsActive())
					{
						FLGSNodeGroupProcess* ProcNodeData = MarkNode.Find(Path.EndNode);

						if (ProcNodeData)
						{
							if (StackNode.Contains(Path.EndNode))
							{
								SetLowLink(NodeData, *ProcNodeData);
							}
						}
						else
						{
							AddStackNode(Path.EndNode);

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
						//LocalGroupList[NodeData.SCCID].ValidIdentifyNode();

						// Add To Data List
						NodeGroupList.Add(LocalGroupList[NodeData.SCCID]);

						LocalGroupList[NodeData.SCCID].ClearData();
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
	}

	return;
}

void ULGPGraphWriter::OnThreadWorkDone()
{
	if (!StopTaskerWork)
	{
		if (CurrentPathProcessNode)
		{
			GetGroupMemberData(CurrentPathProcessNode).FlowFieldStep = ReturnPathData;

			CurrentPathProcessNode = nullptr;
		}
		else
		{
			BuildVersion = CurrentBuildVersion;

			for (int32 GroupIndex = 0; GroupIndex < NodeGroupList.Num(); GroupIndex++) // Loop Current Group
			{
				for (int32 GroupMemberIndex = 0; GroupMemberIndex < NodeGroupList[GroupIndex].GroupMember.Num(); GroupMemberIndex++) // Loop Current Process Node From Group
				{
					FLGPGroupMemberData& MemberItem = NodeGroupList[GroupIndex].GroupMember[GroupMemberIndex];

					MemberItem.Member->GroupID = GroupIndex; // Set Group ID For All Member

					MemberItem.Member->GroupMemberIndex = GroupMemberIndex; // Set Group Member Index For All Member
				}

				NodeGroupList[GroupIndex].GenerateGroupPath();
			}
		}
	}
	
	return;
}

FLGPNodeGroupData* ULGPGraphWriter::GetGroupDataPointer(ULGPNode* Node)
{
	if (BuildVersion == CurrentBuildVersion && NodeGroupList.IsValidIndex(Node->GroupID))
	{
		return &NodeGroupList[Node->GroupID];
	}

	return nullptr;
}

FLGPNodeGroupData& ULGPGraphWriter::GetGroupData(ULGPNode* Node)
{
	checkf(Node, TEXT("Node Can't Be Null"));

	checkf(BuildVersion == CurrentBuildVersion, TEXT("Thread Is Running Can't Get Data"));

	checkf(NodeGroupList.IsValidIndex(Node->GroupID), TEXT("Can't Found Group"));

	return NodeGroupList[Node->GroupID];
}

FLGPGroupMemberData& ULGPGraphWriter::GetGroupMemberData(ULGPNode* Node)
{
	checkf(Node, TEXT("Node Can't Be Null"));

	checkf(BuildVersion == CurrentBuildVersion, TEXT("Thread Is Running Can't Get Data"));

	checkf(NodeGroupList.IsValidIndex(Node->GroupID), TEXT("Can't Found Group"));

	return NodeGroupList[Node->GroupID].GroupMember[Node->GroupMemberIndex];
}
