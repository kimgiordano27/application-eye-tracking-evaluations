/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Switch$$set_State
ENTRY_POINT: 076ed3a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Switch__set_State(undefined4 param_1)

{
  undefined8 uVar1;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auVar2 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  do {
    uVar1 = FUN_05badb74(unaff_x23,param_1,*unaff_x26);
    if (*(long *)(unaff_x21 + 0x90) == 0) {
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      in_stack_00000040 = 0;
    }
    else {
      auVar2 = FUN_071c0648(*(long *)(unaff_x21 + 0x90),unaff_w20,*unaff_x27);
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_06138b2c(&stack0x00000018,auVar2._0_8_,auVar2._8_8_,*unaff_x28);
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000038 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000028;
    }
    if (unaff_x22 == 0) break;
    FUN_076e65d8(unaff_x22,uVar1);
    if (*(char *)(unaff_x21 + 0xb0) == '\0') {
      FUN_076e6a5c(unaff_x22);
    }
    else {
      FUN_076e69dc(unaff_x22);
    }
    unaff_w20 = unaff_w20 + 1;
    if (unaff_w19 < unaff_w20) {
      return;
    }
    if (*(long *)(unaff_x21 + 0xa8) == 0) break;
    unaff_x22 = FUN_0731af34(*(long *)(unaff_x21 + 0xa8),unaff_w20,*unaff_x24);
    if (*(long *)(unaff_x21 + 0x88) == 0) break;
    unaff_x23 = *(long *)(unaff_x21 + 0x80);
    param_1 = FUN_071c07b4(*(long *)(unaff_x21 + 0x88),unaff_w20,*unaff_x25);
  } while (unaff_x23 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


