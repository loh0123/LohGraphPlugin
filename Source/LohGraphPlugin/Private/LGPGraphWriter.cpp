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

	for (ULGPNode* Node : RegisteredNode)
	{
		UnregisterGraphNode(Node);
	}
}

void ULGPGraphWriter::RegisterGraphNode(ULGPNode* Node)
{
	RegisteredNode.Add(Node);

	Node->NodeGraphWriter = this;

	return;
}

void ULGPGraphWriter::UnregisterGraphNode(ULGPNode* Node)
{
	RegisteredNode.Remove(Node);

	Node->NodeGraphWriter = nullptr;

	return;
}