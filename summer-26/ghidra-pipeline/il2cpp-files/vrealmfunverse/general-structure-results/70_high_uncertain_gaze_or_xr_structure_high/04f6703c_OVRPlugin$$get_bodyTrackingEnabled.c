/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 04f6703c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__get_bodyTrackingEnabled(void)

{
  long *unaff_x19;
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float unaff_s13;
  float unaff_s15;
  float in_stack_00000010;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  fVar3 = 0.0;
  fVar1 = SQRT((fStack000000000000002c * fStack000000000000002c +
               in_stack_00000010 * in_stack_00000010 +
               fStack0000000000000020 * fStack0000000000000020) *
               (unaff_s13 * unaff_s13 +
               fStack0000000000000028 * fStack0000000000000028 +
               fStack0000000000000024 * fStack0000000000000024));
  if (DAT_01031c1c <= fVar1) {
    fVar1 = (fStack000000000000002c * unaff_s13 +
            in_stack_00000010 * fStack0000000000000028 +
            fStack0000000000000020 * fStack0000000000000024) / fVar1;
    fVar3 = 1.0;
    if (fVar1 <= 1.0) {
      fVar3 = fVar1;
    }
    fVar4 = -1.0;
    if (-1.0 <= fVar1) {
      fVar4 = fVar3;
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    dVar2 = acos((double)fVar4);
    fVar3 = (float)dVar2 * DAT_01032280;
  }
  return ABS(unaff_s15) / fVar3;
}


