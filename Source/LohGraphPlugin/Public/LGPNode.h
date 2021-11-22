// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "LGPNode.generated.h"

class ULGPGraphReader;
class ULGPGraphWriter;


USTRUCT(BlueprintType)
struct FLGPNodePathData
{
	GENERATED_USTRUCT_BODY()

public:

	FLGPNodePathData() {}

	FLGPNodePathData(ULGPNode* Node) : ConnectNode(Node) {}

	FLGPNodePathData(ULGPNode* Node, const uint8 WeightType, const bool Walkable, const bool Returnable, const bool Trigger) : ConnectNode(Node), PathWeightType(WeightType), IsWalkable(Walkable), IsReturnable(Returnable), bIsTrigger(Trigger) {}



	UPROPERTY(VisibleAnywhere) ULGPNode* ConnectNode;

	UPROPERTY(VisibleAnywhere) uint8 PathWeightType = uint8(0);


	UPROPERTY(VisibleAnywhere) uint8 IsWalkable : 1;

	UPROPERTY(VisibleAnywhere) uint8 IsReturnable : 1;

	UPROPERTY(VisibleAnywhere) uint8 bIsTrigger : 1;



	FORCEINLINE bool operator==(ULGPNode* Target) const { return ConnectNode == Target; }

	FORCEINLINE bool operator==(const FLGPNodePathData& Target) const { return ConnectNode == Target.ConnectNode; }



	friend FORCEINLINE uint32 GetTypeHash(const FLGPNodePathData& Other)
	{
		return GetTypeHash(Other.ConnectNode);
	}
};

USTRUCT(BlueprintType)
struct FLGPNodeGroupData
{
	GENERATED_USTRUCT_BODY()

public:

	FLGPNodeGroupData() {}

	FLGPNodeGroupData(const TSet<ULGPNode*>& Members) : GroupMember(Members) {}

	FLGPNodeGroupData(const TArray<ULGPNode*>& Members, const TArray<FLGPNodePathData>& Paths) : GroupMember(Members), GroupPath(Paths) {}

	UPROPERTY(VisibleAnywhere) TSet<ULGPNode*> GroupMember;

	UPROPERTY(VisibleAnywhere) TArray<FLGPNodePathData> GroupPath;

	// FORCEINLINE float GetGroupWeight(ULGPGraphReader* Reader) const;
};

/**
 * Base Class Of Graph Node 
 * For
 * - Register / Unregister With Graph Writer At ( Begin Play )
 * - Add / Remove Path Function
 * - All Base Spawn Variable
 */
UCLASS()
class LOHGRAPHPLUGIN_API ULGPNodeBase : public UPrimitiveComponent
{
	GENERATED_BODY()

	//friend class ULGPGraphWriter;

public:

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

	UPROPERTY(VisibleAnywhere) TSet<FLGPNodePathData> PathList;

};


/**
 * Cache Class Of Graph Node
 * For
 * - Storing All Writer Cook Data
 * - Handle All Writer Send Event
 */
UCLASS()
class LOHGRAPHPLUGIN_API ULGPNodeCache : public ULGPNodeBase
{
	GENERATED_BODY()

		friend class ULGPGraphWriter;

protected:

	// Called when the game starts
	virtual void BeginPlay() override;  // Register Writer

	// Called when the game end
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override; // Unregister Writer


	virtual FORCEINLINE bool AddPath(ULGPNode* Node, const uint8 WeightType, const bool IsReturnable, const bool Trigger) override;

	virtual FORCEINLINE bool RemovePath(ULGPNode* Node) override;

	virtual FORCEINLINE bool ClearPath() override;



	//FORCEINLINE void AddPassWeight(ULGPGraphReader* Reader);



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

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere) ULGPGraphWriter* NodeGraphWriter = nullptr;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere) float PassWeight;

	UPROPERTY(VisibleAnywhere) TMap<ULGPNode*, uint16> NodeSteps;

	UPROPERTY(VisibleAnywhere) int32 GroupID = INDEX_NONE;

};


/**
 * Top Class Of Graph Node
 * For
 * - Debug Information And Viewer
 */
UCLASS(ClassGroup = (LGPGraphComponent), meta = (BlueprintSpawnableComponent))
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
