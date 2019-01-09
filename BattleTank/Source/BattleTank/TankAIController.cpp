// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

ATank * ATankAIController::GetPossesedAITank() const {
	return Cast<ATank>(GetPawn());
}

void ATankAIController::BeginPlay() {
	auto ControlledTank = GetPossesedAITank();
	if (ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("AI Controlled Tank: %s"), *(ControlledTank->GetName()));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("No AI Tanks!"));
	}
	Super::BeginPlay();
}
