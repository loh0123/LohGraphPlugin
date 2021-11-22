// Copyright by Loh Zhi Kang

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

protected:

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called when the game end
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:

	// Node Registration /////////////////////////////////////////////////////////

	FORCEINLINE void RegisterGraphNode(ULGPNode* Node);

	FORCEINLINE void UnregisterGraphNode(ULGPNode* Node);

	///////////////////////////////////////////////////////////////////////////////////

	FORCEINLINE void MarkGraphWriterDirty() { if (!bIsDirty) MarkGraphComponentDirty(); }

protected:

	UPROPERTY(VisibleAnywhere) TSet<ULGPNode*> RegisteredNode;

// Thread Handle //////////////////////////////////////////////////////////////////

	virtual bool OnThreadWorkStart() override {
		if (RegisteredNode.Num() > 0)
		{
			if (BuildVersion != CurrentBuildVersion)
			{
				PathProcessQueue.Empty();
				NodeGroupList.Empty();
				CurrentPathProcessNode = nullptr;

				return true;
			}
			else if (PathProcessQueue.Num() > 0)
			{
				CurrentPathProcessNode = PathProcessQueue.Pop();

				return true;
			}
		}
		else
		{
			PathProcessQueue.Empty();
			NodeGroupList.Empty();
			CurrentPathProcessNode = nullptr;
		}

		return false; 
	}

	virtual void DoThreadWork() override;

	virtual void OnThreadWorkDone() override { if(!StopTaskerWork) BuildVersion = CurrentBuildVersion; return; }


	FORCEINLINE FLGPNodeGroupData* GetGroupDataPointer(ULGPNode* Node); // Null If Thread Running Or Index Not Found


	UPROPERTY(VisibleAnywhere) uint32 BuildVersion = 0; // Use To Check If Data Is Outdated

	UPROPERTY(VisibleAnywhere) TArray<ULGPNode*> PathProcessQueue;

	UPROPERTY(VisibleAnywhere) ULGPNode* CurrentPathProcessNode; // This Only Read On Other Thread , Write On Game Thread

	UPROPERTY(VisibleAnywhere) TArray<FLGPNodeGroupData> NodeGroupList;

///////////////////////////////////////////////////////////////////////////////////
	
};
