// Fill out your copyright notice in the Description page of Project Settings.


#include "ChangeSunTime.h"

void AChangeSunTime::CallChangeTimeValues() {
	return ChangeTimeValues(Hour , Minute , Latitude, Longitude , TimeZone , Year , Day , Month);
}