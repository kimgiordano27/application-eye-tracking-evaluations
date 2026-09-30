/*
FUNCTION_NAME: OVRManager_add_SpaceQueryResults_m49193AA310D5B5F802B0442167C4DD7B5F278093
ENTRY_POINT: 02d7e410
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_add_SpaceQueryResults_m49193AA310D5B5F802B0442167C4DD7B5F278093(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C *pAVar5;
  Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C *local_28;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_add_SpaceQueryResults_m49193AA310D5B5F802B0442167C4DD7B5F278093::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_OnAfterInputUpdate__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRManager_add_SpaceQueryResults_m49193AA310D5B5F802B0442167C4DD7B5F278093::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_28 = *(Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C **)(lVar3 + 0xa8);
  do {
    pIVar4 = (Il2CppObject *)
             Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(local_28,param_1,0);
    pAVar5 = (Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C *)
             Castclass(pIVar4,*(Il2CppClass **)
                               Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TrackedDeviceMonitor_OnAfterInputUpdate__
                      );
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pAVar5 = InterlockedCompareExchangeImpl<Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C*>
                       ((Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C **)(lVar3 + 0xa8),pAVar5
                        ,local_28);
    bVar2 = pAVar5 != local_28;
    local_28 = pAVar5;
  } while (bVar2);
  return;
}


