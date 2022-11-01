// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityActor.h"
#include "AutomateLand.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_1_API AAutomateLand : public AEditorUtilityActor
{
	GENERATED_BODY()
	public:
	    UFUNCTION(BlueprintImplementableEvent)
	    void ModifyLandEvent();
	    UFUNCTION(BlueprintCallable)
	    void CallModifyLandEvent();
};
