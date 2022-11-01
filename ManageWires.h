		// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityActor.h"
#include "ManageWires.generated.h"

UCLASS()
class PROJECT_1_API AManageWires : public AEditorUtilityActor
{
	GENERATED_BODY()
	
public:	

	UFUNCTION(BlueprintImplementableEvent)
		void SpawnCableBetweenTwoPoles(AActor* Pole1 , AActor* Pole2 , float height , float width , bool IsWaterHose , float Offset);
	UFUNCTION(BlueprintCallable)
		void CallSpawnCableBetweenTwoPoles(AActor* Pole1, AActor* Pole2, float height , float width , bool IsWaterHose , float Offset);
	UPROPERTY(BlueprintReadWrite)
		AActor* CableActor;
	UFUNCTION(BlueprintCallable)
		void CallConstScript();


};
