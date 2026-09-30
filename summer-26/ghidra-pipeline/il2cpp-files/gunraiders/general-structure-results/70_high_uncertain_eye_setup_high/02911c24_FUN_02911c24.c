/*
FUNCTION_NAME: FUN_02911c24
ENTRY_POINT: 02911c24
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029120a4) */

void FUN_02911c24(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_04530eb4 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(PTR_DAT_04230960);
    FUN_01c5d288(PTR_DAT_0422fb28);
    DAT_04530eb4 = 1;
  }
  uVar7 = 0;
  if (param_2 != (long *)0x0) {
    uVar7 = param_1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (param_2 == (long *)0x0) {
    uVar5 = 0;
    uVar7 = param_1;
  }
  else {
    lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01c72394(lVar9);
    }
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02911d0c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(param_2,lVar9,0);
LAB_02911d0c:
    uVar5 = (*(code *)*puVar6)(param_2,puVar6[1]);
  }
  FUN_02911b90(uVar7,uVar5,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  puVar2 = PTR_DAT_0422fb28;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032e32a8(1,0);
  }
  uVar7 = thunk_FUN_01c5d21c(param_2,0);
  uVar13 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar2);
  }
  uVar13 = FUN_032e04b8(uVar13,0);
  uVar11 = FUN_032e935c(uVar7,uVar13,0);
  lVar9 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar11 & 1) != 0) {
    lVar9 = *(long *)(lVar9 + 0x30);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01c72394(lVar9);
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(param_2);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar9 = param_2[3];
    if (lVar9 != 0) {
      uVar11 = 0;
      puVar6 = (undefined8 *)(lVar9 + 0x30);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (-1 < *(int *)(puVar6 + -2)) {
          uStack_c8 = puVar6[3];
          uStack_d0 = puVar6[2];
          uStack_b8 = puVar6[5];
          local_c0 = puVar6[4];
          uStack_d8 = puVar6[1];
          local_e0 = *puVar6;
          local_a0 = local_e0;
          uStack_98 = uStack_d8;
          local_90 = uStack_d0;
          uStack_88 = uStack_c8;
          uStack_80 = local_c0;
          uStack_78 = uStack_b8;
          Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__Reset
                    (param_1,puVar6[-1],&local_e0,2,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                    0x80) + 0x20) + 0xc0) + 0x110));
        }
        uVar11 = uVar11 + 1;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar11);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar9 = *(long *)(lVar9 + 0x88);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01c72394(lVar9);
  }
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar9) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_02911ec0;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_01c72498(param_2,lVar9,0);
LAB_02911ec0:
  plVar8 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
  puVar2 = PTR_DAT_04230960;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  do {
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02911f30;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar2,0);
LAB_02911f30:
    uVar11 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    if ((uVar11 & 1) == 0) break;
    lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01c72394(lVar9);
    }
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02911fa8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar8,lVar9,0);
LAB_02911fa8:
    (*(code *)*puVar6)(&local_e0,plVar8,puVar6[1]);
    uVar4 = uStack_b8;
    uVar3 = uStack_c8;
    uVar13 = uStack_d8;
    uVar7 = local_e0;
    uStack_68 = uStack_d0;
    local_70 = uStack_d8;
    uStack_58 = local_c0;
    local_60 = uStack_c8;
    uStack_48 = uStack_b0;
    local_50 = uStack_b8;
    uStack_d8 = uStack_d0;
    local_e0 = uVar13;
    uStack_c8 = local_c0;
    uStack_d0 = uVar3;
    uStack_b8 = uStack_b0;
    local_c0 = uVar4;
    Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__Reset
              (param_1,uVar7,&local_e0,2,
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) +
                                    0x20) + 0xc0) + 0x110));
  } while( true );
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0291205c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_0422fce8,0);
LAB_0291205c:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
  return;
}


