/*
FUNCTION_NAME: FUN_07206b20
ENTRY_POINT: 07206b20
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x072090c4) */
/* WARNING: Removing unreachable block (ram,0x07208008) */
/* WARNING: Removing unreachable block (ram,0x07208388) */

void FUN_07206b20(int *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int **ppiVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  long *plVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined1 auVar31 [16];
  int *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  long lStack_200;
  undefined8 local_1f8;
  int *local_1f0;
  int *piStack_1e8;
  int **local_1e0;
  long lStack_1d8;
  undefined8 local_1d0;
  undefined4 local_1b8;
  int *local_1b0;
  int *piStack_1a8;
  int **local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  int *local_f0;
  int *piStack_e8;
  int **ppiStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  int *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a0;
  undefined8 uStack_98;
  uint local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_6c;
  int *local_68;
  
  local_68 = param_1;
  if ((DAT_0988f45c & 1) == 0) {
    FUN_04077588(PTR_DAT_092bdb00);
    FUN_04077588(PTR_DAT_092bdb08);
    FUN_04077588(PTR_DAT_092bd858);
    FUN_04077588(PTR_DAT_092bdb10);
    FUN_04077588(PTR_DAT_092bdb18);
    FUN_04077588(PTR_DAT_092bdb20);
    FUN_04077588(PTR_DAT_092bdb28);
    FUN_04077588(PTR_DAT_092bd9c8);
    FUN_04077588(PTR_DAT_092bd980);
    FUN_04077588(PTR_DAT_092bd988);
    FUN_04077588(PTR_DAT_092bdb30);
    FUN_04077588(PTR_DAT_092bdb38);
    FUN_04077588(PTR_DAT_092a2dd8);
    FUN_04077588(PTR_DAT_092bdb40);
    FUN_04077588(PTR_DAT_092899f8);
    FUN_04077588(PTR_DAT_09289990);
    FUN_04077588(PTR_DAT_092bdb48);
    FUN_04077588(PTR_DAT_092bdb50);
    FUN_04077588(PTR_DAT_092bdb58);
    FUN_04077588(PTR_DAT_092bdb60);
    FUN_04077588(PTR_DAT_092bdb68);
    FUN_04077588(PTR_DAT_092bdb70);
    FUN_04077588(PTR_DAT_092bdb78);
    FUN_04077588(PTR_DAT_092bdb80);
    FUN_04077588(PTR_DAT_092bdb88);
    FUN_04077588(PTR_DAT_092bdb90);
    FUN_04077588(PTR_DAT_092bdb98);
    FUN_04077588(PTR_DAT_092bdba0);
    FUN_04077588(PTR_DAT_092bdba8);
    FUN_04077588(PTR_DAT_092bdbb0);
    FUN_04077588(PTR_DAT_092bdbb8);
    FUN_04077588(PTR_DAT_092bdbc0);
    FUN_04077588(PTR_DAT_092bdbc8);
    FUN_04077588(PTR_DAT_092bdbd0);
    FUN_04077588(PTR_DAT_092bdbd8);
    FUN_04077588(PTR_DAT_092bdbe0);
    FUN_04077588(PTR_DAT_092bdbe8);
    FUN_04077588(PTR_DAT_092bdbf0);
    FUN_04077588(PTR_DAT_092bdbf8);
    FUN_04077588(PTR_DAT_092bdc00);
    FUN_04077588(PTR_DAT_092bdc08);
    FUN_04077588(PTR_DAT_092bdc10);
    FUN_04077588(PTR_DAT_092bdc18);
    FUN_04077588(PTR_DAT_092bdc20);
    FUN_04077588(PTR_DAT_092bdc28);
    FUN_04077588(PTR_DAT_092bdc30);
    FUN_04077588(PTR_DAT_092bdc38);
    FUN_04077588(PTR_DAT_092bdc40);
    FUN_04077588(PTR_DAT_092bc2c8);
    FUN_04077588(PTR_DAT_092bd558);
    FUN_04077588(PTR_DAT_092869a0);
    FUN_04077588(PTR_DAT_092bdc48);
    FUN_04077588(PTR_DAT_092bdc50);
    FUN_04077588(PTR_DAT_092bdc58);
    FUN_04077588(PTR_DAT_092bdc60);
    FUN_04077588(PTR_DAT_092bdc68);
    FUN_04077588(PTR_DAT_092bdc70);
    FUN_04077588(PTR_DAT_092bdc78);
    FUN_04077588(PTR_DAT_092bdc80);
    FUN_04077588(PTR_DAT_092bdc88);
    FUN_04077588(PTR_DAT_092bda20);
    FUN_04077588(PTR_DAT_092bda28);
    FUN_04077588(PTR_DAT_092bdc90);
    FUN_04077588(PTR_DAT_092bdc98);
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
    DAT_0988f45c = 1;
  }
  plVar26 = (long *)PTR_DAT_092bdc70;
  puVar30 = (undefined8 *)PTR_DAT_092bc300;
  local_80 = 0;
  uStack_78 = 0;
  local_84 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_c0 = (int *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  piStack_e8 = (int *)0x0;
  local_f0 = (int *)0x0;
  local_d8 = 0;
  ppiStack_e0 = (int **)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_160 = 0;
  local_168 = 0;
  local_6c = *param_1;
  lVar29 = *(long *)(param_1 + 10);
  local_158 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_1b0 = (int *)0x0;
  piStack_1a8 = (int *)0x0;
  local_1a0 = (int **)0x0;
  local_1b8 = 0;
  if (local_6c == 1) {
    local_c8 = *(undefined8 *)(param_1 + 0x1e);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    local_6c = -1;
    *param_1 = -1;
    goto LAB_07208e34;
  }
  if (local_6c != 0) {
    lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbf8);
    FUN_06ef2024(lVar22,*(undefined8 *)PTR_DAT_092bdb80);
    if (*(long *)(local_68 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar27 = *(long *)(*(long *)(local_68 + 8) + 0x60);
    if (lVar27 == 0) {
      uVar25 = 0;
      local_68[0xc] = 0;
    }
    else {
      uVar25 = *(undefined8 *)PTR_DAT_092bdb48;
      local_68[0xc] = *(int *)(lVar27 + 0x18);
      uVar25 = FUN_04077674(uVar25);
    }
    if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined8 *)(lVar29 + 0x90) = uVar25;
    thunk_FUN_040ec700();
    piVar19 = local_68 + 0xe;
    piVar19[0] = 0;
    piVar19[1] = 0;
    thunk_FUN_040ec700(piVar19,0);
    if (*(long *)(local_68 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar27 = *(long *)(*(long *)(local_68 + 8) + 0x20);
    if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar25 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdb38,*(undefined4 *)(lVar27 + 0x18));
    *(undefined8 *)(lVar29 + 0x68) = uVar25;
    thunk_FUN_040ec700();
    puVar3 = PTR_DAT_092bdc68;
    if (local_68[0xc] < 1) {
      iVar9 = 0;
    }
    else {
      iVar9 = 0;
      uVar11 = 0;
      do {
        if (*(long *)(local_68 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar27 = *(long *)(*(long *)(local_68 + 8) + 0x60);
        if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar27 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar12 = *(long *)(lVar29 + 0x110);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar18 = *(long *)(lVar27 + uVar11 * 8 + 0x20);
        *(int *)(lVar12 + uVar11 * 4 + 0x20) = iVar9;
        lVar27 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbe0);
        FUN_06efbe2c(lVar27,*(undefined8 *)PTR_DAT_092bdb78);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar12 = *(long *)(lVar18 + 0x18);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar20 = *(uint *)(lVar12 + 0x18);
        if (0 < (int)uVar20) {
          uVar28 = 0;
          do {
            if (uVar20 <= uVar28) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar24 = *(long *)(lVar12 + (long)(int)uVar28 * 8 + 0x20);
            uVar15 = FUN_06efc9cc(lVar27,lVar24,*(undefined8 *)PTR_DAT_092bdb50);
            if ((uVar15 & 1) == 0) {
              uVar25 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdc98);
              FUN_05c26520(uVar25,*(undefined8 *)PTR_DAT_092bdc80);
              FUN_06efc7c4(lVar27,lVar24,uVar25,*(undefined8 *)PTR_DAT_092bdbd0);
            }
            lVar10 = FUN_06efc758(lVar27,lVar24,*(undefined8 *)PTR_DAT_092bdbb0);
            if (lVar10 == 0) {
LAB_072077e4:
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar17 = *(long *)(lVar10 + 0x10);
            lVar21 = *(long *)puVar3;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar17 == 0) goto LAB_072077e4;
            uVar20 = *(uint *)(lVar10 + 0x18);
            if (uVar20 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar20 + 1;
              plVar26 = (long *)(lVar17 + (long)(int)uVar20 * 8 + 0x20);
              *plVar26 = lVar24;
              thunk_FUN_040ec700(plVar26,lVar24);
            }
            else {
              FUN_05c26d88(lVar10,lVar24,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(long *)(lVar24 + 0x28) == 0) {
Meta_WitAi_Requests_AudioStreamHandler__Dispose:
              lVar10 = *(long *)(lVar24 + 0x10);
              if (-1 < *(int *)(lVar24 + 0x18)) {
                uVar8 = 4;
                if (2 < *(int *)(lVar24 + 0x20) - 4U) {
                  uVar8 = 2;
                }
                FUN_07200548(lVar29,*(int *)(lVar24 + 0x18),uVar8);
              }
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar15 = FUN_06ef44fc(lVar22,lVar24,&local_84,*(undefined8 *)PTR_DAT_092bdb70);
              if ((uVar15 & 1) == 0) {
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(int *)(lVar10 + 0x18) < 0) {
                  if (*(int *)(lVar10 + 0x14) < 0) {
                    local_84 = 1;
                  }
                  else {
                    local_84 = 3;
                  }
                }
                else {
                  local_84 = 7;
                }
              }
              if (*(int *)(lVar24 + 0x20) - 4U < 3) {
                uVar20 = *(uint *)(lVar24 + 0x1c);
                if ((int)uVar20 < 0) {
LAB_072073ac:
                  local_84 = local_84 | 2;
                }
                else {
                  if (*(long *)(local_68 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar10 = *(long *)(*(long *)(local_68 + 8) + 0x58);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  if (*(uint *)(lVar10 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  lVar10 = *(long *)(lVar10 + (ulong)uVar20 * 8 + 0x20);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar15 = FUN_0721d438(lVar10,0);
                  if ((uVar15 & 1) != 0) goto LAB_072073ac;
                }
                uVar20 = *(uint *)(lVar24 + 0x1c);
                if (-1 < (int)uVar20) {
                  if (*(long *)(local_68 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar10 = *(long *)(*(long *)(local_68 + 8) + 0x58);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  if (*(uint *)(lVar10 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  lVar10 = *(long *)(lVar10 + (ulong)uVar20 * 8 + 0x20);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar15 = FUN_0721d458(lVar10,0);
                  if ((uVar15 & 1) != 0) {
                    local_84 = local_84 | 4;
                  }
                }
              }
              FUN_06ef29c0(lVar22,lVar24,local_84,*(undefined8 *)PTR_DAT_092bdbc8);
              if (*(int *)(lVar24 + 0x1c) < 0) {
                *(byte *)(lVar29 + 0xe0) = *(byte *)(lVar29 + 0xe0) | *(int *)(lVar24 + 0x20) == 0;
              }
              else {
                if (*(long *)(local_68 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if ((*(long *)(*(long *)(local_68 + 8) + 0x58) != 0) &&
                   (*(int *)(lVar24 + 0x20) == 0)) {
                  FUN_071fe6c4(lVar29);
                }
              }
            }
            else {
              if (*(long *)(local_68 + 0xe) == 0) {
                uVar25 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbe8);
                FUN_06efbe2c(uVar25,*(undefined8 *)PTR_DAT_092bdb88);
                *(undefined8 *)(local_68 + 0xe) = uVar25;
                thunk_FUN_040ec700(local_68 + 0xe,uVar25);
LAB_0720729c:
                if (*(long *)(lVar18 + 0x28) == 0) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = *(undefined8 *)(*(long *)(lVar18 + 0x28) + 0x10);
                }
                auVar31 = FUN_07200370(lVar29,lVar24,uVar25);
                if (*(long *)(local_68 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830(0,auVar31._8_8_,auVar31._0_8_);
                }
                FUN_06efc7c4(*(long *)(local_68 + 0xe),lVar24,auVar31._0_8_,
                             *(undefined8 *)PTR_DAT_092bdbd8);
                goto Meta_WitAi_Requests_AudioStreamHandler__Dispose;
              }
              uVar15 = FUN_06efc9cc(*(long *)(local_68 + 0xe),lVar24,*(undefined8 *)PTR_DAT_092bdb58
                                   );
              if ((uVar15 & 1) == 0) goto LAB_0720729c;
            }
            uVar20 = *(uint *)(lVar12 + 0x18);
            uVar28 = uVar28 + 1;
          } while ((int)uVar28 < (int)uVar20);
        }
        plVar26 = *(long **)(lVar29 + 0x90);
        if (plVar26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if ((lVar27 != 0) &&
           (lVar12 = thunk_FUN_040b4e00(lVar27,*(undefined8 *)(*plVar26 + 0x40)), lVar12 == 0)) {
          uVar25 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar25,0);
        }
        if (*(uint *)(plVar26 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        plVar26[uVar11 + 4] = lVar27;
        thunk_FUN_040ec700(plVar26 + uVar11 + 4,lVar27);
        if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        iVar7 = FUN_06efc490(lVar27,*(undefined8 *)PTR_DAT_092bdb98);
        uVar11 = uVar11 + 1;
        iVar9 = iVar7 + iVar9;
      } while ((int)uVar11 < local_68[0xc]);
    }
    plVar26 = (long *)PTR_DAT_092bdc70;
    puVar30 = (undefined8 *)PTR_DAT_092bc300;
    lVar27 = *(long *)(local_68 + 8);
    if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar27 + 0x88) != 0) {
      uVar25 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdca0,
                            *(undefined4 *)(*(long *)(lVar27 + 0x88) + 0x18));
      *(undefined8 *)(lVar29 + 0x118) = uVar25;
      thunk_FUN_040ec700(lVar29 + 0x118);
      if (*(long *)(local_68 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar27 = *(long *)(*(long *)(local_68 + 8) + 0x88);
      if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar20 = *(uint *)(lVar27 + 0x18);
      if (0 < (int)uVar20) {
        uVar28 = 0;
        do {
          if (uVar20 <= uVar28) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar12 = *(long *)(lVar27 + (long)(int)uVar28 * 8 + 0x20);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          iVar7 = *(int *)(lVar12 + 0x18);
          if (-1 < iVar7) {
            FUN_07200548(lVar29,iVar7,0x100);
          }
          uVar20 = *(uint *)(lVar27 + 0x18);
          uVar28 = uVar28 + 1;
        } while ((int)uVar28 < (int)uVar20);
      }
      lVar27 = *(long *)(local_68 + 8);
      if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
    }
    lVar27 = *(long *)(lVar27 + 0x68);
    if ((lVar27 != 0) && (uVar20 = *(uint *)(lVar27 + 0x18), 0 < (int)uVar20)) {
      lVar12 = 0;
      do {
        if (uVar20 <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar18 = *(long *)(lVar27 + 0x20 + lVar12 * 8);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar18 = *(long *)(lVar18 + 0x50);
        if (((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x10), lVar18 != 0)) &&
           (lVar18 = *(long *)(lVar18 + 0x10), lVar18 != 0)) {
          if (-1 < *(int *)(lVar18 + 0x10)) {
            FUN_07200548(lVar29,*(int *)(lVar18 + 0x10),0x4400);
          }
          if (-1 < *(int *)(lVar18 + 0x14)) {
            FUN_07200548(lVar29,*(int *)(lVar18 + 0x14),0x4800);
          }
          if (-1 < *(int *)(lVar18 + 0x18)) {
            FUN_07200548(lVar29,*(int *)(lVar18 + 0x18),0x5000);
          }
        }
        uVar20 = *(uint *)(lVar27 + 0x18);
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < (int)uVar20);
    }
    lVar27 = *(long *)(lVar29 + 0x110);
    if (lVar27 != 0) {
      if (*(uint *)(lVar27 + 0x18) <= (uint)local_68[0xc]) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(int *)(lVar27 + (long)local_68[0xc] * 4 + 0x20) = iVar9;
    }
    uVar25 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdcc0,iVar9);
    *(undefined8 *)(lVar29 + 0x108) = uVar25;
    thunk_FUN_040ec700(lVar29 + 0x108);
    uVar25 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdcb8,iVar9);
    *(undefined8 *)(lVar29 + 0x80) = uVar25;
    thunk_FUN_040ec700();
    puVar3 = PTR_DAT_092bdba0;
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar8 = FUN_06ef268c(lVar22,*(undefined8 *)PTR_DAT_092bdba0);
    uVar25 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdc90);
    FUN_05bd8e98(uVar25,uVar8,*(undefined8 *)PTR_DAT_092bdc88);
    *(undefined8 *)(local_68 + 0x10) = uVar25;
    thunk_FUN_040ec700(local_68 + 0x10,uVar25);
    uVar8 = FUN_06ef268c(lVar22,*(undefined8 *)puVar3);
    uVar25 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbf0);
    FUN_06efbe44(uVar25,uVar8,*(undefined8 *)PTR_DAT_092bdb90);
    *(undefined8 *)(lVar29 + 0x88) = uVar25;
    thunk_FUN_040ec700((undefined8 *)(lVar29 + 0x88),uVar25);
    uVar25 = *(undefined8 *)PTR_DAT_092bdb68;
    *(undefined1 *)(local_68 + 0x12) = 1;
    FUN_06ef2dd0(&local_218,lVar22,uVar25);
    piStack_1e8 = (int *)uStack_210;
    local_1f0 = local_218;
    lStack_1d8 = lStack_200;
    local_1e0 = (int **)local_208;
    local_1d0 = local_1f8;
    *(undefined8 *)(local_68 + 0x16) = uStack_210;
    *(int **)(local_68 + 0x14) = local_218;
    *(long *)(local_68 + 0x1a) = lStack_200;
    *(undefined8 *)(local_68 + 0x18) = local_208;
    *(undefined8 *)(local_68 + 0x1c) = local_1f8;
    thunk_FUN_040ec700(local_68 + 0x14,0);
    piStack_1e8 = &local_6c;
    local_1f0 = (int *)0x0;
    local_1e0 = &local_68;
    param_1 = local_68;
    if (local_6c != 0) goto LAB_072079ac;
  }
  local_1e0 = &local_68;
  piStack_1e8 = &local_6c;
  local_1f0 = (int *)0x0;
  local_c8 = *(undefined8 *)(param_1 + 0x1e);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  local_6c = -1;
  *param_1 = -1;
  do {
    FUN_07591f7c(&local_c8,0);
LAB_072079ac:
    uVar11 = FUN_053841d4(local_68 + 0x14,*(undefined8 *)PTR_DAT_092bdc20);
    if ((uVar11 & 1) == 0) {
LAB_07207e98:
      iVar9 = 0x52;
      goto LAB_07207e9c;
    }
    uStack_98 = *(undefined8 *)(local_68 + 0x1a);
    lVar22 = *(long *)(local_68 + 0x18);
    local_a0 = lVar22;
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar27 = *(long *)(lVar22 + 0x10);
    if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar9 = *(int *)(lVar27 + 0x18);
    iVar7 = *(int *)(lVar27 + 0x14);
    if (*(int *)(lVar27 + 0x1c) < 0) {
      lVar12 = 0;
    }
    else {
      iVar16 = 1;
      if (-1 < *(int *)(lVar27 + 0x20)) {
        iVar16 = 2;
      }
      lVar12 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,
                            (((((iVar16 - ((int)~*(uint *)(lVar27 + 0x24) >> 0x1f)) -
                               ((int)~*(uint *)(lVar27 + 0x28) >> 0x1f)) -
                              ((int)~*(uint *)(lVar27 + 0x2c) >> 0x1f)) -
                             ((int)~*(uint *)(lVar27 + 0x30) >> 0x1f)) -
                            ((int)~*(uint *)(lVar27 + 0x34) >> 0x1f)) -
                            ((int)~*(uint *)(lVar27 + 0x38) >> 0x1f));
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar20 = *(uint *)(lVar12 + 0x18);
      if (uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(lVar27 + 0x1c);
      if (-1 < *(int *)(lVar27 + 0x20)) {
        if (uVar20 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x24) = *(int *)(lVar27 + 0x20);
      }
      if (-1 < *(int *)(lVar27 + 0x24)) {
        if (uVar20 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x28) = *(int *)(lVar27 + 0x24);
      }
      if (-1 < *(int *)(lVar27 + 0x28)) {
        if (uVar20 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x2c) = *(int *)(lVar27 + 0x28);
      }
      if (-1 < *(int *)(lVar27 + 0x2c)) {
        if (uVar20 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x30) = *(int *)(lVar27 + 0x2c);
      }
      if (-1 < *(int *)(lVar27 + 0x30)) {
        if (uVar20 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x34) = *(int *)(lVar27 + 0x30);
      }
      if (-1 < *(int *)(lVar27 + 0x34)) {
        if (uVar20 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x38) = *(int *)(lVar27 + 0x34);
      }
      if (-1 < *(int *)(lVar27 + 0x38)) {
        if (uVar20 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x3c) = *(int *)(lVar27 + 0x38);
      }
      if (-1 < *(int *)(lVar27 + 0x3c)) {
        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar26 = *(long **)(lVar29 + 0x130);
        if (plVar26 != (long *)0x0) {
          lVar24 = *(long *)PTR_DAT_092a2dd8;
          lVar18 = *(long *)(lVar24 + 0x38);
          if (lVar18 == 0) {
            FUN_040b1b28(lVar24);
            lVar18 = *(long *)(lVar24 + 0x38);
          }
          lVar18 = *(long *)(lVar18 + 0x10);
          if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = FUN_040b1acc();
          }
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar18 = *(long *)(*(long *)(lVar24 + 0x38) + 0x10);
          if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = FUN_040b1acc();
          }
          lVar24 = *plVar26;
          uVar25 = **(undefined8 **)(lVar18 + 0xb8);
          uVar11 = (ulong)*(ushort *)(lVar24 + 0x12e);
          if (uVar11 != 0) {
            piVar19 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092bc2c8) {
                puVar13 = (undefined8 *)(lVar24 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_07207bcc;
              }
              uVar11 = uVar11 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_040b1e00(plVar26,*(long *)PTR_DAT_092bc2c8,1);
LAB_07207bcc:
          (*(code *)*puVar13)(plVar26,0x33,uVar25,puVar13[1]);
        }
      }
    }
    plVar26 = (long *)PTR_DAT_092bdc70;
    if ((int)uStack_98 == 1) {
      if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar25 = *(undefined8 *)(lVar29 + 0x130);
      plVar14 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdce8);
      System_Linq_Enumerable_<ExceptIterator>d__77<KeyValuePair<object,_object>>__System_IDisposable_Dispose
                (plVar14,uVar25,*(undefined8 *)PTR_DAT_092bdce0);
    }
    else if ((int)uStack_98 == 3) {
      if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar25 = *(undefined8 *)(lVar29 + 0x130);
      plVar14 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf8);
      FUN_0699efb4(plVar14,uVar25,*(undefined8 *)PTR_DAT_092bdcd8);
    }
    else {
      if ((int)uStack_98 != 7) {
        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar14 = *(long **)(lVar29 + 0x130);
        if (plVar14 == (long *)0x0) goto LAB_072082cc;
        lVar22 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
        uVar25 = FUN_059f7a58(&local_a0,*(undefined8 *)PTR_DAT_092bdc48);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(lVar22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(undefined8 *)(lVar22 + 0x20) = uVar25;
        thunk_FUN_040ec700();
        lVar27 = *plVar14;
        uVar11 = (ulong)*(ushort *)(lVar27 + 0x12e);
        if (uVar11 == 0) goto LAB_0720829c;
        piVar19 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        goto LAB_07208284;
      }
      if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar25 = *(undefined8 *)(lVar29 + 0x130);
      plVar14 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf0);
      FUN_0699fff4(plVar14,uVar25,*(undefined8 *)PTR_DAT_092bdcd0);
    }
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    bVar6 = 0;
    if (iVar7 < 0) {
      bVar6 = (byte)uStack_98 >> 1 & 1;
    }
    bVar1 = 0;
    if (iVar9 < 0) {
      bVar1 = (byte)uStack_98 >> 2 & 1;
    }
    *(byte *)(plVar14 + 2) = bVar6;
    *(byte *)((long)plVar14 + 0x11) = bVar1;
    plVar26 = (long *)PTR_DAT_092bdc70;
    if (*(long *)(lVar29 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_06efc7c4(*(long *)(lVar29 + 0x88),lVar22,plVar14,*(undefined8 *)PTR_DAT_092bdbc0);
    (**(code **)(*plVar14 + 0x178))
              (&local_218,plVar14,lVar29,*(undefined4 *)(lVar27 + 0x10),
               *(undefined4 *)(lVar27 + 0x14),*(undefined4 *)(lVar27 + 0x18),lVar12,
               *(undefined4 *)(lVar27 + 0x40),*(undefined4 *)(lVar27 + 0x48),
               *(undefined4 *)(lVar27 + 0x44),*(undefined8 *)(*plVar14 + 0x180));
    uStack_b8 = uStack_210;
    local_c0 = local_218;
    piVar19 = local_c0;
    local_c0._0_1_ = (char)local_218;
    local_b0 = local_208;
    local_c0 = piVar19;
    if ((char)local_c0 == '\0') {
      *(undefined1 *)(local_68 + 0x12) = 0;
      goto LAB_07207e98;
    }
    lVar22 = *(long *)(local_68 + 0x10);
    auVar31 = FUN_06016048(&local_c0,*puVar30);
    if (lVar22 == 0) {
LAB_072082f8:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar27 = *(long *)(lVar22 + 0x10);
    lVar12 = *plVar26;
    *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
    if (lVar27 == 0) goto LAB_072082f8;
    uVar20 = *(uint *)(lVar22 + 0x18);
    if (uVar20 < *(uint *)(lVar27 + 0x18)) {
      *(uint *)(lVar22 + 0x18) = uVar20 + 1;
      *(undefined1 (*) [16])(lVar27 + (long)(int)uVar20 * 0x10 + 0x20) = auVar31;
    }
    else {
      FUN_05bd96b8(lVar22,auVar31._0_8_,auVar31._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    plVar14 = *(long **)(lVar29 + 0x20);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar22 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar11 != 0) {
      piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092bd558) {
          puVar13 = (undefined8 *)(lVar22 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_07207e08;
        }
        uVar11 = uVar11 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar11 != 0);
    }
    puVar13 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092bd558,2);
LAB_07207e08:
    lVar22 = (*(code *)*puVar13)(plVar14,puVar13[1]);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    local_c8 = FUN_076f1ee4(lVar22,0);
    uVar11 = FUN_07591eb4(&local_c8,0);
  } while ((uVar11 & 1) != 0);
  local_6c = 0;
  *local_68 = 0;
  *(undefined8 *)(local_68 + 0x1e) = local_c8;
  thunk_FUN_040ec700(local_68 + 0x1e,0);
  piVar19 = local_68;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1,local_68);
  }
  FUN_04995830(piVar19 + 2,&local_c8,local_68,*(undefined8 *)PTR_DAT_092bdb40);
  iVar9 = 0x51;
  goto LAB_07207e9c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar19 = piVar19 + 4;
    if (uVar11 == 0) break;
LAB_07208284:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092bc2c8) {
      puVar13 = (undefined8 *)(lVar27 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_072082b8;
    }
  }
LAB_0720829c:
  puVar13 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092bc2c8,0);
LAB_072082b8:
  (*(code *)*puVar13)(plVar14,9,lVar22,puVar13[1]);
LAB_072082cc:
  iVar9 = 0x48;
LAB_07207e9c:
  if (*piStack_1e8 < 0) {
    FUN_053842f8(*local_1e0 + 0x14,*(undefined8 *)PTR_DAT_092bdc08);
  }
  if (local_1f0 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if ((iVar9 == 0) || (iVar9 == 0x52)) {
    iVar9 = local_68[0x12];
    local_68[0x1c] = 0;
    local_68[0x1d] = 0;
    local_68[0x16] = 0;
    local_68[0x17] = 0;
    local_68[0x14] = 0;
    local_68[0x15] = 0;
    local_68[0x1a] = 0;
    local_68[0x1b] = 0;
    local_68[0x18] = 0;
    local_68[0x19] = 0;
    if ((char)iVar9 != '\0') {
      if (*(long *)(local_68 + 0xe) != 0) {
        FUN_06efcc0c(&local_1f0,*(long *)(local_68 + 0xe),*(undefined8 *)PTR_DAT_092bdb60);
        puVar3 = PTR_DAT_092bdc18;
        local_d0 = local_1d0;
        piStack_e8 = piStack_1e8;
        local_f0 = local_1f0;
        local_d8 = lStack_1d8;
        ppiStack_e0 = local_1e0;
        local_1f0 = (int *)0x0;
        local_1e0 = &local_f0;
        piStack_1e8 = &local_6c;
        while (uVar11 = FUN_05385f24(&local_f0,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
          if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          auVar31 = FUN_07215d10(local_d8,0);
          lVar22 = *(long *)(local_68 + 0x10);
          if (lVar22 == 0) {
LAB_0720830c:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar27 = *(long *)(lVar22 + 0x10);
          lVar12 = *plVar26;
          *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
          if (lVar27 == 0) goto LAB_0720830c;
          uVar20 = *(uint *)(lVar22 + 0x18);
          if (uVar20 < *(uint *)(lVar27 + 0x18)) {
            *(uint *)(lVar22 + 0x18) = uVar20 + 1;
            *(undefined1 (*) [16])(lVar27 + (long)(int)uVar20 * 0x10 + 0x20) = auVar31;
          }
          else {
            FUN_05bd96b8(lVar22,auVar31._0_8_,auVar31._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (local_6c < 0) {
          FUN_05386044(local_1e0,*(undefined8 *)PTR_DAT_092bdc10);
        }
      }
      if (*(long *)(local_68 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = FUN_0721f760(*(long *)(local_68 + 8),0);
      if ((uVar11 & 1) != 0) {
        lVar22 = *(long *)(local_68 + 8);
        if (lVar22 != 0) {
          uVar11 = 0;
          do {
            lVar22 = *(long *)(lVar22 + 0x28);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((int)*(uint *)(lVar22 + 0x18) <= (int)uVar11) goto LAB_072081b8;
            if (*(uint *)(lVar22 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar22 = *(long *)(lVar22 + uVar11 * 8 + 0x20);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar27 = *(long *)(lVar22 + 0x20);
            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar20 = *(uint *)(lVar27 + 0x18);
            if (0 < (int)uVar20) {
              lVar12 = 0;
              do {
                if (uVar20 <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                lVar18 = *(long *)(lVar27 + 0x20 + lVar12 * 8);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07200548(lVar29,*(undefined4 *)(lVar18 + 0x10),0x200);
                uVar20 = *(uint *)(lVar27 + 0x18);
                lVar12 = lVar12 + 1;
              } while ((int)lVar12 < (int)uVar20);
            }
            lVar27 = *(long *)(lVar22 + 0x18);
            if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar20 = *(uint *)(lVar27 + 0x18);
            if (0 < (int)uVar20) {
              uVar28 = 0;
              do {
                if (uVar20 <= uVar28) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                lVar12 = *(long *)(lVar27 + (long)(int)uVar28 * 8 + 0x20);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar18 = *(long *)(lVar22 + 0x20);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(uint *)(lVar18 + 0x18) <= *(uint *)(lVar12 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                lVar18 = *(long *)(lVar18 + (long)(int)*(uint *)(lVar12 + 0x10) * 8 + 0x20);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar8 = *(undefined4 *)(lVar18 + 0x24);
                iVar9 = FUN_07212d80(*(long *)(lVar12 + 0x18),0);
                if (iVar9 < 4) {
                  if (iVar9 == 2) {
                    if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    FUN_07200548(lVar29,uVar8,0x400);
                  }
                  else if (iVar9 == 3) {
                    if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    FUN_07200548(lVar29,uVar8,0x800);
                  }
                }
                else if (iVar9 == 4) {
                  if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07200548(lVar29,uVar8,0x1000);
                }
                else if (iVar9 == 5) {
                  if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07200548(lVar29,uVar8,0x2000);
                }
                uVar20 = *(uint *)(lVar27 + 0x18);
                uVar28 = uVar28 + 1;
              } while ((int)uVar28 < (int)uVar20);
            }
            uVar11 = uVar11 + 1;
            lVar22 = *(long *)(local_68 + 8);
          } while (lVar22 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
LAB_072081b8:
      if (*(long *)(local_68 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar22 = *(long *)(*(long *)(local_68 + 8) + 0x20);
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar25 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdb00,*(undefined4 *)(lVar22 + 0x18));
      if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined8 *)(lVar29 + 0x60) = uVar25;
      thunk_FUN_040ec700();
      uVar20 = 0;
      local_68[0x20] = 0;
      puVar13 = (undefined8 *)PTR_DAT_092bda28;
      plVar14 = (long *)PTR_DAT_092bda30;
      puVar2 = (undefined8 *)PTR_DAT_092bdba8;
      piVar19 = local_68;
      while( true ) {
        PTR_DAT_092bda28 = (undefined *)puVar13;
        PTR_DAT_092bda30 = (undefined *)plVar14;
        PTR_DAT_092bdba8 = (undefined *)puVar2;
        if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(lVar29 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(*(long *)(lVar29 + 0x60) + 0x18) <= (int)uVar20) break;
        if (*(long *)(piVar19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar22 = *(long *)(*(long *)(piVar19 + 8) + 0x20);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar22 = *(long *)(lVar22 + (long)(int)uVar20 * 8 + 0x20);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (-1 < *(int *)(lVar22 + 0x10)) {
          bVar6 = FUN_072199cc(lVar22,0);
          if (bVar6 < 4) {
            if (bVar6 == 1) {
              lVar22 = *(long *)(lVar29 + 0x68);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar22 + 0x18) <= (uint)local_68[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              iVar9 = *(int *)(lVar22 + (long)local_68[0x20] * 4 + 0x20);
              if (iVar9 < 0x200) {
                if ((iVar9 == 2) || (iVar9 == 4)) {
                  lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd858);
                  FUN_06e52ce0(lVar22,*(undefined8 *)PTR_DAT_092bdb08);
                  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar27 = *(long *)(lVar29 + 0x68);
                  if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar20 = local_68[0x20];
                  if (*(uint *)(lVar27 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  FUN_07200c50(lVar29,*(undefined8 *)(local_68 + 8),(long)(int)uVar20,lVar22 + 0x10,
                               &local_108,lVar22 + 0x18,
                               *(int *)(lVar27 + (long)(int)uVar20 * 4 + 0x20) == 4);
                  lVar27 = *(long *)(local_68 + 0x10);
                  auVar31 = FUN_06016048(&local_108,*puVar30);
                  if (lVar27 == 0) {
LAB_07209348:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar12 = *(long *)(lVar27 + 0x10);
                  lVar18 = *plVar26;
                  *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                  if (lVar12 == 0) goto LAB_07209348;
                  uVar20 = *(uint *)(lVar27 + 0x18);
                  if (uVar20 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar27 + 0x18) = uVar20 + 1;
                    *(undefined1 (*) [16])(lVar12 + (long)(int)uVar20 * 0x10 + 0x20) = auVar31;
                  }
                  else {
                    FUN_05bd96b8(lVar27,auVar31._0_8_,auVar31._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar14 = *(long **)(lVar29 + 0x60);
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar20 = local_68[0x20];
                  lVar27 = thunk_FUN_040b4e00(lVar22,*(undefined8 *)(*plVar14 + 0x40));
                  if (lVar27 == 0) {
                    uVar25 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar25,0);
                  }
                  if (*(uint *)(plVar14 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar14[(long)(int)uVar20 + 4] = lVar22;
                  thunk_FUN_040ec700(plVar14 + (long)(int)uVar20 + 4,lVar22);
                }
              }
              else if ((iVar9 == 0x200) || (iVar9 == 0x2000)) {
                lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdb30);
                FUN_06e52d58(lVar22,*(undefined8 *)PTR_DAT_092bdb18);
                FUN_07201d94(lVar29,*(undefined8 *)(local_68 + 8),local_68[0x20],&local_180,
                             &local_198);
                if ((char)local_180 != '\0') {
                  auVar31 = FUN_06008be0(&local_180,*(undefined8 *)PTR_DAT_092bd960);
                  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  *(undefined1 (*) [16])(lVar22 + 0x10) = auVar31;
                }
                if ((char)local_198 != '\0') {
                  lVar27 = *(long *)(local_68 + 0x10);
                  auVar31 = FUN_06016048(&local_198,*puVar30);
                  if (lVar27 == 0) {
LAB_07209384:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar12 = *(long *)(lVar27 + 0x10);
                  lVar18 = *plVar26;
                  *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                  if (lVar12 == 0) goto LAB_07209384;
                  uVar20 = *(uint *)(lVar27 + 0x18);
                  if (uVar20 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar27 + 0x18) = uVar20 + 1;
                    *(undefined1 (*) [16])(lVar12 + (long)(int)uVar20 * 0x10 + 0x20) = auVar31;
                  }
                  else {
                    FUN_05bd96b8(lVar27,auVar31._0_8_,auVar31._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                plVar14 = *(long **)(lVar29 + 0x60);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar20 = local_68[0x20];
                if ((lVar22 != 0) &&
                   (lVar27 = thunk_FUN_040b4e00(lVar22,*(undefined8 *)(*plVar14 + 0x40)),
                   lVar27 == 0)) {
                  uVar25 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar25,0);
                }
                if (*(uint *)(plVar14 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar14[(long)(int)uVar20 + 4] = lVar22;
                thunk_FUN_040ec700(plVar14 + (long)(int)uVar20 + 4,lVar22);
              }
            }
            else if (bVar6 == 3) {
              lVar22 = *(long *)(lVar29 + 0x68);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar22 + 0x18) <= (uint)local_68[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              uVar20 = *(uint *)(lVar22 + (long)local_68[0x20] * 4 + 0x20);
              if ((uVar20 >> 10 & 1) == 0) {
                if ((uVar20 >> 0xc & 1) != 0) {
                  lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                  FUN_06e52d78(lVar22,*(undefined8 *)PTR_DAT_092bdb10);
                  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07201560(lVar29,*(undefined8 *)(local_68 + 8),local_68[0x20],lVar22 + 0x10,
                               &local_168,0);
                  lVar27 = *(long *)(local_68 + 0x10);
                  auVar31 = FUN_06016048(&local_168,*puVar30);
                  if (lVar27 == 0) {
LAB_0720936c:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar12 = *(long *)(lVar27 + 0x10);
                  lVar18 = *plVar26;
                  *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                  if (lVar12 == 0) goto LAB_0720936c;
                  uVar20 = *(uint *)(lVar27 + 0x18);
                  if (uVar20 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar27 + 0x18) = uVar20 + 1;
                    *(undefined1 (*) [16])(lVar12 + (long)(int)uVar20 * 0x10 + 0x20) = auVar31;
                  }
                  else {
                    FUN_05bd96b8(lVar27,auVar31._0_8_,auVar31._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar14 = *(long **)(lVar29 + 0x60);
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar20 = local_68[0x20];
                  lVar27 = thunk_FUN_040b4e00(lVar22,*(undefined8 *)(*plVar14 + 0x40));
                  if (lVar27 == 0) {
                    uVar25 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar25,0);
                  }
                  if (*(uint *)(plVar14 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar14[(long)(int)uVar20 + 4] = lVar22;
                  thunk_FUN_040ec700(plVar14 + (long)(int)uVar20 + 4,lVar22);
                }
              }
              else {
                lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                FUN_06e52d78(lVar22,*(undefined8 *)PTR_DAT_092bdb10);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07201560(lVar29,*(undefined8 *)(local_68 + 8),local_68[0x20],lVar22 + 0x10,
                             &local_138,1);
                lVar27 = *(long *)(local_68 + 0x10);
                auVar31 = FUN_06016048(&local_138,*puVar30);
                if (lVar27 == 0) {
LAB_07209328:
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar12 = *(long *)(lVar27 + 0x10);
                lVar18 = *plVar26;
                *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                if (lVar12 == 0) goto LAB_07209328;
                uVar20 = *(uint *)(lVar27 + 0x18);
                if (uVar20 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar27 + 0x18) = uVar20 + 1;
                  *(undefined1 (*) [16])(lVar12 + (long)(int)uVar20 * 0x10 + 0x20) = auVar31;
                }
                else {
                  FUN_05bd96b8(lVar27,auVar31._0_8_,auVar31._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                plVar14 = *(long **)(lVar29 + 0x60);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar20 = local_68[0x20];
                lVar27 = thunk_FUN_040b4e00(lVar22,*(undefined8 *)(*plVar14 + 0x40));
                if (lVar27 == 0) {
                  uVar25 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar25,0);
                }
                if (*(uint *)(plVar14 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar14[(long)(int)uVar20 + 4] = lVar22;
                thunk_FUN_040ec700(plVar14 + (long)(int)uVar20 + 4,lVar22);
              }
            }
          }
          else if (bVar6 == 4) {
            lVar22 = *(long *)(lVar29 + 0x68);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar22 + 0x18) <= (uint)local_68[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if ((*(uint *)(lVar22 + (long)local_68[0x20] * 4 + 0x20) >> 0xb & 1) != 0) {
              lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd988);
              FUN_06e52d38(lVar22,*(undefined8 *)PTR_DAT_092bdb28);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_07201930(lVar29,*(undefined8 *)(local_68 + 8),local_68[0x20],lVar22 + 0x10,
                           &local_150);
              lVar27 = *(long *)(local_68 + 0x10);
              auVar31 = FUN_06016048(&local_150,*puVar30);
              if (lVar27 == 0) {
LAB_07209334:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar12 = *(long *)(lVar27 + 0x10);
              lVar18 = *plVar26;
              *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_07209334;
              uVar20 = *(uint *)(lVar27 + 0x18);
              if (uVar20 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar27 + 0x18) = uVar20 + 1;
                *(undefined1 (*) [16])(lVar12 + (long)(int)uVar20 * 0x10 + 0x20) = auVar31;
              }
              else {
                FUN_05bd96b8(lVar27,auVar31._0_8_,auVar31._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              plVar14 = *(long **)(lVar29 + 0x60);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar20 = local_68[0x20];
              lVar27 = thunk_FUN_040b4e00(lVar22,*(undefined8 *)(*plVar14 + 0x40));
              if (lVar27 == 0) {
                uVar25 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar25,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar14[(long)(int)uVar20 + 4] = lVar22;
              thunk_FUN_040ec700(plVar14 + (long)(int)uVar20 + 4,lVar22);
            }
          }
          else if (bVar6 == 7) {
            lVar22 = *(long *)(lVar29 + 0x68);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar22 + 0x18) <= (uint)local_68[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (*(int *)(lVar22 + (long)local_68[0x20] * 4 + 0x20) == 0x100) {
              lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd9c8);
              FUN_06e52d18(lVar22,*(undefined8 *)PTR_DAT_092bdb20);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_072011ec(lVar29,*(undefined8 *)(local_68 + 8),local_68[0x20],lVar22 + 0x10,
                           &local_120);
              lVar27 = *(long *)(local_68 + 0x10);
              auVar31 = FUN_06016048(&local_120,*puVar30);
              if (lVar27 == 0) {
LAB_0720931c:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar12 = *(long *)(lVar27 + 0x10);
              lVar18 = *plVar26;
              *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_0720931c;
              uVar20 = *(uint *)(lVar27 + 0x18);
              if (uVar20 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar27 + 0x18) = uVar20 + 1;
                *(undefined1 (*) [16])(lVar12 + (long)(int)uVar20 * 0x10 + 0x20) = auVar31;
              }
              else {
                FUN_05bd96b8(lVar27,auVar31._0_8_,auVar31._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              plVar14 = *(long **)(lVar29 + 0x60);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar20 = local_68[0x20];
              lVar27 = thunk_FUN_040b4e00(lVar22,*(undefined8 *)(*plVar14 + 0x40));
              if (lVar27 == 0) {
                uVar25 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar25,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar14[(long)(int)uVar20 + 4] = lVar22;
              thunk_FUN_040ec700(plVar14 + (long)(int)uVar20 + 4,lVar22);
            }
          }
          plVar14 = *(long **)(lVar29 + 0x20);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar22 = *plVar14;
          uVar11 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar11 != 0) {
            piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092bd558) {
                puVar13 = (undefined8 *)(lVar22 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_07208e08;
              }
              uVar11 = uVar11 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092bd558,2);
LAB_07208e08:
          lVar22 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          local_c8 = FUN_076f1ee4(lVar22,0);
          uVar11 = FUN_07591eb4(&local_c8,0);
          if ((uVar11 & 1) == 0) {
            local_6c = 1;
            *local_68 = 1;
            *(undefined8 *)(local_68 + 0x1e) = local_c8;
            thunk_FUN_040ec700(local_68 + 0x1e,0);
            piVar19 = local_68;
            if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1_00,local_68);
            }
            FUN_04995830(piVar19 + 2,&local_c8,local_68,*(undefined8 *)PTR_DAT_092bdb40);
            return;
          }
LAB_07208e34:
          FUN_07591f7c(&local_c8,0);
          uVar20 = local_68[0x20];
          piVar19 = local_68;
        }
        uVar20 = uVar20 + 1;
        piVar19[0x20] = uVar20;
        puVar13 = (undefined8 *)PTR_DAT_092bda28;
        plVar14 = (long *)PTR_DAT_092bda30;
        puVar2 = (undefined8 *)PTR_DAT_092bdba8;
      }
      if (0 < piVar19[0xc]) {
        uVar20 = 0;
        uVar11 = 0;
        do {
          if (*(long *)(piVar19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar22 = *(long *)(*(long *)(piVar19 + 8) + 0x60);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar22 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar27 = *(long *)(lVar29 + 0x90);
          if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar27 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar27 = *(long *)(lVar27 + uVar11 * 8 + 0x20);
          if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar12 = *(long *)(lVar22 + uVar11 * 8 + 0x20);
          lVar22 = FUN_06efc5fc(lVar27,*(undefined8 *)PTR_DAT_092bdbb8);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_0685b4f8(&local_1f0,lVar22,*(undefined8 *)PTR_DAT_092bdcc8);
          local_1b0 = local_1f0;
          local_1a0 = local_1e0;
          local_1f0 = (int *)0x0;
          local_1e0 = &local_1b0;
          piStack_1a8 = piStack_1e8;
          piStack_1e8 = &local_6c;
          while (uVar15 = FUN_05386d5c(&local_1b0,*(undefined8 *)PTR_DAT_092bdc28),
                ppiVar4 = local_1a0, (uVar15 & 1) != 0) {
            if (local_1a0 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(int *)(local_1a0 + 3) < 1) {
              plVar26 = (long *)0x0;
            }
            else {
              iVar9 = 0;
              plVar26 = (long *)0x0;
              do {
                lVar22 = FUN_05c26ab8(ppiVar4,iVar9,*puVar13);
                if (plVar26 == (long *)0x0) {
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar8 = *(undefined4 *)(ppiVar4 + 3);
                  uVar25 = *(undefined8 *)(lVar12 + 0x10);
                  plVar26 = (long *)thunk_FUN_040b4efc(*plVar14);
                  FUN_07216bd0(plVar26,uVar20,uVar8,uVar25,0);
                }
                else {
                  bVar6 = *(byte *)(*plVar14 + 0x130);
                  if (*(byte *)(*plVar26 + 0x130) < bVar6) {
                    plVar26 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar26 + 200) + (ulong)bVar6 * 8 + -8) != *plVar14)
                  {
                    plVar26 = (long *)0x0;
                  }
                }
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar22 + 0x28) == 0) {
                  if (plVar26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                }
                else {
                  if (*(long *)(local_68 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar27 = FUN_06efc758(*(long *)(local_68 + 0xe),lVar22,*puVar2);
                  if (plVar26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  plVar26[5] = lVar27;
                  thunk_FUN_040ec700();
                }
                FUN_072175f4(plVar26,iVar9,*(undefined4 *)(lVar22 + 0x1c),0);
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(int *)(ppiVar4 + 3));
            }
            plVar23 = *(long **)(lVar29 + 0x80);
            if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((plVar26 != (long *)0x0) &&
               (lVar22 = thunk_FUN_040b4e00(plVar26,*(undefined8 *)(*plVar23 + 0x40)), lVar22 == 0))
            {
              uVar25 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar25,0);
            }
            if (*(uint *)(plVar23 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar23[(long)(int)uVar20 + 4] = (long)plVar26;
            thunk_FUN_040ec700(plVar23 + (long)(int)uVar20 + 4,plVar26);
            uVar20 = uVar20 + 1;
          }
          if (*piStack_1e8 < 0) {
            System_Collections_Generic_EqualityComparer<IndirectDrawInfo>__get_Default
                      (local_1e0,*(undefined8 *)PTR_DAT_092bdc00);
          }
          if (local_1f0 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077828();
          }
          uVar11 = uVar11 + 1;
          piVar19 = local_68;
        } while ((int)uVar11 < local_68[0xc]);
      }
      if (*(long *)(piVar19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar25 = FUN_05bdb0a8(*(long *)(piVar19 + 0x10),*(undefined8 *)PTR_DAT_092bdc78);
      FUN_05f3fd7c(&local_80,uVar25,4,*(undefined8 *)PTR_DAT_092bdca8);
      auVar31 = FUN_0896aff0(local_80,uStack_78,0);
      puVar3 = PTR_DAT_092bc2d8;
      *(undefined1 (*) [16])(lVar29 + 0x70) = auVar31;
      FUN_05f3ffd8(&local_80,*(undefined8 *)puVar3);
      FUN_0896af44(0);
      bVar5 = (char)local_68[0x12] != '\0';
      goto LAB_07209208;
    }
  }
  else if (iVar9 != 0x48) {
    return;
  }
  bVar5 = false;
LAB_07209208:
  puVar3 = PTR_DAT_092899f8;
  *local_68 = -2;
  piVar19 = local_68 + 0xe;
  piVar19[0] = 0;
  piVar19[1] = 0;
  thunk_FUN_040ec700(piVar19,0);
  piVar19 = local_68 + 0x10;
  piVar19[0] = 0;
  piVar19[1] = 0;
  thunk_FUN_040ec700(piVar19,0);
  piVar19 = local_68;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_065d0838(piVar19 + 2,bVar5,*(undefined8 *)puVar3);
  return;
}


