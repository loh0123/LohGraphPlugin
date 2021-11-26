// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "LGPNode.generated.h"

class ULGPGraphReader;
class ULGPGraphWriter;

class FGraphNodeProxy;


USTRUCT(BlueprintType)
struct FLGPNodePathData
{
	GENERATED_USTRUCT_BODY()

public:

	FLGPNodePathData() {}

	FLGPNodePathData(ULGPNode* E) : EndNode(E) {}

	FLGPNodePathData(ULGPNode* S, ULGPNode* E) : StartNode(S), EndNode(E) {}

	FLGPNodePathData(ULGPNode* S, ULGPNode* E, const uint8 WeightType, const bool Walkable, const bool Returnable, const bool Trigger) : StartNode(S), EndNode(E), PathWeightType(WeightType), IsWalkable(Walkable), IsReturnable(Returnable), bIsTrigger(Trigger) {}


	UPROPERTY(VisibleAnywhere) ULGPNode* StartNode;

	UPROPERTY(VisibleAnywhere) ULGPNode* EndNode;

	UPROPERTY(VisibleAnywhere) uint8 PathWeightType = uint8(0);


	UPROPERTY(VisibleAnywhere) uint8 IsWalkable : 1;

	UPROPERTY(VisibleAnywhere) uint8 IsReturnable : 1;

	UPROPERTY(VisibleAnywhere) uint8 bIsTrigger : 1;



	FORCEINLINE bool operator==(ULGPNode* Target) const { return EndNode == Target; }

	FORCEINLINE bool operator==(const FLGPNodePathData& Target) const { return EndNode == Target.EndNode; }



	friend FORCEINLINE uint32 GetTypeHash(const FLGPNodePathData& Other)
	{
		return GetTypeHash(Other.EndNode);
	}
};

USTRUCT(BlueprintType)
struct FLGPGroupPathData
{
	GENERATED_USTRUCT_BODY()

public:

	FLGPGroupPathData() {}

	FLGPGroupPathData(ULGPNode* E) : EndNode(E) {}

	FLGPGroupPathData(ULGPNode* S, ULGPNode* E) : StartNode(S), EndNode(E) {}


	UPROPERTY(VisibleAnywhere) ULGPNode* StartNode;

	UPROPERTY(VisibleAnywhere) ULGPNode* EndNode;

	UPROPERTY(VisibleAnywhere) uint8 IsWalkable : 1;

	UPROPERTY(VisibleAnywhere) uint8 IsReturnable : 1;

protected:

	UPROPERTY(VisibleAnywhere) TArray<FLGPNodePathData> ProxyPath;



public:

	FORCEINLINE const TArray<FLGPNodePathData>& GetProxyPath() { return ProxyPath; }

	FORCEINLINE void AddProxyPath(const FLGPNodePathData& Data)
	{
		ProxyPath.Add(Data);

		IsWalkable = Data.IsWalkable ? true : IsWalkable;
		IsReturnable = Data.IsReturnable ? true : IsReturnable;

		return;
	}


	FORCEINLINE bool operator==(ULGPNode* Target) const { return EndNode == Target; }

	FORCEINLINE bool operator==(const FLGPGroupPathData& Target) const { return EndNode == Target.EndNode; }


	friend FORCEINLINE uint32 GetTypeHash(const FLGPGroupPathData& Other)
	{
		return GetTypeHash(Other.EndNode);
	}
};

USTRUCT(BlueprintType)
struct FLGPNodeGroupData
{
	GENERATED_USTRUCT_BODY()

public:

	FLGPNodeGroupData() {}

	FLGPNodeGroupData(const TSet<ULGPNode*>& Members) : IdentifyNode(Members.Array()[0]), GroupMember(Members) {}

	//FLGPNodeGroupData(const TArray<ULGPNode*>& Members, const TArray<FLGPNodePathData>& Paths) : IdentifyNode(Members[0]), GroupMember(Members), GroupPathRaw(Paths) {}

	UPROPERTY(VisibleAnywhere) ULGPNode* IdentifyNode;

	UPROPERTY(VisibleAnywhere) TSet<ULGPNode*> GroupMember;

	UPROPERTY(VisibleAnywhere) TSet<FLGPGroupPathData> GroupPath;




	FORCEINLINE void ValidIdentifyNode() { IdentifyNode = GroupMember.Array()[0]; return; }

	FORCEINLINE void ClearData() { IdentifyNode = nullptr; GroupMember.Empty(); GroupPath.Empty(); return; }

	// FORCEINLINE float GetGroupWeight(ULGPGraphReader* Reader) const;



	FORCEINLINE bool operator==(FLGPNodeGroupData& Other) const { return IdentifyNode == Other.IdentifyNode; }

	friend FORCEINLINE uint32 GetTypeHash(const FLGPNodeGroupData& Other)
	{
		return GetTypeHash(Other.IdentifyNode);
	}
};

/**
 * Base Class Of Graph Node 
 * For
 * - Register / Unregister With Graph Writer At ( Begin Play )
 * - Add / Remove Path Function
 * - All Base Spawn Variable
 */
UCLASS(HideDropdown)
class LOHGRAPHPLUGIN_API ULGPNodeBase : public UPrimitiveComponent
{
	GENERATED_BODY()

	//friend class ULGPGraphWriter;

public:

	FORCEINLINE bool IsNodeValid() const { return IsActive() && !IsPendingKill(); }

	// Setup Node On Construst
	FORCEINLINE void SetupNode(TSet<FLGPNodePathData>& Paths, const bool WeightType, const bool IsTrigger);

	FORCEINLINE const TSet<FLGPNodePathData>& GetPathList() const { return PathList; }

	UFUNCTION(BlueprintPure,		Category = "LGPNodeBase | Graph Path")
		FORCEINLINE TArray<FLGPNodePathData> GetPathArray() const { return PathList.Array(); }


	UFUNCTION(BlueprintCallable,	Category = "LGPNodeBase | Graph Path")
		virtual FORCEINLINE bool AddPath	(ULGPNode* Node, const uint8 WeightType, const bool IsReturnable, const bool Trigger);
	
	UFUNCTION(BlueprintCallable,	Category = "LGPNodeBase | Graph Path")
		virtual FORCEINLINE bool RemovePath	(ULGPNode* Node);
	
	UFUNCTION(BlueprintCallable,	Category = "LGPNodeBase | Graph Path")
		virtual FORCEINLINE bool ClearPath	();


public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"), Category = "LGPNodeBase | Variable") uint8 bIsTrigger : 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"), Category = "LGPNodeBase | Variable") uint8 NodeWeightType = uint8(0);

protected:

	UPROPERTY(VisibleDefaultsOnly) TSet<FLGPNodePathData> PathList;

};


/**
 * Cache Class Of Graph Node
 * For
 * - Storing All Writer Cook Data
 * - Handle All Writer Send Event
 */
UCLASS(HideDropdown)
class LOHGRAPHPLUGIN_API ULGPNodeCache : public ULGPNodeBase
{
	GENERATED_BODY()

		friend class ULGPGraphWriter;

protected:

	// Called when the game starts
	virtual void BeginPlay() override;  // Register Writer

	// Called when the game end
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override; // Unregister Writer


public:


	virtual FORCEINLINE bool AddPath(ULGPNode* Node, const uint8 WeightType, const bool IsReturnable, const bool Trigger) override;

	virtual FORCEINLINE bool RemovePath(ULGPNode* Node) override;

	virtual FORCEINLINE bool ClearPath() override;



	//FORCEINLINE void AddPassWeight(ULGPGraphReader* Reader);

	FORCEINLINE FLGPNodeGroupData* GetGroupDataPointer(); // Warning Cant Change During Operation Or Will Cause Error

	FORCEINLINE FLGPNodeGroupData& GetGroupData(); // Warning Cant Change During Operation Or Will Cause Error

	FORCEINLINE ULGPGraphWriter* GetOwingWriter() const { return NodeGraphWriter; }

	FORCEINLINE float GetPassWeight() const { return PassWeight; }

	FORCEINLINE bool GetNodeStep(ULGPNode* Node, uint16& Value) const {

		const uint16* ValuePointer = NodeSteps.Find(Node);

		if (ValuePointer)
		{
			Value = *ValuePointer;

			return true;
		}

		return false;
	}

protected:

	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly) ULGPGraphWriter* NodeGraphWriter = nullptr;

	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly) float PassWeight;

	UPROPERTY(VisibleDefaultsOnly) TMap<ULGPNode*, uint16> NodeSteps;

	UPROPERTY(VisibleDefaultsOnly) int32 GroupID = INDEX_NONE;

};



/**
 * Top Class Of Graph Node
 * For
 * - Debug Information And Viewer
 */
UCLASS(ClassGroup = (LGPGraphComponent), meta = (BlueprintSpawnableComponent), HideDropdown)
class LOHGRAPHPLUGIN_API ULGPNode : public ULGPNodeCache
{
	GENERATED_BODY()


public:

	ULGPNode();

// Debug Handle 
///////////////////////////////////////////////////////////////////////

protected:

	//~ Begin UPrimitiveComponent Interface.
	virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
	//~ End UPrimitiveComponent Interface.

	//~ Begin USceneComponent Interface
	virtual FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override;
	//~ End USceneComponent Interface

///////////////////////////////////////////////////////////////////////

// Collision Handle
///////////////////////////////////////////////////////////////////////
private:
	/**		//// Override Collision Data ////		 */
	virtual UBodySetup* GetBodySetup() override;

	/** Collision data */
	UPROPERTY(Instanced)
		class UBodySetup* NodeCollision;

	UPROPERTY()
		FBoxSphereBounds CollisionBound;

	/**		////////		Collision Function				////////		*/
public:

	UFUNCTION(BlueprintCallable, Category = "LGSNodeBase | Collision")
		void SetCollisionVertex(const TArray<FVector>& Vertexs, const TArray<int32>& Indexs);

	UFUNCTION(BlueprintCallable, Category = "LGSNodeBase | Collision")
		void SetCollisionBox(const TArray<FTransform>& Boxs);

	UFUNCTION(BlueprintCallable, Category = "LGSNodeBase | Collision")
		void SetCollisionSphere(const TArray<FVector4>& Spheres);

	UFUNCTION(BlueprintCallable, Category = "LGSNodeBase | Collision")
		void ClearCollisionVertex();

private:

	FORCEINLINE void CreateCollisionData();

	FORCEINLINE void UpdateCollisionData();

	///////////////////////////////////////////////////////////////////////

	friend class FGraphNodeProxy;
};


class FGraphNodeProxy final : public FPrimitiveSceneProxy
{
public:
	SIZE_T GetTypeHash() const override
	{
		static size_t UniquePointer;
		return reinterpret_cast<size_t>(&UniquePointer);
	}

	FGraphNodeProxy(const ULGPNode* InComponent)
		: FPrimitiveSceneProxy(InComponent)
		, CollisionInfo(InComponent->NodeCollision)
		, WorldPosition(InComponent->GetComponentTransform())
		, IsVisible(true)
	{
		bWillEverBeLit = false;
	}

	virtual void GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& Collector) const override
	{
		if (IsVisible && CollisionInfo)
		{
			FColoredMaterialRenderProxy* WireframeMaterialInstance = new FColoredMaterialRenderProxy(
				GEngine->WireframeMaterial ? GEngine->WireframeMaterial->GetRenderProxy() : NULL,
				FLinearColor(0, 0.5f, 1.f)
			);

			Collector.RegisterOneFrameMaterialProxy(WireframeMaterialInstance);

			for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
			{
				if (VisibilityMap & (1 << ViewIndex))
				{
					CollisionInfo->AggGeom.GetAggGeom(WorldPosition, FColor::Yellow, WireframeMaterialInstance, false, false, false, ViewIndex, Collector);
				}
			}
		}
	}

	virtual FPrimitiveViewRelevance GetViewRelevance(const FSceneView* View) const override
	{
		FPrimitiveViewRelevance Result;
		Result.bDrawRelevance = IsShown(View);
		Result.bDynamicRelevance = true;
		Result.bShadowRelevance = false;
		Result.bEditorPrimitiveRelevance = UseEditorCompositing(View);

		Result.bRenderInMainPass = ShouldRenderInMainPass();
		Result.bVelocityRelevance = false;
		return Result;
	}

	virtual uint32 GetMemoryFootprint(void) const override { return(sizeof(*this) + GetAllocatedSize()); }

	uint32 GetAllocatedSize(void) const { return(FPrimitiveSceneProxy::GetAllocatedSize()); }

private:
	UBodySetup* CollisionInfo;
	const FTransform& WorldPosition;
	const bool IsVisible;
};
