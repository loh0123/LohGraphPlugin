// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLGPGroupPathData;
struct FVector;
class ULGPNode;
struct FLGPWeightPrefab;
#ifdef LOHGRAPHPLUGIN_LGPGraphReader_generated_h
#error "LGPGraphReader.generated.h already included, missing '#pragma once' in LGPGraphReader.h"
#endif
#define LOHGRAPHPLUGIN_LGPGraphReader_generated_h

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLGPAStarHelper_Statics; \
	LOHGRAPHPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHGRAPHPLUGIN_API UScriptStruct* StaticStruct<struct FLGPAStarHelper>();

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_105_DELEGATE \
static inline void FOnEndFollowingPathSignature_DelegateWrapper(const FMulticastScriptDelegate& OnEndFollowingPathSignature) \
{ \
	OnEndFollowingPathSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_104_DELEGATE \
static inline void FOnBeginFollowingPathSignature_DelegateWrapper(const FMulticastScriptDelegate& OnBeginFollowingPathSignature) \
{ \
	OnBeginFollowingPathSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_103_DELEGATE \
struct LGPGraphNavigator_eventOnPathReceiveSignature_Parms \
{ \
	TArray<FLGPGroupPathData> Path; \
}; \
static inline void FOnPathReceiveSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPathReceiveSignature, TArray<FLGPGroupPathData> const& Path) \
{ \
	LGPGraphNavigator_eventOnPathReceiveSignature_Parms Parms; \
	Parms.Path=Path; \
	OnPathReceiveSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_SPARSE_DATA
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOverlappingNodeByLocation); \
	DECLARE_FUNCTION(execGetOverlappingNode); \
	DECLARE_FUNCTION(execGetNodeWeight); \
	DECLARE_FUNCTION(execGetWeightData);


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOverlappingNodeByLocation); \
	DECLARE_FUNCTION(execGetOverlappingNode); \
	DECLARE_FUNCTION(execGetNodeWeight); \
	DECLARE_FUNCTION(execGetWeightData);


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULGPGraphReader(); \
	friend struct Z_Construct_UClass_ULGPGraphReader_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphReader, ULGPGraphComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphReader)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_INCLASS \
private: \
	static void StaticRegisterNativesULGPGraphReader(); \
	friend struct Z_Construct_UClass_ULGPGraphReader_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphReader, ULGPGraphComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphReader)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_STANDARD_CONSTRUCTORS \
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


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_ENHANCED_CONSTRUCTORS \
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


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_PRIVATE_PROPERTY_OFFSET
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_70_PROLOG
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_RPC_WRAPPERS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_INCLASS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_INCLASS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHGRAPHPLUGIN_API UClass* StaticClass<class ULGPGraphReader>();

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_SPARSE_DATA
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execContinualFollowingNode); \
	DECLARE_FUNCTION(execStopFollowingNode); \
	DECLARE_FUNCTION(execNextFollowingNode); \
	DECLARE_FUNCTION(execGetIsManualMoving); \
	DECLARE_FUNCTION(execGetIsFollowingPath); \
	DECLARE_FUNCTION(execGetFollowIndex); \
	DECLARE_FUNCTION(execGetEndNode); \
	DECLARE_FUNCTION(execGetStartNode); \
	DECLARE_FUNCTION(execGetLocalNode); \
	DECLARE_FUNCTION(execGetFollowingNode); \
	DECLARE_FUNCTION(execGoToLocation); \
	DECLARE_FUNCTION(execGoToNode);


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execContinualFollowingNode); \
	DECLARE_FUNCTION(execStopFollowingNode); \
	DECLARE_FUNCTION(execNextFollowingNode); \
	DECLARE_FUNCTION(execGetIsManualMoving); \
	DECLARE_FUNCTION(execGetIsFollowingPath); \
	DECLARE_FUNCTION(execGetFollowIndex); \
	DECLARE_FUNCTION(execGetEndNode); \
	DECLARE_FUNCTION(execGetStartNode); \
	DECLARE_FUNCTION(execGetLocalNode); \
	DECLARE_FUNCTION(execGetFollowingNode); \
	DECLARE_FUNCTION(execGoToLocation); \
	DECLARE_FUNCTION(execGoToNode);


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULGPGraphNavigator(); \
	friend struct Z_Construct_UClass_ULGPGraphNavigator_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphNavigator, ULGPGraphReader, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphNavigator)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_INCLASS \
private: \
	static void StaticRegisterNativesULGPGraphNavigator(); \
	friend struct Z_Construct_UClass_ULGPGraphNavigator_Statics; \
public: \
	DECLARE_CLASS(ULGPGraphNavigator, ULGPGraphReader, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPGraphNavigator)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPGraphNavigator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGPGraphNavigator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPGraphNavigator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPGraphNavigator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPGraphNavigator(ULGPGraphNavigator&&); \
	NO_API ULGPGraphNavigator(const ULGPGraphNavigator&); \
public:


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPGraphNavigator(ULGPGraphNavigator&&); \
	NO_API ULGPGraphNavigator(const ULGPGraphNavigator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPGraphNavigator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPGraphNavigator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULGPGraphNavigator)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FollowingNode() { return STRUCT_OFFSET(ULGPGraphNavigator, FollowingNode); } \
	FORCEINLINE static uint32 __PPO__LocalNode() { return STRUCT_OFFSET(ULGPGraphNavigator, LocalNode); } \
	FORCEINLINE static uint32 __PPO__StartNode() { return STRUCT_OFFSET(ULGPGraphNavigator, StartNode); } \
	FORCEINLINE static uint32 __PPO__EndNode() { return STRUCT_OFFSET(ULGPGraphNavigator, EndNode); } \
	FORCEINLINE static uint32 __PPO__FollowIndex() { return STRUCT_OFFSET(ULGPGraphNavigator, FollowIndex); } \
	FORCEINLINE static uint32 __PPO__IsFollowingPath() { return STRUCT_OFFSET(ULGPGraphNavigator, IsFollowingPath); } \
	FORCEINLINE static uint32 __PPO__IsManualMoving() { return STRUCT_OFFSET(ULGPGraphNavigator, IsManualMoving); } \
	FORCEINLINE static uint32 __PPO__PathData() { return STRUCT_OFFSET(ULGPGraphNavigator, PathData); }


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_97_PROLOG
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_RPC_WRAPPERS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_INCLASS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_INCLASS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHGRAPHPLUGIN_API UClass* StaticClass<class ULGPGraphNavigator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPGraphReader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
