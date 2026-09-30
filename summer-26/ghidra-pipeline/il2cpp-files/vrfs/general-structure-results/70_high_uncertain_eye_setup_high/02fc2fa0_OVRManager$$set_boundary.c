/*
FUNCTION_NAME: OVRManager$$set_boundary
ENTRY_POINT: 02fc2fa0
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_boundary(int param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  
  if ((int)(*(int *)(unaff_x20 + 0x18) - unaff_w21) < param_1) {
    FUN_031db448(5,0);
  }
  uVar1 = *(uint *)(unaff_x22 + 0x20);
  if (0 < (int)uVar1) {
    lVar3 = *(long *)(unaff_x22 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar4 = 0;
    puVar5 = (undefined8 *)(lVar3 + 0x2c);
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
LAB_02fc309c:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if (-1 < *(int *)((long)puVar5 + -0xc)) {
        uStack00000000000000b4 = *(undefined8 *)((long)puVar5 + 0x24);
        in_stack_00000098 = puVar5[1];
        in_stack_00000090 = *puVar5;
        in_stack_000000a0 = puVar5[2];
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        in_stack_00000088 = 0;
        in_stack_00000080 = 0;
        uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)puVar5 + 0x1c) >> 0x20);
        uStack0000000000000048 = (undefined4)puVar5[3];
        uStack000000000000004c = (undefined4)((ulong)puVar5[3] >> 0x20);
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        uStack00000000000000ac = uStack000000000000004c;
        uStack00000000000000b0 = uStack0000000000000050;
        uStack00000000000000a8 = uStack0000000000000048;
        FUN_0517a924(&stack0x00000060,*(undefined4 *)((long)puVar5 + -4),&stack0x00000090,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8));
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w21) goto LAB_02fc309c;
        lVar2 = unaff_x20 + (long)(int)unaff_w21 * 0x30;
        unaff_w21 = unaff_w21 + 1;
        *(undefined8 *)(lVar2 + 0x38) = in_stack_00000078;
        *(undefined8 *)(lVar2 + 0x30) = in_stack_00000070;
        *(undefined8 *)(lVar2 + 0x48) = in_stack_00000088;
        *(undefined8 *)(lVar2 + 0x40) = in_stack_00000080;
        *(undefined8 *)(lVar2 + 0x28) = in_stack_00000068;
        *(undefined8 *)(lVar2 + 0x20) = in_stack_00000060;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 7;
    } while (uVar1 != uVar4);
  }
  return;
}


