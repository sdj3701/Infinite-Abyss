// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/ABCharacterBaseNonPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABCharacterBaseNonPlayer() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABCharacterBase();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABCharacterBaseNonPlayer();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABCharacterBaseNonPlayer_NoRegister();
	INFINITEABYSS_API UClass* Z_Construct_UClass_UABCharacterAIInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InfiniteAbyss();
// End Cross Module References
	void AABCharacterBaseNonPlayer::StaticRegisterNativesAABCharacterBaseNonPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABCharacterBaseNonPlayer);
	UClass* Z_Construct_UClass_AABCharacterBaseNonPlayer_NoRegister()
	{
		return AABCharacterBaseNonPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NPCMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AABCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InfiniteAbyss,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/ABCharacterBaseNonPlayer.h" },
		{ "ModuleRelativePath", "Character/ABCharacterBaseNonPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::NewProp_NPCMeshes_Inner = { "NPCMeshes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::NewProp_NPCMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Character/ABCharacterBaseNonPlayer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::NewProp_NPCMeshes = { "NPCMeshes", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABCharacterBaseNonPlayer, NPCMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::NewProp_NPCMeshes_MetaData), Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::NewProp_NPCMeshes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::NewProp_NPCMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::NewProp_NPCMeshes,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UABCharacterAIInterface_NoRegister, (int32)VTABLE_OFFSET(AABCharacterBaseNonPlayer, IABCharacterAIInterface), false },  // 2776587130
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABCharacterBaseNonPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::ClassParams = {
		&AABCharacterBaseNonPlayer::StaticClass,
		"InfiniteAbyss",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AABCharacterBaseNonPlayer()
	{
		if (!Z_Registration_Info_UClass_AABCharacterBaseNonPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABCharacterBaseNonPlayer.OuterSingleton, Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABCharacterBaseNonPlayer.OuterSingleton;
	}
	template<> INFINITEABYSS_API UClass* StaticClass<AABCharacterBaseNonPlayer>()
	{
		return AABCharacterBaseNonPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABCharacterBaseNonPlayer);
	AABCharacterBaseNonPlayer::~AABCharacterBaseNonPlayer() {}
	struct Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Character_ABCharacterBaseNonPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Character_ABCharacterBaseNonPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABCharacterBaseNonPlayer, AABCharacterBaseNonPlayer::StaticClass, TEXT("AABCharacterBaseNonPlayer"), &Z_Registration_Info_UClass_AABCharacterBaseNonPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABCharacterBaseNonPlayer), 3691938626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Character_ABCharacterBaseNonPlayer_h_734392570(TEXT("/Script/InfiniteAbyss"),
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Character_ABCharacterBaseNonPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Character_ABCharacterBaseNonPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
