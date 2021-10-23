// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LGPGameCoreSystem.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogGraphCore, Log, All);

/** 
 * Core System
 * 
 * For Recording Writer / Reader Creation
 * - On Writer Create Add To List
 * - On Reader Create Add To List
 * For Thread Pool And Task Management
 * 
 */
UCLASS()
class LOHGRAPHPLUGIN_API ULGPGameCoreSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

// Thread System ////////////////////////////////////////////

	friend class GraphCoreTasker; // Give Tasker Access To Private Function

private:

	FCriticalSection GraphWriteLock;

	FQueuedThreadPool* GraphThreadPool;

	// Process Counter /////////////////////////
	int32 ProcessReaderTask = 0;
	int32 ProcessWriterTask = 0;
	////////////////////////////////////////////

	// Stop Signer ////////////////////////
	FThreadSafeBool StopReaderTask = false;
	///////////////////////////////////////

public:

	FORCEINLINE void AddTasker(FAsyncTask<GraphCoreTasker>* AsyncTask);

private:

	FORCEINLINE void RemoveTasker(const GraphCoreTasker& Task);

//////////////////////////////////////////////////////////////

public:

	ULGPGameCoreSystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual void Deinitialize() override;

	void Test();
};

class GraphCoreTasker : public FNonAbandonableTask
{
	friend class FAsyncTask<GraphCoreTasker>;

public:

	GraphCoreTasker(FAsyncTask<GraphCoreTasker>* Self) : SelfPointer(Self), GraphCore(GEngine->GetWorld()->GetGameInstance()->GetSubsystem<ULGPGameCoreSystem>()) { }

	void DoWork()
	{
		checkf(SelfPointer, TEXT("SelfPointer Must be Valid"));
		checkf(GraphCore, TEXT("GraphCore Must be Valid"));

		DoThreadWork(GraphCore);

		AsyncTask(ENamedThreads::GameThread, [&]()
		{
			OnThreadWorkDone(GraphCore);

			GraphCore->RemoveTasker(*this);
		});
	}

	virtual void DoThreadWork(ULGPGameCoreSystem* Core) { return; }

	virtual void OnThreadWorkDone(ULGPGameCoreSystem* Core) { return; }

	uint8 GetClassType() const { return ClassType; }

	FORCEINLINE TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(GraphCoreTasker, STATGROUP_ThreadPoolAsyncTasks); }

protected :

	uint8 ClassType = (uint8)0; // Remember To Override On Child Class

	FAsyncTask<GraphCoreTasker>* SelfPointer = nullptr;

private :

	UPROPERTY()
		ULGPGameCoreSystem* GraphCore = nullptr;
};
