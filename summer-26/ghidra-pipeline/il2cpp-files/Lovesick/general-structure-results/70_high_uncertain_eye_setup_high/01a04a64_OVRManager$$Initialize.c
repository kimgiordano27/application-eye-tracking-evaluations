/*
FUNCTION_NAME: OVRManager$$Initialize
ENTRY_POINT: 01a04a64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__Initialize(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  int *in_x10;
  int *piVar5;
  long *unaff_x20;
  uint uVar6;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(in_x10[4] + 7) * 0x10 + 0x138);
      goto LAB_01a04b78;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a04b78:
  (*(code *)*puVar2)();
  uVar3 = FUN_01a08fb8();
  if ((uVar3 & 1) != 0) {
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_01a04be4;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a04be4:
    (*(code *)*puVar2)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar3 = FUN_01a28c80();
    if ((uVar3 & 1) == 0) {
      lVar4 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
            goto LAB_01a04c7c;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_00d59724();
                    /* try { // try from 01a04c60 to 01b04c87 has its CatchHandler @ 01a04ef0 */
LAB_01a04c7c:
      (*(code *)*puVar2)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar1 = FUN_01a291a4();
      uVar1 = uVar1 & 1;
      goto LAB_01a04cb0;
    }
  }
  uVar1 = 0;
LAB_01a04cb0:
  lVar4 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
                    /* try { // try from 01a04cbc to 01b04ce3 has its CatchHandler @ 01a04eec */
  if (uVar3 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x24) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 7) * 0x10 + 0x138);
        goto LAB_01a04d00;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a04d00:
  (*(code *)*puVar2)();
  uVar3 = FUN_01a09068();
  uVar6 = uVar1;
  if ((uVar3 & 1) != 0) {
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_01a04d6c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a04d6c:
    (*(code *)*puVar2)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar3 = FUN_01a28c80();
    if ((uVar3 & 1) == 0) {
      lVar4 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
            goto LAB_01a04df4;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a04df4:
      (*(code *)*puVar2)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar3 = FUN_01a29580();
      uVar6 = uVar1 | 2;
      if ((uVar3 & 1) == 0) {
        uVar6 = uVar1;
      }
    }
  }
  return uVar6;
}


