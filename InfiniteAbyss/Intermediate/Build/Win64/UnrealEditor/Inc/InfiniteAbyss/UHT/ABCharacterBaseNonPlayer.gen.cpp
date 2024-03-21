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
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABCharacterBase();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABCharacterBaseNonPlayer();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABCharacterBaseNonPlayer_NoRegister();
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABCharacterBaseNonPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::ClassParams = {
		&AABCharacterBaseNonPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AABCharacterBaseNonPlayer_Statics::Class_MetaDataParams)
	};
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
		{ Z_Construct_UClass_AABCharacterBaseNonPlayer, AABCharacterBaseNonPlayer::StaticClass, TEXT("AABCharacterBaseNonPlayer"), &Z_Registration_Info_UClass_AABCharacterBaseNonPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABCharacterBaseNonPlayer), 4128148295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Character_ABCharacterBaseNonPlayer_h_4215184370(TEXT("/Script/InfiniteAbyss"),
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Character_ABCharacterBaseNonPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Character_ABCharacterBaseNonPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
