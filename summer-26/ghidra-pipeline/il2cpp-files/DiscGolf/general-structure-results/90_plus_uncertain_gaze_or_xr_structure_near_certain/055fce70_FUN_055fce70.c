/*
FUNCTION_NAME: FUN_055fce70
ENTRY_POINT: 055fce70
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_6
*/


void FUN_055fce70(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  puVar9 = 
  System_Collections_Generic_Dictionary<NetworkSpawnManager_InstantiateAndSpawnErrorTypes,_string>_TypeInfo
  ;
  puVar8 = 
  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo;
  puVar7 = 
  System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_TypeInfo
  ;
  puVar6 = System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TypeInfo
  ;
  puVar5 = 
  System_Collections_Generic_Dictionary<CAPI_ovrAvatar2Prototype_BehaviorDebugQueryId,_CAPI_DebugQuery>_TypeInfo
  ;
  puVar4 = 
  System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
  ;
  puVar3 = 
  System_Collections_Generic_Dictionary<CAPI_ovrAvatar2PrimitiveRenderInstanceID,_OvrAvatarEntity_PrimitiveRenderData[]>_TypeInfo
  ;
  puVar2 = System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_TypeInfo;
  puVar1 = 
  System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_OvrAvatarEntity_PrimitiveRenderData[]>_TypeInfo
  ;
  if ((DAT_06dbb8e0 & 1) == 0) {
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                );
    FUN_02d965b8(System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo)
    ;
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_TypeInfo
                );
    FUN_02d965b8(System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_TypeInfo);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_OvrGpuCombinerDrawCall_BlockData>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_OvrGpuMorphTargetsCombiner_BlockData>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_OvrSkinningTypes_Handle>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<CAPI_ovrAvatar2PrimitiveRenderInstanceID,_OvrAvatarEntity_PrimitiveRenderData[]>_TypeInfo
                );
    FUN_02d965b8(System_Collections_Generic_Dictionary<ProTourWrapper_Division,_float>_TypeInfo);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_TypeInfo
                );
    FUN_02d965b8(System_Collections_Generic_Dictionary<ShopItemPane_DiscBagSlot,_string>_TypeInfo);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<CAPI_ovrAvatar2Prototype_BehaviorDebugQueryId,_CAPI_DebugQuery>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<SoundManager_AmbienceEffects,_List<AudioClip>>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<SoundManager_BirdEffects,_List<AudioClip>>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<SoundManager_SoundEffects,_List<AudioClip>>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<NetworkSpawnManager_InstantiateAndSpawnErrorTypes,_string>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_OvrAvatarEntity_PrimitiveRenderData[]>_TypeInfo
                );
    DAT_06dbb8e0 = 1;
  }
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  uVar11 = *(undefined8 *)puVar2;
  *param_1 = uVar10;
  uVar10 = FUN_0631e59c(uVar11,0);
  uVar11 = *(undefined8 *)puVar3;
  param_1[1] = uVar10;
  uVar10 = FUN_0631e59c(uVar11,0);
  uVar11 = *(undefined8 *)puVar4;
  param_1[2] = uVar10;
  uVar10 = FUN_0631e59c(uVar11,0);
  uVar11 = *(undefined8 *)puVar5;
  param_1[3] = uVar10;
  uVar10 = FUN_0631e59c(uVar11,0);
  uVar11 = *(undefined8 *)puVar6;
  param_1[4] = uVar10;
  uVar10 = FUN_0631e59c(uVar11,0);
  uVar11 = *(undefined8 *)puVar7;
  param_1[5] = uVar10;
  uVar10 = FUN_0631e59c(uVar11,0);
  uVar11 = *(undefined8 *)puVar8;
  param_1[6] = uVar10;
  uVar10 = FUN_0631e59c(uVar11,0);
  uVar11 = *(undefined8 *)puVar9;
  param_1[7] = uVar10;
  uVar10 = FUN_0631e59c(uVar11,0);
  puVar1 = 
  System_Collections_Generic_Dictionary<Regex_CachedCodeEntryKey,_Regex_CachedCodeEntry>_TypeInfo;
  param_1[8] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = System_Collections_Generic_Dictionary<ShopItemPane_DiscBagSlot,_string>_TypeInfo;
  param_1[9] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = 
  System_Collections_Generic_Dictionary<OvrAvatarShaderNameUtils_KnownShader,_string>_TypeInfo;
  param_1[10] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = 
  System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_OvrSkinningTypes_Handle>_TypeInfo;
  param_1[0xb] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
  param_1[0xc] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = 
  System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_OvrGpuMorphTargetsCombiner_BlockData>_TypeInfo
  ;
  param_1[0xd] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = 
  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
  ;
  param_1[0x15] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = System_Collections_Generic_Dictionary<SoundManager_BirdEffects,_List<AudioClip>>_TypeInfo
  ;
  param_1[0x16] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = System_Collections_Generic_Dictionary<ProTourWrapper_Division,_float>_TypeInfo;
  param_1[0xe] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = 
  System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
  ;
  param_1[0xf] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = 
  System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_LinkedListNode<OvrFreeListBufferTracker_TrackerNode>>_TypeInfo
  ;
  param_1[0x10] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = 
  System_Collections_Generic_Dictionary<OvrSkinningTypes_Handle,_OvrGpuCombinerDrawCall_BlockData>_TypeInfo
  ;
  param_1[0x11] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = 
  System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_TypeInfo
  ;
  param_1[0x12] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = 
  System_Collections_Generic_Dictionary<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_TypeInfo;
  param_1[0x13] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = 
  System_Collections_Generic_Dictionary<SoundManager_SoundEffects,_List<AudioClip>>_TypeInfo;
  param_1[0x14] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  param_1[0x17] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  puVar1 = 
  System_Collections_Generic_Dictionary<SoundManager_AmbienceEffects,_List<AudioClip>>_TypeInfo;
  param_1[0x18] = uVar10;
  uVar10 = FUN_0631e59c(*(undefined8 *)puVar1,0);
  param_1[0x19] = uVar10;
  return;
}


