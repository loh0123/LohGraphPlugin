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

	FLGPNodeGroupData(TArray<ULGPNode*>& Members, TArray<FLGPNodePathData> Paths) : GroupMember(Members), GroupPath(Paths) {}

	UPROPERTY(VisibleAnywhere) TArray<ULGPNode*> GroupMember;

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

	friend class ULGPGraphWriter;

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

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"), Category = "LGPNodeBase | Variable") uint8 NodeWeightType = (uint8)0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = "true"), Category = "LGPNodeBase | Variable") uint8 bIsTrigger : 1;

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

	UPROPERTY(blueprintReadOnly, VisibleAnywhere) ULGPGraphWriter* NodeGraphWriter = nullptr;

	UPROPERTY(blueprintReadOnly, VisibleAnywhere) float PassWeight;

	UPROPERTY(VisibleAnywhere) TMap<ULGPNode*, uint16> NodeSteps;

	UPROPERTY(VisibleAnywhere) uint16 GroupID = 0;

};


/**
 * Top Class Of Graph Node
 * For
 * - Debug Information And Viewer
 */
UCLASS()
class LOHGRAPHPLUGIN_API ULGPNode : public ULGPNodeCache
{
	GENERATED_BODY()

};
