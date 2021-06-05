// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHUD.h"
#include "Engine/Canvas.h"
#include "TextureResource.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"

AGameHUD::AGameHUD()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> HPBarObj(TEXT("/Game/UI/hpUI"));
	HUDWidgetClass = HPBarObj.Class;
}


void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

}

void AGameHUD::BeginPlay()
{
	Super::BeginPlay();

	if (HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);

		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
		}
	}
}