// Fill out your copyright notice in the Description page of Project Settings.


#include "DustParticle.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
ADustParticle::ADustParticle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	DustParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DUST"));
	DustParticle->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> DUST_PARTICLE(TEXT("/Game/Particle/DustParticle"));
	if (DUST_PARTICLE.Succeeded())
	{
		particleObj = DUST_PARTICLE.Object;
		DustParticle->SetTemplate(DUST_PARTICLE.Object);
	}
}

// Called when the game starts or when spawned
void ADustParticle::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(2);
	
}

// Called every frame
void ADustParticle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
