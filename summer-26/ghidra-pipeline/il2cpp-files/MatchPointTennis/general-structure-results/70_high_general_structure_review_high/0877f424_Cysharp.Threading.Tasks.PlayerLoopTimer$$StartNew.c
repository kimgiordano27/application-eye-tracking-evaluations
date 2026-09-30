/*
FUNCTION_NAME: Cysharp.Threading.Tasks.PlayerLoopTimer$$StartNew
ENTRY_POINT: 0877f424
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0877f9c0) */
/* WARNING: Removing unreachable block (ram,0x0877f78c) */

void Cysharp_Threading_Tasks_PlayerLoopTimer__StartNew(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  int iVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if (param_2 == 1) {
    plVar5 = (long *)__cxa_begin_catch(param_1);
    lVar15 = *plVar5;
    __cxa_end_catch();
    iVar12 = 0;
    while( true ) {
      if ((in_stack_00000008 < 0) && (in_stack_00000020._4_1_ != '\0')) {
        thunk_FUN_04455fec(unaff_x22,0);
      }
      if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e3c(lVar15);
      }
      if ((iVar12 != 10) && (iVar12 != 0)) {
        return;
      }
      lVar15 = *unaff_x21;
      if (*(int *)(*(long *)PTR_DAT_09f1e590 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar15 = FUN_07abd5cc(lVar15,0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      auVar19 = FUN_068a4fd0(lVar15,0,*(undefined8 *)PTR_DAT_09f47110);
      _in_stack_00000010 = auVar19;
      uVar6 = FUN_07141468(&stack0x00000010,*(undefined8 *)PTR_DAT_09f47100);
      if ((uVar6 & 1) == 0) break;
      lVar15 = FUN_071414b4(&stack0x00000010,*(undefined8 *)PTR_DAT_09f470f8);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
      in_stack_00000020._4_1_ = '\0';
      FUN_07aa2674(uVar11,(long)&stack0x00000020 + 4,0);
      puVar1 = PTR_DAT_09f892b8;
      if (*(char *)(unaff_x19 + 0x12) == '\0') {
        if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar10 = FUN_05badb74(*(long *)(unaff_x19 + 0xe),0,*(undefined8 *)PTR_DAT_09f892b8);
        bVar3 = lVar15 == lVar10;
LAB_0877f5a8:
        puVar2 = PTR_DAT_09f89298;
        lVar10 = *(long *)(unaff_x19 + 10);
        if (lVar10 == 0) {
Cysharp_Threading_Tasks_ChannelClosedException___ctor:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar16 = 0;
        uVar18 = 0;
        while ((int)uVar18 < (int)*(uint *)(lVar10 + 0x18)) {
          if (*(uint *)(lVar10 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          lVar14 = *(long *)(lVar10 + lVar16 + 0x28);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(long *)(lVar14 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(long *)(*(long *)(lVar14 + 0x58) + 0x18) != 0) {
            if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            FUN_05914630(*(long *)(unaff_x20 + 0x38),*(undefined8 *)(lVar10 + lVar16 + 0x20),lVar14,
                         *(undefined8 *)puVar2);
            bVar4 = FUN_0877d28c();
            lVar10 = *(long *)(unaff_x19 + 10);
            bVar3 = bVar3 | bVar4;
          }
          uVar18 = uVar18 + 1;
          lVar16 = lVar16 + 0x10;
          if (lVar10 == 0) goto Cysharp_Threading_Tasks_ChannelClosedException___ctor;
        }
        if ((bVar3 & 1) != 0) {
          FUN_0877cf60();
        }
        lVar10 = 0;
        uVar18 = 0xffffffff;
        do {
          if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x18) <= (int)(uVar18 + 1)) goto LAB_0877f6fc;
          if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          lVar16 = FUN_05badb74(*(long *)(unaff_x19 + 0xe),
                                uVar18 + *(int *)(*(long *)(unaff_x19 + 10) + 0x18) + 2,
                                *(undefined8 *)puVar1);
          lVar10 = lVar10 + 0x18;
          uVar18 = uVar18 + 1;
        } while (lVar15 != lVar16);
        lVar15 = *(long *)(unaff_x19 + 0xc);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar15 = lVar15 + lVar10;
        in_stack_00000028 = *(undefined8 *)(lVar15 + 8);
        in_stack_00000030 = *(undefined8 *)(lVar15 + 0x10);
        in_stack_00000038 = *(undefined8 *)(lVar15 + 0x18);
        FUN_05915aa0(*(long *)(unaff_x20 + 0x40),&stack0x00000028,*(undefined8 *)PTR_DAT_09f892a0);
        FUN_0877da08();
LAB_0877f6fc:
        iVar12 = 0x1a;
      }
      else {
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar6 = FUN_06894864(*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_09f2cf78);
        if ((uVar6 & 1) != 0) {
          bVar3 = true;
          goto LAB_0877f5a8;
        }
        FUN_0877dbf8();
        iVar12 = 0x10;
      }
      if ((in_stack_00000008 < 0) && (in_stack_00000020._4_1_ != '\0')) {
        thunk_FUN_04455fec(uVar11,0);
      }
      if ((iVar12 != 0) && (iVar12 != 0x1a)) {
        if (iVar12 != 0x10) {
          return;
        }
        *unaff_x19 = 0xfffffffe;
        if (*(int *)(*(long *)PTR_DAT_09f20018 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_0795995c(unaff_x19 + 2,0);
        return;
      }
      *(undefined8 *)(unaff_x19 + 10) = 0;
      thunk_FUN_044bb4b4(unaff_x19 + 10,0);
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      thunk_FUN_044bb4b4(unaff_x19 + 0xc,0);
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_044bb4b4(unaff_x19 + 0x10,0);
      lVar15 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2d8c0);
      FUN_05bad610(lVar15,*(undefined8 *)PTR_DAT_09f2d8b8);
      unaff_x21 = (long *)(unaff_x19 + 0xe);
      *unaff_x21 = lVar15;
      thunk_FUN_044bb4b4(unaff_x21,lVar15);
      *(undefined1 *)(unaff_x19 + 0x12) = 0;
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      unaff_x22 = *(undefined8 *)(unaff_x20 + 0x10);
      in_stack_00000020._4_1_ = '\0';
      FUN_07aa2674(unaff_x22,(long)&stack0x00000020 + 4,0);
      FUN_0877cd0c();
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar15 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f892c0,
                            *(undefined4 *)(*(long *)(unaff_x20 + 0x38) + 0x18));
      plVar5 = (long *)(unaff_x19 + 10);
      *plVar5 = lVar15;
      thunk_FUN_044bb4b4(plVar5);
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_05914348(*(long *)(unaff_x20 + 0x38),*plVar5,0,*(undefined8 *)PTR_DAT_09f89290);
      if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar15 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f892c8,
                            *(undefined4 *)(*(long *)(unaff_x20 + 0x40) + 0x18));
      plVar13 = (long *)(unaff_x19 + 0xc);
      *plVar13 = lVar15;
      thunk_FUN_044bb4b4(plVar13);
      if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_05915734(*(long *)(unaff_x20 + 0x40),*plVar13,0,*(undefined8 *)PTR_DAT_09f89288);
      if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar11 = FUN_0877ecec(*(long *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x20 + 0x1c));
      puVar7 = (undefined8 *)(unaff_x19 + 0x10);
      *puVar7 = uVar11;
      thunk_FUN_044bb4b4(puVar7);
      puVar1 = PTR_DAT_09f2d8b0;
      lVar15 = *unaff_x21;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar11 = *puVar7;
      lVar10 = *(long *)(lVar15 + 0x10);
      lVar16 = *(long *)PTR_DAT_09f2d8b0;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar18 = *(uint *)(lVar15 + 0x18);
      if (uVar18 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar18 + 1;
        puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar18 * 8 + 0x20);
        *puVar7 = uVar11;
        thunk_FUN_044bb4b4(puVar7);
      }
      else {
        FUN_05bade44(lVar15,uVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(unaff_x20 + 0x30) == 0) {
        if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar6 = FUN_0877ceec();
        if ((uVar6 & 1) == 0) goto LAB_0877f220;
        if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(*(long *)(unaff_x20 + 0x38) + 0x18) != 0) goto LAB_0877f220;
        if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(*(long *)(unaff_x20 + 0x40) + 0x18) != 0) goto LAB_0877f220;
        if (*(int *)(*(long *)PTR_DAT_09f21ad0 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar11 = FUN_07a1e9e8(0);
        *(undefined8 *)(unaff_x20 + 0x50) = uVar11;
        *(undefined1 *)(unaff_x19 + 0x12) = 1;
      }
      else {
LAB_0877f220:
        puVar2 = PTR_DAT_09f892d0;
        lVar15 = *plVar5;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar18 = *(uint *)(lVar15 + 0x18);
        if (0 < (int)uVar18) {
          uVar17 = 0;
          do {
            if (uVar18 <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            lVar10 = *(long *)(lVar15 + (long)(int)uVar17 * 0x10 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar10 = *(long *)(lVar10 + 0x58);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar16 = *unaff_x21;
            uVar11 = FUN_06da9cd8(lVar10,*(undefined8 *)puVar2);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            lVar10 = *(long *)(lVar16 + 0x10);
            lVar14 = *(long *)puVar1;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar18 = *(uint *)(lVar16 + 0x18);
            if (uVar18 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar16 + 0x18) = uVar18 + 1;
              *(undefined8 *)(lVar10 + (long)(int)uVar18 * 8 + 0x20) = uVar11;
              thunk_FUN_044bb4b4();
            }
            else {
              FUN_05bade44(lVar16,uVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar18 = *(uint *)(lVar15 + 0x18);
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)uVar18);
        }
        lVar15 = *plVar13;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
          uVar6 = 0;
          uVar8 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
          puVar7 = (undefined8 *)(lVar15 + 0x30);
          do {
            if (uVar8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e4c();
            }
            lVar10 = *unaff_x21;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar11 = *puVar7;
            lVar16 = *(long *)(lVar10 + 0x10);
            lVar14 = *(long *)puVar1;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            uVar18 = *(uint *)(lVar10 + 0x18);
            if (uVar18 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar18 + 1;
              puVar9 = (undefined8 *)(lVar16 + (long)(int)uVar18 * 8 + 0x20);
              *puVar9 = uVar11;
              thunk_FUN_044bb4b4(puVar9);
            }
            else {
              FUN_05bade44(lVar10,uVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            uVar8 = (ulong)*(uint *)(lVar15 + 0x18);
            uVar6 = uVar6 + 1;
            puVar7 = puVar7 + 3;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar15 + 0x18));
        }
      }
      lVar15 = 0;
      iVar12 = 10;
    }
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000010;
    thunk_FUN_044bb4b4(unaff_x19 + 0x14,0);
    if (*(int *)(*(long *)PTR_DAT_09f20018 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_04b55d58(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    if ((in_stack_00000008 < 0) && (in_stack_00000020._4_1_ != '\0')) {
      thunk_FUN_04455fec();
    }
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_0452a004(param_1);
    }
    puVar7 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar11 = thunk_FUN_044adef4(PTR_DAT_09f1e5c0);
    uVar6 = thunk_FUN_044a9a40(uVar11,*(undefined8 *)*puVar7);
    if ((uVar6 & 1) == 0) {
      puVar9 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar9 = *puVar7;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar9,&PTR_PTR_0991e038,0);
    }
    uVar11 = *puVar7;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    lVar15 = thunk_FUN_044adef4(PTR_DAT_09f20018);
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_07959a64(unaff_x19 + 2,uVar11,0);
  }
  return;
}


