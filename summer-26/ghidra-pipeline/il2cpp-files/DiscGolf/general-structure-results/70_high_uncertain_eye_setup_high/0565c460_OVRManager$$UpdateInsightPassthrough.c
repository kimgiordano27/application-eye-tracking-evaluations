/*
FUNCTION_NAME: OVRManager$$UpdateInsightPassthrough
ENTRY_POINT: 0565c460
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0565c4cc) */

void OVRManager__UpdateInsightPassthrough
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  ulong uVar1;
  long unaff_x19;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  
  uStack0000000000000024 = FUN_0635ea30(*(undefined4 *)(unaff_x19 + 0x50),param_4,0);
  in_stack_00000028 = param_2;
  uStack000000000000002c = param_3;
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    uVar1 = FUN_056726f0(*(long *)(unaff_x19 + 0x78),*(undefined4 *)(unaff_x19 + 0x40),
                         &stack0x00000020,0);
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x9c) = 1;
    }
    FUN_0540bf9c(&stack0x00000058,0);
    FUN_0540bf9c(&stack0x00000050,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


