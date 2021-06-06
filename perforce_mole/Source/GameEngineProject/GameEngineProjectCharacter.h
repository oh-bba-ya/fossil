// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Tomato.h"
#include "DustParticle.h"
#include "MoleHole.h"
#include "GameEngineProjectCharacter.generated.h"

UCLASS(config=Game)
class AGameEngineProjectCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	AGameEngineProjectCharacter();

protected:

	virtual void BeginPlay() override;

	enum class EMoleMode
	{
		UNDER,
		GROUND
	};

	void SetViewMode(EMoleMode vm);
	void Dig();
	EMoleMode CurrentMoleMode = EMoleMode::GROUND;
	FVector DirectionToMove = FVector::ZeroVector;

	UPROPERTY(EditDefaultsOnly, Category = DustParticle)
		TSubclassOf<class ADustParticle> Dust;
	UPROPERTY()
		TSubclassOf<class AMoleHole> Hole;

	UFUNCTION()
		void UpdateHungryPoint(float deltaTime);
	UFUNCTION()
		void UpdateSurviveTime(float deltaTime);
	UFUNCTION()
		void UpdateDigTime(float deltaTime);


public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category = Camera)
		class UCameraComponent* Camera;


	UPROPERTY(VisibleAnywhere)
		class UCapsuleComponent* TriggerCapsule;
	UPROPERTY(VisibleAnywhere)
		class AActor* TriggerTomato = nullptr;

	float maxDigTime = 10.f;
	float currentDigTime;
	bool overlapHole = false;

	bool digging = false;

	float currntHungryPoint;
	float maxHungryPoint;
	float surviveTime;

	UFUNCTION(BlueprintPure)
		float GetHungryPoint();
	UFUNCTION(BlueprintPure)
		FText GetHungryPointText();
	UFUNCTION(BlueprintPure)
		FText GetSurviveTimeText();
	UFUNCTION(BluePrintPure)
		float GetCurrentDigPercent();

	UFUNCTION()
		void MoveForward(float value);
	UFUNCTION()
		void MoveRight(float value);
	//UFUNCTION()
	//	void LookUp(float value);
	UFUNCTION()
		void Turn(float value);

	UFUNCTION()
	void ViewChange();

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex); 
	UFUNCTION()
		void EatTomato();
	UFUNCTION()
		void CreateDustParticle();
	UFUNCTION()
		void CreateHole();
};

