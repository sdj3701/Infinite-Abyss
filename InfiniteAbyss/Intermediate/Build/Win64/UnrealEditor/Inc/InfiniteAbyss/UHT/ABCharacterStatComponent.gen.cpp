// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterStat/ABCharacterStatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterStatComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	INFINITEABYSS_API UClass* Z_Construct_UClass_UABCharacterStatComponent();
	INFINITEABYSS_API UClass* Z_Construct_UClass_UABCharacterStatComponent_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHp;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_MaxHp_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "CharacterStat/ABCharacterStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_MaxHp = { "MaxHp", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, MaxHp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_MaxHp_MetaData), Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_MaxHp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHp_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "CharacterStat/ABCharacterStatComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHp = { "CurrentHp", nullptr, (EPropertyFlags)0x0020080000022801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABCharacterStatComponent, CurrentHp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHp_MetaData), Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABCharacterStatComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_MaxHp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABCharacterStatComponent_Statics::NewProp_CurrentHp,
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
		{ Z_Construct_UClass_UABCharacterStatComponent, UABCharacterStatComponent::StaticClass, TEXT("UABCharacterStatComponent"), &Z_Registration_Info_UClass_UABCharacterStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABCharacterStatComponent), 1037891182U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_CharacterStat_ABCharacterStatComponent_h_3173097634(TEXT("/Script/InfiniteAbyss"),
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_CharacterStat_ABCharacterStatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_CharacterStat_ABCharacterStatComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
