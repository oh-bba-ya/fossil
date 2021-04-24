// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "EnemyCharacter.h"
#include "BehaviorTree/BehaviorTree.h"

AEnemyAIController::AEnemyAIController() {
	// 컴포넌트 초기화
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BLackboardComp"));
}

// 컨트롤러가 Pawn/Character를 소유할 때 호출됨
void AEnemyAIController::OnPossess(APawn* InPawn) {
	Super::OnPossess(InPawn);
	// InPawn을 EnemyCharacter로 변환
	auto character = Cast<AEnemyCharacter>(InPawn);
	// 포인터가 유효한지 검사
	if (character && character->EnemyBehaviorTree) {
		BlackboardComp->InitializeBlackboard(*character->EnemyBehaviorTree->BlackboardAsset);
		TargetKeyID = BlackboardComp->GetKeyID("Target");
		BehaviorComp->StartTree(*character->EnemyBehaviorTree);
	}
}
