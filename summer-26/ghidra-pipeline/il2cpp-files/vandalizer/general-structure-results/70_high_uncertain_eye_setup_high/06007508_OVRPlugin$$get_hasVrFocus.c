/*
FUNCTION_NAME: OVRPlugin$$get_hasVrFocus
ENTRY_POINT: 06007508
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_hasVrFocus(undefined8 param_1,undefined1 param_2 [16])

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  uStack0000000000000000 = param_2._0_8_;
  uStack0000000000000010 = (undefined4)((ulong)param_1 >> 0x20);
  uStack0000000000000008 = param_2._8_4_;
  uStack000000000000000c = param_2._12_4_;
  FUN_05faf300();
  in_stack_00000048 = in_stack_00000028;
  in_stack_00000040 = in_stack_00000020;
  in_stack_00000050 = in_stack_00000030;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar1 = FUN_06e5502c(*(long *)(unaff_x19 + 0x20),0);
    FUN_05f9d090(uVar1,&stack0x00000040,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


