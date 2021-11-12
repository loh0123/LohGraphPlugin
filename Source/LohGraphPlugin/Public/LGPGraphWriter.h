// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "LGPNode.h"
#include "LGPGraphComponentBase.h"
#include "LGPGraphWriter.generated.h"

class GraphWriterTasker;

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

	// Component Registration /////////////////////////////////////////////////////////

	FORCEINLINE void RegisterGraphNode(ULGPNode* Node);

	FORCEINLINE void UnregisterGraphNode(ULGPNode* Node);

	///////////////////////////////////////////////////////////////////////////////////

protected:

	UPROPERTY(VisibleAnywhere) TSet<ULGPNode*> RegisteredNode;

// Thread Handle //////////////////////////////////////////////////////////////////

	virtual bool OnThreadWorkStart() override {
		if (BuildVersion != CurrentBuildVersion)
		{
			PathProcessQueue.Empty();
			NodeGroupList.Empty();

			return true;
		}

		if (PathProcessQueue.Num() > 0)
		{
			return true;
		}

		return false; 
	}

	virtual void DoThreadWork() override { return; } // TODO ! ! ! ! !!!!!!! !!! !!!

	virtual void OnThreadWorkDone() override { if(!StopTaskerWork) BuildVersion = CurrentBuildVersion; return; }


	FORCEINLINE FLGPNodeGroupData* GetGroupDataPointer(ULGPNode* Node); // Null If Thread Running Or Index Not Found


	UPROPERTY(VisibleAnywhere) uint32 BuildVersion = 0; // Use To Check If Data Is Outdated

	UPROPERTY(VisibleAnywhere) TArray<ULGPNode*> PathProcessQueue;

	UPROPERTY(VisibleAnywhere) TArray<FLGPNodeGroupData> NodeGroupList;

///////////////////////////////////////////////////////////////////////////////////
	
};
