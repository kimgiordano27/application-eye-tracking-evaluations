/*
FUNCTION_NAME: OVRManager$$remove_InputFocusLost
ENTRY_POINT: 05cf8aa4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusLost(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar2;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x1b8);
  do {
    if (*(int *)(param_1 + 0x20) < 1) {
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar1 = FUN_05cf4c7c(*(long *)(unaff_x19 + 0x20),0);
        uStack0000000000000058 = in_stack_00000008;
        in_stack_00000050 = in_stack_00000000;
        uStack0000000000000064 = uStack0000000000000010._4_4_;
        uStack0000000000000068 = uStack0000000000000010._8_4_;
        uStack0000000000000060 = uStack0000000000000010;
        FUN_05cf88cc(uVar1,unaff_x19 + 0x98,&stack0x000000b0,&stack0x00000050);
        return;
      }
      break;
    }
    FUN_04999a3c(&stack0x00000050,param_1,*puVar2);
    in_stack_00000088 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    in_stack_00000098 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    in_stack_00000090 = CONCAT44(uStack0000000000000064,uStack0000000000000060);
    in_stack_000000a0 = in_stack_00000070;
    in_stack_00000080 = in_stack_00000050;
    FUN_05cf9d08();
    param_1 = *(long *)(unaff_x19 + 0xd8);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


