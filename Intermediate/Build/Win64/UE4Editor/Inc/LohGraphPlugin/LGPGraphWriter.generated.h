// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLGPNodePathData;
class ULGPGraphNavigator;
#ifdef LOHGRAPHPLUGIN_LGPGraphWriter_generated_h
#error "LGPGraphWriter.generated.h already included, missing '#pragma once' in LGPGraphWriter.h"
#endif
#define LOHGRAPHPLUGIN_LGPGraphWriter_generated_h

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLGSNodeGroupProcess_Statics; \
	LOHGRAPHPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHGRAPHPLUGIN_API UScriptStruct* StaticStruct<struct FLGSNodeGroupProcess>();

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_50_DELEGATE \
struct LGPGraphWriter_eventOnAlertNodeUsedSignature_Parms \
{ \
	FLGPNodePathData Path; \
	ULGPGraphNavigator* Navigator; \
}; \
static inline void FOnAlertNodeUsedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAlertNodeUsedSignature, FLGPNodePathData const& Path, ULGPGraphNavigator* Navigator) \
{ \
	LGPGraphWriter_eventOnAlertNodeUsedSignature_Parms Parms; \
	Parms.Path=Path; \
	Parms.Navigator=Navigator; \
	OnAlertNodeUsedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_49_DELEGATE \
struct LGPGraphWriter_eventOnAlertPathUsedSignature_Parms \
{ \
	FLGPNodePathData Path; \
	ULGPGraphNavigator* Navigator; \
}; \
static inline void FOnAlertPathUsedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAlertPathUsedSignature, FLGPNodePathData const& Path, ULGPGraphNavigator* Navigator) \
{ \
	LGPGraphWriter_eventOnAlertPathUsedSignature_Parms Parms; \
	Parms.Path=Path; \
	Parms.Navigator=Navigator; \
	OnAlertPathUsedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_SPARSE_DATA
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_RPC_WRAPPERS
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULGPGraphWriter(); \
	friend struct Z_Construct_UClass_ULGPGraphWriter_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphWriter, ULGPGraphComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphWriter)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_INCLASS \
private: \
	static void StaticRegisterNativesULGPGraphWriter(); \
	friend struct Z_Construct_UClass_ULGPGraphWriter_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphWriter, ULGPGraphComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphWriter)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPGraphWriter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGPGraphWriter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPGraphWriter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPGraphWriter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPGraphWriter(ULGPGraphWriter&&); \
	NO_API ULGPGraphWriter(const ULGPGraphWriter&); \
public:


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPGraphWriter() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPGraphWriter(ULGPGraphWriter&&); \
	NO_API ULGPGraphWriter(const ULGPGraphWriter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPGraphWriter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPGraphWriter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULGPGraphWriter)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RegisteredNode() { return STRUCT_OFFSET(ULGPGraphWriter, RegisteredNode); } \
	FORCEINLINE static uint32 __PPO__BuildVersion() { return STRUCT_OFFSET(ULGPGraphWriter, BuildVersion); } \
	FORCEINLINE static uint32 __PPO__ReturnPathData() { return STRUCT_OFFSET(ULGPGraphWriter, ReturnPathData); } \
	FORCEINLINE static uint32 __PPO__PathProcessQueue() { return STRUCT_OFFSET(ULGPGraphWriter, PathProcessQueue); } \
	FORCEINLINE static uint32 __PPO__CurrentPathProcessNode() { return STRUCT_OFFSET(ULGPGraphWriter, CurrentPathProcessNode); } \
	FORCEINLINE static uint32 __PPO__NodeGroupList() { return STRUCT_OFFSET(ULGPGraphWriter, NodeGroupList); }


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_44_PROLOG
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_RPC_WRAPPERS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_INCLASS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_INCLASS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHGRAPHPLUGIN_API UClass* StaticClass<class ULGPGraphWriter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphWriter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
