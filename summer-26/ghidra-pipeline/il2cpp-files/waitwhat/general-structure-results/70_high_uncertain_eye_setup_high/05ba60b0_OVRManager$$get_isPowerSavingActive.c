/*
FUNCTION_NAME: OVRManager$$get_isPowerSavingActive
ENTRY_POINT: 05ba60b0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_isPowerSavingActive(float param_1)

{
  bool in_NG;
  long unaff_x20;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar4;
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
  
  fVar4 = fStack0000000000000088;
  if (!in_NG) {
    fVar4 = fStack0000000000000088 -
            (unaff_s10 *
            (fStack000000000000003c * unaff_s9 +
            fStack000000000000008c * unaff_s8 + fStack0000000000000088 * unaff_s10)) / param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  fVar1 = unaff_s11 * 0.5 - unaff_s12;
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar1;
  }
  uVar3 = FUN_06a57638(*(long *)(unaff_x20 + 0x20),0);
  fStack0000000000000004 = fStack0000000000000088;
  fStack0000000000000014 = fVar4;
  FUN_05ba6340(unaff_s15 - fStack0000000000000028 * fVar2,
               unaff_s14 - in_stack_00000020._4_4_ * fVar2,
               unaff_s13 - fStack000000000000002c * fVar2,
               fStack0000000000000028 * fVar2 + fStack0000000000000038,
               in_stack_00000020._4_4_ * fVar2 + fStack0000000000000034,
               fStack000000000000002c * fVar2 + fStack0000000000000030,uVar3);
  return;
}


