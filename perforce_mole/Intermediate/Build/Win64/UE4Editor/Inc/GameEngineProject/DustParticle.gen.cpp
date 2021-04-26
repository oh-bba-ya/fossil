// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEngineProject/DustParticle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDustParticle() {}
// Cross Module References
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_ADustParticle_NoRegister();
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_ADustParticle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GameEngineProject();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void ADustParticle::StaticRegisterNativesADustParticle()
	{
	}
	UClass* Z_Construct_UClass_ADustParticle_NoRegister()
	{
		return ADustParticle::StaticClass();
	}
	struct Z_Construct_UClass_ADustParticle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DustParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DustParticle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADustParticle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameEngineProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADustParticle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DustParticle.h" },
		{ "ModuleRelativePath", "DustParticle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADustParticle_Statics::NewProp_DustParticle_MetaData[] = {
		{ "Category", "DustParticle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DustParticle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADustParticle_Statics::NewProp_DustParticle = { "DustParticle", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADustParticle, DustParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADustParticle_Statics::NewProp_DustParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADustParticle_Statics::NewProp_DustParticle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADustParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADustParticle_Statics::NewProp_DustParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADustParticle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADustParticle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADustParticle_Statics::ClassParams = {
		&ADustParticle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADustParticle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADustParticle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADustParticle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADustParticle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADustParticle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADustParticle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADustParticle, 1737516397);
	template<> GAMEENGINEPROJECT_API UClass* StaticClass<ADustParticle>()
	{
		return ADustParticle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADustParticle(Z_Construct_UClass_ADustParticle, &ADustParticle::StaticClass, TEXT("/Script/GameEngineProject"), TEXT("ADustParticle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADustParticle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
