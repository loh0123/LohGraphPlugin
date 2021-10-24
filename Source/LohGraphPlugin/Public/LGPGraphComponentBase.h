// Copyright by Loh Zhi Kang

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LGPGraphComponentBase.generated.h"

class GraphCoreTasker;
class ULGPGameCoreSystem;

USTRUCT(BlueprintType)
struct FLGPWeightPrefab
{
	GENERATED_USTRUCT_BODY()

public:

	FLGPWeightPrefab()
	{
		WeightList.SetNum(256);
	}

	UPROPERTY(EditAnywhere, EditFixedSize, Category = "LGSTypePrefab | Variable")
		TArray<float> WeightList;

	UPROPERTY(EditAnywhere, Category = "LGSTypePrefab | Variable")
		float NodeBufferMultiply = 1.0f;

	UPROPERTY(EditAnywhere, Category = "LGSTypePrefab | Variable")
		float DistanceToTargetMultiply = 1.0f;

	UPROPERTY(EditAnywhere, Category = "LGSTypePrefab | Variable")
		float DistanceToStartMultiply = 1.0f;

	UPROPERTY(EditAnywhere, Category = "LGSTypePrefab | Variable")
		float StepMultiply = 1.0f;
};

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


	// Local Core Function /////////////////////////////////////////////////

	FORCEINLINE bool GetWeightPrefab(const int32 ID, FLGPWeightPrefab& Prefab) const;

	////////////////////////////////////////////////////////////////////////

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	EGraphComponentType GetTypeID() const;
};
