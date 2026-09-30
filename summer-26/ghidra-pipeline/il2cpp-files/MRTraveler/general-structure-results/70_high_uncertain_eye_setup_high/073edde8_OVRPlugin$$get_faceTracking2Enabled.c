/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Enabled
ENTRY_POINT: 073edde8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_faceTracking2Enabled(void)

{
  float *pfVar1;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar5;
  float unaff_s15;
  undefined8 in_stack_00000020;
  float in_stack_00000030;
  
  *(undefined1 *)(unaff_x21 + 0xff5) = 1;
  pfVar1 = *(float **)(*unaff_x20 + 0xb8);
  fVar2 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  if (0.0 <= unaff_s12 * fVar4 + in_stack_00000030 * fVar2 + unaff_s13 * fVar3) {
    if (unaff_s8 < fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4) {
      fVar2 = in_stack_00000030;
      fVar3 = unaff_s13;
      fVar4 = unaff_s12;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0xff5) == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      *(undefined1 *)(unaff_x21 + 0xff5) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
  }
  if (DAT_09410538 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_09410538 = '\x01';
  }
  fVar5 = unaff_s9 - (in_stack_00000020._4_4_ + fVar2);
  fVar3 = unaff_s10 - (unaff_s15 + fVar3);
  fVar2 = unaff_s11 - (unaff_s14 + fVar4);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  return SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar5 * fVar5);
}


