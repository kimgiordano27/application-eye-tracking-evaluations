/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$Init
ENTRY_POINT: 04c253cc
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c273fc) */
/* WARNING: Removing unreachable block (ram,0x04c26660) */
/* WARNING: Removing unreachable block (ram,0x04c2625c) */
/* WARNING: Removing unreachable block (ram,0x04c25990) */
/* WARNING: Removing unreachable block (ram,0x04c257b4) */
/* WARNING: Removing unreachable block (ram,0x04c26da0) */
/* WARNING: Removing unreachable block (ram,0x04c26094) */
/* WARNING: Removing unreachable block (ram,0x04c26264) */
/* WARNING: Removing unreachable block (ram,0x04c25850) */
/* WARNING: Removing unreachable block (ram,0x04c265b4) */
/* WARNING: Removing unreachable block (ram,0x04c268d0) */
/* WARNING: Removing unreachable block (ram,0x04c26a44) */

void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__Init(void)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 *unaff_x19;
  long lVar15;
  long *plVar16;
  int iVar17;
  long unaff_x26;
  long *plVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  lVar15 = *(long *)(unaff_x19 + 8);
  if ((uint)unaff_x26 < 8) {
                    /* WARNING: Could not recover jumptable at 0x04c25404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(&switchD_04c25404::switchdataD_013decf2)[unaff_x26] * 4 + 0x4c25408))();
    return;
  }
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (*(char *)(lVar15 + 0x69) == '\0') {
    bVar3 = 0;
  }
  else {
    plVar16 = *(long **)(lVar15 + 0x58);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar12 = *plVar16;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065e39d8) {
          puVar5 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04c25540;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar16,*(long *)PTR_DAT_065e39d8,0);
LAB_04c25540:
    bVar3 = (*(code *)*puVar5)(plVar16,puVar5[1]);
    bVar3 = bVar3 & 1;
  }
  *(byte *)(unaff_x19 + 0xe) = bVar3;
  puVar2 = PTR_DAT_065c8668;
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)PTR_DAT_065c8668;
  if (*(char *)(unaff_x19 + 0xe) != '\0') {
    in_stack_000000b8._4_4_ = thunk_FUN_02c8e54c(lVar15 + 0x50,0);
    uVar6 = FUN_04f2e6f4((long)&stack0x000000b8 + 4,*(undefined8 *)PTR_DAT_065e5db8,0);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar6;
  }
  uVar4 = FUN_04c24034(lVar15,*(undefined8 *)(unaff_x19 + 10));
  unaff_x19[0x12] = uVar4;
  unaff_x19[0x13] = uVar4;
  uVar4 = *(undefined4 *)(lVar15 + 100);
  *(undefined8 *)(unaff_x19 + 0x16) = 0;
  unaff_x19[0x14] = uVar4;
  if (*(long *)(lVar15 + 0x70) == 0) {
    uVar6 = *(undefined8 *)puVar2;
  }
  else {
    uVar6 = FUN_04db00f0(*(long *)(lVar15 + 0x70),*(undefined8 *)PTR_DAT_065ca570,0);
  }
  puVar2 = PTR_DAT_065e5be8;
  lVar12 = *(long *)PTR_DAT_065e5be8;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar12 = *(long *)puVar2;
  }
  uVar6 = FUN_04db00f0(uVar6,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),0);
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar12 = FUN_054d7998(*(long *)(unaff_x19 + 10),0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_054e8f38(lVar12,*(undefined8 *)PTR_DAT_065e5dc8,uVar6,0);
  lVar12 = *(long *)(lVar15 + 0x78);
  if (lVar12 != 0) {
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar7 = FUN_054d7998(*(long *)(unaff_x19 + 10),0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_054e8f38(lVar7,*(undefined8 *)PTR_DAT_065e5dc0,lVar12,0);
  }
  if (*(long *)(lVar15 + 0x88) != 0) {
    FUN_034334b4(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e46b0,
                 *(long *)(lVar15 + 0x88),*(undefined8 *)PTR_DAT_065e5d60);
  }
  lVar12 = 0;
  plVar16 = (long *)0x0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
LAB_04c25710:
  if (lVar12 != 0) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_054df824(lVar12,0);
  }
  puVar2 = PTR_DAT_065c89b8;
  *(undefined8 *)(unaff_x19 + 0x16) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04f94794(unaff_x19 + 0xc,0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar6 = *(undefined8 *)(lVar15 + 0x30);
  in_stack_000000a8._4_1_ = 0;
  FUN_04f951b8(uVar6,(long)&stack0x000000a8 + 4,0);
  lVar12 = FUN_033fb070(*(undefined8 *)(lVar15 + 0x48),*(undefined8 *)PTR_DAT_065e5cf8);
  if (((int)unaff_x26 < 0) && (in_stack_000000a8._4_1_ != 0)) {
    thunk_FUN_02c6fbb4(uVar6,0);
  }
  uVar13 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1470,
                        &stack0x000000b0,*(undefined8 *)PTR_DAT_065e5d78);
  if ((uVar13 & 1) == 0) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_039685d0(lVar12,in_stack_000000b0,*(undefined8 *)PTR_DAT_065e5d98);
  }
  FUN_03968dbc(&stack0x00000028,lVar12,*(undefined8 *)PTR_DAT_065e5db0);
  in_stack_00000048 = in_stack_00000030;
  in_stack_00000040 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x1e) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0x1a) = in_stack_00000028;
  if ((int)unaff_x26 != 0) goto LAB_04c258f8;
  _in_stack_00000090 = *(undefined1 (*) [16])(unaff_x19 + 0x20);
  unaff_x26 = 0xffffffff;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x22) = 0;
  *unaff_x19 = 0xffffffff;
  while( true ) {
    FUN_04e5bbac(&stack0x00000090,0);
LAB_04c258f8:
    uVar13 = FUN_0481f4e4(unaff_x19 + 0x1a,*(undefined8 *)PTR_DAT_065e5d28);
    if ((uVar13 & 1) == 0) break;
    plVar18 = *(long **)(unaff_x19 + 0x1e);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar12 = *plVar18;
    uVar6 = *(undefined8 *)(unaff_x19 + 10);
    uVar8 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065de2d0) {
          puVar5 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04c25b20;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)PTR_DAT_065de2d0,0);
LAB_04c25b20:
    lVar12 = (*(code *)*puVar5)(plVar18,uVar6,uVar8,puVar5[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar20 = FUN_04fa5130(lVar12,0,0);
    _in_stack_00000090 = auVar20;
    uVar13 = FUN_04e5bb90(&stack0x00000090,0);
    if ((uVar13 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x20) = _in_stack_00000090;
      if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030c16cc(unaff_x19 + 2,&stack0x00000090);
      return;
    }
  }
  if ((int)unaff_x26 < 0) {
    uVar13 = FUN_0481f4e0(unaff_x19 + 0x1a,*(undefined8 *)PTR_DAT_065e5d10);
  }
  *(undefined8 *)(unaff_x19 + 0x1a) = 0;
  *(undefined8 *)(unaff_x19 + 0x1c) = 0;
  *(undefined8 *)(unaff_x19 + 0x1e) = 0;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_04c23d20(uVar13,*(undefined8 *)(unaff_x19 + 10));
  lVar12 = FUN_04c23dd0(lVar15,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(unaff_x19 + 0xc));
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar20 = FUN_04fa5130(lVar12,0,0);
  _in_stack_00000090 = auVar20;
  uVar13 = FUN_04e5bb90(&stack0x00000090,0);
  if ((uVar13 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x20) = _in_stack_00000090;
    if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030c16cc(unaff_x19 + 2,&stack0x00000090);
    return;
  }
  FUN_04e5bbac(&stack0x00000090,0);
  if (*(char *)(unaff_x19 + 0xe) != '\0') {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar11 = *(uint *)(lVar15 + 0x6c);
    if ((uVar11 & 1) != 0) {
      plVar19 = *(long **)(lVar15 + 0x58);
      plVar18 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,3);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar12 = *(long *)(unaff_x19 + 0x10);
      if (lVar12 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar7 == 0) {
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
      }
      if ((int)plVar18[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar18[4] = lVar12;
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,unaff_x19[0x13]);
      lVar12 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c8a08,&stack0x00000040);
      if (lVar12 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar7 == 0) {
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
      }
      uVar11 = *(uint *)(plVar18 + 3);
      if (uVar11 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar18[5] = lVar12;
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar12 = *(long *)(*(long *)(unaff_x19 + 10) + 0x30);
      if (lVar12 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar7 == 0) {
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
        uVar11 = *(uint *)(plVar18 + 3);
      }
      if (uVar11 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar18[6] = lVar12;
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar12 = *plVar19;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar6 = *(undefined8 *)PTR_DAT_065e5e00;
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto LAB_04c25bac;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar19,*(long *)PTR_DAT_065e39d8,3);
LAB_04c25bac:
      (*(code *)*puVar5)(plVar19,uVar6,plVar18,puVar5[1]);
      uVar11 = *(uint *)(lVar15 + 0x6c);
    }
    if ((uVar11 >> 1 & 1) != 0) {
      uVar6 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e5e18,*(undefined8 *)(unaff_x19 + 0x10),
                           *(undefined8 *)PTR_DAT_065e5df0,0);
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar8 = FUN_054d7998(*(long *)(unaff_x19 + 10),0);
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar12 = *(long *)(*(long *)(unaff_x19 + 10) + 0x40);
      if (lVar12 == 0) {
        uVar9 = 0;
      }
      else {
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar9 = FUN_054d80d0(lVar12,0);
      }
      FUN_04c23704(lVar15,uVar6,uVar8,uVar9);
      uVar11 = *(uint *)(lVar15 + 0x6c);
    }
    if ((uVar11 >> 2 & 1) != 0) {
      uVar6 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e5e18,*(undefined8 *)(unaff_x19 + 0x10),
                           *(undefined8 *)PTR_DAT_065e5dd8,0);
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(uVar6,uVar6);
      }
      lVar12 = FUN_04c23b44(lVar15,uVar6,*(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x40));
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar20 = FUN_04fa5130(lVar12,0,0);
      _in_stack_00000090 = auVar20;
      uVar13 = FUN_04e5bb90(&stack0x00000090,0);
      if ((uVar13 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined1 (*) [16])(unaff_x19 + 0x20) = _in_stack_00000090;
        if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_030c16cc(unaff_x19 + 2,&stack0x00000090);
        return;
      }
      FUN_04e5bbac(&stack0x00000090,0);
    }
  }
  if ((int)unaff_x26 == 3) {
    _in_stack_00000080 = *(undefined1 (*) [16])(unaff_x19 + 0x24);
    unaff_x26 = 0xffffffff;
    *(undefined8 *)(unaff_x19 + 0x24) = 0;
    *(undefined8 *)(unaff_x19 + 0x26) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar12 = FUN_054dabfc(lVar15,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(unaff_x19 + 0xc),0)
    ;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar20 = FUN_0404bcb8(lVar12,0,*(undefined8 *)PTR_DAT_065e1788);
    _in_stack_00000080 = auVar20;
    uVar13 = FUN_044a8fc8(&stack0x00000080,*(undefined8 *)PTR_DAT_065e1780);
    if ((uVar13 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0x24) = _in_stack_00000080;
      if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b0a98(unaff_x19 + 2,&stack0x00000080);
      return;
    }
  }
  lVar12 = FUN_044a9014(&stack0x00000080,*(undefined8 *)PTR_DAT_065e1778);
  *(long *)(unaff_x19 + 0x18) = lVar12;
  iVar17 = (int)unaff_x26;
  if (lVar12 != 0) {
    if (199 < *(int *)(lVar12 + 0x20) - 200U) {
      in_stack_000000b8._4_4_ = unaff_x19[0x13];
      unaff_x19[0x13] = in_stack_000000b8._4_4_ + -1;
    }
    if (*(char *)(unaff_x19 + 0xe) != '\0') {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar11 = *(uint *)(lVar15 + 0x6c);
      if ((uVar11 >> 3 & 1) != 0) {
        plVar19 = *(long **)(lVar15 + 0x58);
        plVar18 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,3);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar12 = *(long *)(unaff_x19 + 0x10);
        if (lVar12 != 0) {
          lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
          if (lVar7 == 0) {
            uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar6,0);
          }
        }
        if ((int)plVar18[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar18[4] = lVar12;
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        in_stack_00000040 =
             CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
        lVar12 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
        if (lVar12 != 0) {
          lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
          if (lVar7 == 0) {
            uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar6,0);
          }
        }
        if (*(uint *)(plVar18 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar18[5] = lVar12;
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar12 = FUN_054df784(*(long *)(unaff_x19 + 0x18),0);
        if (lVar12 != 0) {
          lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
          if (lVar7 == 0) {
            uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar6,0);
          }
        }
        if (*(uint *)(plVar18 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar18[6] = lVar12;
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar12 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        uVar6 = *(undefined8 *)PTR_DAT_065e5df8;
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065e39d8) {
              puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_04c25f00;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar19,*(long *)PTR_DAT_065e39d8,3);
LAB_04c25f00:
        (*(code *)*puVar5)(plVar19,uVar6,plVar18,puVar5[1]);
        uVar11 = *(uint *)(lVar15 + 0x6c);
      }
      if ((uVar11 >> 4 & 1) != 0) {
        uVar6 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e5de0,*(undefined8 *)(unaff_x19 + 0x10),
                             *(undefined8 *)PTR_DAT_065e5df0,0);
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar8 = FUN_054d8134(*(long *)(unaff_x19 + 0x18),0);
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar12 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38);
        if (lVar12 == 0) {
          uVar9 = 0;
        }
        else {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar9 = FUN_054d80d0(lVar12,0);
        }
        FUN_04c23704(lVar15,uVar6,uVar8,uVar9);
        uVar11 = *(uint *)(lVar15 + 0x6c);
      }
      if ((uVar11 >> 5 & 1) != 0) {
        uVar6 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e5de0,*(undefined8 *)(unaff_x19 + 0x10),
                             *(undefined8 *)PTR_DAT_065e5dd8,0);
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c(uVar6,uVar6);
        }
        lVar12 = FUN_04c23b44(lVar15,uVar6,*(undefined8 *)(*(long *)(unaff_x19 + 0x18) + 0x38));
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar20 = FUN_04fa5130(lVar12,0,0);
        _in_stack_00000090 = auVar20;
        uVar13 = FUN_04e5bb90(&stack0x00000090,0);
        if ((uVar13 & 1) == 0) {
          *unaff_x19 = 5;
          *(undefined1 (*) [16])(unaff_x19 + 0x20) = _in_stack_00000090;
          if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_030c16cc(unaff_x19 + 2,&stack0x00000090);
          return;
        }
        FUN_04e5bbac(&stack0x00000090,0);
      }
    }
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar13 = FUN_054df770(*(long *)(unaff_x19 + 0x18),0);
    if ((uVar13 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar6 = *(undefined8 *)(lVar15 + 0x20);
      in_stack_000000a8._4_1_ = 0;
      FUN_04f951b8(uVar6,(long)&stack0x000000a8 + 4,0);
      lVar12 = FUN_033fb070(*(undefined8 *)(lVar15 + 0x38),*(undefined8 *)PTR_DAT_065e5d00);
      if ((iVar17 < 0) && (in_stack_000000a8._4_1_ != 0)) {
        thunk_FUN_02c6fbb4(uVar6,0);
      }
      uVar13 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1480,
                            &stack0x00000058,*(undefined8 *)PTR_DAT_065e5d70);
      if ((uVar13 & 1) != 0) {
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_039685d0(lVar12,in_stack_00000058,*(undefined8 *)PTR_DAT_065e5d88);
      }
      lVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5d58);
      FUN_04f7383c(lVar7,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(unaff_x19 + 10);
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
      iVar1 = unaff_x19[0x12];
      *(int *)(lVar7 + 0x20) = iVar1;
      *(int *)(lVar7 + 0x24) = iVar1 - unaff_x19[0x13];
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(unaff_x19 + 0xc);
      *(long *)(unaff_x19 + 0x34) = lVar7;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_03968dbc(&stack0x00000028,lVar12,*(undefined8 *)PTR_DAT_065e5da0);
      in_stack_00000048 = in_stack_00000030;
      in_stack_00000040 = in_stack_00000028;
      in_stack_00000050 = in_stack_00000038;
      *(undefined8 *)(unaff_x19 + 0x3a) = in_stack_00000038;
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000030;
      *(undefined8 *)(unaff_x19 + 0x36) = in_stack_00000028;
      if (iVar17 != 6) goto LAB_04c26d5c;
      unaff_x26 = 6;
      do {
        if ((int)unaff_x26 == 6) {
          _in_stack_00000060 = *(undefined1 (*) [16])(unaff_x19 + 0x30);
          unaff_x26 = 0xffffffff;
          *(undefined8 *)(unaff_x19 + 0x30) = 0;
          *(undefined8 *)(unaff_x19 + 0x32) = 0;
          *unaff_x19 = 0xffffffff;
        }
        else {
          *(undefined1 *)(unaff_x19 + 0x3c) = *(undefined1 *)(unaff_x19 + 0x2e);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar12 = *plVar16;
          uVar6 = *(undefined8 *)(unaff_x19 + 0x34);
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065e5ca0) {
                puVar5 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_04c26cec;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar5 = (undefined8 *)FUN_02ce0a7c(plVar16,*(long *)PTR_DAT_065e5ca0,0);
LAB_04c26cec:
          lVar12 = (*(code *)*puVar5)(plVar16,uVar6,puVar5[1]);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          auVar20 = FUN_04046650(lVar12,0,*(undefined8 *)PTR_DAT_065e1be8);
          _in_stack_00000060 = auVar20;
          uVar13 = FUN_044a8b38(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1be0);
          if ((uVar13 & 1) == 0) {
            *unaff_x19 = 6;
            *(undefined1 (*) [16])(unaff_x19 + 0x30) = _in_stack_00000060;
            if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            FUN_030a982c(unaff_x19 + 2,&stack0x00000060);
            return;
          }
        }
        in_stack_000000a8._4_1_ = FUN_044a8b84(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1bd8);
        in_stack_000000a8._4_1_ = in_stack_000000a8._4_1_ & 1;
        *(byte *)(unaff_x19 + 0x2e) = *(byte *)(unaff_x19 + 0x3c) | in_stack_000000a8._4_1_;
LAB_04c26d5c:
        uVar13 = FUN_0481f4e4(unaff_x19 + 0x36,*(undefined8 *)PTR_DAT_065e5d20);
        if ((uVar13 & 1) == 0) goto code_r0x04c26d74;
        plVar16 = *(long **)(unaff_x19 + 0x3a);
      } while( true );
    }
    unaff_x19[0x13] = 0;
    goto LAB_04c271fc;
  }
  in_stack_000000b8._4_4_ = unaff_x19[0x13];
  unaff_x19[0x13] = in_stack_000000b8._4_4_ + -1;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar6 = *(undefined8 *)(lVar15 + 0x28);
  in_stack_000000a8._4_1_ = 0;
  FUN_04f951b8(uVar6,(long)&stack0x000000a8 + 4,0);
  lVar12 = FUN_033fb070(*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)PTR_DAT_065e5cf0);
  if ((iVar17 < 0) && (in_stack_000000a8._4_1_ != 0)) {
    thunk_FUN_02c6fbb4(uVar6,0);
  }
  uVar13 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1468,
                        &stack0x00000078,*(undefined8 *)PTR_DAT_065e5d68);
  if ((uVar13 & 1) == 0) {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_039685d0(lVar12,in_stack_00000078,*(undefined8 *)PTR_DAT_065e5d90);
  }
  FUN_03968dbc(&stack0x00000028,lVar12,*(undefined8 *)PTR_DAT_065e5da8);
  in_stack_00000048 = in_stack_00000030;
  in_stack_00000040 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x2c) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x2a) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000028;
  if (iVar17 != 4) {
    bVar3 = 0;
    goto LAB_04c26884;
  }
  _in_stack_00000060 = *(undefined1 (*) [16])(unaff_x19 + 0x30);
  unaff_x26 = 0xffffffff;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x32) = 0;
  *unaff_x19 = 0xffffffff;
  while( true ) {
    in_stack_000000a8._4_1_ = FUN_044a8b84(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1bd8);
    in_stack_000000a8._4_1_ = in_stack_000000a8._4_1_ & 1;
    bVar3 = *(byte *)(unaff_x19 + 0x2e) | in_stack_000000a8._4_1_;
LAB_04c26884:
    uVar13 = FUN_0481f4e4(unaff_x19 + 0x28,*(undefined8 *)PTR_DAT_065e5d30);
    if ((uVar13 & 1) == 0) break;
    *(byte *)(unaff_x19 + 0x2e) = bVar3 & 1;
    plVar18 = *(long **)(unaff_x19 + 0x2c);
    lVar12 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5d50);
    FUN_04f7383c(lVar12,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(unaff_x19 + 0x16);
    iVar17 = unaff_x19[0x12];
    *(int *)(lVar12 + 0x20) = iVar17;
    *(int *)(lVar12 + 0x24) = iVar17 - unaff_x19[0x13];
    *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(unaff_x19 + 0xc);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar7 = *plVar18;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065e5d80) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_04c26810;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)PTR_DAT_065e5d80,0);
LAB_04c26810:
    lVar12 = (*(code *)*puVar5)(plVar18,lVar12,puVar5[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar20 = FUN_04046650(lVar12,0,*(undefined8 *)PTR_DAT_065e1be8);
    _in_stack_00000060 = auVar20;
    uVar13 = FUN_044a8b38(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1be0);
    if ((uVar13 & 1) == 0) {
      *unaff_x19 = 4;
      *(undefined1 (*) [16])(unaff_x19 + 0x30) = _in_stack_00000060;
      if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030a982c(unaff_x19 + 2,&stack0x00000060);
      return;
    }
  }
  if ((int)unaff_x26 < 0) {
    FUN_0481f4e0(unaff_x19 + 0x28,*(undefined8 *)PTR_DAT_065e5d18);
  }
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x2a) = 0;
  *(undefined8 *)(unaff_x19 + 0x2c) = 0;
  if (bVar3 == 0) {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar18 = *(long **)(lVar15 + 0x58);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x16);
    uVar6 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
    plVar16 = (long *)FUN_02ce7ad4(uVar6,1);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar15 = *(long *)(unaff_x19 + 0x10);
    if (lVar15 != 0) {
      lVar12 = thunk_FUN_02cea798(lVar15,*(undefined8 *)(*plVar16 + 0x40));
      if (lVar12 == 0) {
        uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar6,0);
      }
    }
    if ((int)plVar16[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar16[4] = lVar15;
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar15 = thunk_FUN_02c7737c(PTR_DAT_065e39d8);
    uVar6 = thunk_FUN_02c7737c(PTR_DAT_065e5e28);
    lVar12 = *plVar18;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 == 0) goto LAB_04c26b44;
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    goto LAB_04c26b2c;
  }
  if (*(char *)(unaff_x19 + 0xe) != '\0') {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if ((*(byte *)(lVar15 + 0x6c) >> 6 & 1) != 0) {
      plVar19 = *(long **)(lVar15 + 0x58);
      plVar18 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar12 = *(long *)(unaff_x19 + 0x10);
      if (lVar12 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar7 == 0) {
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
      }
      if ((int)plVar18[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar18[4] = lVar12;
      plVar10 = *(long **)(unaff_x19 + 0x16);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar12 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
      if (lVar12 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar7 == 0) {
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
      }
      if (*(uint *)(plVar18 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar18[5] = lVar12;
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar12 = *plVar19;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar6 = *(undefined8 *)PTR_DAT_065e5e10;
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto LAB_04c26a2c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar19,*(long *)PTR_DAT_065e39d8,3);
LAB_04c26a2c:
      (*(code *)*puVar5)(plVar19,uVar6,plVar18,puVar5[1]);
    }
  }
  goto LAB_04c271fc;
code_r0x04c26d74:
  if ((int)unaff_x26 < 0) {
    FUN_0481f4e0(unaff_x19 + 0x36,*(undefined8 *)PTR_DAT_065e5d08);
  }
  *(undefined8 *)(unaff_x19 + 0x36) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x3a) = 0;
  *(undefined1 *)(unaff_x19 + 0x3c) = *(undefined1 *)(unaff_x19 + 0x2e);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar12 = FUN_04c23ea8(lVar15,*(undefined8 *)(unaff_x19 + 0x34));
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar20 = FUN_04046650(lVar12,0,*(undefined8 *)PTR_DAT_065e1be8);
  _in_stack_00000060 = auVar20;
  uVar13 = FUN_044a8b38(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1be0);
  if ((uVar13 & 1) == 0) {
    *unaff_x19 = 7;
    *(undefined1 (*) [16])(unaff_x19 + 0x30) = _in_stack_00000060;
    if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030a982c(unaff_x19 + 2,&stack0x00000060);
    return;
  }
  uVar6 = FUN_044a8b84(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1bd8);
  uVar11 = (uint)uVar6 & 1;
  in_stack_000000a8._4_1_ = (byte)uVar11;
  uVar11 = *(byte *)(unaff_x19 + 0x3c) | uVar11;
  *(char *)(unaff_x19 + 0x2e) = (char)uVar11;
  if (uVar11 == 0) {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(char *)(lVar15 + 0x68) != '\0') {
      uVar13 = FUN_04c240c8(uVar6,*(undefined8 *)(unaff_x19 + 0x18));
      if ((uVar13 & 1) != 0) {
        in_stack_000000b8._4_4_ = unaff_x19[0x14];
        unaff_x19[0x14] = in_stack_000000b8._4_4_ + -1;
        if (in_stack_000000b8._4_4_ == 0) {
          unaff_x19[0x13] = 0;
        }
        *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        if ((*(char *)(unaff_x19 + 0xe) != '\0') && ((*(byte *)(lVar15 + 0x6c) >> 6 & 1) != 0)) {
          plVar19 = *(long **)(lVar15 + 0x58);
          plVar18 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar12 = *(long *)(unaff_x19 + 0x10);
          if (lVar12 != 0) {
            lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
            if (lVar7 == 0) {
              uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar6,0);
            }
          }
          if ((int)plVar18[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar18[4] = lVar12;
          if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar12 = FUN_054d8134(*(long *)(unaff_x19 + 0x18),0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar12 = FUN_054eaf68(lVar12,0);
          if (lVar12 != 0) {
            lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
            if (lVar7 == 0) {
              uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar6,0);
            }
          }
          if (*(uint *)(plVar18 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar18[5] = lVar12;
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar12 = *plVar19;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          uVar6 = *(undefined8 *)PTR_DAT_065e5e20;
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065e39d8) {
                puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                goto LAB_04c27378;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar5 = (undefined8 *)FUN_02ce0a7c(plVar19,*(long *)PTR_DAT_065e39d8,3);
LAB_04c27378:
          (*(code *)*puVar5)(plVar19,uVar6,plVar18,puVar5[1]);
        }
        goto LAB_04c271f8;
      }
    }
    if ((*(char *)(unaff_x19 + 0xe) != '\0') && ((*(byte *)(lVar15 + 0x6c) >> 6 & 1) != 0)) {
      plVar19 = *(long **)(lVar15 + 0x58);
      plVar18 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar12 = *(long *)(unaff_x19 + 0x10);
      if (lVar12 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar7 == 0) {
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
      }
      if ((int)plVar18[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar18[4] = lVar12;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      in_stack_00000040 =
           CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
      lVar12 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
      if (lVar12 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar7 == 0) {
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
      }
      if (*(uint *)(plVar18 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar18[5] = lVar12;
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar12 = *plVar19;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar6 = *(undefined8 *)PTR_DAT_065e5e08;
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto LAB_04c271e0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar19,*(long *)PTR_DAT_065e39d8,3);
LAB_04c271e0:
      (*(code *)*puVar5)(plVar19,uVar6,plVar18,puVar5[1]);
    }
    unaff_x19[0x13] = 0;
  }
  else if (*(char *)(unaff_x19 + 0xe) != '\0') {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if ((*(byte *)(lVar15 + 0x6c) >> 6 & 1) != 0) {
      plVar19 = *(long **)(lVar15 + 0x58);
      plVar18 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar12 = *(long *)(unaff_x19 + 0x10);
      if (lVar12 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar7 == 0) {
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
      }
      if ((int)plVar18[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar18[4] = lVar12;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      in_stack_00000040 =
           CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
      lVar12 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
      if (lVar12 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar18 + 0x40));
        if (lVar7 == 0) {
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
      }
      if (*(uint *)(plVar18 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar18[5] = lVar12;
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar12 = *plVar19;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar6 = *(undefined8 *)PTR_DAT_065e5dd0;
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto LAB_04c271b8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar19,*(long *)PTR_DAT_065e39d8,3);
LAB_04c271b8:
      (*(code *)*puVar5)(plVar19,uVar6,plVar18,puVar5[1]);
    }
  }
LAB_04c271f8:
  *(undefined8 *)(unaff_x19 + 0x34) = 0;
LAB_04c271fc:
  lVar12 = *(long *)(unaff_x19 + 0x18);
  if ((int)unaff_x19[0x13] < 1) goto code_r0x04c2720c;
  goto LAB_04c25710;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_04c26b2c:
    if (*(long *)(piVar14 + -2) == lVar15) {
      puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
      goto LAB_04c26b68;
    }
  }
LAB_04c26b44:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar18,lVar15,6);
LAB_04c26b68:
  (*(code *)*puVar5)(plVar18,uVar8,uVar6,plVar16,puVar5[1]);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar6 = thunk_FUN_02c7737c(PTR_DAT_065e5e30);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar8,uVar6);
code_r0x04c2720c:
  if (lVar12 == 0) {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar18 = *(long **)(lVar15 + 0x58);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x16);
    uVar6 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
    plVar16 = (long *)FUN_02ce7ad4(uVar6,1);
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar15 = *(long *)(unaff_x19 + 0x10);
    if (lVar15 != 0) {
      lVar12 = thunk_FUN_02cea798(lVar15,*(undefined8 *)(*plVar16 + 0x40));
      if (lVar12 == 0) {
        uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar6,0);
      }
    }
    if ((int)plVar16[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar16[4] = lVar15;
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar15 = thunk_FUN_02c7737c(PTR_DAT_065e39d8);
    uVar6 = thunk_FUN_02c7737c(PTR_DAT_065e5e38);
    lVar12 = *plVar18;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar15) {
          puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
          goto LAB_04c275b4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar18,lVar15,6);
LAB_04c275b4:
    (*(code *)*puVar5)(plVar18,uVar8,uVar6,plVar16,puVar5[1]);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x16);
    uVar6 = thunk_FUN_02c7737c(PTR_DAT_065e5e30);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar8,uVar6);
  }
  bVar3 = FUN_054df770(lVar12,0);
  if ((*(byte *)(unaff_x19 + 0xe) & (bVar3 ^ 0xff) & 1) != 0) {
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if ((*(byte *)(lVar15 + 0x6c) >> 6 & 1) != 0) {
      plVar18 = *(long **)(lVar15 + 0x58);
      plVar16 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar15 = *(long *)(unaff_x19 + 0x10);
      if (lVar15 != 0) {
        lVar12 = thunk_FUN_02cea798(lVar15,*(undefined8 *)(*plVar16 + 0x40));
        if (lVar12 == 0) {
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
      }
      if ((int)plVar16[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar16[4] = lVar15;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      in_stack_00000040 =
           CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
      lVar15 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
      if (lVar15 != 0) {
        lVar12 = thunk_FUN_02cea798(lVar15,*(undefined8 *)(*plVar16 + 0x40));
        if (lVar12 == 0) {
          uVar6 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar6,0);
        }
      }
      if (*(uint *)(plVar16 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar16[5] = lVar15;
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar15 = *plVar18;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
      uVar6 = *(undefined8 *)PTR_DAT_065e5de8;
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar5 = (undefined8 *)(lVar15 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto LAB_04c273a0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar18,*(long *)PTR_DAT_065e39d8,3);
LAB_04c273a0:
      (*(code *)*puVar5)(plVar18,uVar6,plVar16,puVar5[1]);
    }
  }
  uVar6 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x16) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,uVar6,*(undefined8 *)PTR_DAT_065e1790);
  return;
}


