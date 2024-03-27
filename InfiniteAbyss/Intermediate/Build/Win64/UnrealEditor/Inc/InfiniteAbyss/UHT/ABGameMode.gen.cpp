// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/ABGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABGameMode();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABGameMode_NoRegister();
	INFINITEABYSS_API UClass* Z_Construct_UClass_UABGameInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InfiniteAbyss();
// End Cross Module References
	void AABGameMode::StaticRegisterNativesAABGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABGameMode);
	UClass* Z_Construct_UClass_AABGameMode_NoRegister()
	{
		return AABGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AABGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearScore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClearScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCleard_MetaData[];
#endif
		static void NewProp_bIsCleard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCleard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InfiniteAbyss,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/ABGameMode.h" },
		{ "ModuleRelativePath", "Game/ABGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGameMode_Statics::NewProp_ClearScore_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Game/ABGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABGameMode_Statics::NewProp_ClearScore = { "ClearScore", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABGameMode, ClearScore), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::NewProp_ClearScore_MetaData), Z_Construct_UClass_AABGameMode_Statics::NewProp_ClearScore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGameMode_Statics::NewProp_CurrentScore_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Game/ABGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AABGameMode_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABGameMode, CurrentScore), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::NewProp_CurrentScore_MetaData), Z_Construct_UClass_AABGameMode_Statics::NewProp_CurrentScore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABGameMode_Statics::NewProp_bIsCleard_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Game/ABGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AABGameMode_Statics::NewProp_bIsCleard_SetBit(void* Obj)
	{
		((AABGameMode*)Obj)->bIsCleard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AABGameMode_Statics::NewProp_bIsCleard = { "bIsCleard", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AABGameMode), &Z_Construct_UClass_AABGameMode_Statics::NewProp_bIsCleard_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::NewProp_bIsCleard_MetaData), Z_Construct_UClass_AABGameMode_Statics::NewProp_bIsCleard_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGameMode_Statics::NewProp_ClearScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGameMode_Statics::NewProp_CurrentScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABGameMode_Statics::NewProp_bIsCleard,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AABGameMode_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UABGameInterface_NoRegister, (int32)VTABLE_OFFSET(AABGameMode, IABGameInterface), false },  // 2889346812
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABGameMode_Statics::ClassParams = {
		&AABGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AABGameMode_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AABGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AABGameMode()
	{
		if (!Z_Registration_Info_UClass_AABGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABGameMode.OuterSingleton, Z_Construct_UClass_AABGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABGameMode.OuterSingleton;
	}
	template<> INFINITEABYSS_API UClass* StaticClass<AABGameMode>()
	{
		return AABGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABGameMode);
	AABGameMode::~AABGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Game_ABGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Game_ABGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABGameMode, AABGameMode::StaticClass, TEXT("AABGameMode"), &Z_Registration_Info_UClass_AABGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABGameMode), 2666692240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Game_ABGameMode_h_26211995(TEXT("/Script/InfiniteAbyss"),
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Game_ABGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Game_ABGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
