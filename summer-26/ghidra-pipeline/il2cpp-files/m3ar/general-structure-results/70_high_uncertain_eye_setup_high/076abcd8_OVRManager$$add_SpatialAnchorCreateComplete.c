/*
FUNCTION_NAME: OVRManager$$add_SpatialAnchorCreateComplete
ENTRY_POINT: 076abcd8
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRManager__add_SpatialAnchorCreateComplete(void)

{
  int in_w8;
  float *unaff_x19;
  long unaff_x20;
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  undefined4 unaff_s9;
  
  if (in_w8 == 0) {
    thunk_FUN_0408f364();
  }
  dVar2 = acos((double)unaff_s8);
  fVar1 = ((float)dVar2 * DAT_01a2eb64) / *(float *)(unaff_x20 + 0x2c);
  fVar3 = 1.0;
  if (fVar1 <= 1.0) {
    fVar3 = fVar1;
  }
  fVar4 = 1.0;
  if (0.0 <= fVar1) {
    fVar4 = 1.0 - fVar3;
  }
  *unaff_x19 = fVar4;
  return unaff_s9;
}


