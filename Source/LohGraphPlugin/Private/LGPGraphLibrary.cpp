// Copyright by Loh Zhi Kang


#include "LGPGraphLibrary.h"
#include "LGPNode.h"

void ULGPGraphLibrary::AddGraphNodeGrid(AActor* SelfActor, const FTransform& StartTransform, const FVector GridGap, const FIntVector Size, const bool bDebug, const bool bBlockCheck, TArray<ULGPNode*>& ReturnList)
{
	if (!SelfActor) return;

	auto IsVectorValid = [&](const FIntVector& InVector) -> bool
	{
		return InVector.X < Size.X&& InVector.Y < Size.Y&& InVector.Z < Size.Z&& InVector.X >= 0 && InVector.Y >= 0 && InVector.Z >= 0;
	};

	auto VectorToIndex = [&](const FIntVector& InVector) -> int32
	{
		return InVector.X + (InVector.Y * Size.X) + (InVector.Z * (Size.X * Size.Y));
	};

	const TArray<FIntVector> LoopTable = {
		FIntVector(1,0,0),
		FIntVector(0,1,0),
		FIntVector(0,0,1),
		FIntVector(-1,0,0),
		FIntVector(0,-1,0),
		FIntVector(0,0,-1)
	};

	FVector CurrentLocation = FVector(0);

	ReturnList.SetNum(Size.X * Size.Y * Size.Z);

	int32 Index = 0;

	for (int32 Z = 0; Z < Size.Z; Z++)
	for (int32 Y = 0; Y < Size.Y; Y++)
	for (int32 X = 0; X < Size.X; X++)
	{
		FIntVector Position = FIntVector(X, Y, Z);

		CurrentLocation = StartTransform.Rotator().RotateVector(FVector(X * GridGap.X, Y * GridGap.Y, Z * GridGap.Z) + StartTransform.GetLocation());

		ULGPNode* NewComp = Cast<ULGPNode>(SelfActor->AddComponentByClass(ULGPNode::StaticClass(), false, FTransform(StartTransform.Rotator(), CurrentLocation, FVector(1)), false));

		NewComp->SetCollisionBox({ FTransform(StartTransform.Rotator(), FVector(0), GridGap)});

		NewComp->SetIsDebug(bDebug);

		ReturnList[Index++] = NewComp;

		for (const FIntVector& Item : LoopTable)
		{
			const int32 VectorIndex = VectorToIndex(Position + Item);

			if (IsVectorValid(Position + Item) && ReturnList[VectorIndex])
			{
				NewComp->AddPath(ReturnList[VectorIndex], 0, true, false);
			}
		}
	}

	return;
}
