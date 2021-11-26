// Copyright by Loh Zhi Kang


#include "LGPNode.h"
#include "LGPGraphWriter.h"
#include "LGPGraphReader.h"


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
	if (NodeGraphWriter) NodeGraphWriter->MarkGraphWriterDirty();

	return Super::AddPath(Node, WeightType, IsReturnable, Trigger);
}

bool ULGPNodeCache::RemovePath(ULGPNode* Node)
{
	if (NodeGraphWriter) NodeGraphWriter->MarkGraphWriterDirty();

	return Super::RemovePath(Node);
}

bool ULGPNodeCache::ClearPath()
{
	if (NodeGraphWriter) NodeGraphWriter->MarkGraphWriterDirty();

	return Super::ClearPath();
}

FLGPNodeGroupData* ULGPNodeCache::GetGroupDataPointer()
{
	return NodeGraphWriter->GetGroupDataPointer(Cast<ULGPNode>(this));
}

FLGPNodeGroupData& ULGPNodeCache::GetGroupData()
{
	return NodeGraphWriter->GetGroupData(Cast<ULGPNode>(this));
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


// Debug Handle 
///////////////////////////////////////////////////////////////////////

FPrimitiveSceneProxy* ULGPNode::CreateSceneProxy()
{
	return new FGraphNodeProxy(this);
}

FBoxSphereBounds ULGPNode::CalcBounds(const FTransform& LocalToWorld) const
{
	return CollisionBound.TransformBy(LocalToWorld);
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

	CollisionBound = FBoxSphereBounds(NodeCollision->AggGeom.CalcAABB(FTransform()));

	return;
}

///////////////////////////////////////////////////////////////////////
