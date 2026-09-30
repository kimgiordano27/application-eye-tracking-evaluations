/*
FUNCTION_NAME: FUN_064b82c8
ENTRY_POINT: 064b82c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_16;functionality_data_collection_or_telemetry_hits_16
*/


void FUN_064b82c8(long param_1)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  puVar8 = 
  System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
  ;
  puVar7 = 
  System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
  ;
  puVar6 = System_Collections_Generic_Dictionary<IAPManager_IAPPack,_List<Accessory>>_TypeInfo;
  puVar5 = System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TypeInfo
  ;
  puVar4 = 
  System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
  ;
  puVar3 = System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_TypeInfo;
  puVar2 = 
  System_Collections_Generic_Dictionary<CAPI_ovrAvatar2EntityId,_OvrAvatarManager_PuppeteerInfo>_TypeInfo
  ;
  puVar1 = UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var;
  if ((DAT_07556d42 & 1) == 0) {
    FUN_03188a78(
                System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TypeInfo
                );
    FUN_03188a78(System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_Dictionary<IAPManager_IAPPack,_List<Accessory>>_TypeInfo
                );
    FUN_03188a78(
                System_Collections_Generic_Dictionary<CAPI_ovrAvatar2EntityId,_OvrAvatarManager_PuppeteerInfo>_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var
                );
    FUN_03188a78(
                System_Collections_Generic_Dictionary<CAPI_ovrAvatar2EntityId,_OvrAvatarManager_EntityFootPlantData>_TypeInfo
                );
    FUN_03188a78(
                System_Collections_Generic_Dictionary<CAPI_ovrAvatar2EntityId,_CAPI_AppPoseNodeCallback_EntityInfo>_TypeInfo
                );
    FUN_03188a78(
                System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
                );
    FUN_03188a78(
                System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
                );
    FUN_03188a78(
                System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
                );
    FUN_03188a78(
                System_Collections_Generic_Dictionary<JsonTypeInfo_ParameterLookupKey,_JsonTypeInfo_ParameterLookupValue>_TypeInfo
                );
    FUN_03188a78(
                System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                );
    FUN_03188a78(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    FUN_03188a78(
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                );
    DAT_07556d42 = 1;
  }
  FUN_0656b4e0(param_1,0);
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar7,*(undefined8 *)puVar5);
  uVar11 = *(undefined8 *)puVar1;
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1a8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar4;
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1b8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar8;
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1b0) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar9;
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1c0) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar11,uVar12);
  puVar1 = 
  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
  ;
  uVar11 = *(undefined8 *)puVar6;
  *(undefined8 *)(param_1 + 0x1c8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = 
  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo;
  uVar11 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x1d0) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = 
  System_Collections_Generic_Dictionary<JsonTypeInfo_ParameterLookupKey,_JsonTypeInfo_ParameterLookupValue>_TypeInfo
  ;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1d8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = 
  System_Collections_Generic_Dictionary<CAPI_ovrAvatar2EntityId,_OvrAvatarManager_EntityFootPlantData>_TypeInfo
  ;
  uVar11 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x1e0) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = 
  System_Collections_Generic_Dictionary<CAPI_ovrAvatar2EntityId,_CAPI_AppPoseNodeCallback_EntityInfo>_TypeInfo
  ;
  uVar11 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x1e8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  *(undefined8 *)(param_1 + 0x1f0) = uVar10;
  return;
}


