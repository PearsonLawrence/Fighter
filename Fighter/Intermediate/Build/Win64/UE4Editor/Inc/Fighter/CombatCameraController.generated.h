// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef FIGHTER_CombatCameraController_generated_h
#error "CombatCameraController.generated.h already included, missing '#pragma once' in CombatCameraController.h"
#endif
#define FIGHTER_CombatCameraController_generated_h

#define Fighter_Source_Fighter_CombatCameraController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPointBetweenTwoActors) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_A); \
		P_GET_OBJECT(AActor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->PointBetweenTwoActors(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveToOutOfCombatPoint) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_A); \
		P_GET_OBJECT(AActor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveToOutOfCombatPoint(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClosestPlayer) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_A); \
		P_GET_OBJECT(AActor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->SetClosestPlayer(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaults) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDefaults(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCameraLookController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CameraLookController(); \
		P_NATIVE_END; \
	}


#define Fighter_Source_Fighter_CombatCameraController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPointBetweenTwoActors) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_A); \
		P_GET_OBJECT(AActor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->PointBetweenTwoActors(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveToOutOfCombatPoint) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_A); \
		P_GET_OBJECT(AActor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveToOutOfCombatPoint(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetClosestPlayer) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_A); \
		P_GET_OBJECT(AActor,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->SetClosestPlayer(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaults) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDefaults(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCameraLookController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->CameraLookController(); \
		P_NATIVE_END; \
	}


#define Fighter_Source_Fighter_CombatCameraController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatCameraController(); \
	friend FIGHTER_API class UClass* Z_Construct_UClass_ACombatCameraController(); \
public: \
	DECLARE_CLASS(ACombatCameraController, ACameraActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Fighter"), NO_API) \
	DECLARE_SERIALIZER(ACombatCameraController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Fighter_Source_Fighter_CombatCameraController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACombatCameraController(); \
	friend FIGHTER_API class UClass* Z_Construct_UClass_ACombatCameraController(); \
public: \
	DECLARE_CLASS(ACombatCameraController, ACameraActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Fighter"), NO_API) \
	DECLARE_SERIALIZER(ACombatCameraController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Fighter_Source_Fighter_CombatCameraController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACombatCameraController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACombatCameraController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatCameraController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatCameraController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatCameraController(ACombatCameraController&&); \
	NO_API ACombatCameraController(const ACombatCameraController&); \
public:


#define Fighter_Source_Fighter_CombatCameraController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACombatCameraController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombatCameraController(ACombatCameraController&&); \
	NO_API ACombatCameraController(const ACombatCameraController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatCameraController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatCameraController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACombatCameraController)


#define Fighter_Source_Fighter_CombatCameraController_h_15_PRIVATE_PROPERTY_OFFSET
#define Fighter_Source_Fighter_CombatCameraController_h_12_PROLOG
#define Fighter_Source_Fighter_CombatCameraController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fighter_Source_Fighter_CombatCameraController_h_15_PRIVATE_PROPERTY_OFFSET \
	Fighter_Source_Fighter_CombatCameraController_h_15_RPC_WRAPPERS \
	Fighter_Source_Fighter_CombatCameraController_h_15_INCLASS \
	Fighter_Source_Fighter_CombatCameraController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fighter_Source_Fighter_CombatCameraController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fighter_Source_Fighter_CombatCameraController_h_15_PRIVATE_PROPERTY_OFFSET \
	Fighter_Source_Fighter_CombatCameraController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Fighter_Source_Fighter_CombatCameraController_h_15_INCLASS_NO_PURE_DECLS \
	Fighter_Source_Fighter_CombatCameraController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fighter_Source_Fighter_CombatCameraController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
