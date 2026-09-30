/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequestProgressDelegate$$Invoke
ENTRY_POINT: 07207ec4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x072090c4) */
/* WARNING: Removing unreachable block (ram,0x07208008) */
/* WARNING: Removing unreachable block (ram,0x07208388) */

void Meta_WitAi_Requests_VRequestProgressDelegate__Invoke(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  undefined4 *puVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  int unaff_w19;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  uint uVar22;
  long *unaff_x24;
  long *unaff_x26;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar23 [16];
  long in_stack_00000050;
  int *in_stack_00000058;
  undefined8 *in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000090;
  int *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  char in_stack_000000a8;
  char in_stack_000000c0;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 *in_stack_000001d8;
  
  if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if ((unaff_w19 == 0) || (unaff_w19 == 0x52)) {
    *(undefined8 *)(in_stack_000001d8 + 0x1c) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x16) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x14) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x1a) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x18) = 0;
    if (*(char *)(in_stack_000001d8 + 0x12) != '\0') {
      if (*(long *)(in_stack_000001d8 + 0xe) != 0) {
        FUN_06efcc0c(&stack0x00000050,*(long *)(in_stack_000001d8 + 0xe),
                     *(undefined8 *)PTR_DAT_092bdb60);
        in_stack_00000170 = in_stack_00000070;
        unaff_x26[1] = (long)in_stack_00000058;
        *unaff_x26 = in_stack_00000050;
        unaff_x26[3] = in_stack_00000068;
        unaff_x26[2] = (long)in_stack_00000060;
        puVar3 = PTR_DAT_092bdc18;
        in_stack_00000050 = 0;
        in_stack_00000060 = (undefined8 *)&stack0x00000150;
        in_stack_00000058 = (int *)((long)&stack0x000001d0 + 4);
        while (uVar8 = FUN_05385f24(&stack0x00000150,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
          if (in_stack_00000168 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          auVar23 = FUN_07215d10(in_stack_00000168,0);
          lVar9 = *(long *)(in_stack_000001d8 + 0x10);
          if (lVar9 == 0) {
LAB_0720830c:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar15 = *(long *)(lVar9 + 0x10);
          lVar17 = *unaff_x24;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_0720830c;
          uVar14 = *(uint *)(lVar9 + 0x18);
          if (uVar14 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar14 + 1;
            *(undefined1 (*) [16])(lVar15 + (long)(int)uVar14 * 0x10 + 0x20) = auVar23;
          }
          else {
            FUN_05bd96b8(lVar9,auVar23._0_8_,auVar23._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (in_stack_000001d0._4_4_ < 0) {
          FUN_05386044(in_stack_00000060,*(undefined8 *)PTR_DAT_092bdc10);
        }
      }
      if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar8 = FUN_0721f760(*(long *)(in_stack_000001d8 + 8),0);
      if ((uVar8 & 1) != 0) {
        lVar9 = *(long *)(in_stack_000001d8 + 8);
        if (lVar9 != 0) {
          uVar8 = 0;
          do {
            lVar9 = *(long *)(lVar9 + 0x28);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar8) goto LAB_072081b8;
            if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar9 = *(long *)(lVar9 + uVar8 * 8 + 0x20);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar15 = *(long *)(lVar9 + 0x20);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar14 = *(uint *)(lVar15 + 0x18);
            if (0 < (int)uVar14) {
              lVar17 = 0;
              do {
                if (uVar14 <= (uint)lVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                if (*(long *)(lVar15 + 0x20 + lVar17 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07200548();
                uVar14 = *(uint *)(lVar15 + 0x18);
                lVar17 = lVar17 + 1;
              } while ((int)lVar17 < (int)uVar14);
            }
            lVar15 = *(long *)(lVar9 + 0x18);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar14 = *(uint *)(lVar15 + 0x18);
            if (0 < (int)uVar14) {
              uVar22 = 0;
              do {
                if (uVar14 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                lVar17 = *(long *)(lVar15 + (long)(int)uVar22 * 8 + 0x20);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar16 = *(long *)(lVar9 + 0x20);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar17 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                if (*(long *)(lVar16 + (long)(int)*(uint *)(lVar17 + 0x10) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                iVar7 = FUN_07212d80(*(long *)(lVar17 + 0x18),0);
                if (iVar7 < 4) {
                  if (iVar7 == 2) {
                    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    FUN_07200548();
                  }
                  else if (iVar7 == 3) {
                    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    FUN_07200548();
                  }
                }
                else if (iVar7 == 4) {
                  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07200548();
                }
                else if (iVar7 == 5) {
                  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07200548();
                }
                uVar14 = *(uint *)(lVar15 + 0x18);
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (int)uVar14);
            }
            uVar8 = uVar8 + 1;
            lVar9 = *(long *)(in_stack_000001d8 + 8);
          } while (lVar9 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
LAB_072081b8:
      if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar9 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x20);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar10 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdb00,*(undefined4 *)(lVar9 + 0x18));
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined8 *)(unaff_x28 + 0x60) = uVar10;
      thunk_FUN_040ec700();
      uVar14 = 0;
      in_stack_000001d8[0x20] = 0;
      puVar11 = (undefined8 *)PTR_DAT_092bda28;
      plVar19 = (long *)PTR_DAT_092bda30;
      puVar2 = (undefined8 *)PTR_DAT_092bdba8;
      puVar13 = in_stack_000001d8;
      while( true ) {
        PTR_DAT_092bda28 = (undefined *)puVar11;
        PTR_DAT_092bda30 = (undefined *)plVar19;
        PTR_DAT_092bdba8 = (undefined *)puVar2;
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(unaff_x28 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(*(long *)(unaff_x28 + 0x60) + 0x18) <= (int)uVar14) break;
        if (*(long *)(puVar13 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar9 = *(long *)(*(long *)(puVar13 + 8) + 0x20);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar9 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (-1 < *(int *)(lVar9 + 0x10)) {
          bVar6 = FUN_072199cc(lVar9,0);
          if (bVar6 < 4) {
            if (bVar6 == 1) {
              lVar9 = *(long *)(unaff_x28 + 0x68);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              iVar7 = *(int *)(lVar9 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
              if (iVar7 < 0x200) {
                if ((iVar7 == 2) || (iVar7 == 4)) {
                  lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd858);
                  FUN_06e52ce0(lVar9,*(undefined8 *)PTR_DAT_092bdb08);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  if (*(long *)(unaff_x28 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  if (*(uint *)(*(long *)(unaff_x28 + 0x68) + 0x18) <= (uint)in_stack_000001d8[0x20]
                     ) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  FUN_07200c50();
                  lVar15 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar23 = FUN_06016048(&stack0x00000138,*unaff_x29);
                  if (lVar15 == 0) {
LAB_07209348:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar17 = *(long *)(lVar15 + 0x10);
                  lVar16 = *unaff_x24;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_07209348;
                  uVar14 = *(uint *)(lVar15 + 0x18);
                  if (uVar14 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar14 + 1;
                    *(undefined1 (*) [16])(lVar17 + (long)(int)uVar14 * 0x10 + 0x20) = auVar23;
                  }
                  else {
                    FUN_05bd96b8(lVar15,auVar23._0_8_,auVar23._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar19 = *(long **)(unaff_x28 + 0x60);
                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar14 = in_stack_000001d8[0x20];
                  lVar15 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar19 + 0x40));
                  if (lVar15 == 0) {
                    uVar10 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar10,0);
                  }
                  if (*(uint *)(plVar19 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar19[(long)(int)uVar14 + 4] = lVar9;
                  thunk_FUN_040ec700(plVar19 + (long)(int)uVar14 + 4,lVar9);
                }
              }
              else if ((iVar7 == 0x200) || (iVar7 == 0x2000)) {
                lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdb30);
                FUN_06e52d58(lVar9,*(undefined8 *)PTR_DAT_092bdb18);
                FUN_07201d94();
                if (in_stack_000000c0 != '\0') {
                  auVar23 = FUN_06008be0(&stack0x000000c0,*(undefined8 *)PTR_DAT_092bd960);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  *(undefined1 (*) [16])(lVar9 + 0x10) = auVar23;
                }
                if (in_stack_000000a8 != '\0') {
                  lVar15 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar23 = FUN_06016048(&stack0x000000a8,*unaff_x29);
                  if (lVar15 == 0) {
LAB_07209384:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar17 = *(long *)(lVar15 + 0x10);
                  lVar16 = *unaff_x24;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_07209384;
                  uVar14 = *(uint *)(lVar15 + 0x18);
                  if (uVar14 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar14 + 1;
                    *(undefined1 (*) [16])(lVar17 + (long)(int)uVar14 * 0x10 + 0x20) = auVar23;
                  }
                  else {
                    FUN_05bd96b8(lVar15,auVar23._0_8_,auVar23._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                plVar19 = *(long **)(unaff_x28 + 0x60);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar14 = in_stack_000001d8[0x20];
                if ((lVar9 != 0) &&
                   (lVar15 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar19 + 0x40)), lVar15 == 0
                   )) {
                  uVar10 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar10,0);
                }
                if (*(uint *)(plVar19 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar19[(long)(int)uVar14 + 4] = lVar9;
                thunk_FUN_040ec700(plVar19 + (long)(int)uVar14 + 4,lVar9);
              }
            }
            else if (bVar6 == 3) {
              lVar9 = *(long *)(unaff_x28 + 0x68);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              uVar14 = *(uint *)(lVar9 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
              if ((uVar14 >> 10 & 1) == 0) {
                if ((uVar14 >> 0xc & 1) != 0) {
                  lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                  FUN_06e52d78(lVar9,*(undefined8 *)PTR_DAT_092bdb10);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07201560();
                  lVar15 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar23 = FUN_06016048(&stack0x000000d8,*unaff_x29);
                  if (lVar15 == 0) {
LAB_0720936c:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar17 = *(long *)(lVar15 + 0x10);
                  lVar16 = *unaff_x24;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_0720936c;
                  uVar14 = *(uint *)(lVar15 + 0x18);
                  if (uVar14 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar15 + 0x18) = uVar14 + 1;
                    *(undefined1 (*) [16])(lVar17 + (long)(int)uVar14 * 0x10 + 0x20) = auVar23;
                  }
                  else {
                    FUN_05bd96b8(lVar15,auVar23._0_8_,auVar23._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar19 = *(long **)(unaff_x28 + 0x60);
                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar14 = in_stack_000001d8[0x20];
                  lVar15 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar19 + 0x40));
                  if (lVar15 == 0) {
                    uVar10 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar10,0);
                  }
                  if (*(uint *)(plVar19 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar19[(long)(int)uVar14 + 4] = lVar9;
                  thunk_FUN_040ec700(plVar19 + (long)(int)uVar14 + 4,lVar9);
                }
              }
              else {
                lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                FUN_06e52d78(lVar9,*(undefined8 *)PTR_DAT_092bdb10);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07201560();
                lVar15 = *(long *)(in_stack_000001d8 + 0x10);
                auVar23 = FUN_06016048(&stack0x00000108,*unaff_x29);
                if (lVar15 == 0) {
LAB_07209328:
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar17 = *(long *)(lVar15 + 0x10);
                lVar16 = *unaff_x24;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar17 == 0) goto LAB_07209328;
                uVar14 = *(uint *)(lVar15 + 0x18);
                if (uVar14 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar15 + 0x18) = uVar14 + 1;
                  *(undefined1 (*) [16])(lVar17 + (long)(int)uVar14 * 0x10 + 0x20) = auVar23;
                }
                else {
                  FUN_05bd96b8(lVar15,auVar23._0_8_,auVar23._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
                plVar19 = *(long **)(unaff_x28 + 0x60);
                if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar14 = in_stack_000001d8[0x20];
                lVar15 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar19 + 0x40));
                if (lVar15 == 0) {
                  uVar10 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar10,0);
                }
                if (*(uint *)(plVar19 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar19[(long)(int)uVar14 + 4] = lVar9;
                thunk_FUN_040ec700(plVar19 + (long)(int)uVar14 + 4,lVar9);
              }
            }
          }
          else if (bVar6 == 4) {
            lVar9 = *(long *)(unaff_x28 + 0x68);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if ((*(uint *)(lVar9 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) >> 0xb & 1) != 0)
            {
              lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd988);
              FUN_06e52d38(lVar9,*(undefined8 *)PTR_DAT_092bdb28);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_07201930();
              lVar15 = *(long *)(in_stack_000001d8 + 0x10);
              auVar23 = FUN_06016048(&stack0x000000f0,*unaff_x29);
              if (lVar15 == 0) {
LAB_07209334:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar17 = *(long *)(lVar15 + 0x10);
              lVar16 = *unaff_x24;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_07209334;
              uVar14 = *(uint *)(lVar15 + 0x18);
              if (uVar14 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar14 + 1;
                *(undefined1 (*) [16])(lVar17 + (long)(int)uVar14 * 0x10 + 0x20) = auVar23;
              }
              else {
                FUN_05bd96b8(lVar15,auVar23._0_8_,auVar23._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              plVar19 = *(long **)(unaff_x28 + 0x60);
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar14 = in_stack_000001d8[0x20];
              lVar15 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar19 + 0x40));
              if (lVar15 == 0) {
                uVar10 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar10,0);
              }
              if (*(uint *)(plVar19 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar19[(long)(int)uVar14 + 4] = lVar9;
              thunk_FUN_040ec700(plVar19 + (long)(int)uVar14 + 4,lVar9);
            }
          }
          else if (bVar6 == 7) {
            lVar9 = *(long *)(unaff_x28 + 0x68);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar9 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (*(int *)(lVar9 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) == 0x100) {
              lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd9c8);
              FUN_06e52d18(lVar9,*(undefined8 *)PTR_DAT_092bdb20);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_072011ec();
              lVar15 = *(long *)(in_stack_000001d8 + 0x10);
              auVar23 = FUN_06016048(&stack0x00000120,*unaff_x29);
              if (lVar15 == 0) {
LAB_0720931c:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar17 = *(long *)(lVar15 + 0x10);
              lVar16 = *unaff_x24;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_0720931c;
              uVar14 = *(uint *)(lVar15 + 0x18);
              if (uVar14 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar14 + 1;
                *(undefined1 (*) [16])(lVar17 + (long)(int)uVar14 * 0x10 + 0x20) = auVar23;
              }
              else {
                FUN_05bd96b8(lVar15,auVar23._0_8_,auVar23._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              plVar19 = *(long **)(unaff_x28 + 0x60);
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar14 = in_stack_000001d8[0x20];
              lVar15 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar19 + 0x40));
              if (lVar15 == 0) {
                uVar10 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar10,0);
              }
              if (*(uint *)(plVar19 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar19[(long)(int)uVar14 + 4] = lVar9;
              thunk_FUN_040ec700(plVar19 + (long)(int)uVar14 + 4,lVar9);
            }
          }
          plVar19 = *(long **)(unaff_x28 + 0x20);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar9 = *plVar19;
          uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar8 != 0) {
            piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_092bd558) {
                puVar11 = (undefined8 *)(lVar9 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                goto LAB_07208e08;
              }
              uVar8 = uVar8 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar8 != 0);
          }
          puVar11 = (undefined8 *)FUN_040b1e00(plVar19,*(long *)PTR_DAT_092bd558,2);
LAB_07208e08:
          lVar9 = (*(code *)*puVar11)(plVar19,puVar11[1]);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          in_stack_00000178 = FUN_076f1ee4(lVar9,0);
          uVar8 = FUN_07591eb4(&stack0x00000178,0);
          if ((uVar8 & 1) == 0) {
            in_stack_000001d0._4_4_ = 1;
            *in_stack_000001d8 = 1;
            *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
            thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
            puVar13 = in_stack_000001d8;
            if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1,in_stack_000001d8);
            }
            FUN_04995830(puVar13 + 2,&stack0x00000178,in_stack_000001d8,
                         *(undefined8 *)PTR_DAT_092bdb40);
            return;
          }
          FUN_07591f7c(&stack0x00000178,0);
          uVar14 = in_stack_000001d8[0x20];
          puVar13 = in_stack_000001d8;
        }
        uVar14 = uVar14 + 1;
        puVar13[0x20] = uVar14;
        puVar11 = (undefined8 *)PTR_DAT_092bda28;
        plVar19 = (long *)PTR_DAT_092bda30;
        puVar2 = (undefined8 *)PTR_DAT_092bdba8;
      }
      if (0 < (int)puVar13[0xc]) {
        uVar14 = 0;
        uVar8 = 0;
        do {
          if (*(long *)(puVar13 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar9 = *(long *)(*(long *)(puVar13 + 8) + 0x60);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar15 = *(long *)(unaff_x28 + 0x90);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar15 = *(long *)(lVar15 + uVar8 * 8 + 0x20);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar17 = *(long *)(lVar9 + uVar8 * 8 + 0x20);
          lVar9 = FUN_06efc5fc(lVar15,*(undefined8 *)PTR_DAT_092bdbb8);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_0685b4f8(&stack0x00000050,lVar9,*(undefined8 *)PTR_DAT_092bdcc8);
          in_stack_00000090 = in_stack_00000050;
          in_stack_000000a0 = in_stack_00000060;
          in_stack_00000050 = 0;
          in_stack_00000060 = &stack0x00000090;
          in_stack_00000098 = in_stack_00000058;
          in_stack_00000058 = (int *)((long)&stack0x000001d0 + 4);
          while (uVar12 = FUN_05386d5c(&stack0x00000090,*(undefined8 *)PTR_DAT_092bdc28),
                puVar4 = in_stack_000000a0, (uVar12 & 1) != 0) {
            if (in_stack_000000a0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(int *)(in_stack_000000a0 + 3) < 1) {
              plVar20 = (long *)0x0;
            }
            else {
              iVar7 = 0;
              plVar20 = (long *)0x0;
              do {
                lVar9 = FUN_05c26ab8(puVar4,iVar7,*puVar11);
                if (plVar20 == (long *)0x0) {
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar1 = *(undefined4 *)(puVar4 + 3);
                  uVar10 = *(undefined8 *)(lVar17 + 0x10);
                  plVar20 = (long *)thunk_FUN_040b4efc(*plVar19);
                  FUN_07216bd0(plVar20,uVar14,uVar1,uVar10,0);
                }
                else {
                  bVar6 = *(byte *)(*plVar19 + 0x130);
                  if (*(byte *)(*plVar20 + 0x130) < bVar6) {
                    plVar20 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar6 * 8 + -8) != *plVar19)
                  {
                    plVar20 = (long *)0x0;
                  }
                }
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar9 + 0x28) == 0) {
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                }
                else {
                  if (*(long *)(in_stack_000001d8 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar15 = FUN_06efc758(*(long *)(in_stack_000001d8 + 0xe),lVar9,*puVar2);
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  plVar20[5] = lVar15;
                  thunk_FUN_040ec700();
                }
                FUN_072175f4(plVar20,iVar7,*(undefined4 *)(lVar9 + 0x1c),0);
                iVar7 = iVar7 + 1;
              } while (iVar7 < *(int *)(puVar4 + 3));
            }
            plVar21 = *(long **)(unaff_x28 + 0x80);
            if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((plVar20 != (long *)0x0) &&
               (lVar9 = thunk_FUN_040b4e00(plVar20,*(undefined8 *)(*plVar21 + 0x40)), lVar9 == 0)) {
              uVar10 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar10,0);
            }
            if (*(uint *)(plVar21 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar21[(long)(int)uVar14 + 4] = (long)plVar20;
            thunk_FUN_040ec700(plVar21 + (long)(int)uVar14 + 4,plVar20);
            uVar14 = uVar14 + 1;
          }
          if (*in_stack_00000058 < 0) {
            System_Collections_Generic_EqualityComparer<IndirectDrawInfo>__get_Default
                      (in_stack_00000060,*(undefined8 *)PTR_DAT_092bdc00);
          }
          if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077828();
          }
          uVar8 = uVar8 + 1;
          puVar13 = in_stack_000001d8;
        } while ((int)uVar8 < (int)in_stack_000001d8[0xc]);
      }
      if (*(long *)(puVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar10 = FUN_05bdb0a8(*(long *)(puVar13 + 0x10),*(undefined8 *)PTR_DAT_092bdc78);
      FUN_05f3fd7c(&stack0x000001c0,uVar10,4,*(undefined8 *)PTR_DAT_092bdca8);
      auVar23 = FUN_0896aff0(in_stack_000001c0,in_stack_000001c8,0);
      puVar3 = PTR_DAT_092bc2d8;
      *(undefined1 (*) [16])(unaff_x28 + 0x70) = auVar23;
      FUN_05f3ffd8(&stack0x000001c0,*(undefined8 *)puVar3);
      FUN_0896af44(0);
      bVar5 = *(char *)(in_stack_000001d8 + 0x12) != '\0';
      goto LAB_07209208;
    }
  }
  else if (unaff_w19 != 0x48) {
    return;
  }
  bVar5 = false;
LAB_07209208:
  puVar3 = PTR_DAT_092899f8;
  *in_stack_000001d8 = 0xfffffffe;
  *(undefined8 *)(in_stack_000001d8 + 0xe) = 0;
  thunk_FUN_040ec700(in_stack_000001d8 + 0xe,0);
  *(undefined8 *)(in_stack_000001d8 + 0x10) = 0;
  thunk_FUN_040ec700(in_stack_000001d8 + 0x10,0);
  puVar13 = in_stack_000001d8;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_065d0838(puVar13 + 2,bVar5,*(undefined8 *)puVar3);
  return;
}


