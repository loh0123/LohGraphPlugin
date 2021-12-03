// Copyright (c) 2021 Loh Zhi Kang (loh0123@hotmail.com)
//
// Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
// or copy at http://opensource.org/licenses/MIT)

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
		EndWeight(FVector::Dist(GPointer->GetIdentifyNode()->GetComponentLocation(), EndNode->GetComponentLocation())* WeightData.DistanceToEndMultiply)
	{}

	FLGPAStarHelper(const FSetElementId& PrKey, const FSetElementId& PKey, FLGPNodeGroupData* GPointer, ULGPNode* EndNode, const FLGPWeightPrefab& WeightData) :
		ParentKey(PrKey),
		PathKey(PKey),
		GroupPointer(GPointer),
		EndWeight(FVector::Dist(GPointer->GetIdentifyNode()->GetComponentLocation(), EndNode->GetComponentLocation())* WeightData.DistanceToEndMultiply)
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
		return GetTypeHash(Other.GroupPointer->GetIdentifyNode());
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


	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPathReceiveSignature, const TArray<FLGPGroupPathData>&, Path);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBeginFollowingPathSignature);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndFollowingPathSignature);

	//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParam(FOnPathAlertSignature, ULGPNode*, Node, const FLGPGroupPathData&, Path);

public:

	// Sets default values for this component's properties
	ULGPGraphNavigator();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "LGPGraphNavigator")
		FORCEINLINE bool GoToNode(ULGPNode* Node);
	
	UFUNCTION(BlueprintCallable, Category = "LGPGraphNavigator")
		FORCEINLINE bool GoToLocation(const FVector Location);

	UFUNCTION(BlueprintCallable, Category = "LGPGraphNavigator")
		FORCEINLINE bool GoToActor(AActor* Node);

public:

// Read Function /////////////////////////////////////////////////////////////

	UFUNCTION(BlueprintPure, Category = "LGPGraphNavigator")
		FORCEINLINE FVector GetFollowingLocation() 
		{ 
			if (FollowingNode)
			{
				if (FollowingNode == EndNode && FollowingTarget)
				{
					return FollowingTarget->GetActorLocation();
				}

				return FollowingNode->GetComponentLocation();
			}

			return FVector(-1.0f);
		}

	UFUNCTION(BlueprintPure, Category = "LGPGraphNavigator")
		FORCEINLINE AActor* GetFollowingTarget() { return FollowingTarget; }

	UFUNCTION(BlueprintPure, Category = "LGPGraphNavigator")
		FORCEINLINE ULGPNode* GetFollowingNode() { return FollowingNode; }

	UFUNCTION(BlueprintPure, Category = "LGPGraphNavigator")
		FORCEINLINE ULGPNode* GetLocalNode() { return LocalNode; }

	UFUNCTION(BlueprintPure, Category = "LGPGraphNavigator")
		FORCEINLINE ULGPNode* GetStartNode() { return StartNode; }

	UFUNCTION(BlueprintPure, Category = "LGPGraphNavigator")
		FORCEINLINE ULGPNode* GetEndNode() { return EndNode; }

	UFUNCTION(BlueprintPure, Category = "LGPGraphNavigator")
		FORCEINLINE int32 GetFollowIndex() { return FollowIndex; }

	UFUNCTION(BlueprintPure, Category = "LGPGraphNavigator")
		FORCEINLINE bool GetIsFollowingPath() { return IsFollowingPath; }

	UFUNCTION(BlueprintPure, Category = "LGPGraphNavigator")
		FORCEINLINE bool GetIsManualMoving() { return IsFollowingPath; }

///////////////////////////////////////////////////////////////////////////////

	UFUNCTION(BlueprintCallable, Category = "LGPGraphNavigator")
		FORCEINLINE bool NextFollowingNode();

	UFUNCTION(BlueprintCallable, Category = "LGPGraphNavigator")
		FORCEINLINE bool StopFollowingNode(const bool ClearData = false);
	
	UFUNCTION(BlueprintCallable, Category = "LGPGraphNavigator")
		FORCEINLINE bool ContinualFollowingNode();

private:

	FORCEINLINE void BeginPathFollowing();

	FORCEINLINE ULGPNode* GetNextFollowingNode(ULGPNode* OverlapingNode);

public:

	UPROPERTY(BlueprintAssignable, Category = "LGPGraphNavigator | Event")
		FOnPathReceiveSignature OnPathReceive;


	UPROPERTY(BlueprintAssignable, Category = "LGPGraphNavigator | Event")
		FOnBeginFollowingPathSignature OnBeginFollowingPath;


	UPROPERTY(BlueprintAssignable, Category = "LGPGraphNavigator | Event")
		FOnEndFollowingPathSignature OnEndFollowingPath;

protected:

	UPROPERTY(BlueprintGetter = GetFollowingTarget, VisibleAnywhere, Category = "LGPGraphNavigator | Varaible")
		AActor* FollowingTarget = nullptr;

	UPROPERTY(BlueprintGetter = GetFollowingNode, VisibleAnywhere, Category = "LGPGraphNavigator | Varaible")
		ULGPNode* FollowingNode = nullptr;

	UPROPERTY(BlueprintGetter = GetLocalNode, VisibleAnywhere, Category = "LGPGraphNavigator | Varaible")
		ULGPNode* LocalNode = nullptr;

	UPROPERTY(BlueprintGetter = GetStartNode, VisibleAnywhere, Category = "LGPGraphNavigator | Varaible")
		ULGPNode* StartNode = nullptr;

	UPROPERTY(BlueprintGetter = GetEndNode, VisibleAnywhere, Category = "LGPGraphNavigator | Varaible")
		ULGPNode* EndNode = nullptr;

	UPROPERTY(BlueprintGetter = GetFollowIndex, VisibleAnywhere, Category = "LGPGraphNavigator | Varaible")
		int32 FollowIndex = -1;

	UPROPERTY(BlueprintGetter = GetIsFollowingPath, VisibleAnywhere, Category = "LGPGraphNavigator | Varaible")
		bool IsFollowingPath = false;

	UPROPERTY(BlueprintGetter = GetIsManualMoving, EditAnywhere, Category = "LGPGraphNavigator | Varaible")
		bool IsManualMoving = false;

	UPROPERTY() uint8 CurrentFrameDelay = 0;

	// Thread Handle //////////////////////////////////////////////////////////////////

protected:

	virtual FORCEINLINE bool OnThreadWorkStart() override;

	virtual FORCEINLINE void DoThreadWork() override;

	virtual FORCEINLINE void OnThreadWorkDone() override;



	UPROPERTY(VisibleAnywhere, Category = "LGPGraphNavigator | Varaible") TArray<FLGPGroupPathData> PathData;

	///////////////////////////////////////////////////////////////////////////////////

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LGPGraphNavigator | Setting")
		float NavigatorWeight = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LGPGraphNavigator | Setting")
		float ReachDistance = 200.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LGPGraphNavigator | Setting")
		float MovingSpeed = 300.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LGPGraphNavigator | Setting")
		uint8 FrameDelay = uint8(10);
};
