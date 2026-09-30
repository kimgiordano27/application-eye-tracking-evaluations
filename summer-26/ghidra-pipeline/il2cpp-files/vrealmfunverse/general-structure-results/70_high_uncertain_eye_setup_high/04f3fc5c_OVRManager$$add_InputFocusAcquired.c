/*
FUNCTION_NAME: OVRManager$$add_InputFocusAcquired
ENTRY_POINT: 04f3fc5c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_InputFocusAcquired(long param_1)

{
  int in_w9;
  long unaff_x20;
  long unaff_x21;
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  float fStack0000000000000014;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  fVar3 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(param_1 + 0x1c);
  fVar4 = *(float *)(param_1 + 0x20);
  if (in_w9 == 0) {
    FUN_02b3c81c(PTR_DAT_06315600);
    *(undefined1 *)(unaff_x21 + 0x98e) = 1;
  }
  fVar1 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
  fVar6 = fStack0000000000000088;
  if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) <= fVar1) {
    fVar6 = fStack0000000000000088 -
            (fVar5 * (fStack000000000000003c * fVar4 +
                     fStack000000000000008c * fVar3 + fStack0000000000000088 * fVar5)) / fVar1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar4 = unaff_s11 * 0.5 - unaff_s12;
    fVar3 = 0.0;
    if (0.0 <= fVar4) {
      fVar3 = fVar4;
    }
    uVar2 = FUN_05d0bc98(*(long *)(unaff_x20 + 0x20),0);
    fStack0000000000000004 = fStack0000000000000088;
    fStack0000000000000014 = fVar6;
    FUN_04f3ff38(unaff_s15 - fStack0000000000000028 * fVar3,
                 unaff_s14 - in_stack_00000020._4_4_ * fVar3,
                 unaff_s13 - fStack000000000000002c * fVar3,
                 fStack0000000000000028 * fVar3 + fStack0000000000000038,
                 in_stack_00000020._4_4_ * fVar3 + fStack0000000000000034,
                 fStack000000000000002c * fVar3 + fStack0000000000000030,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


