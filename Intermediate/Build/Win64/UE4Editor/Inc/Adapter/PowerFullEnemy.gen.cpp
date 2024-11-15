// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Adapter/PowerFullEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerFullEnemy() {}
// Cross Module References
	ADAPTER_API UClass* Z_Construct_UClass_APowerFullEnemy_NoRegister();
	ADAPTER_API UClass* Z_Construct_UClass_APowerFullEnemy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Adapter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APowerFullEnemy::StaticRegisterNativesAPowerFullEnemy()
	{
	}
	UClass* Z_Construct_UClass_APowerFullEnemy_NoRegister()
	{
		return APowerFullEnemy::StaticClass();
	}
	struct Z_Construct_UClass_APowerFullEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemigoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemigoMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APowerFullEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Adapter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerFullEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerFullEnemy.h" },
		{ "ModuleRelativePath", "PowerFullEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APowerFullEnemy_Statics::NewProp_EnemigoMesh_MetaData[] = {
		{ "Category", "Enemigo" },
		{ "Comment", "// Componente de malla\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PowerFullEnemy.h" },
		{ "ToolTip", "Componente de malla" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APowerFullEnemy_Statics::NewProp_EnemigoMesh = { "EnemigoMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APowerFullEnemy, EnemigoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APowerFullEnemy_Statics::NewProp_EnemigoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APowerFullEnemy_Statics::NewProp_EnemigoMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APowerFullEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APowerFullEnemy_Statics::NewProp_EnemigoMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APowerFullEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APowerFullEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APowerFullEnemy_Statics::ClassParams = {
		&APowerFullEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APowerFullEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APowerFullEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APowerFullEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APowerFullEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APowerFullEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APowerFullEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APowerFullEnemy, 4124647082);
	template<> ADAPTER_API UClass* StaticClass<APowerFullEnemy>()
	{
		return APowerFullEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APowerFullEnemy(Z_Construct_UClass_APowerFullEnemy, &APowerFullEnemy::StaticClass, TEXT("/Script/Adapter"), TEXT("APowerFullEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APowerFullEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
