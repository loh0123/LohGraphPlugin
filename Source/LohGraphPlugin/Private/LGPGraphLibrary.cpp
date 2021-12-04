// Copyright by Loh Zhi Kang


#include "LGPGraphLibrary.h"
#include "LGPNode.h"

void ULGPGraphLibrary::AddGraphNodeGrid(AActor* SelfActor, const FTransform& StartTransform, const FVector GridGap, const FIntVector Size, const bool bBlockCheck, TArray<ULGPNode*>& ReturnList)
{
	if (!SelfActor) return;

	FVector CurrentLocation = FVector(0);

	for (int32 Z = 0; Z < Size.Z; Z++)
	for (int32 Y = 0; Y < Size.Y; Y++)
	for (int32 X = 0; X < Size.X; X++)
	{
		CurrentLocation = StartTransform.Rotator().RotateVector(FVector(X * GridGap.X, Y * GridGap.Y, Z * GridGap.Z));

		ULGPNode* NewComp = Cast<ULGPNode>(SelfActor->AddComponentByClass(ULGPNode::StaticClass(), false, FTransform(StartTransform.Rotator(), CurrentLocation, FVector(1)), false));

		NewComp->SetCollisionBox({ FTransform(StartTransform.Rotator(), CurrentLocation, GridGap) });

		ReturnList.Add(NewComp);
	}

	return;
}
