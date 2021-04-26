// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameEngineProjectCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

AGameEngineProjectCharacter::AGameEngineProjectCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	//Dust = CreateDefaultSubobject<ADustParticle>(TEXT("DUST"));
	//Dust->DisableParticle();

	RootComponent = GetCapsuleComponent();

	TriggerCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TriggerCapsule"));

	float capHeigth, capRad;
	GetCapsuleComponent()->GetScaledCapsuleSize(capRad, capHeigth);
	TriggerCapsule->InitCapsuleSize(capRad, capHeigth);
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Player"));
	TriggerCapsule->SetupAttachment(RootComponent);


	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AGameEngineProjectCharacter::OnOverlapBegin);
	GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &AGameEngineProjectCharacter::OnOverlapEnd);
	

	SpringArm->SetupAttachment(RootComponent);
	GetMesh()->SetupAttachment(RootComponent);
	Camera->SetupAttachment(SpringArm);

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -80.f), FRotator(0.0f, -90.f, 0.0f));
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

	currntHungryPoint = 100.f;
	maxHungryPoint = 100.f;
	surviveTime = 0.f;
	
	static ConstructorHelpers::FClassFinder<ADustParticle> DUST_PARTICLE(TEXT("/Game/DustParticleBP"));
	if (DUST_PARTICLE.Succeeded())
	{
		Dust = DUST_PARTICLE.Class;
	}
}

void AGameEngineProjectCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BeginPlayer"));
	}

	SetViewMode(EMoleMode::GROUND);
}

// Called every frame
void AGameEngineProjectCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateHungryPoint(DeltaTime);
	UpdateSurviveTime(DeltaTime);

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
	PlayerInputComponent->BindAction("Eat", IE_Pressed, this, &AGameEngineProjectCharacter::EatTomato);

}

void::AGameEngineProjectCharacter::Dig()
{
	FTimerHandle WaitHandle;
	float WaitTime = 1.f;
	/*Dust->AbleParticle();
	Dust->SetActorLocation(GetActorLocation());*/
		
	CreateDustParticle();

	GetWorld()->GetTimerManager().SetTimer(WaitHandle, FTimerDelegate::CreateLambda([&]()
		{
			ViewChange();
			//Dust->DisableParticle();
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

void AGameEngineProjectCharacter::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		TriggerTomato = OtherActor;
	}
}
void AGameEngineProjectCharacter::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		TriggerTomato = nullptr;
	}
}
void AGameEngineProjectCharacter::EatTomato()
{
	if (TriggerTomato)
	{
		TriggerTomato->Destroy();
		
		currntHungryPoint = (currntHungryPoint + 10.f);
		if (currntHungryPoint > 100.f)
			currntHungryPoint = 100.f;
	}
}
void AGameEngineProjectCharacter::UpdateHungryPoint(float deltaTime)
{
	if (currntHungryPoint >= 0)
	{
		currntHungryPoint -= deltaTime;
	}
}
void AGameEngineProjectCharacter::UpdateSurviveTime(float deltaTime)
{
	surviveTime += deltaTime;
}
float AGameEngineProjectCharacter::GetHungryPoint()
{
	return (currntHungryPoint / maxHungryPoint);
}
FText AGameEngineProjectCharacter::GetHungryPointText()
{
	int32 HP = FMath::RoundHalfFromZero((currntHungryPoint / maxHungryPoint) * 100);
	FString HPS = FString::FromInt(HP);
	FString HungryHUD = FString(TEXT("Hungry: ")) + HPS + FString(TEXT("%"));
	FText HPText = FText::FromString(HungryHUD);
	return HPText;
}
FText AGameEngineProjectCharacter::GetSurviveTimeText()
{
	int32 ST = FMath::RoundHalfFromZero(surviveTime);
	FString STS = FString::FromInt(ST);
	FString SurviveHUD = FString(TEXT("Survive Time: ")) + STS + FString(TEXT("s"));
	FText STText = FText::FromString(SurviveHUD);
	return STText;
}
void AGameEngineProjectCharacter::CreateDustParticle()
{
	if (Dust)
	{
		if (GetWorld())
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			ADustParticle* DustPar = GetWorld()->SpawnActor<ADustParticle>(Dust, GetActorLocation(), GetActorRotation(), SpawnParams);

		}
	}
}