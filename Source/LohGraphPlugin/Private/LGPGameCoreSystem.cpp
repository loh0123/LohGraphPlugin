// Copyright by Loh Zhi Kang

#include "LGPGameCoreSystem.h"
#include "LGPGraphComponentBase.h"


DEFINE_LOG_CATEGORY(LogGraphCore);

// Thread System ////////////////////////////////////////////

void ULGPGameCoreSystem::AddTasker(ULGPGraphComponentBase* GraphComponent)
{
	checkf(GraphComponent, TEXT("GraphComponent Must Be Valid"));
	checkf(GraphComponent->ComponentTasker->IsDone(), TEXT("AsyncTask Not On Work"));
	
	switch (GraphComponent->GetTypeID())
	{
	case EGraphComponentType::Reader : 
		if (StopReaderTask)
		{
			ReaderQueueList.Add(GraphComponent);
		}
		else
		{
			ProcessReaderTask++;

			GraphComponent->ComponentTasker->StartBackgroundTask(GraphThreadPool);
		}
		break;
	case EGraphComponentType::Writer :
		if (StopReaderTask && ProcessReaderTask == 0)
		{
			ProcessWriterTask++;

			GraphComponent->ComponentTasker->StartBackgroundTask(GraphThreadPool);
		}
		else
		{
			StopReaderTask = true;

			WriterQueueList.Add(GraphComponent);
		}
		break;
	}

	return;
}

void ULGPGameCoreSystem::RemoveTasker(ULGPGraphComponentBase* GraphComponent)
{
	checkf(GraphComponent, TEXT("GraphComponent Must Be Valid"));

	switch (GraphComponent->GetTypeID())
	{
	case EGraphComponentType::Reader: ProcessReaderTask--; break;
	case EGraphComponentType::Writer: ProcessWriterTask--; break;
	}
	
	if (ProcessReaderTask == 0 && StopReaderTask)
	{
		for (ULGPGraphComponentBase* Writer : WriterQueueList)
		{
			AddTasker(Writer);
		}

		WriterQueueList.Empty();
	}
	else if (ProcessWriterTask == 0 && WriterQueueList.Num() == 0)
	{
		StopReaderTask = false;

		for (ULGPGraphComponentBase* Reader : ReaderQueueList)
		{
			AddTasker(Reader);
		}

		ReaderQueueList.Empty();
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

void ULGPGameCoreSystem::RegisterGraphComponent(ULGPGraphComponentBase* Reader)
{
	RegisterComponents.Add(Reader);

	Reader->CoreSystem = this;

	return;
}
