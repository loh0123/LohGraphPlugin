// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LGPGraphComponentBase.h"
#include "LGPGameCoreSystem.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogGraphCore, Log, All);

class ULGPGraphReader;
class ULGPGraphWriter;

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

	friend class GraphCoreTasker; // Give Tasker Access To Private Function

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
		FORCEINLINE int32 SetWeightPrefabList(TArray<FLGPWeightPrefab>& NewList);

	UFUNCTION(BlueprintCallable, Category = "LGPGameCoreSystem")
		FORCEINLINE int32 ClearWeightPrefabList();

	UFUNCTION(BlueprintPure, Category = "LGPGameCoreSystem")
		FORCEINLINE bool GetWeightPrefab(const int32 ID, UPARAM(ref) FLGPWeightPrefab& Prefab) const;

	///////////////////////////////////////////////////////////////////////////////////

private:

	UPROPERTY() TSet<ULGPGraphComponentBase*> RegisteredComponents;

	UPROPERTY() TArray<FLGPWeightPrefab> WeightPrefabList;
};

class GraphCoreTasker : public FNonAbandonableTask
{
	friend class FAsyncTask<GraphCoreTasker>;

public:

	GraphCoreTasker(ULGPGraphComponentBase* Component) : OwnerComponent(Component), GraphCore(GEngine->GetWorld()->GetGameInstance()->GetSubsystem<ULGPGameCoreSystem>()) { }

	void DoWork()
	{
		checkf(OwnerComponent, TEXT("OwnerComponent Must be Valid"));
		checkf(GraphCore, TEXT("GraphCore Must be Valid"));

		DoThreadWork(GraphCore, OwnerComponent->StopTaskerWork);

		AsyncTask(ENamedThreads::GameThread, [&]()
		{
			OnThreadWorkDone(GraphCore, OwnerComponent->StopTaskerWork);

			GraphCore->RemoveTasker(OwnerComponent);
		});
	}

	virtual void DoThreadWork(ULGPGameCoreSystem* Core, FThreadSafeBool& ForceStop) { return; }

	virtual void OnThreadWorkDone(ULGPGameCoreSystem* Core, const bool IsForceStop) { return; }

	FORCEINLINE TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(GraphCoreTasker, STATGROUP_ThreadPoolAsyncTasks); }

protected :

	UPROPERTY()
		ULGPGraphComponentBase* OwnerComponent = nullptr;

private:

	UPROPERTY()
		ULGPGameCoreSystem* GraphCore = nullptr;
};
