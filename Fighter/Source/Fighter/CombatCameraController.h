// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "CombatCameraController.generated.h"

/**
 * 
 */
UCLASS()
class FIGHTER_API ACombatCameraController : public ACameraActor
{
	GENERATED_BODY()

		
public:
	//virtual void BeginPlay() override;

	//virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction);

	    UFUNCTION(BlueprintCallable)
		void CameraLookController();
		UFUNCTION(BlueprintCallable)
		void SetDefaults();
		UFUNCTION(BlueprintCallable)
		AActor* SetClosestPlayer(AActor* A, AActor* B);
		UFUNCTION(BlueprintCallable)
		void MoveToOutOfCombatPoint(AActor* A, AActor* B);

		UFUNCTION(BlueprintCallable)
		FVector PointBetweenTwoActors(AActor* A, AActor* B);

private:
	AActor* PlayerOne;
	AActor* PlayerTwo;
	AActor* ClosestPlayer;
	FVector MidPoint;
	FVector2D ScreenPoint;
	USceneComponent* Self;
};
