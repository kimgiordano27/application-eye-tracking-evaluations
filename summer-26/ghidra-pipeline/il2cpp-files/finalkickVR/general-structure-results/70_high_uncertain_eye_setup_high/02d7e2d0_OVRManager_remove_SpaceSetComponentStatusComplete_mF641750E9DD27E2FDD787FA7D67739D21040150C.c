/*
FUNCTION_NAME: OVRManager_remove_SpaceSetComponentStatusComplete_mF641750E9DD27E2FDD787FA7D67739D21040150C
ENTRY_POINT: 02d7e2d0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_remove_SpaceSetComponentStatusComplete_mF641750E9DD27E2FDD787FA7D67739D21040150C
               (undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Action_6_tD8B17612932122F2ABF5C8545327C8F527403625 *pAVar5;
  Action_6_tD8B17612932122F2ABF5C8545327C8F527403625 *local_28;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_remove_SpaceSetComponentStatusComplete_mF641750E9DD27E2FDD787FA7D67739D21040150C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_OnTrackingAcquired__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRManager_remove_SpaceSetComponentStatusComplete_mF641750E9DD27E2FDD787FA7D67739D21040150C::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_28 = *(Action_6_tD8B17612932122F2ABF5C8545327C8F527403625 **)(lVar3 + 0xa0);
  do {
    pIVar4 = (Il2CppObject *)
             Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(local_28,param_1,0);
    pAVar5 = (Action_6_tD8B17612932122F2ABF5C8545327C8F527403625 *)
             Castclass(pIVar4,*(Il2CppClass **)
                               Method_UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_InputDeviceMonitor_OnTrackingAcquired__
                      );
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    pAVar5 = InterlockedCompareExchangeImpl<Action_6_tD8B17612932122F2ABF5C8545327C8F527403625*>
                       ((Action_6_tD8B17612932122F2ABF5C8545327C8F527403625 **)(lVar3 + 0xa0),pAVar5
                        ,local_28);
    bVar2 = pAVar5 != local_28;
    local_28 = pAVar5;
  } while (bVar2);
  return;
}


