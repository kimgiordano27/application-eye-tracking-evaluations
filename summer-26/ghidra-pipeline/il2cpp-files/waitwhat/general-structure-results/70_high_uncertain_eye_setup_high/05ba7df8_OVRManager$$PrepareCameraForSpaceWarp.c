/*
FUNCTION_NAME: OVRManager$$PrepareCameraForSpaceWarp
ENTRY_POINT: 05ba7df8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__PrepareCameraForSpaceWarp(float *param_1,float param_2,float param_3)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float fVar5;
  float unaff_s9;
  float unaff_s10;
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
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  fVar2 = unaff_s10 * unaff_s10 + param_2 + param_3;
  if (*param_1 <= fVar2) {
    fVar3 = unaff_s13 * unaff_s10 + fStack000000000000005c * unaff_s12 + unaff_s9 * unaff_s8;
    fStack000000000000005c = fStack000000000000005c - (unaff_s12 * fVar3) / fVar2;
                    /* try { // try from 05ba7e5c to 05ca7e63 has its CatchHandler @ 05ba82a8 */
    unaff_s9 = unaff_s9 - (unaff_s8 * fVar3) / fVar2;
    unaff_s13 = unaff_s13 - (unaff_s10 * fVar3) / fVar2;
  }
  fVar3 = unaff_s14 * unaff_s14;
  fVar2 = fVar3 + unaff_s15 * unaff_s15 + unaff_s11 * unaff_s11;
  if (*param_1 <= fVar2) {
    fVar6 = unaff_s14 * unaff_s13 + unaff_s11 * fStack000000000000005c + unaff_s15 * unaff_s9;
    fVar3 = (unaff_s11 * fVar6) / fVar2;
    fStack000000000000005c = fStack000000000000005c - fVar3;
    unaff_s9 = unaff_s9 - (unaff_s15 * fVar6) / fVar2;
    unaff_s13 = unaff_s13 - (unaff_s14 * fVar6) / fVar2;
  }
  fStack000000000000000c = fStack000000000000000c * unaff_s13;
  if (fStack000000000000000c +
      in_stack_00000000._4_4_ * fStack000000000000005c + fStack0000000000000008 * unaff_s9 <= 0.0) {
    if (DAT_075457d6 == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      DAT_075457d6 = '\x01';
    }
    fStack000000000000005c = **(float **)(*unaff_x22 + 0xb8);
  }
  if (*(char *)(unaff_x23 + 0x7aa) == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    *(undefined1 *)(unaff_x23 + 0x7aa) = 1;
  }
  lVar1 = *(long *)(*unaff_x22 + 0xb8);
  fVar6 = *(float *)(lVar1 + 0x18);
  fVar7 = *(float *)(lVar1 + 0x1c);
  fVar5 = *(float *)(lVar1 + 0x20);
  fVar2 = (float)FUN_06a63564();
  if (*(char *)(unaff_x21 + 0x684) == '\0') {
    FUN_03188a78(PTR_DAT_070cf060);
    *(undefined1 *)(unaff_x21 + 0x684) = 1;
  }
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fStack000000000000000c * fStack000000000000000c;
  fVar6 = fStack0000000000000058 * fVar6;
  if (**(float **)(*unaff_x20 + 0xb8) <= fVar4) {
    fVar6 = fVar6 - (fVar2 * (fStack0000000000000058 * fVar5 * fVar3 +
                             fVar6 * fVar2 + fStack0000000000000058 * fVar7 * fStack000000000000000c
                             )) / fVar4;
  }
  return fStack000000000000005c + fVar6;
}


