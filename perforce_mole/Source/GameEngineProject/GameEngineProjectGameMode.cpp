// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameEngineProjectGameMode.h"
#include "GameEngineProjectCharacter.h"
#include "ProjectCatCharacter.h"
#include "UObject/ConstructorHelpers.h"


AGameEngineProjectGameMode::AGameEngineProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/MoleCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	//static ConstructorHelpers::FClassFinder<APawn> cat(TEXT("/Game/CatCharacter"));
	//if (cat.Class != NULL)
	//{
	//	DefaultPawnClass = cat.Class;
	//	UE_LOG(LogTemp, Warning, TEXT("SkeletalMesh Not Error2"));
	//}
	//else {
	//	UE_LOG(LogTemp, Warning, TEXT("SkeletalMesh Error2"));
	//}


}
