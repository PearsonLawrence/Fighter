// Fill out your copyright notice in the Description page of Project Settings.

#include "CombatCameraController.h"
#include "Engine/World.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "FighterCharacter.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
//void ACombatCameraController::BeginPlay()
//{
//	SetDefaults();
//}

//void ACombatCameraController::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) 
//{
//	Super::Tick(DeltaTime);
//}

void ACombatCameraController::SetDefaults()
{
	TArray<AActor*> list;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFighterCharacter::StaticClass(), list);
	

	if (list[0] != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("%s"), *list[0]->GetName());
	}
	else
	{
		return;
	}

	PlayerOne = list[0];
	PlayerTwo = list[1];
}

AActor* ACombatCameraController::SetClosestPlayer(AActor * A, AActor * B)
{
	float LengthToA = FVector::Dist(GetActorLocation(), A->GetActorLocation());
	float LengthToB = FVector::Dist(GetActorLocation(), B->GetActorLocation());
	
	if (LengthToA > LengthToB)
	{
		return B;
	}
	else
	{
		return A;
	}
	return nullptr;
}

void ACombatCameraController::MoveToOutOfCombatPoint(AActor* A, AActor* B)
{
	ClosestPlayer = SetClosestPlayer(A, B);
	if (ClosestPlayer == nullptr) { return; }
	if ((ClosestPlayer->GetVelocity.Y <= .05 || ClosestPlayer->GetVelocity.Y >= -.05))
	{
		UGameplayStatics::GetPlayerController(GetWorld(), 0)->ProjectWorldLocationToScreen(ClosestPlayer->GetActorLocation, ScreenPoint);
		if(ScreenPoint.X > )
		{

			FVector Angle = (ClosestPlayer->GetActorLocation() - MidPoint);
			FVector IdealPoint = FVector(Angle.GetSafeNormal() * 400) + ClosestPlayer->GetActorLocation();
			FVector ActualPoint = FVector(IdealPoint.X, IdealPoint.Y, MidPoint.Z + 10);

			SetActorLocation(FMath::Lerp(GetActorLocation(), FVector(IdealPoint.X, IdealPoint.Y, MidPoint.Z + 100), .04));
		}
		else
		{
			FVector Angle = FVector(ClosestPlayer->GetActorLocation() - MidPoint);
			FVector IdealPoint = FVector(Angle.GetSafeNormal() * 400) + ClosestPlayer->GetActorLocation();
			FVector ActualPoint = FVector(IdealPoint.X, IdealPoint.Y, MidPoint.Z + 10);

			SetActorLocation(FMath::Lerp(GetActorLocation(), FVector(IdealPoint.X, IdealPoint.Y, MidPoint.Z + 100), .02));

		}
	}
	else
	{

	}
}

FVector ACombatCameraController::PointBetweenTwoActors(AActor * A, AActor * B)
{
	FVector Direction = (A->GetActorLocation() - B->GetActorLocation());
	FVector Distance = (A->GetActorLocation() + B->GetActorLocation()) / 2;

	return Distance;
}

void ACombatCameraController::CameraLookController()
{
	if (SceneComponent != nullptr)
	{
	}
	else
	{
		return;
	}

	MidPoint = PointBetweenTwoActors(PlayerOne, PlayerTwo);
	SceneComponent->SetRelativeRotation(UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), MidPoint));
}
