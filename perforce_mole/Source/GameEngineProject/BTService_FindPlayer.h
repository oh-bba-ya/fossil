// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BTService_FindPlayer.generated.h"

/**
 * 
 */
UCLASS()
class GAMEENGINEPROJECT_API UBTService_FindPlayer : public UBTService
{
	GENERATED_BODY()
	
public:
	UBTService_FindPlayer();
	//** 다음 틱 주기 갱신
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
