/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler.TextStreamResponseDelegate$$Invoke
ENTRY_POINT: 07207de4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x072090c4) */
/* WARNING: Removing unreachable block (ram,0x07208388) */
/* WARNING: Removing unreachable block (ram,0x07208008) */

void Meta_WitAi_Requests_TextStreamHandler_TextStreamResponseDelegate__Invoke
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 in_ZR;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  ulong in_x9;
  long lVar16;
  long lVar17;
  int *piVar18;
  int *in_x10;
  long lVar19;
  long *plVar20;
  long *unaff_x20;
  long *plVar21;
  long *plVar22;
  uint uVar23;
  long *unaff_x24;
  long *unaff_x26;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar24 [16];
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
  long in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  char cStack0000000000000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  byte bStack00000000000001a8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 *in_stack_000001d8;
  
code_r0x07207de4:
  if (!(bool)in_ZR) goto LAB_07207dd0;
LAB_07207de8:
  puVar8 = (undefined8 *)FUN_040b1e00(unaff_x20,param_3,2);
  do {
    lVar9 = (*(code *)*puVar8)(unaff_x20,puVar8[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000178 = FUN_076f1ee4(lVar9,0);
    uVar10 = FUN_07591eb4(&stack0x00000178,0);
    if ((uVar10 & 1) == 0) {
      in_stack_000001d0._4_4_ = 0;
      *in_stack_000001d8 = 0;
      *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
      thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
      puVar14 = in_stack_000001d8;
      if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1,in_stack_000001d8);
      }
      FUN_04995830(puVar14 + 2,&stack0x00000178,in_stack_000001d8,*(undefined8 *)PTR_DAT_092bdb40);
      iVar7 = 0x51;
      goto LAB_07207e9c;
    }
    FUN_07591f7c(&stack0x00000178,0);
    uVar10 = FUN_053841d4(in_stack_000001d8 + 0x14,*(undefined8 *)PTR_DAT_092bdc20);
    if ((uVar10 & 1) == 0) {
LAB_07207e98:
      iVar7 = 0x52;
      goto LAB_07207e9c;
    }
    lVar9 = *(long *)(in_stack_000001d8 + 0x18);
    unaff_x26[0xb] = *(long *)(in_stack_000001d8 + 0x1a);
    unaff_x26[10] = lVar9;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar16 = *(long *)(lVar9 + 0x10);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar7 = *(int *)(lVar16 + 0x18);
    iVar2 = *(int *)(lVar16 + 0x14);
    if (-1 < *(int *)(lVar16 + 0x1c)) {
      iVar13 = 1;
      if (-1 < *(int *)(lVar16 + 0x20)) {
        iVar13 = 2;
      }
      lVar19 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,
                            (((((iVar13 - ((int)~*(uint *)(lVar16 + 0x24) >> 0x1f)) -
                               ((int)~*(uint *)(lVar16 + 0x28) >> 0x1f)) -
                              ((int)~*(uint *)(lVar16 + 0x2c) >> 0x1f)) -
                             ((int)~*(uint *)(lVar16 + 0x30) >> 0x1f)) -
                            ((int)~*(uint *)(lVar16 + 0x34) >> 0x1f)) -
                            ((int)~*(uint *)(lVar16 + 0x38) >> 0x1f));
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar15 = *(uint *)(lVar19 + 0x18);
      if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined4 *)(lVar19 + 0x20) = *(undefined4 *)(lVar16 + 0x1c);
      if (-1 < *(int *)(lVar16 + 0x20)) {
        if (uVar15 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar19 + 0x24) = *(int *)(lVar16 + 0x20);
      }
      if (-1 < *(int *)(lVar16 + 0x24)) {
        if (uVar15 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar19 + 0x28) = *(int *)(lVar16 + 0x24);
      }
      if (-1 < *(int *)(lVar16 + 0x28)) {
        if (uVar15 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar19 + 0x2c) = *(int *)(lVar16 + 0x28);
      }
      if (-1 < *(int *)(lVar16 + 0x2c)) {
        if (uVar15 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar19 + 0x30) = *(int *)(lVar16 + 0x2c);
      }
      if (-1 < *(int *)(lVar16 + 0x30)) {
        if (uVar15 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar19 + 0x34) = *(int *)(lVar16 + 0x30);
      }
      if (-1 < *(int *)(lVar16 + 0x34)) {
        if (uVar15 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar19 + 0x38) = *(int *)(lVar16 + 0x34);
      }
      if (-1 < *(int *)(lVar16 + 0x38)) {
        if (uVar15 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar19 + 0x3c) = *(int *)(lVar16 + 0x38);
      }
      if (-1 < *(int *)(lVar16 + 0x3c)) {
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar20 = *(long **)(unaff_x28 + 0x130);
        if (plVar20 != (long *)0x0) {
          lVar19 = *(long *)PTR_DAT_092a2dd8;
          lVar16 = *(long *)(lVar19 + 0x38);
          if (lVar16 == 0) {
            FUN_040b1b28(lVar19);
            lVar16 = *(long *)(lVar19 + 0x38);
          }
          lVar16 = *(long *)(lVar16 + 0x10);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_040b1acc();
          }
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar16 = *(long *)(*(long *)(lVar19 + 0x38) + 0x10);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_040b1acc();
          }
          lVar19 = *plVar20;
          uVar11 = **(undefined8 **)(lVar16 + 0xb8);
          uVar10 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar10 != 0) {
            piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_092bc2c8) {
                puVar8 = (undefined8 *)(lVar19 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_07207bcc;
              }
              uVar10 = uVar10 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_040b1e00(plVar20,*(long *)PTR_DAT_092bc2c8,1);
LAB_07207bcc:
          (*(code *)*puVar8)(plVar20,0x33,uVar11,puVar8[1]);
        }
      }
    }
    unaff_x24 = (long *)PTR_DAT_092bdc70;
    if (_bStack00000000000001a8 == 1) {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = *(undefined8 *)(unaff_x28 + 0x130);
      plVar20 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdce8);
      System_Linq_Enumerable_<ExceptIterator>d__77<KeyValuePair<object,_object>>__System_IDisposable_Dispose
                (plVar20,uVar11,*(undefined8 *)PTR_DAT_092bdce0);
    }
    else if (_bStack00000000000001a8 == 3) {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = *(undefined8 *)(unaff_x28 + 0x130);
      plVar20 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf8);
      FUN_0699efb4(plVar20,uVar11,*(undefined8 *)PTR_DAT_092bdcd8);
    }
    else {
      if (_bStack00000000000001a8 != 7) {
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar20 = *(long **)(unaff_x28 + 0x130);
        unaff_x26 = (long *)&stack0x00000150;
        if (plVar20 == (long *)0x0) goto LAB_072082cc;
        lVar9 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
        uVar11 = FUN_059f7a58(&stack0x000001a0,*(undefined8 *)PTR_DAT_092bdc48);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(undefined8 *)(lVar9 + 0x20) = uVar11;
        thunk_FUN_040ec700();
        lVar16 = *plVar20;
        uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar10 == 0) goto LAB_0720829c;
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        break;
      }
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = *(undefined8 *)(unaff_x28 + 0x130);
      plVar20 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf0);
      FUN_0699fff4(plVar20,uVar11,*(undefined8 *)PTR_DAT_092bdcd0);
    }
    if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    bVar6 = 0;
    if (iVar2 < 0) {
      bVar6 = bStack00000000000001a8 >> 1 & 1;
    }
    bVar1 = 0;
    if (iVar7 < 0) {
      bVar1 = bStack00000000000001a8 >> 2 & 1;
    }
    *(byte *)(plVar20 + 2) = bVar6;
    *(byte *)((long)plVar20 + 0x11) = bVar1;
    unaff_x24 = (long *)PTR_DAT_092bdc70;
    if (*(long *)(unaff_x28 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    unaff_x26 = (long *)&stack0x00000150;
    FUN_06efc7c4(*(long *)(unaff_x28 + 0x88),lVar9,plVar20,*(undefined8 *)PTR_DAT_092bdbc0);
    (**(code **)(*plVar20 + 0x178))(&stack0x00000028,plVar20);
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
    lVar9 = *(long *)(in_stack_000001d8 + 0x10);
    auVar24 = FUN_06016048(&stack0x00000180,*unaff_x29);
    if (lVar9 == 0) {
LAB_072082f8:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar16 = *(long *)(lVar9 + 0x10);
    lVar19 = *unaff_x24;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar16 == 0) goto LAB_072082f8;
    uVar15 = *(uint *)(lVar9 + 0x18);
    if (uVar15 < *(uint *)(lVar16 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar15 + 1;
      *(undefined1 (*) [16])(lVar16 + (long)(int)uVar15 * 0x10 + 0x20) = auVar24;
    }
    else {
      FUN_05bd96b8(lVar9,auVar24._0_8_,auVar24._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
    }
    unaff_x20 = *(long **)(unaff_x28 + 0x20);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    param_1 = *unaff_x20;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    param_3 = *(long *)PTR_DAT_092bd558;
    if (in_x9 == 0) goto LAB_07207de8;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_07207dd0:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x07207de4;
    }
    puVar8 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar18 = piVar18 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_092bc2c8) {
      puVar8 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_072082b8;
    }
  }
LAB_0720829c:
  puVar8 = (undefined8 *)FUN_040b1e00(plVar20,*(long *)PTR_DAT_092bc2c8,0);
LAB_072082b8:
  (*(code *)*puVar8)(plVar20,9,lVar9,puVar8[1]);
LAB_072082cc:
  iVar7 = 0x48;
LAB_07207e9c:
  if (*in_stack_00000058 < 0) {
    FUN_053842f8(*in_stack_00000060 + 0x50,*(undefined8 *)PTR_DAT_092bdc08);
  }
  if (in_stack_00000050 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if ((iVar7 == 0) || (iVar7 == 0x52)) {
    *(undefined8 *)(in_stack_000001d8 + 0x1c) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x16) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x14) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x1a) = 0;
    *(undefined8 *)(in_stack_000001d8 + 0x18) = 0;
    if (*(char *)(in_stack_000001d8 + 0x12) != '\0') {
      if (*(long *)(in_stack_000001d8 + 0xe) != 0) {
        FUN_06efcc0c(&stack0x00000050,*(long *)(in_stack_000001d8 + 0xe),
                     *(undefined8 *)PTR_DAT_092bdb60);
        puVar4 = PTR_DAT_092bdc18;
        in_stack_00000170 = in_stack_00000070;
        unaff_x26[1] = (long)in_stack_00000058;
        *unaff_x26 = in_stack_00000050;
        unaff_x26[3] = in_stack_00000068;
        unaff_x26[2] = (long)in_stack_00000060;
        in_stack_00000050 = 0;
        in_stack_00000060 = (long *)&stack0x00000150;
        in_stack_00000058 = (int *)((long)&stack0x000001d0 + 4);
        while (uVar10 = FUN_05385f24(&stack0x00000150,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
          if (in_stack_00000168 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          auVar24 = FUN_07215d10(in_stack_00000168,0);
          lVar9 = *(long *)(in_stack_000001d8 + 0x10);
          if (lVar9 == 0) {
LAB_0720830c:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *(long *)(lVar9 + 0x10);
          lVar19 = *unaff_x24;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_0720830c;
          uVar15 = *(uint *)(lVar9 + 0x18);
          if (uVar15 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar15 + 1;
            *(undefined1 (*) [16])(lVar16 + (long)(int)uVar15 * 0x10 + 0x20) = auVar24;
          }
          else {
            FUN_05bd96b8(lVar9,auVar24._0_8_,auVar24._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
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
      uVar10 = FUN_0721f760(*(long *)(in_stack_000001d8 + 8),0);
      if ((uVar10 & 1) != 0) {
        lVar9 = *(long *)(in_stack_000001d8 + 8);
        if (lVar9 != 0) {
          uVar10 = 0;
          do {
            lVar9 = *(long *)(lVar9 + 0x28);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar10) goto LAB_072081b8;
            if (*(uint *)(lVar9 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar9 = *(long *)(lVar9 + uVar10 * 8 + 0x20);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar16 = *(long *)(lVar9 + 0x20);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar15 = *(uint *)(lVar16 + 0x18);
            if (0 < (int)uVar15) {
              lVar19 = 0;
              do {
                if (uVar15 <= (uint)lVar19) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                if (*(long *)(lVar16 + 0x20 + lVar19 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07200548();
                uVar15 = *(uint *)(lVar16 + 0x18);
                lVar19 = lVar19 + 1;
              } while ((int)lVar19 < (int)uVar15);
            }
            lVar16 = *(long *)(lVar9 + 0x18);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar15 = *(uint *)(lVar16 + 0x18);
            if (0 < (int)uVar15) {
              uVar23 = 0;
              do {
                if (uVar15 <= uVar23) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                lVar19 = *(long *)(lVar16 + (long)(int)uVar23 * 8 + 0x20);
                if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar17 = *(long *)(lVar9 + 0x20);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(uint *)(lVar17 + 0x18) <= *(uint *)(lVar19 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                if (*(long *)(lVar17 + (long)(int)*(uint *)(lVar19 + 0x10) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                iVar7 = FUN_07212d80(*(long *)(lVar19 + 0x18),0);
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
                uVar15 = *(uint *)(lVar16 + 0x18);
                uVar23 = uVar23 + 1;
              } while ((int)uVar23 < (int)uVar15);
            }
            uVar10 = uVar10 + 1;
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
      uVar11 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdb00,*(undefined4 *)(lVar9 + 0x18));
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined8 *)(unaff_x28 + 0x60) = uVar11;
      thunk_FUN_040ec700();
      uVar15 = 0;
      in_stack_000001d8[0x20] = 0;
      puVar8 = (undefined8 *)PTR_DAT_092bda28;
      plVar20 = (long *)PTR_DAT_092bda30;
      puVar3 = (undefined8 *)PTR_DAT_092bdba8;
      puVar14 = in_stack_000001d8;
      while( true ) {
        PTR_DAT_092bda28 = (undefined *)puVar8;
        PTR_DAT_092bda30 = (undefined *)plVar20;
        PTR_DAT_092bdba8 = (undefined *)puVar3;
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(unaff_x28 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(*(long *)(unaff_x28 + 0x60) + 0x18) <= (int)uVar15) break;
        if (*(long *)(puVar14 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar9 = *(long *)(*(long *)(puVar14 + 8) + 0x20);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar9 = *(long *)(lVar9 + (long)(int)uVar15 * 8 + 0x20);
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
                  lVar16 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar24 = FUN_06016048(&stack0x00000138,*unaff_x29);
                  if (lVar16 == 0) {
LAB_07209348:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar19 = *(long *)(lVar16 + 0x10);
                  lVar17 = *unaff_x24;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_07209348;
                  uVar15 = *(uint *)(lVar16 + 0x18);
                  if (uVar15 < *(uint *)(lVar19 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar15 + 1;
                    *(undefined1 (*) [16])(lVar19 + (long)(int)uVar15 * 0x10 + 0x20) = auVar24;
                  }
                  else {
                    FUN_05bd96b8(lVar16,auVar24._0_8_,auVar24._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar20 = *(long **)(unaff_x28 + 0x60);
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar15 = in_stack_000001d8[0x20];
                  lVar16 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar20 + 0x40));
                  if (lVar16 == 0) {
                    uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar11,0);
                  }
                  if (*(uint *)(plVar20 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar20[(long)(int)uVar15 + 4] = lVar9;
                  thunk_FUN_040ec700(plVar20 + (long)(int)uVar15 + 4,lVar9);
                }
              }
              else if ((iVar7 == 0x200) || (iVar7 == 0x2000)) {
                lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdb30);
                FUN_06e52d58(lVar9,*(undefined8 *)PTR_DAT_092bdb18);
                FUN_07201d94();
                if (in_stack_000000c0 != '\0') {
                  auVar24 = FUN_06008be0(&stack0x000000c0,*(undefined8 *)PTR_DAT_092bd960);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  *(undefined1 (*) [16])(lVar9 + 0x10) = auVar24;
                }
                if (in_stack_000000a8 != '\0') {
                  lVar16 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar24 = FUN_06016048(&stack0x000000a8,*unaff_x29);
                  if (lVar16 == 0) {
LAB_07209384:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar19 = *(long *)(lVar16 + 0x10);
                  lVar17 = *unaff_x24;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_07209384;
                  uVar15 = *(uint *)(lVar16 + 0x18);
                  if (uVar15 < *(uint *)(lVar19 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar15 + 1;
                    *(undefined1 (*) [16])(lVar19 + (long)(int)uVar15 * 0x10 + 0x20) = auVar24;
                  }
                  else {
                    FUN_05bd96b8(lVar16,auVar24._0_8_,auVar24._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                plVar20 = *(long **)(unaff_x28 + 0x60);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar15 = in_stack_000001d8[0x20];
                if ((lVar9 != 0) &&
                   (lVar16 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar20 + 0x40)), lVar16 == 0
                   )) {
                  uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar11,0);
                }
                if (*(uint *)(plVar20 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar20[(long)(int)uVar15 + 4] = lVar9;
                thunk_FUN_040ec700(plVar20 + (long)(int)uVar15 + 4,lVar9);
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
              uVar15 = *(uint *)(lVar9 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
              if ((uVar15 >> 10 & 1) == 0) {
                if ((uVar15 >> 0xc & 1) != 0) {
                  lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                  FUN_06e52d78(lVar9,*(undefined8 *)PTR_DAT_092bdb10);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07201560();
                  lVar16 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar24 = FUN_06016048(&stack0x000000d8,*unaff_x29);
                  if (lVar16 == 0) {
LAB_0720936c:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar19 = *(long *)(lVar16 + 0x10);
                  lVar17 = *unaff_x24;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_0720936c;
                  uVar15 = *(uint *)(lVar16 + 0x18);
                  if (uVar15 < *(uint *)(lVar19 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar15 + 1;
                    *(undefined1 (*) [16])(lVar19 + (long)(int)uVar15 * 0x10 + 0x20) = auVar24;
                  }
                  else {
                    FUN_05bd96b8(lVar16,auVar24._0_8_,auVar24._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar20 = *(long **)(unaff_x28 + 0x60);
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar15 = in_stack_000001d8[0x20];
                  lVar16 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar20 + 0x40));
                  if (lVar16 == 0) {
                    uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar11,0);
                  }
                  if (*(uint *)(plVar20 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar20[(long)(int)uVar15 + 4] = lVar9;
                  thunk_FUN_040ec700(plVar20 + (long)(int)uVar15 + 4,lVar9);
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
                lVar16 = *(long *)(in_stack_000001d8 + 0x10);
                auVar24 = FUN_06016048(&stack0x00000108,*unaff_x29);
                if (lVar16 == 0) {
LAB_07209328:
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar19 = *(long *)(lVar16 + 0x10);
                lVar17 = *unaff_x24;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                if (lVar19 == 0) goto LAB_07209328;
                uVar15 = *(uint *)(lVar16 + 0x18);
                if (uVar15 < *(uint *)(lVar19 + 0x18)) {
                  *(uint *)(lVar16 + 0x18) = uVar15 + 1;
                  *(undefined1 (*) [16])(lVar19 + (long)(int)uVar15 * 0x10 + 0x20) = auVar24;
                }
                else {
                  FUN_05bd96b8(lVar16,auVar24._0_8_,auVar24._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                plVar20 = *(long **)(unaff_x28 + 0x60);
                if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar15 = in_stack_000001d8[0x20];
                lVar16 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar20 + 0x40));
                if (lVar16 == 0) {
                  uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar11,0);
                }
                if (*(uint *)(plVar20 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar20[(long)(int)uVar15 + 4] = lVar9;
                thunk_FUN_040ec700(plVar20 + (long)(int)uVar15 + 4,lVar9);
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
              lVar16 = *(long *)(in_stack_000001d8 + 0x10);
              auVar24 = FUN_06016048(&stack0x000000f0,*unaff_x29);
              if (lVar16 == 0) {
LAB_07209334:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar19 = *(long *)(lVar16 + 0x10);
              lVar17 = *unaff_x24;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar19 == 0) goto LAB_07209334;
              uVar15 = *(uint *)(lVar16 + 0x18);
              if (uVar15 < *(uint *)(lVar19 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar15 + 1;
                *(undefined1 (*) [16])(lVar19 + (long)(int)uVar15 * 0x10 + 0x20) = auVar24;
              }
              else {
                FUN_05bd96b8(lVar16,auVar24._0_8_,auVar24._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              plVar20 = *(long **)(unaff_x28 + 0x60);
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar15 = in_stack_000001d8[0x20];
              lVar16 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar20 + 0x40));
              if (lVar16 == 0) {
                uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar11,0);
              }
              if (*(uint *)(plVar20 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar20[(long)(int)uVar15 + 4] = lVar9;
              thunk_FUN_040ec700(plVar20 + (long)(int)uVar15 + 4,lVar9);
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
              lVar16 = *(long *)(in_stack_000001d8 + 0x10);
              auVar24 = FUN_06016048(&stack0x00000120,*unaff_x29);
              if (lVar16 == 0) {
LAB_0720931c:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar19 = *(long *)(lVar16 + 0x10);
              lVar17 = *unaff_x24;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar19 == 0) goto LAB_0720931c;
              uVar15 = *(uint *)(lVar16 + 0x18);
              if (uVar15 < *(uint *)(lVar19 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar15 + 1;
                *(undefined1 (*) [16])(lVar19 + (long)(int)uVar15 * 0x10 + 0x20) = auVar24;
              }
              else {
                FUN_05bd96b8(lVar16,auVar24._0_8_,auVar24._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              plVar20 = *(long **)(unaff_x28 + 0x60);
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar15 = in_stack_000001d8[0x20];
              lVar16 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar20 + 0x40));
              if (lVar16 == 0) {
                uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar11,0);
              }
              if (*(uint *)(plVar20 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar20[(long)(int)uVar15 + 4] = lVar9;
              thunk_FUN_040ec700(plVar20 + (long)(int)uVar15 + 4,lVar9);
            }
          }
          plVar20 = *(long **)(unaff_x28 + 0x20);
          if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar9 = *plVar20;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_092bd558) {
                puVar8 = (undefined8 *)(lVar9 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                goto LAB_07208e08;
              }
              uVar10 = uVar10 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_040b1e00(plVar20,*(long *)PTR_DAT_092bd558,2);
LAB_07208e08:
          lVar9 = (*(code *)*puVar8)(plVar20,puVar8[1]);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          in_stack_00000178 = FUN_076f1ee4(lVar9,0);
          uVar10 = FUN_07591eb4(&stack0x00000178,0);
          if ((uVar10 & 1) == 0) {
            in_stack_000001d0._4_4_ = 1;
            *in_stack_000001d8 = 1;
            *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
            thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
            puVar14 = in_stack_000001d8;
            if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1_00,in_stack_000001d8);
            }
            FUN_04995830(puVar14 + 2,&stack0x00000178,in_stack_000001d8,
                         *(undefined8 *)PTR_DAT_092bdb40);
            return;
          }
          FUN_07591f7c(&stack0x00000178,0);
          uVar15 = in_stack_000001d8[0x20];
          puVar14 = in_stack_000001d8;
        }
        uVar15 = uVar15 + 1;
        puVar14[0x20] = uVar15;
        puVar8 = (undefined8 *)PTR_DAT_092bda28;
        plVar20 = (long *)PTR_DAT_092bda30;
        puVar3 = (undefined8 *)PTR_DAT_092bdba8;
      }
      if (0 < (int)puVar14[0xc]) {
        uVar15 = 0;
        uVar10 = 0;
        do {
          if (*(long *)(puVar14 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar9 = *(long *)(*(long *)(puVar14 + 8) + 0x60);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar16 = *(long *)(unaff_x28 + 0x90);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar16 = *(long *)(lVar16 + uVar10 * 8 + 0x20);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar19 = *(long *)(lVar9 + uVar10 * 8 + 0x20);
          lVar9 = FUN_06efc5fc(lVar16,*(undefined8 *)PTR_DAT_092bdbb8);
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
                plVar22 = in_stack_000000a0, (uVar12 & 1) != 0) {
            if (in_stack_000000a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((int)in_stack_000000a0[3] < 1) {
              plVar21 = (long *)0x0;
            }
            else {
              iVar7 = 0;
              plVar21 = (long *)0x0;
              do {
                lVar9 = FUN_05c26ab8(plVar22,iVar7,*puVar8);
                if (plVar21 == (long *)0x0) {
                  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar16 = plVar22[3];
                  uVar11 = *(undefined8 *)(lVar19 + 0x10);
                  plVar21 = (long *)thunk_FUN_040b4efc(*plVar20);
                  FUN_07216bd0(plVar21,uVar15,(int)lVar16,uVar11,0);
                }
                else {
                  bVar6 = *(byte *)(*plVar20 + 0x130);
                  if (*(byte *)(*plVar21 + 0x130) < bVar6) {
                    plVar21 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar6 * 8 + -8) != *plVar20)
                  {
                    plVar21 = (long *)0x0;
                  }
                }
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar9 + 0x28) == 0) {
                  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                }
                else {
                  if (*(long *)(in_stack_000001d8 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar16 = FUN_06efc758(*(long *)(in_stack_000001d8 + 0xe),lVar9,*puVar3);
                  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  plVar21[5] = lVar16;
                  thunk_FUN_040ec700();
                }
                FUN_072175f4(plVar21,iVar7,*(undefined4 *)(lVar9 + 0x1c),0);
                iVar7 = iVar7 + 1;
              } while (iVar7 < (int)plVar22[3]);
            }
            plVar22 = *(long **)(unaff_x28 + 0x80);
            if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((plVar21 != (long *)0x0) &&
               (lVar9 = thunk_FUN_040b4e00(plVar21,*(undefined8 *)(*plVar22 + 0x40)), lVar9 == 0)) {
              uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar11,0);
            }
            if (*(uint *)(plVar22 + 3) <= uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar22[(long)(int)uVar15 + 4] = (long)plVar21;
            thunk_FUN_040ec700(plVar22 + (long)(int)uVar15 + 4,plVar21);
            uVar15 = uVar15 + 1;
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
          puVar14 = in_stack_000001d8;
        } while ((int)uVar10 < (int)in_stack_000001d8[0xc]);
      }
      if (*(long *)(puVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = FUN_05bdb0a8(*(long *)(puVar14 + 0x10),*(undefined8 *)PTR_DAT_092bdc78);
      FUN_05f3fd7c(&stack0x000001c0,uVar11,4,*(undefined8 *)PTR_DAT_092bdca8);
      auVar24 = FUN_0896aff0(in_stack_000001c0,in_stack_000001c8,0);
      puVar4 = PTR_DAT_092bc2d8;
      *(undefined1 (*) [16])(unaff_x28 + 0x70) = auVar24;
      FUN_05f3ffd8(&stack0x000001c0,*(undefined8 *)puVar4);
      FUN_0896af44(0);
      bVar5 = *(char *)(in_stack_000001d8 + 0x12) != '\0';
      goto LAB_07209208;
    }
  }
  else if (iVar7 != 0x48) {
    return;
  }
  bVar5 = false;
LAB_07209208:
  puVar4 = PTR_DAT_092899f8;
  *in_stack_000001d8 = 0xfffffffe;
  *(undefined8 *)(in_stack_000001d8 + 0xe) = 0;
  thunk_FUN_040ec700(in_stack_000001d8 + 0xe,0);
  *(undefined8 *)(in_stack_000001d8 + 0x10) = 0;
  thunk_FUN_040ec700(in_stack_000001d8 + 0x10,0);
  puVar14 = in_stack_000001d8;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_065d0838(puVar14 + 2,bVar5,*(undefined8 *)puVar4);
  return;
}


