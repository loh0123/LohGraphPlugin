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


// Called when the game starts
void ULGPGraphComponentBase::BeginPlay()
{
	Super::BeginPlay();

	GEngine->GetWorld()->GetGameInstance()->GetSubsystem<ULGPGameCoreSystem>()->RegisterGraphComponent(this);

	// Create Thread /////////////////////////////////
	checkf(ComponentTasker == nullptr, TEXT("ComponentTasker Can't Be Create Before This"));

	ComponentTasker = CreateTasker();

	checkf(ComponentTasker != nullptr, TEXT("ComponentTasker Create Fail"));
	////////////////////////////////////////////////////
	
	return;
}

void ULGPGraphComponentBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

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

FAsyncTask<GraphCoreTasker>* ULGPGraphComponentBase::CreateTasker()
{
	return new FAsyncTask<GraphCoreTasker>(this);
}

void ULGPGraphComponentBase::StopTasker()
{
	StopTaskerWork = true;

	ComponentTasker->EnsureCompletion();

	return;
}

bool ULGPGraphComponentBase::GetWeightPrefab(const int32 ID, FLGPWeightPrefab& Prefab) const
{
	return CoreSystem->GetWeightPrefab(ID, Prefab);
}


// Called every frame
void ULGPGraphComponentBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

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

