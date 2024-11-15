// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADAPTER_AdapterGameMode_generated_h
#error "AdapterGameMode.generated.h already included, missing '#pragma once' in AdapterGameMode.h"
#endif
#define ADAPTER_AdapterGameMode_generated_h

#define Adapter_Source_Adapter_AdapterGameMode_h_12_SPARSE_DATA
#define Adapter_Source_Adapter_AdapterGameMode_h_12_RPC_WRAPPERS
#define Adapter_Source_Adapter_AdapterGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Adapter_Source_Adapter_AdapterGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdapterGameMode(); \
	friend struct Z_Construct_UClass_AAdapterGameMode_Statics; \
public: \
	DECLARE_CLASS(AAdapterGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Adapter"), ADAPTER_API) \
	DECLARE_SERIALIZER(AAdapterGameMode)


#define Adapter_Source_Adapter_AdapterGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAdapterGameMode(); \
	friend struct Z_Construct_UClass_AAdapterGameMode_Statics; \
public: \
	DECLARE_CLASS(AAdapterGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Adapter"), ADAPTER_API) \
	DECLARE_SERIALIZER(AAdapterGameMode)


#define Adapter_Source_Adapter_AdapterGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADAPTER_API AAdapterGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdapterGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADAPTER_API, AAdapterGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdapterGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADAPTER_API AAdapterGameMode(AAdapterGameMode&&); \
	ADAPTER_API AAdapterGameMode(const AAdapterGameMode&); \
public:


#define Adapter_Source_Adapter_AdapterGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADAPTER_API AAdapterGameMode(AAdapterGameMode&&); \
	ADAPTER_API AAdapterGameMode(const AAdapterGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADAPTER_API, AAdapterGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdapterGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAdapterGameMode)


#define Adapter_Source_Adapter_AdapterGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EnemyAdapter() { return STRUCT_OFFSET(AAdapterGameMode, EnemyAdapter); }


#define Adapter_Source_Adapter_AdapterGameMode_h_9_PROLOG
#define Adapter_Source_Adapter_AdapterGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Adapter_Source_Adapter_AdapterGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Adapter_Source_Adapter_AdapterGameMode_h_12_SPARSE_DATA \
	Adapter_Source_Adapter_AdapterGameMode_h_12_RPC_WRAPPERS \
	Adapter_Source_Adapter_AdapterGameMode_h_12_INCLASS \
	Adapter_Source_Adapter_AdapterGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Adapter_Source_Adapter_AdapterGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Adapter_Source_Adapter_AdapterGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Adapter_Source_Adapter_AdapterGameMode_h_12_SPARSE_DATA \
	Adapter_Source_Adapter_AdapterGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Adapter_Source_Adapter_AdapterGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Adapter_Source_Adapter_AdapterGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTER_API UClass* StaticClass<class AAdapterGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Adapter_Source_Adapter_AdapterGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
