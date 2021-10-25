// Copyright by Loh Zhi Kang


#include "LGPGraphWriter.h"
#include "LGPNode.h"

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