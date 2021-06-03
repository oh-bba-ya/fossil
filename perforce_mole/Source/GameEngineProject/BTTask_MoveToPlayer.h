// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_MoveToPlayer.generated.h"

/**
 * 
 */
UCLASS()
class GAMEENGINEPROJECT_API UBTTask_MoveToPlayer : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

public:
	/** ���۾��� �����Ѵ�. Succeeded, Failed �Ǵ� Inprogress�� ��ȯ�ؾ� �Ѵ�.
	* (use FinishLatentTask() When returning InProgress)
	this function should be considered as const (don't modify state of object) if node is not instanced! */
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
