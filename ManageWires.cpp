// Fill out your copyright notice in the Description page of Project Settings.


#include "ManageWires.h"



void AManageWires::CallSpawnCableBetweenTwoPoles(AActor* Pole1, AActor* Pole2, float height , float width , bool IsWaterHose , float Offset) {
	return SpawnCableBetweenTwoPoles(Pole1, Pole2, height , width , IsWaterHose , Offset );
}

void AManageWires::CallConstScript() {
	CableActor->RerunConstructionScripts();
}

