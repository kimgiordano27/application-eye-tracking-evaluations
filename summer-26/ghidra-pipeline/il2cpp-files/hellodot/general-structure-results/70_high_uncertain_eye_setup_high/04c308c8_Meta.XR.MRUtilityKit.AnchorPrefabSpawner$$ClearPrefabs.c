/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ClearPrefabs
ENTRY_POINT: 04c308c8
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ClearPrefabs(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  int unaff_w25;
  long *unaff_x26;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  puVar1 = PTR_DAT_065dfdc0;
  if ((param_1 & 1) == 0) {
    thunk_FUN_02c7737c(PTR_DAT_065cfa28);
    uVar9 = thunk_FUN_02cea894();
    uVar10 = thunk_FUN_02c7737c(PTR_DAT_065e6338);
    FUN_04f33790(uVar9,uVar10,0);
    uVar10 = thunk_FUN_02c7737c(PTR_DAT_065e6340);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar9,uVar10);
  }
  lVar2 = *(long *)PTR_DAT_065dfdc0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar2 = *(long *)puVar1;
  }
  plVar8 = (long *)**(undefined8 **)(lVar2 + 0xb8);
  plVar3 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar2 = *(long *)(unaff_x19 + 8);
  if ((lVar2 != 0) &&
     (lVar4 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
    uVar9 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar9,0);
  }
  if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  plVar3[4] = lVar2;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar2 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  uVar9 = *(undefined8 *)PTR_DAT_065e6328;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e39d8) {
        puVar5 = (undefined8 *)(lVar2 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_04c309a4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065e39d8,4);
LAB_04c309a4:
  (*(code *)*puVar5)(plVar8,uVar9,plVar3,puVar5[1]);
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 8);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  uVar6 = FUN_05687de0(uVar9,0,0);
  puVar1 = PTR_DAT_065dfdc0;
  if ((uVar6 & 1) != 0) {
    lVar2 = *(long *)PTR_DAT_065dfdc0;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)PTR_DAT_065ca230;
    plVar3 = (long *)**(undefined8 **)(lVar2 + 0xb8);
    lVar2 = *(long *)(lVar4 + 0x38);
    if (lVar2 == 0) {
      FUN_02ce09d4(lVar4);
      lVar2 = *(long *)(lVar4 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02ce0978();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    lVar2 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02ce0978();
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = *plVar3;
    uVar9 = **(undefined8 **)(lVar2 + 0xb8);
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    uVar10 = *(undefined8 *)PTR_DAT_065e6330;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e39d8) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_04c30e90;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar3,*(long *)PTR_DAT_065e39d8,4);
LAB_04c30e90:
    (*(code *)*puVar5)(plVar3,uVar10,uVar9,puVar5[1]);
    lVar2 = FUN_04c2cebc();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _in_stack_00000020 = FUN_0404bcb8(lVar2,0,*(undefined8 *)PTR_DAT_065e6320);
    uVar6 = FUN_044a8fc8(&stack0x00000020,*(undefined8 *)PTR_DAT_065e6308);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b6c64(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    lVar2 = FUN_044a9014(&stack0x00000020,*(undefined8 *)PTR_DAT_065e6300);
    goto LAB_04c30d74;
  }
  uVar9 = *(undefined8 *)PTR_DAT_065e61b8;
  if (*(long *)(unaff_x20 + 0x30) < 0) {
    uVar10 = *(undefined8 *)PTR_DAT_065e2c80;
  }
  else {
    in_stack_00000038 = *(long *)(unaff_x20 + 0x30);
    uVar10 = FUN_04f2f768(&stack0x00000038,0);
  }
  uVar9 = FUN_04db0cfc(uVar9,uVar10,0);
  lVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065dfe10);
  FUN_04c1b40c(lVar2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(unaff_x20 + 0x40);
  FUN_04c1b334(lVar2,*(undefined8 *)PTR_DAT_065e14b0,0);
  uVar10 = FUN_04c1cdd0(lVar2,0);
  lVar2 = FUN_04c28dc4(uVar10,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar2 = FUN_054d80d0(lVar2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_054e8f38(lVar2,*(undefined8 *)PTR_DAT_065e61c0,uVar9,0);
  if (unaff_w25 == 1) {
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    *(undefined8 *)(unaff_x19 + 0x14) = 0;
    *unaff_x19 = 0xffffffff;
LAB_04c30c48:
    uVar9 = FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065e1778);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar9,uVar9);
    }
    lVar2 = FUN_04c2d500();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar11 = FUN_04046650(lVar2,0,*(undefined8 *)PTR_DAT_065e1be8);
    uVar6 = FUN_044a8b38();
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = auVar11;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030ab544(unaff_x19 + 2);
      return;
    }
  }
  else {
    if (unaff_w25 != 2) {
      lVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e6318);
      FUN_04f7383c(lVar2,0);
      *(long *)(lVar2 + 0x10) = unaff_x20;
      FUN_04c2df60(lVar2,uVar10);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar3 = *(long **)(unaff_x20 + 0x20);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar2 = (**(code **)(*plVar3 + 0x198))
                        (plVar3,uVar10,*(undefined8 *)(unaff_x19 + 0xc),
                         *(undefined8 *)(*plVar3 + 0x1a0));
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      _in_stack_00000010 = FUN_0404bcb8(lVar2,0,*(undefined8 *)PTR_DAT_065e1788);
      uVar6 = FUN_044a8fc8(&stack0x00000010,*(undefined8 *)PTR_DAT_065e1780);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000010;
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_030b6c64(unaff_x19 + 2,&stack0x00000010);
        return;
      }
      goto LAB_04c30c48;
    }
    *(undefined8 *)(unaff_x19 + 0x16) = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    *unaff_x19 = 0xffffffff;
  }
  uVar6 = FUN_044a8b84();
  if ((uVar6 & 1) == 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar2 = FUN_04c2d304();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _in_stack_00000020 = FUN_0404bcb8(lVar2,0,*(undefined8 *)PTR_DAT_065e6320);
    uVar6 = FUN_044a8fc8(&stack0x00000020,*(undefined8 *)PTR_DAT_065e6308);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b6c64(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    lVar2 = FUN_044a9014(&stack0x00000020,*(undefined8 *)PTR_DAT_065e6300);
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
    lVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e6310);
    FUN_04f7383c(lVar2,0);
    *(undefined4 *)(lVar2 + 0x10) = 3;
    *(undefined8 *)(lVar2 + 0x18) = uVar9;
    lVar4 = *(long *)(unaff_x20 + 0x60);
    *(long *)(unaff_x20 + 0x70) = lVar2;
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),lVar2,*(undefined8 *)(lVar4 + 0x28))
      ;
      lVar2 = *(long *)(unaff_x20 + 0x70);
    }
  }
LAB_04c30d74:
  *unaff_x19 = 0xfffffffe;
  puVar1 = PTR_DAT_065e62f0;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,lVar2,*(undefined8 *)puVar1);
  return;
}


