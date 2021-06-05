// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DustParticle.generated.h"

UCLASS()
class GAMEENGINEPROJECT_API ADustParticle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADustParticle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
		UParticleSystemComponent* DustParticle;
	UParticleSystem* particleObj;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
