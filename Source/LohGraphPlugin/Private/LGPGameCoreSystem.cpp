// Copyright (c) 2021 Loh Zhi Kang (loh0123@hotmail.com)
//
// Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
// or copy at http://opensource.org/licenses/MIT)

#include "LGPGameCoreSystem.h"
#include "LGPGraphComponentBase.h"


DEFINE_LOG_CATEGORY(LogGraphCore);

// Thread System ////////////////////////////////////////////

void ULGPGameCoreSystem::AddTasker(ULGPGraphComponentBase* GraphComponent)
{
	checkf(GraphComponent, TEXT("GraphComponent Must Be Valid"));
	checkf(GraphComponent->ComponentTasker->IsDone(), TEXT("AsyncTask On Work"));
	
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
			TSet<ULGPGraphComponentBase*> CacheReader = ProcessReaderTask;
		
			for (ULGPGraphComponentBase* Reader : CacheReader)
			{
				Reader->StopGraphComponentTasker();  // Tell All Thread To End Early
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

	ProcessReaderTask.Empty();
	ProcessWriterTask.Empty();

	return;
}

void ULGPGameCoreSystem::Deinitialize()
{
	UE_LOG(LogGraphCore, Warning, TEXT("SubSystem Graph Offline"));

	ProcessReaderTask.Empty();
	ProcessWriterTask.Empty();

	GraphThreadPool->Destroy();
	delete GraphThreadPool;
	GraphThreadPool = nullptr;
}

void ULGPGameCoreSystem::RegisterGraphComponent(ULGPGraphComponentBase* Component)
{
	RegisteredComponents.Add(Component);

	Component->CoreSystem = this;

	return;
}

void ULGPGameCoreSystem::UnregisterGraphComponent(ULGPGraphComponentBase* Component)
{
	RegisteredComponents.Remove(Component);

	Component->ComponentTasker->EnsureCompletion();

	Component->CoreSystem = nullptr;

	return;
}

int32 ULGPGameCoreSystem::SetWeightPrefabList(const TArray<FLGPWeightPrefab>& NewList)
{
	WeightPrefabList = NewList;

	if (WeightPrefabList.Num() > 255) WeightPrefabList.SetNum(255);

	return WeightPrefabList.Num();
}

int32 ULGPGameCoreSystem::ClearWeightPrefabList()
{
	const int32 OriginalSize = WeightPrefabList.Num();

	WeightPrefabList.Empty();

	return OriginalSize;
}

bool ULGPGameCoreSystem::GetWeightPrefab(const uint8 ID, UPARAM(ref) FLGPWeightPrefab& Prefab) const
{
	if (WeightPrefabList.IsValidIndex(ID))
	{
		Prefab = WeightPrefabList[ID];

		return true;
	}

	return false;
}
