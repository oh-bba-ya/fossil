// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameEngineProjectCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

AGameEngineProjectCharacter::AGameEngineProjectCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.f), FRotator(0.0f, -90.f, 0.0f));

	SpringArm->bInheritPitch = false;
	SpringArm->bInheritRoll = false;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 720.f, 0.f);

}

void AGameEngineProjectCharacter::BeginPlay()
{
	Super::BeginPlay();

	SetViewMode(EViewMode::V3D);
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Hello, Game Character"));
	}

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


	PlayerInputComponent->BindAction("ViewChange", IE_Pressed, this, &AGameEngineProjectCharacter::ViewChange);

}
void AGameEngineProjectCharacter::Turn(float value)
{
	if(CurrentViewMode == EViewMode::V3D)
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

void AGameEngineProjectCharacter::SetViewMode(EViewMode vm)
{
	CurrentViewMode = vm;

	switch (CurrentViewMode)
	{
	case EViewMode::V2D:
		SpringArm->TargetArmLength = 2500.f;
		SpringArm->SetRelativeRotation(FRotator(-90.f, 0.f, 0.f));
		SpringArm->bUsePawnControlRotation = false;
		SpringArm->bInheritYaw = false;
		SpringArm->bDoCollisionTest = false;
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		Camera->SetProjectionMode(ECameraProjectionMode::Orthographic);
		Camera->SetOrthoWidth(2000.f);
		break;
	case EViewMode::V3D:
		SpringArm->TargetArmLength = 850.f;
		SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));
		SpringArm->bUsePawnControlRotation = true;
		SpringArm->bInheritYaw = true;
		SpringArm->bDoCollisionTest = true;
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		Camera->SetProjectionMode(ECameraProjectionMode::Perspective);
		break;
	}

}

void AGameEngineProjectCharacter::ViewChange()
{
	switch(CurrentViewMode)
	{
	case EViewMode::V2D:
		SetViewMode(EViewMode::V3D);
		SetActorRelativeLocation(FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 500.f));
		break;
	case EViewMode::V3D:
		SetViewMode(EViewMode::V2D);
		SetActorRotation(FRotator(0, 0, 0));
		GetController()->SetControlRotation(FRotator(0, 0, 0));
		SetActorRelativeLocation(FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z - 500.f));
		break;
	}
}