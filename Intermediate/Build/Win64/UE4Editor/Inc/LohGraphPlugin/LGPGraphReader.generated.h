// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class ULGPNode;
struct FLGPWeightPrefab;
#ifdef LOHGRAPHPLUGIN_LGPGraphReader_generated_h
#error "LGPGraphReader.generated.h already included, missing '#pragma once' in LGPGraphReader.h"
#endif
#define LOHGRAPHPLUGIN_LGPGraphReader_generated_h

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_SPARSE_DATA
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOverlappingNodeByLocation); \
	DECLARE_FUNCTION(execGetOverlappingNode); \
	DECLARE_FUNCTION(execGetNodeWeight); \
	DECLARE_FUNCTION(execGetWeightData);


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOverlappingNodeByLocation); \
	DECLARE_FUNCTION(execGetOverlappingNode); \
	DECLARE_FUNCTION(execGetNodeWeight); \
	DECLARE_FUNCTION(execGetWeightData);


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULGPGraphReader(); \
	friend struct Z_Construct_UClass_ULGPGraphReader_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphReader, ULGPGraphComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphReader)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_INCLASS \
private: \
	static void StaticRegisterNativesULGPGraphReader(); \
	friend struct Z_Construct_UClass_ULGPGraphReader_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphReader, ULGPGraphComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphReader)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPGraphReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGPGraphReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPGraphReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPGraphReader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPGraphReader(ULGPGraphReader&&); \
	NO_API ULGPGraphReader(const ULGPGraphReader&); \
public:


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPGraphReader() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPGraphReader(ULGPGraphReader&&); \
	NO_API ULGPGraphReader(const ULGPGraphReader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPGraphReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPGraphReader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULGPGraphReader)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_PRIVATE_PROPERTY_OFFSET
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_16_PROLOG
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_RPC_WRAPPERS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_INCLASS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_INCLASS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHGRAPHPLUGIN_API UClass* StaticClass<class ULGPGraphReader>();

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_SPARSE_DATA
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_RPC_WRAPPERS
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULGPGraphNavigator(); \
	friend struct Z_Construct_UClass_ULGPGraphNavigator_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphNavigator, ULGPGraphReader, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphNavigator)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_INCLASS \
private: \
	static void StaticRegisterNativesULGPGraphNavigator(); \
	friend struct Z_Construct_UClass_ULGPGraphNavigator_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphNavigator, ULGPGraphReader, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphNavigator)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPGraphNavigator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGPGraphNavigator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPGraphNavigator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPGraphNavigator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPGraphNavigator(ULGPGraphNavigator&&); \
	NO_API ULGPGraphNavigator(const ULGPGraphNavigator&); \
public:


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPGraphNavigator() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPGraphNavigator(ULGPGraphNavigator&&); \
	NO_API ULGPGraphNavigator(const ULGPGraphNavigator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPGraphNavigator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPGraphNavigator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULGPGraphNavigator)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PathData() { return STRUCT_OFFSET(ULGPGraphNavigator, PathData); }


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_43_PROLOG
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_RPC_WRAPPERS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_INCLASS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_INCLASS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHGRAPHPLUGIN_API UClass* StaticClass<class ULGPGraphNavigator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
