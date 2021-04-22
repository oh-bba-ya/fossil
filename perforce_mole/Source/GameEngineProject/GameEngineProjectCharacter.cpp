// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameEngineProjectCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

AGameEngineProjectCharacter::AGameEngineProjectCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	DustParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DUST"));

	RootComponent = GetCapsuleComponent();

	SpringArm->SetupAttachment(RootComponent);
	GetMesh()->SetupAttachment(RootComponent);
	DustParticle->SetupAttachment(RootComponent);
	Camera->SetupAttachment(SpringArm);

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.f), FRotator(0.0f, -90.f, 0.0f));
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritRoll = false;
	SpringArm->bDoCollisionTest = false;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 720.f, 0.f);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_CARDBOARD(TEXT("/Game/ThirdPersonCPP/Assets/Free_Burrow_Cute_Series/FBX/Burrow_Walk_Forward_In_Place.Burrow_Walk_Forward_In_Place"));
	if (SK_CARDBOARD.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SK_CARDBOARD.Object);
	}

	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	static ConstructorHelpers::FClassFinder<UAnimInstance> MOLE_ANIM(TEXT("/Game/Animation/MoleAnimBlueprint.MoleAnimBlueprint_C"));
	if (MOLE_ANIM.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(MOLE_ANIM.Class);
	}

	static ConstructorHelpers::FObjectFinder<UParticleSystem> DUST_PARTICLE(TEXT("/Game/Particle/DustParticle.DustParticle"));
	if (DUST_PARTICLE.Succeeded())
	{
		particleObj = DUST_PARTICLE.Object;
		/*DustParticle->SetTemplate(DUST_PARTICLE.Object);
		DustParticle->bAutoActivate = false;
		DustParticle->Activate(false);*/
	}

}

void AGameEngineProjectCharacter::BeginPlay()
{
	Super::BeginPlay();

	SetViewMode(EMoleMode::GROUND);


}

// Called every frame
void AGameEngineProjectCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (DirectionToMove.SizeSquared() > 0.0f)
	{
		GetController()->SetControlRotation(FRotationMatrix::MakeFromX(DirectionToMove).Rotator());
		AddMovementInput(DirectionToMove);
	}
}

// Called to bind functionality to input
void AGameEngineProjectCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AGameEngineProjectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AGameEngineProjectCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &AGameEngineProjectCharacter::Turn);
	//PlayerInputComponent->BindAxis("LookUp", this, &AGameEngineProjectCharacter::LookUp);


	PlayerInputComponent->BindAction("Dig", IE_Pressed, this, &AGameEngineProjectCharacter::Dig);

}

void::AGameEngineProjectCharacter::Dig()
{
	FTimerHandle WaitHandle;
	float WaitTime = 1.f; 
	DustParticle->SetRelativeLocation(GetActorLocation());
	DustParticle->SetTemplate(particleObj);

	GetWorld()->GetTimerManager().SetTimer(WaitHandle, FTimerDelegate::CreateLambda([&]()
		{
			ViewChange();
		}), WaitTime, false);
}

void AGameEngineProjectCharacter::Turn(float value)
{
	if(CurrentMoleMode == EMoleMode::GROUND)
		AddControllerYawInput(value);
}
void AGameEngineProjectCharacter::MoveForward(float value)
{
	//DirectionToMove.X = value;
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), value);
}

void AGameEngineProjectCharacter::MoveRight(float value)
{
	//DirectionToMove.Y = value;
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), value);
}

void AGameEngineProjectCharacter::SetViewMode(EMoleMode vm)
{
	CurrentMoleMode = vm;

	switch (CurrentMoleMode)
	{
	case EMoleMode::UNDER:
		SpringArm->TargetArmLength = 2500.f;
		SpringArm->SetRelativeRotation(FRotator(-90.f, 0.f, 0.f));
		SpringArm->bUsePawnControlRotation = false;
		SpringArm->bInheritYaw = false;
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		Camera->SetProjectionMode(ECameraProjectionMode::Orthographic);
		Camera->SetOrthoWidth(2000.f);
		break;
	case EMoleMode::GROUND:
		SpringArm->TargetArmLength = 850.f;
		SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));
		SpringArm->bUsePawnControlRotation = true;
		SpringArm->bInheritYaw = true;
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		Camera->SetProjectionMode(ECameraProjectionMode::Perspective);
		break;
	}

}

void AGameEngineProjectCharacter::ViewChange()
{
	switch(CurrentMoleMode)
	{
	case EMoleMode::UNDER:
		SetViewMode(EMoleMode::GROUND);
		SetActorRelativeLocation(FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 500.f));
		break;
	case EMoleMode::GROUND:
		SetViewMode(EMoleMode::UNDER);
		SetActorRotation(FRotator(0, 0, 0));
		GetController()->SetControlRotation(FRotator(0, 0, 0));
		SetActorRelativeLocation(FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z - 500.f));
		break;
	}
}