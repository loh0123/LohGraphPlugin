// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "LGPNode.generated.h"

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
