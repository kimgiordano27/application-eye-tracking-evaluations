/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$get_Root
ENTRY_POINT: 04c25450
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


/* WARNING: Removing unreachable block (ram,0x04c26660) */
/* WARNING: Removing unreachable block (ram,0x04c26094) */
/* WARNING: Removing unreachable block (ram,0x04c257b4) */
/* WARNING: Removing unreachable block (ram,0x04c273fc) */
/* WARNING: Removing unreachable block (ram,0x04c26264) */
/* WARNING: Removing unreachable block (ram,0x04c25850) */
/* WARNING: Removing unreachable block (ram,0x04c26da0) */
/* WARNING: Removing unreachable block (ram,0x04c25990) */
/* WARNING: Removing unreachable block (ram,0x04c2625c) */
/* WARNING: Removing unreachable block (ram,0x04c265b4) */
/* WARNING: Removing unreachable block (ram,0x04c268d0) */
/* WARNING: Removing unreachable block (ram,0x04c26a44) */

void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__get_Root(undefined1 param_1 [16])

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar12;
  long *unaff_x23;
  long lVar13;
  int iVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  long lStack0000000000000018;
  long lStack0000000000000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  iVar14 = -1;
  lStack0000000000000018 = 0;
  lStack0000000000000020 = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x32) = 0;
  *unaff_x19 = 0xffffffff;
LAB_04c26dfc:
  _uStack0000000000000060 = param_1;
  uVar5 = FUN_044a8b84(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1bd8);
  uVar9 = (uint)uVar5 & 1;
  in_stack_000000a8._4_1_ = (byte)uVar9;
  uVar9 = *(byte *)(unaff_x19 + 0x3c) | uVar9;
  *(char *)(unaff_x19 + 0x2e) = (char)uVar9;
  if (uVar9 == 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(char *)(unaff_x20 + 0x68) != '\0') {
      uVar10 = FUN_04c240c8(uVar5,*(undefined8 *)(unaff_x19 + 0x18));
      if ((uVar10 & 1) != 0) {
        in_stack_000000b8._4_4_ = unaff_x19[0x14];
        unaff_x19[0x14] = in_stack_000000b8._4_4_ + -1;
        if (in_stack_000000b8._4_4_ == 0) {
          unaff_x19[0x13] = 0;
        }
        *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        if ((*(char *)(unaff_x19 + 0xe) != '\0') && ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0)) {
          plVar15 = *(long **)(unaff_x20 + 0x58);
          plVar6 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar13 = *(long *)(unaff_x19 + 0x10);
          if (lVar13 != 0) {
            lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar7 == 0) {
              uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar5,0);
            }
          }
          if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar6[4] = lVar13;
          if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar13 = FUN_054d8134(*(long *)(unaff_x19 + 0x18),0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar13 = FUN_054eaf68(lVar13,0);
          if (lVar13 != 0) {
            lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar7 == 0) {
              uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
              FUN_02ce7b54(uVar5,0);
            }
          }
          if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar6[5] = lVar13;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar13 = *plVar15;
          uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
          uVar5 = *(undefined8 *)PTR_DAT_065e5e20;
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e39d8) {
                puVar8 = (undefined8 *)(lVar13 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                goto LAB_04c27378;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_02ce0a7c(plVar15,*(long *)PTR_DAT_065e39d8,3);
LAB_04c27378:
          (*(code *)*puVar8)(plVar15,uVar5,plVar6,puVar8[1]);
        }
        goto LAB_04c271f8;
      }
    }
    if ((*(char *)(unaff_x19 + 0xe) != '\0') && ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0)) {
      plVar15 = *(long **)(unaff_x20 + 0x58);
      plVar6 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *(long *)(unaff_x19 + 0x10);
      if (lVar13 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar6[4] = lVar13;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      in_stack_00000040 =
           CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
      lVar13 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
      if (lVar13 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar6[5] = lVar13;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar5 = *(undefined8 *)PTR_DAT_065e5e08;
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_04c271e0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar15,*(long *)PTR_DAT_065e39d8,3);
LAB_04c271e0:
      (*(code *)*puVar8)(plVar15,uVar5,plVar6,puVar8[1]);
    }
    unaff_x19[0x13] = 0;
  }
  else if (*(char *)(unaff_x19 + 0xe) != '\0') {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0) {
      plVar15 = *(long **)(unaff_x20 + 0x58);
      plVar6 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *(long *)(unaff_x19 + 0x10);
      if (lVar13 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar6[4] = lVar13;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      in_stack_00000040 =
           CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
      lVar13 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
      if (lVar13 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar6[5] = lVar13;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar5 = *(undefined8 *)PTR_DAT_065e5dd0;
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_04c271b8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar15,*(long *)PTR_DAT_065e39d8,3);
LAB_04c271b8:
      (*(code *)*puVar8)(plVar15,uVar5,plVar6,puVar8[1]);
    }
  }
LAB_04c271f8:
  *(undefined8 *)(unaff_x19 + 0x34) = 0;
LAB_04c271fc:
  lVar13 = *(long *)(unaff_x19 + 0x18);
  if ((int)unaff_x19[0x13] < 1) {
    if (lVar13 == 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar15 = *(long **)(unaff_x20 + 0x58);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x16);
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
      plVar6 = (long *)FUN_02ce7ad4(uVar5,1);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *(long *)(unaff_x19 + 0x10);
      if (lVar13 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar6[4] = lVar13;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = thunk_FUN_02c7737c(PTR_DAT_065e39d8);
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e5e38);
      lVar7 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 == 0) goto LAB_04c27590;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_04c27578;
    }
    bVar3 = FUN_054df770(lVar13,0);
    if ((*(byte *)(unaff_x19 + 0xe) & (bVar3 ^ 0xff) & 1) == 0) goto LAB_04c273b4;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) == 0) goto LAB_04c273b4;
    plVar15 = *(long **)(unaff_x20 + 0x58);
    plVar6 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar13 = *(long *)(unaff_x19 + 0x10);
    if (lVar13 != 0) {
      lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) {
        uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar5,0);
      }
    }
    if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar6[4] = lVar13;
    if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    in_stack_00000040 =
         CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
    lVar13 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
    if (lVar13 != 0) {
      lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) {
        uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar5,0);
      }
    }
    if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    plVar6[5] = lVar13;
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar13 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    uVar5 = *(undefined8 *)PTR_DAT_065e5de8;
    if (uVar10 == 0) goto LAB_04c27310;
    piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    goto LAB_04c272f8;
  }
  if (lVar13 != 0) {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_054df824(lVar13,0);
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
  lVar13 = FUN_033fb070(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)PTR_DAT_065e5cf8);
  if ((iVar14 < 0) && (in_stack_000000a8._4_1_ != 0)) {
    thunk_FUN_02c6fbb4(uVar5,0);
  }
  uVar10 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1470,
                        &stack0x000000b0,*(undefined8 *)PTR_DAT_065e5d78);
  if ((uVar10 & 1) == 0) {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
  }
  else {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_039685d0(lVar13,in_stack_000000b0,*(undefined8 *)PTR_DAT_065e5d98);
  }
  FUN_03968dbc(&stack0x00000028,lVar13,*(undefined8 *)PTR_DAT_065e5db0);
  in_stack_00000048 = in_stack_00000030;
  in_stack_00000040 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x1e) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0x1a) = in_stack_00000028;
  if (iVar14 != 0) goto LAB_04c258f8;
  _in_stack_00000090 = *(undefined1 (*) [16])(unaff_x19 + 0x20);
  iVar14 = -1;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x22) = 0;
  *unaff_x19 = 0xffffffff;
  while( true ) {
    FUN_04e5bbac(&stack0x00000090,0);
LAB_04c258f8:
    uVar10 = FUN_0481f4e4(unaff_x19 + 0x1a,*(undefined8 *)PTR_DAT_065e5d28);
    if ((uVar10 & 1) == 0) break;
    plVar6 = *(long **)(unaff_x19 + 0x1e);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar13 = *plVar6;
    uVar5 = *(undefined8 *)(unaff_x19 + 10);
    uVar12 = *(undefined8 *)(unaff_x19 + 0xc);
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065de2d0) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04c25b20;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065de2d0,0);
LAB_04c25b20:
    lVar13 = (*(code *)*puVar8)(plVar6,uVar5,uVar12,puVar8[1]);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar16 = FUN_04fa5130(lVar13,0,0);
    _in_stack_00000090 = auVar16;
    uVar10 = FUN_04e5bb90(&stack0x00000090,0);
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x20) = _in_stack_00000090;
      if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030c16cc(unaff_x19 + 2,&stack0x00000090);
      return;
    }
  }
  if (iVar14 < 0) {
    uVar10 = FUN_0481f4e0(unaff_x19 + 0x1a,*(undefined8 *)PTR_DAT_065e5d10);
  }
  *(undefined8 *)(unaff_x19 + 0x1a) = 0;
  *(undefined8 *)(unaff_x19 + 0x1c) = 0;
  *(undefined8 *)(unaff_x19 + 0x1e) = 0;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_04c23d20(uVar10,*(undefined8 *)(unaff_x19 + 10));
  lVar13 = FUN_04c23dd0();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar16 = FUN_04fa5130(lVar13,0,0);
  _in_stack_00000090 = auVar16;
  uVar10 = FUN_04e5bb90(&stack0x00000090,0);
  if ((uVar10 & 1) == 0) {
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
      plVar15 = *(long **)(unaff_x20 + 0x58);
      plVar6 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,3);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *(long *)(unaff_x19 + 0x10);
      if (lVar13 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar6[4] = lVar13;
      in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,unaff_x19[0x13]);
      lVar13 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c8a08,&stack0x00000040);
      if (lVar13 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      uVar9 = *(uint *)(plVar6 + 3);
      if (uVar9 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar6[5] = lVar13;
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *(long *)(*(long *)(unaff_x19 + 10) + 0x30);
      if (lVar13 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
        uVar9 = *(uint *)(plVar6 + 3);
      }
      if (uVar9 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar6[6] = lVar13;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar5 = *(undefined8 *)PTR_DAT_065e5e00;
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_04c25bac;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar15,*(long *)PTR_DAT_065e39d8,3);
LAB_04c25bac:
      (*(code *)*puVar8)(plVar15,uVar5,plVar6,puVar8[1]);
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
      lVar13 = *(long *)(*(long *)(unaff_x19 + 10) + 0x40);
      if (lVar13 != 0) {
        lStack0000000000000020 = lVar13;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_054d80d0(lVar13,0);
      }
      FUN_04c23704();
      uVar9 = *(uint *)(unaff_x20 + 0x6c);
    }
    if ((uVar9 >> 2 & 1) != 0) {
      uVar5 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e5e18,*(undefined8 *)(unaff_x19 + 0x10),
                           *(undefined8 *)PTR_DAT_065e5dd8,0);
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(uVar5,uVar5);
      }
      lVar13 = FUN_04c23b44();
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar16 = FUN_04fa5130(lVar13,0,0);
      _in_stack_00000090 = auVar16;
      uVar10 = FUN_04e5bb90(&stack0x00000090,0);
      if ((uVar10 & 1) == 0) {
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
  if (iVar14 == 3) {
    _in_stack_00000080 = *(undefined1 (*) [16])(unaff_x19 + 0x24);
    iVar14 = -1;
    *(undefined8 *)(unaff_x19 + 0x24) = 0;
    *(undefined8 *)(unaff_x19 + 0x26) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar13 = FUN_054dabfc();
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar16 = FUN_0404bcb8(lVar13,0,*(undefined8 *)PTR_DAT_065e1788);
    _in_stack_00000080 = auVar16;
    uVar10 = FUN_044a8fc8(&stack0x00000080,*(undefined8 *)PTR_DAT_065e1780);
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 3;
      *(undefined1 (*) [16])(unaff_x19 + 0x24) = _in_stack_00000080;
      if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030b0a98(unaff_x19 + 2,&stack0x00000080);
      return;
    }
  }
  lVar13 = FUN_044a9014(&stack0x00000080,*(undefined8 *)PTR_DAT_065e1778);
  *(long *)(unaff_x19 + 0x18) = lVar13;
  if (lVar13 == 0) {
    in_stack_000000b8._4_4_ = unaff_x19[0x13];
    unaff_x19[0x13] = in_stack_000000b8._4_4_ + -1;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    in_stack_000000a8._4_1_ = 0;
    FUN_04f951b8(uVar5,(long)&stack0x000000a8 + 4,0);
    lVar13 = FUN_033fb070(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)PTR_DAT_065e5cf0);
    if ((iVar14 < 0) && (in_stack_000000a8._4_1_ != 0)) {
      thunk_FUN_02c6fbb4(uVar5,0);
    }
    uVar10 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1468,
                          &stack0x00000078,*(undefined8 *)PTR_DAT_065e5d68);
    if ((uVar10 & 1) == 0) {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
    }
    else {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_039685d0(lVar13,in_stack_00000078,*(undefined8 *)PTR_DAT_065e5d90);
    }
    FUN_03968dbc(&stack0x00000028,lVar13,*(undefined8 *)PTR_DAT_065e5da8);
    in_stack_00000048 = in_stack_00000030;
    in_stack_00000040 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000038;
    *(undefined8 *)(unaff_x19 + 0x2c) = in_stack_00000038;
    *(undefined8 *)(unaff_x19 + 0x2a) = in_stack_00000030;
    *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000028;
    if (iVar14 != 4) {
      bVar3 = 0;
      goto LAB_04c26884;
    }
    _uStack0000000000000060 = *(undefined1 (*) [16])(unaff_x19 + 0x30);
    iVar14 = -1;
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
    *(undefined8 *)(unaff_x19 + 0x32) = 0;
    *unaff_x19 = 0xffffffff;
    while( true ) {
      in_stack_000000a8._4_1_ = FUN_044a8b84(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1bd8);
      in_stack_000000a8._4_1_ = in_stack_000000a8._4_1_ & 1;
      bVar3 = *(byte *)(unaff_x19 + 0x2e) | in_stack_000000a8._4_1_;
LAB_04c26884:
      uVar10 = FUN_0481f4e4(unaff_x19 + 0x28,*(undefined8 *)PTR_DAT_065e5d30);
      if ((uVar10 & 1) == 0) break;
      *(byte *)(unaff_x19 + 0x2e) = bVar3 & 1;
      plVar6 = *(long **)(unaff_x19 + 0x2c);
      lVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5d50);
      FUN_04f7383c(lVar13,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(unaff_x19 + 10);
      *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(unaff_x19 + 0x16);
      iVar1 = unaff_x19[0x12];
      *(int *)(lVar13 + 0x20) = iVar1;
      *(int *)(lVar13 + 0x24) = iVar1 - unaff_x19[0x13];
      *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(unaff_x19 + 0xc);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar7 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e5d80) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04c26810;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065e5d80,0);
LAB_04c26810:
      lVar13 = (*(code *)*puVar8)(plVar6,lVar13,puVar8[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar16 = FUN_04046650(lVar13,0,*(undefined8 *)PTR_DAT_065e1be8);
      _uStack0000000000000060 = auVar16;
      uVar10 = FUN_044a8b38(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1be0);
      if ((uVar10 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 0x30) = _uStack0000000000000060;
        if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_030a982c(unaff_x19 + 2,&stack0x00000060);
        return;
      }
    }
    if (iVar14 < 0) {
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
      plVar15 = *(long **)(unaff_x20 + 0x58);
      uVar12 = *(undefined8 *)(unaff_x19 + 0x16);
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065c8a10);
      plVar6 = (long *)FUN_02ce7ad4(uVar5,1);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *(long *)(unaff_x19 + 0x10);
      if (lVar13 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar6[4] = lVar13;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = thunk_FUN_02c7737c(PTR_DAT_065e39d8);
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e5e28);
      lVar7 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 == 0) goto LAB_04c26b44;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_04c26b2c;
    }
    if (*(char *)(unaff_x19 + 0xe) != '\0') {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if ((*(byte *)(unaff_x20 + 0x6c) >> 6 & 1) != 0) {
        plVar15 = *(long **)(unaff_x20 + 0x58);
        plVar6 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar13 = *(long *)(unaff_x19 + 0x10);
        if (lVar13 != 0) {
          lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar7 == 0) {
            uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar5,0);
          }
        }
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar6[4] = lVar13;
        plVar4 = *(long **)(unaff_x19 + 0x16);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar13 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
        if (lVar13 != 0) {
          lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar7 == 0) {
            uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
            FUN_02ce7b54(uVar5,0);
          }
        }
        if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        plVar6[5] = lVar13;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar13 = *plVar15;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
        uVar5 = *(undefined8 *)PTR_DAT_065e5e10;
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e39d8) {
              puVar8 = (undefined8 *)(lVar13 + (long)(*piVar11 + 3) * 0x10 + 0x138);
              goto LAB_04c26a2c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_02ce0a7c(plVar15,*(long *)PTR_DAT_065e39d8,3);
LAB_04c26a2c:
        (*(code *)*puVar8)(plVar15,uVar5,plVar6,puVar8[1]);
      }
    }
    goto LAB_04c271fc;
  }
  if (199 < *(int *)(lVar13 + 0x20) - 200U) {
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
      plVar15 = *(long **)(unaff_x20 + 0x58);
      plVar6 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,3);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *(long *)(unaff_x19 + 0x10);
      if (lVar13 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar6[4] = lVar13;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      in_stack_00000040 =
           CONCAT44(in_stack_00000040._4_4_,*(undefined4 *)(*(long *)(unaff_x19 + 0x18) + 0x20));
      lVar13 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065ce4b0,&stack0x00000040);
      if (lVar13 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar6[5] = lVar13;
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = FUN_054df784(*(long *)(unaff_x19 + 0x18),0);
      if (lVar13 != 0) {
        lVar7 = thunk_FUN_02cea798(lVar13,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5,0);
        }
      }
      if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar6[6] = lVar13;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar5 = *(undefined8 *)PTR_DAT_065e5df8;
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e39d8) {
            puVar8 = (undefined8 *)(lVar13 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_04c25f00;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(plVar15,*(long *)PTR_DAT_065e39d8,3);
LAB_04c25f00:
      (*(code *)*puVar8)(plVar15,uVar5,plVar6,puVar8[1]);
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
      lVar13 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x38);
      if (lVar13 != 0) {
        lStack0000000000000018 = lVar13;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_054d80d0(lVar13,0);
      }
      FUN_04c23704();
      uVar9 = *(uint *)(unaff_x20 + 0x6c);
    }
    if ((uVar9 >> 5 & 1) != 0) {
      uVar5 = FUN_04db9398(*(undefined8 *)PTR_DAT_065e5de0,*(undefined8 *)(unaff_x19 + 0x10),
                           *(undefined8 *)PTR_DAT_065e5dd8,0);
      if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(uVar5,uVar5);
      }
      lVar13 = FUN_04c23b44();
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar16 = FUN_04fa5130(lVar13,0,0);
      _in_stack_00000090 = auVar16;
      uVar10 = FUN_04e5bb90(&stack0x00000090,0);
      if ((uVar10 & 1) == 0) {
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
  uVar10 = FUN_054df770(*(long *)(unaff_x19 + 0x18),0);
  if ((uVar10 & 1) != 0) {
    unaff_x19[0x13] = 0;
    goto LAB_04c271fc;
  }
  *(undefined1 *)(unaff_x19 + 0x2e) = 0;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  in_stack_000000a8._4_1_ = 0;
  FUN_04f951b8(uVar5,(long)&stack0x000000a8 + 4,0);
  lVar13 = FUN_033fb070(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)PTR_DAT_065e5d00);
  if ((iVar14 < 0) && (in_stack_000000a8._4_1_ != 0)) {
    thunk_FUN_02c6fbb4(uVar5,0);
  }
  uVar10 = FUN_03433854(*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)PTR_DAT_065e1480,
                        &stack0x00000058,*(undefined8 *)PTR_DAT_065e5d70);
  if ((uVar10 & 1) != 0) {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_039685d0(lVar13,in_stack_00000058,*(undefined8 *)PTR_DAT_065e5d88);
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
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_03968dbc(&stack0x00000028,lVar13,*(undefined8 *)PTR_DAT_065e5da0);
  in_stack_00000048 = in_stack_00000030;
  in_stack_00000040 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x3a) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0x36) = in_stack_00000028;
  if (iVar14 != 6) goto LAB_04c26d5c;
  iVar14 = 6;
  do {
    if (iVar14 == 6) {
      _uStack0000000000000060 = *(undefined1 (*) [16])(unaff_x19 + 0x30);
      iVar14 = -1;
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
      lVar13 = *unaff_x23;
      uVar5 = *(undefined8 *)(unaff_x19 + 0x34);
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e5ca0) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04c26cec;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*(long *)PTR_DAT_065e5ca0,0);
LAB_04c26cec:
      lVar13 = (*(code *)*puVar8)(unaff_x23,uVar5,puVar8[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar16 = FUN_04046650(lVar13,0,*(undefined8 *)PTR_DAT_065e1be8);
      _uStack0000000000000060 = auVar16;
      uVar10 = FUN_044a8b38(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1be0);
      if ((uVar10 & 1) == 0) {
        *unaff_x19 = 6;
        *(undefined1 (*) [16])(unaff_x19 + 0x30) = _uStack0000000000000060;
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
    uVar10 = FUN_0481f4e4(unaff_x19 + 0x36,*(undefined8 *)PTR_DAT_065e5d20);
    if ((uVar10 & 1) == 0) break;
    unaff_x23 = *(long **)(unaff_x19 + 0x3a);
  } while( true );
  if (iVar14 < 0) {
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
  lVar13 = FUN_04c23ea8();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar16 = FUN_04046650(lVar13,0,*(undefined8 *)PTR_DAT_065e1be8);
  _uStack0000000000000060 = auVar16;
  uVar10 = FUN_044a8b38(&stack0x00000060,*(undefined8 *)PTR_DAT_065e1be0);
  param_1 = _uStack0000000000000060;
  if ((uVar10 & 1) == 0) {
    *unaff_x19 = 7;
    *(undefined1 (*) [16])(unaff_x19 + 0x30) = _uStack0000000000000060;
    if (*(int *)(*(long *)PTR_DAT_065e1428 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030a982c(unaff_x19 + 2,&stack0x00000060);
    return;
  }
  goto LAB_04c26dfc;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_04c27578:
    if (*(long *)(piVar11 + -2) == lVar13) {
      puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 6) * 0x10 + 0x138);
      goto LAB_04c275b4;
    }
  }
LAB_04c27590:
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar15,lVar13,6);
LAB_04c275b4:
  (*(code *)*puVar8)(plVar15,uVar12,uVar5,plVar6,puVar8[1]);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e5e30);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar12,uVar5);
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_04c272f8:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065e39d8) {
      puVar8 = (undefined8 *)(lVar13 + (long)(*piVar11 + 3) * 0x10 + 0x138);
      goto LAB_04c273a0;
    }
  }
LAB_04c27310:
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar15,*(long *)PTR_DAT_065e39d8,3);
LAB_04c273a0:
  (*(code *)*puVar8)(plVar15,uVar5,plVar6,puVar8[1]);
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
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_04c26b2c:
    if (*(long *)(piVar11 + -2) == lVar13) {
      puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 6) * 0x10 + 0x138);
      goto LAB_04c26b68;
    }
  }
LAB_04c26b44:
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar15,lVar13,6);
LAB_04c26b68:
  (*(code *)*puVar8)(plVar15,uVar12,uVar5,plVar6,puVar8[1]);
  uVar12 = *(undefined8 *)(unaff_x19 + 0x16);
  uVar5 = thunk_FUN_02c7737c(PTR_DAT_065e5e30);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar12,uVar5);
}


