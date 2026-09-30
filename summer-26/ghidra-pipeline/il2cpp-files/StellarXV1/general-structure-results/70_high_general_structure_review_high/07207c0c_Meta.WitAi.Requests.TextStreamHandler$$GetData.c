/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler$$GetData
ENTRY_POINT: 07207c0c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x072090c4) */
/* WARNING: Removing unreachable block (ram,0x07208008) */
/* WARNING: Removing unreachable block (ram,0x07208388) */

void Meta_WitAi_Requests_TextStreamHandler__GetData(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined4 *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  long unaff_x20;
  long lVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  undefined8 unaff_x24;
  int unaff_w26;
  int unaff_w27;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar22 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
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
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 *in_stack_000001d8;
  
  do {
    plVar7 = (long *)thunk_FUN_040b4efc(*param_1);
    FUN_0699fff4(plVar7,unaff_x24,*(undefined8 *)PTR_DAT_092bdcd0);
LAB_07207c94:
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    bVar5 = 0;
    if (unaff_w27 < 0) {
      bVar5 = bStack00000000000001a8 >> 1 & 1;
    }
    bVar1 = 0;
    if (unaff_w26 < 0) {
      bVar1 = bStack00000000000001a8 >> 2 & 1;
    }
    *(byte *)(plVar7 + 2) = bVar5;
    *(byte *)((long)plVar7 + 0x11) = bVar1;
    plVar20 = (long *)PTR_DAT_092bdc70;
    if (*(long *)(unaff_x28 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_06efc7c4(*(long *)(unaff_x28 + 0x88),unaff_x20,plVar7,*(undefined8 *)PTR_DAT_092bdbc0);
    (**(code **)(*plVar7 + 0x178))(&stack0x00000028,plVar7);
    in_stack_00000188 = in_stack_00000030;
    _cStack0000000000000180 = in_stack_00000028;
    uVar9 = _cStack0000000000000180;
    cStack0000000000000180 = (char)in_stack_00000028;
    in_stack_00000190 = in_stack_00000038;
    _cStack0000000000000180 = uVar9;
    if (cStack0000000000000180 == '\0') {
      *(undefined1 *)(in_stack_000001d8 + 0x12) = 0;
LAB_07207e98:
      iVar6 = 0x52;
      goto LAB_07207e9c;
    }
    lVar18 = *(long *)(in_stack_000001d8 + 0x10);
    auVar22 = FUN_06016048(&stack0x00000180,*unaff_x29);
    if (lVar18 == 0) {
LAB_072082f8:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar13 = *(long *)(lVar18 + 0x10);
    lVar17 = *plVar20;
    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_072082f8;
    uVar12 = *(uint *)(lVar18 + 0x18);
    if (uVar12 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar18 + 0x18) = uVar12 + 1;
      *(undefined1 (*) [16])(lVar13 + (long)(int)uVar12 * 0x10 + 0x20) = auVar22;
    }
    else {
      FUN_05bd96b8(lVar18,auVar22._0_8_,auVar22._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
    plVar7 = *(long **)(unaff_x28 + 0x20);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar18 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092bd558) {
          puVar8 = (undefined8 *)(lVar18 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_07207e08;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092bd558,2);
LAB_07207e08:
    lVar18 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000178 = FUN_076f1ee4(lVar18,0);
    uVar14 = FUN_07591eb4(&stack0x00000178,0);
    if ((uVar14 & 1) == 0) {
      in_stack_000001d0._4_4_ = 0;
      *in_stack_000001d8 = 0;
      *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
      thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
      puVar11 = in_stack_000001d8;
      if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1,in_stack_000001d8);
      }
      FUN_04995830(puVar11 + 2,&stack0x00000178,in_stack_000001d8,*(undefined8 *)PTR_DAT_092bdb40);
      iVar6 = 0x51;
      goto LAB_07207e9c;
    }
    FUN_07591f7c(&stack0x00000178,0);
    uVar14 = FUN_053841d4(in_stack_000001d8 + 0x14,*(undefined8 *)PTR_DAT_092bdc20);
    if ((uVar14 & 1) == 0) goto LAB_07207e98;
    _bStack00000000000001a8 = *(undefined8 *)(in_stack_000001d8 + 0x1a);
    unaff_x20 = *(long *)(in_stack_000001d8 + 0x18);
    in_stack_000001a0 = unaff_x20;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar18 = *(long *)(unaff_x20 + 0x10);
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    unaff_w26 = *(int *)(lVar18 + 0x18);
    unaff_w27 = *(int *)(lVar18 + 0x14);
    if (-1 < *(int *)(lVar18 + 0x1c)) {
      iVar6 = 1;
      if (-1 < *(int *)(lVar18 + 0x20)) {
        iVar6 = 2;
      }
      lVar13 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,
                            (((((iVar6 - ((int)~*(uint *)(lVar18 + 0x24) >> 0x1f)) -
                               ((int)~*(uint *)(lVar18 + 0x28) >> 0x1f)) -
                              ((int)~*(uint *)(lVar18 + 0x2c) >> 0x1f)) -
                             ((int)~*(uint *)(lVar18 + 0x30) >> 0x1f)) -
                            ((int)~*(uint *)(lVar18 + 0x34) >> 0x1f)) -
                            ((int)~*(uint *)(lVar18 + 0x38) >> 0x1f));
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar12 = *(uint *)(lVar13 + 0x18);
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined4 *)(lVar13 + 0x20) = *(undefined4 *)(lVar18 + 0x1c);
      if (-1 < *(int *)(lVar18 + 0x20)) {
        if (uVar12 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar13 + 0x24) = *(int *)(lVar18 + 0x20);
      }
      if (-1 < *(int *)(lVar18 + 0x24)) {
        if (uVar12 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar13 + 0x28) = *(int *)(lVar18 + 0x24);
      }
      if (-1 < *(int *)(lVar18 + 0x28)) {
        if (uVar12 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar13 + 0x2c) = *(int *)(lVar18 + 0x28);
      }
      if (-1 < *(int *)(lVar18 + 0x2c)) {
        if (uVar12 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar13 + 0x30) = *(int *)(lVar18 + 0x2c);
      }
      if (-1 < *(int *)(lVar18 + 0x30)) {
        if (uVar12 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar13 + 0x34) = *(int *)(lVar18 + 0x30);
      }
      if (-1 < *(int *)(lVar18 + 0x34)) {
        if (uVar12 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar13 + 0x38) = *(int *)(lVar18 + 0x34);
      }
      if (-1 < *(int *)(lVar18 + 0x38)) {
        if (uVar12 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar13 + 0x3c) = *(int *)(lVar18 + 0x38);
      }
      if (-1 < *(int *)(lVar18 + 0x3c)) {
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar7 = *(long **)(unaff_x28 + 0x130);
        if (plVar7 != (long *)0x0) {
          lVar13 = *(long *)PTR_DAT_092a2dd8;
          lVar18 = *(long *)(lVar13 + 0x38);
          if (lVar18 == 0) {
            FUN_040b1b28(lVar13);
            lVar18 = *(long *)(lVar13 + 0x38);
          }
          lVar18 = *(long *)(lVar18 + 0x10);
          if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = FUN_040b1acc();
          }
          if (*(int *)(lVar18 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar18 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
          if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = FUN_040b1acc();
          }
          lVar13 = *plVar7;
          uVar9 = **(undefined8 **)(lVar18 + 0xb8);
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092bc2c8) {
                puVar8 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_07207bcc;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092bc2c8,1);
LAB_07207bcc:
          (*(code *)*puVar8)(plVar7,0x33,uVar9,puVar8[1]);
        }
      }
    }
    plVar20 = (long *)PTR_DAT_092bdc70;
    if (_bStack00000000000001a8 == 1) {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar9 = *(undefined8 *)(unaff_x28 + 0x130);
      plVar7 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdce8);
      System_Linq_Enumerable_<ExceptIterator>d__77<KeyValuePair<object,_object>>__System_IDisposable_Dispose
                (plVar7,uVar9,*(undefined8 *)PTR_DAT_092bdce0);
      goto LAB_07207c94;
    }
    if (_bStack00000000000001a8 == 3) {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar9 = *(undefined8 *)(unaff_x28 + 0x130);
      plVar7 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf8);
      FUN_0699efb4(plVar7,uVar9,*(undefined8 *)PTR_DAT_092bdcd8);
      goto LAB_07207c94;
    }
    if (_bStack00000000000001a8 != 7) {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar7 = *(long **)(unaff_x28 + 0x130);
      if (plVar7 == (long *)0x0) goto LAB_072082cc;
      lVar18 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
      uVar9 = FUN_059f7a58(&stack0x000001a0,*(undefined8 *)PTR_DAT_092bdc48);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(lVar18 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined8 *)(lVar18 + 0x20) = uVar9;
      thunk_FUN_040ec700();
      lVar13 = *plVar7;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_0720829c;
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    unaff_x24 = *(undefined8 *)(unaff_x28 + 0x130);
    param_1 = (undefined8 *)PTR_DAT_092bdcf0;
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092bc2c8) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_072082b8;
    }
  }
LAB_0720829c:
  puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092bc2c8,0);
LAB_072082b8:
  (*(code *)*puVar8)(plVar7,9,lVar18,puVar8[1]);
LAB_072082cc:
  iVar6 = 0x48;
LAB_07207e9c:
  if (*in_stack_00000058 < 0) {
    FUN_053842f8(*in_stack_00000060 + 0x50,*(undefined8 *)PTR_DAT_092bdc08);
  }
  if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if ((iVar6 == 0) || (iVar6 == 0x52)) {
    *(undefined8 *)(in_stack_000001d8 + 0x1c) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x16) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x14) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x1a) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x18) = 0;
    if (*(char *)(in_stack_000001d8 + 0x12) != '\0') {
      if (*(long *)(in_stack_000001d8 + 0xe) != 0) {
        FUN_06efcc0c(&stack0x00000050,*(long *)(in_stack_000001d8 + 0xe),
                     *(undefined8 *)PTR_DAT_092bdb60);
        puVar3 = PTR_DAT_092bdc18;
        in_stack_00000170 = in_stack_00000070;
        in_stack_00000158 = in_stack_00000058;
        in_stack_00000150 = in_stack_00000050;
        in_stack_00000168 = in_stack_00000068;
        in_stack_00000160 = in_stack_00000060;
        in_stack_00000050 = 0;
        in_stack_00000060 = &stack0x00000150;
        in_stack_00000058 = (int *)((long)&stack0x000001d0 + 4);
        while (uVar14 = FUN_05385f24(&stack0x00000150,*(undefined8 *)puVar3), (uVar14 & 1) != 0) {
          if (in_stack_00000168 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          auVar22 = FUN_07215d10(in_stack_00000168,0);
          lVar18 = *(long *)(in_stack_000001d8 + 0x10);
          if (lVar18 == 0) {
LAB_0720830c:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar13 = *(long *)(lVar18 + 0x10);
          lVar17 = *plVar20;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_0720830c;
          uVar12 = *(uint *)(lVar18 + 0x18);
          if (uVar12 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar18 + 0x18) = uVar12 + 1;
            *(undefined1 (*) [16])(lVar13 + (long)(int)uVar12 * 0x10 + 0x20) = auVar22;
          }
          else {
            FUN_05bd96b8(lVar18,auVar22._0_8_,auVar22._8_8_,
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
      uVar14 = FUN_0721f760(*(long *)(in_stack_000001d8 + 8),0);
      if ((uVar14 & 1) != 0) {
        lVar18 = *(long *)(in_stack_000001d8 + 8);
        if (lVar18 != 0) {
          uVar14 = 0;
          do {
            lVar18 = *(long *)(lVar18 + 0x28);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((int)*(uint *)(lVar18 + 0x18) <= (int)uVar14) goto LAB_072081b8;
            if (*(uint *)(lVar18 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar18 = *(long *)(lVar18 + uVar14 * 8 + 0x20);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar13 = *(long *)(lVar18 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar12 = *(uint *)(lVar13 + 0x18);
            if (0 < (int)uVar12) {
              lVar17 = 0;
              do {
                if (uVar12 <= (uint)lVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                if (*(long *)(lVar13 + 0x20 + lVar17 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07200548();
                uVar12 = *(uint *)(lVar13 + 0x18);
                lVar17 = lVar17 + 1;
              } while ((int)lVar17 < (int)uVar12);
            }
            lVar13 = *(long *)(lVar18 + 0x18);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar12 = *(uint *)(lVar13 + 0x18);
            if (0 < (int)uVar12) {
              uVar21 = 0;
              do {
                if (uVar12 <= uVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                lVar17 = *(long *)(lVar13 + (long)(int)uVar21 * 8 + 0x20);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar15 = *(long *)(lVar18 + 0x20);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(uint *)(lVar15 + 0x18) <= *(uint *)(lVar17 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                if (*(long *)(lVar15 + (long)(int)*(uint *)(lVar17 + 0x10) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                iVar6 = FUN_07212d80(*(long *)(lVar17 + 0x18),0);
                if (iVar6 < 4) {
                  if (iVar6 == 2) {
                    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    FUN_07200548();
                  }
                  else if (iVar6 == 3) {
                    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    FUN_07200548();
                  }
                }
                else if (iVar6 == 4) {
                  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07200548();
                }
                else if (iVar6 == 5) {
                  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07200548();
                }
                uVar12 = *(uint *)(lVar13 + 0x18);
                uVar21 = uVar21 + 1;
              } while ((int)uVar21 < (int)uVar12);
            }
            uVar14 = uVar14 + 1;
            lVar18 = *(long *)(in_stack_000001d8 + 8);
          } while (lVar18 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
LAB_072081b8:
      if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar18 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x20);
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar9 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdb00,*(undefined4 *)(lVar18 + 0x18));
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined8 *)(unaff_x28 + 0x60) = uVar9;
      thunk_FUN_040ec700();
      uVar12 = 0;
      in_stack_000001d8[0x20] = 0;
      puVar8 = (undefined8 *)PTR_DAT_092bda28;
      plVar7 = (long *)PTR_DAT_092bda30;
      puVar2 = (undefined8 *)PTR_DAT_092bdba8;
      puVar11 = in_stack_000001d8;
      while( true ) {
        PTR_DAT_092bda28 = (undefined *)puVar8;
        PTR_DAT_092bda30 = (undefined *)plVar7;
        PTR_DAT_092bdba8 = (undefined *)puVar2;
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(unaff_x28 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(*(long *)(unaff_x28 + 0x60) + 0x18) <= (int)uVar12) break;
        if (*(long *)(puVar11 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar18 = *(long *)(*(long *)(puVar11 + 8) + 0x20);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar18 = *(long *)(lVar18 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (-1 < *(int *)(lVar18 + 0x10)) {
          bVar5 = FUN_072199cc(lVar18,0);
          if (bVar5 < 4) {
            if (bVar5 == 1) {
              lVar18 = *(long *)(unaff_x28 + 0x68);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar18 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              iVar6 = *(int *)(lVar18 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
              if (iVar6 < 0x200) {
                if ((iVar6 == 2) || (iVar6 == 4)) {
                  lVar18 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd858);
                  FUN_06e52ce0(lVar18,*(undefined8 *)PTR_DAT_092bdb08);
                  if (lVar18 == 0) {
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
                  lVar13 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar22 = FUN_06016048(&stack0x00000138,*unaff_x29);
                  if (lVar13 == 0) {
LAB_07209348:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar17 = *(long *)(lVar13 + 0x10);
                  lVar15 = *plVar20;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_07209348;
                  uVar12 = *(uint *)(lVar13 + 0x18);
                  if (uVar12 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar12 + 1;
                    *(undefined1 (*) [16])(lVar17 + (long)(int)uVar12 * 0x10 + 0x20) = auVar22;
                  }
                  else {
                    FUN_05bd96b8(lVar13,auVar22._0_8_,auVar22._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar7 = *(long **)(unaff_x28 + 0x60);
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar12 = in_stack_000001d8[0x20];
                  lVar13 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar7 + 0x40));
                  if (lVar13 == 0) {
                    uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar9,0);
                  }
                  if (*(uint *)(plVar7 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar7[(long)(int)uVar12 + 4] = lVar18;
                  thunk_FUN_040ec700(plVar7 + (long)(int)uVar12 + 4,lVar18);
                }
              }
              else if ((iVar6 == 0x200) || (iVar6 == 0x2000)) {
                lVar18 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdb30);
                FUN_06e52d58(lVar18,*(undefined8 *)PTR_DAT_092bdb18);
                FUN_07201d94();
                if (in_stack_000000c0 != '\0') {
                  auVar22 = FUN_06008be0(&stack0x000000c0,*(undefined8 *)PTR_DAT_092bd960);
                  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  *(undefined1 (*) [16])(lVar18 + 0x10) = auVar22;
                }
                if (in_stack_000000a8 != '\0') {
                  lVar13 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar22 = FUN_06016048(&stack0x000000a8,*unaff_x29);
                  if (lVar13 == 0) {
LAB_07209384:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar17 = *(long *)(lVar13 + 0x10);
                  lVar15 = *plVar20;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_07209384;
                  uVar12 = *(uint *)(lVar13 + 0x18);
                  if (uVar12 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar12 + 1;
                    *(undefined1 (*) [16])(lVar17 + (long)(int)uVar12 * 0x10 + 0x20) = auVar22;
                  }
                  else {
                    FUN_05bd96b8(lVar13,auVar22._0_8_,auVar22._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                plVar7 = *(long **)(unaff_x28 + 0x60);
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar12 = in_stack_000001d8[0x20];
                if ((lVar18 != 0) &&
                   (lVar13 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0
                   )) {
                  uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar9,0);
                }
                if (*(uint *)(plVar7 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar7[(long)(int)uVar12 + 4] = lVar18;
                thunk_FUN_040ec700(plVar7 + (long)(int)uVar12 + 4,lVar18);
              }
            }
            else if (bVar5 == 3) {
              lVar18 = *(long *)(unaff_x28 + 0x68);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar18 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              uVar12 = *(uint *)(lVar18 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
              if ((uVar12 >> 10 & 1) == 0) {
                if ((uVar12 >> 0xc & 1) != 0) {
                  lVar18 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                  FUN_06e52d78(lVar18,*(undefined8 *)PTR_DAT_092bdb10);
                  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07201560();
                  lVar13 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar22 = FUN_06016048(&stack0x000000d8,*unaff_x29);
                  if (lVar13 == 0) {
LAB_0720936c:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar17 = *(long *)(lVar13 + 0x10);
                  lVar15 = *plVar20;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_0720936c;
                  uVar12 = *(uint *)(lVar13 + 0x18);
                  if (uVar12 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar12 + 1;
                    *(undefined1 (*) [16])(lVar17 + (long)(int)uVar12 * 0x10 + 0x20) = auVar22;
                  }
                  else {
                    FUN_05bd96b8(lVar13,auVar22._0_8_,auVar22._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar7 = *(long **)(unaff_x28 + 0x60);
                  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar12 = in_stack_000001d8[0x20];
                  lVar13 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar7 + 0x40));
                  if (lVar13 == 0) {
                    uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar9,0);
                  }
                  if (*(uint *)(plVar7 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar7[(long)(int)uVar12 + 4] = lVar18;
                  thunk_FUN_040ec700(plVar7 + (long)(int)uVar12 + 4,lVar18);
                }
              }
              else {
                lVar18 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                FUN_06e52d78(lVar18,*(undefined8 *)PTR_DAT_092bdb10);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07201560();
                lVar13 = *(long *)(in_stack_000001d8 + 0x10);
                auVar22 = FUN_06016048(&stack0x00000108,*unaff_x29);
                if (lVar13 == 0) {
LAB_07209328:
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar17 = *(long *)(lVar13 + 0x10);
                lVar15 = *plVar20;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar17 == 0) goto LAB_07209328;
                uVar12 = *(uint *)(lVar13 + 0x18);
                if (uVar12 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar13 + 0x18) = uVar12 + 1;
                  *(undefined1 (*) [16])(lVar17 + (long)(int)uVar12 * 0x10 + 0x20) = auVar22;
                }
                else {
                  FUN_05bd96b8(lVar13,auVar22._0_8_,auVar22._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
                plVar7 = *(long **)(unaff_x28 + 0x60);
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar12 = in_stack_000001d8[0x20];
                lVar13 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar7 + 0x40));
                if (lVar13 == 0) {
                  uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar9,0);
                }
                if (*(uint *)(plVar7 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar7[(long)(int)uVar12 + 4] = lVar18;
                thunk_FUN_040ec700(plVar7 + (long)(int)uVar12 + 4,lVar18);
              }
            }
          }
          else if (bVar5 == 4) {
            lVar18 = *(long *)(unaff_x28 + 0x68);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar18 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if ((*(uint *)(lVar18 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) >> 0xb & 1) != 0)
            {
              lVar18 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd988);
              FUN_06e52d38(lVar18,*(undefined8 *)PTR_DAT_092bdb28);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_07201930();
              lVar13 = *(long *)(in_stack_000001d8 + 0x10);
              auVar22 = FUN_06016048(&stack0x000000f0,*unaff_x29);
              if (lVar13 == 0) {
LAB_07209334:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar17 = *(long *)(lVar13 + 0x10);
              lVar15 = *plVar20;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_07209334;
              uVar12 = *(uint *)(lVar13 + 0x18);
              if (uVar12 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar12 + 1;
                *(undefined1 (*) [16])(lVar17 + (long)(int)uVar12 * 0x10 + 0x20) = auVar22;
              }
              else {
                FUN_05bd96b8(lVar13,auVar22._0_8_,auVar22._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              plVar7 = *(long **)(unaff_x28 + 0x60);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar12 = in_stack_000001d8[0x20];
              lVar13 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar13 == 0) {
                uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar9,0);
              }
              if (*(uint *)(plVar7 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar7[(long)(int)uVar12 + 4] = lVar18;
              thunk_FUN_040ec700(plVar7 + (long)(int)uVar12 + 4,lVar18);
            }
          }
          else if (bVar5 == 7) {
            lVar18 = *(long *)(unaff_x28 + 0x68);
            if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar18 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (*(int *)(lVar18 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) == 0x100) {
              lVar18 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd9c8);
              FUN_06e52d18(lVar18,*(undefined8 *)PTR_DAT_092bdb20);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_072011ec();
              lVar13 = *(long *)(in_stack_000001d8 + 0x10);
              auVar22 = FUN_06016048(&stack0x00000120,*unaff_x29);
              if (lVar13 == 0) {
LAB_0720931c:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar17 = *(long *)(lVar13 + 0x10);
              lVar15 = *plVar20;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_0720931c;
              uVar12 = *(uint *)(lVar13 + 0x18);
              if (uVar12 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar12 + 1;
                *(undefined1 (*) [16])(lVar17 + (long)(int)uVar12 * 0x10 + 0x20) = auVar22;
              }
              else {
                FUN_05bd96b8(lVar13,auVar22._0_8_,auVar22._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              plVar7 = *(long **)(unaff_x28 + 0x60);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar12 = in_stack_000001d8[0x20];
              lVar13 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar13 == 0) {
                uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar9,0);
              }
              if (*(uint *)(plVar7 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar7[(long)(int)uVar12 + 4] = lVar18;
              thunk_FUN_040ec700(plVar7 + (long)(int)uVar12 + 4,lVar18);
            }
          }
          plVar7 = *(long **)(unaff_x28 + 0x20);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar18 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092bd558) {
                puVar8 = (undefined8 *)(lVar18 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_07208e08;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092bd558,2);
LAB_07208e08:
          lVar18 = (*(code *)*puVar8)(plVar7,puVar8[1]);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          in_stack_00000178 = FUN_076f1ee4(lVar18,0);
          uVar14 = FUN_07591eb4(&stack0x00000178,0);
          if ((uVar14 & 1) == 0) {
            in_stack_000001d0._4_4_ = 1;
            *in_stack_000001d8 = 1;
            *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
            thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
            puVar11 = in_stack_000001d8;
            if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1_00,in_stack_000001d8);
            }
            FUN_04995830(puVar11 + 2,&stack0x00000178,in_stack_000001d8,
                         *(undefined8 *)PTR_DAT_092bdb40);
            return;
          }
          FUN_07591f7c(&stack0x00000178,0);
          uVar12 = in_stack_000001d8[0x20];
          puVar11 = in_stack_000001d8;
        }
        uVar12 = uVar12 + 1;
        puVar11[0x20] = uVar12;
        puVar8 = (undefined8 *)PTR_DAT_092bda28;
        plVar7 = (long *)PTR_DAT_092bda30;
        puVar2 = (undefined8 *)PTR_DAT_092bdba8;
      }
      if (0 < (int)puVar11[0xc]) {
        uVar12 = 0;
        uVar14 = 0;
        do {
          if (*(long *)(puVar11 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar18 = *(long *)(*(long *)(puVar11 + 8) + 0x60);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar18 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar13 = *(long *)(unaff_x28 + 0x90);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar13 = *(long *)(lVar13 + uVar14 * 8 + 0x20);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar17 = *(long *)(lVar18 + uVar14 * 8 + 0x20);
          lVar18 = FUN_06efc5fc(lVar13,*(undefined8 *)PTR_DAT_092bdbb8);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_0685b4f8(&stack0x00000050,lVar18,*(undefined8 *)PTR_DAT_092bdcc8);
          in_stack_00000090 = in_stack_00000050;
          in_stack_000000a0 = in_stack_00000060;
          in_stack_00000050 = 0;
          in_stack_00000060 = &stack0x00000090;
          in_stack_00000098 = in_stack_00000058;
          in_stack_00000058 = (int *)((long)&stack0x000001d0 + 4);
          while (uVar10 = FUN_05386d5c(&stack0x00000090,*(undefined8 *)PTR_DAT_092bdc28),
                plVar20 = in_stack_000000a0, (uVar10 & 1) != 0) {
            if (in_stack_000000a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((int)in_stack_000000a0[3] < 1) {
              plVar19 = (long *)0x0;
            }
            else {
              iVar6 = 0;
              plVar19 = (long *)0x0;
              do {
                lVar18 = FUN_05c26ab8(plVar20,iVar6,*puVar8);
                if (plVar19 == (long *)0x0) {
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar13 = plVar20[3];
                  uVar9 = *(undefined8 *)(lVar17 + 0x10);
                  plVar19 = (long *)thunk_FUN_040b4efc(*plVar7);
                  FUN_07216bd0(plVar19,uVar12,(int)lVar13,uVar9,0);
                }
                else {
                  bVar5 = *(byte *)(*plVar7 + 0x130);
                  if (*(byte *)(*plVar19 + 0x130) < bVar5) {
                    plVar19 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar5 * 8 + -8) != *plVar7)
                  {
                    plVar19 = (long *)0x0;
                  }
                }
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar18 + 0x28) == 0) {
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
                  lVar13 = FUN_06efc758(*(long *)(in_stack_000001d8 + 0xe),lVar18,*puVar2);
                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  plVar19[5] = lVar13;
                  thunk_FUN_040ec700();
                }
                FUN_072175f4(plVar19,iVar6,*(undefined4 *)(lVar18 + 0x1c),0);
                iVar6 = iVar6 + 1;
              } while (iVar6 < (int)plVar20[3]);
            }
            plVar20 = *(long **)(unaff_x28 + 0x80);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((plVar19 != (long *)0x0) &&
               (lVar18 = thunk_FUN_040b4e00(plVar19,*(undefined8 *)(*plVar20 + 0x40)), lVar18 == 0))
            {
              uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar9,0);
            }
            if (*(uint *)(plVar20 + 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar20[(long)(int)uVar12 + 4] = (long)plVar19;
            thunk_FUN_040ec700(plVar20 + (long)(int)uVar12 + 4,plVar19);
            uVar12 = uVar12 + 1;
          }
          if (*in_stack_00000058 < 0) {
            System_Collections_Generic_EqualityComparer<IndirectDrawInfo>__get_Default
                      (in_stack_00000060,*(undefined8 *)PTR_DAT_092bdc00);
          }
          if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077828();
          }
          uVar14 = uVar14 + 1;
          puVar11 = in_stack_000001d8;
        } while ((int)uVar14 < (int)in_stack_000001d8[0xc]);
      }
      if (*(long *)(puVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar9 = FUN_05bdb0a8(*(long *)(puVar11 + 0x10),*(undefined8 *)PTR_DAT_092bdc78);
      FUN_05f3fd7c(&stack0x000001c0,uVar9,4,*(undefined8 *)PTR_DAT_092bdca8);
      auVar22 = FUN_0896aff0(in_stack_000001c0,in_stack_000001c8,0);
      puVar3 = PTR_DAT_092bc2d8;
      *(undefined1 (*) [16])(unaff_x28 + 0x70) = auVar22;
      FUN_05f3ffd8(&stack0x000001c0,*(undefined8 *)puVar3);
      FUN_0896af44(0);
      bVar4 = *(char *)(in_stack_000001d8 + 0x12) != '\0';
      goto LAB_07209208;
    }
  }
  else if (iVar6 != 0x48) {
    return;
  }
  bVar4 = false;
LAB_07209208:
  puVar3 = PTR_DAT_092899f8;
  *in_stack_000001d8 = 0xfffffffe;
  *(undefined8 *)(in_stack_000001d8 + 0xe) = 0;
  thunk_FUN_040ec700(in_stack_000001d8 + 0xe,0);
  *(undefined8 *)(in_stack_000001d8 + 0x10) = 0;
  thunk_FUN_040ec700(in_stack_000001d8 + 0x10,0);
  puVar11 = in_stack_000001d8;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_065d0838(puVar11 + 2,bVar4,*(undefined8 *)puVar3);
  return;
}


