// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "LGPGraphComponentBase.h"
#include "LGPGraphReader.generated.h"

class ULGPNode;

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

	//UFUNCTION(BlueprintCallable, Category = "LGPGraphNavigator")
	//	void GoToNode(ULGPNode* Node);
	//
	//UFUNCTION(BlueprintCallable, Category = "LGPGraphNavigator")
	//	bool GoToLocation(const FVector Location);

protected:

	// Thread Handle //////////////////////////////////////////////////////////////////

	//virtual bool OnThreadWorkStart() override;

	//virtual void DoThreadWork() override;

	//virtual void OnThreadWorkDone() override;



	UPROPERTY(VisibleAnywhere) TArray<ULGPNode*> PathData;

	///////////////////////////////////////////////////////////////////////////////////

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LGPGraphReader | Setting")
		float NavigatorBuffer = 0.0f;
};
