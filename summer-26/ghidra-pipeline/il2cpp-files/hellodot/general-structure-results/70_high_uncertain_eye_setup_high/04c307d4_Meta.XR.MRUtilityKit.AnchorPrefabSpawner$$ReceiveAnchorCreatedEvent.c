/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$ReceiveAnchorCreatedEvent
ENTRY_POINT: 04c307d4
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__ReceiveAnchorCreatedEvent(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  int *unaff_x19;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e6330);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2c80);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e61c0);
  *(undefined1 *)(unaff_x20 + 0x70f) = 1;
  puVar4 = PTR_DAT_065e60f8;
  puVar2 = PTR_DAT_065c8a78;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iVar1 = *unaff_x19;
  lVar11 = *(long *)(unaff_x19 + 10);
  uVar12 = 0;
  if (iVar1 - 1U < 2) {
LAB_04c30b84:
    if (iVar1 == 1) {
      _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x12);
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
      unaff_x19[0x14] = 0;
      unaff_x19[0x15] = 0;
      *unaff_x19 = -1;
LAB_04c30c48:
      uVar12 = FUN_044a9014(&stack0x00000010,*(undefined8 *)PTR_DAT_065e1778);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(uVar12,uVar12);
      }
      lVar9 = FUN_04c2d500(lVar11);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar15 = FUN_04046650(lVar9,0,*(undefined8 *)PTR_DAT_065e1be8);
      uVar5 = FUN_044a8b38();
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = auVar15;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_030ab544(unaff_x19 + 2);
        return;
      }
    }
    else {
      if (iVar1 != 2) {
        lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e6318);
        FUN_04f7383c(lVar9,0);
        *(long *)(lVar9 + 0x10) = lVar11;
        FUN_04c2df60(lVar9,uVar12);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        plVar6 = *(long **)(lVar11 + 0x20);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar9 = (**(code **)(*plVar6 + 0x198))
                          (plVar6,uVar12,*(undefined8 *)(unaff_x19 + 0xc),
                           *(undefined8 *)(*plVar6 + 0x1a0));
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        _in_stack_00000010 = FUN_0404bcb8(lVar9,0,*(undefined8 *)PTR_DAT_065e1788);
        uVar5 = FUN_044a8fc8(&stack0x00000010,*(undefined8 *)PTR_DAT_065e1780);
        if ((uVar5 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000010;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030b6c64(unaff_x19 + 2,&stack0x00000010);
          return;
        }
        goto LAB_04c30c48;
      }
      unaff_x19[0x16] = 0;
      unaff_x19[0x17] = 0;
      unaff_x19[0x18] = 0;
      unaff_x19[0x19] = 0;
      *unaff_x19 = -1;
    }
    uVar5 = FUN_044a8b84();
    if ((uVar5 & 1) != 0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar12 = *(undefined8 *)(lVar11 + 0x48);
      lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e6310);
      FUN_04f7383c(lVar9,0);
      *(undefined4 *)(lVar9 + 0x10) = 3;
      *(undefined8 *)(lVar9 + 0x18) = uVar12;
      lVar7 = *(long *)(lVar11 + 0x60);
      *(long *)(lVar11 + 0x70) = lVar9;
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),lVar9,*(undefined8 *)(lVar7 + 0x28));
        lVar9 = *(long *)(lVar11 + 0x70);
      }
      goto LAB_04c30d74;
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = FUN_04c2d304(lVar11,*(undefined8 *)(unaff_x19 + 0xc));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    _in_stack_00000020 = FUN_0404bcb8(lVar11,0,*(undefined8 *)PTR_DAT_065e6320);
    uVar5 = FUN_044a8fc8(&stack0x00000020,*(undefined8 *)PTR_DAT_065e6308);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b6c64(unaff_x19 + 2,&stack0x00000020);
      return;
    }
LAB_04c30d5c:
    lVar9 = FUN_044a9014(&stack0x00000020,*(undefined8 *)PTR_DAT_065e6300);
  }
  else {
    if (iVar1 == 0) {
      _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
      unaff_x19[0xe] = 0;
      unaff_x19[0xf] = 0;
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      *unaff_x19 = -1;
    }
    else {
      if (iVar1 == 3) {
        _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0xe);
        unaff_x19[0xe] = 0;
        unaff_x19[0xf] = 0;
        unaff_x19[0x10] = 0;
        unaff_x19[0x11] = 0;
        *unaff_x19 = -1;
        _in_stack_00000010 = ZEXT816(0);
        goto LAB_04c30d5c;
      }
      uVar12 = *(undefined8 *)(unaff_x19 + 8);
      if (*(int *)(*(long *)PTR_DAT_065c8a78 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar5 = FUN_05684600(uVar12,0,0);
      if ((uVar5 & 1) == 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
      }
      else {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        plVar6 = *(long **)(lVar11 + 0x28);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar5 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        puVar3 = PTR_DAT_065dfdc0;
        if ((uVar5 & 1) == 0) {
          thunk_FUN_02c7737c(PTR_DAT_065cfa28);
          uVar12 = thunk_FUN_02cea894();
          uVar14 = thunk_FUN_02c7737c(PTR_DAT_065e6338);
          FUN_04f33790(uVar12,uVar14,0);
          uVar14 = thunk_FUN_02c7737c(PTR_DAT_065e6340);
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar12,uVar14);
        }
        lVar9 = *(long *)PTR_DAT_065dfdc0;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar9 = *(long *)puVar3;
        }
        plVar13 = (long *)**(undefined8 **)(lVar9 + 0xb8);
        plVar6 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,1);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar9 = *(long *)(unaff_x19 + 8);
        if ((lVar9 != 0) &&
           (lVar7 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar12,0);
        }
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar6[4] = lVar9;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar9 = *plVar13;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        uVar12 = *(undefined8 *)PTR_DAT_065e6328;
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 4) * 0x10 + 0x138);
              goto LAB_04c309a4;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065e39d8,4);
LAB_04c309a4:
        (*(code *)*puVar8)(plVar13,uVar12,plVar6,puVar8[1]);
        *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(unaff_x19 + 8);
      }
      uVar12 = *(undefined8 *)(lVar11 + 0x40);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar5 = FUN_05687de0(uVar12,0,0);
      puVar2 = PTR_DAT_065dfdc0;
      if ((uVar5 & 1) == 0) {
        uVar12 = *(undefined8 *)PTR_DAT_065e61b8;
        if (*(long *)(lVar11 + 0x30) < 0) {
          uVar14 = *(undefined8 *)PTR_DAT_065e2c80;
        }
        else {
          in_stack_00000038 = *(long *)(lVar11 + 0x30);
          uVar14 = FUN_04f2f768(&stack0x00000038,0);
        }
        uVar14 = FUN_04db0cfc(uVar12,uVar14,0);
        lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065dfe10);
        FUN_04c1b40c(lVar9,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar11 + 0x40);
        FUN_04c1b334(lVar9,*(undefined8 *)PTR_DAT_065e14b0,0);
        uVar12 = FUN_04c1cdd0(lVar9,0);
        lVar9 = FUN_04c28dc4(uVar12,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar9 = FUN_054d80d0(lVar9,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_054e8f38(lVar9,*(undefined8 *)PTR_DAT_065e61c0,uVar14,0);
        goto LAB_04c30b84;
      }
      lVar9 = *(long *)PTR_DAT_065dfdc0;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar9 = *(long *)puVar2;
      }
      lVar7 = *(long *)PTR_DAT_065ca230;
      plVar6 = (long *)**(undefined8 **)(lVar9 + 0xb8);
      lVar9 = *(long *)(lVar7 + 0x38);
      if (lVar9 == 0) {
        FUN_02ce09d4(lVar7);
        lVar9 = *(long *)(lVar7 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02ce0978();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar9 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02ce0978();
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar7 = *plVar6;
      uVar12 = **(undefined8 **)(lVar9 + 0xb8);
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      uVar14 = *(undefined8 *)PTR_DAT_065e6330;
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_04c30e90;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065e39d8,4);
LAB_04c30e90:
      (*(code *)*puVar8)(plVar6,uVar14,uVar12,puVar8[1]);
      lVar11 = FUN_04c2cebc(lVar11,*(undefined8 *)(unaff_x19 + 0xc));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      _in_stack_00000020 = FUN_0404bcb8(lVar11,0,*(undefined8 *)PTR_DAT_065e6320);
      uVar5 = FUN_044a8fc8(&stack0x00000020,*(undefined8 *)PTR_DAT_065e6308);
      if ((uVar5 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_030b6c64(unaff_x19 + 2,&stack0x00000020);
        return;
      }
    }
    lVar9 = FUN_044a9014(&stack0x00000020,*(undefined8 *)PTR_DAT_065e6300);
  }
LAB_04c30d74:
  *unaff_x19 = -2;
  puVar2 = PTR_DAT_065e62f0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,lVar9,*(undefined8 *)puVar2);
  return;
}


