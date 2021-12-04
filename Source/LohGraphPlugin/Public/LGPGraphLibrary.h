// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LGPGraphLibrary.generated.h"

/**
 * 
 */
UCLASS()
class LOHGRAPHPLUGIN_API ULGPGraphLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "LGPGraphLibrary")
		static void AddGraphNodeGrid(AActor* SelfActor, const FTransform& StartTransform, const FVector GridGap, const FIntVector Size, const bool bDebug,const bool bBlockCheck, TArray<ULGPNode*>& ReturnList);
};
