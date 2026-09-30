/*
FUNCTION_NAME: FUN_0909e41c
ENTRY_POINT: 0909e41c
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint FUN_0909e41c(long *param_1,long *param_2)

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
  
                    /* try { // try from 0909e440 to 0919e44b has its CatchHandler @ 0909e644 */
  if ((DAT_0b33024f & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac75960);
                    /* try { // try from 0909e450 to 0919e477 has its CatchHandler @ 0909e670 */
    FUN_04947ee4(PTR_DAT_0ac75968);
    FUN_04947ee4(PTR_DAT_0ac75948);
    DAT_0b33024f = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (param_1 == (long *)0x0) {
LAB_0909e988:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar9 = *param_1;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac75948) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 4) * 0x10 + 0x138);
        goto LAB_0909e4dc;
      }
      uVar11 = uVar11 - 1;
                    /* try { // try from 0909e4b4 to 0919e4db has its CatchHandler @ 0909e66c */
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_04980e68(param_1,*(long *)PTR_DAT_0ac75948,4);
LAB_0909e4dc:
  lVar9 = (*(code *)*puVar8)(param_1,puVar8[1]);
  if (lVar9 == 0) goto LAB_0909e988;
  uVar3 = OVRPassthroughLayer_BaseGeneratedStyleHandler__Update(lVar9,0);
  uVar4 = FUN_090be954(lVar9,0);
  puVar2 = PTR_DAT_0ac75968;
  if (param_2 == (long *)0x0) goto LAB_0909e988;
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac75968) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
        goto LAB_0909e568;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_04980e68(param_2,*(long *)PTR_DAT_0ac75968,7);
LAB_0909e568:
  iVar5 = (*(code *)*puVar8)(param_2,puVar8[1]);
  puVar1 = PTR_DAT_0ac75960;
  if (iVar5 == 0) {
    if (*(int *)(*(long *)PTR_DAT_0ac75960 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b330359 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac75960);
      DAT_0b330359 = '\x01';
    }
    lVar10 = *(long *)puVar1;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar10 = *(long *)puVar1;
    }
    lVar10 = *(long *)(lVar10 + 0xb8);
    uStack_58 = *(undefined8 *)(lVar10 + 0x38);
    local_60 = *(undefined8 *)(lVar10 + 0x30);
    local_50 = *(undefined8 *)(lVar10 + 0x40);
    uVar11 = FUN_090be980(lVar9,&local_60,uVar3,0);
    if ((uVar11 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (DAT_0b330359 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac75960);
        DAT_0b330359 = '\x01';
      }
      lVar10 = *(long *)puVar1;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar10 = *(long *)puVar1;
      }
      lVar10 = *(long *)(lVar10 + 0xb8);
      uStack_78 = *(undefined8 *)(lVar10 + 0x38);
      local_80 = *(undefined8 *)(lVar10 + 0x30);
      local_70 = *(undefined8 *)(lVar10 + 0x40);
      uVar11 = FUN_090be980(lVar9,&local_80,uVar4,0);
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
        goto LAB_0909e6b4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_04980e68(param_2,*(long *)puVar2,7);
LAB_0909e6b4:
  uVar6 = (*(code *)*puVar8)(param_2,puVar8[1]);
  uVar11 = FUN_0909e98c(param_1,uVar6);
  if ((uVar11 & 1) != 0) {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
          goto FUN_0909e720;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_04980e68(param_2,*(long *)puVar2,8);
FUN_0909e720:
    (*(code *)*puVar8)(&local_98,param_2,puVar8[1]);
    uStack_58 = uStack_90;
    local_60 = local_98;
    local_50 = local_88;
    uVar11 = FUN_090be980(lVar9,&local_60,uVar3,0);
    if ((uVar11 & 1) == 0) {
      lVar10 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
            goto LAB_0909e7b8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_04980e68(param_2,*(long *)puVar2,8);
LAB_0909e7b8:
      (*(code *)*puVar8)(&local_98,param_2,puVar8[1]);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      uVar7 = OVRPassthroughLayer_ColorLutHandler__ApplyStyleSettings(lVar9,&local_80,0);
      uVar7 = uVar7 & 1;
      goto LAB_0909e7ec;
    }
  }
  uVar7 = 0;
LAB_0909e7ec:
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 7) * 0x10 + 0x138);
        goto LAB_0909e83c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)FUN_04980e68(param_2,*(long *)puVar2,7);
LAB_0909e83c:
  uVar3 = (*(code *)*puVar8)(param_2,puVar8[1]);
  uVar11 = OVRPlugin__IsControllerDrivenHandPosesEnabled(param_1,uVar3);
  uVar13 = uVar7;
  if ((uVar11 & 1) != 0) {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto LAB_0909e8a8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_04980e68(param_2,*(long *)puVar2,9);
LAB_0909e8a8:
    (*(code *)*puVar8)(&local_98,param_2,puVar8[1]);
    uStack_58 = uStack_90;
    local_60 = local_98;
    local_50 = local_88;
    uVar11 = FUN_090be980(lVar9,&local_60,uVar4,0);
    if ((uVar11 & 1) == 0) {
      lVar10 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
            goto LAB_0909e930;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_04980e68(param_2,*(long *)puVar2,9);
LAB_0909e930:
      (*(code *)*puVar8)(&local_98,param_2,puVar8[1]);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      uVar11 = FUN_090bf24c(lVar9,&local_80,0);
      uVar13 = uVar7 | 2;
      if ((uVar11 & 1) == 0) {
        uVar13 = uVar7;
      }
    }
  }
  return uVar13;
}


