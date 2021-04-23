// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectCatCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AProjectCatCharacter::AProjectCatCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// Cat Mesh 가져오기
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
	
	// 30초 후 Abyss 고양이는 사라진다. ( 주황색 고양이 )
	SetLifeSpan(30);
	
}

// Called every frame
void AProjectCatCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 현재 위치 얻기
	auto startPos = GetActorLocation();

	//FVector playerPos = GetWorld()->DefaultPawnClass()->GetActorLocation();

	// 플레이어 위치 얻기
	FVector playerPos = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	

	// 이동할 위치 얻기
	FVector direction = playerPos - startPos;

	

	// 플레이어와의 거리가 1000 미만일떄 쫓아감.
	if (direction.Size() < 1000) {
		

		direction.Normalize();

		// 대상 바라보게 하기. Kismet/KismetMathLibrary.h 인클루드해야 사용가능.
		FRotator rotator = UKismetMathLibrary::FindLookAtRotation(startPos, playerPos);

		SetActorRotation(rotator);

		// 해당방향으로 플레이어 이동
		SetActorLocation(startPos + direction);
	}

}

// Called to bind functionality to input
void AProjectCatCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

