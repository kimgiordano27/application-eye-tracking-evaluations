/*
FUNCTION_NAME: OVRPlugin$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 07478840
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_eyeFovPremultipliedAlphaModeEnabled(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uStack0000000000000000;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined1 in_stack_00000028 [16];
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  
  uStack000000000000000c = in_stack_00000028._4_4_;
  uStack0000000000000010 = in_stack_00000028._8_4_;
  uStack0000000000000000 = param_1;
  FUN_073d73d4();
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    FUN_073d746c(*(long *)(unaff_x19 + 0x70),0);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      uVar1 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x48),0);
      lVar2 = *(long *)(unaff_x19 + 0x70);
      if (lVar2 != 0) {
        in_stack_00000078 = *(undefined4 *)(lVar2 + 0x30);
        in_stack_00000070 = *(undefined8 *)(lVar2 + 0x28);
        in_stack_00000068 = *(undefined8 *)(lVar2 + 0x20);
        in_stack_00000060 = *(undefined8 *)(lVar2 + 0x18);
        FUN_073ff848(uVar1,&stack0x00000060,0,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


