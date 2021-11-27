// Copyright by Loh Zhi Kang

#include "LGPGraphComponentBase.h"
#include "LGPGameCoreSystem.h"
#include "LGPGraphWriter.h"
#include "LGPGraphReader.h"


// Sets default values for this component's properties
ULGPGraphComponentBase::ULGPGraphComponentBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
	// ...
}



void ULGPGraphComponentBase::StopGraphComponentTasker(const bool StartNextFrame)
{
	if (!ComponentTasker->IsWorkDone())
	{
		StopTaskerWork = true;

		ComponentTasker->EnsureCompletion(false);

		if (StartNextFrame)
		{
			MarkGraphComponentDirty(false);
		}
	}
	
	return;
}

bool ULGPGraphComponentBase::IsGraphComponentWorking() const
{
	return !ComponentTasker->IsWorkDone() || bIsDirty;
}

void ULGPGraphComponentBase::MarkGraphComponentDirty(const bool Recompile)
{
	if (!bIsDirty && !IsPendingKill() && CoreSystem)
	{ 
		bIsDirty = true; 

		if (Recompile) CurrentBuildVersion++; 
	} 
	
	return;
}



bool ULGPGraphComponentBase::GetWeightPrefab(const uint8 ID, FLGPWeightPrefab& Prefab) const
{
	return CoreSystem->GetWeightPrefab(ID, Prefab);
}


// Called when the game starts
void ULGPGraphComponentBase::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetGameInstance()->GetSubsystem<ULGPGameCoreSystem>()->RegisterGraphComponent(this);

	// Create Thread /////////////////////////////////
	ComponentTasker = (new FAsyncTask<GraphComponentTasker>(this));
	////////////////////////////////////////////////////
	
	return;
}

void ULGPGraphComponentBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (CoreSystem)
	{
		CoreSystem->UnregisterGraphComponent(this);
	}

	// Clean Up Thread /////////////////////////////////
	if (ComponentTasker)
	{
		ComponentTasker->EnsureCompletion();
	
		delete ComponentTasker;
	
		ComponentTasker = nullptr;
	}
	////////////////////////////////////////////////////

	return;
}


// Called every frame
void ULGPGraphComponentBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsDirty)
	{
		checkf(ComponentTasker->IsIdle(), TEXT("Tasker Work Not Done Can't Start Another Job"));

		StopTaskerWork = false;

		bIsDirty = false;

		if (OnThreadWorkStart()) CoreSystem->AddTasker(this);
	}

	return;
	// ...
}



EGraphComponentType ULGPGraphComponentBase::GetTypeID() const
{
	if (Cast<ULGPGraphReader>(this))
	{
		return EGraphComponentType::Reader;
	}
	else if (Cast<ULGPGraphWriter>(this))
	{
		return EGraphComponentType::Writer;
	}

	return EGraphComponentType::Base;
}

