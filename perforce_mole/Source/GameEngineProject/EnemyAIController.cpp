// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "EnemyCharacter.h"
#include "BehaviorTree/BehaviorTree.h"

AEnemyAIController::AEnemyAIController() {
	// ������Ʈ �ʱ�ȭ
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BLackboardComp"));
}

// ��Ʈ�ѷ��� Pawn/Character�� ������ �� ȣ���
void AEnemyAIController::OnPossess(APawn* InPawn) {
	Super::OnPossess(InPawn);
	// InPawn�� EnemyCharacter�� ��ȯ
	auto character = Cast<AEnemyCharacter>(InPawn);
	// �����Ͱ� ��ȿ���� �˻�
	if (character && character->EnemyBehaviorTree) {
		BlackboardComp->InitializeBlackboard(*character->EnemyBehaviorTree->BlackboardAsset);
		TargetKeyID = BlackboardComp->GetKeyID("Target");
		BehaviorComp->StartTree(*character->EnemyBehaviorTree);
	}
}
