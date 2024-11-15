// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Adapter/EnemyAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAdapter() {}
// Cross Module References
	ADAPTER_API UClass* Z_Construct_UClass_AEnemyAdapter_NoRegister();
	ADAPTER_API UClass* Z_Construct_UClass_AEnemyAdapter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Adapter();
	ADAPTER_API UClass* Z_Construct_UClass_UAdapterInterface_NoRegister();
// End Cross Module References
	void AEnemyAdapter::StaticRegisterNativesAEnemyAdapter()
	{
	}
	UClass* Z_Construct_UClass_AEnemyAdapter_NoRegister()
	{
		return AEnemyAdapter::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Adapter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyAdapter.h" },
		{ "ModuleRelativePath", "EnemyAdapter.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemyAdapter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAdapterInterface_NoRegister, (int32)VTABLE_OFFSET(AEnemyAdapter, IAdapterInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyAdapter_Statics::ClassParams = {
		&AEnemyAdapter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyAdapter, 2360751843);
	template<> ADAPTER_API UClass* StaticClass<AEnemyAdapter>()
	{
		return AEnemyAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyAdapter(Z_Construct_UClass_AEnemyAdapter, &AEnemyAdapter::StaticClass, TEXT("/Script/Adapter"), TEXT("AEnemyAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
