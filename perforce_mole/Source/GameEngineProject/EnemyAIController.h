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
	// AI 컴포넌트 참조들
	UBehaviorTreeComponent* BehaviorComp;
	UBlackboardComponent* BlackboardComp;

public:
	AEnemyAIController();

	// 컨트롤러가 Pawn/Character를 소유할때 호출됨. Possess -> OnPossess로 함수명 바뀜(4.2이상 버전부터)
	virtual void OnPossess(APawn* InPawn) override;

	FBlackboard::FKey TargetKeyID;
	
};
