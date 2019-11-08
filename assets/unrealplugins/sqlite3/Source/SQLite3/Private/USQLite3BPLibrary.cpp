// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "string"
#include "USQLite3BPLibrary.h"
#include "USQLite3.h"

TArray<FData> USQLite3BPLibrary::ReturnedData;
sqlite3* USQLite3BPLibrary::database;
int USQLite3BPLibrary::connection;
int USQLite3BPLibrary::execute;

USQLite3BPLibrary::USQLite3BPLibrary(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{

}

float USQLite3BPLibrary::SQLite3SampleFunction(float Param)
{
	return -1;
}

void USQLite3BPLibrary::SQLSetupConnection(FString path)
{
	std::string stringPath(TCHAR_TO_UTF8(*path));

	const char* cPath = stringPath.c_str();

	connection = sqlite3_open(cPath, &database);
	if (connection != 0)
	{
		UE_LOG(LogTemp, Error, TEXT("SQLITE3: DATABASE NOT CONNECTED EXITED WITH CODE %d"), connection)
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("SQLITE3: DATABASE CONNECTED"))
	}
}

void USQLite3BPLibrary::SQLExecuteCommand(FString cmd)
{
	if (connection == 0)
	{
		ReturnedData.Empty();
		const char* callbackData = "CALLBACK CALLED";
		std::string stringSQL(TCHAR_TO_UTF8(*cmd));
		const char* sql = stringSQL.c_str();
		char* error = 0;

		execute = sqlite3_exec(database, sql, Callback, (void*)callbackData, &error);

		sqlite3_close(database);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("SQLITE3: DATABASE NOT CONNECTED"))
	}
}

int USQLite3BPLibrary::Callback(void * data, int rows, char ** fields, char ** colName)
{
	FData retData = FData();
	for (int i = 0; i < rows; i++)
	{
		retData.Data.Add(FString(fields[i]));
	}
	ReturnedData.Add(retData);
	return 0;
}

