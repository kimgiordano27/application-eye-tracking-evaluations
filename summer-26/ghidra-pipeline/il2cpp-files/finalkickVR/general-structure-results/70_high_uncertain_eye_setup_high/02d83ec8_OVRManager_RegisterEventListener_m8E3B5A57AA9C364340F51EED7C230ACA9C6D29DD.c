/*
FUNCTION_NAME: OVRManager_RegisterEventListener_m8E3B5A57AA9C364340F51EED7C230ACA9C6D29DD
ENTRY_POINT: 02d83ec8
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


void OVRManager_RegisterEventListener_m8E3B5A57AA9C364340F51EED7C230ACA9C6D29DD
               (long param_1,Il2CppObject *param_2)

{
  HashSet_1_t918EB2DA20944A28694286E926AE3B8188E10F8F *pHVar1;
  
  if ((OVRManager_RegisterEventListener_m8E3B5A57AA9C364340F51EED7C230ACA9C6D29DD::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRRayInteractor_<>c_<CheckCollidersBetweenPoints>b__275_0__
              );
    OVRManager_RegisterEventListener_m8E3B5A57AA9C364340F51EED7C230ACA9C6D29DD::
    s_Il2CppMethodInitialized = 1;
  }
  pHVar1 = *(HashSet_1_t918EB2DA20944A28694286E926AE3B8188E10F8F **)(param_1 + 0x120);
  NullCheck(pHVar1);
  HashSet_1_Add_mE91E775D1E364E0B9C5BBA1AB440B15712583219
            (pHVar1,param_2,
             *(MethodInfo **)
              Method_UnityEngine_XR_Interaction_Toolkit_XRRayInteractor_<>c_<CheckCollidersBetweenPoints>b__275_0__
            );
  return;
}


