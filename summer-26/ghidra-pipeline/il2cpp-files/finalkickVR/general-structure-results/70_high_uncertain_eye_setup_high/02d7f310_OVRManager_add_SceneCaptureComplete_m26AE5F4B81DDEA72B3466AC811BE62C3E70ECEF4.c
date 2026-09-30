/*
FUNCTION_NAME: OVRManager_add_SceneCaptureComplete_m26AE5F4B81DDEA72B3466AC811BE62C3E70ECEF4
ENTRY_POINT: 02d7f310
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_add_SceneCaptureComplete_m26AE5F4B81DDEA72B3466AC811BE62C3E70ECEF4
               (undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *pAVar5;
  Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *local_28;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_add_SceneCaptureComplete_m26AE5F4B81DDEA72B3466AC811BE62C3E70ECEF4::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRManager_add_SceneCaptureComplete_m26AE5F4B81DDEA72B3466AC811BE62C3E70ECEF4::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_28 = *(Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 **)(lVar3 + 0xd8);
  do {
    pIVar4 = (Il2CppObject *)
             Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(local_28,param_1,0);
    pAVar5 = (Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 *)
             Castclass(pIVar4,*(Il2CppClass **)
                               Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                      );
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pAVar5 = InterlockedCompareExchangeImpl<Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71*>
                       ((Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71 **)(lVar3 + 0xd8),pAVar5
                        ,local_28);
    bVar2 = pAVar5 != local_28;
    local_28 = pAVar5;
  } while (bVar2);
  return;
}


