// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interface/ABAnimationAttackInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABAnimationAttackInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INFINITEABYSS_API UClass* Z_Construct_UClass_UABAnimationAttackInterface();
	INFINITEABYSS_API UClass* Z_Construct_UClass_UABAnimationAttackInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InfiniteAbyss();
// End Cross Module References
	void UABAnimationAttackInterface::StaticRegisterNativesUABAnimationAttackInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABAnimationAttackInterface);
	UClass* Z_Construct_UClass_UABAnimationAttackInterface_NoRegister()
	{
		return UABAnimationAttackInterface::StaticClass();
	}
	struct Z_Construct_UClass_UABAnimationAttackInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABAnimationAttackInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InfiniteAbyss,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimationAttackInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABAnimationAttackInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/ABAnimationAttackInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABAnimationAttackInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IABAnimationAttackInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABAnimationAttackInterface_Statics::ClassParams = {
		&UABAnimationAttackInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABAnimationAttackInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UABAnimationAttackInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UABAnimationAttackInterface()
	{
		if (!Z_Registration_Info_UClass_UABAnimationAttackInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABAnimationAttackInterface.OuterSingleton, Z_Construct_UClass_UABAnimationAttackInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABAnimationAttackInterface.OuterSingleton;
	}
	template<> INFINITEABYSS_API UClass* StaticClass<UABAnimationAttackInterface>()
	{
		return UABAnimationAttackInterface::StaticClass();
	}
	UABAnimationAttackInterface::UABAnimationAttackInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABAnimationAttackInterface);
	UABAnimationAttackInterface::~UABAnimationAttackInterface() {}
	struct Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Interface_ABAnimationAttackInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Interface_ABAnimationAttackInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABAnimationAttackInterface, UABAnimationAttackInterface::StaticClass, TEXT("UABAnimationAttackInterface"), &Z_Registration_Info_UClass_UABAnimationAttackInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABAnimationAttackInterface), 1251488610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Interface_ABAnimationAttackInterface_h_4197793964(TEXT("/Script/InfiniteAbyss"),
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Interface_ABAnimationAttackInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Interface_ABAnimationAttackInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
