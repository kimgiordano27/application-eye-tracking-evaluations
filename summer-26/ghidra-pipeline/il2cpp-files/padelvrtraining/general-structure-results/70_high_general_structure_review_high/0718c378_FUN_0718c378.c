/*
FUNCTION_NAME: FUN_0718c378
ENTRY_POINT: 0718c378
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0718c378(ushort *param_1,uint param_2,ulong param_3)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ushort *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ushort *puVar18;
  undefined1 auVar19 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar16 = param_3 & 0xffffffff;
  if ((DAT_09843063 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09212e90);
    FUN_03d2d2b0(PTR_DAT_09212e98);
    FUN_03d2d2b0(PTR_DAT_09212e78);
    FUN_03d2d2b0(PTR_DAT_09212ea0);
    FUN_03d2d2b0(PTR_DAT_09212e88);
    FUN_03d2d2b0(PTR_DAT_09212ea8);
    DAT_09843063 = 1;
  }
  puVar9 = PTR_DAT_09212e88;
  puVar8 = PTR_DAT_09212e78;
  local_78 = 0;
  uStack_70 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uVar12 = FUN_070b2ab4(0);
  if ((uVar12 & 1) != 0) {
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar15 = *(long *)puVar8;
    lVar13 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03d8f26c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03d8f26c();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar13 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03d8f26c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03d8f26c();
    }
    if (**(int **)(lVar13 + 0xb8) * 2 <= (int)param_3) {
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar15 = *(long *)puVar8;
      lVar13 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar13 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      lVar17 = *(long *)puVar8;
      lVar15 = *(long *)(lVar17 + 0x20);
      iVar11 = **(int **)(lVar13 + 0xb8);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_03d8f26c(lVar15);
      }
      lVar13 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar13 = *(long *)(lVar17 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      uVar16 = (ulong)(**(int **)(lVar13 + 0xb8) - 1U & iVar11 - ((uint)param_1 >> 1 & 7));
    }
  }
  puVar10 = PTR_DAT_09212e90;
  puVar1 = param_1 + (int)param_3;
  puVar18 = param_1;
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray:
  while (iVar11 = (int)uVar16, puVar14 = puVar18, 3 < iVar11) {
    if (((uint)*puVar18 == (param_2 & 0xffff)) ||
       (puVar14 = puVar18 + 1, (uint)*puVar14 == (param_2 & 0xffff))) goto LAB_0718c91c;
    if ((uint)puVar18[2] == (param_2 & 0xffff)) goto LAB_0718c918;
    if ((uint)puVar18[3] == (param_2 & 0xffff)) goto LAB_0718c914;
    puVar18 = puVar18 + 4;
    uVar16 = (ulong)(iVar11 - 4);
  }
  if (0 < iVar11) {
    iVar11 = iVar11 + 1;
    do {
      if ((uint)*puVar14 == (param_2 & 0xffff)) goto LAB_0718c91c;
      iVar11 = iVar11 + -1;
      puVar18 = puVar14 + 1;
      puVar14 = puVar18;
    } while (1 < iVar11);
  }
  uVar16 = FUN_070b2ab4(0);
  if (((uVar16 & 1) != 0) &&
     (uVar16 = (long)puVar1 - (long)puVar18, puVar18 <= puVar1 && uVar16 != 0)) {
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar15 = *(long *)puVar8;
    lVar13 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03d8f26c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03d8f26c();
    }
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar13 = *(long *)(lVar15 + 0x20);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03d8f26c();
    }
    lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_03d8f26c();
    }
    if ((long)uVar16 < 0) {
      uVar16 = uVar16 + 1;
    }
    iVar11 = **(int **)(lVar13 + 0xb8);
    FUN_0661200c(&local_78,param_2,*(undefined8 *)PTR_DAT_09212e98);
    uVar6 = local_78;
    uVar7 = uStack_70;
    for (uVar2 = -iVar11 & (uint)(uVar16 >> 1); local_78 = uVar6, uStack_70 = uVar7, 0 < (int)uVar2;
        uVar2 = uVar2 - **(int **)(lVar13 + 0xb8)) {
      uVar3 = *(undefined8 *)puVar18;
      uVar4 = *(undefined8 *)(puVar18 + 4);
      lVar15 = *(long *)PTR_DAT_09212ea8;
      lVar13 = *(long *)(lVar15 + 0x38);
      if (lVar13 == 0) {
        FUN_03d8f2c8(lVar15);
        lVar13 = *(long *)(lVar15 + 0x38);
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      auVar19 = FUN_05185b18(uVar6,uVar7,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar15 + 0x38) + 8));
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar15 = *(long *)PTR_DAT_09212ea0;
      lVar13 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar13 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      uStack_88 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x10);
      local_90 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8);
      uVar16 = FUN_06619a14(&local_90,auVar19._0_8_,auVar19._8_8_,*(undefined8 *)puVar10);
      if ((uVar16 & 1) == 0) {
        iVar11 = FUN_0719eca8(auVar19._0_8_,auVar19._8_8_,0);
        uVar16 = (long)puVar18 - (long)param_1;
        if ((long)uVar16 < 0) {
          uVar16 = uVar16 + 1;
        }
        uVar16 = (ulong)(uint)(iVar11 + (int)(uVar16 >> 1));
        goto LAB_0718c930;
      }
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar15 = *(long *)puVar8;
      lVar13 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar13 = *(long *)(lVar15 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      lVar17 = *(long *)puVar8;
      lVar15 = *(long *)(lVar17 + 0x20);
      iVar11 = **(int **)(lVar13 + 0xb8);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_03d8f26c(lVar15);
      }
      lVar13 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar13 = *(long *)(lVar17 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03d8f26c();
      }
      puVar18 = puVar18 + iVar11;
      uVar6 = local_78;
      uVar7 = uStack_70;
    }
    uVar16 = (long)puVar1 - (long)puVar18;
    if (puVar18 <= puVar1 && uVar16 != 0) {
      if ((long)uVar16 < 0) {
        uVar16 = uVar16 + 1;
      }
      uVar16 = uVar16 >> 1;
      goto 
      Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray;
    }
  }
  uVar16 = 0xffffffff;
  goto LAB_0718c930;
LAB_0718c914:
  puVar14 = puVar18 + 2;
LAB_0718c918:
  puVar14 = puVar14 + 1;
LAB_0718c91c:
  uVar16 = (long)puVar14 - (long)param_1;
  if ((long)uVar16 < 0) {
    uVar16 = uVar16 + 1;
  }
  uVar16 = uVar16 >> 1;
LAB_0718c930:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar16);
}


