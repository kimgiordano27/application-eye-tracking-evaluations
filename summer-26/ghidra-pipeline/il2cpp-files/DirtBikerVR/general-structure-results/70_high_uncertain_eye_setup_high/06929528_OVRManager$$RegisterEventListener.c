/*
FUNCTION_NAME: OVRManager$$RegisterEventListener
ENTRY_POINT: 06929528
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__RegisterEventListener(float param_1,float param_2,float param_3)

{
  int in_w8;
  float fVar1;
  double dVar2;
  float unaff_s13;
  undefined8 in_stack_00000008;
  
  param_1 = param_1 / param_2;
  fVar1 = 1.0;
  if (param_1 <= 1.0) {
    fVar1 = param_1;
  }
  if (param_3 <= param_1) {
    param_3 = fVar1;
  }
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  dVar2 = acos((double)param_3);
  fVar1 = cosf((float)dVar2 * DAT_015c595c);
  if (0.0 <= fVar1) {
    unaff_s13 = in_stack_00000008._4_4_ * 0.5 * fVar1;
  }
  return unaff_s13;
}


