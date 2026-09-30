/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$.ctor
ENTRY_POINT: 04c25820
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c26264) */
/* WARNING: Removing unreachable block (ram,0x04c273fc) */
/* WARNING: Removing unreachable block (ram,0x04c26660) */
/* WARNING: Removing unreachable block (ram,0x04c257b4) */
/* WARNING: Removing unreachable block (ram,0x04c25990) */
/* WARNING: Removing unreachable block (ram,0x04c26094) */
/* WARNING: Removing unreachable block (ram,0x04c265b4) */
/* WARNING: Removing unreachable block (ram,0x04c25850) */
/* WARNING: Removing unreachable block (ram,0x04c2625c) */
/* WARNING: Removing unreachable block (ram,0x04c268d0) */
/* WARNING: Removing unreachable block (ram,0x04c26da0) */
/* WARNING: Removing unreachable block (ram,0x04c26a44) */

void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer___ctor(undefined1 param_1 [16])

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  long *unaff_x23;
  undefined8 uVar12;
  int unaff_w26;
  long *plVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
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
  
  uStack0000000000000048 = param_1._8_8_;
  uStack0000000000000040 = param_1._0_8_;
code_r0x04c25820:
  uStack0000000000000050 = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x1e) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x1c) = uStack0000000000000048;
  *(undefined8 *)(unaff_x19 + 0x1a) = uStack0000000000000040;
  if (unaff_w26 != 0) goto LAB_04c258f8;
  _in_stack_00000090 = *(undefined1 (*) [16])(unaff_x19 + 0x20);
  unaff_w26 = -1;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x22) = 0;
  *unaff_x19 = 0xffffffff;
  while( true ) {
    FUN_04e5bbac(&stack0x00000090,0);
LAB_04c258f8:
    uVar4 = FUN_0481f4e4(unaff_x19 + 0x1a,*(undefined8 *)PTR_DAT_065e5d28);
    if ((uVar4 & 1) == 0) break;
    plVar13 = *(long **)(unaff_x19 + 0x1e);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar9 = *plVar13;
    uVar12 = *(undefined8 *)(unaff_x19 + 10);
    uVar11 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065de2d0) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04c25b20;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065de2d0,0);
LAB_04c25b20:
    lVar9 = (*(code *)*puVar5)(plVar13,uVar12,uVar11,puVar5[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar15 = FUN_04fa5130(lVar9,0,0);
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
  if (unaff_w26 < 0) {
    uVar4 = FUN_0481f4e0(unaff_x19 + 0x1a,*(undefined8 *)PTR_DAT_065e5d10);
  }
  *(undefined8 *)(unaff_x19 + 0x1a) = 0;
  *(undefined8 *)(unaff_x19 + 0x1c) = 0;
  *(undefined8 *)(unaff_x19 + 0x1e) = 0;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_04c23d20(uVar4,*(undefined8 *)(unaff_x19 + 10));
  lVar9 = FUN_04c23dd0();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar15 = FUN_04fa5130(lVar9,0,0);
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
    uVar8 = *(uint *)(unaff_x20 + 0x6c);
    if ((uVar8 & 1) != 0) {
      plVar14 = *(long **)(unaff_x20 + 0x58);
      plVar13 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,3);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = *(long *)(unaff_x19 + 0x10);
      if (lVar9 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar6 == 0) {
          uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar12,0);
        }
      }
      if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar13[4] = lVar9;
      uStack0000000000000040 = CONCAT44(uStack0000000000000040._4_4_,unaff_x19[0x13]);
      lVar9 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c8a08,&stack0x00000040);
      if (lVar9 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar6 == 0) {
          uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar12,0);
        }
      }
      uVar8 = *(uint *)(plVar13 + 3);
      if (uVar8 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar13[5] = lVar9;
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = *(long *)(*(long *)(unaff_x19 + 10) + 0x30);
      if (lVar9 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar6 == 0) {
          uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar12,0);
        }
        uVar8 = *(uint *)(plVar13 + 3);
      }
      if (uVar8 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar13[6] = lVar9;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = *plVar14;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_065e5e00;
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_04c25bac;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c25bac:
      (*(code *)*puVar5)(plVar14,uVar12,plVar13,puVar5[1]);
      uVar8 = *(uint *)(unaff_x20 + 0x6c);
    }
    if ((uVar8 >> 1 & 1) != 0) {
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
      lVar9 = *(long *)(*(long *)(unaff_x19 + 10) + 0x40);
      if (lVar9 != 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_054d80d0(lVar9,0);
      }
      FUN_04c23704();
      uVar8 = *(uint *)(unaff_x20 + 0x6c);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      uVar12 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e5e18,*(undefined8 *)(unaff_x19 + 0x10),
                            *(undefined8 *)PTR_DAT_065e5dd8,0);
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(uVar12,uVar12);
      }
      lVar9 = FUN_04c23b44();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar15 = FUN_04fa5130(lVar9,0,0);
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
    lVar9 = FUN_054dabfc();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar15 = FUN_0404bcb8(lVar9,0,*(undefined8 *)PTR_DAT_065e1788);
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
  lVar9 = FUN_044a9014(&stack0x00000080,*(undefined8 *)PTR_DAT_065e1778);
  *(long *)(unaff_x19 + 0x18) = lVar9;
  if (lVar9 != 0) {
    if (199 < *(int *)(lVar9 + 0x20) - 200U) {
      in_stack_000000b8._4_4_ = unaff_x19[0x13];
      unaff_x19[0x13] = in_stack_000000b8._4_4_ + -1;
    }
    if (*(char *)(unaff_x19 + 0xe) != '\0') {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar8 = *(uint *)(unaff_x20 + 0x6c);
      if ((uVar8 >> 3 & 1) != 0) {
        plVar14 = *(long **)(unaff_x20 + 0x58);
        plVar13 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,3);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar9 = *(long *)(unaff_x19 + 0x10);
        if (lVar9 != 0) {
          lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar6 == 0) {
            uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar12,0);
          }
        }
        if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar13[4] = lVar9;
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uStack0000000000000040 =
             CONCAT44(uStack0000000000000040._4_4_,
                      *(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
        lVar9 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
        if (lVar9 != 0) {
          lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar6 == 0) {
            uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar12,0);
          }
        }
        if (*(uint *)(plVar13 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar13[5] = lVar9;
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar9 = FUN_054df784(*(long *)(unaff_x19 + 0x18),0);
        if (lVar9 != 0) {
          lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar6 == 0) {
            uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar12,0);
          }
        }
        if (*(uint *)(plVar13 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar13[6] = lVar9;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar9 = *plVar14;
        uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
        uVar12 = *(undefined8 *)PTR_DAT_065e5df8;
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_04c25f00;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c25f00:
        (*(code *)*puVar5)(plVar14,uVar12,plVar13,puVar5[1]);
        uVar8 = *(uint *)(unaff_x20 + 0x6c);
      }
      if ((uVar8 >> 4 & 1) != 0) {
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
        lVar9 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38);
        if (lVar9 != 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          FUN_054d80d0(lVar9,0);
        }
        FUN_04c23704();
        uVar8 = *(uint *)(unaff_x20 + 0x6c);
      }
      if ((uVar8 >> 5 & 1) != 0) {
        uVar12 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e5de0,*(undefined8 *)(unaff_x19 + 0x10),
                              *(undefined8 *)PTR_DAT_065e5dd8,0);
        if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c(uVar12,uVar12);
        }
        lVar9 = FUN_04c23b44();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar15 = FUN_04fa5130(lVar9,0,0);
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
      uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
      in_stack_000000a8._4_1_ = 0;
      FUN_04f951b8(uVar12,(long)&stack0x000000a8 + 4,0);
      lVar9 = FUN_033fb070(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)PTR_DAT_065e5d00);
      if ((unaff_w26 < 0) && (in_stack_000000a8._4_1_ != 0)) {
        thunk_FUN_02c6fbb4(uVar12,0);
      }
      uVar4 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1480,
                           &stack0x00000058,*(undefined8 *)PTR_DAT_065e5d70);
      if ((uVar4 & 1) != 0) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_039685d0(lVar9,in_stack_00000058,*(undefined8 *)PTR_DAT_065e5d88);
      }
      lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5d58);
      FUN_04f7383c(lVar6,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(unaff_x19 + 10);
      *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
      iVar1 = unaff_x19[0x12];
      *(int *)(lVar6 + 0x20) = iVar1;
      *(int *)(lVar6 + 0x24) = iVar1 - unaff_x19[0x13];
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(unaff_x19 + 0xc);
      *(long *)(unaff_x19 + 0x34) = lVar6;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_03968dbc(&stack0x00000028,lVar9,*(undefined8 *)PTR_DAT_065e5da0);
      uStack0000000000000048 = in_stack_00000030;
      uStack0000000000000040 = in_stack_00000028;
      uStack0000000000000050 = in_stack_00000038;
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
          lVar9 = *unaff_x23;
          uVar12 = *(undefined8 *)(unaff_x19 + 0x34);
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e5ca0) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_04c26cec;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*(long *)PTR_DAT_065e5ca0,0);
LAB_04c26cec:
          lVar9 = (*(code *)*puVar5)(unaff_x23,uVar12,puVar5[1]);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          auVar15 = FUN_04046650(lVar9,0,*(undefined8 *)PTR_DAT_065e1be8);
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
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  in_stack_000000a8._4_1_ = 0;
  FUN_04f951b8(uVar12,(long)&stack0x000000a8 + 4,0);
  lVar9 = FUN_033fb070(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)PTR_DAT_065e5cf0);
  if ((unaff_w26 < 0) && (in_stack_000000a8._4_1_ != 0)) {
    thunk_FUN_02c6fbb4(uVar12,0);
  }
  uVar4 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1468,
                       &stack0x00000078,*(undefined8 *)PTR_DAT_065e5d68);
  if ((uVar4 & 1) == 0) {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
  }
  else {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_039685d0(lVar9,in_stack_00000078,*(undefined8 *)PTR_DAT_065e5d90);
  }
  FUN_03968dbc(&stack0x00000028,lVar9,*(undefined8 *)PTR_DAT_065e5da8);
  uStack0000000000000048 = in_stack_00000030;
  uStack0000000000000040 = in_stack_00000028;
  uStack0000000000000050 = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x2c) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x2a) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000028;
  if (unaff_w26 != 4) {
    bVar3 = 0;
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
    bVar3 = *(byte *)(unaff_x19 + 0x2e) | in_stack_000000a8._4_1_;
LAB_04c26884:
    uVar4 = FUN_0481f4e4(unaff_x19 + 0x28,*(undefined8 *)PTR_DAT_065e5d30);
    if ((uVar4 & 1) == 0) break;
    *(byte *)(unaff_x19 + 0x2e) = bVar3 & 1;
    plVar13 = *(long **)(unaff_x19 + 0x2c);
    lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5d50);
    FUN_04f7383c(lVar9,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(unaff_x19 + 0x16);
    iVar1 = unaff_x19[0x12];
    *(int *)(lVar9 + 0x20) = iVar1;
    *(int *)(lVar9 + 0x24) = iVar1 - unaff_x19[0x13];
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(unaff_x19 + 0xc);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar6 = *plVar13;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e5d80) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04c26810;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065e5d80,0);
LAB_04c26810:
    lVar9 = (*(code *)*puVar5)(plVar13,lVar9,puVar5[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar15 = FUN_04046650(lVar9,0,*(undefined8 *)PTR_DAT_065e1be8);
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
  if (bVar3 == 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    plVar14 = *(long **)(unaff_x20 + 0x58);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x16);
    uVar12 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
    plVar13 = (long *)FUN_02ce7ad4(uVar12,1);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar9 = *(long *)(unaff_x19 + 0x10);
    if (lVar9 != 0) {
      lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
      if (lVar6 == 0) {
        uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar12,0);
      }
    }
    if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar13[4] = lVar9;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar9 = thunk_FUN_02c7737c(PTR_DAT_065e39d8);
    uVar12 = thunk_FUN_02c7737c(PTR_DAT_065e5e28);
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
      plVar13 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = *(long *)(unaff_x19 + 0x10);
      if (lVar9 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar6 == 0) {
          uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar12,0);
        }
      }
      if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar13[4] = lVar9;
      plVar7 = *(long **)(unaff_x19 + 0x16);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      if (lVar9 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar6 == 0) {
          uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar12,0);
        }
      }
      if (*(uint *)(plVar13 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar13[5] = lVar9;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = *plVar14;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_065e5e10;
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_04c26a2c;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c26a2c:
      (*(code *)*puVar5)(plVar14,uVar12,plVar13,puVar5[1]);
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
  lVar9 = FUN_04c23ea8();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar15 = FUN_04046650(lVar9,0,*(undefined8 *)PTR_DAT_065e1be8);
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
  uVar12 = FUN_044a8b84(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1bd8);
  uVar8 = (uint)uVar12 & 1;
  in_stack_000000a8._4_1_ = (byte)uVar8;
  uVar8 = *(byte *)(unaff_x19 + 0x3c) | uVar8;
  *(char *)(unaff_x19 + 0x2e) = (char)uVar8;
  if (uVar8 == 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(char *)(unaff_x20 + 0x68) != '\0') {
      uVar4 = FUN_04c240c8(uVar12,*(undefined8 *)(unaff_x19 + 0x18));
      if ((uVar4 & 1) != 0) {
        in_stack_000000b8._4_4_ = unaff_x19[0x14];
        unaff_x19[0x14] = in_stack_000000b8._4_4_ + -1;
        if (in_stack_000000b8._4_4_ == 0) {
          unaff_x19[0x13] = 0;
        }
        *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        if ((*(char *)(unaff_x19 + 0xe) != '\0') && ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0)) {
          plVar14 = *(long **)(unaff_x20 + 0x58);
          plVar13 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar9 = *(long *)(unaff_x19 + 0x10);
          if (lVar9 != 0) {
            lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar6 == 0) {
              uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar12,0);
            }
          }
          if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar13[4] = lVar9;
          if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar9 = FUN_054d8134(*(long *)(unaff_x19 + 0x18),0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar9 = FUN_054eaf68(lVar9,0);
          if (lVar9 != 0) {
            lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar6 == 0) {
              uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar12,0);
            }
          }
          if (*(uint *)(plVar13 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar13[5] = lVar9;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar9 = *plVar14;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          uVar12 = *(undefined8 *)PTR_DAT_065e5e20;
          if (uVar4 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_04c27378;
              }
              uVar4 = uVar4 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c27378:
          (*(code *)*puVar5)(plVar14,uVar12,plVar13,puVar5[1]);
        }
        goto LAB_04c271f8;
      }
    }
    if ((*(char *)(unaff_x19 + 0xe) != '\0') && ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0)) {
      plVar14 = *(long **)(unaff_x20 + 0x58);
      plVar13 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = *(long *)(unaff_x19 + 0x10);
      if (lVar9 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar6 == 0) {
          uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar12,0);
        }
      }
      if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar13[4] = lVar9;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uStack0000000000000040 =
           CONCAT44(uStack0000000000000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20)
                   );
      lVar9 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
      if (lVar9 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar6 == 0) {
          uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar12,0);
        }
      }
      if (*(uint *)(plVar13 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar13[5] = lVar9;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = *plVar14;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_065e5e08;
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_04c271e0;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c271e0:
      (*(code *)*puVar5)(plVar14,uVar12,plVar13,puVar5[1]);
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
      plVar13 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = *(long *)(unaff_x19 + 0x10);
      if (lVar9 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar6 == 0) {
          uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar12,0);
        }
      }
      if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar13[4] = lVar9;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uStack0000000000000040 =
           CONCAT44(uStack0000000000000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20)
                   );
      lVar9 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
      if (lVar9 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar6 == 0) {
          uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar12,0);
        }
      }
      if (*(uint *)(plVar13 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar13[5] = lVar9;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = *plVar14;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      uVar12 = *(undefined8 *)PTR_DAT_065e5dd0;
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_04c271b8;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c271b8:
      (*(code *)*puVar5)(plVar14,uVar12,plVar13,puVar5[1]);
    }
  }
LAB_04c271f8:
  *(undefined8 *)(unaff_x19 + 0x34) = 0;
LAB_04c271fc:
  lVar9 = *(long *)(unaff_x19 + 0x18);
  if ((int)unaff_x19[0x13] < 1) {
    if (lVar9 == 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar14 = *(long **)(unaff_x20 + 0x58);
      uVar11 = *(undefined8 *)(unaff_x19 + 0x16);
      uVar12 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
      plVar13 = (long *)FUN_02ce7ad4(uVar12,1);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = *(long *)(unaff_x19 + 0x10);
      if (lVar9 != 0) {
        lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
        if (lVar6 == 0) {
          uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar12,0);
        }
      }
      if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar13[4] = lVar9;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = thunk_FUN_02c7737c(PTR_DAT_065e39d8);
      uVar12 = thunk_FUN_02c7737c(PTR_DAT_065e5e38);
      lVar6 = *plVar14;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 == 0) goto LAB_04c27590;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      goto LAB_04c27578;
    }
    bVar3 = FUN_054df770(lVar9,0);
    if ((*(byte *)(unaff_x19 + 0xe) & (bVar3 ^ 0xff) & 1) == 0) goto LAB_04c273b4;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) == 0) goto LAB_04c273b4;
    plVar14 = *(long **)(unaff_x20 + 0x58);
    plVar13 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar9 = *(long *)(unaff_x19 + 0x10);
    if (lVar9 != 0) {
      lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
      if (lVar6 == 0) {
        uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar12,0);
      }
    }
    if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar13[4] = lVar9;
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uStack0000000000000040 =
         CONCAT44(uStack0000000000000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
    lVar9 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
    if (lVar9 != 0) {
      lVar6 = thunk_FUN_02cea798(lVar9,*(undefined8 *)(*plVar13 + 0x40));
      if (lVar6 == 0) {
        uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar12,0);
      }
    }
    if (*(uint *)(plVar13 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar13[5] = lVar9;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar9 = *plVar14;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    uVar12 = *(undefined8 *)PTR_DAT_065e5de8;
    if (uVar4 == 0) goto LAB_04c27310;
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    goto LAB_04c272f8;
  }
  if (lVar9 != 0) {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_054df824(lVar9,0);
  }
  puVar2 = PTR_DAT_065c89b8;
  *(undefined8 *)(unaff_x19 + 0x16) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04f94794(unaff_x19 + 0xc,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  in_stack_000000a8._4_1_ = 0;
  FUN_04f951b8(uVar12,(long)&stack0x000000a8 + 4,0);
  lVar9 = FUN_033fb070(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)PTR_DAT_065e5cf8);
  if ((unaff_w26 < 0) && (in_stack_000000a8._4_1_ != 0)) {
    thunk_FUN_02c6fbb4(uVar12,0);
  }
  uVar4 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1470,
                       &stack0x000000b0,*(undefined8 *)PTR_DAT_065e5d78);
  if ((uVar4 & 1) == 0) {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
  }
  else {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_039685d0(lVar9,in_stack_000000b0,*(undefined8 *)PTR_DAT_065e5d98);
  }
  FUN_03968dbc(&stack0x00000028,lVar9,*(undefined8 *)PTR_DAT_065e5db0);
  uStack0000000000000040 = in_stack_00000028;
  uStack0000000000000048 = in_stack_00000030;
  goto code_r0x04c25820;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_04c26b2c:
    if (*(long *)(piVar10 + -2) == lVar9) {
      puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 6) * 0x10 + 0x138);
      goto LAB_04c26b68;
    }
  }
LAB_04c26b44:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,lVar9,6);
LAB_04c26b68:
  (*(code *)*puVar5)(plVar14,uVar11,uVar12,plVar13,puVar5[1]);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar12 = thunk_FUN_02c7737c(PTR_DAT_065e5e30);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar11,uVar12);
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_04c27578:
    if (*(long *)(piVar10 + -2) == lVar9) {
      puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 6) * 0x10 + 0x138);
      goto LAB_04c275b4;
    }
  }
LAB_04c27590:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,lVar9,6);
LAB_04c275b4:
  (*(code *)*puVar5)(plVar14,uVar11,uVar12,plVar13,puVar5[1]);
  uVar11 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar12 = thunk_FUN_02c7737c(PTR_DAT_065e5e30);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar11,uVar12);
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_04c272f8:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e39d8) {
      puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 3) * 0x10 + 0x138);
      goto LAB_04c273a0;
    }
  }
LAB_04c27310:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar14,*(long *)PTR_DAT_065e39d8,3);
LAB_04c273a0:
  (*(code *)*puVar5)(plVar14,uVar12,plVar13,puVar5[1]);
LAB_04c273b4:
  uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x16) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,uVar12,*(undefined8 *)PTR_DAT_065e1790);
  return;
}


