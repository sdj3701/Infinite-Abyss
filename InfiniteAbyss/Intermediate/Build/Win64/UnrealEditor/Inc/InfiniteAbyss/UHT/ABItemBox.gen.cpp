// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Item/ABItemBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABItemBox() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABItemBox();
	INFINITEABYSS_API UClass* Z_Construct_UClass_AABItemBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InfiniteAbyss();
// End Cross Module References
	void AABItemBox::StaticRegisterNativesAABItemBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AABItemBox);
	UClass* Z_Construct_UClass_AABItemBox_NoRegister()
	{
		return AABItemBox::StaticClass();
	}
	struct Z_Construct_UClass_AABItemBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABItemBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InfiniteAbyss,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AABItemBox_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABItemBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/ABItemBox.h" },
		{ "ModuleRelativePath", "Item/ABItemBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABItemBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABItemBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AABItemBox_Statics::ClassParams = {
		&AABItemBox::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AABItemBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AABItemBox_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AABItemBox()
	{
		if (!Z_Registration_Info_UClass_AABItemBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AABItemBox.OuterSingleton, Z_Construct_UClass_AABItemBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AABItemBox.OuterSingleton;
	}
	template<> INFINITEABYSS_API UClass* StaticClass<AABItemBox>()
	{
		return AABItemBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABItemBox);
	AABItemBox::~AABItemBox() {}
	struct Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Item_ABItemBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Item_ABItemBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AABItemBox, AABItemBox::StaticClass, TEXT("AABItemBox"), &Z_Registration_Info_UClass_AABItemBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AABItemBox), 2992966051U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Item_ABItemBox_h_4010813911(TEXT("/Script/InfiniteAbyss"),
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Item_ABItemBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Item_ABItemBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
