// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "LGPGraphComponentBase.h"
#include "LGPGraphWriter.generated.h"

class ULGPNode;

/**
 * 
 */
UCLASS(ClassGroup = (LGPGraphComponent), meta = (BlueprintSpawnableComponent))
class LOHGRAPHPLUGIN_API ULGPGraphWriter : public ULGPGraphComponentBase
{
	GENERATED_BODY()

public:

	// Component Registration /////////////////////////////////////////////////////////

	FORCEINLINE void RegisterGraphNode(ULGPNode* Node);

	FORCEINLINE void UnregisterGraphNode(ULGPNode* Node);

	///////////////////////////////////////////////////////////////////////////////////

protected:

	UPROPERTY(VisibleAnywhere) TSet<ULGPNode*> RegisteredNode;
	
};
