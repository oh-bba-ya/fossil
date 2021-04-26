// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class AGameHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	AGameHUD();
	virtual void BeginPlay() override;
	virtual void DrawHUD() override;

private:
	
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> HUDWidgetClass;

	UPROPERTY(EditAnywhere)
		class UUserWidget* CurrentWidget;

};
