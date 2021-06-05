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
	Super::Tick(DeltaTime);// ���� ��ġ ���
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
