/*
FUNCTION_NAME: FUN_05d14c44
ENTRY_POINT: 05d14c44
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


uint FUN_05d14c44(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0739885f & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb4b18);
    FUN_02fe925c(PTR_DAT_06fb4b20);
    FUN_02fe925c(PTR_DAT_06fb4b00);
    DAT_0739885f = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (param_1 == (long *)0x0) {
LAB_05d151b0:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar9 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06fb4b00) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 4) * 0x10 + 0x138);
        goto LAB_05d14d04;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_02feb5b8(param_1,*(long *)PTR_DAT_06fb4b00,4);
LAB_05d14d04:
  lVar9 = (*(code *)*puVar8)(param_1,puVar8[1]);
  if (lVar9 == 0) goto LAB_05d151b0;
  uVar3 = FUN_05d354b0(lVar9,0);
  uVar4 = FUN_05d35590(lVar9,0);
  puVar2 = PTR_DAT_06fb4b20;
  if (param_2 == (long *)0x0) goto LAB_05d151b0;
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06fb4b20) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
        goto LAB_05d14d90;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)PTR_DAT_06fb4b20,7);
LAB_05d14d90:
  iVar5 = (*(code *)*puVar8)(param_2,puVar8[1]);
  puVar1 = PTR_DAT_06fb4b18;
  if (iVar5 == 0) {
    if (*(int *)(*(long *)PTR_DAT_06fb4b18 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (DAT_07398969 == '\0') {
      FUN_02fe925c(PTR_DAT_06fb4b18);
      DAT_07398969 = '\x01';
    }
    lVar10 = *(long *)puVar1;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar10 = *(long *)puVar1;
    }
    lVar10 = *(long *)(lVar10 + 0xb8);
    local_50 = *(undefined8 *)(lVar10 + 0x40);
    uStack_58 = *(undefined8 *)(lVar10 + 0x38);
    local_60 = *(undefined8 *)(lVar10 + 0x30);
    uVar11 = FUN_05d355bc(lVar9,&local_60,uVar3,0);
    if ((uVar11 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      if (DAT_07398969 == '\0') {
        FUN_02fe925c(PTR_DAT_06fb4b18);
        DAT_07398969 = '\x01';
      }
      lVar10 = *(long *)puVar1;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar10 = *(long *)puVar1;
      }
      lVar10 = *(long *)(lVar10 + 0xb8);
      local_70 = *(undefined8 *)(lVar10 + 0x40);
      uStack_78 = *(undefined8 *)(lVar10 + 0x38);
      local_80 = *(undefined8 *)(lVar10 + 0x30);
      uVar11 = FUN_05d355bc(lVar9,&local_80,uVar4,0);
      if ((uVar11 & 1) == 0) {
        return 3;
      }
    }
    return 0;
  }
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
        goto OVRPlugin__GetNodeOrientationValid;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar2,7);
OVRPlugin__GetNodeOrientationValid:
  uVar6 = (*(code *)*puVar8)(param_2,puVar8[1]);
  uVar11 = FUN_05d151b4(param_1,uVar6);
  if ((uVar11 & 1) != 0) {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
          goto LAB_05d14f48;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar2,8);
LAB_05d14f48:
    (*(code *)*puVar8)(&local_98,param_2,puVar8[1]);
    uStack_58 = uStack_90;
    local_60 = local_98;
    local_50 = local_88;
    uVar11 = FUN_05d355bc(lVar9,&local_60,uVar3,0);
    if ((uVar11 & 1) == 0) {
      lVar10 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
            goto LAB_05d14fe0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar2,8);
LAB_05d14fe0:
      (*(code *)*puVar8)(&local_98,param_2,puVar8[1]);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      uVar7 = FUN_05d35ad8(lVar9,&local_80,0);
      uVar7 = uVar7 & 1;
      goto LAB_05d15014;
    }
  }
  uVar7 = 0;
LAB_05d15014:
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
        goto LAB_05d15064;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar2,7);
LAB_05d15064:
  uVar3 = (*(code *)*puVar8)(param_2,puVar8[1]);
  uVar11 = FUN_05d15264(param_1,uVar3);
  uVar13 = uVar7;
  if ((uVar11 & 1) != 0) {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto LAB_05d150d0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar2,9);
LAB_05d150d0:
    (*(code *)*puVar8)(&local_98,param_2,puVar8[1]);
    uStack_58 = uStack_90;
    local_60 = local_98;
    local_50 = local_88;
    uVar11 = FUN_05d355bc(lVar9,&local_60,uVar4,0);
    if ((uVar11 & 1) == 0) {
      lVar10 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
            goto LAB_05d15158;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02feb5b8(param_2,*(long *)puVar2,9);
LAB_05d15158:
      (*(code *)*puVar8)(&local_98,param_2,puVar8[1]);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      uVar11 = FUN_05d35ecc(lVar9,&local_80,0);
      uVar13 = uVar7 | 2;
      if ((uVar11 & 1) == 0) {
        uVar13 = uVar7;
      }
    }
  }
  return uVar13;
}


