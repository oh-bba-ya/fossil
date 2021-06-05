// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameEngineProjectGameMode.h"
#include "GameHUD.h"
#include "GameEngineProjectCharacter.h"
#include "ProjectCatCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"


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
	static ConstructorHelpers::FClassFinder<UUserWidget> HealthBar(TEXT("/Game/UI/hpUI"));
	HUDWidgetClass = HealthBar.Class;

	// use our custom HUD class
	HUDClass = AGameHUD::StaticClass();

	// add Health Bar UI to viewport
	if (HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);

		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
		}
	}
}
