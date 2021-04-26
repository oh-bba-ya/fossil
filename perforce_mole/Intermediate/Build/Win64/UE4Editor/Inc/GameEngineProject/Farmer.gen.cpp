// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEngineProject/Farmer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmer() {}
// Cross Module References
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_AFarmer_NoRegister();
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_AFarmer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GameEngineProject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
// End Cross Module References
	void AFarmer::StaticRegisterNativesAFarmer()
	{
	}
	UClass* Z_Construct_UClass_AFarmer_NoRegister()
	{
		return AFarmer::StaticClass();
	}
	struct Z_Construct_UClass_AFarmer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_catAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_catAnim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFarmer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameEngineProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Farmer.h" },
		{ "ModuleRelativePath", "Farmer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFarmer_Statics::NewProp_catAnim_MetaData[] = {
		{ "ModuleRelativePath", "Farmer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmer_Statics::NewProp_catAnim = { "catAnim", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFarmer, catAnim), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFarmer_Statics::NewProp_catAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmer_Statics::NewProp_catAnim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFarmer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmer_Statics::NewProp_catAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFarmer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFarmer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFarmer_Statics::ClassParams = {
		&AFarmer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFarmer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFarmer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFarmer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFarmer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFarmer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFarmer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFarmer, 1415130332);
	template<> GAMEENGINEPROJECT_API UClass* StaticClass<AFarmer>()
	{
		return AFarmer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFarmer(Z_Construct_UClass_AFarmer, &AFarmer::StaticClass, TEXT("/Script/GameEngineProject"), TEXT("AFarmer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFarmer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
