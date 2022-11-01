// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "UpdateWireWithPole.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_1_API AUpdateWireWithPole : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
		AActor* CableActor;
	UFUNCTION(BlueprintCallable)
		void CallConstScript();
};
