/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$RegisterRaycaster
ENTRY_POINT: 06d8df54
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster(void)

{
  bool bVar1;
  long unaff_x19;
  long unaff_x24;
  long *unaff_x25;
  float fVar2;
  float unaff_s8;
  float fVar3;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float in_s19;
  float in_s20;
  float in_s21;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_000002f8;
  float in_stack_000002fc;
  
  FUN_03c8f898(PTR_DAT_08e6a6b8);
  *(undefined1 *)(unaff_x24 + 0x538) = 1;
  fVar3 = SQRT(unaff_s12);
  fStack0000000000000024 = fStack0000000000000024 * fStack0000000000000014;
  fStack0000000000000014 = unaff_s15 * fStack0000000000000014;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar2 = SQRT((in_stack_00000008._4_4_ - unaff_s8) * (in_stack_00000008._4_4_ - unaff_s8) +
               (unaff_s14 - unaff_s13) * (unaff_s14 - unaff_s13) +
               (fStack0000000000000010 - in_stack_000002fc) *
               (fStack0000000000000010 - in_stack_000002fc));
  bVar1 = fStack0000000000000024 < 0.0;
  if (1.0 < fStack0000000000000024) {
    fStack0000000000000024 = 1.0;
  }
  if (bVar1) {
    fStack0000000000000024 = 0.0;
  }
  FUN_07d81e60(*(float *)(unaff_x19 + 0x238) +
               fStack0000000000000024 *
               ((in_stack_000002f8 + fVar3 * fStack0000000000000020) - *(float *)(unaff_x19 + 0x238)
               ),*(float *)(unaff_x19 + 0x23c) +
                 fStack0000000000000024 *
                 ((fStack000000000000002c + fVar3 * fStack000000000000001c) -
                 *(float *)(unaff_x19 + 0x23c)),
               *(float *)(unaff_x19 + 0x240) +
               fStack0000000000000024 *
               ((fStack0000000000000028 + fVar3 * fStack0000000000000018) -
               *(float *)(unaff_x19 + 0x240)));
  fVar3 = fStack0000000000000014;
  if (1.0 < fStack0000000000000014) {
    fVar3 = 1.0;
  }
  if (fStack0000000000000014 < 0.0) {
    fVar3 = 0.0;
  }
  FUN_07d81e60(*(float *)(unaff_x19 + 0x244) +
               fVar3 * ((unaff_s13 + fVar2 * in_s19) - *(float *)(unaff_x19 + 0x244)),
               *(float *)(unaff_x19 + 0x248) +
               fVar3 * ((in_stack_000002fc + fVar2 * in_s20) - *(float *)(unaff_x19 + 0x248)),
               *(float *)(unaff_x19 + 0x24c) +
               fVar3 * ((unaff_s8 + fVar2 * in_s21) - *(float *)(unaff_x19 + 0x24c)));
  return;
}


