// Copyright by Loh Zhi Kang


#include "LGPGameCoreSystem.h"

DEFINE_LOG_CATEGORY(LogGraphCore);

// Thread System ////////////////////////////////////////////

void ULGPGameCoreSystem::AddTasker(FAsyncTask<GraphCoreTasker>* AsyncTask)
{
	checkf(AsyncTask && AsyncTask->IsDone(), TEXT("AsyncTask Must Be Valid And Not On Work"));

	switch (AsyncTask->GetTask().GetClassType())
	{
	case 0: ProcessReaderTask++; break;
	case 1: ProcessWriterTask++; break;
	}

	AsyncTask->StartBackgroundTask(GraphThreadPool);

	return;
}

void ULGPGameCoreSystem::RemoveTasker(const GraphCoreTasker& Task)
{
	switch (Task.GetClassType())
	{
	case 0: ProcessReaderTask--; break;
	case 1: ProcessWriterTask--; break;
	}

	if (ProcessWriterTask == 0)
	{
		StopReaderTask = false;
	}

	return;
}

//////////////////////////////////////////////////////////////

ULGPGameCoreSystem::ULGPGameCoreSystem()
{

}

void ULGPGameCoreSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogGraphCore, Warning, TEXT("SubSystem Graph Online"));

	GraphThreadPool = FQueuedThreadPool::Allocate();
	GraphThreadPool->Create(12, 32768, EThreadPriority::TPri_BelowNormal, TEXT("GraphCoreThreadPool"));
}

void ULGPGameCoreSystem::Deinitialize()
{
	UE_LOG(LogGraphCore, Warning, TEXT("SubSystem Graph Offline"));

	GraphThreadPool->Destroy();
	delete GraphThreadPool;
	GraphThreadPool = nullptr;
}

void ULGPGameCoreSystem::Test()
{
	
}
