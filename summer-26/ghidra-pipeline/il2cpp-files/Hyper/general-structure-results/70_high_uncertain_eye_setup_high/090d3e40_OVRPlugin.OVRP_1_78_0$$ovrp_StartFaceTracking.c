/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartFaceTracking
ENTRY_POINT: 090d3e40
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin_OVRP_1_78_0__ovrp_StartFaceTracking(float *param_1,float param_2)

{
  float fVar1;
  float unaff_s8;
  float unaff_s11;
  
  fVar1 = SQRT(param_2 + unaff_s11 * unaff_s11);
  if (*param_1 <= fVar1) {
    fVar1 = unaff_s8 / fVar1;
  }
  else {
    if (DAT_0b31f57b == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0f100);
      DAT_0b31f57b = '\x01';
    }
    fVar1 = **(float **)(*(long *)PTR_DAT_0ac0f100 + 0xb8);
  }
  return fVar1;
}


