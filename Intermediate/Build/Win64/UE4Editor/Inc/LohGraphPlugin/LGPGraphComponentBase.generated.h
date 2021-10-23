// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOHGRAPHPLUGIN_LGPGraphComponentBase_generated_h
#error "LGPGraphComponentBase.generated.h already included, missing '#pragma once' in LGPGraphComponentBase.h"
#endif
#define LOHGRAPHPLUGIN_LGPGraphComponentBase_generated_h

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_SPARSE_DATA
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_RPC_WRAPPERS
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULGPGraphComponentBase(); \
	friend struct Z_Construct_UClass_ULGPGraphComponentBase_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphComponentBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphComponentBase)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_INCLASS \
private: \
	static void StaticRegisterNativesULGPGraphComponentBase(); \
	friend struct Z_Construct_UClass_ULGPGraphComponentBase_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphComponentBase, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphComponentBase)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPGraphComponentBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGPGraphComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPGraphComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPGraphComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPGraphComponentBase(ULGPGraphComponentBase&&); \
	NO_API ULGPGraphComponentBase(const ULGPGraphComponentBase&); \
public:


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPGraphComponentBase(ULGPGraphComponentBase&&); \
	NO_API ULGPGraphComponentBase(const ULGPGraphComponentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPGraphComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPGraphComponentBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULGPGraphComponentBase)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CoreSystem() { return STRUCT_OFFSET(ULGPGraphComponentBase, CoreSystem); }


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_20_PROLOG
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_RPC_WRAPPERS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_INCLASS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_INCLASS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHGRAPHPLUGIN_API UClass* StaticClass<class ULGPGraphComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphComponentBase_h


#define FOREACH_ENUM_EGRAPHCOMPONENTTYPE(op) \
	op(EGraphComponentType::Base) \
	op(EGraphComponentType::Reader) \
	op(EGraphComponentType::Writer) 

enum class EGraphComponentType : uint8;
template<> LOHGRAPHPLUGIN_API UEnum* StaticEnum<EGraphComponentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
