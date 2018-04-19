// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"

APickup::APickup()
{
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>("PickupMesh");
	PickupMesh->SetMobility(EComponentMobility::Movable);
	PickupMesh->SetSimulatePhysics(true);
	ItemID = FName("Please enter an ID");
	
}

