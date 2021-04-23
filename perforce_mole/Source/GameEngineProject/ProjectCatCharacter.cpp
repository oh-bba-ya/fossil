// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectCatCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AProjectCatCharacter::AProjectCatCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// Cat Mesh ��������
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> Cat_Abyss(TEXT("/Game/LowPoly_Cat/Meshes/Mesh_Cat_Abyss.Mesh_Cat_Abyss"));
	if (Cat_Abyss.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(Cat_Abyss.Object);
		UE_LOG(LogTemp, Warning, TEXT("SkeletalMesh Not Error"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("SkeletalMesh Error"));
	}

	
	
	//static ConstructorHelpers::FObjectFinder<UAnimInstance> CatRun_ANIM(TEXT("/Game/Animation/CatRunBle.CatRunBle"));
	static ConstructorHelpers::FClassFinder<UAnimInstance> CatRun_ANIM(TEXT("/Game/Animation/CatRunBle.CatRunBle_C"));
	if (CatRun_ANIM.Succeeded() )
	{
		
		GetMesh()->SetAnimInstanceClass(CatRun_ANIM.Class);
		
	}




}

// Called when the game starts or when spawned
void AProjectCatCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	// 30�� �� Abyss ����̴� �������. ( ��Ȳ�� ����� )
	SetLifeSpan(30);
	
}

// Called every frame
void AProjectCatCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ���� ��ġ ���
	auto startPos = GetActorLocation();

	//FVector playerPos = GetWorld()->DefaultPawnClass()->GetActorLocation();

	// �÷��̾� ��ġ ���
	FVector playerPos = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	

	// �̵��� ��ġ ���
	FVector direction = playerPos - startPos;

	

	// �÷��̾���� �Ÿ��� 1000 �̸��ϋ� �Ѿư�.
	if (direction.Size() < 1000) {
		

		direction.Normalize();

		// ��� �ٶ󺸰� �ϱ�. Kismet/KismetMathLibrary.h ��Ŭ����ؾ� ��밡��.
		FRotator rotator = UKismetMathLibrary::FindLookAtRotation(startPos, playerPos);

		SetActorRotation(rotator);

		// �ش�������� �÷��̾� �̵�
		SetActorLocation(startPos + direction);
	}

}

// Called to bind functionality to input
void AProjectCatCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

