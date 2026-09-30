/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$RenderLines
ENTRY_POINT: 04c25e7c
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


/* WARNING: Removing unreachable block (ram,0x04c25850) */
/* WARNING: Removing unreachable block (ram,0x04c2625c) */
/* WARNING: Removing unreachable block (ram,0x04c26660) */
/* WARNING: Removing unreachable block (ram,0x04c26094) */
/* WARNING: Removing unreachable block (ram,0x04c257b4) */
/* WARNING: Removing unreachable block (ram,0x04c273fc) */
/* WARNING: Removing unreachable block (ram,0x04c26264) */
/* WARNING: Removing unreachable block (ram,0x04c26da0) */
/* WARNING: Removing unreachable block (ram,0x04c25990) */
/* WARNING: Removing unreachable block (ram,0x04c265b4) */
/* WARNING: Removing unreachable block (ram,0x04c268d0) */
/* WARNING: Removing unreachable block (ram,0x04c26a44) */

void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__RenderLines
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong in_x9;
  long in_x10;
  int *piVar12;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar13;
  undefined8 uVar14;
  long *unaff_x23;
  undefined8 unaff_x24;
  int unaff_w26;
  long *unaff_x28;
  long *unaff_x29;
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
  
code_r0x04c25e7c:
  piVar12 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar12 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)(*piVar12 + 3) * 0x10 + 0x138);
      goto LAB_04c25f00;
    }
    in_x9 = in_x9 - 1;
    piVar12 = piVar12 + 4;
  } while (in_x9 != 0);
LAB_04c25e98:
  puVar4 = (undefined8 *)FUN_02ce0a7c(unaff_x28,param_3,3);
LAB_04c25f00:
  (*(code *)*puVar4)(unaff_x28,unaff_x24,unaff_x29,puVar4[1]);
  uVar10 = *(uint *)(unaff_x20 + 0x6c);
LAB_04c25f18:
  if ((uVar10 >> 4 & 1) != 0) {
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
    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38);
    if (lVar11 != 0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_054d80d0(lVar11,0);
    }
    FUN_04c23704();
    uVar10 = *(uint *)(unaff_x20 + 0x6c);
  }
  if ((uVar10 >> 5 & 1) != 0) {
    uVar5 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e5de0,*(undefined8 *)(unaff_x19 + 0x10),
                         *(undefined8 *)PTR_DAT_065e5dd8,0);
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar5,uVar5);
    }
    lVar11 = FUN_04c23b44();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar15 = FUN_04fa5130(lVar11,0,0);
    _in_stack_00000090 = auVar15;
    uVar6 = FUN_04e5bb90(&stack0x00000090,0);
    if ((uVar6 & 1) == 0) {
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
LAB_04c26014:
  if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar6 = FUN_054df770(*(long *)(unaff_x19 + 0x18),0);
  if ((uVar6 & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    in_stack_000000a8._4_1_ = 0;
    FUN_04f951b8(uVar5,(long)&stack0x000000a8 + 4,0);
    lVar11 = FUN_033fb070(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)PTR_DAT_065e5d00);
    if ((unaff_w26 < 0) && (in_stack_000000a8._4_1_ != 0)) {
      thunk_FUN_02c6fbb4(uVar5,0);
    }
    uVar6 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1480,
                         &stack0x00000058,*(undefined8 *)PTR_DAT_065e5d70);
    if ((uVar6 & 1) != 0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_039685d0(lVar11,in_stack_00000058,*(undefined8 *)PTR_DAT_065e5d88);
    }
    lVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5d58);
    FUN_04f7383c(lVar9,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
    iVar1 = unaff_x19[0x12];
    *(int *)(lVar9 + 0x20) = iVar1;
    *(int *)(lVar9 + 0x24) = iVar1 - unaff_x19[0x13];
    *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(unaff_x19 + 0xc);
    *(long *)(unaff_x19 + 0x34) = lVar9;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_03968dbc(&stack0x00000028,lVar11,*(undefined8 *)PTR_DAT_065e5da0);
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
        lVar11 = *unaff_x23;
        uVar5 = *(undefined8 *)(unaff_x19 + 0x34);
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065e5ca0) {
              puVar4 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_04c26cec;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*(long *)PTR_DAT_065e5ca0,0);
LAB_04c26cec:
        lVar11 = (*(code *)*puVar4)(unaff_x23,uVar5,puVar4[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        auVar15 = FUN_04046650(lVar11,0,*(undefined8 *)PTR_DAT_065e1be8);
        _in_stack_00000060 = auVar15;
        uVar6 = FUN_044a8b38(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1be0);
        if ((uVar6 & 1) == 0) {
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
      uVar6 = FUN_0481f4e4(unaff_x19 + 0x36,*(undefined8 *)PTR_DAT_065e5d20);
      if ((uVar6 & 1) == 0) goto code_r0x04c26d74;
      unaff_x23 = *(long **)(unaff_x19 + 0x3a);
    } while( true );
  }
  unaff_x19[0x13] = 0;
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
  lVar11 = FUN_04c23ea8();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar15 = FUN_04046650(lVar11,0,*(undefined8 *)PTR_DAT_065e1be8);
  _in_stack_00000060 = auVar15;
  uVar6 = FUN_044a8b38(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1be0);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 7;
    *(undefined1 (*) [16])(unaff_x19 + 0x30) = _in_stack_00000060;
    if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030a982c(unaff_x19 + 2,&stack0x00000060);
    return;
  }
  uVar5 = FUN_044a8b84(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1bd8);
  uVar10 = (uint)uVar5 & 1;
  in_stack_000000a8._4_1_ = (byte)uVar10;
  uVar10 = *(byte *)(unaff_x19 + 0x3c) | uVar10;
  *(char *)(unaff_x19 + 0x2e) = (char)uVar10;
  if (uVar10 == 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(char *)(unaff_x20 + 0x68) != '\0') {
      uVar6 = FUN_04c240c8(uVar5,*(undefined8 *)(unaff_x19 + 0x18));
      if ((uVar6 & 1) != 0) {
        in_stack_000000b8._4_4_ = unaff_x19[0x14];
        unaff_x19[0x14] = in_stack_000000b8._4_4_ + -1;
        if (in_stack_000000b8._4_4_ == 0) {
          unaff_x19[0x13] = 0;
        }
        *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        if ((*(char *)(unaff_x19 + 0xe) != '\0') && ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0)) {
          plVar13 = *(long **)(unaff_x20 + 0x58);
          plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar11 = *(long *)(unaff_x19 + 0x10);
          if (lVar11 != 0) {
            lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar9 == 0) {
              uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar5,0);
            }
          }
          if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar8[4] = lVar11;
          if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar11 = FUN_054d8134(*(long *)(unaff_x19 + 0x18),0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar11 = FUN_054eaf68(lVar11,0);
          if (lVar11 != 0) {
            lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar9 == 0) {
              uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar5,0);
            }
          }
          if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar8[5] = lVar11;
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar11 = *plVar13;
          uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
          uVar5 = *(undefined8 *)PTR_DAT_065e5e20;
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065e39d8) {
                puVar4 = (undefined8 *)(lVar11 + (long)(*piVar12 + 3) * 0x10 + 0x138);
                goto LAB_04c27378;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065e39d8,3);
LAB_04c27378:
          (*(code *)*puVar4)(plVar13,uVar5,plVar8,puVar4[1]);
        }
        goto LAB_04c271f8;
      }
    }
    if ((*(char *)(unaff_x19 + 0xe) != '\0') && ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0)) {
      plVar13 = *(long **)(unaff_x20 + 0x58);
      plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *(long *)(unaff_x19 + 0x10);
      if (lVar11 != 0) {
        lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar8[4] = lVar11;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      in_stack_00000040 =
           CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
      lVar11 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
      if (lVar11 != 0) {
        lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar8[5] = lVar11;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar5 = *(undefined8 *)PTR_DAT_065e5e08;
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar12 + 3) * 0x10 + 0x138);
            goto LAB_04c271e0;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065e39d8,3);
LAB_04c271e0:
      (*(code *)*puVar4)(plVar13,uVar5,plVar8,puVar4[1]);
    }
    unaff_x19[0x13] = 0;
  }
  else if (*(char *)(unaff_x19 + 0xe) != '\0') {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0) {
      plVar13 = *(long **)(unaff_x20 + 0x58);
      plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *(long *)(unaff_x19 + 0x10);
      if (lVar11 != 0) {
        lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar8[4] = lVar11;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      in_stack_00000040 =
           CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
      lVar11 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
      if (lVar11 != 0) {
        lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar8[5] = lVar11;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar5 = *(undefined8 *)PTR_DAT_065e5dd0;
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar12 + 3) * 0x10 + 0x138);
            goto LAB_04c271b8;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065e39d8,3);
LAB_04c271b8:
      (*(code *)*puVar4)(plVar13,uVar5,plVar8,puVar4[1]);
    }
  }
LAB_04c271f8:
  *(undefined8 *)(unaff_x19 + 0x34) = 0;
LAB_04c271fc:
  lVar11 = *(long *)(unaff_x19 + 0x18);
  if ((int)unaff_x19[0x13] < 1) {
    if (lVar11 == 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar13 = *(long **)(unaff_x20 + 0x58);
      uVar14 = *(undefined8 *)(unaff_x19 + 0x16);
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
      plVar8 = (long *)FUN_02ce7ad4(uVar5,1);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *(long *)(unaff_x19 + 0x10);
      if (lVar11 != 0) {
        lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar8[4] = lVar11;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = thunk_FUN_02c7737c(PTR_DAT_065e39d8);
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e5e38);
      lVar9 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 == 0) goto LAB_04c27590;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_04c27578;
    }
    bVar3 = FUN_054df770(lVar11,0);
    if ((*(byte *)(unaff_x19 + 0xe) & (bVar3 ^ 0xff) & 1) == 0) goto LAB_04c273b4;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) == 0) goto LAB_04c273b4;
    plVar13 = *(long **)(unaff_x20 + 0x58);
    plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = *(long *)(unaff_x19 + 0x10);
    if (lVar11 != 0) {
      lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
      if (lVar9 == 0) {
        uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar5,0);
      }
    }
    if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar8[4] = lVar11;
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    in_stack_00000040 =
         CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
    lVar11 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
    if (lVar11 != 0) {
      lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
      if (lVar9 == 0) {
        uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar5,0);
      }
    }
    if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar8[5] = lVar11;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = *plVar13;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    uVar5 = *(undefined8 *)PTR_DAT_065e5de8;
    if (uVar6 == 0) goto LAB_04c27310;
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    goto LAB_04c272f8;
  }
  if (lVar11 != 0) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_054df824(lVar11,0);
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
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  in_stack_000000a8._4_1_ = 0;
  FUN_04f951b8(uVar5,(long)&stack0x000000a8 + 4,0);
  lVar11 = FUN_033fb070(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)PTR_DAT_065e5cf8);
  if ((unaff_w26 < 0) && (in_stack_000000a8._4_1_ != 0)) {
    thunk_FUN_02c6fbb4(uVar5,0);
  }
  uVar6 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1470,
                       &stack0x000000b0,*(undefined8 *)PTR_DAT_065e5d78);
  if ((uVar6 & 1) == 0) {
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
    FUN_039685d0(lVar11,in_stack_000000b0,*(undefined8 *)PTR_DAT_065e5d98);
  }
  FUN_03968dbc(&stack0x00000028,lVar11,*(undefined8 *)PTR_DAT_065e5db0);
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
    uVar6 = FUN_0481f4e4(unaff_x19 + 0x1a,*(undefined8 *)PTR_DAT_065e5d28);
    if ((uVar6 & 1) == 0) break;
    plVar8 = *(long **)(unaff_x19 + 0x1e);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar11 = *plVar8;
    uVar5 = *(undefined8 *)(unaff_x19 + 10);
    uVar14 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065de2d0) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_04c25b20;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065de2d0,0);
LAB_04c25b20:
    lVar11 = (*(code *)*puVar4)(plVar8,uVar5,uVar14,puVar4[1]);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar15 = FUN_04fa5130(lVar11,0,0);
    _in_stack_00000090 = auVar15;
    uVar6 = FUN_04e5bb90(&stack0x00000090,0);
    if ((uVar6 & 1) == 0) {
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
    uVar6 = FUN_0481f4e0(unaff_x19 + 0x1a,*(undefined8 *)PTR_DAT_065e5d10);
  }
  *(undefined8 *)(unaff_x19 + 0x1a) = 0;
  *(undefined8 *)(unaff_x19 + 0x1c) = 0;
  *(undefined8 *)(unaff_x19 + 0x1e) = 0;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_04c23d20(uVar6,*(undefined8 *)(unaff_x19 + 10));
  lVar11 = FUN_04c23dd0();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar15 = FUN_04fa5130(lVar11,0,0);
  _in_stack_00000090 = auVar15;
  uVar6 = FUN_04e5bb90(&stack0x00000090,0);
  if ((uVar6 & 1) == 0) {
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
    uVar10 = *(uint *)(unaff_x20 + 0x6c);
    if ((uVar10 & 1) != 0) {
      plVar13 = *(long **)(unaff_x20 + 0x58);
      plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,3);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *(long *)(unaff_x19 + 0x10);
      if (lVar11 != 0) {
        lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar8[4] = lVar11;
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,unaff_x19[0x13]);
      lVar11 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c8a08,&stack0x00000040);
      if (lVar11 != 0) {
        lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      uVar10 = *(uint *)(plVar8 + 3);
      if (uVar10 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar8[5] = lVar11;
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *(long *)(*(long *)(unaff_x19 + 10) + 0x30);
      if (lVar11 != 0) {
        lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
        uVar10 = *(uint *)(plVar8 + 3);
      }
      if (uVar10 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar8[6] = lVar11;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      uVar5 = *(undefined8 *)PTR_DAT_065e5e00;
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar12 + 3) * 0x10 + 0x138);
            goto LAB_04c25bac;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065e39d8,3);
LAB_04c25bac:
      (*(code *)*puVar4)(plVar13,uVar5,plVar8,puVar4[1]);
      uVar10 = *(uint *)(unaff_x20 + 0x6c);
    }
    if ((uVar10 >> 1 & 1) != 0) {
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
      lVar11 = *(long *)(*(long *)(unaff_x19 + 10) + 0x40);
      if (lVar11 != 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_054d80d0(lVar11,0);
      }
      FUN_04c23704();
      uVar10 = *(uint *)(unaff_x20 + 0x6c);
    }
    if ((uVar10 >> 2 & 1) != 0) {
      uVar5 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e5e18,*(undefined8 *)(unaff_x19 + 0x10),
                           *(undefined8 *)PTR_DAT_065e5dd8,0);
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(uVar5,uVar5);
      }
      lVar11 = FUN_04c23b44();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar15 = FUN_04fa5130(lVar11,0,0);
      _in_stack_00000090 = auVar15;
      uVar6 = FUN_04e5bb90(&stack0x00000090,0);
      if ((uVar6 & 1) == 0) {
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
    lVar11 = FUN_054dabfc();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar15 = FUN_0404bcb8(lVar11,0,*(undefined8 *)PTR_DAT_065e1788);
    _in_stack_00000080 = auVar15;
    uVar6 = FUN_044a8fc8(&stack0x00000080,*(undefined8 *)PTR_DAT_065e1780);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0x24) = _in_stack_00000080;
      if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b0a98(unaff_x19 + 2,&stack0x00000080);
      return;
    }
  }
  lVar11 = FUN_044a9014(&stack0x00000080,*(undefined8 *)PTR_DAT_065e1778);
  *(long *)(unaff_x19 + 0x18) = lVar11;
  if (lVar11 == 0) {
    in_stack_000000b8._4_4_ = unaff_x19[0x13];
    unaff_x19[0x13] = in_stack_000000b8._4_4_ + -1;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    in_stack_000000a8._4_1_ = 0;
    FUN_04f951b8(uVar5,(long)&stack0x000000a8 + 4,0);
    lVar11 = FUN_033fb070(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)PTR_DAT_065e5cf0);
    if ((unaff_w26 < 0) && (in_stack_000000a8._4_1_ != 0)) {
      thunk_FUN_02c6fbb4(uVar5,0);
    }
    uVar6 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1468,
                         &stack0x00000078,*(undefined8 *)PTR_DAT_065e5d68);
    if ((uVar6 & 1) == 0) {
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
      FUN_039685d0(lVar11,in_stack_00000078,*(undefined8 *)PTR_DAT_065e5d90);
    }
    FUN_03968dbc(&stack0x00000028,lVar11,*(undefined8 *)PTR_DAT_065e5da8);
    in_stack_00000048 = in_stack_00000030;
    in_stack_00000040 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000038;
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
      uVar6 = FUN_0481f4e4(unaff_x19 + 0x28,*(undefined8 *)PTR_DAT_065e5d30);
      if ((uVar6 & 1) == 0) break;
      *(byte *)(unaff_x19 + 0x2e) = bVar3 & 1;
      plVar8 = *(long **)(unaff_x19 + 0x2c);
      lVar11 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5d50);
      FUN_04f7383c(lVar11,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)(unaff_x19 + 10);
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(unaff_x19 + 0x16);
      iVar1 = unaff_x19[0x12];
      *(int *)(lVar11 + 0x20) = iVar1;
      *(int *)(lVar11 + 0x24) = iVar1 - unaff_x19[0x13];
      *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(unaff_x19 + 0xc);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar9 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065e5d80) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_04c26810;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065e5d80,0);
LAB_04c26810:
      lVar11 = (*(code *)*puVar4)(plVar8,lVar11,puVar4[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar15 = FUN_04046650(lVar11,0,*(undefined8 *)PTR_DAT_065e1be8);
      _in_stack_00000060 = auVar15;
      uVar6 = FUN_044a8b38(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1be0);
      if ((uVar6 & 1) == 0) {
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
      plVar13 = *(long **)(unaff_x20 + 0x58);
      uVar14 = *(undefined8 *)(unaff_x19 + 0x16);
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
      plVar8 = (long *)FUN_02ce7ad4(uVar5,1);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *(long *)(unaff_x19 + 0x10);
      if (lVar11 != 0) {
        lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar9 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar8[4] = lVar11;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = thunk_FUN_02c7737c(PTR_DAT_065e39d8);
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e5e28);
      lVar9 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 == 0) goto LAB_04c26b44;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      goto LAB_04c26b2c;
    }
    if (*(char *)(unaff_x19 + 0xe) != '\0') {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0) {
        plVar13 = *(long **)(unaff_x20 + 0x58);
        plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar11 = *(long *)(unaff_x19 + 0x10);
        if (lVar11 != 0) {
          lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) {
            uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar5,0);
          }
        }
        if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar8[4] = lVar11;
        plVar7 = *(long **)(unaff_x19 + 0x16);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar11 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
        if (lVar11 != 0) {
          lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) {
            uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar5,0);
          }
        }
        if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar8[5] = lVar11;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar11 = *plVar13;
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        uVar5 = *(undefined8 *)PTR_DAT_065e5e10;
        if (uVar6 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065e39d8) {
              puVar4 = (undefined8 *)(lVar11 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_04c26a2c;
            }
            uVar6 = uVar6 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065e39d8,3);
LAB_04c26a2c:
        (*(code *)*puVar4)(plVar13,uVar5,plVar8,puVar4[1]);
      }
    }
    goto LAB_04c271fc;
  }
  if (199 < *(int *)(lVar11 + 0x20) - 200U) {
    in_stack_000000b8._4_4_ = unaff_x19[0x13];
    unaff_x19[0x13] = in_stack_000000b8._4_4_ + -1;
  }
  if (*(char *)(unaff_x19 + 0xe) != '\0') goto code_r0x04c25d70;
  goto LAB_04c26014;
code_r0x04c25d70:
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar10 = *(uint *)(unaff_x20 + 0x6c);
  if ((uVar10 >> 3 & 1) != 0) goto code_r0x04c25d7c;
  goto LAB_04c25f18;
code_r0x04c25d7c:
  unaff_x28 = *(long **)(unaff_x20 + 0x58);
  unaff_x29 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,3);
  if (unaff_x29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar11 = *(long *)(unaff_x19 + 0x10);
  if (lVar11 != 0) {
    lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*unaff_x29 + 0x40));
    if (lVar9 == 0) {
      uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar5,0);
    }
  }
  if ((int)unaff_x29[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  unaff_x29[4] = lVar11;
  if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  in_stack_00000040 =
       CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
  lVar11 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
  if (lVar11 != 0) {
    lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*unaff_x29 + 0x40));
    if (lVar9 == 0) {
      uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar5,0);
    }
  }
  if (*(uint *)(unaff_x29 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  unaff_x29[5] = lVar11;
  if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar11 = FUN_054df784(*(long *)(unaff_x19 + 0x18),0);
  if (lVar11 != 0) {
    lVar9 = thunk_FUN_02cea798(lVar11,*(undefined8 *)(*unaff_x29 + 0x40));
    if (lVar9 == 0) {
      uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar5,0);
    }
  }
  if (*(uint *)(unaff_x29 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  unaff_x29[6] = lVar11;
  if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  param_1 = *unaff_x28;
  param_3 = *(long *)PTR_DAT_065e39d8;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  unaff_x24 = *(undefined8 *)PTR_DAT_065e5df8;
  if (in_x9 != 0) goto code_r0x04c25e78;
  goto LAB_04c25e98;
code_r0x04c25e78:
  in_x10 = *(long *)(param_1 + 0xb0);
  goto code_r0x04c25e7c;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar12 + 4;
    if (uVar6 == 0) break;
LAB_04c27578:
    if (*(long *)(piVar12 + -2) == lVar11) {
      puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 6) * 0x10 + 0x138);
      goto LAB_04c275b4;
    }
  }
LAB_04c27590:
  puVar4 = (undefined8 *)FUN_02ce0a7c(plVar13,lVar11,6);
LAB_04c275b4:
  (*(code *)*puVar4)(plVar13,uVar14,uVar5,plVar8,puVar4[1]);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e5e30);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar14,uVar5);
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar12 + 4;
    if (uVar6 == 0) break;
LAB_04c272f8:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_065e39d8) {
      puVar4 = (undefined8 *)(lVar11 + (long)(*piVar12 + 3) * 0x10 + 0x138);
      goto LAB_04c273a0;
    }
  }
LAB_04c27310:
  puVar4 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065e39d8,3);
LAB_04c273a0:
  (*(code *)*puVar4)(plVar13,uVar5,plVar8,puVar4[1]);
LAB_04c273b4:
  uVar5 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x16) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(unaff_x19 + 2,uVar5,*(undefined8 *)PTR_DAT_065e1790);
  return;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar12 + 4;
    if (uVar6 == 0) break;
LAB_04c26b2c:
    if (*(long *)(piVar12 + -2) == lVar11) {
      puVar4 = (undefined8 *)(lVar9 + (long)(*piVar12 + 6) * 0x10 + 0x138);
      goto LAB_04c26b68;
    }
  }
LAB_04c26b44:
  puVar4 = (undefined8 *)FUN_02ce0a7c(plVar13,lVar11,6);
LAB_04c26b68:
  (*(code *)*puVar4)(plVar13,uVar14,uVar5,plVar8,puVar4[1]);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e5e30);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar14,uVar5);
}


