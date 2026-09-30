/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$CustomPrefabSelection
ENTRY_POINT: 07708508
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x077089b4) */
/* WARNING: Removing unreachable block (ram,0x07708e98) */
/* WARNING: Removing unreachable block (ram,0x07708930) */
/* WARNING: Removing unreachable block (ram,0x07708cac) */
/* WARNING: Removing unreachable block (ram,0x077089c0) */
/* WARNING: Removing unreachable block (ram,0x07708bd4) */
/* WARNING: Removing unreachable block (ram,0x07708d08) */
/* WARNING: Removing unreachable block (ram,0x07708dd8) */
/* WARNING: Removing unreachable block (ram,0x07708e00) */
/* WARNING: Removing unreachable block (ram,0x07708e04) */

void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__CustomPrefabSelection(int *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000098;
  
  if ((DAT_0a52302a & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f302f8);
    FUN_04447ba8(PTR_DAT_09f30300);
    FUN_04447ba8(PTR_DAT_09f30308);
    FUN_04447ba8(PTR_DAT_09f302d8);
    FUN_04447ba8(PTR_DAT_09f30250);
    FUN_04447ba8(PTR_DAT_09f1f008);
    FUN_04447ba8(PTR_DAT_09f30310);
    FUN_04447ba8(PTR_DAT_09f30318);
    FUN_04447ba8(PTR_DAT_09f26d08);
    FUN_04447ba8(PTR_DAT_09f30320);
    FUN_04447ba8(PTR_DAT_09f30328);
    FUN_04447ba8(PTR_DAT_09f30330);
    FUN_04447ba8(PTR_DAT_09f30338);
    FUN_04447ba8(PTR_DAT_09f30340);
    FUN_04447ba8(PTR_DAT_09f30348);
    FUN_04447ba8(PTR_DAT_09f30350);
    FUN_04447ba8(PTR_DAT_09f30358);
    FUN_04447ba8(PTR_DAT_09f30360);
    FUN_04447ba8(PTR_DAT_09f30368);
    DAT_0a52302a = 1;
  }
  in_stack_00000098 = 0;
  in_stack_00000048 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  iVar14 = *param_1;
  if (iVar14 == 0) {
    in_stack_00000098 = *(undefined8 *)(param_1 + 10);
    iVar14 = -1;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (iVar14 == 1) {
      in_stack_00000048 = *(undefined8 *)(param_1 + 0xc);
      iVar14 = -1;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      goto LAB_07708770;
    }
    uVar13 = *(undefined8 *)PTR_DAT_09f30368;
    lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30250);
    FUN_085064e0(lVar9,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar5 = FUN_08506690(lVar9,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_08511c70(lVar5,*(undefined8 *)PTR_DAT_09f30358,*(undefined8 *)PTR_DAT_09f30360,0);
    lVar9 = FUN_08506944(lVar9,uVar13,1,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    in_stack_00000098 = FUN_068a4fb0(lVar9,*(undefined8 *)PTR_DAT_09f30348);
    uVar11 = FUN_067804ac(&stack0x00000098,*(undefined8 *)PTR_DAT_09f30338);
    if ((uVar11 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = in_stack_00000098;
      thunk_FUN_044bb4b4(param_1 + 10,0);
      if (*(int *)(*(long *)PTR_DAT_09f302d8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_04e35080(param_1 + 2,&stack0x00000098,param_1,*(undefined8 *)PTR_DAT_09f30300);
      return;
    }
  }
  lVar9 = FUN_067804f0(&stack0x00000098,*(undefined8 *)PTR_DAT_09f30328);
  plVar6 = (long *)(param_1 + 8);
  *plVar6 = lVar9;
  thunk_FUN_044bb4b4(plVar6);
  if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar9 = *(long *)(*plVar6 + 0x38);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar9 = FUN_085085d4(lVar9,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  in_stack_00000048 = FUN_068a4fb0(lVar9,*(undefined8 *)PTR_DAT_09f30350);
  uVar11 = FUN_067804ac(&stack0x00000048,*(undefined8 *)PTR_DAT_09f30340);
  if ((uVar11 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0xc) = in_stack_00000048;
    thunk_FUN_044bb4b4(param_1 + 0xc,0);
    if (*(int *)(*(long *)PTR_DAT_09f302d8 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_04e35080(param_1 + 2,&stack0x00000048,param_1,*(undefined8 *)PTR_DAT_09f302f8);
    return;
  }
LAB_07708770:
  plVar6 = (long *)FUN_067804f0(&stack0x00000048,*(undefined8 *)PTR_DAT_09f30330);
  plVar7 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30320);
  FUN_079eb2cc(plVar7,plVar6,0);
  plVar8 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f26d08);
  FUN_07acb8ac(plVar8,plVar7,0);
  lVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30318);
  FUN_07ad56ec(lVar9,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_04df1560(&stack0x00000070,lVar9,plVar8,*(undefined8 *)PTR_DAT_09f30310);
  in_stack_00000058 = in_stack_00000078;
  in_stack_00000050 = in_stack_00000070;
  in_stack_00000068 = in_stack_00000088;
  in_stack_00000060 = in_stack_00000080;
  if ((iVar14 < 0) && (plVar8 != (long *)0x0)) {
    lVar9 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_07708918;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f1f008,0);
LAB_07708918:
    (*(code *)*puVar10)(plVar8,puVar10[1]);
  }
  if ((iVar14 < 0) && (plVar7 != (long *)0x0)) {
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_07708994;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f1f008,0);
LAB_07708994:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  if ((iVar14 < 0) && (plVar6 != (long *)0x0)) {
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_07708c38;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar6,*(long *)PTR_DAT_09f1f008,0);
LAB_07708c38:
    (*(code *)*puVar10)(plVar6,puVar10[1]);
  }
  if ((iVar14 < 0) && (plVar6 = *(long **)(param_1 + 8), plVar6 != (long *)0x0)) {
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar10 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_07708d70;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_044822ac(plVar6,*(long *)PTR_DAT_09f1f008,0);
LAB_07708d70:
    (*(code *)*puVar10)(plVar6,puVar10[1]);
  }
  uVar4 = in_stack_00000068;
  uVar3 = in_stack_00000060;
  uVar2 = in_stack_00000058;
  uVar13 = in_stack_00000050;
  puVar1 = PTR_DAT_09f302d8;
  *param_1 = -2;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  in_stack_00000078 = uVar2;
  in_stack_00000070 = uVar13;
  in_stack_00000088 = uVar4;
  in_stack_00000080 = uVar3;
  FUN_067b1c24(param_1 + 2,&stack0x00000070,*(undefined8 *)PTR_DAT_09f30308);
  return;
}


