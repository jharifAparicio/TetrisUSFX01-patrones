// Fill out your copyright notice in the Description page of Project Settings.


#include "CountPieces.h"
#include "Board.h"
#include "Observer.h"

// Sets default values
ACountPieces::ACountPieces()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACountPieces::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACountPieces::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACountPieces::Update (ABoard* board) {
	int count = board->CountPieces;
		   //Execute the Morning routine
	GEngine->AddOnScreenDebugMessage (-1, 5.0f, FColor::Red,FString::Printf (TEXT ("se destruyeron %d")));
}

void ACountPieces::SetCount (ABoard *myCountPieces) {
	board = myCountPieces;
	board->Attach(this);
}

