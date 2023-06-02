// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Observer.h"
#include "CountPieces.generated.h"

class  ABoard;

UCLASS()
class TETRISUSFX01_API ACountPieces : public AActor, public IObserver
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACountPieces();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	ABoard *board;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void Update (class ABoard* board) override;

	void SetCount (ABoard* myCountPieces);
};
