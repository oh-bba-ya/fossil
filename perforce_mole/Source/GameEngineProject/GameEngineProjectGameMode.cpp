// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameEngineProjectGameMode.h"
#include "GameEngineProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameEngineProjectGameMode::AGameEngineProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/MoleCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
