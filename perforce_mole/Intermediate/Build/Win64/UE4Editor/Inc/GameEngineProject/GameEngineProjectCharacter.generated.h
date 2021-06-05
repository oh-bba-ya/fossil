// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GAMEENGINEPROJECT_GameEngineProjectCharacter_generated_h
#error "GameEngineProjectCharacter.generated.h already included, missing '#pragma once' in GameEngineProjectCharacter.h"
#endif
#define GAMEENGINEPROJECT_GameEngineProjectCharacter_generated_h

#define perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_SPARSE_DATA
#define perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateHole); \
	DECLARE_FUNCTION(execCreateDustParticle); \
	DECLARE_FUNCTION(execEatTomato); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execViewChange); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execGetSurviveTimeText); \
	DECLARE_FUNCTION(execGetHungryPointText); \
	DECLARE_FUNCTION(execGetHungryPoint); \
	DECLARE_FUNCTION(execUpdateDigTime); \
	DECLARE_FUNCTION(execUpdateSurviveTime); \
	DECLARE_FUNCTION(execUpdateHungryPoint);


#define perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateHole); \
	DECLARE_FUNCTION(execCreateDustParticle); \
	DECLARE_FUNCTION(execEatTomato); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execViewChange); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execGetSurviveTimeText); \
	DECLARE_FUNCTION(execGetHungryPointText); \
	DECLARE_FUNCTION(execGetHungryPoint); \
	DECLARE_FUNCTION(execUpdateDigTime); \
	DECLARE_FUNCTION(execUpdateSurviveTime); \
	DECLARE_FUNCTION(execUpdateHungryPoint);


#define perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameEngineProjectCharacter(); \
	friend struct Z_Construct_UClass_AGameEngineProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameEngineProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameEngineProject"), NO_API) \
	DECLARE_SERIALIZER(AGameEngineProjectCharacter)


#define perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameEngineProjectCharacter(); \
	friend struct Z_Construct_UClass_AGameEngineProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AGameEngineProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameEngineProject"), NO_API) \
	DECLARE_SERIALIZER(AGameEngineProjectCharacter)


#define perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameEngineProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameEngineProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameEngineProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameEngineProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameEngineProjectCharacter(AGameEngineProjectCharacter&&); \
	NO_API AGameEngineProjectCharacter(const AGameEngineProjectCharacter&); \
public:


#define perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameEngineProjectCharacter(AGameEngineProjectCharacter&&); \
	NO_API AGameEngineProjectCharacter(const AGameEngineProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameEngineProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameEngineProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameEngineProjectCharacter)


#define perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Dust() { return STRUCT_OFFSET(AGameEngineProjectCharacter, Dust); } \
	FORCEINLINE static uint32 __PPO__Hole() { return STRUCT_OFFSET(AGameEngineProjectCharacter, Hole); }


#define perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_12_PROLOG
#define perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_SPARSE_DATA \
	perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_RPC_WRAPPERS \
	perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_INCLASS \
	perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_SPARSE_DATA \
	perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_INCLASS_NO_PURE_DECLS \
	perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEENGINEPROJECT_API UClass* StaticClass<class AGameEngineProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID perforce_mole_Source_GameEngineProject_GameEngineProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
