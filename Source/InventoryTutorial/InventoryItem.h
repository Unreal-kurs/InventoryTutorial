// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CraftingInfo.h"
#include "Engine/DataTable.h"
#include "InventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItem : public FTableRowBase
{
	GENERATED_BODY();

public:
	FInventoryItem()
	{
		Name = FText::FromString("Item");
		Action = FText::FromString("Use");
		Description = FText::FromString("Please enter a description for this item.");
		Value = 10;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class APickup> ItemPickup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Action;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UTexture2D* Thumbnail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FCraftingInfo> CraftCombinations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bCanBeUsed;

	bool operator==(const FInventoryItem& Item) const
	{
		if (ItemID == Item.ItemID)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
