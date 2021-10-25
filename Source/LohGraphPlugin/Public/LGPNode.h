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

	FLGPNodePathData(ULGPNode* Node, const uint8 WeightType, const bool Walkable, const bool Returnable, const bool Trigger) : ConnectNode(Node), PathWeightType(WeightType), IsWalkable(Walkable), IsReturnable(Returnable), IsTrigger(Trigger) {}



	UPROPERTY(VisibleAnywhere) ULGPNode* ConnectNode;

	UPROPERTY(VisibleAnywhere) uint8 PathWeightType = (uint8)0;


	UPROPERTY(VisibleAnywhere) uint8 IsWalkable : 1;

	UPROPERTY(VisibleAnywhere) uint8 IsReturnable : 1;

	UPROPERTY(VisibleAnywhere) uint8 IsTrigger : 1;



	FORCEINLINE bool operator==(ULGPNode* Target) const { return ConnectNode == Target; }

	FORCEINLINE bool operator==(const FLGPNodePathData& Target) const { return ConnectNode == Target.ConnectNode; }



	friend FORCEINLINE uint32 GetTypeHash(const FLGPNodePathData& Other)
	{
		return GetTypeHash(Other.ConnectNode);
	}
};


/**
 * Base Class Of Graph Node 
 * For
 * - Register / Unregister With Graph Writer At ( Begin Play )
 * - Add / Remove Path Function
 */
UCLASS()
class LOHGRAPHPLUGIN_API ULGPNodeBase : public UPrimitiveComponent
{
	GENERATED_BODY()

	friend class ULGPGraphWriter;

protected:

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called when the game end
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:

		FORCEINLINE const TSet<FLGPNodePathData>& GetPathList() const { return PathList; }

	UFUNCTION(BlueprintPure,		Category = "LGPNodeBase | Graph Path")
		FORCEINLINE TArray<FLGPNodePathData> GetPathArray() const { return PathList.Array(); }

	UFUNCTION(BlueprintCallable,	Category = "LGPNodeBase | Graph Path")
		virtual FORCEINLINE bool AddPath	(ULGPNode* Node, const uint8 WeightType, const bool IsReturnable, const bool Trigger);
	
	UFUNCTION(BlueprintCallable,	Category = "LGPNodeBase | Graph Path")
		virtual FORCEINLINE bool RemovePath	(ULGPNode* Node);
	
	UFUNCTION(BlueprintCallable,	Category = "LGPNodeBase | Graph Path")
		virtual FORCEINLINE bool ClearPath	();



	UFUNCTION(BlueprintPure,		Category = "LGPNodeBase | Weight Type")
		FORCEINLINE float GetNodeWeight(ULGPGraphReader* Reader) const;

	UFUNCTION(BlueprintPure,		Category = "LGPNodeBase | Weight Type")
		FORCEINLINE uint8 GetNodeWeightType() const { return NodeWeightType; }

	UFUNCTION(BlueprintCallable,	Category = "LGPNodeBase | Weight Type")
		virtual FORCEINLINE uint8 SetNodeWeightType(const uint8 ID) { return NodeWeightType = ID; }

protected:

	UPROPERTY(VisibleAnywhere) ULGPGraphWriter* NodeGraphWriter = nullptr;

	UPROPERTY(VisibleAnywhere) TSet<FLGPNodePathData> PathList;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, meta = (ExposeOnSpawn = "true")) uint8 NodeWeightType = (uint8)0;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, meta = (ExposeOnSpawn = "true")) uint8 IsTrigger : 1;
};

UCLASS()
class LOHGRAPHPLUGIN_API ULGPNodeCache : public ULGPNodeBase
{
	GENERATED_BODY()

};

UCLASS()
class LOHGRAPHPLUGIN_API ULGPNode : public ULGPNodeCache
{
	GENERATED_BODY()

};
