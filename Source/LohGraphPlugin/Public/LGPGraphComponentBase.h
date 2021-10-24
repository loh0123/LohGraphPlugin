// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LGPGraphComponentBase.generated.h"

class GraphCoreTasker;
class ULGPGameCoreSystem;

UENUM(BlueprintType)
enum class EGraphComponentType : uint8
{
	Base	UMETA(DisplayName = "Base"),
	Reader  UMETA(DisplayName = "Reader"),
	Writer  UMETA(DisplayName = "Writer"),
};

UCLASS()
class LOHGRAPHPLUGIN_API ULGPGraphComponentBase : public UActorComponent
{
	GENERATED_BODY()

	friend class ULGPGameCoreSystem;
	friend class GraphCoreTasker;

public:	
	FAsyncTask<GraphCoreTasker>* ComponentTasker = nullptr;

	// Sets default values for this component's properties
	ULGPGraphComponentBase();

protected:
	UPROPERTY() ULGPGameCoreSystem* CoreSystem = nullptr;

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called when the game end
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Called when need to create tasker
	virtual FAsyncTask<GraphCoreTasker>* CreateTasker();

	// Thread Handle /////////////////////////////////////////////////

	FThreadSafeBool StopTaskerWork = false;

	FORCEINLINE void StopTasker();

	//////////////////////////////////////////////////////////////////

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	EGraphComponentType GetTypeID() const;
};
