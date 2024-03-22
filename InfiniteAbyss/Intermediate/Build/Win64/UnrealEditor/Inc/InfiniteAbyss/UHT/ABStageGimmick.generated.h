// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gimmick/ABStageGimmick.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef INFINITEABYSS_ABStageGimmick_generated_h
#error "ABStageGimmick.generated.h already included, missing '#pragma once' in ABStageGimmick.h"
#endif
#define INFINITEABYSS_ABStageGimmick_generated_h

#define FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_SPARSE_DATA
#define FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGateTriggerBeginOverlap); \
	DECLARE_FUNCTION(execOnStageTrggerBeginOverlap);


#define FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_ACCESSORS
#define FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAABStageGimmick(); \
	friend struct Z_Construct_UClass_AABStageGimmick_Statics; \
public: \
	DECLARE_CLASS(AABStageGimmick, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InfiniteAbyss"), NO_API) \
	DECLARE_SERIALIZER(AABStageGimmick)


#define FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AABStageGimmick(AABStageGimmick&&); \
	NO_API AABStageGimmick(const AABStageGimmick&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AABStageGimmick); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AABStageGimmick); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AABStageGimmick) \
	NO_API virtual ~AABStageGimmick();


#define FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_18_PROLOG
#define FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_SPARSE_DATA \
	FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_ACCESSORS \
	FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INFINITEABYSS_API UClass* StaticClass<class AABStageGimmick>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal5Project_InfiniteAbyss_Source_InfiniteAbyss_Gimmick_ABStageGimmick_h


#define FOREACH_ENUM_ESTAGESTATE(op) \
	op(EStageState::READY) \
	op(EStageState::FIGHT) \
	op(EStageState::REWARD) \
	op(EStageState::NEXT) 

enum class EStageState : uint8;
template<> struct TIsUEnumClass<EStageState> { enum { Value = true }; };
template<> INFINITEABYSS_API UEnum* StaticEnum<EStageState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
