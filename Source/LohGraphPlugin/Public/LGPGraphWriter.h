// Copyright (c) 2021 Loh Zhi Kang (loh0123@hotmail.com)
//
// Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
// or copy at http://opensource.org/licenses/MIT)

#pragma once

#include "CoreMinimal.h"
#include "LGPNode.h"
#include "LGPGraphComponentBase.h"
#include "LGPGraphWriter.generated.h"


class GraphWriterTasker;

USTRUCT(BlueprintType)
struct FLGSNodeGroupProcess
{
	GENERATED_USTRUCT_BODY()

public:

	FLGSNodeGroupProcess() {}

	FLGSNodeGroupProcess(const int32 ID) : LowLinkID(ID), LowLinkValue(ID) {}

	UPROPERTY()
		int32 LowLinkID;

	UPROPERTY()
		int32 LowLinkValue;

	UPROPERTY()
		int32 SCCID = INDEX_NONE;
};

/**
 *  Graph Writer
 * 
 *  - Register / Unregister Graph Node
 *  - Store / Create Group List
 *  - Calculate Path Map For Nodes
 */
UCLASS(ClassGroup = (LGPGraphComponent), meta = (BlueprintSpawnableComponent))
class LOHGRAPHPLUGIN_API ULGPGraphWriter : public ULGPGraphComponentBase
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAlertPathUsedSignature, const FLGPNodePathData&, Path, ULGPGraphNavigator*, Navigator);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAlertNodeUsedSignature, const FLGPNodePathData&, Path, ULGPGraphNavigator*, Navigator);


	friend class ULGPNodeCache;

protected:

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called when the game end
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:

	UPROPERTY(BlueprintAssignable, Category = "LGPGraphWriter | Event")
		FOnAlertPathUsedSignature OnAlertPathUsed;

	UPROPERTY(BlueprintAssignable, Category = "LGPGraphWriter | Event")
		FOnAlertNodeUsedSignature OnAlertNodeUsed;

	// Node Registration /////////////////////////////////////////////////////////

	FORCEINLINE void RegisterGraphNode(ULGPNode* Node);

	FORCEINLINE void UnregisterGraphNode(ULGPNode* Node);

	///////////////////////////////////////////////////////////////////////////////////


	FORCEINLINE bool ProcessPathToNode(ULGPNode* Node);

	FORCEINLINE bool IsPathGenerating(ULGPNode* Node) const { return CurrentPathProcessNode == Node || PathProcessQueue.Contains(Node); }


protected:

	UPROPERTY(VisibleAnywhere, Category = "LGPGraph | Varaible") TSet<ULGPNode*> RegisteredNode;

// Thread Handle //////////////////////////////////////////////////////////////////

	virtual FORCEINLINE bool OnThreadWorkStart() override;

	virtual FORCEINLINE void DoThreadWork() override;

	virtual FORCEINLINE void OnThreadWorkDone() override;


	FORCEINLINE FLGPNodeGroupData* GetGroupDataPointer(ULGPNode* Node); // Null If Thread Running Or Index Not Found

	FORCEINLINE FLGPNodeGroupData& GetGroupData(ULGPNode* Node); // Cause Error If Thread Is Running

	FORCEINLINE FLGPGroupMemberData& GetGroupMemberData(ULGPNode* Node); // Cause Error If Thread Is Running



	UPROPERTY(VisibleAnywhere, Category = "LGPGraph | Varaible") TArray<int32> ReturnPathData;

	UPROPERTY(VisibleAnywhere, Category = "LGPGraph | Varaible") TArray<ULGPNode*> PathProcessQueue;

	UPROPERTY(VisibleAnywhere, Category = "LGPGraph | Varaible") ULGPNode* CurrentPathProcessNode; // This Only Read On Other Thread , Write On Game Thread

	UPROPERTY(VisibleAnywhere, Category = "LGPGraph | Varaible") TArray<FLGPNodeGroupData> NodeGroupList;

///////////////////////////////////////////////////////////////////////////////////
	
};
