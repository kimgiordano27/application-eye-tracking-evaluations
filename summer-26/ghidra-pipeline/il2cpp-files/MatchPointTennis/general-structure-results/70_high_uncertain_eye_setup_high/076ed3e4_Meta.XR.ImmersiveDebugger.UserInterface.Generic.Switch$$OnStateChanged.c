/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Switch$$OnStateChanged
ENTRY_POINT: 076ed3e4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Switch__OnStateChanged
               (undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long lVar2;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auVar3 [16];
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  auVar3._8_8_ = param_5;
  auVar3._0_8_ = param_3;
code_r0x076ed3e4:
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  FUN_06138b2c(param_1,auVar3._0_8_,auVar3._8_8_,param_4);
  in_stack_00000038 = uStack0000000000000020;
  in_stack_00000030 = uStack0000000000000018;
  in_stack_00000040 = uStack0000000000000028;
  do {
    if (unaff_x22 == 0) {
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Switch__SetToggleIcons:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_076e65d8(unaff_x22,unaff_x23);
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
    if (*(long *)(unaff_x21 + 0xa8) == 0)
    goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Switch__SetToggleIcons;
    unaff_x22 = FUN_0731af34(*(long *)(unaff_x21 + 0xa8),unaff_w20,*unaff_x24);
    if (*(long *)(unaff_x21 + 0x88) == 0)
    goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Switch__SetToggleIcons;
    lVar2 = *(long *)(unaff_x21 + 0x80);
    uVar1 = FUN_071c07b4(*(long *)(unaff_x21 + 0x88),unaff_w20,*unaff_x25);
    if (lVar2 == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Switch__SetToggleIcons;
    unaff_x23 = FUN_05badb74(lVar2,uVar1,*unaff_x26);
    if (*(long *)(unaff_x21 + 0x90) != 0) break;
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
  } while( true );
  auVar3 = FUN_071c0648(*(long *)(unaff_x21 + 0x90),unaff_w20,*unaff_x27);
  param_4 = *unaff_x28;
  param_1 = (undefined1 *)&stack0x00000018;
  goto code_r0x076ed3e4;
}


