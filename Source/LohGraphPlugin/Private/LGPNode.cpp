// Copyright (c) 2021 Loh Zhi Kang (loh0123@hotmail.com)
//
// Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
// or copy at http://opensource.org/licenses/MIT)


#include "LGPNode.h"
#include "LGPGraphWriter.h"
#include "LGPGraphReader.h"


void FLGPNodeGroupData::ClearGroupPath()
{
	for (FLGPGroupPathData& PathItem : GroupPath)
	{
		FLGPNodeGroupData* GroupPointer = PathItem.EndNode->GetGroupDataPointer();

		if (GroupPointer)
		{
			GroupPointer->GroupPath.Remove(GetIdentifyNode());
		}
	}

	GroupPath.Empty();

	return;
}

void FLGPNodeGroupData::GenerateGroupPath()
{
	for (int32 GroupMemberIndex = 0; GroupMemberIndex < GroupMember.Num(); GroupMemberIndex++) // Loop Current Process Node From Group
	{
		FLGPGroupMemberData& MemberItem = GroupMember[GroupMemberIndex];

		for (const FLGPNodePathData& Path : MemberItem.Member->GetPathList()) // Loop All Path In Node
		{
			const FLGPNodePathData& OtherPath = *Path.EndNode->GetPathList().Find(MemberItem.Member); // Get Other Node Path Data
			FLGPNodeGroupData* OtherGroup = Path.EndNode->GetGroupDataPointer(); // Get Other Node Group Data

			if (Path.IsWalkable && Path.EndNode->IsNodeValid() && !GroupMember.Contains(Path.EndNode) && OtherGroup)
			{
				FLGPGroupPathData* PathPointer = GroupPath.Find(OtherGroup->GetIdentifyNode()); // Already Has Path To This Group

				if (PathPointer)
				{
					FLGPGroupPathData* OtherPathPointer = OtherGroup->GroupPath.Find(GetIdentifyNode()); // Get Other Node Group Path

					OtherPathPointer->AddProxyPath(OtherPath);
					PathPointer->AddProxyPath(Path);
				}
				else
				{
					FLGPGroupPathData NewGroup = FLGPGroupPathData(GetIdentifyNode(), OtherGroup->GetIdentifyNode());
					FLGPGroupPathData OtherNewGroup = FLGPGroupPathData(OtherGroup->GetIdentifyNode(), GetIdentifyNode());

					NewGroup.AddProxyPath(Path);
					OtherNewGroup.AddProxyPath(OtherPath);

					GroupPath.Add(NewGroup);
					OtherGroup->GroupPath.Add(OtherNewGroup);
				}
			}
		}
	}

	return;
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
			PathList.Add(FLGPNodePathData(Cast<ULGPNode>(this), Node, WeightType, true, IsReturnable, Trigger));
			Node->PathList.Add(FLGPNodePathData(Node, Cast<ULGPNode>(this), WeightType, IsReturnable, true, Trigger));
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
		RemovePath(Path.EndNode);
	}

	return LocalPathNode.Num() > 0;
}



void ULGPNodeCache::BeginPlay()
{
	Super::BeginPlay();

	ULGPGraphWriter* FindedWriter = Cast<ULGPGraphWriter>(GetOwner()->GetComponentByClass(ULGPGraphWriter::StaticClass()));

	if (FindedWriter)
	{
		FindedWriter->RegisterGraphNode(Cast<ULGPNode>(this));
	}
}

void ULGPNodeCache::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	ClearPath();

	if (NodeGraphWriter) NodeGraphWriter->UnregisterGraphNode(Cast<ULGPNode>(this));

	return;
}

bool ULGPNodeCache::AddPath(ULGPNode* Node, const uint8 WeightType, const bool IsReturnable, const bool Trigger)
{
	if (NodeGraphWriter) NodeGraphWriter->MarkGraphComponentDirty();

	return Super::AddPath(Node, WeightType, IsReturnable, Trigger);
}

bool ULGPNodeCache::RemovePath(ULGPNode* Node)
{
	if (NodeGraphWriter) NodeGraphWriter->MarkGraphComponentDirty();

	return Super::RemovePath(Node);
}

bool ULGPNodeCache::ClearPath()
{
	if (NodeGraphWriter) NodeGraphWriter->MarkGraphComponentDirty();

	return Super::ClearPath();
}

void ULGPNodeCache::SetActive(bool bNewActive, bool bReset)
{
	if (NodeGraphWriter) NodeGraphWriter->MarkGraphComponentDirty(); 

	Super::SetActive(bNewActive, bReset); 

	return;
}

float ULGPNodeCache::GetPassWeight()
{
	if (IsPassWeightDirty)
	{
		PassWeight = 0.0f;

		for (ULGPGraphNavigator* Reader : PassWeightReader)
		{
			PassWeight += Reader->NavigatorWeight;
		}
	}

	return PassWeight;
}

FLGPNodeGroupData* ULGPNodeCache::GetGroupDataPointer()
{
	return NodeGraphWriter->GetGroupDataPointer(Cast<ULGPNode>(this));
}

FLGPNodeGroupData& ULGPNodeCache::GetGroupData()
{
	return NodeGraphWriter->GetGroupData(Cast<ULGPNode>(this));
}

FLGPGroupMemberData& ULGPNodeCache::GetGroupMemberData()
{
	return NodeGraphWriter->GetGroupMemberData(Cast<ULGPNode>(this));
}

int32 ULGPNodeCache::GetFlowFieldStep(ULGPNode* Node)
{
	if (Node && Node->GetOwingWriter() == GetOwingWriter() && Node->GroupID == GroupID && NodeGraphWriter->GetGroupMemberData(Cast<ULGPNode>(this)).FlowFieldStep.Num() > 0)
	{
		return NodeGraphWriter->GetGroupMemberData(Cast<ULGPNode>(this)).FlowFieldStep[Node->GroupMemberIndex];
	}

	return INDEX_NONE;
}

void ULGPNodeCache::RequestPath()
{
	NodeGraphWriter->ProcessPathToNode(Cast<ULGPNode>(this));

	return;
}

bool ULGPNodeCache::IsPathGenerating()
{
	return NodeGraphWriter->IsPathGenerating(Cast<ULGPNode>(this));
}


ULGPNode::ULGPNode()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetActive(true);

	SetCollisionEnabled(ECollisionEnabled::QueryOnly);

	SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);

	SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

	return;
}


void ULGPNode::BeginPlay()
{
	Super::BeginPlay();

	TSet<UPrimitiveComponent*> Comps;

	GetOverlappingComponents(Comps);

	for (UPrimitiveComponent* Item : Comps)
	{
		AddPassWeight(Cast<ULGPGraphNavigator>(Item));
	}

	return;
}


// Debug Handle 
///////////////////////////////////////////////////////////////////////

FPrimitiveSceneProxy* ULGPNode::CreateSceneProxy()
{
	return new FGraphNodeProxy(this);
}

FBoxSphereBounds ULGPNode::CalcBounds(const FTransform& LocalToWorld) const
{
	return NodeCollision->AggGeom.CalcAABB(LocalToWorld);
}

///////////////////////////////////////////////////////////////////////


// Collision Handle
///////////////////////////////////////////////////////////////////////

UBodySetup* ULGPNode::GetBodySetup()
{
	CreateCollisionData();
	
	return NodeCollision;
}

void ULGPNode::SetCollisionVertex(const TArray<FVector>& Vertexs, const TArray<int32>& Indexs)
{
	CreateCollisionData();

	if (Vertexs.Num() >= 4)
	{
		// New element
		FKConvexElem NewConvexElem;
		// Copy in vertex info
		NewConvexElem.VertexData = Vertexs;
		NewConvexElem.IndexData = Indexs;
		// Update bounding box
		NewConvexElem.ElemBox = FBox(NewConvexElem.VertexData);
		// Override collision vertex
		NodeCollision->AggGeom.ConvexElems = { NewConvexElem };
	}
	else
	{
		// Override collision vertex
		NodeCollision->AggGeom.ConvexElems.Empty();
	}

	// Refresh collision
	UpdateCollisionData();

	return;
}

void ULGPNode::SetCollisionBox(const TArray<FTransform>& Boxs)
{
	CreateCollisionData();

	// Empty collision Box
	NodeCollision->AggGeom.BoxElems.Empty(Boxs.Num());

	for (const FTransform& Item : Boxs)
	{
		if (Item.IsValid() && !Item.GetScale3D().IsZero())
		{
			// New element
			FKBoxElem NewBoxElem(Item.GetScale3D().X, Item.GetScale3D().Y, Item.GetScale3D().Z);
			// Copy in Transform info
			NewBoxElem.SetTransform(Item);
			// Add collision Box
			NodeCollision->AggGeom.BoxElems.Add(NewBoxElem);
		}
		else
		{
			// Empty collision vertex
			NodeCollision->AggGeom.ConvexElems.Empty();
		}
	}

	// Refresh collision
	UpdateCollisionData();

	return;
}

void ULGPNode::SetCollisionSphere(const TArray<FVector4>& Spheres)
{
	CreateCollisionData();

	// Empty collision Sphere
	NodeCollision->AggGeom.SphereElems.Empty(Spheres.Num());

	for (const FVector4& Item : Spheres)
	{
		if (Item.W > 0.0f)
		{
			// New element
			FKSphereElem NewSphereElem(Item.W);
			// Copy in Transform info
			NewSphereElem.Center = Item;
			// Add collision Sphere
			NodeCollision->AggGeom.SphereElems.Add(NewSphereElem);
		}
		else
		{
			// Empty collision Sphere
			NodeCollision->AggGeom.SphereElems.Empty(Spheres.Num());
		}
	}

	// Refresh collision
	UpdateCollisionData();

	return;
}

void ULGPNode::ClearCollisionVertex()
{
	NodeCollision->AggGeom.EmptyElements();

	UpdateCollisionData();

	return;
}

void ULGPNode::CreateCollisionData()
{
	if (NodeCollision == nullptr)
	{
		NodeCollision = NewObject<UBodySetup>(this, NAME_None, (IsTemplate() ? RF_Public | RF_ArchetypeObject : RF_NoFlags));
		NodeCollision->BodySetupGuid = FGuid::NewGuid();

		NodeCollision->bGenerateMirroredCollision = false;
		NodeCollision->bDoubleSidedGeometry = true;
		NodeCollision->CollisionTraceFlag = CTF_UseDefault;
	}
}

void ULGPNode::UpdateCollisionData()
{
	// Ensure Collision Data has been created
	CreateCollisionData();

	NodeCollision->InvalidatePhysicsData();
	NodeCollision->CreatePhysicsMeshes();
	RecreatePhysicsState(); 

	return;
}

///////////////////////////////////////////////////////////////////////
