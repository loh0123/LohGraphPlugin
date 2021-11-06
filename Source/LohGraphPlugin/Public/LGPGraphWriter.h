// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "LGPNode.h"
#include "LGPGraphComponentBase.h"
#include "LGPGraphWriter.generated.h"

class GraphWriterTasker;

/**
 * 
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

	UPROPERTY(VisibleAnywhere) TArray<ULGPNode*> PathProcessList;

	UPROPERTY(VisibleAnywhere) TSet<ULGPNode*> RegisteredNode;
	
};
