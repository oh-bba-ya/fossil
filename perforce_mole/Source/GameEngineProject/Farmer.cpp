// Fill out your copyright notice in the Description page of Project Settings.


#include "Farmer.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AFarmer::AFarmer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFarmer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFarmer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);// 현재 위치 얻기
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
