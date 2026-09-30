/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$AddSlider
ENTRY_POINT: 06d8db2c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Member__AddSlider(void)

{
  bool bVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  fVar2 = (float)FUN_07d81d44();
  fVar2 = fVar2 * unaff_s14;
  bVar1 = unaff_s13 < 0.0;
  if (1.0 < unaff_s13) {
    unaff_s13 = 1.0;
  }
  if (bVar1) {
    unaff_s13 = 0.0;
  }
  FUN_07d81e60(*(float *)(unaff_x19 + 0x208) +
               unaff_s13 * (unaff_s12 - *(float *)(unaff_x19 + 0x208)),
               *(float *)(unaff_x19 + 0x20c) +
               unaff_s13 * (unaff_s11 - *(float *)(unaff_x19 + 0x20c)),
               *(float *)(unaff_x19 + 0x210) +
               unaff_s13 * (unaff_s10 - *(float *)(unaff_x19 + 0x210)));
  fVar3 = fVar2;
  if (1.0 < fVar2) {
    fVar3 = 1.0;
  }
  if (fVar2 < 0.0) {
    fVar3 = 0.0;
  }
  FUN_07d81e60(*(float *)(unaff_x19 + 0x214) +
               fVar3 * (in_stack_00000008._4_4_ - *(float *)(unaff_x19 + 0x214)),
               *(float *)(unaff_x19 + 0x218) +
               fVar3 * (fStack0000000000000010 - *(float *)(unaff_x19 + 0x218)),
               *(float *)(unaff_x19 + 0x21c) +
               fVar3 * (fStack0000000000000014 - *(float *)(unaff_x19 + 0x21c)));
  FUN_07d81e60(*(float *)(unaff_x19 + 0x220) +
               unaff_s13 * (fStack0000000000000018 - *(float *)(unaff_x19 + 0x220)),
               *(float *)(unaff_x19 + 0x224) +
               unaff_s13 * (fStack000000000000001c - *(float *)(unaff_x19 + 0x224)),
               *(float *)(unaff_x19 + 0x228) +
               unaff_s13 * (fStack0000000000000020 - *(float *)(unaff_x19 + 0x228)));
  FUN_07d81e60(*(float *)(unaff_x19 + 0x22c) +
               fVar3 * (fStack0000000000000024 - *(float *)(unaff_x19 + 0x22c)),
               *(float *)(unaff_x19 + 0x230) +
               fVar3 * (fStack0000000000000028 - *(float *)(unaff_x19 + 0x230)),
               *(float *)(unaff_x19 + 0x234) +
               fVar3 * (fStack000000000000002c - *(float *)(unaff_x19 + 0x234)));
  return;
}


