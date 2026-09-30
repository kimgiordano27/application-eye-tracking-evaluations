/*
FUNCTION_NAME: OVRManager_DeregisterEventListener_m6C27C4E842FE6F658FA3701134BD132028FC3F7F
ENTRY_POINT: 02d83f4c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_DeregisterEventListener_m6C27C4E842FE6F658FA3701134BD132028FC3F7F
               (long param_1,Il2CppObject *param_2)

{
  HashSet_1_t918EB2DA20944A28694286E926AE3B8188E10F8F *pHVar1;
  
  if ((OVRManager_DeregisterEventListener_m6C27C4E842FE6F658FA3701134BD132028FC3F7F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRRayInteractor_<>c_<CheckCollidersBetweenPoints>b__275_1__
              );
    OVRManager_DeregisterEventListener_m6C27C4E842FE6F658FA3701134BD132028FC3F7F::
    s_Il2CppMethodInitialized = 1;
  }
  pHVar1 = *(HashSet_1_t918EB2DA20944A28694286E926AE3B8188E10F8F **)(param_1 + 0x120);
  NullCheck(pHVar1);
  HashSet_1_Remove_mC5C0E8991975CEADD4C75A444FF5F4E52720E1B0
            (pHVar1,param_2,
             *(MethodInfo **)
              Method_UnityEngine_XR_Interaction_Toolkit_XRRayInteractor_<>c_<CheckCollidersBetweenPoints>b__275_1__
            );
  return;
}


