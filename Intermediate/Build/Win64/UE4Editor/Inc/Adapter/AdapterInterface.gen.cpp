// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Adapter/AdapterInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdapterInterface() {}
// Cross Module References
	ADAPTER_API UClass* Z_Construct_UClass_UAdapterInterface_NoRegister();
	ADAPTER_API UClass* Z_Construct_UClass_UAdapterInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Adapter();
// End Cross Module References
	void UAdapterInterface::StaticRegisterNativesUAdapterInterface()
	{
	}
	UClass* Z_Construct_UClass_UAdapterInterface_NoRegister()
	{
		return UAdapterInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAdapterInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdapterInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Adapter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdapterInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "AdapterInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdapterInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAdapterInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAdapterInterface_Statics::ClassParams = {
		&UAdapterInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAdapterInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdapterInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdapterInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAdapterInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAdapterInterface, 523879021);
	template<> ADAPTER_API UClass* StaticClass<UAdapterInterface>()
	{
		return UAdapterInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdapterInterface(Z_Construct_UClass_UAdapterInterface, &UAdapterInterface::StaticClass, TEXT("/Script/Adapter"), TEXT("UAdapterInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdapterInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
