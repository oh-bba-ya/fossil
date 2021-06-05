// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class GAMEENGINEPROJECT_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

private:
	// AI ������Ʈ ������
	UBehaviorTreeComponent* BehaviorComp;
	UBlackboardComponent* BlackboardComp;

public:
	AEnemyAIController();

	// ��Ʈ�ѷ��� Pawn/Character�� �����Ҷ� ȣ���. Possess -> OnPossess�� �Լ��� �ٲ�(4.2�̻� ��������)
	virtual void OnPossess(APawn* InPawn) override;

	FBlackboard::FKey TargetKeyID;
	
};
