/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 06a409c8
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


long * OVREyeGaze__Start(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 uStack0000000000000014;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 uStack0000000000000034;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined8 uStack0000000000000094;
  
  uStack0000000000000070 = 0;
  uStack0000000000000074 = 0;
  uVar2 = FUN_06a407cc();
  if ((uVar2 & 1) == 0) {
    return (long *)0x0;
  }
  plVar6 = *(long **)(unaff_x21 + 0xd0);
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_083ccd70) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06a40a30;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083ccd70,0);
LAB_06a40a30:
    plVar6 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
    uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
    uVar7 = *unaff_x20;
    uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
    uStack000000000000004c = (undefined4)((ulong)unaff_x20[1] >> 0x20);
    if (plVar6 != (long *)0x0) {
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = uStack000000000000004c;
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_083ccd68) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_06a40abc;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083ccd68,4);
LAB_06a40abc:
      in_stack_00000088 = uStack0000000000000028;
      uStack0000000000000094 = uStack0000000000000034;
      uStack000000000000008c = uStack000000000000002c;
      in_stack_00000090 = uStack0000000000000050;
      in_stack_00000080 = uVar7;
      (*(code *)*puVar3)(plVar6,&stack0x00000080,puVar3[1]);
      uVar1 = uStack0000000000000070;
      uStack0000000000000014 = CONCAT44(in_stack_00000078,uStack0000000000000074);
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_083ccd68) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_06a40b40;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083ccd68,2);
LAB_06a40b40:
      in_stack_00000088 = in_stack_00000068;
      in_stack_00000080 = in_stack_00000060;
      uStack0000000000000094 = uStack0000000000000014;
      in_stack_00000090 = uVar1;
      (*(code *)*puVar3)(plVar6,&stack0x00000080,puVar3[1]);
      return plVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


