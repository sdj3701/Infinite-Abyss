// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Item/ABItemData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABItemData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	INFINITEABYSS_API UClass* Z_Construct_UClass_UABItemData();
	INFINITEABYSS_API UClass* Z_Construct_UClass_UABItemData_NoRegister();
	INFINITEABYSS_API UEnum* Z_Construct_UEnum_InfiniteAbyss_EItemType();
	UPackage* Z_Construct_UPackage__Script_InfiniteAbyss();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InfiniteAbyss_EItemType, (UObject*)Z_Construct_UPackage__Script_InfiniteAbyss(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> INFINITEABYSS_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_InfiniteAbyss_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InfiniteAbyss_EItemType_Statics::Enumerators[] = {
		{ "EItemType::Weapon", (int64)EItemType::Weapon },
		{ "EItemType::Potion", (int64)EItemType::Potion },
		{ "EItemType::Scroll", (int64)EItemType::Scroll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InfiniteAbyss_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Item/ABItemData.h" },
		{ "Potion.Name", "EItemType::Potion" },
		{ "Scroll.Name", "EItemType::Scroll" },
		{ "Weapon.Name", "EItemType::Weapon" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InfiniteAbyss_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InfiniteAbyss,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_InfiniteAbyss_EItemType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InfiniteAbyss_EItemType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InfiniteAbyss_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InfiniteAbyss_EItemType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_InfiniteAbyss_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_InfiniteAbyss_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}
	void UABItemData::StaticRegisterNativesUABItemData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABItemData);
	UClass* Z_Construct_UClass_UABItemData_NoRegister()
	{
		return UABItemData::StaticClass();
	}
	struct Z_Construct_UClass_UABItemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_InfiniteAbyss,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABItemData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABItemData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Item/ABItemData.h" },
		{ "ModuleRelativePath", "Item/ABItemData.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UABItemData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABItemData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "Item/ABItemData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UABItemData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABItemData, Type), Z_Construct_UEnum_InfiniteAbyss_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABItemData_Statics::NewProp_Type_MetaData), Z_Construct_UClass_UABItemData_Statics::NewProp_Type_MetaData) }; // 2928685883
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABItemData_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABItemData_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABItemData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UABItemData_Statics::ClassParams = {
		&UABItemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABItemData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABItemData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABItemData_Statics::Class_MetaDataParams), Z_Construct_UClass_UABItemData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABItemData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UABItemData()
	{
		if (!Z_Registration_Info_UClass_UABItemData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABItemData.OuterSingleton, Z_Construct_UClass_UABItemData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UABItemData.OuterSingleton;
	}
	template<> INFINITEABYSS_API UClass* StaticClass<UABItemData>()
	{
		return UABItemData::StaticClass();
	}
	UABItemData::UABItemData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABItemData);
	UABItemData::~UABItemData() {}
	struct Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Item_ABItemData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Item_ABItemData_h_Statics::EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2928685883U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Item_ABItemData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UABItemData, UABItemData::StaticClass, TEXT("UABItemData"), &Z_Registration_Info_UClass_UABItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABItemData), 1040060593U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Item_ABItemData_h_1721981927(TEXT("/Script/InfiniteAbyss"),
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Item_ABItemData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Item_ABItemData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Item_ABItemData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Item_ABItemData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
