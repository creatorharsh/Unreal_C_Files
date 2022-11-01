// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityActor.h"
#include "ChangeSunTime.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT_1_API AChangeSunTime : public AEditorUtilityActor
{
	GENERATED_BODY()
	public:
		UFUNCTION(BlueprintImplementableEvent)
			void ChangeTimeValues(float hour , float minute , float latitude , float longitude, float timezone , float year , float day, float month);
		UFUNCTION(BlueprintCallable)
			void CallChangeTimeValues();

		UPROPERTY(EditAnywhere)
			float Hour = 6.0;
		UPROPERTY(EditAnywhere)
			float Minute = 0.0;
		UPROPERTY(EditAnywhere)
			float Latitude = 12.9;
		UPROPERTY(EditAnywhere)
			float Longitude = 77.3;
		UPROPERTY(EditAnywhere)
			float TimeZone = 5.3;
		UPROPERTY(EditAnywhere)
			float Year = 2021;
		UPROPERTY(EditAnywhere)
			float Day = 3;
		UPROPERTY(EditAnywhere)
			float Month = 6;
};
