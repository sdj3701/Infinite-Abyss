// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/ABWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABWidgetComponent() {}
// Cross Module References
	INFINITEABYSS_API UClass* Z_Construct_UClass_UABWidgetComponent();
	INFINITEABYSS_API UClass* Z_Construct_UClass_UABWidgetComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_InfiniteAbyss();
// End Cross Module References
	void UABWidgetComponent::StaticRegisterNativesUABWidgetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABWidgetComponent);
	UClass* Z_Construct_UClass_UABWidgetComponent_NoRegister()
	{
		return UABWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UABWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InfiniteAbyss,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABWidgetComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABWidgetComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UI/ABWidgetComponent.h" },
		{ "ModuleRelativePath", "UI/ABWidgetComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABWidgetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABWidgetComponent_Statics::ClassParams = {
		&UABWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABWidgetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UABWidgetComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UABWidgetComponent()
	{
		if (!Z_Registration_Info_UClass_UABWidgetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABWidgetComponent.OuterSingleton, Z_Construct_UClass_UABWidgetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABWidgetComponent.OuterSingleton;
	}
	template<> INFINITEABYSS_API UClass* StaticClass<UABWidgetComponent>()
	{
		return UABWidgetComponent::StaticClass();
	}
	UABWidgetComponent::UABWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABWidgetComponent);
	UABWidgetComponent::~UABWidgetComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_UI_ABWidgetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_UI_ABWidgetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABWidgetComponent, UABWidgetComponent::StaticClass, TEXT("UABWidgetComponent"), &Z_Registration_Info_UClass_UABWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABWidgetComponent), 4092632116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_UI_ABWidgetComponent_h_3135504301(TEXT("/Script/InfiniteAbyss"),
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_UI_ABWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_UI_ABWidgetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
