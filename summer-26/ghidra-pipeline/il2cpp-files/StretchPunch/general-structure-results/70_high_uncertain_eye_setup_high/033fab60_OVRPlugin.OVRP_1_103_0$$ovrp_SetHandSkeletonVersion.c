/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_SetHandSkeletonVersion
ENTRY_POINT: 033fab60
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_103_0__ovrp_SetHandSkeletonVersion(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint in_w8;
  long lVar5;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  *(uint *)(unaff_x22 + 0x30) = in_w8 & 0xfffffffe;
  lVar2 = FUN_033f9ca0();
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  FUN_032ff418(0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar4 = *(long *)(lVar2 + 0x30);
  thunk_FUN_01e10808();
  puVar1 = StringLiteral_1109;
  if (((lVar4 == 0) || (uVar3 = FUN_033fada4(lVar4,unaff_w21 & 1), (uVar3 & 1) != 0)) &&
     (uVar3 = FUN_033fada4(), (uVar3 & 1) != 0)) {
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar4 + 0x38);
    }
    if (lVar5 == *(long *)(unaff_x22 + 0x38)) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033fae1c(lVar2,0,&stack0x00000020);
      goto LAB_033fac24;
    }
  }
  if ((*(byte *)(unaff_x22 + 0x30) >> 2 & 1) != 0) {
    unaff_x22 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
    FUN_033d8040(unaff_x22,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033fae88(unaff_x22,unaff_w21 & 1);
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000020 = lVar4;
LAB_033fac24:
  if (unaff_x20 != 0) {
    (**(code **)(unaff_x20 + 0x18))(*(undefined8 *)(unaff_x20 + 0x40));
    FUN_033fa324(&stack0x00000020);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


