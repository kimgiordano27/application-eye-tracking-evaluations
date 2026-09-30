/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSubmitLayer
ENTRY_POINT: 04f8db44
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer(void)

{
  uint uVar1;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined1 in_stack_00000008 [16];
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  thunk_FUN_02b9ad44();
  FUN_05c9a2f0(&stack0x00000008 + 4,0);
  unaff_x19[1] = CONCAT44(uStack0000000000000018,in_stack_00000008._12_4_);
  *unaff_x19 = in_stack_00000008._4_8_;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000020;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  uVar1 = FUN_04f8dbb8();
  if ((uVar1 & 1) != 0) {
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_04f817bc(&stack0x00000008 + 4,in_stack_00000028,unaff_w20);
    unaff_x19[1] = CONCAT44(uStack0000000000000018,in_stack_00000008._12_4_);
    *unaff_x19 = in_stack_00000008._4_8_;
    *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000020;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  }
  return uVar1 & 1;
}


