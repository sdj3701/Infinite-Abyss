// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/ABPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABPlayerController();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABPlayerController_NoRegister();
	INFINITEABYSS_API UClass* Z_Construct_UClass_UABHUDWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InfiniteAbyss();
// End Cross Module References
	struct ABPlayerController_eventK2_OnScoreChange_Parms
	{
		int32 NewScore;
	};
	static FName NAME_AABPlayerController_K2_OnGameClear = FName(TEXT("K2_OnGameClear"));
	void AABPlayerController::K2_OnGameClear()
	{
		ProcessEvent(FindFunctionChecked(NAME_AABPlayerController_K2_OnGameClear),NULL);
	}
	static FName NAME_AABPlayerController_K2_OnGameOver = FName(TEXT("K2_OnGameOver"));
	void AABPlayerController::K2_OnGameOver()
	{
		ProcessEvent(FindFunctionChecked(NAME_AABPlayerController_K2_OnGameOver),NULL);
	}
	static FName NAME_AABPlayerController_K2_OnScoreChange = FName(TEXT("K2_OnScoreChange"));
	void AABPlayerController::K2_OnScoreChange(int32 NewScore)
	{
		ABPlayerController_eventK2_OnScoreChange_Parms Parms;
		Parms.NewScore=NewScore;
		ProcessEvent(FindFunctionChecked(NAME_AABPlayerController_K2_OnScoreChange),&Parms);
	}
	void AABPlayerController::StaticRegisterNativesAABPlayerController()
	{
	}
	struct Z_Construct_UFunction_AABPlayerController_K2_OnGameClear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABPlayerController_K2_OnGameClear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnGameClearCpp" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABPlayerController_K2_OnGameClear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABPlayerController, nullptr, "K2_OnGameClear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABPlayerController_K2_OnGameClear_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABPlayerController_K2_OnGameClear_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AABPlayerController_K2_OnGameClear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABPlayerController_K2_OnGameClear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AABPlayerController_K2_OnGameOver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABPlayerController_K2_OnGameOver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnGameOverCpp" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABPlayerController_K2_OnGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABPlayerController, nullptr, "K2_OnGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABPlayerController_K2_OnGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABPlayerController_K2_OnGameOver_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AABPlayerController_K2_OnGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABPlayerController_K2_OnGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABPlayerController_eventK2_OnScoreChange_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange_Statics::NewProp_NewScore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "OnScoreChangedCpp" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AABPlayerController, nullptr, "K2_OnScoreChange", nullptr, nullptr, Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange_Statics::PropPointers), sizeof(ABPlayerController_eventK2_OnScoreChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange_Statics::PropPointers) < 2048);
	static_assert(sizeof(ABPlayerController_eventK2_OnScoreChange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABPlayerController);
	UClass* Z_Construct_UClass_AABPlayerController_NoRegister()
	{
		return AABPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AABPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ABHUDWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ABHUDWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ABHUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ABHUDWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_InfiniteAbyss,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AABPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AABPlayerController_K2_OnGameClear, "K2_OnGameClear" }, // 2551308539
		{ &Z_Construct_UFunction_AABPlayerController_K2_OnGameOver, "K2_OnGameOver" }, // 3848746926
		{ &Z_Construct_UFunction_AABPlayerController_K2_OnScoreChange, "K2_OnScoreChange" }, // 2533808753
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/ABPlayerController.h" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidgetClass = { "ABHUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerController, ABHUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UABHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidgetClass_MetaData), Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidget_MetaData[] = {
		{ "Category", "HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/ABPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidget = { "ABHUDWidget", nullptr, (EPropertyFlags)0x00240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AABPlayerController, ABHUDWidget), Z_Construct_UClass_UABHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidget_MetaData), Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AABPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AABPlayerController_Statics::NewProp_ABHUDWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABPlayerController_Statics::ClassParams = {
		&AABPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AABPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AABPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AABPlayerController()
	{
		if (!Z_Registration_Info_UClass_AABPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABPlayerController.OuterSingleton, Z_Construct_UClass_AABPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABPlayerController.OuterSingleton;
	}
	template<> INFINITEABYSS_API UClass* StaticClass<AABPlayerController>()
	{
		return AABPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABPlayerController);
	AABPlayerController::~AABPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Player_ABPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Player_ABPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABPlayerController, AABPlayerController::StaticClass, TEXT("AABPlayerController"), &Z_Registration_Info_UClass_AABPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABPlayerController), 3034256239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Player_ABPlayerController_h_4129390675(TEXT("/Script/InfiniteAbyss"),
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Player_ABPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Player_ABPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
