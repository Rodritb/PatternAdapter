// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADAPTER_EnemyAdapter_generated_h
#error "EnemyAdapter.generated.h already included, missing '#pragma once' in EnemyAdapter.h"
#endif
#define ADAPTER_EnemyAdapter_generated_h

#define Adapter_Source_Adapter_EnemyAdapter_h_12_SPARSE_DATA
#define Adapter_Source_Adapter_EnemyAdapter_h_12_RPC_WRAPPERS
#define Adapter_Source_Adapter_EnemyAdapter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Adapter_Source_Adapter_EnemyAdapter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAdapter(); \
	friend struct Z_Construct_UClass_AEnemyAdapter_Statics; \
public: \
	DECLARE_CLASS(AEnemyAdapter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Adapter"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAdapter) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemyAdapter*>(this); }


#define Adapter_Source_Adapter_EnemyAdapter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAdapter(); \
	friend struct Z_Construct_UClass_AEnemyAdapter_Statics; \
public: \
	DECLARE_CLASS(AEnemyAdapter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Adapter"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAdapter) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemyAdapter*>(this); }


#define Adapter_Source_Adapter_EnemyAdapter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAdapter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAdapter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAdapter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAdapter(AEnemyAdapter&&); \
	NO_API AEnemyAdapter(const AEnemyAdapter&); \
public:


#define Adapter_Source_Adapter_EnemyAdapter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAdapter(AEnemyAdapter&&); \
	NO_API AEnemyAdapter(const AEnemyAdapter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAdapter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAdapter)


#define Adapter_Source_Adapter_EnemyAdapter_h_12_PRIVATE_PROPERTY_OFFSET
#define Adapter_Source_Adapter_EnemyAdapter_h_9_PROLOG
#define Adapter_Source_Adapter_EnemyAdapter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Adapter_Source_Adapter_EnemyAdapter_h_12_PRIVATE_PROPERTY_OFFSET \
	Adapter_Source_Adapter_EnemyAdapter_h_12_SPARSE_DATA \
	Adapter_Source_Adapter_EnemyAdapter_h_12_RPC_WRAPPERS \
	Adapter_Source_Adapter_EnemyAdapter_h_12_INCLASS \
	Adapter_Source_Adapter_EnemyAdapter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Adapter_Source_Adapter_EnemyAdapter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Adapter_Source_Adapter_EnemyAdapter_h_12_PRIVATE_PROPERTY_OFFSET \
	Adapter_Source_Adapter_EnemyAdapter_h_12_SPARSE_DATA \
	Adapter_Source_Adapter_EnemyAdapter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Adapter_Source_Adapter_EnemyAdapter_h_12_INCLASS_NO_PURE_DECLS \
	Adapter_Source_Adapter_EnemyAdapter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTER_API UClass* StaticClass<class AEnemyAdapter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Adapter_Source_Adapter_EnemyAdapter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
