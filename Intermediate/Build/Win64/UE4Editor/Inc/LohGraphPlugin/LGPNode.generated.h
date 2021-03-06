// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULGPNode;
struct FLGPNodePathData;
struct FVector4;
struct FTransform;
struct FVector;
#ifdef LOHGRAPHPLUGIN_LGPNode_generated_h
#error "LGPNode.generated.h already included, missing '#pragma once' in LGPNode.h"
#endif
#define LOHGRAPHPLUGIN_LGPNode_generated_h

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLGPNodeGroupData_Statics; \
	LOHGRAPHPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHGRAPHPLUGIN_API UScriptStruct* StaticStruct<struct FLGPNodeGroupData>();

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLGPGroupMemberData_Statics; \
	LOHGRAPHPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHGRAPHPLUGIN_API UScriptStruct* StaticStruct<struct FLGPGroupMemberData>();

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLGPGroupPathData_Statics; \
	LOHGRAPHPLUGIN_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__ProxyPath() { return STRUCT_OFFSET(FLGPGroupPathData, ProxyPath); }


template<> LOHGRAPHPLUGIN_API UScriptStruct* StaticStruct<struct FLGPGroupPathData>();

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLGPNodePathData_Statics; \
	LOHGRAPHPLUGIN_API static class UScriptStruct* StaticStruct();


template<> LOHGRAPHPLUGIN_API UScriptStruct* StaticStruct<struct FLGPNodePathData>();

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_SPARSE_DATA
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearPath); \
	DECLARE_FUNCTION(execRemovePath); \
	DECLARE_FUNCTION(execAddPath); \
	DECLARE_FUNCTION(execGetPathArray);


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearPath); \
	DECLARE_FUNCTION(execRemovePath); \
	DECLARE_FUNCTION(execAddPath); \
	DECLARE_FUNCTION(execGetPathArray);


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULGPNodeBase(); \
	friend struct Z_Construct_UClass_ULGPNodeBase_Statics; \
public: \
	DECLARE_CLASS(ULGPNodeBase, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPNodeBase)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_INCLASS \
private: \
	static void StaticRegisterNativesULGPNodeBase(); \
	friend struct Z_Construct_UClass_ULGPNodeBase_Statics; \
public: \
	DECLARE_CLASS(ULGPNodeBase, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPNodeBase)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPNodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGPNodeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPNodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPNodeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPNodeBase(ULGPNodeBase&&); \
	NO_API ULGPNodeBase(const ULGPNodeBase&); \
public:


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPNodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPNodeBase(ULGPNodeBase&&); \
	NO_API ULGPNodeBase(const ULGPNodeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPNodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPNodeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGPNodeBase)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PathList() { return STRUCT_OFFSET(ULGPNodeBase, PathList); }


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_178_PROLOG
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_RPC_WRAPPERS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_INCLASS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_INCLASS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHGRAPHPLUGIN_API UClass* StaticClass<class ULGPNodeBase>();

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_SPARSE_DATA
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_RPC_WRAPPERS
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULGPNodeCache(); \
	friend struct Z_Construct_UClass_ULGPNodeCache_Statics; \
public: \
	DECLARE_CLASS(ULGPNodeCache, ULGPNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPNodeCache)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_INCLASS \
private: \
	static void StaticRegisterNativesULGPNodeCache(); \
	friend struct Z_Construct_UClass_ULGPNodeCache_Statics; \
public: \
	DECLARE_CLASS(ULGPNodeCache, ULGPNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPNodeCache)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPNodeCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGPNodeCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPNodeCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPNodeCache); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPNodeCache(ULGPNodeCache&&); \
	NO_API ULGPNodeCache(const ULGPNodeCache&); \
public:


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPNodeCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPNodeCache(ULGPNodeCache&&); \
	NO_API ULGPNodeCache(const ULGPNodeCache&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPNodeCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPNodeCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGPNodeCache)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NodeGraphWriter() { return STRUCT_OFFSET(ULGPNodeCache, NodeGraphWriter); } \
	FORCEINLINE static uint32 __PPO__GroupMemberIndex() { return STRUCT_OFFSET(ULGPNodeCache, GroupMemberIndex); } \
	FORCEINLINE static uint32 __PPO__GroupID() { return STRUCT_OFFSET(ULGPNodeCache, GroupID); } \
	FORCEINLINE static uint32 __PPO__PassWeight() { return STRUCT_OFFSET(ULGPNodeCache, PassWeight); } \
	FORCEINLINE static uint32 __PPO__PassWeightReader() { return STRUCT_OFFSET(ULGPNodeCache, PassWeightReader); } \
	FORCEINLINE static uint32 __PPO__IsPassWeightDirty() { return STRUCT_OFFSET(ULGPNodeCache, IsPassWeightDirty); }


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_229_PROLOG
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_RPC_WRAPPERS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_INCLASS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_INCLASS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_232_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHGRAPHPLUGIN_API UClass* StaticClass<class ULGPNodeCache>();

#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_SPARSE_DATA
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsDebug); \
	DECLARE_FUNCTION(execClearCollisionVertex); \
	DECLARE_FUNCTION(execSetCollisionSphere); \
	DECLARE_FUNCTION(execSetCollisionBox); \
	DECLARE_FUNCTION(execSetCollisionVertex);


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsDebug); \
	DECLARE_FUNCTION(execClearCollisionVertex); \
	DECLARE_FUNCTION(execSetCollisionSphere); \
	DECLARE_FUNCTION(execSetCollisionBox); \
	DECLARE_FUNCTION(execSetCollisionVertex);


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULGPNode(); \
	friend struct Z_Construct_UClass_ULGPNode_Statics; \
public: \
	DECLARE_CLASS(ULGPNode, ULGPNodeCache, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPNode)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_INCLASS \
private: \
	static void StaticRegisterNativesULGPNode(); \
	friend struct Z_Construct_UClass_ULGPNode_Statics; \
public: \
	DECLARE_CLASS(ULGPNode, ULGPNodeCache, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LohGraphPlugin"), NO_API) \
	DECLARE_SERIALIZER(ULGPNode)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULGPNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULGPNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPNode(ULGPNode&&); \
	NO_API ULGPNode(const ULGPNode&); \
public:


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULGPNode(ULGPNode&&); \
	NO_API ULGPNode(const ULGPNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULGPNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULGPNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULGPNode)


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NodeCollision() { return STRUCT_OFFSET(ULGPNode, NodeCollision); } \
	FORCEINLINE static uint32 __PPO__bIsDebug() { return STRUCT_OFFSET(ULGPNode, bIsDebug); }


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_305_PROLOG
#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_RPC_WRAPPERS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_INCLASS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_PRIVATE_PROPERTY_OFFSET \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_SPARSE_DATA \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_INCLASS_NO_PURE_DECLS \
	PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h_308_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOHGRAPHPLUGIN_API UClass* StaticClass<class ULGPNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginLab_Plugins_LohGraphPlugin_Source_LohGraphPlugin_Public_LGPNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
