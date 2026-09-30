/*
FUNCTION_NAME: FUN_069440e8
ENTRY_POINT: 069440e8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_21;functionality_data_collection_or_telemetry_hits_21
*/


void FUN_069440e8(long param_1)

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
  
  puVar9 = Unity_Collections_AllocatorManager_SharedStatics_TableEntry_TypeInfo;
  puVar8 = System_Collections_Generic_IEnumerator<Expression>_TypeInfo;
  puVar7 = 
  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo;
  puVar6 = 
  System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
  ;
  puVar5 = System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TypeInfo
  ;
  puVar4 = 
  System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
  ;
  puVar3 = System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_TypeInfo;
  puVar2 = 
  System_Collections_Generic_Dictionary<CAPI_ovrAvatar2EntityId,_OvrAvatarManager_PuppeteerInfo>_TypeInfo
  ;
  puVar1 = PTR_DAT_070f4598;
  if ((DAT_07559a8b & 1) == 0) {
    FUN_03188a78(
                System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TypeInfo
                );
    FUN_03188a78(System_Collections_Generic_Dictionary<CAPI_ovrAvatar2NodeId,_uint>_TypeInfo);
    FUN_03188a78(
                UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass9_0_TypeInfo
                );
    FUN_03188a78(
                System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_TypeInfo
                );
    FUN_03188a78(Unity_Collections_AllocatorManager_SharedStatics_TableEntry_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_Cell>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_IEnumerator<HandJointId>_TypeInfo);
    FUN_03188a78(
                System_Collections_Generic_Dictionary<CAPI_ovrAvatar2EntityId,_OvrAvatarManager_PuppeteerInfo>_TypeInfo
                );
    FUN_03188a78(System_Collections_Generic_IEnumerator<Expression>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f4598);
    FUN_03188a78(PTR_DAT_071048a0);
    FUN_03188a78(
                System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo
                );
    FUN_03188a78(PTR_DAT_07113a20);
    FUN_03188a78(UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo);
    FUN_03188a78(
                System_Collections_Generic_Dictionary<JointRotationActiveState_JointRotationFeatureConfig,_JointRotationActiveState_JointRotationFeatureState>_TypeInfo
                );
    FUN_03188a78(
                System_Collections_Generic_Dictionary<CAPI_ovrAvatar2RequestId,_OvrAvatarManager_RequestDelegate>_TypeInfo
                );
    FUN_03188a78(UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_NoInput_TypeInfo);
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
                UnityEngine_Rendering_DynamicArray<RenderGraphObjectPool_SharedObjectPoolBase>_TypeInfo
                );
    FUN_03188a78(PTR_DAT_07113a40);
    FUN_03188a78(
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
                );
    FUN_03188a78(Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JObject>_TypeInfo);
    FUN_03188a78(
                System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                );
    DAT_07559a8b = 1;
  }
  FUN_0656b4e0(param_1,0);
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar8,*(undefined8 *)puVar3);
  uVar11 = *(undefined8 *)puVar6;
  uVar12 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x1a8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar4;
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1b0) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar1;
  uVar12 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1b8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar11,uVar12);
  uVar11 = *(undefined8 *)puVar7;
  uVar12 = *(undefined8 *)puVar5;
  *(undefined8 *)(param_1 + 0x1c0) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar11,uVar12);
  puVar1 = 
  System_Collections_Generic_Dictionary<JsonTypeInfo_ParameterLookupKey,_JsonTypeInfo_ParameterLookupValue>_TypeInfo
  ;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1c8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = System_Collections_Generic_IEnumerator<HandJointId>_TypeInfo;
  uVar11 = *(undefined8 *)
            System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
  ;
  *(undefined8 *)(param_1 + 0x1d0) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar11,*(undefined8 *)puVar1);
  puVar1 = UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_NoInput_TypeInfo;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1d8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1e0) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = PTR_DAT_071048a0;
  uVar11 = *(undefined8 *)puVar9;
  *(undefined8 *)(param_1 + 0x1e8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = UnityEngine_Rendering_DynamicArray<RenderGraphObjectPool_SharedObjectPoolBase>_TypeInfo;
  uVar11 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x1f8) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  puVar4 = UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_Cell>_TypeInfo;
  uVar11 = *(undefined8 *)Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JObject>_TypeInfo;
  *(undefined8 *)(param_1 + 0x220) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar11,*(undefined8 *)puVar4);
  puVar1 = UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo;
  uVar11 = *(undefined8 *)puVar9;
  *(undefined8 *)(param_1 + 0x228) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = 
  System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo;
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x1f0) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = 
  System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_TypeInfo
  ;
  uVar11 = *(undefined8 *)
            System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
  ;
  *(undefined8 *)(param_1 + 0x200) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar11,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_07113a20;
  uVar11 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x208) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = PTR_DAT_07113a40;
  uVar11 = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x210) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar1,uVar11);
  puVar1 = 
  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass9_0_TypeInfo;
  uVar11 = *(undefined8 *)
            UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
  ;
  *(undefined8 *)(param_1 + 0x218) = uVar10;
  uVar10 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,uVar11,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x230) = uVar10;
  return;
}


