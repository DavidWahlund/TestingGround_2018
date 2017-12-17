// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBTTaskNode.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UMyBTTaskNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	auto BlackboardComp = OwnerComp.GetBlackboardComponent();
	auto Index = BlackboardComp->GetValueAsInt(IndexKey.SelectedKeyName);

	
	
	//UPROPERTY(EditAnywhere, Category = "Blackboard")

	UE_LOG(LogTemp, Warning, TEXT("Waypoint index: %i"), Index)
	return EBTNodeResult::Succeeded;
}


