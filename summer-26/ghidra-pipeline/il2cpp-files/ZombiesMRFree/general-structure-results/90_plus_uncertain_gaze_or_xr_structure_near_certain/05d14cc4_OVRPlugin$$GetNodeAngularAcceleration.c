/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularAcceleration
ENTRY_POINT: 05d14cc4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin__GetNodeAngularAcceleration(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x20;
  uint uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar11 + -2) == param_3) {
      puVar7 = (undefined8 *)(param_1 + (long)(*piVar11 + 4) * 0x10 + 0x138);
      goto LAB_05d14d04;
    }
    in_x9 = in_x9 + -1;
    piVar11 = piVar11 + 4;
  } while (in_x9 != 0);
  puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_05d14d04:
  lVar8 = (*(code *)*puVar7)();
  if (lVar8 == 0) {
LAB_05d151b0:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar3 = FUN_05d354b0(lVar8,0);
  uVar4 = FUN_05d35590(lVar8,0);
  puVar2 = PTR_DAT_06fb4b20;
  if (unaff_x20 == (long *)0x0) goto LAB_05d151b0;
  lVar9 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06fb4b20) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
        goto LAB_05d14d90;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_05d14d90:
  iVar5 = (*(code *)*puVar7)();
  puVar1 = PTR_DAT_06fb4b18;
  if (iVar5 == 0) {
    if (*(int *)(*(long *)PTR_DAT_06fb4b18 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (DAT_07398969 == '\0') {
      FUN_02fe925c(PTR_DAT_06fb4b18);
      DAT_07398969 = '\x01';
    }
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar9 = *(long *)puVar1;
    }
    lVar9 = *(long *)(lVar9 + 0xb8);
    in_stack_00000050 = *(undefined8 *)(lVar9 + 0x40);
    in_stack_00000048 = *(undefined8 *)(lVar9 + 0x38);
    in_stack_00000040 = *(undefined8 *)(lVar9 + 0x30);
    uVar10 = FUN_05d355bc(lVar8,&stack0x00000040,uVar3,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      if (DAT_07398969 == '\0') {
        FUN_02fe925c(PTR_DAT_06fb4b18);
        DAT_07398969 = '\x01';
      }
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar9 = *(long *)puVar1;
      }
      lVar9 = *(long *)(lVar9 + 0xb8);
      in_stack_00000030 = *(undefined8 *)(lVar9 + 0x40);
      in_stack_00000028 = *(undefined8 *)(lVar9 + 0x38);
      in_stack_00000020 = *(undefined8 *)(lVar9 + 0x30);
      uVar10 = FUN_05d355bc(lVar8,&stack0x00000020,uVar4,0);
      if ((uVar10 & 1) == 0) {
        return 3;
      }
    }
    return 0;
  }
  lVar9 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
        goto OVRPlugin__GetNodeOrientationValid;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_02feb5b8();
OVRPlugin__GetNodeOrientationValid:
  (*(code *)*puVar7)();
  uVar10 = FUN_05d151b4();
  if ((uVar10 & 1) != 0) {
    lVar9 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_05d14f48;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_05d14f48:
    (*(code *)*puVar7)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar10 = FUN_05d355bc(lVar8,&stack0x00000040,uVar3,0);
    if ((uVar10 & 1) == 0) {
      lVar9 = *unaff_x20;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_05d14fe0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_05d14fe0:
      (*(code *)*puVar7)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar6 = FUN_05d35ad8(lVar8,&stack0x00000020,0);
      uVar6 = uVar6 & 1;
      goto LAB_05d15014;
    }
  }
  uVar6 = 0;
LAB_05d15014:
  lVar9 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
        goto LAB_05d15064;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_05d15064:
  (*(code *)*puVar7)();
  uVar10 = FUN_05d15264();
  uVar12 = uVar6;
  if ((uVar10 & 1) != 0) {
    lVar9 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_05d150d0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_05d150d0:
    (*(code *)*puVar7)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar10 = FUN_05d355bc(lVar8,&stack0x00000040,uVar4,0);
    if ((uVar10 & 1) == 0) {
      lVar9 = *unaff_x20;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_05d15158;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_02feb5b8();
LAB_05d15158:
      (*(code *)*puVar7)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar10 = FUN_05d35ecc(lVar8,&stack0x00000020,0);
      uVar12 = uVar6 | 2;
      if ((uVar10 & 1) == 0) {
        uVar12 = uVar6;
      }
    }
  }
  return uVar12;
}


