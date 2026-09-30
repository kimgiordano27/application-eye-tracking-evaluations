/*
FUNCTION_NAME: OVRManager_GetCurrentInputSubsystem_m6343BBB6BBB22C59B70C2502CCFF5D0073B7272D
ENTRY_POINT: 02d875d8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 178
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRManager_GetCurrentInputSubsystem_m6343BBB6BBB22C59B70C2502CCFF5D0073B7272D(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  List_1_t90832B88D7207769654164CC28440CF594CC397D *pLVar4;
  undefined8 local_18;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_GetCurrentInputSubsystem_m6343BBB6BBB22C59B70C2502CCFF5D0073B7272D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<string>_GetEnumerator__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsCommon_SettingsPanel_<>c__DisplayClass3_0_<_ctor>b__0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsCommon_WidgetFactory_<>c_<CreateMissingDebugShadersWarning>b__0_0__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<string>_Remove__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<VoiceServiceRequest>_get_Count__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_HashSet<XRLoader>__ctor__);
    OVRManager_GetCurrentInputSubsystem_m6343BBB6BBB22C59B70C2502CCFF5D0073B7272D::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if (*(long *)(lVar3 + 0x198) == 0) {
    pLVar4 = (List_1_t90832B88D7207769654164CC28440CF594CC397D *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)Method_System_Collections_Generic_HashSet<string>_Remove__)
    ;
    List_1__ctor_mC249FC827BC3BE999A938F8B5BD884F8AA0CB7FA
              (pLVar4,*(MethodInfo **)
                       Method_System_Collections_Generic_HashSet<string>_GetEnumerator__);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(List_1_t90832B88D7207769654164CC28440CF594CC397D **)(lVar3 + 0x198) = pLVar4;
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x198),pLVar4);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pLVar4 = *(List_1_t90832B88D7207769654164CC28440CF594CC397D **)(lVar3 + 0x198);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_HashSet<XRLoader>__ctor__);
  SubsystemManager_GetInstances_TisXRInputSubsystem_tFECE6683FCAEBF05BAD05E5D612690095D8BAD34_mE4E3C5739928E93E572D92105A4D3BAC7FC877AF
            (pLVar4,*(MethodInfo **)
                     Method_System_Collections_Generic_HashSet<VoiceServiceRequest>_get_Count__);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  pLVar4 = *(List_1_t90832B88D7207769654164CC28440CF594CC397D **)(lVar3 + 0x198);
  NullCheck(pLVar4);
  iVar2 = List_1_get_Count_mF8DDB0BDC273D655115D5E62307ADF657EC28DE5_inline
                    (pLVar4,*(MethodInfo **)
                             Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsCommon_SettingsPanel_<>c__DisplayClass3_0_<_ctor>b__0__
                    );
  if (iVar2 < 1) {
    local_18 = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pLVar4 = *(List_1_t90832B88D7207769654164CC28440CF594CC397D **)(lVar3 + 0x198);
    NullCheck(pLVar4);
    local_18 = List_1_get_Item_m69C3B0FCDB85116A8F7AB368DC33EBCC27556F0E
                         (pLVar4,0,*(MethodInfo **)
                                    Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsCommon_WidgetFactory_<>c_<CreateMissingDebugShadersWarning>b__0_0__
                         );
  }
  return local_18;
}


