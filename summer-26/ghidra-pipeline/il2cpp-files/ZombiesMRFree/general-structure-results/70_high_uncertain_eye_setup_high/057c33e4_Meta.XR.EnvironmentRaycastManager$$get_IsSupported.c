/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$get_IsSupported
ENTRY_POINT: 057c33e4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_EnvironmentRaycastManager__get_IsSupported
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  bool bVar1;
  float fVar2;
  
  if ((param_3 < 0.0) || (*(float *)(param_4 + 0x2c) < 0.0)) {
    bVar1 = true;
  }
  else {
    fVar2 = (float)FUN_06a2f94c(*(undefined8 *)(param_4 + 0x18),0);
    if ((fVar2 < *(float *)(param_4 + 0x20)) ||
       ((*(float *)(param_4 + 0x20) + *(float *)(param_4 + 0x28) <= fVar2 ||
        (param_2 < *(float *)(param_4 + 0x24))))) {
      bVar1 = false;
    }
    else {
      bVar1 = param_2 < *(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x2c);
    }
  }
  return bVar1;
}


