// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameEngineProjectCharacter.generated.h"

UCLASS(config=Game)
class AGameEngineProjectCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	AGameEngineProjectCharacter();

protected:

	virtual void BeginPlay() override;

	enum class EViewMode
	{
		V2D,
		V3D
	};

	void SetViewMode(EViewMode vm);
	EViewMode CurrentViewMode = EViewMode::V3D;

	FVector DirectionToMove = FVector::ZeroVector;


public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		class UCameraComponent* Camera;

	UFUNCTION()
		void MoveForward(float value);
	UFUNCTION()
		void MoveRight(float value);
	//UFUNCTION()
	//	void LookUp(float value);
	UFUNCTION()
		void Turn(float value);

	void ViewChange();
};

