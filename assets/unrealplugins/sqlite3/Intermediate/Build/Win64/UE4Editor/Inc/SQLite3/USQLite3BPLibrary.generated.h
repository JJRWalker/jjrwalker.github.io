// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FData;
#ifdef SQLITE3_USQLite3BPLibrary_generated_h
#error "USQLite3BPLibrary.generated.h already included, missing '#pragma once' in USQLite3BPLibrary.h"
#endif
#define SQLITE3_USQLite3BPLibrary_generated_h

#define SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FData_Statics; \
	SQLITE3_API static class UScriptStruct* StaticStruct();


template<> SQLITE3_API UScriptStruct* StaticStruct<struct FData>();

#define SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FData>*)Z_Param__Result=USQLite3BPLibrary::GetData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSQLExecuteCommand) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cmd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQLite3BPLibrary::SQLExecuteCommand(Z_Param_cmd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSQLSetupConnection) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQLite3BPLibrary::SQLSetupConnection(Z_Param_path); \
		P_NATIVE_END; \
	}


#define SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FData>*)Z_Param__Result=USQLite3BPLibrary::GetData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSQLExecuteCommand) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_cmd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQLite3BPLibrary::SQLExecuteCommand(Z_Param_cmd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSQLSetupConnection) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		USQLite3BPLibrary::SQLSetupConnection(Z_Param_path); \
		P_NATIVE_END; \
	}


#define SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQLite3BPLibrary(); \
	friend struct Z_Construct_UClass_USQLite3BPLibrary_Statics; \
public: \
	DECLARE_CLASS(USQLite3BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SQLite3"), NO_API) \
	DECLARE_SERIALIZER(USQLite3BPLibrary)


#define SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUSQLite3BPLibrary(); \
	friend struct Z_Construct_UClass_USQLite3BPLibrary_Statics; \
public: \
	DECLARE_CLASS(USQLite3BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SQLite3"), NO_API) \
	DECLARE_SERIALIZER(USQLite3BPLibrary)


#define SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLite3BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLite3BPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLite3BPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLite3BPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLite3BPLibrary(USQLite3BPLibrary&&); \
	NO_API USQLite3BPLibrary(const USQLite3BPLibrary&); \
public:


#define SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQLite3BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQLite3BPLibrary(USQLite3BPLibrary&&); \
	NO_API USQLite3BPLibrary(const USQLite3BPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQLite3BPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQLite3BPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQLite3BPLibrary)


#define SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_PRIVATE_PROPERTY_OFFSET
#define SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_38_PROLOG
#define SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_PRIVATE_PROPERTY_OFFSET \
	SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_RPC_WRAPPERS \
	SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_INCLASS \
	SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_PRIVATE_PROPERTY_OFFSET \
	SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_INCLASS_NO_PURE_DECLS \
	SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SQLite3BPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SQLITE3_API UClass* StaticClass<class USQLite3BPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SQLtest_Plugins_sqlite3_Source_SQLite3_Public_USQLite3BPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
