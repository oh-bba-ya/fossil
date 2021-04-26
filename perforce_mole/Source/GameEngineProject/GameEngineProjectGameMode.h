// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameEngineProjectGameMode.generated.h"

UCLASS(minimalapi)
class AGameEngineProjectGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGameEngineProjectGameMode();

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> HUDWidgetClass;

	UPROPERTY(EditAnywhere)
		class UUserWidget* CurrentWidget;

};



