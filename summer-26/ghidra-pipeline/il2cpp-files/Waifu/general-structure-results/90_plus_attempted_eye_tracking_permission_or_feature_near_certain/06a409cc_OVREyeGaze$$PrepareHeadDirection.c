/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 06a409cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


long * OVREyeGaze__PrepareHeadDirection(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  undefined8 uStack0000000000000014;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 uStack0000000000000034;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined8 uStack0000000000000094;
  
  uVar1 = FUN_06a407cc();
  if ((uVar1 & 1) == 0) {
    return (long *)0x0;
  }
  plVar5 = *(long **)(unaff_x21 + 0xd0);
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_083ccd70) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06a40a30;
        }
        uVar1 = uVar1 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c(plVar5,DAT_083ccd70,0);
LAB_06a40a30:
    plVar5 = (long *)(*(code *)*puVar2)(plVar5,puVar2[1]);
    uStack0000000000000034 = *(undefined8 *)((long)unaff_x20 + 0x14);
    uVar6 = *unaff_x20;
    uStack0000000000000050 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x20 + 0xc) >> 0x20);
    uStack000000000000004c = (undefined4)((ulong)unaff_x20[1] >> 0x20);
    if (plVar5 != (long *)0x0) {
      uStack0000000000000028 = (undefined4)unaff_x20[1];
      uStack000000000000002c = uStack000000000000004c;
      lVar3 = *plVar5;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == DAT_083ccd68) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 4) * 0x10 + 0x138);
            goto LAB_06a40abc;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c(plVar5,DAT_083ccd68,4);
LAB_06a40abc:
      in_stack_00000088 = uStack0000000000000028;
      uStack0000000000000094 = uStack0000000000000034;
      uStack000000000000008c = uStack000000000000002c;
      in_stack_00000090 = uStack0000000000000050;
      in_stack_00000080 = uVar6;
      (*(code *)*puVar2)(plVar5,&stack0x00000080,puVar2[1]);
      uStack0000000000000014 = uStack0000000000000074;
      lVar3 = *plVar5;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == DAT_083ccd68) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 2) * 0x10 + 0x138);
            goto LAB_06a40b40;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c(plVar5,DAT_083ccd68,2);
LAB_06a40b40:
      in_stack_00000088 = in_stack_00000068;
      in_stack_00000080 = in_stack_00000060;
      uStack0000000000000094 = uStack0000000000000014;
      in_stack_00000090 = uStack0000000000000070;
      (*(code *)*puVar2)(plVar5,&stack0x00000080,puVar2[1]);
      return plVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


