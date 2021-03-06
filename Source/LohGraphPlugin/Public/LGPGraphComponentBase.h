// Copyright (c) 2021 Loh Zhi Kang (loh0123@hotmail.com)
//
// Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
// or copy at http://opensource.org/licenses/MIT)

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LGPGraphComponentBase.generated.h"

DECLARE_EVENT_OneParam(ULGPGraphComponentBase, FComponentUpdateEvent, bool);


class ULGPGameCoreSystem;
class GraphComponentTasker;

/**
* For
* - Weight Data Use By Reader
* - Data Store In Core
*/
USTRUCT(BlueprintType)
struct FLGPWeightPrefab
{
	GENERATED_USTRUCT_BODY()

public:

	FLGPWeightPrefab()
	{
		WeightList.SetNum(256);
	}

	UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Category = "LGSTypePrefab | Variable")
		TArray<float> WeightList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LGSTypePrefab | Variable")
		float NodeBufferMultiply = 1.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LGSTypePrefab | Variable")
		float DistanceToEndMultiply = 2.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LGSTypePrefab | Variable")
		float DistanceToStartMultiply = 1.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LGSTypePrefab | Variable")
		float StepMultiply = 1.0f;
};

/**
* For
* - Graph Component Identify
*/
UENUM(BlueprintType)
enum class EGraphComponentType : uint8
{
	Base	UMETA(DisplayName = "Base"),
	Reader  UMETA(DisplayName = "Reader"),
	Writer  UMETA(DisplayName = "Writer"),
};

/**
* Base Class For Graph Component
* For
* - Component Thread Task Management
* - Register With Core System
* - Core Function Reroute
*/
UCLASS()
class LOHGRAPHPLUGIN_API ULGPGraphComponentBase : public UActorComponent
{
	GENERATED_BODY()

	friend class ULGPGameCoreSystem;
	friend class GraphComponentTasker;

public:	

	FComponentUpdateEvent OnComponentUpdate;

	// Sets default values for this component's properties
	ULGPGraphComponentBase();

	// Thread Handle /////////////////////////////////////////////////

public:

	FORCEINLINE bool IsGraphComponentWorking() const;

	FORCEINLINE bool IsGraphComponentDirty() const { return bIsDirty; }

	FORCEINLINE bool IsGraphUpdating() const { return NextBuildVersion != BuildVersion; }

protected:

	FORCEINLINE void StopGraphComponentTasker(const bool StartNextFrame = true);
	
	FORCEINLINE void MarkGraphComponentDirty(const bool Recompile = true);


	// Prepare Thread To Start (True if can start Thread)
	virtual  FORCEINLINE bool OnThreadWorkStart() { return true; }

	// Warning This Run On Other Thread
	virtual  FORCEINLINE void DoThreadWork() { return; }

	// Call After Thread Work Is Done
	virtual  FORCEINLINE void OnThreadWorkDone() { return; }

	// Call After All Thread Of Same Type End Work
	//virtual FORCEINLINE void OnThreadEndEvent() { return; }

	//////////////////////////////////////////////////////////////////


	// Local Core Function /////////////////////////////////////////////////

	FORCEINLINE bool GetWeightPrefab(const uint8 ID, FLGPWeightPrefab& Prefab) const;

	////////////////////////////////////////////////////////////////////////


	// Called when the game starts
	virtual void BeginPlay() override;

	// Called when the game end
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Get Current Component Type
	EGraphComponentType GetTypeID() const;

protected:

	FAsyncTask<GraphComponentTasker>* ComponentTasker = nullptr;

	FThreadSafeBool StopTaskerWork = false;

	UPROPERTY() ULGPGameCoreSystem* CoreSystem = nullptr;

	UPROPERTY(VisibleAnywhere) uint8 bIsDirty : 1;

	UPROPERTY(VisibleAnywhere) uint32 NextBuildVersion = 0;

	UPROPERTY(VisibleAnywhere) uint32 BuildVersion = 0; // Use To Check If Data Is Outdated
};
