// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACameraActor;
#ifdef FIGHTER_FighterCharacter_generated_h
#error "FighterCharacter.generated.h already included, missing '#pragma once' in FighterCharacter.h"
#endif
#define FIGHTER_FighterCharacter_generated_h

#define Fighter_Source_Fighter_FighterCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDefaults) \
	{ \
		P_GET_OBJECT(ACameraActor,Z_Param_Cam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDefaults(Z_Param_Cam); \
		P_NATIVE_END; \
	}


#define Fighter_Source_Fighter_FighterCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDefaults) \
	{ \
		P_GET_OBJECT(ACameraActor,Z_Param_Cam); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDefaults(Z_Param_Cam); \
		P_NATIVE_END; \
	}


#define Fighter_Source_Fighter_FighterCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFighterCharacter(); \
	friend FIGHTER_API class UClass* Z_Construct_UClass_AFighterCharacter(); \
public: \
	DECLARE_CLASS(AFighterCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Fighter"), NO_API) \
	DECLARE_SERIALIZER(AFighterCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Fighter_Source_Fighter_FighterCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFighterCharacter(); \
	friend FIGHTER_API class UClass* Z_Construct_UClass_AFighterCharacter(); \
public: \
	DECLARE_CLASS(AFighterCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Fighter"), NO_API) \
	DECLARE_SERIALIZER(AFighterCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Fighter_Source_Fighter_FighterCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFighterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFighterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFighterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFighterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFighterCharacter(AFighterCharacter&&); \
	NO_API AFighterCharacter(const AFighterCharacter&); \
public:


#define Fighter_Source_Fighter_FighterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFighterCharacter(AFighterCharacter&&); \
	NO_API AFighterCharacter(const AFighterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFighterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFighterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFighterCharacter)


#define Fighter_Source_Fighter_FighterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AFighterCharacter, Camera); }


#define Fighter_Source_Fighter_FighterCharacter_h_9_PROLOG
#define Fighter_Source_Fighter_FighterCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fighter_Source_Fighter_FighterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Fighter_Source_Fighter_FighterCharacter_h_12_RPC_WRAPPERS \
	Fighter_Source_Fighter_FighterCharacter_h_12_INCLASS \
	Fighter_Source_Fighter_FighterCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fighter_Source_Fighter_FighterCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fighter_Source_Fighter_FighterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Fighter_Source_Fighter_FighterCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Fighter_Source_Fighter_FighterCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Fighter_Source_Fighter_FighterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fighter_Source_Fighter_FighterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
