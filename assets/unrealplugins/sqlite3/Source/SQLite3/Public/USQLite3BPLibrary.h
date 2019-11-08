// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "sqlite3.h"
#include "USQLite3BPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/

USTRUCT(BlueprintType)
struct FData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly)
	TArray<FString> Data;
};



UCLASS()
class USQLite3BPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	static TArray<FData> ReturnedData;
	static sqlite3* database;
	static int connection;
	static int execute;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Setup Connection", Keywords = "SQLite3 setup connection"), Category = "SQLite3")
	static void SQLSetupConnection(FString path);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute SQL command", Keywords = "SQLite3 execute command"), Category = "SQLite3")
	static void SQLExecuteCommand(FString cmd);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get SQL data", Keywords = "SQLite3 Get Data"), Category = "SQLite3")
	static TArray<FData> GetData() { return ReturnedData; };

	static int Callback(void* data, int rows, char** fields, char** colName);
};
