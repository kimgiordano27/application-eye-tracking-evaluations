/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 051c8740
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ShareSpaces(undefined8 param_1,int param_2)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  float unaff_s8;
  
  if (param_2 != 0) {
    fVar1 = (float)FUN_05177c5c();
    unaff_s8 = (unaff_s8 + unaff_s8 + fVar1) / 3.0;
  }
  fVar2 = (unaff_s8 - *(float *)(unaff_x19 + 0x14)) / *(float *)(unaff_x19 + 0x18);
  fVar1 = fVar2;
  if (1.0 < fVar2) {
    fVar1 = 1.0;
  }
  if (fVar2 < 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(unaff_x19 + 0x1c) = fVar1;
  return;
}


