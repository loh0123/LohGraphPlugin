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

	FLGPAStarHelper(ULGPNode* Node) : IdentifyNode(Node) {}

	FLGPAStarHelper(ULGPNode* From, ULGPNode* Node, ULGPNode* EndNode, const FLGPWeightPrefab& WeightData) :
		FromNode(From),
		IdentifyNode(Node),
		EndWeight(FVector::Dist(Node->GetComponentLocation(), EndNode->GetComponentLocation())* WeightData.DistanceToEndMultiply)
	{}


	UPROPERTY() ULGPNode* FromNode = nullptr;

	UPROPERTY() ULGPNode* IdentifyNode = nullptr;

	UPROPERTY() float EndWeight = 0.0f;

	UPROPERTY() float StartWeight = 0.0f;


	FORCEINLINE bool UpdateStartWeight(const FLGPAStarHelper& Data, const FLGPWeightPrefab& WeightData)
	{ 
		float NewWeight = Data.StartWeight + (FVector::Dist(Data.IdentifyNode->GetComponentLocation(), IdentifyNode->GetComponentLocation()) * WeightData.DistanceToEndMultiply);

		if (NewWeight < StartWeight)
		{
			StartWeight = NewWeight;
			FromNode = Data.IdentifyNode;

			return true;
		}

		return false;
	}


	FORCEINLINE float GetTotalWeight() const { return EndWeight + StartWeight; }
	
	FORCEINLINE TSet<FLGPGroupPathData>& GetGroupPath() { return IdentifyNode->GetGroupData().GroupPath; }

	FORCEINLINE bool IsStartNode() const { return FromNode == nullptr; }


	FORCEINLINE bool operator<(const FLGPAStarHelper& Other) const { return Other.GetTotalWeight() == GetTotalWeight(); }

	FORCEINLINE bool operator==(const FLGPAStarHelper& Other) const { return Other.IdentifyNode == IdentifyNode; }



	friend FORCEINLINE uint32 GetTypeHash(const FLGPAStarHelper& Other)
	{
		return GetTypeHash(Other.IdentifyNode);
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

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "LGPGraphReader | Setting")
		int32 ReaderType = 0;

	UFUNCTION(BlueprintPure, Category = "LGPGraphReader | Variable")
		FORCEINLINE bool GetWeightData(FLGPWeightPrefab& Data) const { return GetWeightPrefab(ReaderType, Data); }

	UFUNCTION(BlueprintPure, Category = "LGPGraphReader | Variable")
		FORCEINLINE float GetNodeWeight(ULGPNode* Node) const;

	UFUNCTION(BlueprintPure, Category = "LGPGraphReader | Finder")
		ULGPNode* GetOverlappingNode(const bool ReturnFirst = false) const;

	UFUNCTION(BlueprintPure, Category = "LGPGraphReader | Finder")
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

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "LGPGraphReader | Variable")
		ULGPNode* StartNode = nullptr;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "LGPGraphReader | Variable")
		ULGPNode* EndNode = nullptr;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "LGPGraphReader | Variable")
		int32 FollowIndex = -1;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "LGPGraphReader | Variable")
		bool IsFollowingPath = false;

	// Thread Handle //////////////////////////////////////////////////////////////////

protected:

	virtual FORCEINLINE bool OnThreadWorkStart() override;

	virtual FORCEINLINE void DoThreadWork() override;

	//virtual FORCEINLINE void OnThreadWorkDone() override;



	UPROPERTY(VisibleAnywhere) TArray<FLGPGroupPathData> PathData;

	///////////////////////////////////////////////////////////////////////////////////

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LGPGraphReader | Setting")
		float NavigatorBuffer = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LGPGraphReader | Setting")
		float ReachDistance = 200.0f;
};
