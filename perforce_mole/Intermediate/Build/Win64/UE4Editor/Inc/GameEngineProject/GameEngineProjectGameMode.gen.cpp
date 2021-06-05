// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEngineProject/GameEngineProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEngineProjectGameMode() {}
// Cross Module References
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_AGameEngineProjectGameMode_NoRegister();
	GAMEENGINEPROJECT_API UClass* Z_Construct_UClass_AGameEngineProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameEngineProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AGameEngineProjectGameMode::StaticRegisterNativesAGameEngineProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGameEngineProjectGameMode_NoRegister()
	{
		return AGameEngineProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameEngineProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameEngineProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameEngineProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEngineProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameEngineProjectGameMode.h" },
		{ "ModuleRelativePath", "GameEngineProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEngineProjectGameMode_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "GameEngineProjectGameMode" },
		{ "ModuleRelativePath", "GameEngineProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameEngineProjectGameMode_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameEngineProjectGameMode, HUDWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGameEngineProjectGameMode_Statics::NewProp_HUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEngineProjectGameMode_Statics::NewProp_HUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameEngineProjectGameMode_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Category", "GameEngineProjectGameMode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameEngineProjectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameEngineProjectGameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameEngineProjectGameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameEngineProjectGameMode_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEngineProjectGameMode_Statics::NewProp_CurrentWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameEngineProjectGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEngineProjectGameMode_Statics::NewProp_HUDWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameEngineProjectGameMode_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameEngineProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameEngineProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameEngineProjectGameMode_Statics::ClassParams = {
		&AGameEngineProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameEngineProjectGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameEngineProjectGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameEngineProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameEngineProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameEngineProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameEngineProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameEngineProjectGameMode, 3481722908);
	template<> GAMEENGINEPROJECT_API UClass* StaticClass<AGameEngineProjectGameMode>()
	{
		return AGameEngineProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameEngineProjectGameMode(Z_Construct_UClass_AGameEngineProjectGameMode, &AGameEngineProjectGameMode::StaticClass, TEXT("/Script/GameEngineProject"), TEXT("AGameEngineProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameEngineProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
