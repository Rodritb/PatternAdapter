// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Adapter/AdapterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdapterGameMode() {}
// Cross Module References
	ADAPTER_API UClass* Z_Construct_UClass_AAdapterGameMode_NoRegister();
	ADAPTER_API UClass* Z_Construct_UClass_AAdapterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Adapter();
	ADAPTER_API UClass* Z_Construct_UClass_AEnemyAdapter_NoRegister();
// End Cross Module References
	void AAdapterGameMode::StaticRegisterNativesAAdapterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAdapterGameMode_NoRegister()
	{
		return AAdapterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAdapterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyAdapter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyAdapter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdapterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Adapter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AdapterGameMode.h" },
		{ "ModuleRelativePath", "AdapterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapterGameMode_Statics::NewProp_EnemyAdapter_MetaData[] = {
		{ "ModuleRelativePath", "AdapterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdapterGameMode_Statics::NewProp_EnemyAdapter = { "EnemyAdapter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdapterGameMode, EnemyAdapter), Z_Construct_UClass_AEnemyAdapter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdapterGameMode_Statics::NewProp_EnemyAdapter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterGameMode_Statics::NewProp_EnemyAdapter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdapterGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdapterGameMode_Statics::NewProp_EnemyAdapter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdapterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdapterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdapterGameMode_Statics::ClassParams = {
		&AAdapterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdapterGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAdapterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdapterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdapterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdapterGameMode, 2748615086);
	template<> ADAPTER_API UClass* StaticClass<AAdapterGameMode>()
	{
		return AAdapterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdapterGameMode(Z_Construct_UClass_AAdapterGameMode, &AAdapterGameMode::StaticClass, TEXT("/Script/Adapter"), TEXT("AAdapterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdapterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
