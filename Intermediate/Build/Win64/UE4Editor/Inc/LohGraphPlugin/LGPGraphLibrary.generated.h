// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FTransform;
struct FVector;
struct FIntVector;
class ULGPNode;
#ifdef LOHGRAPHPLUGIN_LGPGraphLibrary_generated_h
#error "LGPGraphLibrary.generated.h already included, missing '#pragma once' in LGPGraphLibrary.h"
#endif
#define LOHGRAPHPLUGIN_LGPGraphLibrary_generated_h

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_SPARSE_DATA
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddGraphNodeGrid);


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddGraphNodeGrid);


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULGPGraphLibrary(); \
	friend struct Z_Construct_UClass_ULGPGraphLibrary_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphLibrary)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULGPGraphLibrary(); \
	friend struct Z_Construct_UClass_ULGPGraphLibrary_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphLibrary)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPGraphLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGPGraphLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPGraphLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPGraphLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPGraphLibrary(ULGPGraphLibrary&&); \
	NO_API ULGPGraphLibrary(const ULGPGraphLibrary&); \
public:


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPGraphLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPGraphLibrary(ULGPGraphLibrary&&); \
	NO_API ULGPGraphLibrary(const ULGPGraphLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPGraphLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPGraphLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGPGraphLibrary)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_12_PROLOG
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_RPC_WRAPPERS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_INCLASS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_INCLASS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHGRAPHPLUGIN_API UClass* StaticClass<class ULGPGraphLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
