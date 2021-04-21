// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMarker.h"

// Sets default values
APlayerMarker::APlayerMarker()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlayerMarker::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerMarker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetWorld())
	{
		FVector CharacterPos = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
		SetActorRelativeLocation(FVector(CharacterPos.X, CharacterPos.Y, 1000.f));
	}
}

