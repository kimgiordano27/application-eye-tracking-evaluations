/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler$$remove_OnFirstResponse
ENTRY_POINT: 0720749c
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
/* WARNING: Removing unreachable block (ram,0x07208388) */
/* WARNING: Removing unreachable block (ram,0x07208008) */

void Meta_WitAi_Requests_TextStreamHandler__remove_OnFirstResponse(long param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar16;
  long lVar17;
  long lVar18;
  undefined4 *puVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  long *unaff_x19;
  long unaff_x20;
  long *plVar24;
  long unaff_x23;
  long *plVar25;
  int unaff_w25;
  uint uVar26;
  ulong unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  undefined1 auVar27 [16];
  undefined8 *in_stack_00000018;
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
  long in_stack_00000090;
  int *in_stack_00000098;
  long *in_stack_000000a0;
  char in_stack_000000a8;
  char in_stack_000000c0;
  long in_stack_00000150;
  int *in_stack_00000158;
  long *in_stack_00000160;
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  char cStack0000000000000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  long in_stack_000001a0;
  byte bStack00000000000001a8;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 *in_stack_000001d8;
  
code_r0x0720749c:
  lVar10 = thunk_FUN_040b4e00(param_1,param_2);
  param_1 = unaff_x23;
  if (lVar10 == 0) {
    uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar11,0);
  }
  while( true ) {
    if (*(uint *)(unaff_x19 + 3) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x19[unaff_x27 + 4] = param_1;
    thunk_FUN_040ec700(unaff_x19 + unaff_x27 + 4,param_1);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar8 = FUN_06efc490(param_1,*(undefined8 *)PTR_DAT_092bdb98);
    plVar25 = (long *)PTR_DAT_092bdc70;
    puVar4 = PTR_DAT_092bc300;
    unaff_x27 = unaff_x27 + 1;
    unaff_w25 = iVar8 + unaff_w25;
    if ((int)in_stack_000001d8[0xc] <= (int)unaff_x27) break;
    if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x60);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar10 + 0x18) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar17 = *(long *)(unaff_x28 + 0x110);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar17 + 0x18) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar10 = *(long *)(lVar10 + unaff_x27 * 8 + 0x20);
    *(int *)(lVar17 + unaff_x27 * 4 + 0x20) = unaff_w25;
    param_1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbe0);
    FUN_06efbe2c(param_1,*(undefined8 *)PTR_DAT_092bdb78);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = *(long *)(lVar10 + 0x18);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar20 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar20) {
      uVar26 = 0;
      do {
        if (uVar20 <= uVar26) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar17 = *(long *)(lVar10 + (long)(int)uVar26 * 8 + 0x20);
        uVar12 = FUN_06efc9cc(param_1,lVar17,*(undefined8 *)PTR_DAT_092bdb50);
        if ((uVar12 & 1) == 0) {
          uVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdc98);
          FUN_05c26520(uVar11,*(undefined8 *)PTR_DAT_092bdc80);
          FUN_06efc7c4(param_1,lVar17,uVar11,*(undefined8 *)PTR_DAT_092bdbd0);
        }
        lVar18 = FUN_06efc758(param_1,lVar17,*(undefined8 *)PTR_DAT_092bdbb0);
        if (lVar18 == 0) {
LAB_072077e4:
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar22 = *(long *)(lVar18 + 0x10);
        lVar21 = *unaff_x29;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar22 == 0) goto LAB_072077e4;
        uVar20 = *(uint *)(lVar18 + 0x18);
        if (uVar20 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar18 + 0x18) = uVar20 + 1;
          plVar25 = (long *)(lVar22 + (long)(int)uVar20 * 8 + 0x20);
          *plVar25 = lVar17;
          thunk_FUN_040ec700(plVar25,lVar17);
        }
        else {
          FUN_05c26d88(lVar18,lVar17,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
        }
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(lVar17 + 0x28) == 0) {
Meta_WitAi_Requests_AudioStreamHandler__Dispose:
          lVar18 = *(long *)(lVar17 + 0x10);
          if (-1 < *(int *)(lVar17 + 0x18)) {
            FUN_07200548();
          }
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar12 = FUN_06ef44fc();
          if ((uVar12 & 1) == 0) {
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(int *)(lVar18 + 0x18) < 0) {
              if (*(int *)(lVar18 + 0x14) < 0) {
                in_stack_000001b8._4_4_ = 1;
              }
              else {
                in_stack_000001b8._4_4_ = 3;
              }
            }
            else {
              in_stack_000001b8._4_4_ = 7;
            }
          }
          if (*(int *)(lVar17 + 0x20) - 4U < 3) {
            uVar20 = *(uint *)(lVar17 + 0x1c);
            if ((int)uVar20 < 0) {
LAB_072073ac:
              in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ | 2;
            }
            else {
              if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar18 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x58);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar18 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              lVar18 = *(long *)(lVar18 + (ulong)uVar20 * 8 + 0x20);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar12 = FUN_0721d438(lVar18,0);
              if ((uVar12 & 1) != 0) goto LAB_072073ac;
            }
            uVar20 = *(uint *)(lVar17 + 0x1c);
            if (-1 < (int)uVar20) {
              if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar18 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x58);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar18 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              lVar18 = *(long *)(lVar18 + (ulong)uVar20 * 8 + 0x20);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar12 = FUN_0721d458(lVar18,0);
              if ((uVar12 & 1) != 0) {
                in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ | 4;
              }
            }
          }
          FUN_06ef29c0();
          if (*(int *)(lVar17 + 0x1c) < 0) {
            *(byte *)(unaff_x28 + 0xe0) = *(byte *)(unaff_x28 + 0xe0) | *(int *)(lVar17 + 0x20) == 0
            ;
          }
          else {
            if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((*(long *)(*(long *)(in_stack_000001d8 + 8) + 0x58) != 0) &&
               (*(int *)(lVar17 + 0x20) == 0)) {
              FUN_071fe6c4();
            }
          }
        }
        else {
          if (*(long *)(in_stack_000001d8 + 0xe) == 0) {
            uVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbe8);
            FUN_06efbe2c(uVar11,*(undefined8 *)PTR_DAT_092bdb88);
            *(undefined8 *)(in_stack_000001d8 + 0xe) = uVar11;
            thunk_FUN_040ec700(in_stack_000001d8 + 0xe,uVar11);
LAB_0720729c:
            auVar27 = FUN_07200370();
            if (*(long *)(in_stack_000001d8 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830(0,auVar27._8_8_,auVar27._0_8_);
            }
            FUN_06efc7c4(*(long *)(in_stack_000001d8 + 0xe),lVar17,auVar27._0_8_,
                         *(undefined8 *)PTR_DAT_092bdbd8);
            goto Meta_WitAi_Requests_AudioStreamHandler__Dispose;
          }
          uVar12 = FUN_06efc9cc(*(long *)(in_stack_000001d8 + 0xe),lVar17,
                                *(undefined8 *)PTR_DAT_092bdb58);
          if ((uVar12 & 1) == 0) goto LAB_0720729c;
        }
        uVar20 = *(uint *)(lVar10 + 0x18);
        uVar26 = uVar26 + 1;
      } while ((int)uVar26 < (int)uVar20);
    }
    unaff_x19 = (long *)*in_stack_00000018;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (param_1 != 0) goto code_r0x07207490;
  }
  lVar10 = *(long *)(in_stack_000001d8 + 8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(lVar10 + 0x88) != 0) {
    uVar11 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdca0,
                          *(undefined4 *)(*(long *)(lVar10 + 0x88) + 0x18));
    *(undefined8 *)(unaff_x28 + 0x118) = uVar11;
    thunk_FUN_040ec700(unaff_x28 + 0x118);
    if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x88);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar20 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar20) {
      uVar26 = 0;
      do {
        if (uVar20 <= uVar26) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar17 = *(long *)(lVar10 + (long)(int)uVar26 * 8 + 0x20);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (-1 < *(int *)(lVar17 + 0x18)) {
          FUN_07200548();
        }
        uVar20 = *(uint *)(lVar10 + 0x18);
        uVar26 = uVar26 + 1;
      } while ((int)uVar26 < (int)uVar20);
    }
    lVar10 = *(long *)(in_stack_000001d8 + 8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  lVar10 = *(long *)(lVar10 + 0x68);
  if ((lVar10 != 0) && (uVar20 = *(uint *)(lVar10 + 0x18), 0 < (int)uVar20)) {
    lVar17 = 0;
    do {
      if (uVar20 <= (uint)lVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar18 = *(long *)(lVar10 + 0x20 + lVar17 * 8);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar18 = *(long *)(lVar18 + 0x50);
      if (((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x10), lVar18 != 0)) &&
         (lVar18 = *(long *)(lVar18 + 0x10), lVar18 != 0)) {
        if (-1 < *(int *)(lVar18 + 0x10)) {
          FUN_07200548();
        }
        if (-1 < *(int *)(lVar18 + 0x14)) {
          FUN_07200548();
        }
        if (-1 < *(int *)(lVar18 + 0x18)) {
          FUN_07200548();
        }
      }
      uVar20 = *(uint *)(lVar10 + 0x18);
      lVar17 = lVar17 + 1;
    } while ((int)lVar17 < (int)uVar20);
  }
  lVar10 = *(long *)(unaff_x28 + 0x110);
  if (lVar10 != 0) {
    if (*(uint *)(lVar10 + 0x18) <= (uint)in_stack_000001d8[0xc]) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(int *)(lVar10 + (long)(int)in_stack_000001d8[0xc] * 4 + 0x20) = unaff_w25;
  }
  uVar11 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdcc0,unaff_w25);
  *(undefined8 *)(unaff_x28 + 0x108) = uVar11;
  thunk_FUN_040ec700(unaff_x28 + 0x108);
  uVar11 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdcb8,unaff_w25);
  *(undefined8 *)(unaff_x28 + 0x80) = uVar11;
  thunk_FUN_040ec700();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar9 = FUN_06ef268c();
  uVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdc90);
  FUN_05bd8e98(uVar11,uVar9,*(undefined8 *)PTR_DAT_092bdc88);
  *(undefined8 *)(in_stack_000001d8 + 0x10) = uVar11;
  thunk_FUN_040ec700(in_stack_000001d8 + 0x10,uVar11);
  uVar9 = FUN_06ef268c();
  uVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbf0);
  FUN_06efbe44(uVar11,uVar9,*(undefined8 *)PTR_DAT_092bdb90);
  *(undefined8 *)(unaff_x28 + 0x88) = uVar11;
  thunk_FUN_040ec700((undefined8 *)(unaff_x28 + 0x88),uVar11);
  *(undefined1 *)(in_stack_000001d8 + 0x12) = 1;
  FUN_06ef2dd0(&stack0x00000028);
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
  in_stack_00000058 = (int *)((long)&stack0x000001d0 + 4);
  in_stack_00000050 = 0;
  in_stack_00000060 = (long *)&stack0x000001d8;
  if (in_stack_000001d0._4_4_ != 0) goto LAB_072079ac;
  in_stack_00000178 = *(undefined8 *)(in_stack_000001d8 + 0x1e);
  *(undefined8 *)(in_stack_000001d8 + 0x1e) = 0;
  in_stack_000001d0._4_4_ = -1;
  *in_stack_000001d8 = 0xffffffff;
LAB_07207998:
  FUN_07591f7c(&stack0x00000178,0);
LAB_072079ac:
  uVar12 = FUN_053841d4(in_stack_000001d8 + 0x14,*(undefined8 *)PTR_DAT_092bdc20);
  if ((uVar12 & 1) == 0) {
LAB_07207e98:
    iVar8 = 0x52;
  }
  else {
    _bStack00000000000001a8 = *(undefined8 *)(in_stack_000001d8 + 0x1a);
    lVar10 = *(long *)(in_stack_000001d8 + 0x18);
    in_stack_000001a0 = lVar10;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar17 = *(long *)(lVar10 + 0x10);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar8 = *(int *)(lVar17 + 0x18);
    iVar2 = *(int *)(lVar17 + 0x14);
    if (-1 < *(int *)(lVar17 + 0x1c)) {
      iVar16 = 1;
      if (-1 < *(int *)(lVar17 + 0x20)) {
        iVar16 = 2;
      }
      lVar18 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,
                            (((((iVar16 - ((int)~*(uint *)(lVar17 + 0x24) >> 0x1f)) -
                               ((int)~*(uint *)(lVar17 + 0x28) >> 0x1f)) -
                              ((int)~*(uint *)(lVar17 + 0x2c) >> 0x1f)) -
                             ((int)~*(uint *)(lVar17 + 0x30) >> 0x1f)) -
                            ((int)~*(uint *)(lVar17 + 0x34) >> 0x1f)) -
                            ((int)~*(uint *)(lVar17 + 0x38) >> 0x1f));
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar20 = *(uint *)(lVar18 + 0x18);
      if (uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined4 *)(lVar18 + 0x20) = *(undefined4 *)(lVar17 + 0x1c);
      if (-1 < *(int *)(lVar17 + 0x20)) {
        if (uVar20 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar18 + 0x24) = *(int *)(lVar17 + 0x20);
      }
      if (-1 < *(int *)(lVar17 + 0x24)) {
        if (uVar20 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar18 + 0x28) = *(int *)(lVar17 + 0x24);
      }
      if (-1 < *(int *)(lVar17 + 0x28)) {
        if (uVar20 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar18 + 0x2c) = *(int *)(lVar17 + 0x28);
      }
      if (-1 < *(int *)(lVar17 + 0x2c)) {
        if (uVar20 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar18 + 0x30) = *(int *)(lVar17 + 0x2c);
      }
      if (-1 < *(int *)(lVar17 + 0x30)) {
        if (uVar20 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar18 + 0x34) = *(int *)(lVar17 + 0x30);
      }
      if (-1 < *(int *)(lVar17 + 0x34)) {
        if (uVar20 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar18 + 0x38) = *(int *)(lVar17 + 0x34);
      }
      if (-1 < *(int *)(lVar17 + 0x38)) {
        if (uVar20 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar18 + 0x3c) = *(int *)(lVar17 + 0x38);
      }
      if (-1 < *(int *)(lVar17 + 0x3c)) {
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar25 = *(long **)(unaff_x28 + 0x130);
        if (plVar25 != (long *)0x0) {
          lVar18 = *(long *)PTR_DAT_092a2dd8;
          lVar17 = *(long *)(lVar18 + 0x38);
          if (lVar17 == 0) {
            FUN_040b1b28(lVar18);
            lVar17 = *(long *)(lVar18 + 0x38);
          }
          lVar17 = *(long *)(lVar17 + 0x10);
          if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_040b1acc();
          }
          if (*(int *)(lVar17 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar17 = *(long *)(*(long *)(lVar18 + 0x38) + 0x10);
          if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_040b1acc();
          }
          lVar18 = *plVar25;
          uVar11 = **(undefined8 **)(lVar17 + 0xb8);
          uVar12 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar12 == 0) {
LAB_07207ba0:
            puVar13 = (undefined8 *)FUN_040b1e00(plVar25,*(long *)PTR_DAT_092bc2c8,1);
          }
          else {
            piVar23 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            while (*(long *)(piVar23 + -2) != *(long *)PTR_DAT_092bc2c8) {
              uVar12 = uVar12 - 1;
              piVar23 = piVar23 + 4;
              if (uVar12 == 0) goto LAB_07207ba0;
            }
            puVar13 = (undefined8 *)(lVar18 + (long)(*piVar23 + 1) * 0x10 + 0x138);
          }
          (*(code *)*puVar13)(plVar25,0x33,uVar11,puVar13[1]);
        }
      }
    }
    plVar25 = (long *)PTR_DAT_092bdc70;
    if (_bStack00000000000001a8 == 1) goto LAB_07207c64;
    if (_bStack00000000000001a8 == 3) {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = *(undefined8 *)(unaff_x28 + 0x130);
      plVar14 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf8);
      FUN_0699efb4(plVar14,uVar11,*(undefined8 *)PTR_DAT_092bdcd8);
      goto LAB_07207c94;
    }
    if (_bStack00000000000001a8 == 7) {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = *(undefined8 *)(unaff_x28 + 0x130);
      plVar14 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf0);
      FUN_0699fff4(plVar14,uVar11,*(undefined8 *)PTR_DAT_092bdcd0);
      goto LAB_07207c94;
    }
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar14 = *(long **)(unaff_x28 + 0x130);
    if (plVar14 != (long *)0x0) {
      lVar10 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
      uVar11 = FUN_059f7a58(&stack0x000001a0,*(undefined8 *)PTR_DAT_092bdc48);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined8 *)(lVar10 + 0x20) = uVar11;
      thunk_FUN_040ec700();
      lVar17 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar12 == 0) {
LAB_0720829c:
        puVar13 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092bc2c8,0);
      }
      else {
        piVar23 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        while (*(long *)(piVar23 + -2) != *(long *)PTR_DAT_092bc2c8) {
          uVar12 = uVar12 - 1;
          piVar23 = piVar23 + 4;
          if (uVar12 == 0) goto LAB_0720829c;
        }
        puVar13 = (undefined8 *)(lVar17 + (long)*piVar23 * 0x10 + 0x138);
      }
      (*(code *)*puVar13)(plVar14,9,lVar10,puVar13[1]);
    }
    iVar8 = 0x48;
  }
  goto LAB_07207e9c;
LAB_07207c64:
  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar11 = *(undefined8 *)(unaff_x28 + 0x130);
  plVar14 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdce8);
  System_Linq_Enumerable_<ExceptIterator>d__77<KeyValuePair<object,_object>>__System_IDisposable_Dispose
            (plVar14,uVar11,*(undefined8 *)PTR_DAT_092bdce0);
LAB_07207c94:
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  bVar7 = 0;
  if (iVar2 < 0) {
    bVar7 = bStack00000000000001a8 >> 1 & 1;
  }
  bVar1 = 0;
  if (iVar8 < 0) {
    bVar1 = bStack00000000000001a8 >> 2 & 1;
  }
  *(byte *)(plVar14 + 2) = bVar7;
  *(byte *)((long)plVar14 + 0x11) = bVar1;
  plVar25 = (long *)PTR_DAT_092bdc70;
  if (*(long *)(unaff_x28 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_06efc7c4(*(long *)(unaff_x28 + 0x88),lVar10,plVar14,*(undefined8 *)PTR_DAT_092bdbc0);
  (**(code **)(*plVar14 + 0x178))(&stack0x00000028,plVar14);
  in_stack_00000188 = in_stack_00000030;
  _cStack0000000000000180 = in_stack_00000028;
  uVar11 = _cStack0000000000000180;
  cStack0000000000000180 = (char)in_stack_00000028;
  in_stack_00000190 = in_stack_00000038;
  _cStack0000000000000180 = uVar11;
  if (cStack0000000000000180 == '\0') {
    *(undefined1 *)(in_stack_000001d8 + 0x12) = 0;
    goto LAB_07207e98;
  }
  lVar10 = *(long *)(in_stack_000001d8 + 0x10);
  auVar27 = FUN_06016048(&stack0x00000180,*(undefined8 *)puVar4);
  if (lVar10 == 0) {
LAB_072082f8:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar17 = *(long *)(lVar10 + 0x10);
  lVar18 = *plVar25;
  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
  if (lVar17 == 0) goto LAB_072082f8;
  uVar20 = *(uint *)(lVar10 + 0x18);
  if (uVar20 < *(uint *)(lVar17 + 0x18)) {
    *(uint *)(lVar10 + 0x18) = uVar20 + 1;
    *(undefined1 (*) [16])(lVar17 + (long)(int)uVar20 * 0x10 + 0x20) = auVar27;
  }
  else {
    FUN_05bd96b8(lVar10,auVar27._0_8_,auVar27._8_8_,
                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
  }
  plVar14 = *(long **)(unaff_x28 + 0x20);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar10 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 == 0) {
LAB_07207de8:
    puVar13 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092bd558,2);
  }
  else {
    piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    while (*(long *)(piVar23 + -2) != *(long *)PTR_DAT_092bd558) {
      uVar12 = uVar12 - 1;
      piVar23 = piVar23 + 4;
      if (uVar12 == 0) goto LAB_07207de8;
    }
    puVar13 = (undefined8 *)(lVar10 + (long)(*piVar23 + 2) * 0x10 + 0x138);
  }
  lVar10 = (*(code *)*puVar13)(plVar14,puVar13[1]);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000178 = FUN_076f1ee4(lVar10,0);
  uVar12 = FUN_07591eb4(&stack0x00000178,0);
  if ((uVar12 & 1) == 0) goto code_r0x07207e34;
  goto LAB_07207998;
code_r0x07207490:
  param_2 = *(undefined8 *)(*unaff_x19 + 0x40);
  unaff_x23 = param_1;
  goto code_r0x0720749c;
code_r0x07207e34:
  in_stack_000001d0._4_4_ = 0;
  *in_stack_000001d8 = 0;
  *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
  thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
  puVar19 = in_stack_000001d8;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1,in_stack_000001d8);
  }
  FUN_04995830(puVar19 + 2,&stack0x00000178,in_stack_000001d8,*(undefined8 *)PTR_DAT_092bdb40);
  iVar8 = 0x51;
LAB_07207e9c:
  if (*in_stack_00000058 < 0) {
    FUN_053842f8(*in_stack_00000060 + 0x50,*(undefined8 *)PTR_DAT_092bdc08);
  }
  if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if ((iVar8 == 0) || (iVar8 == 0x52)) {
    *(undefined8 *)(in_stack_000001d8 + 0x1c) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x16) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x14) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x1a) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x18) = 0;
    if (*(char *)(in_stack_000001d8 + 0x12) != '\0') {
      if (*(long *)(in_stack_000001d8 + 0xe) != 0) {
        FUN_06efcc0c(&stack0x00000050,*(long *)(in_stack_000001d8 + 0xe),
                     *(undefined8 *)PTR_DAT_092bdb60);
        puVar5 = PTR_DAT_092bdc18;
        in_stack_00000170 = in_stack_00000070;
        in_stack_00000158 = in_stack_00000058;
        in_stack_00000150 = in_stack_00000050;
        in_stack_00000168 = in_stack_00000068;
        in_stack_00000160 = in_stack_00000060;
        in_stack_00000050 = 0;
        in_stack_00000060 = &stack0x00000150;
        in_stack_00000058 = (int *)((long)&stack0x000001d0 + 4);
        while (uVar12 = FUN_05385f24(&stack0x00000150,*(undefined8 *)puVar5), (uVar12 & 1) != 0) {
          if (in_stack_00000168 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          auVar27 = FUN_07215d10(in_stack_00000168,0);
          lVar10 = *(long *)(in_stack_000001d8 + 0x10);
          if (lVar10 == 0) {
LAB_0720830c:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar17 = *(long *)(lVar10 + 0x10);
          lVar18 = *plVar25;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_0720830c;
          uVar20 = *(uint *)(lVar10 + 0x18);
          if (uVar20 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar20 + 1;
            *(undefined1 (*) [16])(lVar17 + (long)(int)uVar20 * 0x10 + 0x20) = auVar27;
          }
          else {
            FUN_05bd96b8(lVar10,auVar27._0_8_,auVar27._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
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
      uVar12 = FUN_0721f760(*(long *)(in_stack_000001d8 + 8),0);
      if ((uVar12 & 1) != 0) {
        lVar10 = *(long *)(in_stack_000001d8 + 8);
        if (lVar10 == 0) {
LAB_072081b4:
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar12 = 0;
        while( true ) {
          lVar10 = *(long *)(lVar10 + 0x28);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar12) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar10 = *(long *)(lVar10 + uVar12 * 8 + 0x20);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar17 = *(long *)(lVar10 + 0x20);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar20 = *(uint *)(lVar17 + 0x18);
          if (0 < (int)uVar20) {
            lVar18 = 0;
            do {
              if (uVar20 <= (uint)lVar18) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              if (*(long *)(lVar17 + 0x20 + lVar18 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_07200548();
              uVar20 = *(uint *)(lVar17 + 0x18);
              lVar18 = lVar18 + 1;
            } while ((int)lVar18 < (int)uVar20);
          }
          lVar17 = *(long *)(lVar10 + 0x18);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar20 = *(uint *)(lVar17 + 0x18);
          if (0 < (int)uVar20) {
            uVar26 = 0;
            do {
              if (uVar20 <= uVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              lVar18 = *(long *)(lVar17 + (long)(int)uVar26 * 8 + 0x20);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar22 = *(long *)(lVar10 + 0x20);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar22 + 0x18) <= *(uint *)(lVar18 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              if (*(long *)(lVar22 + (long)(int)*(uint *)(lVar18 + 0x10) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(long *)(lVar18 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              iVar8 = FUN_07212d80(*(long *)(lVar18 + 0x18),0);
              if (iVar8 < 4) {
                if (iVar8 == 2) {
                  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07200548();
                }
                else if (iVar8 == 3) {
                  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07200548();
                }
              }
              else if (iVar8 == 4) {
                if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07200548();
              }
              else if (iVar8 == 5) {
                if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07200548();
              }
              uVar20 = *(uint *)(lVar17 + 0x18);
              uVar26 = uVar26 + 1;
            } while ((int)uVar26 < (int)uVar20);
          }
          uVar12 = uVar12 + 1;
          lVar10 = *(long *)(in_stack_000001d8 + 8);
          if (lVar10 == 0) goto LAB_072081b4;
        }
      }
      if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar10 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x20);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdb00,*(undefined4 *)(lVar10 + 0x18));
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined8 *)(unaff_x28 + 0x60) = uVar11;
      thunk_FUN_040ec700();
      uVar20 = 0;
      in_stack_000001d8[0x20] = 0;
      puVar13 = (undefined8 *)PTR_DAT_092bda28;
      plVar14 = (long *)PTR_DAT_092bda30;
      puVar3 = (undefined8 *)PTR_DAT_092bdba8;
      puVar19 = in_stack_000001d8;
      do {
        PTR_DAT_092bda28 = (undefined *)puVar13;
        PTR_DAT_092bda30 = (undefined *)plVar14;
        PTR_DAT_092bdba8 = (undefined *)puVar3;
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(unaff_x28 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(*(long *)(unaff_x28 + 0x60) + 0x18) <= (int)uVar20) {
          if (0 < (int)puVar19[0xc]) {
            uVar20 = 0;
            uVar12 = 0;
            do {
              if (*(long *)(puVar19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar10 = *(long *)(*(long *)(puVar19 + 8) + 0x60);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              lVar17 = *(long *)(unaff_x28 + 0x90);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar17 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              lVar17 = *(long *)(lVar17 + uVar12 * 8 + 0x20);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar18 = *(long *)(lVar10 + uVar12 * 8 + 0x20);
              lVar10 = FUN_06efc5fc(lVar17,*(undefined8 *)PTR_DAT_092bdbb8);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_0685b4f8(&stack0x00000050,lVar10,*(undefined8 *)PTR_DAT_092bdcc8);
              in_stack_00000090 = in_stack_00000050;
              in_stack_000000a0 = in_stack_00000060;
              in_stack_00000050 = 0;
              in_stack_00000060 = &stack0x00000090;
              in_stack_00000098 = in_stack_00000058;
              in_stack_00000058 = (int *)((long)&stack0x000001d0 + 4);
              while (uVar15 = FUN_05386d5c(&stack0x00000090,*(undefined8 *)PTR_DAT_092bdc28),
                    plVar25 = in_stack_000000a0, (uVar15 & 1) != 0) {
                if (in_stack_000000a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if ((int)in_stack_000000a0[3] < 1) {
                  plVar24 = (long *)0x0;
                }
                else {
                  iVar8 = 0;
                  plVar24 = (long *)0x0;
                  do {
                    lVar10 = FUN_05c26ab8(plVar25,iVar8,*puVar13);
                    if (plVar24 == (long *)0x0) {
                      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_04077830();
                      }
                      lVar17 = plVar25[3];
                      uVar11 = *(undefined8 *)(lVar18 + 0x10);
                      plVar24 = (long *)thunk_FUN_040b4efc(*plVar14);
                      FUN_07216bd0(plVar24,uVar20,(int)lVar17,uVar11,0);
                    }
                    else {
                      bVar7 = *(byte *)(*plVar14 + 0x130);
                      if (*(byte *)(*plVar24 + 0x130) < bVar7) {
                        plVar24 = (long *)0x0;
                      }
                      else if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar7 * 8 + -8) !=
                               *plVar14) {
                        plVar24 = (long *)0x0;
                      }
                    }
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    if (*(long *)(lVar10 + 0x28) == 0) {
                      if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_04077830();
                      }
                    }
                    else {
                      if (*(long *)(in_stack_000001d8 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_04077830();
                      }
                      lVar17 = FUN_06efc758(*(long *)(in_stack_000001d8 + 0xe),lVar10,*puVar3);
                      if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_04077830();
                      }
                      plVar24[5] = lVar17;
                      thunk_FUN_040ec700();
                    }
                    FUN_072175f4(plVar24,iVar8,*(undefined4 *)(lVar10 + 0x1c),0);
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < (int)plVar25[3]);
                }
                plVar25 = *(long **)(unaff_x28 + 0x80);
                if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if ((plVar24 != (long *)0x0) &&
                   (lVar10 = thunk_FUN_040b4e00(plVar24,*(undefined8 *)(*plVar25 + 0x40)),
                   lVar10 == 0)) {
                  uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar11,0);
                }
                if (*(uint *)(plVar25 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar25[(long)(int)uVar20 + 4] = (long)plVar24;
                thunk_FUN_040ec700(plVar25 + (long)(int)uVar20 + 4,plVar24);
                uVar20 = uVar20 + 1;
              }
              if (*in_stack_00000058 < 0) {
                System_Collections_Generic_EqualityComparer<IndirectDrawInfo>__get_Default
                          (in_stack_00000060,*(undefined8 *)PTR_DAT_092bdc00);
              }
              if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077828();
              }
              uVar12 = uVar12 + 1;
              puVar19 = in_stack_000001d8;
            } while ((int)uVar12 < (int)in_stack_000001d8[0xc]);
          }
          if (*(long *)(puVar19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar11 = FUN_05bdb0a8(*(long *)(puVar19 + 0x10),*(undefined8 *)PTR_DAT_092bdc78);
          FUN_05f3fd7c(&stack0x000001c0,uVar11,4,*(undefined8 *)PTR_DAT_092bdca8);
          auVar27 = FUN_0896aff0(in_stack_000001c0,in_stack_000001c8,0);
          puVar4 = PTR_DAT_092bc2d8;
          *(undefined1 (*) [16])(unaff_x28 + 0x70) = auVar27;
          FUN_05f3ffd8(&stack0x000001c0,*(undefined8 *)puVar4);
          FUN_0896af44(0);
          bVar6 = *(char *)(in_stack_000001d8 + 0x12) != '\0';
          goto LAB_07209208;
        }
        if (*(long *)(puVar19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar10 = *(long *)(*(long *)(puVar19 + 8) + 0x20);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar10 = *(long *)(lVar10 + (long)(int)uVar20 * 8 + 0x20);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (-1 < *(int *)(lVar10 + 0x10)) {
          bVar7 = FUN_072199cc(lVar10,0);
          if (bVar7 < 4) {
            if (bVar7 == 1) {
              lVar10 = *(long *)(unaff_x28 + 0x68);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar10 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              iVar8 = *(int *)(lVar10 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
              if (iVar8 < 0x200) {
                if ((iVar8 == 2) || (iVar8 == 4)) {
                  lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd858);
                  FUN_06e52ce0(lVar10,*(undefined8 *)PTR_DAT_092bdb08);
                  if (lVar10 == 0) {
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
                  lVar17 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar27 = FUN_06016048(&stack0x00000138,*(undefined8 *)puVar4);
                  if (lVar17 == 0) {
LAB_07209348:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar18 = *(long *)(lVar17 + 0x10);
                  lVar22 = *plVar25;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar18 == 0) goto LAB_07209348;
                  uVar20 = *(uint *)(lVar17 + 0x18);
                  if (uVar20 < *(uint *)(lVar18 + 0x18)) {
                    *(uint *)(lVar17 + 0x18) = uVar20 + 1;
                    *(undefined1 (*) [16])(lVar18 + (long)(int)uVar20 * 0x10 + 0x20) = auVar27;
                  }
                  else {
                    FUN_05bd96b8(lVar17,auVar27._0_8_,auVar27._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar14 = *(long **)(unaff_x28 + 0x60);
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar20 = in_stack_000001d8[0x20];
                  lVar17 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar14 + 0x40));
                  if (lVar17 == 0) {
                    uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar11,0);
                  }
                  if (*(uint *)(plVar14 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar14[(long)(int)uVar20 + 4] = lVar10;
                  thunk_FUN_040ec700(plVar14 + (long)(int)uVar20 + 4,lVar10);
                }
              }
              else if ((iVar8 == 0x200) || (iVar8 == 0x2000)) {
                lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdb30);
                FUN_06e52d58(lVar10,*(undefined8 *)PTR_DAT_092bdb18);
                FUN_07201d94();
                if (in_stack_000000c0 != '\0') {
                  auVar27 = FUN_06008be0(&stack0x000000c0,*(undefined8 *)PTR_DAT_092bd960);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  *(undefined1 (*) [16])(lVar10 + 0x10) = auVar27;
                }
                if (in_stack_000000a8 != '\0') {
                  lVar17 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar27 = FUN_06016048(&stack0x000000a8,*(undefined8 *)puVar4);
                  if (lVar17 == 0) {
LAB_07209384:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar18 = *(long *)(lVar17 + 0x10);
                  lVar22 = *plVar25;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar18 == 0) goto LAB_07209384;
                  uVar20 = *(uint *)(lVar17 + 0x18);
                  if (uVar20 < *(uint *)(lVar18 + 0x18)) {
                    *(uint *)(lVar17 + 0x18) = uVar20 + 1;
                    *(undefined1 (*) [16])(lVar18 + (long)(int)uVar20 * 0x10 + 0x20) = auVar27;
                  }
                  else {
                    FUN_05bd96b8(lVar17,auVar27._0_8_,auVar27._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                plVar14 = *(long **)(unaff_x28 + 0x60);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar20 = in_stack_000001d8[0x20];
                if ((lVar10 != 0) &&
                   (lVar17 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar14 + 0x40)),
                   lVar17 == 0)) {
                  uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar11,0);
                }
                if (*(uint *)(plVar14 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar14[(long)(int)uVar20 + 4] = lVar10;
                thunk_FUN_040ec700(plVar14 + (long)(int)uVar20 + 4,lVar10);
              }
            }
            else if (bVar7 == 3) {
              lVar10 = *(long *)(unaff_x28 + 0x68);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar10 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              uVar20 = *(uint *)(lVar10 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
              if ((uVar20 >> 10 & 1) == 0) {
                if ((uVar20 >> 0xc & 1) != 0) {
                  lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                  FUN_06e52d78(lVar10,*(undefined8 *)PTR_DAT_092bdb10);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07201560();
                  lVar17 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar27 = FUN_06016048(&stack0x000000d8,*(undefined8 *)puVar4);
                  if (lVar17 == 0) {
LAB_0720936c:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar18 = *(long *)(lVar17 + 0x10);
                  lVar22 = *plVar25;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar18 == 0) goto LAB_0720936c;
                  uVar20 = *(uint *)(lVar17 + 0x18);
                  if (uVar20 < *(uint *)(lVar18 + 0x18)) {
                    *(uint *)(lVar17 + 0x18) = uVar20 + 1;
                    *(undefined1 (*) [16])(lVar18 + (long)(int)uVar20 * 0x10 + 0x20) = auVar27;
                  }
                  else {
                    FUN_05bd96b8(lVar17,auVar27._0_8_,auVar27._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar14 = *(long **)(unaff_x28 + 0x60);
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar20 = in_stack_000001d8[0x20];
                  lVar17 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar14 + 0x40));
                  if (lVar17 == 0) {
                    uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar11,0);
                  }
                  if (*(uint *)(plVar14 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar14[(long)(int)uVar20 + 4] = lVar10;
                  thunk_FUN_040ec700(plVar14 + (long)(int)uVar20 + 4,lVar10);
                }
              }
              else {
                lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                FUN_06e52d78(lVar10,*(undefined8 *)PTR_DAT_092bdb10);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07201560();
                lVar17 = *(long *)(in_stack_000001d8 + 0x10);
                auVar27 = FUN_06016048(&stack0x00000108,*(undefined8 *)puVar4);
                if (lVar17 == 0) {
LAB_07209328:
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar18 = *(long *)(lVar17 + 0x10);
                lVar22 = *plVar25;
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar18 == 0) goto LAB_07209328;
                uVar20 = *(uint *)(lVar17 + 0x18);
                if (uVar20 < *(uint *)(lVar18 + 0x18)) {
                  *(uint *)(lVar17 + 0x18) = uVar20 + 1;
                  *(undefined1 (*) [16])(lVar18 + (long)(int)uVar20 * 0x10 + 0x20) = auVar27;
                }
                else {
                  FUN_05bd96b8(lVar17,auVar27._0_8_,auVar27._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
                plVar14 = *(long **)(unaff_x28 + 0x60);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar20 = in_stack_000001d8[0x20];
                lVar17 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar14 + 0x40));
                if (lVar17 == 0) {
                  uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar11,0);
                }
                if (*(uint *)(plVar14 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar14[(long)(int)uVar20 + 4] = lVar10;
                thunk_FUN_040ec700(plVar14 + (long)(int)uVar20 + 4,lVar10);
              }
            }
          }
          else if (bVar7 == 4) {
            lVar10 = *(long *)(unaff_x28 + 0x68);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar10 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if ((*(uint *)(lVar10 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) >> 0xb & 1) != 0)
            {
              lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd988);
              FUN_06e52d38(lVar10,*(undefined8 *)PTR_DAT_092bdb28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_07201930();
              lVar17 = *(long *)(in_stack_000001d8 + 0x10);
              auVar27 = FUN_06016048(&stack0x000000f0,*(undefined8 *)puVar4);
              if (lVar17 == 0) {
LAB_07209334:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar18 = *(long *)(lVar17 + 0x10);
              lVar22 = *plVar25;
              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_07209334;
              uVar20 = *(uint *)(lVar17 + 0x18);
              if (uVar20 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar20 + 1;
                *(undefined1 (*) [16])(lVar18 + (long)(int)uVar20 * 0x10 + 0x20) = auVar27;
              }
              else {
                FUN_05bd96b8(lVar17,auVar27._0_8_,auVar27._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              }
              plVar14 = *(long **)(unaff_x28 + 0x60);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar20 = in_stack_000001d8[0x20];
              lVar17 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar14 + 0x40));
              if (lVar17 == 0) {
                uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar11,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar14[(long)(int)uVar20 + 4] = lVar10;
              thunk_FUN_040ec700(plVar14 + (long)(int)uVar20 + 4,lVar10);
            }
          }
          else if (bVar7 == 7) {
            lVar10 = *(long *)(unaff_x28 + 0x68);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar10 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (*(int *)(lVar10 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) == 0x100) {
              lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd9c8);
              FUN_06e52d18(lVar10,*(undefined8 *)PTR_DAT_092bdb20);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_072011ec();
              lVar17 = *(long *)(in_stack_000001d8 + 0x10);
              auVar27 = FUN_06016048(&stack0x00000120,*(undefined8 *)puVar4);
              if (lVar17 == 0) {
LAB_0720931c:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar18 = *(long *)(lVar17 + 0x10);
              lVar22 = *plVar25;
              *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_0720931c;
              uVar20 = *(uint *)(lVar17 + 0x18);
              if (uVar20 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar17 + 0x18) = uVar20 + 1;
                *(undefined1 (*) [16])(lVar18 + (long)(int)uVar20 * 0x10 + 0x20) = auVar27;
              }
              else {
                FUN_05bd96b8(lVar17,auVar27._0_8_,auVar27._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
              }
              plVar14 = *(long **)(unaff_x28 + 0x60);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar20 = in_stack_000001d8[0x20];
              lVar17 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar14 + 0x40));
              if (lVar17 == 0) {
                uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar11,0);
              }
              if (*(uint *)(plVar14 + 3) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar14[(long)(int)uVar20 + 4] = lVar10;
              thunk_FUN_040ec700(plVar14 + (long)(int)uVar20 + 4,lVar10);
            }
          }
          plVar14 = *(long **)(unaff_x28 + 0x20);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar10 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) {
LAB_07208de8:
            puVar13 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092bd558,2);
          }
          else {
            piVar23 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            while (*(long *)(piVar23 + -2) != *(long *)PTR_DAT_092bd558) {
              uVar12 = uVar12 - 1;
              piVar23 = piVar23 + 4;
              if (uVar12 == 0) goto LAB_07208de8;
            }
            puVar13 = (undefined8 *)(lVar10 + (long)(*piVar23 + 2) * 0x10 + 0x138);
          }
          lVar10 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          in_stack_00000178 = FUN_076f1ee4(lVar10,0);
          uVar12 = FUN_07591eb4(&stack0x00000178,0);
          if ((uVar12 & 1) == 0) {
            in_stack_000001d0._4_4_ = 1;
            *in_stack_000001d8 = 1;
            *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
            thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
            puVar19 = in_stack_000001d8;
            if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1_00,in_stack_000001d8);
            }
            FUN_04995830(puVar19 + 2,&stack0x00000178,in_stack_000001d8,
                         *(undefined8 *)PTR_DAT_092bdb40);
            return;
          }
          FUN_07591f7c(&stack0x00000178,0);
          uVar20 = in_stack_000001d8[0x20];
          puVar19 = in_stack_000001d8;
        }
        uVar20 = uVar20 + 1;
        puVar19[0x20] = uVar20;
        puVar13 = (undefined8 *)PTR_DAT_092bda28;
        plVar14 = (long *)PTR_DAT_092bda30;
        puVar3 = (undefined8 *)PTR_DAT_092bdba8;
      } while( true );
    }
  }
  else if (iVar8 != 0x48) {
    return;
  }
  bVar6 = false;
LAB_07209208:
  puVar4 = PTR_DAT_092899f8;
  *in_stack_000001d8 = 0xfffffffe;
  *(undefined8 *)(in_stack_000001d8 + 0xe) = 0;
  thunk_FUN_040ec700(in_stack_000001d8 + 0xe,0);
  *(undefined8 *)(in_stack_000001d8 + 0x10) = 0;
  thunk_FUN_040ec700(in_stack_000001d8 + 0x10,0);
  puVar19 = in_stack_000001d8;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_065d0838(puVar19 + 2,bVar6,*(undefined8 *)puVar4);
  return;
}


