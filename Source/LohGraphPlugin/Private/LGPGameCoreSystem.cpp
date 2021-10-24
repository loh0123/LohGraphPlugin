// Copyright by Loh Zhi Kang

#include "LGPGameCoreSystem.h"


DEFINE_LOG_CATEGORY(LogGraphCore);

// Thread System ////////////////////////////////////////////

void ULGPGameCoreSystem::AddTasker(ULGPGraphComponentBase* GraphComponent)
{
	checkf(GraphComponent, TEXT("GraphComponent Must Be Valid"));
	checkf(GraphComponent->ComponentTasker->IsDone(), TEXT("AsyncTask Not On Work"));
	
	switch (GraphComponent->GetTypeID())
	{
	case EGraphComponentType::Reader : 
		if (ProcessWriterTask.Num() == 0)
		{
			ProcessReaderTask.Add(GraphComponent);

			GraphComponent->ComponentTasker->StartBackgroundTask(GraphThreadPool);
		}
		else
		{
			ProcessReaderTask.Add(GraphComponent);
		}
		break;
	case EGraphComponentType::Writer :
		if (ProcessReaderTask.Num() != 0)
		{
			for (ULGPGraphComponentBase* Reader : ProcessReaderTask)
			{
				Reader->StopTaskerWork = true; // Tell All Thread To End Early
			}

			for (ULGPGraphComponentBase* Reader : ProcessReaderTask)
			{
				Reader->ComponentTasker->EnsureCompletion(); // Check Thread Already End Or Wait Until End
			}
		}

		ProcessWriterTask.Add(GraphComponent);

		GraphComponent->ComponentTasker->StartBackgroundTask(GraphThreadPool);

		break;
	}

	return;
}

void ULGPGameCoreSystem::RemoveTasker(ULGPGraphComponentBase* GraphComponent)
{
	checkf(GraphComponent, TEXT("GraphComponent Must Be Valid"));

	switch (GraphComponent->GetTypeID())
	{
	case EGraphComponentType::Reader: ProcessReaderTask.Remove(GraphComponent); break;
	case EGraphComponentType::Writer: 
		ProcessWriterTask.Remove(GraphComponent);

		if (ProcessWriterTask.Num() == 0) // If All Writer Task Was Completed
		{
			for (ULGPGraphComponentBase* Reader : ProcessReaderTask)
			{
				Reader->ComponentTasker->StartBackgroundTask(GraphThreadPool); // Tell All Reader To Start Work
			}
		}

		break;
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

void ULGPGameCoreSystem::RegisterGraphComponent(ULGPGraphComponentBase* Component)
{
	RegisterComponents.Add(Component);

	Component->CoreSystem = this;

	return;
}

void ULGPGameCoreSystem::UnregisterGraphComponent(ULGPGraphComponentBase* Component)
{
	RegisterComponents.Remove(Component);

	Component->CoreSystem = nullptr;

	return;
}

int32 ULGPGameCoreSystem::SetWeightPrefabList(TArray<FLGPWeightPrefab>& NewList)
{
	WeightPrefabList = NewList;

	return WeightPrefabList.Num();
}

int32 ULGPGameCoreSystem::ClearWeightPrefabList()
{
	const int32 OriginalSize = WeightPrefabList.Num();

	WeightPrefabList.Empty();

	return OriginalSize;
}

bool ULGPGameCoreSystem::GetWeightPrefab(const int32 ID, UPARAM(ref) FLGPWeightPrefab& Prefab) const
{
	if (WeightPrefabList.IsValidIndex(ID))
	{
		Prefab = WeightPrefabList[ID];

		return true;
	}

	return false;
}
