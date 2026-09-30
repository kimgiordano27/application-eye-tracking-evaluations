/*
FUNCTION_NAME: Meta.WitAi.Requests.AudioStreamHandler$$TryToFinalize
ENTRY_POINT: 07206e4c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x072090c4) */
/* WARNING: Removing unreachable block (ram,0x07208008) */
/* WARNING: Removing unreachable block (ram,0x07208388) */

void Meta_WitAi_Requests_AudioStreamHandler__TryToFinalize(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  long lVar20;
  long unaff_x19;
  int *unaff_x20;
  long lVar21;
  long *plVar22;
  long lVar23;
  undefined8 uVar24;
  long *plVar25;
  long lVar26;
  uint uVar27;
  long *unaff_x26;
  long lVar28;
  undefined8 *puVar29;
  undefined1 auVar30 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  int *in_stack_00000058;
  long *in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000088;
  long in_stack_00000090;
  int *in_stack_00000098;
  long *in_stack_000000a0;
  char cStack00000000000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  char cStack00000000000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  char cStack0000000000000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001a0;
  byte bStack00000000000001a8;
  uint uStack00000000000001bc;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  int iStack00000000000001d4;
  int *in_stack_000001d8;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xc98));
  FUN_04077588(PTR_DAT_092bdca0);
  FUN_04077588(PTR_DAT_092bc2d8);
  FUN_04077588(PTR_DAT_092bdca8);
  FUN_04077588(PTR_DAT_092bdcb0);
  FUN_04077588(PTR_DAT_092bc2f8);
  FUN_04077588(PTR_DAT_092bc300);
  FUN_04077588(PTR_DAT_092bd960);
  FUN_04077588(PTR_DAT_092bdcb8);
  FUN_04077588(PTR_DAT_092bda30);
  FUN_04077588(PTR_DAT_092bdcc0);
  FUN_04077588(PTR_DAT_092858e8);
  FUN_04077588(PTR_DAT_092bdcc8);
  FUN_04077588(PTR_DAT_092bdcd0);
  FUN_04077588(PTR_DAT_092bdcd8);
  FUN_04077588(PTR_DAT_092bdce0);
  FUN_04077588(PTR_DAT_092bdce8);
  FUN_04077588(PTR_DAT_092bdcf0);
  FUN_04077588(PTR_DAT_092bdcf8);
  *(undefined1 *)(unaff_x19 + 0x45c) = 1;
  in_stack_000001c0 = 0;
  in_stack_000001c8 = 0;
  uStack00000000000001bc = 0;
  in_stack_000001a0 = 0;
  _bStack00000000000001a8 = 0;
  _cStack0000000000000180 = 0;
  in_stack_00000188 = 0;
  in_stack_00000190 = 0;
  in_stack_00000170 = 0;
  in_stack_00000178 = 0;
  unaff_x26[1] = 0;
  *unaff_x26 = 0;
  unaff_x26[3] = 0;
  unaff_x26[2] = 0;
  plVar25 = (long *)PTR_DAT_092bdc70;
  puVar29 = (undefined8 *)PTR_DAT_092bc300;
  in_stack_00000138 = 0;
  in_stack_00000140 = 0;
  in_stack_00000148 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  in_stack_00000130 = 0;
  in_stack_00000108 = 0;
  in_stack_00000110 = 0;
  in_stack_00000118 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000d8 = 0;
  iStack00000000000001d4 = *unaff_x20;
  lVar28 = *(long *)(unaff_x20 + 10);
  in_stack_000000e8 = 0;
  _cStack00000000000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  _cStack00000000000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = (int *)0x0;
  in_stack_000000a0 = (long *)0x0;
  in_stack_00000088 = 0;
  if (iStack00000000000001d4 == 1) {
    in_stack_00000178 = *(undefined8 *)(unaff_x20 + 0x1e);
    unaff_x20[0x1e] = 0;
    unaff_x20[0x1f] = 0;
    iStack00000000000001d4 = -1;
    *unaff_x20 = -1;
    goto LAB_07208e34;
  }
  if (iStack00000000000001d4 != 0) {
    lVar21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbf8);
    FUN_06ef2024(lVar21,*(undefined8 *)PTR_DAT_092bdb80);
    if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar26 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x60);
    if (lVar26 == 0) {
      uVar24 = 0;
      in_stack_000001d8[0xc] = 0;
    }
    else {
      uVar24 = *(undefined8 *)PTR_DAT_092bdb48;
      in_stack_000001d8[0xc] = *(int *)(lVar26 + 0x18);
      uVar24 = FUN_04077674(uVar24);
    }
    if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined8 *)(lVar28 + 0x90) = uVar24;
    thunk_FUN_040ec700();
    piVar18 = in_stack_000001d8 + 0xe;
    piVar18[0] = 0;
    piVar18[1] = 0;
    thunk_FUN_040ec700(piVar18,0);
    if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar26 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x20);
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar24 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdb38,*(undefined4 *)(lVar26 + 0x18));
    *(undefined8 *)(lVar28 + 0x68) = uVar24;
    thunk_FUN_040ec700();
    puVar3 = PTR_DAT_092bdc68;
    if (in_stack_000001d8[0xc] < 1) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      uVar10 = 0;
      do {
        if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar26 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x60);
        if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar26 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar11 = *(long *)(lVar28 + 0x110);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar17 = *(long *)(lVar26 + uVar10 * 8 + 0x20);
        *(int *)(lVar11 + uVar10 * 4 + 0x20) = iVar8;
        lVar26 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbe0);
        FUN_06efbe2c(lVar26,*(undefined8 *)PTR_DAT_092bdb78);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar11 = *(long *)(lVar17 + 0x18);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar19 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar19) {
          uVar27 = 0;
          do {
            if (uVar19 <= uVar27) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar23 = *(long *)(lVar11 + (long)(int)uVar27 * 8 + 0x20);
            uVar14 = FUN_06efc9cc(lVar26,lVar23,*(undefined8 *)PTR_DAT_092bdb50);
            if ((uVar14 & 1) == 0) {
              uVar24 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdc98);
              FUN_05c26520(uVar24,*(undefined8 *)PTR_DAT_092bdc80);
              FUN_06efc7c4(lVar26,lVar23,uVar24,*(undefined8 *)PTR_DAT_092bdbd0);
            }
            lVar9 = FUN_06efc758(lVar26,lVar23,*(undefined8 *)PTR_DAT_092bdbb0);
            if (lVar9 == 0) {
LAB_072077e4:
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar16 = *(long *)(lVar9 + 0x10);
            lVar20 = *(long *)puVar3;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar16 == 0) goto LAB_072077e4;
            uVar19 = *(uint *)(lVar9 + 0x18);
            if (uVar19 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar19 + 1;
              plVar25 = (long *)(lVar16 + (long)(int)uVar19 * 8 + 0x20);
              *plVar25 = lVar23;
              thunk_FUN_040ec700(plVar25,lVar23);
            }
            else {
              FUN_05c26d88(lVar9,lVar23,
                           *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(long *)(lVar23 + 0x28) == 0) {
Meta_WitAi_Requests_AudioStreamHandler__Dispose:
              lVar9 = *(long *)(lVar23 + 0x10);
              if (-1 < *(int *)(lVar23 + 0x18)) {
                uVar7 = 4;
                if (2 < *(int *)(lVar23 + 0x20) - 4U) {
                  uVar7 = 2;
                }
                FUN_07200548(lVar28,*(int *)(lVar23 + 0x18),uVar7);
              }
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar14 = FUN_06ef44fc(lVar21,lVar23,&stack0x000001bc,*(undefined8 *)PTR_DAT_092bdb70);
              if ((uVar14 & 1) == 0) {
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(int *)(lVar9 + 0x18) < 0) {
                  if (*(int *)(lVar9 + 0x14) < 0) {
                    uStack00000000000001bc = 1;
                  }
                  else {
                    uStack00000000000001bc = 3;
                  }
                }
                else {
                  uStack00000000000001bc = 7;
                }
              }
              if (*(int *)(lVar23 + 0x20) - 4U < 3) {
                uVar19 = *(uint *)(lVar23 + 0x1c);
                if ((int)uVar19 < 0) {
LAB_072073ac:
                  uStack00000000000001bc = uStack00000000000001bc | 2;
                }
                else {
                  if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar9 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x58);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  if (*(uint *)(lVar9 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  lVar9 = *(long *)(lVar9 + (ulong)uVar19 * 8 + 0x20);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar14 = FUN_0721d438(lVar9,0);
                  if ((uVar14 & 1) != 0) goto LAB_072073ac;
                }
                uVar19 = *(uint *)(lVar23 + 0x1c);
                if (-1 < (int)uVar19) {
                  if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar9 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x58);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  if (*(uint *)(lVar9 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  lVar9 = *(long *)(lVar9 + (ulong)uVar19 * 8 + 0x20);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar14 = FUN_0721d458(lVar9,0);
                  if ((uVar14 & 1) != 0) {
                    uStack00000000000001bc = uStack00000000000001bc | 4;
                  }
                }
              }
              FUN_06ef29c0(lVar21,lVar23,uStack00000000000001bc,*(undefined8 *)PTR_DAT_092bdbc8);
              if (*(int *)(lVar23 + 0x1c) < 0) {
                *(byte *)(lVar28 + 0xe0) = *(byte *)(lVar28 + 0xe0) | *(int *)(lVar23 + 0x20) == 0;
              }
              else {
                if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if ((*(long *)(*(long *)(in_stack_000001d8 + 8) + 0x58) != 0) &&
                   (*(int *)(lVar23 + 0x20) == 0)) {
                  FUN_071fe6c4(lVar28);
                }
              }
            }
            else {
              if (*(long *)(in_stack_000001d8 + 0xe) == 0) {
                uVar24 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbe8);
                FUN_06efbe2c(uVar24,*(undefined8 *)PTR_DAT_092bdb88);
                *(undefined8 *)(in_stack_000001d8 + 0xe) = uVar24;
                thunk_FUN_040ec700(in_stack_000001d8 + 0xe,uVar24);
LAB_0720729c:
                if (*(long *)(lVar17 + 0x28) == 0) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = *(undefined8 *)(*(long *)(lVar17 + 0x28) + 0x10);
                }
                auVar30 = FUN_07200370(lVar28,lVar23,uVar24);
                if (*(long *)(in_stack_000001d8 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830(0,auVar30._8_8_,auVar30._0_8_);
                }
                FUN_06efc7c4(*(long *)(in_stack_000001d8 + 0xe),lVar23,auVar30._0_8_,
                             *(undefined8 *)PTR_DAT_092bdbd8);
                goto Meta_WitAi_Requests_AudioStreamHandler__Dispose;
              }
              uVar14 = FUN_06efc9cc(*(long *)(in_stack_000001d8 + 0xe),lVar23,
                                    *(undefined8 *)PTR_DAT_092bdb58);
              if ((uVar14 & 1) == 0) goto LAB_0720729c;
            }
            uVar19 = *(uint *)(lVar11 + 0x18);
            uVar27 = uVar27 + 1;
          } while ((int)uVar27 < (int)uVar19);
        }
        plVar25 = *(long **)(lVar28 + 0x90);
        if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if ((lVar26 != 0) &&
           (lVar11 = thunk_FUN_040b4e00(lVar26,*(undefined8 *)(*plVar25 + 0x40)), lVar11 == 0)) {
          uVar24 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar24,0);
        }
        if (*(uint *)(plVar25 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        plVar25[uVar10 + 4] = lVar26;
        thunk_FUN_040ec700(plVar25 + uVar10 + 4,lVar26);
        if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        iVar6 = FUN_06efc490(lVar26,*(undefined8 *)PTR_DAT_092bdb98);
        uVar10 = uVar10 + 1;
        iVar8 = iVar6 + iVar8;
      } while ((int)uVar10 < in_stack_000001d8[0xc]);
    }
    plVar25 = (long *)PTR_DAT_092bdc70;
    puVar29 = (undefined8 *)PTR_DAT_092bc300;
    lVar26 = *(long *)(in_stack_000001d8 + 8);
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    unaff_x26 = (long *)&stack0x00000150;
    if (*(long *)(lVar26 + 0x88) != 0) {
      uVar24 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdca0,
                            *(undefined4 *)(*(long *)(lVar26 + 0x88) + 0x18));
      *(undefined8 *)(lVar28 + 0x118) = uVar24;
      thunk_FUN_040ec700(lVar28 + 0x118);
      if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar26 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x88);
      if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar19 = *(uint *)(lVar26 + 0x18);
      if (0 < (int)uVar19) {
        uVar27 = 0;
        do {
          if (uVar19 <= uVar27) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar11 = *(long *)(lVar26 + (long)(int)uVar27 * 8 + 0x20);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          iVar6 = *(int *)(lVar11 + 0x18);
          if (-1 < iVar6) {
            FUN_07200548(lVar28,iVar6,0x100);
          }
          uVar19 = *(uint *)(lVar26 + 0x18);
          uVar27 = uVar27 + 1;
        } while ((int)uVar27 < (int)uVar19);
      }
      lVar26 = *(long *)(in_stack_000001d8 + 8);
      if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
    lVar26 = *(long *)(lVar26 + 0x68);
    if ((lVar26 != 0) && (uVar19 = *(uint *)(lVar26 + 0x18), 0 < (int)uVar19)) {
      lVar11 = 0;
      do {
        if (uVar19 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar17 = *(long *)(lVar26 + 0x20 + lVar11 * 8);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar17 = *(long *)(lVar17 + 0x50);
        if (((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x10), lVar17 != 0)) &&
           (lVar17 = *(long *)(lVar17 + 0x10), lVar17 != 0)) {
          if (-1 < *(int *)(lVar17 + 0x10)) {
            FUN_07200548(lVar28,*(int *)(lVar17 + 0x10),0x4400);
          }
          if (-1 < *(int *)(lVar17 + 0x14)) {
            FUN_07200548(lVar28,*(int *)(lVar17 + 0x14),0x4800);
          }
          if (-1 < *(int *)(lVar17 + 0x18)) {
            FUN_07200548(lVar28,*(int *)(lVar17 + 0x18),0x5000);
          }
        }
        uVar19 = *(uint *)(lVar26 + 0x18);
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < (int)uVar19);
    }
    lVar26 = *(long *)(lVar28 + 0x110);
    if (lVar26 != 0) {
      if (*(uint *)(lVar26 + 0x18) <= (uint)in_stack_000001d8[0xc]) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(int *)(lVar26 + (long)in_stack_000001d8[0xc] * 4 + 0x20) = iVar8;
    }
    uVar24 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdcc0,iVar8);
    *(undefined8 *)(lVar28 + 0x108) = uVar24;
    thunk_FUN_040ec700(lVar28 + 0x108);
    uVar24 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdcb8,iVar8);
    *(undefined8 *)(lVar28 + 0x80) = uVar24;
    thunk_FUN_040ec700();
    puVar3 = PTR_DAT_092bdba0;
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar7 = FUN_06ef268c(lVar21,*(undefined8 *)PTR_DAT_092bdba0);
    uVar24 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdc90);
    FUN_05bd8e98(uVar24,uVar7,*(undefined8 *)PTR_DAT_092bdc88);
    *(undefined8 *)(in_stack_000001d8 + 0x10) = uVar24;
    thunk_FUN_040ec700(in_stack_000001d8 + 0x10,uVar24);
    uVar7 = FUN_06ef268c(lVar21,*(undefined8 *)puVar3);
    uVar24 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbf0);
    FUN_06efbe44(uVar24,uVar7,*(undefined8 *)PTR_DAT_092bdb90);
    *(undefined8 *)(lVar28 + 0x88) = uVar24;
    thunk_FUN_040ec700((undefined8 *)(lVar28 + 0x88),uVar24);
    uVar24 = *(undefined8 *)PTR_DAT_092bdb68;
    *(undefined1 *)(in_stack_000001d8 + 0x12) = 1;
    FUN_06ef2dd0(&stack0x00000028,lVar21,uVar24);
    in_stack_00000058 = (int *)in_stack_00000030;
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000068 = in_stack_00000040;
    in_stack_00000060 = (long *)in_stack_00000038;
    in_stack_00000070 = in_stack_00000048;
    *(undefined8 *)(in_stack_000001d8 + 0x16) = in_stack_00000030;
    *(undefined8 *)(in_stack_000001d8 + 0x14) = in_stack_00000028;
    *(long *)(in_stack_000001d8 + 0x1a) = in_stack_00000040;
    *(undefined8 *)(in_stack_000001d8 + 0x18) = in_stack_00000038;
    *(undefined8 *)(in_stack_000001d8 + 0x1c) = in_stack_00000048;
    thunk_FUN_040ec700(in_stack_000001d8 + 0x14,0);
    in_stack_00000058 = &stack0x000001d4;
    in_stack_00000050 = 0;
    in_stack_00000060 = (long *)&stack0x000001d8;
    unaff_x20 = in_stack_000001d8;
    if (iStack00000000000001d4 != 0) goto LAB_072079ac;
  }
  in_stack_00000060 = (long *)&stack0x000001d8;
  in_stack_00000058 = &stack0x000001d4;
  in_stack_00000050 = 0;
  in_stack_00000178 = *(undefined8 *)(unaff_x20 + 0x1e);
  unaff_x20[0x1e] = 0;
  unaff_x20[0x1f] = 0;
  iStack00000000000001d4 = -1;
  *unaff_x20 = -1;
  do {
    FUN_07591f7c(&stack0x00000178,0);
LAB_072079ac:
    uVar10 = FUN_053841d4(in_stack_000001d8 + 0x14,*(undefined8 *)PTR_DAT_092bdc20);
    if ((uVar10 & 1) == 0) {
LAB_07207e98:
      iVar8 = 0x52;
      goto LAB_07207e9c;
    }
    lVar21 = *(long *)(in_stack_000001d8 + 0x18);
    unaff_x26[0xb] = *(long *)(in_stack_000001d8 + 0x1a);
    unaff_x26[10] = lVar21;
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar26 = *(long *)(lVar21 + 0x10);
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar8 = *(int *)(lVar26 + 0x18);
    iVar6 = *(int *)(lVar26 + 0x14);
    if (*(int *)(lVar26 + 0x1c) < 0) {
      lVar11 = 0;
    }
    else {
      iVar15 = 1;
      if (-1 < *(int *)(lVar26 + 0x20)) {
        iVar15 = 2;
      }
      lVar11 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,
                            (((((iVar15 - ((int)~*(uint *)(lVar26 + 0x24) >> 0x1f)) -
                               ((int)~*(uint *)(lVar26 + 0x28) >> 0x1f)) -
                              ((int)~*(uint *)(lVar26 + 0x2c) >> 0x1f)) -
                             ((int)~*(uint *)(lVar26 + 0x30) >> 0x1f)) -
                            ((int)~*(uint *)(lVar26 + 0x34) >> 0x1f)) -
                            ((int)~*(uint *)(lVar26 + 0x38) >> 0x1f));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar19 = *(uint *)(lVar11 + 0x18);
      if (uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined4 *)(lVar11 + 0x20) = *(undefined4 *)(lVar26 + 0x1c);
      if (-1 < *(int *)(lVar26 + 0x20)) {
        if (uVar19 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar11 + 0x24) = *(int *)(lVar26 + 0x20);
      }
      if (-1 < *(int *)(lVar26 + 0x24)) {
        if (uVar19 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar11 + 0x28) = *(int *)(lVar26 + 0x24);
      }
      if (-1 < *(int *)(lVar26 + 0x28)) {
        if (uVar19 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar11 + 0x2c) = *(int *)(lVar26 + 0x28);
      }
      if (-1 < *(int *)(lVar26 + 0x2c)) {
        if (uVar19 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar11 + 0x30) = *(int *)(lVar26 + 0x2c);
      }
      if (-1 < *(int *)(lVar26 + 0x30)) {
        if (uVar19 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar11 + 0x34) = *(int *)(lVar26 + 0x30);
      }
      if (-1 < *(int *)(lVar26 + 0x34)) {
        if (uVar19 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar11 + 0x38) = *(int *)(lVar26 + 0x34);
      }
      if (-1 < *(int *)(lVar26 + 0x38)) {
        if (uVar19 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar11 + 0x3c) = *(int *)(lVar26 + 0x38);
      }
      if (-1 < *(int *)(lVar26 + 0x3c)) {
        if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar25 = *(long **)(lVar28 + 0x130);
        if (plVar25 != (long *)0x0) {
          lVar23 = *(long *)PTR_DAT_092a2dd8;
          lVar17 = *(long *)(lVar23 + 0x38);
          if (lVar17 == 0) {
            FUN_040b1b28(lVar23);
            lVar17 = *(long *)(lVar23 + 0x38);
          }
          lVar17 = *(long *)(lVar17 + 0x10);
          if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_040b1acc();
          }
          if (*(int *)(lVar17 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar17 = *(long *)(*(long *)(lVar23 + 0x38) + 0x10);
          if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_040b1acc();
          }
          lVar23 = *plVar25;
          uVar24 = **(undefined8 **)(lVar17 + 0xb8);
          uVar10 = (ulong)*(ushort *)(lVar23 + 0x12e);
          if (uVar10 != 0) {
            piVar18 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_092bc2c8) {
                puVar12 = (undefined8 *)(lVar23 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_07207bcc;
              }
              uVar10 = uVar10 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar25,*(long *)PTR_DAT_092bc2c8,1);
LAB_07207bcc:
          (*(code *)*puVar12)(plVar25,0x33,uVar24,puVar12[1]);
        }
      }
    }
    plVar25 = (long *)PTR_DAT_092bdc70;
    if (_bStack00000000000001a8 == 1) {
      if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar24 = *(undefined8 *)(lVar28 + 0x130);
      plVar13 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdce8);
      System_Linq_Enumerable_<ExceptIterator>d__77<KeyValuePair<object,_object>>__System_IDisposable_Dispose
                (plVar13,uVar24,*(undefined8 *)PTR_DAT_092bdce0);
    }
    else if (_bStack00000000000001a8 == 3) {
      if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar24 = *(undefined8 *)(lVar28 + 0x130);
      plVar13 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf8);
      FUN_0699efb4(plVar13,uVar24,*(undefined8 *)PTR_DAT_092bdcd8);
    }
    else {
      if (_bStack00000000000001a8 != 7) {
        if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar13 = *(long **)(lVar28 + 0x130);
        unaff_x26 = (long *)&stack0x00000150;
        if (plVar13 == (long *)0x0) goto LAB_072082cc;
        lVar21 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
        uVar24 = FUN_059f7a58(&stack0x000001a0,*(undefined8 *)PTR_DAT_092bdc48);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(lVar21 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(undefined8 *)(lVar21 + 0x20) = uVar24;
        thunk_FUN_040ec700();
        lVar26 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar26 + 0x12e);
        if (uVar10 == 0) goto LAB_0720829c;
        piVar18 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        goto LAB_07208284;
      }
      if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar24 = *(undefined8 *)(lVar28 + 0x130);
      plVar13 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf0);
      FUN_0699fff4(plVar13,uVar24,*(undefined8 *)PTR_DAT_092bdcd0);
    }
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    bVar5 = 0;
    if (iVar6 < 0) {
      bVar5 = bStack00000000000001a8 >> 1 & 1;
    }
    bVar1 = 0;
    if (iVar8 < 0) {
      bVar1 = bStack00000000000001a8 >> 2 & 1;
    }
    *(byte *)(plVar13 + 2) = bVar5;
    *(byte *)((long)plVar13 + 0x11) = bVar1;
    plVar25 = (long *)PTR_DAT_092bdc70;
    if (*(long *)(lVar28 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    unaff_x26 = (long *)&stack0x00000150;
    FUN_06efc7c4(*(long *)(lVar28 + 0x88),lVar21,plVar13,*(undefined8 *)PTR_DAT_092bdbc0);
    (**(code **)(*plVar13 + 0x178))
              (&stack0x00000028,plVar13,lVar28,*(undefined4 *)(lVar26 + 0x10),
               *(undefined4 *)(lVar26 + 0x14),*(undefined4 *)(lVar26 + 0x18),lVar11,
               *(undefined4 *)(lVar26 + 0x40),*(undefined4 *)(lVar26 + 0x48));
    in_stack_00000188 = in_stack_00000030;
    _cStack0000000000000180 = in_stack_00000028;
    uVar24 = _cStack0000000000000180;
    cStack0000000000000180 = (char)in_stack_00000028;
    in_stack_00000190 = in_stack_00000038;
    _cStack0000000000000180 = uVar24;
    if (cStack0000000000000180 == '\0') {
      *(undefined1 *)(in_stack_000001d8 + 0x12) = 0;
      goto LAB_07207e98;
    }
    lVar21 = *(long *)(in_stack_000001d8 + 0x10);
    auVar30 = FUN_06016048(&stack0x00000180,*puVar29);
    if (lVar21 == 0) {
LAB_072082f8:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar26 = *(long *)(lVar21 + 0x10);
    lVar11 = *plVar25;
    *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
    if (lVar26 == 0) goto LAB_072082f8;
    uVar19 = *(uint *)(lVar21 + 0x18);
    if (uVar19 < *(uint *)(lVar26 + 0x18)) {
      *(uint *)(lVar21 + 0x18) = uVar19 + 1;
      *(undefined1 (*) [16])(lVar26 + (long)(int)uVar19 * 0x10 + 0x20) = auVar30;
    }
    else {
      FUN_05bd96b8(lVar21,auVar30._0_8_,auVar30._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    plVar13 = *(long **)(lVar28 + 0x20);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar21 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar10 != 0) {
      piVar18 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_092bd558) {
          puVar12 = (undefined8 *)(lVar21 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_07207e08;
        }
        uVar10 = uVar10 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar10 != 0);
    }
    puVar12 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092bd558,2);
LAB_07207e08:
    lVar21 = (*(code *)*puVar12)(plVar13,puVar12[1]);
    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000178 = FUN_076f1ee4(lVar21,0);
    uVar10 = FUN_07591eb4(&stack0x00000178,0);
  } while ((uVar10 & 1) != 0);
  iStack00000000000001d4 = 0;
  *in_stack_000001d8 = 0;
  *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
  thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
  piVar18 = in_stack_000001d8;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1,in_stack_000001d8);
  }
  FUN_04995830(piVar18 + 2,&stack0x00000178,in_stack_000001d8,*(undefined8 *)PTR_DAT_092bdb40);
  iVar8 = 0x51;
  goto LAB_07207e9c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar18 = piVar18 + 4;
    if (uVar10 == 0) break;
LAB_07208284:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_092bc2c8) {
      puVar12 = (undefined8 *)(lVar26 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_072082b8;
    }
  }
LAB_0720829c:
  puVar12 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092bc2c8,0);
LAB_072082b8:
  (*(code *)*puVar12)(plVar13,9,lVar21,puVar12[1]);
LAB_072082cc:
  iVar8 = 0x48;
LAB_07207e9c:
  if (*in_stack_00000058 < 0) {
    FUN_053842f8(*in_stack_00000060 + 0x50,*(undefined8 *)PTR_DAT_092bdc08);
  }
  if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if ((iVar8 == 0) || (iVar8 == 0x52)) {
    iVar8 = in_stack_000001d8[0x12];
    in_stack_000001d8[0x1c] = 0;
    in_stack_000001d8[0x1d] = 0;
    in_stack_000001d8[0x16] = 0;
    in_stack_000001d8[0x17] = 0;
    in_stack_000001d8[0x14] = 0;
    in_stack_000001d8[0x15] = 0;
    in_stack_000001d8[0x1a] = 0;
    in_stack_000001d8[0x1b] = 0;
    in_stack_000001d8[0x18] = 0;
    in_stack_000001d8[0x19] = 0;
    if ((char)iVar8 != '\0') {
      if (*(long *)(in_stack_000001d8 + 0xe) != 0) {
        FUN_06efcc0c(&stack0x00000050,*(long *)(in_stack_000001d8 + 0xe),
                     *(undefined8 *)PTR_DAT_092bdb60);
        puVar3 = PTR_DAT_092bdc18;
        in_stack_00000170 = in_stack_00000070;
        unaff_x26[1] = (long)in_stack_00000058;
        *unaff_x26 = in_stack_00000050;
        unaff_x26[3] = in_stack_00000068;
        unaff_x26[2] = (long)in_stack_00000060;
        in_stack_00000050 = 0;
        in_stack_00000060 = (long *)&stack0x00000150;
        in_stack_00000058 = &stack0x000001d4;
        while (uVar10 = FUN_05385f24(&stack0x00000150,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
          if (in_stack_00000168 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          auVar30 = FUN_07215d10(in_stack_00000168,0);
          lVar21 = *(long *)(in_stack_000001d8 + 0x10);
          if (lVar21 == 0) {
LAB_0720830c:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar26 = *(long *)(lVar21 + 0x10);
          lVar11 = *plVar25;
          *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
          if (lVar26 == 0) goto LAB_0720830c;
          uVar19 = *(uint *)(lVar21 + 0x18);
          if (uVar19 < *(uint *)(lVar26 + 0x18)) {
            *(uint *)(lVar21 + 0x18) = uVar19 + 1;
            *(undefined1 (*) [16])(lVar26 + (long)(int)uVar19 * 0x10 + 0x20) = auVar30;
          }
          else {
            FUN_05bd96b8(lVar21,auVar30._0_8_,auVar30._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (iStack00000000000001d4 < 0) {
          FUN_05386044(in_stack_00000060,*(undefined8 *)PTR_DAT_092bdc10);
        }
      }
      if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar10 = FUN_0721f760(*(long *)(in_stack_000001d8 + 8),0);
      if ((uVar10 & 1) != 0) {
        lVar21 = *(long *)(in_stack_000001d8 + 8);
        if (lVar21 != 0) {
          uVar10 = 0;
          do {
            lVar21 = *(long *)(lVar21 + 0x28);
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((int)*(uint *)(lVar21 + 0x18) <= (int)uVar10) goto LAB_072081b8;
            if (*(uint *)(lVar21 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar21 = *(long *)(lVar21 + uVar10 * 8 + 0x20);
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar26 = *(long *)(lVar21 + 0x20);
            if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar19 = *(uint *)(lVar26 + 0x18);
            if (0 < (int)uVar19) {
              lVar11 = 0;
              do {
                if (uVar19 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                lVar17 = *(long *)(lVar26 + 0x20 + lVar11 * 8);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07200548(lVar28,*(undefined4 *)(lVar17 + 0x10),0x200);
                uVar19 = *(uint *)(lVar26 + 0x18);
                lVar11 = lVar11 + 1;
              } while ((int)lVar11 < (int)uVar19);
            }
            lVar26 = *(long *)(lVar21 + 0x18);
            if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar19 = *(uint *)(lVar26 + 0x18);
            if (0 < (int)uVar19) {
              uVar27 = 0;
              do {
                if (uVar19 <= uVar27) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                lVar11 = *(long *)(lVar26 + (long)(int)uVar27 * 8 + 0x20);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar17 = *(long *)(lVar21 + 0x20);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(uint *)(lVar17 + 0x18) <= *(uint *)(lVar11 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(lVar11 + 0x10) * 8 + 0x20);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar7 = *(undefined4 *)(lVar17 + 0x24);
                iVar8 = FUN_07212d80(*(long *)(lVar11 + 0x18),0);
                if (iVar8 < 4) {
                  if (iVar8 == 2) {
                    if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    FUN_07200548(lVar28,uVar7,0x400);
                  }
                  else if (iVar8 == 3) {
                    if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    FUN_07200548(lVar28,uVar7,0x800);
                  }
                }
                else if (iVar8 == 4) {
                  if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07200548(lVar28,uVar7,0x1000);
                }
                else if (iVar8 == 5) {
                  if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07200548(lVar28,uVar7,0x2000);
                }
                uVar19 = *(uint *)(lVar26 + 0x18);
                uVar27 = uVar27 + 1;
              } while ((int)uVar27 < (int)uVar19);
            }
            uVar10 = uVar10 + 1;
            lVar21 = *(long *)(in_stack_000001d8 + 8);
          } while (lVar21 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
LAB_072081b8:
      if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar21 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x20);
      if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar24 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdb00,*(undefined4 *)(lVar21 + 0x18));
      if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined8 *)(lVar28 + 0x60) = uVar24;
      thunk_FUN_040ec700();
      uVar19 = 0;
      in_stack_000001d8[0x20] = 0;
      puVar12 = (undefined8 *)PTR_DAT_092bda28;
      plVar13 = (long *)PTR_DAT_092bda30;
      puVar2 = (undefined8 *)PTR_DAT_092bdba8;
      piVar18 = in_stack_000001d8;
      while( true ) {
        PTR_DAT_092bda28 = (undefined *)puVar12;
        PTR_DAT_092bda30 = (undefined *)plVar13;
        PTR_DAT_092bdba8 = (undefined *)puVar2;
        if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(lVar28 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(*(long *)(lVar28 + 0x60) + 0x18) <= (int)uVar19) break;
        if (*(long *)(piVar18 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar21 = *(long *)(*(long *)(piVar18 + 8) + 0x20);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar21 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar21 = *(long *)(lVar21 + (long)(int)uVar19 * 8 + 0x20);
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (-1 < *(int *)(lVar21 + 0x10)) {
          bVar5 = FUN_072199cc(lVar21,0);
          if (bVar5 < 4) {
            if (bVar5 == 1) {
              lVar21 = *(long *)(lVar28 + 0x68);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar21 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              iVar8 = *(int *)(lVar21 + (long)in_stack_000001d8[0x20] * 4 + 0x20);
              if (iVar8 < 0x200) {
                if ((iVar8 == 2) || (iVar8 == 4)) {
                  lVar21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd858);
                  FUN_06e52ce0(lVar21,*(undefined8 *)PTR_DAT_092bdb08);
                  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar26 = *(long *)(lVar28 + 0x68);
                  if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar19 = in_stack_000001d8[0x20];
                  if (*(uint *)(lVar26 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  FUN_07200c50(lVar28,*(undefined8 *)(in_stack_000001d8 + 8),(long)(int)uVar19,
                               lVar21 + 0x10,&stack0x00000138,lVar21 + 0x18,
                               *(int *)(lVar26 + (long)(int)uVar19 * 4 + 0x20) == 4);
                  lVar26 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar30 = FUN_06016048(&stack0x00000138,*puVar29);
                  if (lVar26 == 0) {
LAB_07209348:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar11 = *(long *)(lVar26 + 0x10);
                  lVar17 = *plVar25;
                  *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_07209348;
                  uVar19 = *(uint *)(lVar26 + 0x18);
                  if (uVar19 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                    *(undefined1 (*) [16])(lVar11 + (long)(int)uVar19 * 0x10 + 0x20) = auVar30;
                  }
                  else {
                    FUN_05bd96b8(lVar26,auVar30._0_8_,auVar30._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar13 = *(long **)(lVar28 + 0x60);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar19 = in_stack_000001d8[0x20];
                  lVar26 = thunk_FUN_040b4e00(lVar21,*(undefined8 *)(*plVar13 + 0x40));
                  if (lVar26 == 0) {
                    uVar24 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar24,0);
                  }
                  if (*(uint *)(plVar13 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar13[(long)(int)uVar19 + 4] = lVar21;
                  thunk_FUN_040ec700(plVar13 + (long)(int)uVar19 + 4,lVar21);
                }
              }
              else if ((iVar8 == 0x200) || (iVar8 == 0x2000)) {
                lVar21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdb30);
                FUN_06e52d58(lVar21,*(undefined8 *)PTR_DAT_092bdb18);
                FUN_07201d94(lVar28,*(undefined8 *)(in_stack_000001d8 + 8),in_stack_000001d8[0x20],
                             &stack0x000000c0,&stack0x000000a8);
                if (cStack00000000000000c0 != '\0') {
                  auVar30 = FUN_06008be0(&stack0x000000c0,*(undefined8 *)PTR_DAT_092bd960);
                  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  *(undefined1 (*) [16])(lVar21 + 0x10) = auVar30;
                }
                if (cStack00000000000000a8 != '\0') {
                  lVar26 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar30 = FUN_06016048(&stack0x000000a8,*puVar29);
                  if (lVar26 == 0) {
LAB_07209384:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar11 = *(long *)(lVar26 + 0x10);
                  lVar17 = *plVar25;
                  *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_07209384;
                  uVar19 = *(uint *)(lVar26 + 0x18);
                  if (uVar19 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                    *(undefined1 (*) [16])(lVar11 + (long)(int)uVar19 * 0x10 + 0x20) = auVar30;
                  }
                  else {
                    FUN_05bd96b8(lVar26,auVar30._0_8_,auVar30._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                plVar13 = *(long **)(lVar28 + 0x60);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar19 = in_stack_000001d8[0x20];
                if ((lVar21 != 0) &&
                   (lVar26 = thunk_FUN_040b4e00(lVar21,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar26 == 0)) {
                  uVar24 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar24,0);
                }
                if (*(uint *)(plVar13 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar13[(long)(int)uVar19 + 4] = lVar21;
                thunk_FUN_040ec700(plVar13 + (long)(int)uVar19 + 4,lVar21);
              }
            }
            else if (bVar5 == 3) {
              lVar21 = *(long *)(lVar28 + 0x68);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar21 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              uVar19 = *(uint *)(lVar21 + (long)in_stack_000001d8[0x20] * 4 + 0x20);
              if ((uVar19 >> 10 & 1) == 0) {
                if ((uVar19 >> 0xc & 1) != 0) {
                  lVar21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                  FUN_06e52d78(lVar21,*(undefined8 *)PTR_DAT_092bdb10);
                  if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07201560(lVar28,*(undefined8 *)(in_stack_000001d8 + 8),in_stack_000001d8[0x20]
                               ,lVar21 + 0x10,&stack0x000000d8,0);
                  lVar26 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar30 = FUN_06016048(&stack0x000000d8,*puVar29);
                  if (lVar26 == 0) {
LAB_0720936c:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar11 = *(long *)(lVar26 + 0x10);
                  lVar17 = *plVar25;
                  *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_0720936c;
                  uVar19 = *(uint *)(lVar26 + 0x18);
                  if (uVar19 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                    *(undefined1 (*) [16])(lVar11 + (long)(int)uVar19 * 0x10 + 0x20) = auVar30;
                  }
                  else {
                    FUN_05bd96b8(lVar26,auVar30._0_8_,auVar30._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar13 = *(long **)(lVar28 + 0x60);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar19 = in_stack_000001d8[0x20];
                  lVar26 = thunk_FUN_040b4e00(lVar21,*(undefined8 *)(*plVar13 + 0x40));
                  if (lVar26 == 0) {
                    uVar24 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar24,0);
                  }
                  if (*(uint *)(plVar13 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar13[(long)(int)uVar19 + 4] = lVar21;
                  thunk_FUN_040ec700(plVar13 + (long)(int)uVar19 + 4,lVar21);
                }
              }
              else {
                lVar21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                FUN_06e52d78(lVar21,*(undefined8 *)PTR_DAT_092bdb10);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07201560(lVar28,*(undefined8 *)(in_stack_000001d8 + 8),in_stack_000001d8[0x20],
                             lVar21 + 0x10,&stack0x00000108,1);
                lVar26 = *(long *)(in_stack_000001d8 + 0x10);
                auVar30 = FUN_06016048(&stack0x00000108,*puVar29);
                if (lVar26 == 0) {
LAB_07209328:
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar11 = *(long *)(lVar26 + 0x10);
                lVar17 = *plVar25;
                *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_07209328;
                uVar19 = *(uint *)(lVar26 + 0x18);
                if (uVar19 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                  *(undefined1 (*) [16])(lVar11 + (long)(int)uVar19 * 0x10 + 0x20) = auVar30;
                }
                else {
                  FUN_05bd96b8(lVar26,auVar30._0_8_,auVar30._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                plVar13 = *(long **)(lVar28 + 0x60);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar19 = in_stack_000001d8[0x20];
                lVar26 = thunk_FUN_040b4e00(lVar21,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar26 == 0) {
                  uVar24 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar24,0);
                }
                if (*(uint *)(plVar13 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar13[(long)(int)uVar19 + 4] = lVar21;
                thunk_FUN_040ec700(plVar13 + (long)(int)uVar19 + 4,lVar21);
              }
            }
          }
          else if (bVar5 == 4) {
            lVar21 = *(long *)(lVar28 + 0x68);
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar21 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if ((*(uint *)(lVar21 + (long)in_stack_000001d8[0x20] * 4 + 0x20) >> 0xb & 1) != 0) {
              lVar21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd988);
              FUN_06e52d38(lVar21,*(undefined8 *)PTR_DAT_092bdb28);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_07201930(lVar28,*(undefined8 *)(in_stack_000001d8 + 8),in_stack_000001d8[0x20],
                           lVar21 + 0x10,&stack0x000000f0);
              lVar26 = *(long *)(in_stack_000001d8 + 0x10);
              auVar30 = FUN_06016048(&stack0x000000f0,*puVar29);
              if (lVar26 == 0) {
LAB_07209334:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar11 = *(long *)(lVar26 + 0x10);
              lVar17 = *plVar25;
              *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_07209334;
              uVar19 = *(uint *)(lVar26 + 0x18);
              if (uVar19 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                *(undefined1 (*) [16])(lVar11 + (long)(int)uVar19 * 0x10 + 0x20) = auVar30;
              }
              else {
                FUN_05bd96b8(lVar26,auVar30._0_8_,auVar30._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              plVar13 = *(long **)(lVar28 + 0x60);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar19 = in_stack_000001d8[0x20];
              lVar26 = thunk_FUN_040b4e00(lVar21,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar26 == 0) {
                uVar24 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar24,0);
              }
              if (*(uint *)(plVar13 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar13[(long)(int)uVar19 + 4] = lVar21;
              thunk_FUN_040ec700(plVar13 + (long)(int)uVar19 + 4,lVar21);
            }
          }
          else if (bVar5 == 7) {
            lVar21 = *(long *)(lVar28 + 0x68);
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar21 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (*(int *)(lVar21 + (long)in_stack_000001d8[0x20] * 4 + 0x20) == 0x100) {
              lVar21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd9c8);
              FUN_06e52d18(lVar21,*(undefined8 *)PTR_DAT_092bdb20);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_072011ec(lVar28,*(undefined8 *)(in_stack_000001d8 + 8),in_stack_000001d8[0x20],
                           lVar21 + 0x10,&stack0x00000120);
              lVar26 = *(long *)(in_stack_000001d8 + 0x10);
              auVar30 = FUN_06016048(&stack0x00000120,*puVar29);
              if (lVar26 == 0) {
LAB_0720931c:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar11 = *(long *)(lVar26 + 0x10);
              lVar17 = *plVar25;
              *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_0720931c;
              uVar19 = *(uint *)(lVar26 + 0x18);
              if (uVar19 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar26 + 0x18) = uVar19 + 1;
                *(undefined1 (*) [16])(lVar11 + (long)(int)uVar19 * 0x10 + 0x20) = auVar30;
              }
              else {
                FUN_05bd96b8(lVar26,auVar30._0_8_,auVar30._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              plVar13 = *(long **)(lVar28 + 0x60);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar19 = in_stack_000001d8[0x20];
              lVar26 = thunk_FUN_040b4e00(lVar21,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar26 == 0) {
                uVar24 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar24,0);
              }
              if (*(uint *)(plVar13 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar13[(long)(int)uVar19 + 4] = lVar21;
              thunk_FUN_040ec700(plVar13 + (long)(int)uVar19 + 4,lVar21);
            }
          }
          plVar13 = *(long **)(lVar28 + 0x20);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar21 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar21 + 0x12e);
          if (uVar10 != 0) {
            piVar18 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_092bd558) {
                puVar12 = (undefined8 *)(lVar21 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                goto LAB_07208e08;
              }
              uVar10 = uVar10 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092bd558,2);
LAB_07208e08:
          lVar21 = (*(code *)*puVar12)(plVar13,puVar12[1]);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          in_stack_00000178 = FUN_076f1ee4(lVar21,0);
          uVar10 = FUN_07591eb4(&stack0x00000178,0);
          if ((uVar10 & 1) == 0) {
            iStack00000000000001d4 = 1;
            *in_stack_000001d8 = 1;
            *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
            thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
            piVar18 = in_stack_000001d8;
            if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1_00,in_stack_000001d8);
            }
            FUN_04995830(piVar18 + 2,&stack0x00000178,in_stack_000001d8,
                         *(undefined8 *)PTR_DAT_092bdb40);
            return;
          }
LAB_07208e34:
          FUN_07591f7c(&stack0x00000178,0);
          uVar19 = in_stack_000001d8[0x20];
          piVar18 = in_stack_000001d8;
        }
        uVar19 = uVar19 + 1;
        piVar18[0x20] = uVar19;
        puVar12 = (undefined8 *)PTR_DAT_092bda28;
        plVar13 = (long *)PTR_DAT_092bda30;
        puVar2 = (undefined8 *)PTR_DAT_092bdba8;
      }
      if (0 < piVar18[0xc]) {
        uVar19 = 0;
        uVar10 = 0;
        do {
          if (*(long *)(piVar18 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar21 = *(long *)(*(long *)(piVar18 + 8) + 0x60);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar21 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar26 = *(long *)(lVar28 + 0x90);
          if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar26 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar26 = *(long *)(lVar26 + uVar10 * 8 + 0x20);
          if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar11 = *(long *)(lVar21 + uVar10 * 8 + 0x20);
          lVar21 = FUN_06efc5fc(lVar26,*(undefined8 *)PTR_DAT_092bdbb8);
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_0685b4f8(&stack0x00000050,lVar21,*(undefined8 *)PTR_DAT_092bdcc8);
          in_stack_00000090 = in_stack_00000050;
          in_stack_000000a0 = in_stack_00000060;
          in_stack_00000050 = 0;
          in_stack_00000060 = &stack0x00000090;
          in_stack_00000098 = in_stack_00000058;
          in_stack_00000058 = &stack0x000001d4;
          while (uVar14 = FUN_05386d5c(&stack0x00000090,*(undefined8 *)PTR_DAT_092bdc28),
                plVar25 = in_stack_000000a0, (uVar14 & 1) != 0) {
            if (in_stack_000000a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((int)in_stack_000000a0[3] < 1) {
              plVar22 = (long *)0x0;
            }
            else {
              iVar8 = 0;
              plVar22 = (long *)0x0;
              do {
                lVar21 = FUN_05c26ab8(plVar25,iVar8,*puVar12);
                if (plVar22 == (long *)0x0) {
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar26 = plVar25[3];
                  uVar24 = *(undefined8 *)(lVar11 + 0x10);
                  plVar22 = (long *)thunk_FUN_040b4efc(*plVar13);
                  FUN_07216bd0(plVar22,uVar19,(int)lVar26,uVar24,0);
                }
                else {
                  bVar5 = *(byte *)(*plVar13 + 0x130);
                  if (*(byte *)(*plVar22 + 0x130) < bVar5) {
                    plVar22 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar5 * 8 + -8) != *plVar13)
                  {
                    plVar22 = (long *)0x0;
                  }
                }
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar21 + 0x28) == 0) {
                  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                }
                else {
                  if (*(long *)(in_stack_000001d8 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar26 = FUN_06efc758(*(long *)(in_stack_000001d8 + 0xe),lVar21,*puVar2);
                  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  plVar22[5] = lVar26;
                  thunk_FUN_040ec700();
                }
                FUN_072175f4(plVar22,iVar8,*(undefined4 *)(lVar21 + 0x1c),0);
                iVar8 = iVar8 + 1;
              } while (iVar8 < (int)plVar25[3]);
            }
            plVar25 = *(long **)(lVar28 + 0x80);
            if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((plVar22 != (long *)0x0) &&
               (lVar21 = thunk_FUN_040b4e00(plVar22,*(undefined8 *)(*plVar25 + 0x40)), lVar21 == 0))
            {
              uVar24 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar24,0);
            }
            if (*(uint *)(plVar25 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar25[(long)(int)uVar19 + 4] = (long)plVar22;
            thunk_FUN_040ec700(plVar25 + (long)(int)uVar19 + 4,plVar22);
            uVar19 = uVar19 + 1;
          }
          if (*in_stack_00000058 < 0) {
            System_Collections_Generic_EqualityComparer<IndirectDrawInfo>__get_Default
                      (in_stack_00000060,*(undefined8 *)PTR_DAT_092bdc00);
          }
          if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077828();
          }
          uVar10 = uVar10 + 1;
          piVar18 = in_stack_000001d8;
        } while ((int)uVar10 < in_stack_000001d8[0xc]);
      }
      if (*(long *)(piVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar24 = FUN_05bdb0a8(*(long *)(piVar18 + 0x10),*(undefined8 *)PTR_DAT_092bdc78);
      FUN_05f3fd7c(&stack0x000001c0,uVar24,4,*(undefined8 *)PTR_DAT_092bdca8);
      auVar30 = FUN_0896aff0(in_stack_000001c0,in_stack_000001c8,0);
      puVar3 = PTR_DAT_092bc2d8;
      *(undefined1 (*) [16])(lVar28 + 0x70) = auVar30;
      FUN_05f3ffd8(&stack0x000001c0,*(undefined8 *)puVar3);
      FUN_0896af44(0);
      bVar4 = (char)in_stack_000001d8[0x12] != '\0';
      goto LAB_07209208;
    }
  }
  else if (iVar8 != 0x48) {
    return;
  }
  bVar4 = false;
LAB_07209208:
  puVar3 = PTR_DAT_092899f8;
  *in_stack_000001d8 = -2;
  piVar18 = in_stack_000001d8 + 0xe;
  piVar18[0] = 0;
  piVar18[1] = 0;
  thunk_FUN_040ec700(piVar18,0);
  piVar18 = in_stack_000001d8 + 0x10;
  piVar18[0] = 0;
  piVar18[1] = 0;
  thunk_FUN_040ec700(piVar18,0);
  piVar18 = in_stack_000001d8;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_065d0838(piVar18 + 2,bVar4,*(undefined8 *)puVar3);
  return;
}


