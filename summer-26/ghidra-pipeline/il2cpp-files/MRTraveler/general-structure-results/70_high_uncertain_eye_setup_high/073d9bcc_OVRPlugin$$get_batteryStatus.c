/*
FUNCTION_NAME: OVRPlugin$$get_batteryStatus
ENTRY_POINT: 073d9bcc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073d9c88) */

float OVRPlugin__get_batteryStatus(void)

{
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  float fVar1;
  double dVar2;
  float fVar3;
  float unaff_s13;
  float unaff_s15;
  float in_stack_00000010;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  if (in_w8 == 0) {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    *(undefined1 *)(unaff_x20 + 0x8d3) = 1;
  }
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar1 = SQRT((fStack000000000000002c * fStack000000000000002c +
               in_stack_00000010 * in_stack_00000010 +
               fStack0000000000000020 * fStack0000000000000020) *
               (unaff_s13 * unaff_s13 +
               fStack0000000000000028 * fStack0000000000000028 +
               fStack0000000000000024 * fStack0000000000000024));
  fVar3 = 0.0;
  if (DAT_018aff20 <= fVar1) {
    fVar1 = (fStack000000000000002c * unaff_s13 +
            in_stack_00000010 * fStack0000000000000028 +
            fStack0000000000000020 * fStack0000000000000024) / fVar1;
    if (fVar1 < -1.0) {
      fVar1 = -1.0;
    }
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    dVar2 = acos((double)fVar1);
    fVar3 = (float)dVar2 * DAT_018b1028;
  }
  return ABS(unaff_s15) / fVar3;
}


