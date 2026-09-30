/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__451_0
ENTRY_POINT: 0908ddc4
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_<>c__<InitOVRManager>b__451_0(long param_1)

{
  undefined8 *unaff_x19;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  
  if (param_1 != 0) {
    FUN_0908d728(&stack0x00000020 + 4);
    unaff_x19[1] = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
    *unaff_x19 = in_stack_00000020._4_8_;
    *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000038;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000034,uStack0000000000000030);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


