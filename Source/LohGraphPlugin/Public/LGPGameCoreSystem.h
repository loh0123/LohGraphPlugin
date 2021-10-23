// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LGPGameCoreSystem.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogGraphCore, Log, All);

class ULGPGraphComponentBase;
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
	int32 ProcessReaderTask = 0;
	int32 ProcessWriterTask = 0;
	////////////////////////////////////////////

	// Stop Signer ////////////////////////
	FThreadSafeBool StopReaderTask = false; // If This True Will Cause All Reader Task To Stop Early And Put New Add Reader Tasker To Queue
	///////////////////////////////////////

	UPROPERTY() TSet<ULGPGraphComponentBase*> WriterQueueList;
	UPROPERTY() TSet<ULGPGraphComponentBase*> ReaderQueueList;

public:

	FORCEINLINE void AddTasker(ULGPGraphComponentBase* GraphComponent);

private:

	FORCEINLINE void RemoveTasker(ULGPGraphComponentBase* GraphComponent);

//////////////////////////////////////////////////////////////

public:

	ULGPGameCoreSystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	FORCEINLINE void RegisterGraphComponent(ULGPGraphComponentBase* Reader);

private:

	UPROPERTY() TSet<ULGPGraphComponentBase*> RegisterComponents;
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

		DoThreadWork(GraphCore, GraphCore->StopReaderTask);

		AsyncTask(ENamedThreads::GameThread, [&]()
		{
			OnThreadWorkDone(GraphCore, GraphCore->StopReaderTask);

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
