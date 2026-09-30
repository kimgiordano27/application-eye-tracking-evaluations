/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler$$CompleteContent
ENTRY_POINT: 07207c5c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x072090c4) */
/* WARNING: Removing unreachable block (ram,0x07208008) */
/* WARNING: Removing unreachable block (ram,0x07208388) */

void Meta_WitAi_Requests_TextStreamHandler__CompleteContent
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined4 *puVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long unaff_x20;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  long *unaff_x23;
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
    FUN_0699efb4(param_1,param_2,param_3);
LAB_07207c94:
    if (unaff_x23 == (long *)0x0) {
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
    *(byte *)(unaff_x23 + 2) = bVar5;
    *(byte *)((long)unaff_x23 + 0x11) = bVar1;
    plVar20 = (long *)PTR_DAT_092bdc70;
    if (*(long *)(unaff_x28 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_06efc7c4(*(long *)(unaff_x28 + 0x88),unaff_x20,unaff_x23,*(undefined8 *)PTR_DAT_092bdbc0);
    (**(code **)(*unaff_x23 + 0x178))(&stack0x00000028,unaff_x23);
    in_stack_00000188 = in_stack_00000030;
    _cStack0000000000000180 = in_stack_00000028;
    uVar8 = _cStack0000000000000180;
    cStack0000000000000180 = (char)in_stack_00000028;
    in_stack_00000190 = in_stack_00000038;
    _cStack0000000000000180 = uVar8;
    if (cStack0000000000000180 == '\0') {
      *(undefined1 *)(in_stack_000001d8 + 0x12) = 0;
LAB_07207e98:
      iVar6 = 0x52;
      goto LAB_07207e9c;
    }
    lVar17 = *(long *)(in_stack_000001d8 + 0x10);
    auVar22 = FUN_06016048(&stack0x00000180,*unaff_x29);
    if (lVar17 == 0) {
LAB_072082f8:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar12 = *(long *)(lVar17 + 0x10);
    lVar16 = *plVar20;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_072082f8;
    uVar11 = *(uint *)(lVar17 + 0x18);
    if (uVar11 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar17 + 0x18) = uVar11 + 1;
      *(undefined1 (*) [16])(lVar12 + (long)(int)uVar11 * 0x10 + 0x20) = auVar22;
    }
    else {
      FUN_05bd96b8(lVar17,auVar22._0_8_,auVar22._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    plVar18 = *(long **)(unaff_x28 + 0x20);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar17 = *plVar18;
    uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_092bd558) {
          puVar7 = (undefined8 *)(lVar17 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_07207e08;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar18,*(long *)PTR_DAT_092bd558,2);
LAB_07207e08:
    lVar17 = (*(code *)*puVar7)(plVar18,puVar7[1]);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000178 = FUN_076f1ee4(lVar17,0);
    uVar13 = FUN_07591eb4(&stack0x00000178,0);
    if ((uVar13 & 1) == 0) {
      in_stack_000001d0._4_4_ = 0;
      *in_stack_000001d8 = 0;
      *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
      thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
      puVar10 = in_stack_000001d8;
      if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1,in_stack_000001d8);
      }
      FUN_04995830(puVar10 + 2,&stack0x00000178,in_stack_000001d8,*(undefined8 *)PTR_DAT_092bdb40);
      iVar6 = 0x51;
      goto LAB_07207e9c;
    }
    FUN_07591f7c(&stack0x00000178,0);
    uVar13 = FUN_053841d4(in_stack_000001d8 + 0x14,*(undefined8 *)PTR_DAT_092bdc20);
    if ((uVar13 & 1) == 0) goto LAB_07207e98;
    _bStack00000000000001a8 = *(undefined8 *)(in_stack_000001d8 + 0x1a);
    unaff_x20 = *(long *)(in_stack_000001d8 + 0x18);
    in_stack_000001a0 = unaff_x20;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar17 = *(long *)(unaff_x20 + 0x10);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    unaff_w26 = *(int *)(lVar17 + 0x18);
    unaff_w27 = *(int *)(lVar17 + 0x14);
    if (-1 < *(int *)(lVar17 + 0x1c)) {
      iVar6 = 1;
      if (-1 < *(int *)(lVar17 + 0x20)) {
        iVar6 = 2;
      }
      lVar12 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,
                            (((((iVar6 - ((int)~*(uint *)(lVar17 + 0x24) >> 0x1f)) -
                               ((int)~*(uint *)(lVar17 + 0x28) >> 0x1f)) -
                              ((int)~*(uint *)(lVar17 + 0x2c) >> 0x1f)) -
                             ((int)~*(uint *)(lVar17 + 0x30) >> 0x1f)) -
                            ((int)~*(uint *)(lVar17 + 0x34) >> 0x1f)) -
                            ((int)~*(uint *)(lVar17 + 0x38) >> 0x1f));
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = *(uint *)(lVar12 + 0x18);
      if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(lVar17 + 0x1c);
      if (-1 < *(int *)(lVar17 + 0x20)) {
        if (uVar11 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x24) = *(int *)(lVar17 + 0x20);
      }
      if (-1 < *(int *)(lVar17 + 0x24)) {
        if (uVar11 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x28) = *(int *)(lVar17 + 0x24);
      }
      if (-1 < *(int *)(lVar17 + 0x28)) {
        if (uVar11 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x2c) = *(int *)(lVar17 + 0x28);
      }
      if (-1 < *(int *)(lVar17 + 0x2c)) {
        if (uVar11 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x30) = *(int *)(lVar17 + 0x2c);
      }
      if (-1 < *(int *)(lVar17 + 0x30)) {
        if (uVar11 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x34) = *(int *)(lVar17 + 0x30);
      }
      if (-1 < *(int *)(lVar17 + 0x34)) {
        if (uVar11 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x38) = *(int *)(lVar17 + 0x34);
      }
      if (-1 < *(int *)(lVar17 + 0x38)) {
        if (uVar11 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar12 + 0x3c) = *(int *)(lVar17 + 0x38);
      }
      if (-1 < *(int *)(lVar17 + 0x3c)) {
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar20 = *(long **)(unaff_x28 + 0x130);
        if (plVar20 != (long *)0x0) {
          lVar12 = *(long *)PTR_DAT_092a2dd8;
          lVar17 = *(long *)(lVar12 + 0x38);
          if (lVar17 == 0) {
            FUN_040b1b28(lVar12);
            lVar17 = *(long *)(lVar12 + 0x38);
          }
          lVar17 = *(long *)(lVar17 + 0x10);
          if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_040b1acc();
          }
          if (*(int *)(lVar17 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar17 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
          if ((*(ushort *)(lVar17 + 0x135) & 1) == 0) {
            lVar17 = FUN_040b1acc();
          }
          lVar12 = *plVar20;
          uVar8 = **(undefined8 **)(lVar17 + 0xb8);
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_092bc2c8) {
                puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_07207bcc;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(plVar20,*(long *)PTR_DAT_092bc2c8,1);
LAB_07207bcc:
          (*(code *)*puVar7)(plVar20,0x33,uVar8,puVar7[1]);
        }
      }
    }
    plVar20 = (long *)PTR_DAT_092bdc70;
    if (_bStack00000000000001a8 == 1) {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar8 = *(undefined8 *)(unaff_x28 + 0x130);
      unaff_x23 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdce8);
      System_Linq_Enumerable_<ExceptIterator>d__77<KeyValuePair<object,_object>>__System_IDisposable_Dispose
                (unaff_x23,uVar8,*(undefined8 *)PTR_DAT_092bdce0);
      goto LAB_07207c94;
    }
    if (_bStack00000000000001a8 != 3) {
      if (_bStack00000000000001a8 != 7) {
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar18 = *(long **)(unaff_x28 + 0x130);
        if (plVar18 == (long *)0x0) goto LAB_072082cc;
        lVar17 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
        uVar8 = FUN_059f7a58(&stack0x000001a0,*(undefined8 *)PTR_DAT_092bdc48);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(undefined8 *)(lVar17 + 0x20) = uVar8;
        thunk_FUN_040ec700();
        lVar12 = *plVar18;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 == 0) goto LAB_0720829c;
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        break;
      }
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar8 = *(undefined8 *)(unaff_x28 + 0x130);
      unaff_x23 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf0);
      FUN_0699fff4(unaff_x23,uVar8,*(undefined8 *)PTR_DAT_092bdcd0);
      goto LAB_07207c94;
    }
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    param_2 = *(undefined8 *)(unaff_x28 + 0x130);
    param_1 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf8);
    param_3 = *(undefined8 *)PTR_DAT_092bdcd8;
    unaff_x23 = param_1;
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_092bc2c8) {
      puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_072082b8;
    }
  }
LAB_0720829c:
  puVar7 = (undefined8 *)FUN_040b1e00(plVar18,*(long *)PTR_DAT_092bc2c8,0);
LAB_072082b8:
  (*(code *)*puVar7)(plVar18,9,lVar17,puVar7[1]);
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
        while (uVar13 = FUN_05385f24(&stack0x00000150,*(undefined8 *)puVar3), (uVar13 & 1) != 0) {
          if (in_stack_00000168 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          auVar22 = FUN_07215d10(in_stack_00000168,0);
          lVar17 = *(long *)(in_stack_000001d8 + 0x10);
          if (lVar17 == 0) {
LAB_0720830c:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar12 = *(long *)(lVar17 + 0x10);
          lVar16 = *plVar20;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_0720830c;
          uVar11 = *(uint *)(lVar17 + 0x18);
          if (uVar11 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar17 + 0x18) = uVar11 + 1;
            *(undefined1 (*) [16])(lVar12 + (long)(int)uVar11 * 0x10 + 0x20) = auVar22;
          }
          else {
            FUN_05bd96b8(lVar17,auVar22._0_8_,auVar22._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
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
      uVar13 = FUN_0721f760(*(long *)(in_stack_000001d8 + 8),0);
      if ((uVar13 & 1) != 0) {
        lVar17 = *(long *)(in_stack_000001d8 + 8);
        if (lVar17 != 0) {
          uVar13 = 0;
          do {
            lVar17 = *(long *)(lVar17 + 0x28);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((int)*(uint *)(lVar17 + 0x18) <= (int)uVar13) goto LAB_072081b8;
            if (*(uint *)(lVar17 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar17 = *(long *)(lVar17 + uVar13 * 8 + 0x20);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar12 = *(long *)(lVar17 + 0x20);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar11 = *(uint *)(lVar12 + 0x18);
            if (0 < (int)uVar11) {
              lVar16 = 0;
              do {
                if (uVar11 <= (uint)lVar16) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                if (*(long *)(lVar12 + 0x20 + lVar16 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07200548();
                uVar11 = *(uint *)(lVar12 + 0x18);
                lVar16 = lVar16 + 1;
              } while ((int)lVar16 < (int)uVar11);
            }
            lVar12 = *(long *)(lVar17 + 0x18);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar11 = *(uint *)(lVar12 + 0x18);
            if (0 < (int)uVar11) {
              uVar21 = 0;
              do {
                if (uVar11 <= uVar21) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                lVar16 = *(long *)(lVar12 + (long)(int)uVar21 * 8 + 0x20);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar14 = *(long *)(lVar17 + 0x20);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(uint *)(lVar14 + 0x18) <= *(uint *)(lVar16 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                if (*(long *)(lVar14 + (long)(int)*(uint *)(lVar16 + 0x10) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                iVar6 = FUN_07212d80(*(long *)(lVar16 + 0x18),0);
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
                uVar11 = *(uint *)(lVar12 + 0x18);
                uVar21 = uVar21 + 1;
              } while ((int)uVar21 < (int)uVar11);
            }
            uVar13 = uVar13 + 1;
            lVar17 = *(long *)(in_stack_000001d8 + 8);
          } while (lVar17 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
LAB_072081b8:
      if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar17 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x20);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar8 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdb00,*(undefined4 *)(lVar17 + 0x18));
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined8 *)(unaff_x28 + 0x60) = uVar8;
      thunk_FUN_040ec700();
      uVar11 = 0;
      in_stack_000001d8[0x20] = 0;
      puVar7 = (undefined8 *)PTR_DAT_092bda28;
      plVar18 = (long *)PTR_DAT_092bda30;
      puVar2 = (undefined8 *)PTR_DAT_092bdba8;
      puVar10 = in_stack_000001d8;
      while( true ) {
        PTR_DAT_092bda28 = (undefined *)puVar7;
        PTR_DAT_092bda30 = (undefined *)plVar18;
        PTR_DAT_092bdba8 = (undefined *)puVar2;
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(unaff_x28 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(*(long *)(unaff_x28 + 0x60) + 0x18) <= (int)uVar11) break;
        if (*(long *)(puVar10 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar17 = *(long *)(*(long *)(puVar10 + 8) + 0x20);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar17 = *(long *)(lVar17 + (long)(int)uVar11 * 8 + 0x20);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (-1 < *(int *)(lVar17 + 0x10)) {
          bVar5 = FUN_072199cc(lVar17,0);
          if (bVar5 < 4) {
            if (bVar5 == 1) {
              lVar17 = *(long *)(unaff_x28 + 0x68);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar17 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              iVar6 = *(int *)(lVar17 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
              if (iVar6 < 0x200) {
                if ((iVar6 == 2) || (iVar6 == 4)) {
                  lVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd858);
                  FUN_06e52ce0(lVar17,*(undefined8 *)PTR_DAT_092bdb08);
                  if (lVar17 == 0) {
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
                  lVar12 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar22 = FUN_06016048(&stack0x00000138,*unaff_x29);
                  if (lVar12 == 0) {
LAB_07209348:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar16 = *(long *)(lVar12 + 0x10);
                  lVar14 = *plVar20;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar16 == 0) goto LAB_07209348;
                  uVar11 = *(uint *)(lVar12 + 0x18);
                  if (uVar11 < *(uint *)(lVar16 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar11 + 1;
                    *(undefined1 (*) [16])(lVar16 + (long)(int)uVar11 * 0x10 + 0x20) = auVar22;
                  }
                  else {
                    FUN_05bd96b8(lVar12,auVar22._0_8_,auVar22._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar18 = *(long **)(unaff_x28 + 0x60);
                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar11 = in_stack_000001d8[0x20];
                  lVar12 = thunk_FUN_040b4e00(lVar17,*(undefined8 *)(*plVar18 + 0x40));
                  if (lVar12 == 0) {
                    uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar8,0);
                  }
                  if (*(uint *)(plVar18 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar18[(long)(int)uVar11 + 4] = lVar17;
                  thunk_FUN_040ec700(plVar18 + (long)(int)uVar11 + 4,lVar17);
                }
              }
              else if ((iVar6 == 0x200) || (iVar6 == 0x2000)) {
                lVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdb30);
                FUN_06e52d58(lVar17,*(undefined8 *)PTR_DAT_092bdb18);
                FUN_07201d94();
                if (in_stack_000000c0 != '\0') {
                  auVar22 = FUN_06008be0(&stack0x000000c0,*(undefined8 *)PTR_DAT_092bd960);
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  *(undefined1 (*) [16])(lVar17 + 0x10) = auVar22;
                }
                if (in_stack_000000a8 != '\0') {
                  lVar12 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar22 = FUN_06016048(&stack0x000000a8,*unaff_x29);
                  if (lVar12 == 0) {
LAB_07209384:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar16 = *(long *)(lVar12 + 0x10);
                  lVar14 = *plVar20;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar16 == 0) goto LAB_07209384;
                  uVar11 = *(uint *)(lVar12 + 0x18);
                  if (uVar11 < *(uint *)(lVar16 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar11 + 1;
                    *(undefined1 (*) [16])(lVar16 + (long)(int)uVar11 * 0x10 + 0x20) = auVar22;
                  }
                  else {
                    FUN_05bd96b8(lVar12,auVar22._0_8_,auVar22._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                plVar18 = *(long **)(unaff_x28 + 0x60);
                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar11 = in_stack_000001d8[0x20];
                if ((lVar17 != 0) &&
                   (lVar12 = thunk_FUN_040b4e00(lVar17,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar12 == 0)) {
                  uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar8,0);
                }
                if (*(uint *)(plVar18 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar18[(long)(int)uVar11 + 4] = lVar17;
                thunk_FUN_040ec700(plVar18 + (long)(int)uVar11 + 4,lVar17);
              }
            }
            else if (bVar5 == 3) {
              lVar17 = *(long *)(unaff_x28 + 0x68);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar17 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              uVar11 = *(uint *)(lVar17 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
              if ((uVar11 >> 10 & 1) == 0) {
                if ((uVar11 >> 0xc & 1) != 0) {
                  lVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                  FUN_06e52d78(lVar17,*(undefined8 *)PTR_DAT_092bdb10);
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07201560();
                  lVar12 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar22 = FUN_06016048(&stack0x000000d8,*unaff_x29);
                  if (lVar12 == 0) {
LAB_0720936c:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar16 = *(long *)(lVar12 + 0x10);
                  lVar14 = *plVar20;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar16 == 0) goto LAB_0720936c;
                  uVar11 = *(uint *)(lVar12 + 0x18);
                  if (uVar11 < *(uint *)(lVar16 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar11 + 1;
                    *(undefined1 (*) [16])(lVar16 + (long)(int)uVar11 * 0x10 + 0x20) = auVar22;
                  }
                  else {
                    FUN_05bd96b8(lVar12,auVar22._0_8_,auVar22._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar18 = *(long **)(unaff_x28 + 0x60);
                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar11 = in_stack_000001d8[0x20];
                  lVar12 = thunk_FUN_040b4e00(lVar17,*(undefined8 *)(*plVar18 + 0x40));
                  if (lVar12 == 0) {
                    uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar8,0);
                  }
                  if (*(uint *)(plVar18 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar18[(long)(int)uVar11 + 4] = lVar17;
                  thunk_FUN_040ec700(plVar18 + (long)(int)uVar11 + 4,lVar17);
                }
              }
              else {
                lVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                FUN_06e52d78(lVar17,*(undefined8 *)PTR_DAT_092bdb10);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07201560();
                lVar12 = *(long *)(in_stack_000001d8 + 0x10);
                auVar22 = FUN_06016048(&stack0x00000108,*unaff_x29);
                if (lVar12 == 0) {
LAB_07209328:
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar16 = *(long *)(lVar12 + 0x10);
                lVar14 = *plVar20;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar16 == 0) goto LAB_07209328;
                uVar11 = *(uint *)(lVar12 + 0x18);
                if (uVar11 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar11 + 1;
                  *(undefined1 (*) [16])(lVar16 + (long)(int)uVar11 * 0x10 + 0x20) = auVar22;
                }
                else {
                  FUN_05bd96b8(lVar12,auVar22._0_8_,auVar22._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                plVar18 = *(long **)(unaff_x28 + 0x60);
                if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar11 = in_stack_000001d8[0x20];
                lVar12 = thunk_FUN_040b4e00(lVar17,*(undefined8 *)(*plVar18 + 0x40));
                if (lVar12 == 0) {
                  uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar8,0);
                }
                if (*(uint *)(plVar18 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar18[(long)(int)uVar11 + 4] = lVar17;
                thunk_FUN_040ec700(plVar18 + (long)(int)uVar11 + 4,lVar17);
              }
            }
          }
          else if (bVar5 == 4) {
            lVar17 = *(long *)(unaff_x28 + 0x68);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar17 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if ((*(uint *)(lVar17 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) >> 0xb & 1) != 0)
            {
              lVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd988);
              FUN_06e52d38(lVar17,*(undefined8 *)PTR_DAT_092bdb28);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_07201930();
              lVar12 = *(long *)(in_stack_000001d8 + 0x10);
              auVar22 = FUN_06016048(&stack0x000000f0,*unaff_x29);
              if (lVar12 == 0) {
LAB_07209334:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar16 = *(long *)(lVar12 + 0x10);
              lVar14 = *plVar20;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_07209334;
              uVar11 = *(uint *)(lVar12 + 0x18);
              if (uVar11 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar11 + 1;
                *(undefined1 (*) [16])(lVar16 + (long)(int)uVar11 * 0x10 + 0x20) = auVar22;
              }
              else {
                FUN_05bd96b8(lVar12,auVar22._0_8_,auVar22._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              plVar18 = *(long **)(unaff_x28 + 0x60);
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar11 = in_stack_000001d8[0x20];
              lVar12 = thunk_FUN_040b4e00(lVar17,*(undefined8 *)(*plVar18 + 0x40));
              if (lVar12 == 0) {
                uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar8,0);
              }
              if (*(uint *)(plVar18 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar18[(long)(int)uVar11 + 4] = lVar17;
              thunk_FUN_040ec700(plVar18 + (long)(int)uVar11 + 4,lVar17);
            }
          }
          else if (bVar5 == 7) {
            lVar17 = *(long *)(unaff_x28 + 0x68);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar17 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (*(int *)(lVar17 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) == 0x100) {
              lVar17 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd9c8);
              FUN_06e52d18(lVar17,*(undefined8 *)PTR_DAT_092bdb20);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_072011ec();
              lVar12 = *(long *)(in_stack_000001d8 + 0x10);
              auVar22 = FUN_06016048(&stack0x00000120,*unaff_x29);
              if (lVar12 == 0) {
LAB_0720931c:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar16 = *(long *)(lVar12 + 0x10);
              lVar14 = *plVar20;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_0720931c;
              uVar11 = *(uint *)(lVar12 + 0x18);
              if (uVar11 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar11 + 1;
                *(undefined1 (*) [16])(lVar16 + (long)(int)uVar11 * 0x10 + 0x20) = auVar22;
              }
              else {
                FUN_05bd96b8(lVar12,auVar22._0_8_,auVar22._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              plVar18 = *(long **)(unaff_x28 + 0x60);
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar11 = in_stack_000001d8[0x20];
              lVar12 = thunk_FUN_040b4e00(lVar17,*(undefined8 *)(*plVar18 + 0x40));
              if (lVar12 == 0) {
                uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar8,0);
              }
              if (*(uint *)(plVar18 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar18[(long)(int)uVar11 + 4] = lVar17;
              thunk_FUN_040ec700(plVar18 + (long)(int)uVar11 + 4,lVar17);
            }
          }
          plVar18 = *(long **)(unaff_x28 + 0x20);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar17 = *plVar18;
          uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_092bd558) {
                puVar7 = (undefined8 *)(lVar17 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                goto LAB_07208e08;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar7 = (undefined8 *)FUN_040b1e00(plVar18,*(long *)PTR_DAT_092bd558,2);
LAB_07208e08:
          lVar17 = (*(code *)*puVar7)(plVar18,puVar7[1]);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          in_stack_00000178 = FUN_076f1ee4(lVar17,0);
          uVar13 = FUN_07591eb4(&stack0x00000178,0);
          if ((uVar13 & 1) == 0) {
            in_stack_000001d0._4_4_ = 1;
            *in_stack_000001d8 = 1;
            *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
            thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
            puVar10 = in_stack_000001d8;
            if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1_00,in_stack_000001d8);
            }
            FUN_04995830(puVar10 + 2,&stack0x00000178,in_stack_000001d8,
                         *(undefined8 *)PTR_DAT_092bdb40);
            return;
          }
          FUN_07591f7c(&stack0x00000178,0);
          uVar11 = in_stack_000001d8[0x20];
          puVar10 = in_stack_000001d8;
        }
        uVar11 = uVar11 + 1;
        puVar10[0x20] = uVar11;
        puVar7 = (undefined8 *)PTR_DAT_092bda28;
        plVar18 = (long *)PTR_DAT_092bda30;
        puVar2 = (undefined8 *)PTR_DAT_092bdba8;
      }
      if (0 < (int)puVar10[0xc]) {
        uVar11 = 0;
        uVar13 = 0;
        do {
          if (*(long *)(puVar10 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar17 = *(long *)(*(long *)(puVar10 + 8) + 0x60);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar17 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar12 = *(long *)(unaff_x28 + 0x90);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar12 = *(long *)(lVar12 + uVar13 * 8 + 0x20);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *(long *)(lVar17 + uVar13 * 8 + 0x20);
          lVar17 = FUN_06efc5fc(lVar12,*(undefined8 *)PTR_DAT_092bdbb8);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_0685b4f8(&stack0x00000050,lVar17,*(undefined8 *)PTR_DAT_092bdcc8);
          in_stack_00000090 = in_stack_00000050;
          in_stack_000000a0 = in_stack_00000060;
          in_stack_00000050 = 0;
          in_stack_00000060 = &stack0x00000090;
          in_stack_00000098 = in_stack_00000058;
          in_stack_00000058 = (int *)((long)&stack0x000001d0 + 4);
          while (uVar9 = FUN_05386d5c(&stack0x00000090,*(undefined8 *)PTR_DAT_092bdc28),
                plVar20 = in_stack_000000a0, (uVar9 & 1) != 0) {
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
                lVar17 = FUN_05c26ab8(plVar20,iVar6,*puVar7);
                if (plVar19 == (long *)0x0) {
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar12 = plVar20[3];
                  uVar8 = *(undefined8 *)(lVar16 + 0x10);
                  plVar19 = (long *)thunk_FUN_040b4efc(*plVar18);
                  FUN_07216bd0(plVar19,uVar11,(int)lVar12,uVar8,0);
                }
                else {
                  bVar5 = *(byte *)(*plVar18 + 0x130);
                  if (*(byte *)(*plVar19 + 0x130) < bVar5) {
                    plVar19 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar5 * 8 + -8) != *plVar18)
                  {
                    plVar19 = (long *)0x0;
                  }
                }
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar17 + 0x28) == 0) {
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
                  lVar12 = FUN_06efc758(*(long *)(in_stack_000001d8 + 0xe),lVar17,*puVar2);
                  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  plVar19[5] = lVar12;
                  thunk_FUN_040ec700();
                }
                FUN_072175f4(plVar19,iVar6,*(undefined4 *)(lVar17 + 0x1c),0);
                iVar6 = iVar6 + 1;
              } while (iVar6 < (int)plVar20[3]);
            }
            plVar20 = *(long **)(unaff_x28 + 0x80);
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((plVar19 != (long *)0x0) &&
               (lVar17 = thunk_FUN_040b4e00(plVar19,*(undefined8 *)(*plVar20 + 0x40)), lVar17 == 0))
            {
              uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar8,0);
            }
            if (*(uint *)(plVar20 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar20[(long)(int)uVar11 + 4] = (long)plVar19;
            thunk_FUN_040ec700(plVar20 + (long)(int)uVar11 + 4,plVar19);
            uVar11 = uVar11 + 1;
          }
          if (*in_stack_00000058 < 0) {
            System_Collections_Generic_EqualityComparer<IndirectDrawInfo>__get_Default
                      (in_stack_00000060,*(undefined8 *)PTR_DAT_092bdc00);
          }
          if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077828();
          }
          uVar13 = uVar13 + 1;
          puVar10 = in_stack_000001d8;
        } while ((int)uVar13 < (int)in_stack_000001d8[0xc]);
      }
      if (*(long *)(puVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar8 = FUN_05bdb0a8(*(long *)(puVar10 + 0x10),*(undefined8 *)PTR_DAT_092bdc78);
      FUN_05f3fd7c(&stack0x000001c0,uVar8,4,*(undefined8 *)PTR_DAT_092bdca8);
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
  puVar10 = in_stack_000001d8;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_065d0838(puVar10 + 2,bVar4,*(undefined8 *)puVar3);
  return;
}


