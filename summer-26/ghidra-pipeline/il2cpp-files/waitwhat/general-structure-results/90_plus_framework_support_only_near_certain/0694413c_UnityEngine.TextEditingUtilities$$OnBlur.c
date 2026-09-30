/*
FUNCTION_NAME: UnityEngine.TextEditingUtilities$$OnBlur
ENTRY_POINT: 0694413c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_21;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_21
*/


void UnityEngine_TextEditingUtilities__OnBlur(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *puVar6;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *puVar7;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 *puVar8;
  long unaff_x29;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(unaff_x29 + 0x598);
  puVar8 = *(undefined8 **)(unaff_x28 + 0x1b8);
  puVar6 = *(undefined8 **)(unaff_x20 + 0x150);
  puVar7 = *(undefined8 **)(unaff_x24 + 0x128);
  if ((*(byte *)(unaff_x22 + 0xa8b) & 1) == 0) {
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
    *(undefined1 *)(unaff_x22 + 0xa8b) = 1;
  }
  FUN_0656b4e0(param_1,0);
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,*unaff_x26,*unaff_x25);
  uVar4 = *unaff_x23;
  uVar5 = *unaff_x27;
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>(param_1,uVar4,uVar5);
  uVar4 = *unaff_x21;
  uVar5 = *unaff_x25;
  *(undefined8 *)(param_1 + 0x1b0) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>(param_1,uVar4,uVar5);
  uVar4 = *puVar9;
  uVar5 = *unaff_x25;
  *(undefined8 *)(param_1 + 0x1b8) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>(param_1,uVar4,uVar5);
  uVar4 = *puVar8;
  uVar5 = *unaff_x27;
  *(undefined8 *)(param_1 + 0x1c0) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>(param_1,uVar4,uVar5);
  puVar1 = 
  System_Collections_Generic_Dictionary<JsonTypeInfo_ParameterLookupKey,_JsonTypeInfo_ParameterLookupValue>_TypeInfo
  ;
  uVar4 = *unaff_x25;
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = System_Collections_Generic_IEnumerator<HandJointId>_TypeInfo;
  uVar4 = *(undefined8 *)
           System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
  ;
  *(undefined8 *)(param_1 + 0x1d0) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,uVar4,*(undefined8 *)puVar1);
  puVar1 = UnityEngine_UIElements_DefaultEventSystem_LegacyInputProcessor_NoInput_TypeInfo;
  uVar4 = *unaff_x25;
  *(undefined8 *)(param_1 + 0x1d8) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  uVar4 = *unaff_x25;
  *(undefined8 *)(param_1 + 0x1e0) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = PTR_DAT_071048a0;
  uVar4 = *puVar6;
  *(undefined8 *)(param_1 + 0x1e8) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = UnityEngine_Rendering_DynamicArray<RenderGraphObjectPool_SharedObjectPoolBase>_TypeInfo;
  uVar4 = *puVar7;
  *(undefined8 *)(param_1 + 0x1f8) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,*(undefined8 *)puVar1,uVar4);
  puVar2 = UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_Cell>_TypeInfo;
  uVar4 = *(undefined8 *)Newtonsoft_Json_Utilities_DynamicProxyMetaObject<JObject>_TypeInfo;
  *(undefined8 *)(param_1 + 0x220) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,uVar4,*(undefined8 *)puVar2);
  puVar1 = UnityEngine_UIElements_BackgroundPosition_PropertyBag_OffsetProperty_TypeInfo;
  uVar4 = *puVar6;
  *(undefined8 *)(param_1 + 0x228) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = 
  System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>_TypeInfo;
  uVar4 = *unaff_x25;
  *(undefined8 *)(param_1 + 0x1f0) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = 
  System_Collections_Generic_Dictionary<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_TypeInfo
  ;
  uVar4 = *(undefined8 *)
           System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
  ;
  *(undefined8 *)(param_1 + 0x200) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,uVar4,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_07113a20;
  uVar4 = *puVar7;
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = PTR_DAT_07113a40;
  uVar4 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x210) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,*(undefined8 *)puVar1,uVar4);
  puVar1 = 
  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass9_0_TypeInfo;
  uVar4 = *(undefined8 *)
           UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_<>c__DisplayClass1_0_TypeInfo
  ;
  *(undefined8 *)(param_1 + 0x218) = uVar3;
  uVar3 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                    (param_1,uVar4,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x230) = uVar3;
  return;
}


