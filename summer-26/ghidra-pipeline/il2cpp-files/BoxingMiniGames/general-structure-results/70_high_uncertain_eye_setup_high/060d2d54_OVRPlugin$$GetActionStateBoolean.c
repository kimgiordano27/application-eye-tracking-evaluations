/*
FUNCTION_NAME: OVRPlugin$$GetActionStateBoolean
ENTRY_POINT: 060d2d54
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStateBoolean(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 uVar3;
  long unaff_x21;
  long lVar4;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  uVar2 = FUN_071c0684(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(unaff_x21 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = FUN_0493bdf0();
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    FUN_060d3814(&stack0x00000040,unaff_w19,0,uVar3,uVar1,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_060d366c(lVar4);
  }
  lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_079fe468 + 0xb8) + 8);
  if (lVar4 != 0) {
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000058 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000030;
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),&stack0x00000040,*(undefined8 *)(lVar4 + 0x28));
  }
  return;
}


