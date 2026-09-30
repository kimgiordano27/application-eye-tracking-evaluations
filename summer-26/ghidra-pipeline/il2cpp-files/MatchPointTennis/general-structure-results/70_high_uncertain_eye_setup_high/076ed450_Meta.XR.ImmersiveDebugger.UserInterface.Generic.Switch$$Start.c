/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Switch$$Start
ENTRY_POINT: 076ed450
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Switch__Start(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint in_w8;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lVar3;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  while( true ) {
    if (in_w8 == 0) {
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
    lVar3 = *(long *)(unaff_x21 + 0x80);
    uVar1 = FUN_071c07b4(*(long *)(unaff_x21 + 0x88),unaff_w20,*unaff_x25);
    if (lVar3 == 0) break;
    uVar2 = FUN_05badb74(lVar3,uVar1,*unaff_x26);
    if (*(long *)(unaff_x21 + 0x90) == 0) {
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      in_stack_00000040 = 0;
    }
    else {
      auVar4 = FUN_071c0648(*(long *)(unaff_x21 + 0x90),unaff_w20,*unaff_x27);
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
      FUN_06138b2c(&stack0x00000018,auVar4._0_8_,auVar4._8_8_,*unaff_x28);
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000038 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000028;
    }
    if (unaff_x22 == 0) break;
    FUN_076e65d8(unaff_x22,uVar2);
    in_w8 = (uint)*(byte *)(unaff_x21 + 0xb0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


