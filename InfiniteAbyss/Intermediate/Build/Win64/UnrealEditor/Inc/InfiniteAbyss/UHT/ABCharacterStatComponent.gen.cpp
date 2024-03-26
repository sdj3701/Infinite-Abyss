// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterStat/ABCharacterStatComponent.h"
#include "GameData/ABCharacterStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterStatComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	INFINITEABYSS_API UClass* Z_Construct_UClass_UABCharacterStatComponent();
	INFINITEABYSS_API UClass* Z_Construct_UClass_UABCharacterStatComponent_NoRegister();
	INFINITEABYSS_API UScriptStruct* Z_Construct_UScriptStruct_FABCharacterStat();
	UPackage* Z_Construct_UPackage__Script_InfiniteAbyss();
// End Cross Module References
	void UABCharacterStatComponent::StaticRegisterNativesUABCharacterStatComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABCharacterStatComponent);
	UClass* Z_Construct_UClass_UABCharacterStatComponent_NoRegister()
	{
		return UABCharacterStatComponent::StaticClass();
	}
	struct Z_Construct_UClass_UABCharacterStatComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseStat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseStat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierStat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierStat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABCharacterStatComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InfiniteAbyss,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterStatComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharacterStat/ABCharacterStatComponent.h" },
		{ "ModuleRelativePath", "CharacterStat/ABCharacterStatComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHp_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "CharacterStat/ABCharacterStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHp = { "CurrentHp", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, CurrentHp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHp_MetaData), Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "CharacterStat/ABCharacterStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentLevel_MetaData), Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_AttackRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "CharacterStat/ABCharacterStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_AttackRadius = { "AttackRadius", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, AttackRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_AttackRadius_MetaData), Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_AttackRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_BaseStat_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "CharacterStat/ABCharacterStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_BaseStat = { "BaseStat", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, BaseStat), Z_Construct_UScriptStruct_FABCharacterStat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_BaseStat_MetaData), Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_BaseStat_MetaData) }; // 3769453985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_ModifierStat_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "CharacterStat/ABCharacterStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_ModifierStat = { "ModifierStat", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, ModifierStat), Z_Construct_UScriptStruct_FABCharacterStat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_ModifierStat_MetaData), Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_ModifierStat_MetaData) }; // 3769453985
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABCharacterStatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_AttackRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_BaseStat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_ModifierStat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABCharacterStatComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABCharacterStatComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABCharacterStatComponent_Statics::ClassParams = {
		&UABCharacterStatComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABCharacterStatComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UABCharacterStatComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UABCharacterStatComponent()
	{
		if (!Z_Registration_Info_UClass_UABCharacterStatComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABCharacterStatComponent.OuterSingleton, Z_Construct_UClass_UABCharacterStatComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABCharacterStatComponent.OuterSingleton;
	}
	template<> INFINITEABYSS_API UClass* StaticClass<UABCharacterStatComponent>()
	{
		return UABCharacterStatComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABCharacterStatComponent);
	UABCharacterStatComponent::~UABCharacterStatComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_CharacterStat_ABCharacterStatComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_CharacterStat_ABCharacterStatComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABCharacterStatComponent, UABCharacterStatComponent::StaticClass, TEXT("UABCharacterStatComponent"), &Z_Registration_Info_UClass_UABCharacterStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterStatComponent), 2577127969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_CharacterStat_ABCharacterStatComponent_h_452781935(TEXT("/Script/InfiniteAbyss"),
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_CharacterStat_ABCharacterStatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_CharacterStat_ABCharacterStatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
