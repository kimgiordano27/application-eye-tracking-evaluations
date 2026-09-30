/*
FUNCTION_NAME: Meta.WitAi.Requests.TextStreamHandler$$set_Progress
ENTRY_POINT: 07207540
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

void Meta_WitAi_Requests_TextStreamHandler__set_Progress(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long unaff_x20;
  long *plVar21;
  uint uVar22;
  long *plVar23;
  long *unaff_x24;
  long *plVar24;
  undefined4 unaff_w25;
  long *unaff_x26;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar25 [16];
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
  
  *(undefined8 *)(unaff_x28 + 0x118) = param_1;
  thunk_FUN_040ec700(unaff_x28 + 0x118);
  if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar20 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x88);
  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar17 = *(uint *)(lVar20 + 0x18);
  if (0 < (int)uVar17) {
    uVar22 = 0;
    do {
      if (uVar17 <= uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar14 = *(long *)(lVar20 + (long)(int)uVar22 * 8 + 0x20);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (-1 < *(int *)(lVar14 + 0x18)) {
        FUN_07200548();
      }
      uVar17 = *(uint *)(lVar20 + 0x18);
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < (int)uVar17);
  }
  if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar20 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x68);
  if ((lVar20 != 0) && (uVar17 = *(uint *)(lVar20 + 0x18), 0 < (int)uVar17)) {
    lVar14 = 0;
    do {
      if (uVar17 <= (uint)lVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar15 = *(long *)(lVar20 + 0x20 + lVar14 * 8);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar15 = *(long *)(lVar15 + 0x50);
      if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x10), lVar15 != 0)) &&
         (lVar15 = *(long *)(lVar15 + 0x10), lVar15 != 0)) {
        if (-1 < *(int *)(lVar15 + 0x10)) {
          FUN_07200548();
        }
        if (-1 < *(int *)(lVar15 + 0x14)) {
          FUN_07200548();
        }
        if (-1 < *(int *)(lVar15 + 0x18)) {
          FUN_07200548();
        }
      }
      uVar17 = *(uint *)(lVar20 + 0x18);
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 < (int)uVar17);
  }
  lVar20 = *(long *)(unaff_x28 + 0x110);
  if (lVar20 != 0) {
    if (*(uint *)(lVar20 + 0x18) <= (uint)in_stack_000001d8[0xc]) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(undefined4 *)(lVar20 + (long)(int)in_stack_000001d8[0xc] * 4 + 0x20) = unaff_w25;
  }
  uVar9 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdcc0,unaff_w25);
  *(undefined8 *)(unaff_x28 + 0x108) = uVar9;
  thunk_FUN_040ec700(unaff_x28 + 0x108);
  uVar9 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdcb8,unaff_w25);
  *(undefined8 *)(unaff_x28 + 0x80) = uVar9;
  thunk_FUN_040ec700();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar7 = FUN_06ef268c();
  uVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdc90);
  FUN_05bd8e98(uVar9,uVar7,*(undefined8 *)PTR_DAT_092bdc88);
  *(undefined8 *)(in_stack_000001d8 + 0x10) = uVar9;
  thunk_FUN_040ec700(in_stack_000001d8 + 0x10,uVar9);
  uVar7 = FUN_06ef268c();
  uVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbf0);
  FUN_06efbe44(uVar9,uVar7,*(undefined8 *)PTR_DAT_092bdb90);
  *(undefined8 *)(unaff_x28 + 0x88) = uVar9;
  thunk_FUN_040ec700((undefined8 *)(unaff_x28 + 0x88),uVar9);
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
  do {
    FUN_07591f7c(&stack0x00000178,0);
LAB_072079ac:
    uVar10 = FUN_053841d4(in_stack_000001d8 + 0x14,*(undefined8 *)PTR_DAT_092bdc20);
    if ((uVar10 & 1) == 0) {
LAB_07207e98:
      iVar8 = 0x52;
      goto LAB_07207e9c;
    }
    lVar20 = *(long *)(in_stack_000001d8 + 0x18);
    unaff_x26[0xb] = *(long *)(in_stack_000001d8 + 0x1a);
    unaff_x26[10] = lVar20;
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *(long *)(lVar20 + 0x10);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar8 = *(int *)(lVar14 + 0x18);
    iVar2 = *(int *)(lVar14 + 0x14);
    if (-1 < *(int *)(lVar14 + 0x1c)) {
      iVar13 = 1;
      if (-1 < *(int *)(lVar14 + 0x20)) {
        iVar13 = 2;
      }
      lVar15 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,
                            (((((iVar13 - ((int)~*(uint *)(lVar14 + 0x24) >> 0x1f)) -
                               ((int)~*(uint *)(lVar14 + 0x28) >> 0x1f)) -
                              ((int)~*(uint *)(lVar14 + 0x2c) >> 0x1f)) -
                             ((int)~*(uint *)(lVar14 + 0x30) >> 0x1f)) -
                            ((int)~*(uint *)(lVar14 + 0x34) >> 0x1f)) -
                            ((int)~*(uint *)(lVar14 + 0x38) >> 0x1f));
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar17 = *(uint *)(lVar15 + 0x18);
      if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined4 *)(lVar15 + 0x20) = *(undefined4 *)(lVar14 + 0x1c);
      if (-1 < *(int *)(lVar14 + 0x20)) {
        if (uVar17 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar15 + 0x24) = *(int *)(lVar14 + 0x20);
      }
      if (-1 < *(int *)(lVar14 + 0x24)) {
        if (uVar17 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar15 + 0x28) = *(int *)(lVar14 + 0x24);
      }
      if (-1 < *(int *)(lVar14 + 0x28)) {
        if (uVar17 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar15 + 0x2c) = *(int *)(lVar14 + 0x28);
      }
      if (-1 < *(int *)(lVar14 + 0x2c)) {
        if (uVar17 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar15 + 0x30) = *(int *)(lVar14 + 0x2c);
      }
      if (-1 < *(int *)(lVar14 + 0x30)) {
        if (uVar17 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar15 + 0x34) = *(int *)(lVar14 + 0x30);
      }
      if (-1 < *(int *)(lVar14 + 0x34)) {
        if (uVar17 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar15 + 0x38) = *(int *)(lVar14 + 0x34);
      }
      if (-1 < *(int *)(lVar14 + 0x38)) {
        if (uVar17 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar15 + 0x3c) = *(int *)(lVar14 + 0x38);
      }
      if (-1 < *(int *)(lVar14 + 0x3c)) {
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar24 = *(long **)(unaff_x28 + 0x130);
        if (plVar24 != (long *)0x0) {
          lVar15 = *(long *)PTR_DAT_092a2dd8;
          lVar14 = *(long *)(lVar15 + 0x38);
          if (lVar14 == 0) {
            FUN_040b1b28(lVar15);
            lVar14 = *(long *)(lVar15 + 0x38);
          }
          lVar14 = *(long *)(lVar14 + 0x10);
          if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_040b1acc();
          }
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar14 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
          if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_040b1acc();
          }
          lVar15 = *plVar24;
          uVar9 = **(undefined8 **)(lVar14 + 0xb8);
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 != 0) {
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092bc2c8) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_07207bcc;
              }
              uVar10 = uVar10 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_040b1e00(plVar24,*(long *)PTR_DAT_092bc2c8,1);
LAB_07207bcc:
          (*(code *)*puVar11)(plVar24,0x33,uVar9,puVar11[1]);
        }
      }
    }
    unaff_x24 = (long *)PTR_DAT_092bdc70;
    if (_bStack00000000000001a8 == 1) {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar9 = *(undefined8 *)(unaff_x28 + 0x130);
      plVar24 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdce8);
      System_Linq_Enumerable_<ExceptIterator>d__77<KeyValuePair<object,_object>>__System_IDisposable_Dispose
                (plVar24,uVar9,*(undefined8 *)PTR_DAT_092bdce0);
    }
    else if (_bStack00000000000001a8 == 3) {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar9 = *(undefined8 *)(unaff_x28 + 0x130);
      plVar24 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf8);
      FUN_0699efb4(plVar24,uVar9,*(undefined8 *)PTR_DAT_092bdcd8);
    }
    else {
      if (_bStack00000000000001a8 != 7) {
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar24 = *(long **)(unaff_x28 + 0x130);
        unaff_x26 = (long *)&stack0x00000150;
        if (plVar24 == (long *)0x0) goto LAB_072082cc;
        lVar20 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
        uVar9 = FUN_059f7a58(&stack0x000001a0,*(undefined8 *)PTR_DAT_092bdc48);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(lVar20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(undefined8 *)(lVar20 + 0x20) = uVar9;
        thunk_FUN_040ec700();
        lVar14 = *plVar24;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar10 == 0) goto LAB_0720829c;
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_07208284;
      }
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar9 = *(undefined8 *)(unaff_x28 + 0x130);
      plVar24 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf0);
      FUN_0699fff4(plVar24,uVar9,*(undefined8 *)PTR_DAT_092bdcd0);
    }
    if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    bVar6 = 0;
    if (iVar2 < 0) {
      bVar6 = bStack00000000000001a8 >> 1 & 1;
    }
    bVar1 = 0;
    if (iVar8 < 0) {
      bVar1 = bStack00000000000001a8 >> 2 & 1;
    }
    *(byte *)(plVar24 + 2) = bVar6;
    *(byte *)((long)plVar24 + 0x11) = bVar1;
    unaff_x24 = (long *)PTR_DAT_092bdc70;
    if (*(long *)(unaff_x28 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    unaff_x26 = (long *)&stack0x00000150;
    FUN_06efc7c4(*(long *)(unaff_x28 + 0x88),lVar20,plVar24,*(undefined8 *)PTR_DAT_092bdbc0);
    (**(code **)(*plVar24 + 0x178))(&stack0x00000028,plVar24);
    in_stack_00000188 = in_stack_00000030;
    _cStack0000000000000180 = in_stack_00000028;
    uVar9 = _cStack0000000000000180;
    cStack0000000000000180 = (char)in_stack_00000028;
    in_stack_00000190 = in_stack_00000038;
    _cStack0000000000000180 = uVar9;
    if (cStack0000000000000180 == '\0') {
      *(undefined1 *)(in_stack_000001d8 + 0x12) = 0;
      goto LAB_07207e98;
    }
    lVar20 = *(long *)(in_stack_000001d8 + 0x10);
    auVar25 = FUN_06016048(&stack0x00000180,*unaff_x29);
    if (lVar20 == 0) {
LAB_072082f8:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar14 = *(long *)(lVar20 + 0x10);
    lVar15 = *unaff_x24;
    *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_072082f8;
    uVar17 = *(uint *)(lVar20 + 0x18);
    if (uVar17 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar20 + 0x18) = uVar17 + 1;
      *(undefined1 (*) [16])(lVar14 + (long)(int)uVar17 * 0x10 + 0x20) = auVar25;
    }
    else {
      FUN_05bd96b8(lVar20,auVar25._0_8_,auVar25._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    plVar24 = *(long **)(unaff_x28 + 0x20);
    if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar20 = *plVar24;
    uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar10 != 0) {
      piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092bd558) {
          puVar11 = (undefined8 *)(lVar20 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_07207e08;
        }
        uVar10 = uVar10 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_040b1e00(plVar24,*(long *)PTR_DAT_092bd558,2);
LAB_07207e08:
    lVar20 = (*(code *)*puVar11)(plVar24,puVar11[1]);
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000178 = FUN_076f1ee4(lVar20,0);
    uVar10 = FUN_07591eb4(&stack0x00000178,0);
  } while ((uVar10 & 1) != 0);
  in_stack_000001d0._4_4_ = 0;
  *in_stack_000001d8 = 0;
  *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
  thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
  puVar16 = in_stack_000001d8;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1,in_stack_000001d8);
  }
  FUN_04995830(puVar16 + 2,&stack0x00000178,in_stack_000001d8,*(undefined8 *)PTR_DAT_092bdb40);
  iVar8 = 0x51;
  goto LAB_07207e9c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar19 = piVar19 + 4;
    if (uVar10 == 0) break;
LAB_07208284:
    if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092bc2c8) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_072082b8;
    }
  }
LAB_0720829c:
  puVar11 = (undefined8 *)FUN_040b1e00(plVar24,*(long *)PTR_DAT_092bc2c8,0);
LAB_072082b8:
  (*(code *)*puVar11)(plVar24,9,lVar20,puVar11[1]);
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
          auVar25 = FUN_07215d10(in_stack_00000168,0);
          lVar20 = *(long *)(in_stack_000001d8 + 0x10);
          if (lVar20 == 0) {
LAB_0720830c:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar14 = *(long *)(lVar20 + 0x10);
          lVar15 = *unaff_x24;
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0720830c;
          uVar17 = *(uint *)(lVar20 + 0x18);
          if (uVar17 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar20 + 0x18) = uVar17 + 1;
            *(undefined1 (*) [16])(lVar14 + (long)(int)uVar17 * 0x10 + 0x20) = auVar25;
          }
          else {
            FUN_05bd96b8(lVar20,auVar25._0_8_,auVar25._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
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
        lVar20 = *(long *)(in_stack_000001d8 + 8);
        if (lVar20 != 0) {
          uVar10 = 0;
          do {
            lVar20 = *(long *)(lVar20 + 0x28);
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((int)*(uint *)(lVar20 + 0x18) <= (int)uVar10) goto LAB_072081b8;
            if (*(uint *)(lVar20 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            lVar20 = *(long *)(lVar20 + uVar10 * 8 + 0x20);
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar14 = *(long *)(lVar20 + 0x20);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar17 = *(uint *)(lVar14 + 0x18);
            if (0 < (int)uVar17) {
              lVar15 = 0;
              do {
                if (uVar17 <= (uint)lVar15) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                if (*(long *)(lVar14 + 0x20 + lVar15 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07200548();
                uVar17 = *(uint *)(lVar14 + 0x18);
                lVar15 = lVar15 + 1;
              } while ((int)lVar15 < (int)uVar17);
            }
            lVar14 = *(long *)(lVar20 + 0x18);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            uVar17 = *(uint *)(lVar14 + 0x18);
            if (0 < (int)uVar17) {
              uVar22 = 0;
              do {
                if (uVar17 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                lVar15 = *(long *)(lVar14 + (long)(int)uVar22 * 8 + 0x20);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar18 = *(long *)(lVar20 + 0x20);
                if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(uint *)(lVar18 + 0x18) <= *(uint *)(lVar15 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                if (*(long *)(lVar18 + (long)(int)*(uint *)(lVar15 + 0x10) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                iVar8 = FUN_07212d80(*(long *)(lVar15 + 0x18),0);
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
                uVar17 = *(uint *)(lVar14 + 0x18);
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (int)uVar17);
            }
            uVar10 = uVar10 + 1;
            lVar20 = *(long *)(in_stack_000001d8 + 8);
          } while (lVar20 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
LAB_072081b8:
      if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar20 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x20);
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar9 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdb00,*(undefined4 *)(lVar20 + 0x18));
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined8 *)(unaff_x28 + 0x60) = uVar9;
      thunk_FUN_040ec700();
      uVar17 = 0;
      in_stack_000001d8[0x20] = 0;
      puVar11 = (undefined8 *)PTR_DAT_092bda28;
      plVar24 = (long *)PTR_DAT_092bda30;
      puVar3 = (undefined8 *)PTR_DAT_092bdba8;
      puVar16 = in_stack_000001d8;
      while( true ) {
        PTR_DAT_092bda28 = (undefined *)puVar11;
        PTR_DAT_092bda30 = (undefined *)plVar24;
        PTR_DAT_092bdba8 = (undefined *)puVar3;
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(unaff_x28 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(*(long *)(unaff_x28 + 0x60) + 0x18) <= (int)uVar17) break;
        if (*(long *)(puVar16 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar20 = *(long *)(*(long *)(puVar16 + 8) + 0x20);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar20 = *(long *)(lVar20 + (long)(int)uVar17 * 8 + 0x20);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (-1 < *(int *)(lVar20 + 0x10)) {
          bVar6 = FUN_072199cc(lVar20,0);
          if (bVar6 < 4) {
            if (bVar6 == 1) {
              lVar20 = *(long *)(unaff_x28 + 0x68);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar20 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              iVar8 = *(int *)(lVar20 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
              if (iVar8 < 0x200) {
                if ((iVar8 == 2) || (iVar8 == 4)) {
                  lVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd858);
                  FUN_06e52ce0(lVar20,*(undefined8 *)PTR_DAT_092bdb08);
                  if (lVar20 == 0) {
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
                  lVar14 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar25 = FUN_06016048(&stack0x00000138,*unaff_x29);
                  if (lVar14 == 0) {
LAB_07209348:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar15 = *(long *)(lVar14 + 0x10);
                  lVar18 = *unaff_x24;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar15 == 0) goto LAB_07209348;
                  uVar17 = *(uint *)(lVar14 + 0x18);
                  if (uVar17 < *(uint *)(lVar15 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar17 + 1;
                    *(undefined1 (*) [16])(lVar15 + (long)(int)uVar17 * 0x10 + 0x20) = auVar25;
                  }
                  else {
                    FUN_05bd96b8(lVar14,auVar25._0_8_,auVar25._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar24 = *(long **)(unaff_x28 + 0x60);
                  if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar17 = in_stack_000001d8[0x20];
                  lVar14 = thunk_FUN_040b4e00(lVar20,*(undefined8 *)(*plVar24 + 0x40));
                  if (lVar14 == 0) {
                    uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar9,0);
                  }
                  if (*(uint *)(plVar24 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar24[(long)(int)uVar17 + 4] = lVar20;
                  thunk_FUN_040ec700(plVar24 + (long)(int)uVar17 + 4,lVar20);
                }
              }
              else if ((iVar8 == 0x200) || (iVar8 == 0x2000)) {
                lVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdb30);
                FUN_06e52d58(lVar20,*(undefined8 *)PTR_DAT_092bdb18);
                FUN_07201d94();
                if (in_stack_000000c0 != '\0') {
                  auVar25 = FUN_06008be0(&stack0x000000c0,*(undefined8 *)PTR_DAT_092bd960);
                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  *(undefined1 (*) [16])(lVar20 + 0x10) = auVar25;
                }
                if (in_stack_000000a8 != '\0') {
                  lVar14 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar25 = FUN_06016048(&stack0x000000a8,*unaff_x29);
                  if (lVar14 == 0) {
LAB_07209384:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar15 = *(long *)(lVar14 + 0x10);
                  lVar18 = *unaff_x24;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar15 == 0) goto LAB_07209384;
                  uVar17 = *(uint *)(lVar14 + 0x18);
                  if (uVar17 < *(uint *)(lVar15 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar17 + 1;
                    *(undefined1 (*) [16])(lVar15 + (long)(int)uVar17 * 0x10 + 0x20) = auVar25;
                  }
                  else {
                    FUN_05bd96b8(lVar14,auVar25._0_8_,auVar25._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                plVar24 = *(long **)(unaff_x28 + 0x60);
                if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar17 = in_stack_000001d8[0x20];
                if ((lVar20 != 0) &&
                   (lVar14 = thunk_FUN_040b4e00(lVar20,*(undefined8 *)(*plVar24 + 0x40)),
                   lVar14 == 0)) {
                  uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar9,0);
                }
                if (*(uint *)(plVar24 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar24[(long)(int)uVar17 + 4] = lVar20;
                thunk_FUN_040ec700(plVar24 + (long)(int)uVar17 + 4,lVar20);
              }
            }
            else if (bVar6 == 3) {
              lVar20 = *(long *)(unaff_x28 + 0x68);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar20 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              uVar17 = *(uint *)(lVar20 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
              if ((uVar17 >> 10 & 1) == 0) {
                if ((uVar17 >> 0xc & 1) != 0) {
                  lVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                  FUN_06e52d78(lVar20,*(undefined8 *)PTR_DAT_092bdb10);
                  if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07201560();
                  lVar14 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar25 = FUN_06016048(&stack0x000000d8,*unaff_x29);
                  if (lVar14 == 0) {
LAB_0720936c:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar15 = *(long *)(lVar14 + 0x10);
                  lVar18 = *unaff_x24;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar15 == 0) goto LAB_0720936c;
                  uVar17 = *(uint *)(lVar14 + 0x18);
                  if (uVar17 < *(uint *)(lVar15 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar17 + 1;
                    *(undefined1 (*) [16])(lVar15 + (long)(int)uVar17 * 0x10 + 0x20) = auVar25;
                  }
                  else {
                    FUN_05bd96b8(lVar14,auVar25._0_8_,auVar25._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar24 = *(long **)(unaff_x28 + 0x60);
                  if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar17 = in_stack_000001d8[0x20];
                  lVar14 = thunk_FUN_040b4e00(lVar20,*(undefined8 *)(*plVar24 + 0x40));
                  if (lVar14 == 0) {
                    uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar9,0);
                  }
                  if (*(uint *)(plVar24 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar24[(long)(int)uVar17 + 4] = lVar20;
                  thunk_FUN_040ec700(plVar24 + (long)(int)uVar17 + 4,lVar20);
                }
              }
              else {
                lVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                FUN_06e52d78(lVar20,*(undefined8 *)PTR_DAT_092bdb10);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07201560();
                lVar14 = *(long *)(in_stack_000001d8 + 0x10);
                auVar25 = FUN_06016048(&stack0x00000108,*unaff_x29);
                if (lVar14 == 0) {
LAB_07209328:
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar15 = *(long *)(lVar14 + 0x10);
                lVar18 = *unaff_x24;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (lVar15 == 0) goto LAB_07209328;
                uVar17 = *(uint *)(lVar14 + 0x18);
                if (uVar17 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(lVar14 + 0x18) = uVar17 + 1;
                  *(undefined1 (*) [16])(lVar15 + (long)(int)uVar17 * 0x10 + 0x20) = auVar25;
                }
                else {
                  FUN_05bd96b8(lVar14,auVar25._0_8_,auVar25._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                }
                plVar24 = *(long **)(unaff_x28 + 0x60);
                if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar17 = in_stack_000001d8[0x20];
                lVar14 = thunk_FUN_040b4e00(lVar20,*(undefined8 *)(*plVar24 + 0x40));
                if (lVar14 == 0) {
                  uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar9,0);
                }
                if (*(uint *)(plVar24 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar24[(long)(int)uVar17 + 4] = lVar20;
                thunk_FUN_040ec700(plVar24 + (long)(int)uVar17 + 4,lVar20);
              }
            }
          }
          else if (bVar6 == 4) {
            lVar20 = *(long *)(unaff_x28 + 0x68);
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar20 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if ((*(uint *)(lVar20 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) >> 0xb & 1) != 0)
            {
              lVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd988);
              FUN_06e52d38(lVar20,*(undefined8 *)PTR_DAT_092bdb28);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_07201930();
              lVar14 = *(long *)(in_stack_000001d8 + 0x10);
              auVar25 = FUN_06016048(&stack0x000000f0,*unaff_x29);
              if (lVar14 == 0) {
LAB_07209334:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar15 = *(long *)(lVar14 + 0x10);
              lVar18 = *unaff_x24;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_07209334;
              uVar17 = *(uint *)(lVar14 + 0x18);
              if (uVar17 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar17 + 1;
                *(undefined1 (*) [16])(lVar15 + (long)(int)uVar17 * 0x10 + 0x20) = auVar25;
              }
              else {
                FUN_05bd96b8(lVar14,auVar25._0_8_,auVar25._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              plVar24 = *(long **)(unaff_x28 + 0x60);
              if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar17 = in_stack_000001d8[0x20];
              lVar14 = thunk_FUN_040b4e00(lVar20,*(undefined8 *)(*plVar24 + 0x40));
              if (lVar14 == 0) {
                uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar9,0);
              }
              if (*(uint *)(plVar24 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar24[(long)(int)uVar17 + 4] = lVar20;
              thunk_FUN_040ec700(plVar24 + (long)(int)uVar17 + 4,lVar20);
            }
          }
          else if (bVar6 == 7) {
            lVar20 = *(long *)(unaff_x28 + 0x68);
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar20 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (*(int *)(lVar20 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) == 0x100) {
              lVar20 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd9c8);
              FUN_06e52d18(lVar20,*(undefined8 *)PTR_DAT_092bdb20);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_072011ec();
              lVar14 = *(long *)(in_stack_000001d8 + 0x10);
              auVar25 = FUN_06016048(&stack0x00000120,*unaff_x29);
              if (lVar14 == 0) {
LAB_0720931c:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar15 = *(long *)(lVar14 + 0x10);
              lVar18 = *unaff_x24;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_0720931c;
              uVar17 = *(uint *)(lVar14 + 0x18);
              if (uVar17 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar17 + 1;
                *(undefined1 (*) [16])(lVar15 + (long)(int)uVar17 * 0x10 + 0x20) = auVar25;
              }
              else {
                FUN_05bd96b8(lVar14,auVar25._0_8_,auVar25._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
              }
              plVar24 = *(long **)(unaff_x28 + 0x60);
              if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar17 = in_stack_000001d8[0x20];
              lVar14 = thunk_FUN_040b4e00(lVar20,*(undefined8 *)(*plVar24 + 0x40));
              if (lVar14 == 0) {
                uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar9,0);
              }
              if (*(uint *)(plVar24 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar24[(long)(int)uVar17 + 4] = lVar20;
              thunk_FUN_040ec700(plVar24 + (long)(int)uVar17 + 4,lVar20);
            }
          }
          plVar24 = *(long **)(unaff_x28 + 0x20);
          if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar20 = *plVar24;
          uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar10 != 0) {
            piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_092bd558) {
                puVar11 = (undefined8 *)(lVar20 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_07208e08;
              }
              uVar10 = uVar10 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_040b1e00(plVar24,*(long *)PTR_DAT_092bd558,2);
LAB_07208e08:
          lVar20 = (*(code *)*puVar11)(plVar24,puVar11[1]);
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          in_stack_00000178 = FUN_076f1ee4(lVar20,0);
          uVar10 = FUN_07591eb4(&stack0x00000178,0);
          if ((uVar10 & 1) == 0) {
            in_stack_000001d0._4_4_ = 1;
            *in_stack_000001d8 = 1;
            *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
            thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
            puVar16 = in_stack_000001d8;
            if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1_00,in_stack_000001d8);
            }
            FUN_04995830(puVar16 + 2,&stack0x00000178,in_stack_000001d8,
                         *(undefined8 *)PTR_DAT_092bdb40);
            return;
          }
          FUN_07591f7c(&stack0x00000178,0);
          uVar17 = in_stack_000001d8[0x20];
          puVar16 = in_stack_000001d8;
        }
        uVar17 = uVar17 + 1;
        puVar16[0x20] = uVar17;
        puVar11 = (undefined8 *)PTR_DAT_092bda28;
        plVar24 = (long *)PTR_DAT_092bda30;
        puVar3 = (undefined8 *)PTR_DAT_092bdba8;
      }
      if (0 < (int)puVar16[0xc]) {
        uVar17 = 0;
        uVar10 = 0;
        do {
          if (*(long *)(puVar16 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar20 = *(long *)(*(long *)(puVar16 + 8) + 0x60);
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar20 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar14 = *(long *)(unaff_x28 + 0x90);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar14 = *(long *)(lVar14 + uVar10 * 8 + 0x20);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar15 = *(long *)(lVar20 + uVar10 * 8 + 0x20);
          lVar20 = FUN_06efc5fc(lVar14,*(undefined8 *)PTR_DAT_092bdbb8);
          if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_0685b4f8(&stack0x00000050,lVar20,*(undefined8 *)PTR_DAT_092bdcc8);
          in_stack_00000090 = in_stack_00000050;
          in_stack_000000a0 = in_stack_00000060;
          in_stack_00000050 = 0;
          in_stack_00000060 = &stack0x00000090;
          in_stack_00000098 = in_stack_00000058;
          in_stack_00000058 = (int *)((long)&stack0x000001d0 + 4);
          while (uVar12 = FUN_05386d5c(&stack0x00000090,*(undefined8 *)PTR_DAT_092bdc28),
                plVar23 = in_stack_000000a0, (uVar12 & 1) != 0) {
            if (in_stack_000000a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((int)in_stack_000000a0[3] < 1) {
              plVar21 = (long *)0x0;
            }
            else {
              iVar8 = 0;
              plVar21 = (long *)0x0;
              do {
                lVar20 = FUN_05c26ab8(plVar23,iVar8,*puVar11);
                if (plVar21 == (long *)0x0) {
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar14 = plVar23[3];
                  uVar9 = *(undefined8 *)(lVar15 + 0x10);
                  plVar21 = (long *)thunk_FUN_040b4efc(*plVar24);
                  FUN_07216bd0(plVar21,uVar17,(int)lVar14,uVar9,0);
                }
                else {
                  bVar6 = *(byte *)(*plVar24 + 0x130);
                  if (*(byte *)(*plVar21 + 0x130) < bVar6) {
                    plVar21 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar6 * 8 + -8) != *plVar24)
                  {
                    plVar21 = (long *)0x0;
                  }
                }
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if (*(long *)(lVar20 + 0x28) == 0) {
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
                  lVar14 = FUN_06efc758(*(long *)(in_stack_000001d8 + 0xe),lVar20,*puVar3);
                  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  plVar21[5] = lVar14;
                  thunk_FUN_040ec700();
                }
                FUN_072175f4(plVar21,iVar8,*(undefined4 *)(lVar20 + 0x1c),0);
                iVar8 = iVar8 + 1;
              } while (iVar8 < (int)plVar23[3]);
            }
            plVar23 = *(long **)(unaff_x28 + 0x80);
            if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if ((plVar21 != (long *)0x0) &&
               (lVar20 = thunk_FUN_040b4e00(plVar21,*(undefined8 *)(*plVar23 + 0x40)), lVar20 == 0))
            {
              uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar9,0);
            }
            if (*(uint *)(plVar23 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar23[(long)(int)uVar17 + 4] = (long)plVar21;
            thunk_FUN_040ec700(plVar23 + (long)(int)uVar17 + 4,plVar21);
            uVar17 = uVar17 + 1;
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
          puVar16 = in_stack_000001d8;
        } while ((int)uVar10 < (int)in_stack_000001d8[0xc]);
      }
      if (*(long *)(puVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar9 = FUN_05bdb0a8(*(long *)(puVar16 + 0x10),*(undefined8 *)PTR_DAT_092bdc78);
      FUN_05f3fd7c(&stack0x000001c0,uVar9,4,*(undefined8 *)PTR_DAT_092bdca8);
      auVar25 = FUN_0896aff0(in_stack_000001c0,in_stack_000001c8,0);
      puVar4 = PTR_DAT_092bc2d8;
      *(undefined1 (*) [16])(unaff_x28 + 0x70) = auVar25;
      FUN_05f3ffd8(&stack0x000001c0,*(undefined8 *)puVar4);
      FUN_0896af44(0);
      bVar5 = *(char *)(in_stack_000001d8 + 0x12) != '\0';
      goto LAB_07209208;
    }
  }
  else if (iVar8 != 0x48) {
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
  puVar16 = in_stack_000001d8;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_065d0838(puVar16 + 2,bVar5,*(undefined8 *)puVar4);
  return;
}


