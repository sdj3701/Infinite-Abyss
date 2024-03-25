// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gimmick/ABStageGimmick.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABStageGimmick() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABCharacterBaseNonPlayer_NoRegister();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABItemBox_NoRegister();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABStageGimmick();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABStageGimmick_NoRegister();
	INFINITEABYSS_API UEnum* Z_Construct_UEnum_InfiniteAbyss_EStageState();
	INFINITEABYSS_API UScriptStruct* Z_Construct_UScriptStruct_FStageChangedDelegateWrapper();
	UPackage* Z_Construct_UPackage__Script_InfiniteAbyss();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StageChangedDelegateWrapper;
class UScriptStruct* FStageChangedDelegateWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StageChangedDelegateWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StageChangedDelegateWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStageChangedDelegateWrapper, (UObject*)Z_Construct_UPackage__Script_InfiniteAbyss(), TEXT("StageChangedDelegateWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_StageChangedDelegateWrapper.OuterSingleton;
}
template<> INFINITEABYSS_API UScriptStruct* StaticStruct<FStageChangedDelegateWrapper>()
{
	return FStageChangedDelegateWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStageChangedDelegateWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStageChangedDelegateWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStageChangedDelegateWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStageChangedDelegateWrapper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStageChangedDelegateWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InfiniteAbyss,
		nullptr,
		&NewStructOps,
		"StageChangedDelegateWrapper",
		nullptr,
		0,
		sizeof(FStageChangedDelegateWrapper),
		alignof(FStageChangedDelegateWrapper),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStageChangedDelegateWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStageChangedDelegateWrapper_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStageChangedDelegateWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_StageChangedDelegateWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StageChangedDelegateWrapper.InnerSingleton, Z_Construct_UScriptStruct_FStageChangedDelegateWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StageChangedDelegateWrapper.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStageState;
	static UEnum* EStageState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStageState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStageState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InfiniteAbyss_EStageState, (UObject*)Z_Construct_UPackage__Script_InfiniteAbyss(), TEXT("EStageState"));
		}
		return Z_Registration_Info_UEnum_EStageState.OuterSingleton;
	}
	template<> INFINITEABYSS_API UEnum* StaticEnum<EStageState>()
	{
		return EStageState_StaticEnum();
	}
	struct Z_Construct_UEnum_InfiniteAbyss_EStageState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InfiniteAbyss_EStageState_Statics::Enumerators[] = {
		{ "EStageState::READY", (int64)EStageState::READY },
		{ "EStageState::FIGHT", (int64)EStageState::FIGHT },
		{ "EStageState::REWARD", (int64)EStageState::REWARD },
		{ "EStageState::NEXT", (int64)EStageState::NEXT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InfiniteAbyss_EStageState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FIGHT.Name", "EStageState::FIGHT" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
		{ "NEXT.Name", "EStageState::NEXT" },
		{ "READY.Name", "EStageState::READY" },
		{ "REWARD.Name", "EStageState::REWARD" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InfiniteAbyss_EStageState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InfiniteAbyss,
		nullptr,
		"EStageState",
		"EStageState",
		Z_Construct_UEnum_InfiniteAbyss_EStageState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InfiniteAbyss_EStageState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InfiniteAbyss_EStageState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InfiniteAbyss_EStageState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InfiniteAbyss_EStageState()
	{
		if (!Z_Registration_Info_UEnum_EStageState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStageState.InnerSingleton, Z_Construct_UEnum_InfiniteAbyss_EStageState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStageState.InnerSingleton;
	}
	DEFINE_FUNCTION(AABStageGimmick::execOnRewardTriggerBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardTriggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AABStageGimmick::execOnOpponentDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOpponentDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AABStageGimmick::execOnGateTriggerBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGateTriggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AABStageGimmick::execOnStageTrggerBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStageTrggerBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepHitResult);
		P_NATIVE_END;
	}
	void AABStageGimmick::StaticRegisterNativesAABStageGimmick()
	{
		UClass* Class = AABStageGimmick::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGateTriggerBeginOverlap", &AABStageGimmick::execOnGateTriggerBeginOverlap },
			{ "OnOpponentDestroyed", &AABStageGimmick::execOnOpponentDestroyed },
			{ "OnRewardTriggerBeginOverlap", &AABStageGimmick::execOnRewardTriggerBeginOverlap },
			{ "OnStageTrggerBeginOverlap", &AABStageGimmick::execOnStageTrggerBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics
	{
		struct ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepHitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepHitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms), &Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_SweepHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_SweepHitResult_MetaData), Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_SweepHitResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::NewProp_SweepHitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABStageGimmick, nullptr, "OnGateTriggerBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::ABStageGimmick_eventOnGateTriggerBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics
	{
		struct ABStageGimmick_eventOnOpponentDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnOpponentDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABStageGimmick, nullptr, "OnOpponentDestroyed", nullptr, nullptr, Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics::ABStageGimmick_eventOnOpponentDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics::ABStageGimmick_eventOnOpponentDestroyed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics
	{
		struct ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepHitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepHitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms), &Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_SweepHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_SweepHitResult_MetaData), Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_SweepHitResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::NewProp_SweepHitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABStageGimmick, nullptr, "OnRewardTriggerBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::ABStageGimmick_eventOnRewardTriggerBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics
	{
		struct ABStageGimmick_eventOnStageTrggerBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepHitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepHitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepHitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnStageTrggerBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnStageTrggerBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnStageTrggerBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnStageTrggerBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ABStageGimmick_eventOnStageTrggerBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABStageGimmick_eventOnStageTrggerBeginOverlap_Parms), &Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_SweepHitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_SweepHitResult = { "SweepHitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABStageGimmick_eventOnStageTrggerBeginOverlap_Parms, SweepHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_SweepHitResult_MetaData), Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_SweepHitResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::NewProp_SweepHitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABStageGimmick, nullptr, "OnStageTrggerBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::ABStageGimmick_eventOnStageTrggerBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::ABStageGimmick_eventOnStageTrggerBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABStageGimmick);
	UClass* Z_Construct_UClass_AABStageGimmick_NoRegister()
	{
		return AABStageGimmick::StaticClass();
	}
	struct Z_Construct_UClass_AABStageGimmick_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Stage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StageTrigger;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Gates_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Gates_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gates_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Gates;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GateTriggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GateTriggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GateTriggers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloseSpeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateChangeActions_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StateChangeActions_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StateChangeActions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateChangeActions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StateChangeActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OpponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpponentSpawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OpponentSpawnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RewardBoxClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RewardBoxClass;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RewardBoxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RewardBoxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RewardBoxes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABStageGimmick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InfiniteAbyss,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AABStageGimmick_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AABStageGimmick_OnGateTriggerBeginOverlap, "OnGateTriggerBeginOverlap" }, // 1043027269
		{ &Z_Construct_UFunction_AABStageGimmick_OnOpponentDestroyed, "OnOpponentDestroyed" }, // 36494847
		{ &Z_Construct_UFunction_AABStageGimmick_OnRewardTriggerBeginOverlap, "OnRewardTriggerBeginOverlap" }, // 3063111432
		{ &Z_Construct_UFunction_AABStageGimmick_OnStageTrggerBeginOverlap, "OnStageTrggerBeginOverlap" }, // 495403249
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABStageGimmick_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gimmick/ABStageGimmick.h" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Stage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Stage = { "Stage", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, Stage), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Stage_MetaData), Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Stage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StageTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StageTrigger = { "StageTrigger", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, StageTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StageTrigger_MetaData), Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StageTrigger_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates_ValueProp = { "Gates", nullptr, (EPropertyFlags)0x00040000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates_Key_KeyProp = { "Gates_Key", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates = { "Gates", nullptr, (EPropertyFlags)0x0024088000020009, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, Gates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates_MetaData), Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_GateTriggers_Inner = { "GateTriggers", nullptr, (EPropertyFlags)0x00040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABStageGimmick_Statics::NewProp_GateTriggers_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_GateTriggers = { "GateTriggers", nullptr, (EPropertyFlags)0x0024088000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, GateTriggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::NewProp_GateTriggers_MetaData), Z_Construct_UClass_AABStageGimmick_Statics::NewProp_GateTriggers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CloseTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CloseTime = { "CloseTime", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, CloseTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CloseTime_MetaData), Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CloseTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CloseSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CloseSpeed = { "CloseSpeed", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, CloseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CloseSpeed_MetaData), Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CloseSpeed_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CurrentState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stage" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, CurrentState), Z_Construct_UEnum_InfiniteAbyss_EStageState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CurrentState_MetaData), Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CurrentState_MetaData) }; // 4167641550
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeActions_ValueProp = { "StateChangeActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FStageChangedDelegateWrapper, METADATA_PARAMS(0, nullptr) }; // 1616958710
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeActions_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeActions_Key_KeyProp = { "StateChangeActions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InfiniteAbyss_EStageState, METADATA_PARAMS(0, nullptr) }; // 4167641550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeActions_MetaData[] = {
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeActions = { "StateChangeActions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, StateChangeActions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeActions_MetaData), Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeActions_MetaData) }; // 4167641550 1616958710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fight" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentClass = { "OpponentClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, OpponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AABCharacterBaseNonPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentClass_MetaData), Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentSpawnTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Fight" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentSpawnTime = { "OpponentSpawnTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, OpponentSpawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentSpawnTime_MetaData), Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentSpawnTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reward" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxClass = { "RewardBoxClass", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, RewardBoxClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AABItemBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxClass_MetaData), Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxClass_MetaData) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxes_Inner = { "RewardBoxes", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AABItemBox_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reward" },
		{ "ModuleRelativePath", "Gimmick/ABStageGimmick.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxes = { "RewardBoxes", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABStageGimmick, RewardBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxes_MetaData), Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABStageGimmick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Stage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StageTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_Gates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_GateTriggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_GateTriggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CloseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CloseSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CurrentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeActions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeActions_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeActions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_StateChangeActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_OpponentSpawnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABStageGimmick_Statics::NewProp_RewardBoxes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABStageGimmick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABStageGimmick>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABStageGimmick_Statics::ClassParams = {
		&AABStageGimmick::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AABStageGimmick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::Class_MetaDataParams), Z_Construct_UClass_AABStageGimmick_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABStageGimmick_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AABStageGimmick()
	{
		if (!Z_Registration_Info_UClass_AABStageGimmick.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABStageGimmick.OuterSingleton, Z_Construct_UClass_AABStageGimmick_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABStageGimmick.OuterSingleton;
	}
	template<> INFINITEABYSS_API UClass* StaticClass<AABStageGimmick>()
	{
		return AABStageGimmick::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABStageGimmick);
	AABStageGimmick::~AABStageGimmick() {}
	struct Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_Statics::EnumInfo[] = {
		{ EStageState_StaticEnum, TEXT("EStageState"), &Z_Registration_Info_UEnum_EStageState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4167641550U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_Statics::ScriptStructInfo[] = {
		{ FStageChangedDelegateWrapper::StaticStruct, Z_Construct_UScriptStruct_FStageChangedDelegateWrapper_Statics::NewStructOps, TEXT("StageChangedDelegateWrapper"), &Z_Registration_Info_UScriptStruct_StageChangedDelegateWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStageChangedDelegateWrapper), 1616958710U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABStageGimmick, AABStageGimmick::StaticClass, TEXT("AABStageGimmick"), &Z_Registration_Info_UClass_AABStageGimmick, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABStageGimmick), 3780999979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_2078703735(TEXT("/Script/InfiniteAbyss"),
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
