// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBTTaskNode.h"

EBTNodeResult::Type UMyBTTaskNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UE_LOG(LogTemp, Warning, TEXT("AI in C++"))
	return EBTNodeResult::Succeeded;
}


