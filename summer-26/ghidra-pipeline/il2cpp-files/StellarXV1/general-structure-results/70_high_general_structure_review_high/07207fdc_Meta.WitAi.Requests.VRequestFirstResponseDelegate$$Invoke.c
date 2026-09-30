/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequestFirstResponseDelegate$$Invoke
ENTRY_POINT: 07207fdc
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

void Meta_WitAi_Requests_VRequestFirstResponseDelegate__Invoke(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  undefined4 *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  int unaff_w19;
  long *plVar17;
  long unaff_x20;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  uint uVar22;
  long *unaff_x24;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar23 [16];
  long in_stack_00000050;
  int *in_stack_00000058;
  undefined8 *in_stack_00000060;
  long in_stack_00000090;
  int *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  char in_stack_000000a8;
  char in_stack_000000c0;
  undefined8 in_stack_00000178;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  long in_stack_000001d0;
  undefined4 *in_stack_000001d8;
  
  if (in_stack_000001d0 < 0) {
    FUN_05386044(in_stack_00000060,*(undefined8 *)PTR_DAT_092bdc10);
  }
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if ((unaff_w19 != 0x54) && (unaff_w19 != 0)) {
    return;
  }
  if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar8 = FUN_0721f760(*(long *)(in_stack_000001d8 + 8),0);
  if ((uVar8 & 1) != 0) {
    lVar14 = *(long *)(in_stack_000001d8 + 8);
    if (lVar14 != 0) {
      uVar8 = 0;
      do {
        lVar14 = *(long *)(lVar14 + 0x28);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar8) goto LAB_072081b8;
        if (*(uint *)(lVar14 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar14 = *(long *)(lVar14 + uVar8 * 8 + 0x20);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar18 = *(long *)(lVar14 + 0x20);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar13 = *(uint *)(lVar18 + 0x18);
        if (0 < (int)uVar13) {
          lVar21 = 0;
          do {
            if (uVar13 <= (uint)lVar21) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (*(long *)(lVar18 + 0x20 + lVar21 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            FUN_07200548();
            uVar13 = *(uint *)(lVar18 + 0x18);
            lVar21 = lVar21 + 1;
          } while ((int)lVar21 < (int)uVar13);
        }
        lVar18 = *(long *)(lVar14 + 0x18);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar13 = *(uint *)(lVar18 + 0x18);
        if (0 < (int)uVar13) {
          uVar22 = 0;
          do {
            if (uVar13 <= uVar22) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar21 = *(long *)(lVar18 + (long)(int)uVar22 * 8 + 0x20);
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar15 = *(long *)(lVar14 + 0x20);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar21 + 0x10)) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (*(long *)(lVar15 + (long)(int)*(uint *)(lVar21 + 0x10) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(long *)(lVar21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            iVar7 = FUN_07212d80(*(long *)(lVar21 + 0x18),0);
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
            uVar13 = *(uint *)(lVar18 + 0x18);
            uVar22 = uVar22 + 1;
          } while ((int)uVar22 < (int)uVar13);
        }
        uVar8 = uVar8 + 1;
        lVar14 = *(long *)(in_stack_000001d8 + 8);
      } while (lVar14 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
LAB_072081b8:
  if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar14 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x20);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar9 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdb00,*(undefined4 *)(lVar14 + 0x18));
  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(unaff_x28 + 0x60) = uVar9;
  thunk_FUN_040ec700();
  uVar13 = 0;
  in_stack_000001d8[0x20] = 0;
  puVar10 = (undefined8 *)PTR_DAT_092bda28;
  plVar17 = (long *)PTR_DAT_092bda30;
  puVar3 = (undefined8 *)PTR_DAT_092bdba8;
  puVar12 = in_stack_000001d8;
  do {
    PTR_DAT_092bda28 = (undefined *)puVar10;
    PTR_DAT_092bda30 = (undefined *)plVar17;
    PTR_DAT_092bdba8 = (undefined *)puVar3;
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(unaff_x28 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(*(long *)(unaff_x28 + 0x60) + 0x18) <= (int)uVar13) {
      if (0 < (int)puVar12[0xc]) {
        uVar13 = 0;
        uVar8 = 0;
        do {
          if (*(long *)(puVar12 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *(long *)(*(long *)(puVar12 + 8) + 0x60);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar18 = *(long *)(unaff_x28 + 0x90);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar18 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar18 = *(long *)(lVar18 + uVar8 * 8 + 0x20);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar21 = *(long *)(lVar14 + uVar8 * 8 + 0x20);
          lVar14 = FUN_06efc5fc(lVar18,*(undefined8 *)PTR_DAT_092bdbb8);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_0685b4f8(&stack0x00000050,lVar14,*(undefined8 *)PTR_DAT_092bdcc8);
          in_stack_00000090 = in_stack_00000050;
          in_stack_000000a0 = in_stack_00000060;
          in_stack_00000050 = 0;
          in_stack_00000060 = &stack0x00000090;
          in_stack_00000098 = in_stack_00000058;
          in_stack_00000058 = (int *)((long)&stack0x000001d0 + 4);
          while (uVar11 = FUN_05386d5c(&stack0x00000090,*(undefined8 *)PTR_DAT_092bdc28),
                puVar5 = in_stack_000000a0, (uVar11 & 1) != 0) {
            if (in_stack_000000a0 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(int *)(in_stack_000000a0 + 3) < 1) {
              plVar19 = (long *)0x0;
            }
            else {
              iVar7 = 0;
              plVar19 = (long *)0x0;
              do {
                lVar14 = FUN_05c26ab8(puVar5,iVar7,*puVar10);
                if (plVar19 == (long *)0x0) {
                  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar1 = *(undefined4 *)(puVar5 + 3);
                  uVar9 = *(undefined8 *)(lVar21 + 0x10);
                  plVar19 = (long *)thunk_FUN_040b4efc(*plVar17);
                  FUN_07216bd0(plVar19,uVar13,uVar1,uVar9,0);
                }
                else {
                  bVar6 = *(byte *)(*plVar17 + 0x130);
                  if (*(byte *)(*plVar19 + 0x130) < bVar6) {
                    plVar19 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar6 * 8 + -8) != *plVar17)
                  {
                    plVar19 = (long *)0x0;
                  }
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar14 + 0x28) == 0) {
                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                }
                else {
                  if (*(long *)(in_stack_000001d8 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar18 = FUN_06efc758(*(long *)(in_stack_000001d8 + 0xe),lVar14,*puVar3);
                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  plVar19[5] = lVar18;
                  thunk_FUN_040ec700();
                }
                FUN_072175f4(plVar19,iVar7,*(undefined4 *)(lVar14 + 0x1c),0);
                iVar7 = iVar7 + 1;
              } while (iVar7 < *(int *)(puVar5 + 3));
            }
            plVar20 = *(long **)(unaff_x28 + 0x80);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((plVar19 != (long *)0x0) &&
               (lVar14 = thunk_FUN_040b4e00(plVar19,*(undefined8 *)(*plVar20 + 0x40)), lVar14 == 0))
            {
              uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar9,0);
            }
            if (*(uint *)(plVar20 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar20[(long)(int)uVar13 + 4] = (long)plVar19;
            thunk_FUN_040ec700(plVar20 + (long)(int)uVar13 + 4,plVar19);
            uVar13 = uVar13 + 1;
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
          puVar12 = in_stack_000001d8;
        } while ((int)uVar8 < (int)in_stack_000001d8[0xc]);
      }
      if (*(long *)(puVar12 + 0x10) != 0) {
        uVar9 = FUN_05bdb0a8(*(long *)(puVar12 + 0x10),*(undefined8 *)PTR_DAT_092bdc78);
        FUN_05f3fd7c(&stack0x000001c0,uVar9,4,*(undefined8 *)PTR_DAT_092bdca8);
        auVar23 = FUN_0896aff0(in_stack_000001c0,in_stack_000001c8,0);
        puVar4 = PTR_DAT_092bc2d8;
        *(undefined1 (*) [16])(unaff_x28 + 0x70) = auVar23;
        FUN_05f3ffd8(&stack0x000001c0,*(undefined8 *)puVar4);
        FUN_0896af44(0);
        puVar4 = PTR_DAT_092899f8;
        cVar2 = *(char *)(in_stack_000001d8 + 0x12);
        *in_stack_000001d8 = 0xfffffffe;
        *(undefined8 *)(in_stack_000001d8 + 0xe) = 0;
        thunk_FUN_040ec700(in_stack_000001d8 + 0xe,0);
        *(undefined8 *)(in_stack_000001d8 + 0x10) = 0;
        thunk_FUN_040ec700(in_stack_000001d8 + 0x10,0);
        puVar12 = in_stack_000001d8;
        if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_065d0838(puVar12 + 2,cVar2 != '\0',*(undefined8 *)puVar4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(puVar12 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *(long *)(*(long *)(puVar12 + 8) + 0x20);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar14 = *(long *)(lVar14 + (long)(int)uVar13 * 8 + 0x20);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (-1 < *(int *)(lVar14 + 0x10)) {
      bVar6 = FUN_072199cc(lVar14,0);
      if (bVar6 < 4) {
        if (bVar6 == 1) {
          lVar14 = *(long *)(unaff_x28 + 0x68);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar14 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          iVar7 = *(int *)(lVar14 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
          if (iVar7 < 0x200) {
            if ((iVar7 == 2) || (iVar7 == 4)) {
              lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd858);
              FUN_06e52ce0(lVar14,*(undefined8 *)PTR_DAT_092bdb08);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(long *)(unaff_x28 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(*(long *)(unaff_x28 + 0x68) + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              FUN_07200c50();
              lVar18 = *(long *)(in_stack_000001d8 + 0x10);
              auVar23 = FUN_06016048(&stack0x00000138,*unaff_x29);
              if (lVar18 == 0) {
LAB_07209348:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar21 = *(long *)(lVar18 + 0x10);
              lVar15 = *unaff_x24;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              if (lVar21 == 0) goto LAB_07209348;
              uVar13 = *(uint *)(lVar18 + 0x18);
              if (uVar13 < *(uint *)(lVar21 + 0x18)) {
                *(uint *)(lVar18 + 0x18) = uVar13 + 1;
                *(undefined1 (*) [16])(lVar21 + (long)(int)uVar13 * 0x10 + 0x20) = auVar23;
              }
              else {
                FUN_05bd96b8(lVar18,auVar23._0_8_,auVar23._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              plVar17 = *(long **)(unaff_x28 + 0x60);
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar13 = in_stack_000001d8[0x20];
              lVar18 = thunk_FUN_040b4e00(lVar14,*(undefined8 *)(*plVar17 + 0x40));
              if (lVar18 == 0) {
                uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar9,0);
              }
              if (*(uint *)(plVar17 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar17[(long)(int)uVar13 + 4] = lVar14;
              thunk_FUN_040ec700(plVar17 + (long)(int)uVar13 + 4,lVar14);
            }
          }
          else if ((iVar7 == 0x200) || (iVar7 == 0x2000)) {
            lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdb30);
            FUN_06e52d58(lVar14,*(undefined8 *)PTR_DAT_092bdb18);
            FUN_07201d94();
            if (in_stack_000000c0 != '\0') {
              auVar23 = FUN_06008be0(&stack0x000000c0,*(undefined8 *)PTR_DAT_092bd960);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              *(undefined1 (*) [16])(lVar14 + 0x10) = auVar23;
            }
            if (in_stack_000000a8 != '\0') {
              lVar18 = *(long *)(in_stack_000001d8 + 0x10);
              auVar23 = FUN_06016048(&stack0x000000a8,*unaff_x29);
              if (lVar18 == 0) {
LAB_07209384:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar21 = *(long *)(lVar18 + 0x10);
              lVar15 = *unaff_x24;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              if (lVar21 == 0) goto LAB_07209384;
              uVar13 = *(uint *)(lVar18 + 0x18);
              if (uVar13 < *(uint *)(lVar21 + 0x18)) {
                *(uint *)(lVar18 + 0x18) = uVar13 + 1;
                *(undefined1 (*) [16])(lVar21 + (long)(int)uVar13 * 0x10 + 0x20) = auVar23;
              }
              else {
                FUN_05bd96b8(lVar18,auVar23._0_8_,auVar23._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            plVar17 = *(long **)(unaff_x28 + 0x60);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar13 = in_stack_000001d8[0x20];
            if ((lVar14 != 0) &&
               (lVar18 = thunk_FUN_040b4e00(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar18 == 0))
            {
              uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar9,0);
            }
            if (*(uint *)(plVar17 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar17[(long)(int)uVar13 + 4] = lVar14;
            thunk_FUN_040ec700(plVar17 + (long)(int)uVar13 + 4,lVar14);
          }
        }
        else if (bVar6 == 3) {
          lVar14 = *(long *)(unaff_x28 + 0x68);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar14 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          uVar13 = *(uint *)(lVar14 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
          if ((uVar13 >> 10 & 1) == 0) {
            if ((uVar13 >> 0xc & 1) != 0) {
              lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
              FUN_06e52d78(lVar14,*(undefined8 *)PTR_DAT_092bdb10);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_07201560();
              lVar18 = *(long *)(in_stack_000001d8 + 0x10);
              auVar23 = FUN_06016048(&stack0x000000d8,*unaff_x29);
              if (lVar18 == 0) {
LAB_0720936c:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar21 = *(long *)(lVar18 + 0x10);
              lVar15 = *unaff_x24;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              if (lVar21 == 0) goto LAB_0720936c;
              uVar13 = *(uint *)(lVar18 + 0x18);
              if (uVar13 < *(uint *)(lVar21 + 0x18)) {
                *(uint *)(lVar18 + 0x18) = uVar13 + 1;
                *(undefined1 (*) [16])(lVar21 + (long)(int)uVar13 * 0x10 + 0x20) = auVar23;
              }
              else {
                FUN_05bd96b8(lVar18,auVar23._0_8_,auVar23._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              plVar17 = *(long **)(unaff_x28 + 0x60);
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar13 = in_stack_000001d8[0x20];
              lVar18 = thunk_FUN_040b4e00(lVar14,*(undefined8 *)(*plVar17 + 0x40));
              if (lVar18 == 0) {
                uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar9,0);
              }
              if (*(uint *)(plVar17 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar17[(long)(int)uVar13 + 4] = lVar14;
              thunk_FUN_040ec700(plVar17 + (long)(int)uVar13 + 4,lVar14);
            }
          }
          else {
            lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
            FUN_06e52d78(lVar14,*(undefined8 *)PTR_DAT_092bdb10);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            FUN_07201560();
            lVar18 = *(long *)(in_stack_000001d8 + 0x10);
            auVar23 = FUN_06016048(&stack0x00000108,*unaff_x29);
            if (lVar18 == 0) {
LAB_07209328:
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar21 = *(long *)(lVar18 + 0x10);
            lVar15 = *unaff_x24;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar21 == 0) goto LAB_07209328;
            uVar13 = *(uint *)(lVar18 + 0x18);
            if (uVar13 < *(uint *)(lVar21 + 0x18)) {
              *(uint *)(lVar18 + 0x18) = uVar13 + 1;
              *(undefined1 (*) [16])(lVar21 + (long)(int)uVar13 * 0x10 + 0x20) = auVar23;
            }
            else {
              FUN_05bd96b8(lVar18,auVar23._0_8_,auVar23._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            plVar17 = *(long **)(unaff_x28 + 0x60);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar13 = in_stack_000001d8[0x20];
            lVar18 = thunk_FUN_040b4e00(lVar14,*(undefined8 *)(*plVar17 + 0x40));
            if (lVar18 == 0) {
              uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar9,0);
            }
            if (*(uint *)(plVar17 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar17[(long)(int)uVar13 + 4] = lVar14;
            thunk_FUN_040ec700(plVar17 + (long)(int)uVar13 + 4,lVar14);
          }
        }
      }
      else if (bVar6 == 4) {
        lVar14 = *(long *)(unaff_x28 + 0x68);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar14 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        if ((*(uint *)(lVar14 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) >> 0xb & 1) != 0) {
          lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd988);
          FUN_06e52d38(lVar14,*(undefined8 *)PTR_DAT_092bdb28);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_07201930();
          lVar18 = *(long *)(in_stack_000001d8 + 0x10);
          auVar23 = FUN_06016048(&stack0x000000f0,*unaff_x29);
          if (lVar18 == 0) {
LAB_07209334:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar21 = *(long *)(lVar18 + 0x10);
          lVar15 = *unaff_x24;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar21 == 0) goto LAB_07209334;
          uVar13 = *(uint *)(lVar18 + 0x18);
          if (uVar13 < *(uint *)(lVar21 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar13 + 1;
            *(undefined1 (*) [16])(lVar21 + (long)(int)uVar13 * 0x10 + 0x20) = auVar23;
          }
          else {
            FUN_05bd96b8(lVar18,auVar23._0_8_,auVar23._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          plVar17 = *(long **)(unaff_x28 + 0x60);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar13 = in_stack_000001d8[0x20];
          lVar18 = thunk_FUN_040b4e00(lVar14,*(undefined8 *)(*plVar17 + 0x40));
          if (lVar18 == 0) {
            uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar9,0);
          }
          if (*(uint *)(plVar17 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar17[(long)(int)uVar13 + 4] = lVar14;
          thunk_FUN_040ec700(plVar17 + (long)(int)uVar13 + 4,lVar14);
        }
      }
      else if (bVar6 == 7) {
        lVar14 = *(long *)(unaff_x28 + 0x68);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar14 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        if (*(int *)(lVar14 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) == 0x100) {
          lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd9c8);
          FUN_06e52d18(lVar14,*(undefined8 *)PTR_DAT_092bdb20);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_072011ec();
          lVar18 = *(long *)(in_stack_000001d8 + 0x10);
          auVar23 = FUN_06016048(&stack0x00000120,*unaff_x29);
          if (lVar18 == 0) {
LAB_0720931c:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar21 = *(long *)(lVar18 + 0x10);
          lVar15 = *unaff_x24;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar21 == 0) goto LAB_0720931c;
          uVar13 = *(uint *)(lVar18 + 0x18);
          if (uVar13 < *(uint *)(lVar21 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar13 + 1;
            *(undefined1 (*) [16])(lVar21 + (long)(int)uVar13 * 0x10 + 0x20) = auVar23;
          }
          else {
            FUN_05bd96b8(lVar18,auVar23._0_8_,auVar23._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          plVar17 = *(long **)(unaff_x28 + 0x60);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar13 = in_stack_000001d8[0x20];
          lVar18 = thunk_FUN_040b4e00(lVar14,*(undefined8 *)(*plVar17 + 0x40));
          if (lVar18 == 0) {
            uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar9,0);
          }
          if (*(uint *)(plVar17 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar17[(long)(int)uVar13 + 4] = lVar14;
          thunk_FUN_040ec700(plVar17 + (long)(int)uVar13 + 4,lVar14);
        }
      }
      plVar17 = *(long **)(unaff_x28 + 0x20);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar14 = *plVar17;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092bd558) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_07208e08;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_040b1e00(plVar17,*(long *)PTR_DAT_092bd558,2);
LAB_07208e08:
      lVar14 = (*(code *)*puVar10)(plVar17,puVar10[1]);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      in_stack_00000178 = FUN_076f1ee4(lVar14,0);
      uVar8 = FUN_07591eb4(&stack0x00000178,0);
      if ((uVar8 & 1) == 0) {
        in_stack_000001d0._4_4_ = 1;
        *in_stack_000001d8 = 1;
        *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
        thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
        puVar12 = in_stack_000001d8;
        if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1,in_stack_000001d8);
        }
        FUN_04995830(puVar12 + 2,&stack0x00000178,in_stack_000001d8,*(undefined8 *)PTR_DAT_092bdb40)
        ;
        return;
      }
      FUN_07591f7c(&stack0x00000178,0);
      uVar13 = in_stack_000001d8[0x20];
      puVar12 = in_stack_000001d8;
    }
    uVar13 = uVar13 + 1;
    puVar12[0x20] = uVar13;
    puVar10 = (undefined8 *)PTR_DAT_092bda28;
    plVar17 = (long *)PTR_DAT_092bda30;
    puVar3 = (undefined8 *)PTR_DAT_092bdba8;
  } while( true );
}


