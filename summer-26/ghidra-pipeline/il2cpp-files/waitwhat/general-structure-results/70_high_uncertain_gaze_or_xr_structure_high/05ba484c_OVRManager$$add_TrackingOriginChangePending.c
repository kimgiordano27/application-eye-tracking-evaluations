/*
FUNCTION_NAME: OVRManager$$add_TrackingOriginChangePending
ENTRY_POINT: 05ba484c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRManager__add_TrackingOriginChangePending(long param_1)

{
  long lVar1;
  int in_w9;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float fVar5;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar6;
  float unaff_s15;
  float fVar7;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000058;
  
  fVar5 = *(float *)(param_1 + 0x20);
  if (in_w9 == 0) {
    FUN_03188a78(PTR_DAT_070cf060);
    *(undefined1 *)(unaff_x21 + 0x684) = 1;
  }
  fVar2 = fVar5 * fVar5 + unaff_s12 * unaff_s12 + unaff_s8 * unaff_s8;
  fVar6 = unaff_s9;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar2) {
    fVar6 = unaff_s13 * fVar5 + in_stack_00000058._4_4_ * unaff_s12 + unaff_s9 * unaff_s8;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - (unaff_s12 * fVar6) / fVar2;
    unaff_s13 = unaff_s13 - (fVar5 * fVar6) / fVar2;
    fVar6 = unaff_s9 - (unaff_s8 * fVar6) / fVar2;
  }
  fVar2 = unaff_s14 * unaff_s14;
  fVar5 = fVar2 + unaff_s15 * unaff_s15 + unaff_s11 * unaff_s11;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar5) {
    fVar4 = unaff_s14 * unaff_s13 + unaff_s11 * in_stack_00000058._4_4_ + unaff_s15 * fVar6;
    fVar2 = (unaff_s11 * fVar4) / fVar5;
    in_stack_00000058._4_4_ = in_stack_00000058._4_4_ - fVar2;
    fVar6 = fVar6 - (unaff_s15 * fVar4) / fVar5;
    unaff_s13 = unaff_s13 - (unaff_s14 * fVar4) / fVar5;
  }
  fStack000000000000000c = fStack000000000000000c * unaff_s13;
  if (fStack000000000000000c +
      in_stack_00000000._4_4_ * in_stack_00000058._4_4_ + fStack0000000000000008 * fVar6 <= 0.0) {
    if (DAT_075457d6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457d6 = '\x01';
    }
    in_stack_00000058._4_4_ = **(float **)(*unaff_x22 + 0xb8);
  }
  if (*(char *)(unaff_x23 + 0x7aa) == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    *(undefined1 *)(unaff_x23 + 0x7aa) = 1;
  }
  lVar1 = *(long *)(*unaff_x22 + 0xb8);
  fVar6 = *(float *)(lVar1 + 0x18);
  fVar7 = *(float *)(lVar1 + 0x1c);
  fVar4 = *(float *)(lVar1 + 0x20);
  fVar5 = (float)FUN_06a63564();
  if (*(char *)(unaff_x21 + 0x684) == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    *(undefined1 *)(unaff_x21 + 0x684) = 1;
  }
  fVar3 = fVar2 * fVar2 + fVar5 * fVar5 + fStack000000000000000c * fStack000000000000000c;
  fVar6 = unaff_s9 * fVar6;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar3) {
    fVar6 = fVar6 - (fVar5 * (unaff_s9 * fVar4 * fVar2 +
                             fVar6 * fVar5 + unaff_s9 * fVar7 * fStack000000000000000c)) / fVar3;
  }
  return in_stack_00000058._4_4_ + fVar6;
}


