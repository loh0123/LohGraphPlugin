// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "LGPNode.h"
#include "LGPGraphComponentBase.h"
#include "LGPGraphReader.generated.h"


USTRUCT()
struct FLGPAStarHelper
{
	GENERATED_USTRUCT_BODY()

public:
	FLGPAStarHelper() {}

	FLGPAStarHelper(FLGPNodeGroupData* GPointer) : GroupPointer(GPointer) {}

	FLGPAStarHelper(FLGPNodeGroupData* GPointer, ULGPNode* EndNode, const FLGPWeightPrefab& WeightData) :
		GroupPointer(GPointer),
		EndWeight(FVector::Dist(GPointer->IdentifyNode->GetComponentLocation(), EndNode->GetComponentLocation())* WeightData.DistanceToEndMultiply)
	{}

	FLGPAStarHelper(const FSetElementId& PrKey, const FSetElementId& PKey, FLGPNodeGroupData* GPointer, ULGPNode* EndNode, const FLGPWeightPrefab& WeightData) :
		ParentKey(PrKey),
		PathKey(PKey),
		GroupPointer(GPointer),
		EndWeight(FVector::Dist(GPointer->IdentifyNode->GetComponentLocation(), EndNode->GetComponentLocation())* WeightData.DistanceToEndMultiply)
	{}


	FSetElementId ParentKey;

	FSetElementId PathKey;

	FLGPNodeGroupData* GroupPointer = nullptr;

	UPROPERTY() float EndWeight = 0.0f;

	UPROPERTY() float StartWeight = 0.0f;



	FORCEINLINE float GetTotalWeight() const { return EndWeight + StartWeight; }
	
	FORCEINLINE TSet<FLGPGroupPathData>& GetGroupPath() { return GroupPointer->GroupPath; }

	FORCEINLINE bool IsStartNode() const { return !ParentKey.IsValidId(); }


	FORCEINLINE bool operator<(const FLGPAStarHelper& Other) const { return Other.GetTotalWeight() == GetTotalWeight(); }

	FORCEINLINE bool operator==(const FLGPAStarHelper& Other) const { return *Other.GroupPointer == *GroupPointer; }



	friend FORCEINLINE uint32 GetTypeHash(const FLGPAStarHelper& Other)
	{
		return GetTypeHash(Other.GroupPointer->IdentifyNode);
	}
};

/**
 * For Reading Base Data Of Graph Node
 * - Find Graph Node
 * - Get Graph Data
 */
UCLASS(ClassGroup = (LGPGraphComponent), meta = (BlueprintSpawnableComponent))
class LOHGRAPHPLUGIN_API ULGPGraphReader : public ULGPGraphComponentBase
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "LGPGraph | Setting")
		int32 ReaderType = 0;

	UFUNCTION(BlueprintPure, Category = "LGPGraph | Setting")
		FORCEINLINE bool GetWeightData(FLGPWeightPrefab& Data) const { return GetWeightPrefab(ReaderType, Data); }

	UFUNCTION(BlueprintPure, Category = "LGPGraph | Setting")
		FORCEINLINE float GetNodeWeight(ULGPNode* Node) const;

	UFUNCTION(BlueprintPure, Category = "LGPGraph | Setting")
		ULGPNode* GetOverlappingNode(const bool ReturnFirst = false) const;

	UFUNCTION(BlueprintPure, Category = "LGPGraph | Setting")
		ULGPNode* GetOverlappingNodeByLocation(const FVector Point, const bool ReturnFirst = false) const;
};


/**
 * For Navigation And Graph Following
 */
UCLASS(ClassGroup = (LGPGraphComponent), meta = (BlueprintSpawnableComponent))
class LOHGRAPHPLUGIN_API ULGPGraphNavigator : public ULGPGraphReader
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "LGPGraphNavigator")
		FORCEINLINE bool GoToNode(ULGPNode* Node);
	
	UFUNCTION(BlueprintCallable, Category = "LGPGraphNavigator")
		FORCEINLINE bool GoToLocation(const FVector Location);

protected:

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "LGPGraph | Varaible")
		ULGPNode* StartNode = nullptr;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "LGPGraph | Varaible")
		ULGPNode* EndNode = nullptr;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "LGPGraph | Varaible")
		int32 FollowIndex = -1;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "LGPGraph | Varaible")
		bool IsFollowingPath = false;

	// Thread Handle //////////////////////////////////////////////////////////////////

protected:

	virtual FORCEINLINE bool OnThreadWorkStart() override;

	virtual FORCEINLINE void DoThreadWork() override;

	virtual FORCEINLINE void OnThreadWorkDone() override;



	UPROPERTY(VisibleAnywhere, Category = "LGPGraph | Varaible") TArray<FLGPGroupPathData> PathData;

	///////////////////////////////////////////////////////////////////////////////////

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LGPGraphReader | Setting")
		float NavigatorBuffer = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LGPGraphReader | Setting")
		float ReachDistance = 200.0f;
};
