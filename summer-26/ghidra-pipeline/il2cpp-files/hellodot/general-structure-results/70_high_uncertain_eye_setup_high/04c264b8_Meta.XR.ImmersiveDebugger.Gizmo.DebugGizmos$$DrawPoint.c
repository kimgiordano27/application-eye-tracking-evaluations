/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawPoint
ENTRY_POINT: 04c264b8
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


/* WARNING: Removing unreachable block (ram,0x04c25850) */
/* WARNING: Removing unreachable block (ram,0x04c265b4) */
/* WARNING: Removing unreachable block (ram,0x04c26094) */
/* WARNING: Removing unreachable block (ram,0x04c257b4) */
/* WARNING: Removing unreachable block (ram,0x04c26264) */
/* WARNING: Removing unreachable block (ram,0x04c26660) */
/* WARNING: Removing unreachable block (ram,0x04c268d0) */
/* WARNING: Removing unreachable block (ram,0x04c26da0) */
/* WARNING: Removing unreachable block (ram,0x04c26a44) */
/* WARNING: Removing unreachable block (ram,0x04c273fc) */

void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPoint(ulong param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  long *unaff_x23;
  int iVar12;
  undefined8 uVar13;
  int unaff_w26;
  long *plVar14;
  long unaff_x28;
  undefined1 auVar15 [16];
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
  
  iVar12 = 0;
  if (-1 < unaff_w26) goto LAB_04c25984;
code_r0x04c25970:
  param_1 = FUN_0481f4e0(unaff_x19 + 0x1a,*(undefined8 *)PTR_DAT_065e5d10);
LAB_04c25984:
  if (unaff_x28 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02cbedc4(unaff_x28);
  }
  if ((iVar12 != 0x1c) && (iVar12 != 0)) {
    return;
  }
  *(undefined8 *)(unaff_x19 + 0x1a) = 0;
  *(undefined8 *)(unaff_x19 + 0x1c) = 0;
  *(undefined8 *)(unaff_x19 + 0x1e) = 0;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_04c23d20(param_1,*(undefined8 *)(unaff_x19 + 10));
  lVar3 = FUN_04c23dd0();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar15 = FUN_04fa5130(lVar3,0,0);
  _in_stack_00000090 = auVar15;
  uVar4 = FUN_04e5bb90(&stack0x00000090,0);
  if ((uVar4 & 1) == 0) {
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
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar9 = *(uint *)(unaff_x20 + 0x6c);
    if ((uVar9 & 1) != 0) {
      plVar14 = *(long **)(unaff_x20 + 0x58);
      plVar5 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,3);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) {
          uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar13,0);
        }
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar5[4] = lVar3;
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,unaff_x19[0x13]);
      lVar3 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c8a08,&stack0x00000040);
      if (lVar3 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) {
          uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar13,0);
        }
      }
      uVar9 = *(uint *)(plVar5 + 3);
      if (uVar9 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar5[5] = lVar3;
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *(long *)(*(long *)(unaff_x19 + 10) + 0x30);
      if (lVar3 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) {
          uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar13,0);
        }
        uVar9 = *(uint *)(plVar5 + 3);
      }
      if (uVar9 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar5[6] = lVar3;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *plVar14;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uVar13 = *(undefined8 *)PTR_DAT_065e5e00;
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_04c25bac;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c25bac:
      (*(code *)*puVar7)(plVar14,uVar13,plVar5,puVar7[1]);
      uVar9 = *(uint *)(unaff_x20 + 0x6c);
    }
    if ((uVar9 >> 1 & 1) != 0) {
      FUN_04db9398(*(undefined8 *)PTR_DAT_065e5e18,*(undefined8 *)(unaff_x19 + 0x10),
                   *(undefined8 *)PTR_DAT_065e5df0,0);
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_054d7998(*(long *)(unaff_x19 + 10),0);
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *(long *)(*(long *)(unaff_x19 + 10) + 0x40);
      if (lVar3 != 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_054d80d0(lVar3,0);
      }
      FUN_04c23704();
      uVar9 = *(uint *)(unaff_x20 + 0x6c);
    }
    if ((uVar9 >> 2 & 1) != 0) {
      uVar13 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e5e18,*(undefined8 *)(unaff_x19 + 0x10),
                            *(undefined8 *)PTR_DAT_065e5dd8,0);
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(uVar13,uVar13);
      }
      lVar3 = FUN_04c23b44();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar15 = FUN_04fa5130(lVar3,0,0);
      _in_stack_00000090 = auVar15;
      uVar4 = FUN_04e5bb90(&stack0x00000090,0);
      if ((uVar4 & 1) == 0) {
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
  if (unaff_w26 == 3) {
    _in_stack_00000080 = *(undefined1 (*) [16])(unaff_x19 + 0x24);
    unaff_w26 = -1;
    *(undefined8 *)(unaff_x19 + 0x24) = 0;
    *(undefined8 *)(unaff_x19 + 0x26) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = FUN_054dabfc();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar15 = FUN_0404bcb8(lVar3,0,*(undefined8 *)PTR_DAT_065e1788);
    _in_stack_00000080 = auVar15;
    uVar4 = FUN_044a8fc8(&stack0x00000080,*(undefined8 *)PTR_DAT_065e1780);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0x24) = _in_stack_00000080;
      if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b0a98(unaff_x19 + 2,&stack0x00000080);
      return;
    }
  }
  lVar3 = FUN_044a9014(&stack0x00000080,*(undefined8 *)PTR_DAT_065e1778);
  *(long *)(unaff_x19 + 0x18) = lVar3;
  if (lVar3 != 0) {
    if (199 < *(int *)(lVar3 + 0x20) - 200U) {
      in_stack_000000b8._4_4_ = unaff_x19[0x13];
      unaff_x19[0x13] = in_stack_000000b8._4_4_ + -1;
    }
    if (*(char *)(unaff_x19 + 0xe) != '\0') {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar9 = *(uint *)(unaff_x20 + 0x6c);
      if ((uVar9 >> 3 & 1) != 0) {
        plVar14 = *(long **)(unaff_x20 + 0x58);
        plVar5 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,3);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 != 0) {
          lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar6 == 0) {
            uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar13,0);
          }
        }
        if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar5[4] = lVar3;
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        in_stack_00000040 =
             CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
        lVar3 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
        if (lVar3 != 0) {
          lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar6 == 0) {
            uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar13,0);
          }
        }
        if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar5[5] = lVar3;
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar3 = FUN_054df784(*(long *)(unaff_x19 + 0x18),0);
        if (lVar3 != 0) {
          lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
          if (lVar6 == 0) {
            uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar13,0);
          }
        }
        if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar5[6] = lVar3;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar3 = *plVar14;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        uVar13 = *(undefined8 *)PTR_DAT_065e5df8;
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
              puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_04c25f00;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c25f00:
        (*(code *)*puVar7)(plVar14,uVar13,plVar5,puVar7[1]);
        uVar9 = *(uint *)(unaff_x20 + 0x6c);
      }
      if ((uVar9 >> 4 & 1) != 0) {
        FUN_04db9398(*(undefined8 *)PTR_DAT_065e5de0,*(undefined8 *)(unaff_x19 + 0x10),
                     *(undefined8 *)PTR_DAT_065e5df0,0);
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_054d8134(*(long *)(unaff_x19 + 0x18),0);
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar3 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38);
        if (lVar3 != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          FUN_054d80d0(lVar3,0);
        }
        FUN_04c23704();
        uVar9 = *(uint *)(unaff_x20 + 0x6c);
      }
      if ((uVar9 >> 5 & 1) != 0) {
        uVar13 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e5de0,*(undefined8 *)(unaff_x19 + 0x10),
                              *(undefined8 *)PTR_DAT_065e5dd8,0);
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c(uVar13,uVar13);
        }
        lVar3 = FUN_04c23b44();
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar15 = FUN_04fa5130(lVar3,0,0);
        _in_stack_00000090 = auVar15;
        uVar4 = FUN_04e5bb90(&stack0x00000090,0);
        if ((uVar4 & 1) == 0) {
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
    uVar4 = FUN_054df770(*(long *)(unaff_x19 + 0x18),0);
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
      in_stack_000000a8._4_1_ = 0;
      FUN_04f951b8(uVar13,(long)&stack0x000000a8 + 4,0);
      lVar3 = FUN_033fb070(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)PTR_DAT_065e5d00);
      if ((unaff_w26 < 0) && (in_stack_000000a8._4_1_ != 0)) {
        thunk_FUN_02c6fbb4(uVar13,0);
      }
      uVar4 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1480,
                           &stack0x00000058,*(undefined8 *)PTR_DAT_065e5d70);
      if ((uVar4 & 1) != 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_039685d0(lVar3,in_stack_00000058,*(undefined8 *)PTR_DAT_065e5d88);
      }
      lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5d58);
      FUN_04f7383c(lVar6,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(unaff_x19 + 10);
      *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
      iVar12 = unaff_x19[0x12];
      *(int *)(lVar6 + 0x20) = iVar12;
      *(int *)(lVar6 + 0x24) = iVar12 - unaff_x19[0x13];
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(unaff_x19 + 0xc);
      *(long *)(unaff_x19 + 0x34) = lVar6;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_03968dbc(&stack0x00000028,lVar3,*(undefined8 *)PTR_DAT_065e5da0);
      in_stack_00000048 = in_stack_00000030;
      in_stack_00000040 = in_stack_00000028;
      in_stack_00000050 = in_stack_00000038;
      *(undefined8 *)(unaff_x19 + 0x3a) = in_stack_00000038;
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000030;
      *(undefined8 *)(unaff_x19 + 0x36) = in_stack_00000028;
      if (unaff_w26 != 6) goto LAB_04c26d5c;
      unaff_w26 = 6;
      do {
        if (unaff_w26 == 6) {
          _in_stack_00000060 = *(undefined1 (*) [16])(unaff_x19 + 0x30);
          unaff_w26 = -1;
          *(undefined8 *)(unaff_x19 + 0x30) = 0;
          *(undefined8 *)(unaff_x19 + 0x32) = 0;
          *unaff_x19 = 0xffffffff;
        }
        else {
          *(undefined1 *)(unaff_x19 + 0x3c) = *(undefined1 *)(unaff_x19 + 0x2e);
          if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar3 = *unaff_x23;
          uVar13 = *(undefined8 *)(unaff_x19 + 0x34);
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e5ca0) {
                puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_04c26cec;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*(long *)PTR_DAT_065e5ca0,0);
LAB_04c26cec:
          lVar3 = (*(code *)*puVar7)(unaff_x23,uVar13,puVar7[1]);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          auVar15 = FUN_04046650(lVar3,0,*(undefined8 *)PTR_DAT_065e1be8);
          _in_stack_00000060 = auVar15;
          uVar4 = FUN_044a8b38(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1be0);
          if ((uVar4 & 1) == 0) {
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
        uVar4 = FUN_0481f4e4(unaff_x19 + 0x36,*(undefined8 *)PTR_DAT_065e5d20);
        if ((uVar4 & 1) == 0) goto code_r0x04c26d74;
        unaff_x23 = *(long **)(unaff_x19 + 0x3a);
      } while( true );
    }
    unaff_x19[0x13] = 0;
    goto LAB_04c271fc;
  }
  in_stack_000000b8._4_4_ = unaff_x19[0x13];
  unaff_x19[0x13] = in_stack_000000b8._4_4_ + -1;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  in_stack_000000a8._4_1_ = 0;
  FUN_04f951b8(uVar13,(long)&stack0x000000a8 + 4,0);
  lVar3 = FUN_033fb070(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)PTR_DAT_065e5cf0);
  if ((unaff_w26 < 0) && (in_stack_000000a8._4_1_ != 0)) {
    thunk_FUN_02c6fbb4(uVar13,0);
  }
  uVar4 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1468,
                       &stack0x00000078,*(undefined8 *)PTR_DAT_065e5d68);
  if ((uVar4 & 1) == 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
  }
  else {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_039685d0(lVar3,in_stack_00000078,*(undefined8 *)PTR_DAT_065e5d90);
  }
  FUN_03968dbc(&stack0x00000028,lVar3,*(undefined8 *)PTR_DAT_065e5da8);
  in_stack_00000048 = in_stack_00000030;
  in_stack_00000040 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x2c) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x2a) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000028;
  if (unaff_w26 != 4) {
    bVar2 = 0;
    goto LAB_04c26884;
  }
  _in_stack_00000060 = *(undefined1 (*) [16])(unaff_x19 + 0x30);
  unaff_w26 = -1;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x32) = 0;
  *unaff_x19 = 0xffffffff;
  while( true ) {
    in_stack_000000a8._4_1_ = FUN_044a8b84(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1bd8);
    in_stack_000000a8._4_1_ = in_stack_000000a8._4_1_ & 1;
    bVar2 = *(byte *)(unaff_x19 + 0x2e) | in_stack_000000a8._4_1_;
LAB_04c26884:
    uVar4 = FUN_0481f4e4(unaff_x19 + 0x28,*(undefined8 *)PTR_DAT_065e5d30);
    if ((uVar4 & 1) == 0) break;
    *(byte *)(unaff_x19 + 0x2e) = bVar2 & 1;
    plVar5 = *(long **)(unaff_x19 + 0x2c);
    lVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5d50);
    FUN_04f7383c(lVar3,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(unaff_x19 + 0x16);
    iVar12 = unaff_x19[0x12];
    *(int *)(lVar3 + 0x20) = iVar12;
    *(int *)(lVar3 + 0x24) = iVar12 - unaff_x19[0x13];
    *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(unaff_x19 + 0xc);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e5d80) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04c26810;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065e5d80,0);
LAB_04c26810:
    lVar3 = (*(code *)*puVar7)(plVar5,lVar3,puVar7[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar15 = FUN_04046650(lVar3,0,*(undefined8 *)PTR_DAT_065e1be8);
    _in_stack_00000060 = auVar15;
    uVar4 = FUN_044a8b38(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1be0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 4;
      *(undefined1 (*) [16])(unaff_x19 + 0x30) = _in_stack_00000060;
      if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030a982c(unaff_x19 + 2,&stack0x00000060);
      return;
    }
  }
  if (unaff_w26 < 0) {
    FUN_0481f4e0(unaff_x19 + 0x28,*(undefined8 *)PTR_DAT_065e5d18);
  }
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x2a) = 0;
  *(undefined8 *)(unaff_x19 + 0x2c) = 0;
  if (bVar2 == 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar14 = *(long **)(unaff_x20 + 0x58);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x16);
    uVar13 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
    plVar5 = (long *)FUN_02ce7ad4(uVar13,1);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 != 0) {
      lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) {
        uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar13,0);
      }
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar5[4] = lVar3;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = thunk_FUN_02c7737c(PTR_DAT_065e39d8);
    uVar13 = thunk_FUN_02c7737c(PTR_DAT_065e5e28);
    lVar6 = *plVar14;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 == 0) goto LAB_04c26b44;
    piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    goto LAB_04c26b2c;
  }
  if (*(char *)(unaff_x19 + 0xe) != '\0') {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0) {
      plVar14 = *(long **)(unaff_x20 + 0x58);
      plVar5 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) {
          uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar13,0);
        }
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar5[4] = lVar3;
      plVar8 = *(long **)(unaff_x19 + 0x16);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      if (lVar3 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) {
          uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar13,0);
        }
      }
      if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar5[5] = lVar3;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *plVar14;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uVar13 = *(undefined8 *)PTR_DAT_065e5e10;
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_04c26a2c;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c26a2c:
      (*(code *)*puVar7)(plVar14,uVar13,plVar5,puVar7[1]);
    }
  }
  goto LAB_04c271fc;
code_r0x04c26d74:
  if (unaff_w26 < 0) {
    FUN_0481f4e0(unaff_x19 + 0x36,*(undefined8 *)PTR_DAT_065e5d08);
  }
  *(undefined8 *)(unaff_x19 + 0x36) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x3a) = 0;
  *(undefined1 *)(unaff_x19 + 0x3c) = *(undefined1 *)(unaff_x19 + 0x2e);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar3 = FUN_04c23ea8();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar15 = FUN_04046650(lVar3,0,*(undefined8 *)PTR_DAT_065e1be8);
  _in_stack_00000060 = auVar15;
  uVar4 = FUN_044a8b38(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1be0);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 7;
    *(undefined1 (*) [16])(unaff_x19 + 0x30) = _in_stack_00000060;
    if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030a982c(unaff_x19 + 2,&stack0x00000060);
    return;
  }
  uVar13 = FUN_044a8b84(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1bd8);
  uVar9 = (uint)uVar13 & 1;
  in_stack_000000a8._4_1_ = (byte)uVar9;
  uVar9 = *(byte *)(unaff_x19 + 0x3c) | uVar9;
  *(char *)(unaff_x19 + 0x2e) = (char)uVar9;
  if (uVar9 == 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(char *)(unaff_x20 + 0x68) != '\0') {
      uVar4 = FUN_04c240c8(uVar13,*(undefined8 *)(unaff_x19 + 0x18));
      if ((uVar4 & 1) != 0) {
        in_stack_000000b8._4_4_ = unaff_x19[0x14];
        unaff_x19[0x14] = in_stack_000000b8._4_4_ + -1;
        if (in_stack_000000b8._4_4_ == 0) {
          unaff_x19[0x13] = 0;
        }
        *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        if ((*(char *)(unaff_x19 + 0xe) != '\0') && ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0)) {
          plVar14 = *(long **)(unaff_x20 + 0x58);
          plVar5 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar3 = *(long *)(unaff_x19 + 0x10);
          if (lVar3 != 0) {
            lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar6 == 0) {
              uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar13,0);
            }
          }
          if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar5[4] = lVar3;
          if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar3 = FUN_054d8134(*(long *)(unaff_x19 + 0x18),0);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar3 = FUN_054eaf68(lVar3,0);
          if (lVar3 != 0) {
            lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar6 == 0) {
              uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar13,0);
            }
          }
          if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar5[5] = lVar3;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar3 = *plVar14;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          uVar13 = *(undefined8 *)PTR_DAT_065e5e20;
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
                puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_04c27378;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar7 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c27378:
          (*(code *)*puVar7)(plVar14,uVar13,plVar5,puVar7[1]);
        }
        goto LAB_04c271f8;
      }
    }
    if ((*(char *)(unaff_x19 + 0xe) != '\0') && ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0)) {
      plVar14 = *(long **)(unaff_x20 + 0x58);
      plVar5 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) {
          uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar13,0);
        }
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar5[4] = lVar3;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      in_stack_00000040 =
           CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
      lVar3 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
      if (lVar3 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) {
          uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar13,0);
        }
      }
      if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar5[5] = lVar3;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *plVar14;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uVar13 = *(undefined8 *)PTR_DAT_065e5e08;
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_04c271e0;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c271e0:
      (*(code *)*puVar7)(plVar14,uVar13,plVar5,puVar7[1]);
    }
    unaff_x19[0x13] = 0;
  }
  else if (*(char *)(unaff_x19 + 0xe) != '\0') {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0) {
      plVar14 = *(long **)(unaff_x20 + 0x58);
      plVar5 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) {
          uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar13,0);
        }
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar5[4] = lVar3;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      in_stack_00000040 =
           CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
      lVar3 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
      if (lVar3 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) {
          uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar13,0);
        }
      }
      if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar5[5] = lVar3;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *plVar14;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uVar13 = *(undefined8 *)PTR_DAT_065e5dd0;
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_04c271b8;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c271b8:
      (*(code *)*puVar7)(plVar14,uVar13,plVar5,puVar7[1]);
    }
  }
LAB_04c271f8:
  *(undefined8 *)(unaff_x19 + 0x34) = 0;
LAB_04c271fc:
  lVar3 = *(long *)(unaff_x19 + 0x18);
  if ((int)unaff_x19[0x13] < 1) {
    if (lVar3 == 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar14 = *(long **)(unaff_x20 + 0x58);
      uVar11 = *(undefined8 *)(unaff_x19 + 0x16);
      uVar13 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
      plVar5 = (long *)FUN_02ce7ad4(uVar13,1);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
        if (lVar6 == 0) {
          uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar13,0);
        }
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar5[4] = lVar3;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar3 = thunk_FUN_02c7737c(PTR_DAT_065e39d8);
      uVar13 = thunk_FUN_02c7737c(PTR_DAT_065e5e38);
      lVar6 = *plVar14;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 == 0) goto LAB_04c27590;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_04c27578;
    }
    bVar2 = FUN_054df770(lVar3,0);
    if ((*(byte *)(unaff_x19 + 0xe) & (bVar2 ^ 0xff) & 1) == 0) goto LAB_04c273b4;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) == 0) goto LAB_04c273b4;
    plVar14 = *(long **)(unaff_x20 + 0x58);
    plVar5 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 != 0) {
      lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) {
        uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar13,0);
      }
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar5[4] = lVar3;
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    in_stack_00000040 =
         CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
    lVar3 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
    if (lVar3 != 0) {
      lVar6 = thunk_FUN_02cea798(lVar3,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) {
        uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar13,0);
      }
    }
    if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar5[5] = lVar3;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = *plVar14;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar13 = *(undefined8 *)PTR_DAT_065e5de8;
    if (uVar4 == 0) goto LAB_04c27310;
    piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    goto LAB_04c272f8;
  }
  if (lVar3 != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_054df824(lVar3,0);
  }
  puVar1 = PTR_DAT_065c89b8;
  *(undefined8 *)(unaff_x19 + 0x16) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04f94794(unaff_x19 + 0xc,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  in_stack_000000a8._4_1_ = 0;
  FUN_04f951b8(uVar13,(long)&stack0x000000a8 + 4,0);
  lVar3 = FUN_033fb070(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)PTR_DAT_065e5cf8);
  if ((unaff_w26 < 0) && (in_stack_000000a8._4_1_ != 0)) {
    thunk_FUN_02c6fbb4(uVar13,0);
  }
  uVar4 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1470,
                       &stack0x000000b0,*(undefined8 *)PTR_DAT_065e5d78);
  if ((uVar4 & 1) == 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
  }
  else {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_039685d0(lVar3,in_stack_000000b0,*(undefined8 *)PTR_DAT_065e5d98);
  }
  FUN_03968dbc(&stack0x00000028,lVar3,*(undefined8 *)PTR_DAT_065e5db0);
  in_stack_00000048 = in_stack_00000030;
  in_stack_00000040 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x1e) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0x1a) = in_stack_00000028;
  if (unaff_w26 != 0) goto LAB_04c258f8;
  _in_stack_00000090 = *(undefined1 (*) [16])(unaff_x19 + 0x20);
  unaff_w26 = -1;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x22) = 0;
  *unaff_x19 = 0xffffffff;
  while( true ) {
    FUN_04e5bbac(&stack0x00000090,0);
LAB_04c258f8:
    param_1 = FUN_0481f4e4(unaff_x19 + 0x1a,*(undefined8 *)PTR_DAT_065e5d28);
    if ((param_1 & 1) == 0) break;
    plVar5 = *(long **)(unaff_x19 + 0x1e);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar3 = *plVar5;
    uVar13 = *(undefined8 *)(unaff_x19 + 10);
    uVar11 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065de2d0) {
          puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04c25b20;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar5,*(long *)PTR_DAT_065de2d0,0);
LAB_04c25b20:
    lVar3 = (*(code *)*puVar7)(plVar5,uVar13,uVar11,puVar7[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar15 = FUN_04fa5130(lVar3,0,0);
    _in_stack_00000090 = auVar15;
    uVar4 = FUN_04e5bb90(&stack0x00000090,0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x20) = _in_stack_00000090;
      if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030c16cc(unaff_x19 + 2,&stack0x00000090);
      return;
    }
  }
  unaff_x28 = 0;
  iVar12 = 0x1c;
  if (unaff_w26 < 0) goto code_r0x04c25970;
  goto LAB_04c25984;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_04c26b2c:
    if (*(long *)(piVar10 + -2) == lVar3) {
      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar10 + 6) * 0x10 + 0x138);
      goto LAB_04c26b68;
    }
  }
LAB_04c26b44:
  puVar7 = (undefined8 *)FUN_02ce0a7c(plVar14,lVar3,6);
LAB_04c26b68:
  (*(code *)*puVar7)(plVar14,uVar11,uVar13,plVar5,puVar7[1]);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar13 = thunk_FUN_02c7737c(PTR_DAT_065e5e30);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar11,uVar13);
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_04c27578:
    if (*(long *)(piVar10 + -2) == lVar3) {
      puVar7 = (undefined8 *)(lVar6 + (long)(*piVar10 + 6) * 0x10 + 0x138);
      goto LAB_04c275b4;
    }
  }
LAB_04c27590:
  puVar7 = (undefined8 *)FUN_02ce0a7c(plVar14,lVar3,6);
LAB_04c275b4:
  (*(code *)*puVar7)(plVar14,uVar11,uVar13,plVar5,puVar7[1]);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar13 = thunk_FUN_02c7737c(PTR_DAT_065e5e30);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar11,uVar13);
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_04c272f8:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
      puVar7 = (undefined8 *)(lVar3 + (long)(*piVar10 + 3) * 0x10 + 0x138);
      goto LAB_04c273a0;
    }
  }
LAB_04c27310:
  puVar7 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c273a0:
  (*(code *)*puVar7)(plVar14,uVar13,plVar5,puVar7[1]);
LAB_04c273b4:
  uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x16) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,uVar13,*(undefined8 *)PTR_DAT_065e1790);
  return;
}


