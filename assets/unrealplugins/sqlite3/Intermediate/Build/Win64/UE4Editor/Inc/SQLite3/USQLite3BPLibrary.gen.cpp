// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SQLite3/Public/USQLite3BPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSQLite3BPLibrary() {}
// Cross Module References
	SQLITE3_API UScriptStruct* Z_Construct_UScriptStruct_FData();
	UPackage* Z_Construct_UPackage__Script_SQLite3();
	SQLITE3_API UClass* Z_Construct_UClass_USQLite3BPLibrary_NoRegister();
	SQLITE3_API UClass* Z_Construct_UClass_USQLite3BPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SQLITE3_API UFunction* Z_Construct_UFunction_USQLite3BPLibrary_GetData();
	SQLITE3_API UFunction* Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand();
	SQLITE3_API UFunction* Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection();
// End Cross Module References
class UScriptStruct* FData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SQLITE3_API uint32 Get_Z_Construct_UScriptStruct_FData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FData, Z_Construct_UPackage__Script_SQLite3(), TEXT("Data"), sizeof(FData), Get_Z_Construct_UScriptStruct_FData_Hash());
	}
	return Singleton;
}
template<> SQLITE3_API UScriptStruct* StaticStruct<FData>()
{
	return FData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FData(FData::StaticStruct, TEXT("/Script/SQLite3"), TEXT("Data"), false, nullptr, nullptr);
static struct FScriptStruct_SQLite3_StaticRegisterNativesFData
{
	FScriptStruct_SQLite3_StaticRegisterNativesFData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Data")),new UScriptStruct::TCppStructOps<FData>);
	}
} ScriptStruct_SQLite3_StaticRegisterNativesFData;
	struct Z_Construct_UScriptStruct_FData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/USQLite3BPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/USQLite3BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FData, Data), METADATA_PARAMS(Z_Construct_UScriptStruct_FData_Statics::NewProp_Data_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FData_Statics::NewProp_Data_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SQLite3,
		nullptr,
		&NewStructOps,
		"Data",
		sizeof(FData),
		alignof(FData),
		Z_Construct_UScriptStruct_FData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SQLite3();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Data"), sizeof(FData), Get_Z_Construct_UScriptStruct_FData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FData_Hash() { return 3662854247U; }
	void USQLite3BPLibrary::StaticRegisterNativesUSQLite3BPLibrary()
	{
		UClass* Class = USQLite3BPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetData", &USQLite3BPLibrary::execGetData },
			{ "SQLExecuteCommand", &USQLite3BPLibrary::execSQLExecuteCommand },
			{ "SQLSetupConnection", &USQLite3BPLibrary::execSQLSetupConnection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQLite3BPLibrary_GetData_Statics
	{
		struct SQLite3BPLibrary_eventGetData_Parms
		{
			TArray<FData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQLite3BPLibrary_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLite3BPLibrary_eventGetData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQLite3BPLibrary_GetData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLite3BPLibrary_GetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLite3BPLibrary_GetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLite3BPLibrary_GetData_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLite3BPLibrary_GetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite3" },
		{ "DisplayName", "Get SQL data" },
		{ "Keywords", "SQLite3 Get Data" },
		{ "ModuleRelativePath", "Public/USQLite3BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLite3BPLibrary_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLite3BPLibrary, nullptr, "GetData", sizeof(SQLite3BPLibrary_eventGetData_Parms), Z_Construct_UFunction_USQLite3BPLibrary_GetData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USQLite3BPLibrary_GetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLite3BPLibrary_GetData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USQLite3BPLibrary_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLite3BPLibrary_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLite3BPLibrary_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand_Statics
	{
		struct SQLite3BPLibrary_eventSQLExecuteCommand_Parms
		{
			FString cmd;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cmd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand_Statics::NewProp_cmd = { "cmd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLite3BPLibrary_eventSQLExecuteCommand_Parms, cmd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand_Statics::NewProp_cmd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite3" },
		{ "DisplayName", "Execute SQL command" },
		{ "Keywords", "SQLite3 execute command" },
		{ "ModuleRelativePath", "Public/USQLite3BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLite3BPLibrary, nullptr, "SQLExecuteCommand", sizeof(SQLite3BPLibrary_eventSQLExecuteCommand_Parms), Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection_Statics
	{
		struct SQLite3BPLibrary_eventSQLSetupConnection_Parms
		{
			FString path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQLite3BPLibrary_eventSQLSetupConnection_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SQLite3" },
		{ "DisplayName", "Setup Connection" },
		{ "Keywords", "SQLite3 setup connection" },
		{ "ModuleRelativePath", "Public/USQLite3BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQLite3BPLibrary, nullptr, "SQLSetupConnection", sizeof(SQLite3BPLibrary_eventSQLSetupConnection_Parms), Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USQLite3BPLibrary_NoRegister()
	{
		return USQLite3BPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USQLite3BPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQLite3BPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SQLite3,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQLite3BPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQLite3BPLibrary_GetData, "GetData" }, // 467161324
		{ &Z_Construct_UFunction_USQLite3BPLibrary_SQLExecuteCommand, "SQLExecuteCommand" }, // 2647486792
		{ &Z_Construct_UFunction_USQLite3BPLibrary_SQLSetupConnection, "SQLSetupConnection" }, // 2417328466
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQLite3BPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "USQLite3BPLibrary.h" },
		{ "ModuleRelativePath", "Public/USQLite3BPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQLite3BPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQLite3BPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USQLite3BPLibrary_Statics::ClassParams = {
		&USQLite3BPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USQLite3BPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USQLite3BPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQLite3BPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USQLite3BPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQLite3BPLibrary, 981199436);
	template<> SQLITE3_API UClass* StaticClass<USQLite3BPLibrary>()
	{
		return USQLite3BPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQLite3BPLibrary(Z_Construct_UClass_USQLite3BPLibrary, &USQLite3BPLibrary::StaticClass, TEXT("/Script/SQLite3"), TEXT("USQLite3BPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQLite3BPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
