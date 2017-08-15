// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Fighter.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Fighter() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_ACameraActor();
	ENGINE_API class UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	FIGHTER_API class UFunction* Z_Construct_UFunction_ACombatCameraController_CameraLookController();
	FIGHTER_API class UFunction* Z_Construct_UFunction_ACombatCameraController_MoveToOutOfCombatPoint();
	FIGHTER_API class UFunction* Z_Construct_UFunction_ACombatCameraController_PointBetweenTwoActors();
	FIGHTER_API class UFunction* Z_Construct_UFunction_ACombatCameraController_SetClosestPlayer();
	FIGHTER_API class UFunction* Z_Construct_UFunction_ACombatCameraController_SetDefaults();
	FIGHTER_API class UClass* Z_Construct_UClass_ACombatCameraController_NoRegister();
	FIGHTER_API class UClass* Z_Construct_UClass_ACombatCameraController();
	FIGHTER_API class UFunction* Z_Construct_UFunction_AFighterCharacter_SetDefaults();
	FIGHTER_API class UClass* Z_Construct_UClass_AFighterCharacter_NoRegister();
	FIGHTER_API class UClass* Z_Construct_UClass_AFighterCharacter();
	FIGHTER_API class UClass* Z_Construct_UClass_AFighterGameMode_NoRegister();
	FIGHTER_API class UClass* Z_Construct_UClass_AFighterGameMode();
	FIGHTER_API class UPackage* Z_Construct_UPackage__Script_Fighter();
	void ACombatCameraController::StaticRegisterNativesACombatCameraController()
	{
		UClass* Class = ACombatCameraController::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CameraLookController", (Native)&ACombatCameraController::execCameraLookController },
			{ "MoveToOutOfCombatPoint", (Native)&ACombatCameraController::execMoveToOutOfCombatPoint },
			{ "PointBetweenTwoActors", (Native)&ACombatCameraController::execPointBetweenTwoActors },
			{ "SetClosestPlayer", (Native)&ACombatCameraController::execSetClosestPlayer },
			{ "SetDefaults", (Native)&ACombatCameraController::execSetDefaults },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 5);
	}
	UFunction* Z_Construct_UFunction_ACombatCameraController_CameraLookController()
	{
		UObject* Outer=Z_Construct_UClass_ACombatCameraController();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CameraLookController"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CombatCameraController.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction);"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACombatCameraController_MoveToOutOfCombatPoint()
	{
		struct CombatCameraController_eventMoveToOutOfCombatPoint_Parms
		{
			AActor* A;
			AActor* B;
		};
		UObject* Outer=Z_Construct_UClass_ACombatCameraController();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveToOutOfCombatPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CombatCameraController_eventMoveToOutOfCombatPoint_Parms));
			UProperty* NewProp_B = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("B"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(B, CombatCameraController_eventMoveToOutOfCombatPoint_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(A, CombatCameraController_eventMoveToOutOfCombatPoint_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CombatCameraController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACombatCameraController_PointBetweenTwoActors()
	{
		struct CombatCameraController_eventPointBetweenTwoActors_Parms
		{
			AActor* A;
			AActor* B;
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ACombatCameraController();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PointBetweenTwoActors"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04820401, 65535, sizeof(CombatCameraController_eventPointBetweenTwoActors_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, CombatCameraController_eventPointBetweenTwoActors_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_B = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("B"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(B, CombatCameraController_eventPointBetweenTwoActors_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(A, CombatCameraController_eventPointBetweenTwoActors_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CombatCameraController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACombatCameraController_SetClosestPlayer()
	{
		struct CombatCameraController_eventSetClosestPlayer_Parms
		{
			AActor* A;
			AActor* B;
			AActor* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ACombatCameraController();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetClosestPlayer"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(CombatCameraController_eventSetClosestPlayer_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, CombatCameraController_eventSetClosestPlayer_Parms), 0x0010000000000580, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_B = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("B"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(B, CombatCameraController_eventSetClosestPlayer_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(A, CombatCameraController_eventSetClosestPlayer_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CombatCameraController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACombatCameraController_SetDefaults()
	{
		UObject* Outer=Z_Construct_UClass_ACombatCameraController();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetDefaults"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("CombatCameraController.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACombatCameraController_NoRegister()
	{
		return ACombatCameraController::StaticClass();
	}
	UClass* Z_Construct_UClass_ACombatCameraController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACameraActor();
			Z_Construct_UPackage__Script_Fighter();
			OuterClass = ACombatCameraController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ACombatCameraController_CameraLookController());
				OuterClass->LinkChild(Z_Construct_UFunction_ACombatCameraController_MoveToOutOfCombatPoint());
				OuterClass->LinkChild(Z_Construct_UFunction_ACombatCameraController_PointBetweenTwoActors());
				OuterClass->LinkChild(Z_Construct_UFunction_ACombatCameraController_SetClosestPlayer());
				OuterClass->LinkChild(Z_Construct_UFunction_ACombatCameraController_SetDefaults());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACombatCameraController_CameraLookController(), "CameraLookController"); // 1199098470
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACombatCameraController_MoveToOutOfCombatPoint(), "MoveToOutOfCombatPoint"); // 535921655
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACombatCameraController_PointBetweenTwoActors(), "PointBetweenTwoActors"); // 1713118154
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACombatCameraController_SetClosestPlayer(), "SetClosestPlayer"); // 2574042443
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ACombatCameraController_SetDefaults(), "SetDefaults"); // 1216980439
				static TCppClassTypeInfo<TCppClassTypeTraits<ACombatCameraController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Rendering"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CombatCameraController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CombatCameraController.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACombatCameraController, 376275033);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACombatCameraController(Z_Construct_UClass_ACombatCameraController, &ACombatCameraController::StaticClass, TEXT("/Script/Fighter"), TEXT("ACombatCameraController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatCameraController);
	void AFighterCharacter::StaticRegisterNativesAFighterCharacter()
	{
		UClass* Class = AFighterCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SetDefaults", (Native)&AFighterCharacter::execSetDefaults },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AFighterCharacter_SetDefaults()
	{
		struct FighterCharacter_eventSetDefaults_Parms
		{
			ACameraActor* Cam;
		};
		UObject* Outer=Z_Construct_UClass_AFighterCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetDefaults"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(FighterCharacter_eventSetDefaults_Parms));
			UProperty* NewProp_Cam = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Cam"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Cam, FighterCharacter_eventSetDefaults_Parms), 0x0010000000000080, Z_Construct_UClass_ACameraActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Start"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FighterCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFighterCharacter_NoRegister()
	{
		return AFighterCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AFighterCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_Fighter();
			OuterClass = AFighterCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_AFighterCharacter_SetDefaults());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, AFighterCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, AFighterCharacter), 0x0010000000020015);
				UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Camera, AFighterCharacter), 0x0040000000000015, Z_Construct_UClass_ACameraActor_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AFighterCharacter_SetDefaults(), "SetDefaults"); // 120417967
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AFighterCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FighterCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FighterCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("FighterCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("FighterCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_Camera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("FighterCharacter.h"));
				MetaData->SetValue(NewProp_Camera, TEXT("ToolTip"), TEXT("Follow camera"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFighterCharacter, 611818336);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFighterCharacter(Z_Construct_UClass_AFighterCharacter, &AFighterCharacter::StaticClass, TEXT("/Script/Fighter"), TEXT("AFighterCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFighterCharacter);
	void AFighterGameMode::StaticRegisterNativesAFighterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFighterGameMode_NoRegister()
	{
		return AFighterGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AFighterGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Fighter();
			OuterClass = AFighterGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AFighterGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FighterGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FighterGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFighterGameMode, 1373575756);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFighterGameMode(Z_Construct_UClass_AFighterGameMode, &AFighterGameMode::StaticClass, TEXT("/Script/Fighter"), TEXT("AFighterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFighterGameMode);
	UPackage* Z_Construct_UPackage__Script_Fighter()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Fighter")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xEF9DE8DD;
			Guid.B = 0xA22C2750;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
