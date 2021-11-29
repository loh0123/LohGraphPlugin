// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LGPGraphComponentBase.h"
#include "LGPGameCoreSystem.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogGraphCore, Log, All);

class ULGPGraphReader;
class ULGPGraphWriter;

class ULGPNode;

/** 
 * Core System
 * 
 * For Recording Writer / Reader Creation
 * - On Writer Create Add To List
 * - On Reader Create Add To List
 * For Thread Pool And Task Management
 * - Stop Reader Thread If Detect Writer Thread Need Work
 * - Auto Start Reader Thread After All Writer Thread Done
 */
UCLASS()
class LOHGRAPHPLUGIN_API ULGPGameCoreSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

// Thread System ////////////////////////////////////////////

	friend class GraphComponentTasker; // Give Tasker Access To Private Function

private:

	//FCriticalSection GraphWriteLock;

	FQueuedThreadPool* GraphThreadPool;

	// Process Counter /////////////////////////
	UPROPERTY() TSet<ULGPGraphComponentBase*> ProcessReaderTask;
	UPROPERTY() TSet<ULGPGraphComponentBase*> ProcessWriterTask;
	////////////////////////////////////////////

public:

	FORCEINLINE void AddTasker(ULGPGraphComponentBase* GraphComponent);

private:

	FORCEINLINE void RemoveTasker(ULGPGraphComponentBase* GraphComponent);

//////////////////////////////////////////////////////////////

public:

	ULGPGameCoreSystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	// Component Registration /////////////////////////////////////////////////////////

	FORCEINLINE void RegisterGraphComponent(ULGPGraphComponentBase* Component);

	FORCEINLINE void UnregisterGraphComponent(ULGPGraphComponentBase* Component);

	///////////////////////////////////////////////////////////////////////////////////



	// Weight Prefab List /////////////////////////////////////////////////////////////

	UFUNCTION(BlueprintCallable, Category = "LGPGameCoreSystem")
		FORCEINLINE int32 SetWeightPrefabList(const TArray<FLGPWeightPrefab>& NewList);

	UFUNCTION(BlueprintCallable, Category = "LGPGameCoreSystem")
		FORCEINLINE int32 ClearWeightPrefabList();

	UFUNCTION(BlueprintPure, Category = "LGPGameCoreSystem")
		FORCEINLINE bool GetWeightPrefab(const uint8 ID, UPARAM(ref) FLGPWeightPrefab& Prefab) const;

	///////////////////////////////////////////////////////////////////////////////////

private:

	UPROPERTY() TSet<ULGPGraphComponentBase*> RegisteredComponents;

	UPROPERTY() TArray<FLGPWeightPrefab> WeightPrefabList;
};

class GraphComponentTasker : public FNonAbandonableTask
{
	friend class FAsyncTask<GraphComponentTasker>;

public:

	GraphComponentTasker(ULGPGraphComponentBase* Component) : OwnerComponent(Component), GraphCore(Component->CoreSystem) { }

	void DoWork()
	{
		checkf(OwnerComponent, TEXT("OwnerComponent Must be Valid"));
		checkf(GraphCore, TEXT("GraphCore Must be Valid"));

		OwnerComponent->DoThreadWork();

		AsyncTask(ENamedThreads::GameThread, [&]()
		{
			OwnerComponent->OnThreadWorkDone();

			GraphCore->RemoveTasker(OwnerComponent);
		});

		return;
	}

	FORCEINLINE TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(GraphComponentTasker, STATGROUP_ThreadPoolAsyncTasks); }

protected :

	UPROPERTY()
		ULGPGraphComponentBase* OwnerComponent = nullptr;

private:

	UPROPERTY()
		ULGPGameCoreSystem* GraphCore = nullptr;
};
