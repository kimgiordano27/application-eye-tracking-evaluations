/*
FUNCTION_NAME: OVRManager$$add_HMDUnmounted
ENTRY_POINT: 04f3f734
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__add_HMDUnmounted(void)

{
  int in_w8;
  float *unaff_x19;
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  if (in_w8 == 0) {
    FUN_02b3c81c(PTR_DAT_06315600);
    *(undefined1 *)(unaff_x20 + 0x35) = 1;
  }
  fVar1 = ABS(unaff_s12);
  if (ABS(unaff_s12) <= 0.0) {
    fVar1 = 0.0;
  }
  fVar3 = **(float **)(*(long *)PTR_DAT_06315600 + 0xb8) * 8.0;
  fVar2 = fVar1 * DAT_010326fc;
  if (fVar1 * DAT_010326fc <= fVar3) {
    fVar2 = fVar3;
  }
  if (fVar2 <= ABS(0.0 - unaff_s12)) {
    *unaff_x19 = ((fStack0000000000000018 * in_stack_00000008._4_4_ +
                  fStack0000000000000014 * unaff_s15 + fStack0000000000000010 * unaff_s8) -
                 (fStack000000000000006c * unaff_s9 +
                 fStack000000000000001c * unaff_s10 + fStack0000000000000068 * unaff_s11)) /
                 unaff_s12;
  }
  return fVar2 <= ABS(0.0 - unaff_s12);
}


