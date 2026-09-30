/*
FUNCTION_NAME: Meta.WitAi.Requests.AudioStreamHandler$$Dispose
ENTRY_POINT: 072072e0
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
/* WARNING: Removing unreachable block (ram,0x07208388) */
/* WARNING: Removing unreachable block (ram,0x07208008) */

void Meta_WitAi_Requests_AudioStreamHandler__Dispose(void)

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
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined4 *puVar18;
  uint uVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  long *plVar23;
  long unaff_x20;
  long *plVar24;
  uint uVar25;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  uint unaff_w26;
  ulong unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  undefined1 auVar26 [16];
  undefined8 *in_stack_00000018;
  int in_stack_00000020;
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
  
code_r0x072072e0:
  lVar22 = *(long *)(unaff_x24 + 0x10);
  if (-1 < *(int *)(unaff_x24 + 0x18)) {
    FUN_07200548();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar10 = FUN_06ef44fc();
  if ((uVar10 & 1) == 0) {
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(int *)(lVar22 + 0x18) < 0) {
      if (*(int *)(lVar22 + 0x14) < 0) {
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
  if (*(int *)(unaff_x24 + 0x20) - 4U < 3) {
    uVar19 = *(uint *)(unaff_x24 + 0x1c);
    if ((int)uVar19 < 0) {
LAB_072073ac:
      in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ | 2;
    }
    else {
      if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar22 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x58);
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(lVar22 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar22 = *(long *)(lVar22 + (ulong)uVar19 * 8 + 0x20);
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar10 = FUN_0721d438(lVar22,0);
      if ((uVar10 & 1) != 0) goto LAB_072073ac;
    }
    uVar19 = *(uint *)(unaff_x24 + 0x1c);
    if (-1 < (int)uVar19) {
      if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar22 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x58);
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(uint *)(lVar22 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar22 = *(long *)(lVar22 + (ulong)uVar19 * 8 + 0x20);
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar10 = FUN_0721d458(lVar22,0);
      if ((uVar10 & 1) != 0) {
        in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ | 4;
      }
    }
  }
  FUN_06ef29c0();
  if (*(int *)(unaff_x24 + 0x1c) < 0) {
    *(byte *)(unaff_x28 + 0xe0) = *(byte *)(unaff_x28 + 0xe0) | *(int *)(unaff_x24 + 0x20) == 0;
  }
  else {
    if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if ((*(long *)(*(long *)(in_stack_000001d8 + 8) + 0x58) != 0) &&
       (*(int *)(unaff_x24 + 0x20) == 0)) {
      FUN_071fe6c4();
    }
  }
LAB_0720746c:
  uVar19 = *(uint *)(unaff_x21 + 0x18);
  unaff_w26 = unaff_w26 + 1;
  if ((int)unaff_w26 < (int)uVar19) goto LAB_0720714c;
  while( true ) {
    plVar23 = (long *)*in_stack_00000018;
    if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if ((unaff_x23 != 0) &&
       (lVar22 = thunk_FUN_040b4e00(unaff_x23,*(undefined8 *)(*plVar23 + 0x40)), lVar22 == 0)) {
      uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar11,0);
    }
    if (*(uint *)(plVar23 + 3) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    plVar23[unaff_x27 + 4] = unaff_x23;
    thunk_FUN_040ec700(plVar23 + unaff_x27 + 4,unaff_x23);
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar8 = FUN_06efc490(unaff_x23,*(undefined8 *)PTR_DAT_092bdb98);
    plVar23 = (long *)PTR_DAT_092bdc70;
    puVar4 = PTR_DAT_092bc300;
    unaff_x27 = unaff_x27 + 1;
    in_stack_00000020 = iVar8 + in_stack_00000020;
    if ((int)in_stack_000001d8[0xc] <= (int)unaff_x27) break;
    if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar22 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x60);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar22 + 0x18) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar16 = *(long *)(unaff_x28 + 0x110);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(lVar16 + 0x18) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar22 = *(long *)(lVar22 + unaff_x27 * 8 + 0x20);
    *(int *)(lVar16 + unaff_x27 * 4 + 0x20) = in_stack_00000020;
    unaff_x23 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbe0);
    FUN_06efbe2c(unaff_x23,*(undefined8 *)PTR_DAT_092bdb78);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    unaff_x21 = *(long *)(lVar22 + 0x18);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar19 = *(uint *)(unaff_x21 + 0x18);
    if (0 < (int)uVar19) goto code_r0x07207148;
  }
  lVar22 = *(long *)(in_stack_000001d8 + 8);
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(lVar22 + 0x88) != 0) {
    uVar11 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdca0,
                          *(undefined4 *)(*(long *)(lVar22 + 0x88) + 0x18));
    *(undefined8 *)(unaff_x28 + 0x118) = uVar11;
    thunk_FUN_040ec700(unaff_x28 + 0x118);
    if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar22 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x88);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar19 = *(uint *)(lVar22 + 0x18);
    if (0 < (int)uVar19) {
      uVar25 = 0;
      do {
        if (uVar19 <= uVar25) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar16 = *(long *)(lVar22 + (long)(int)uVar25 * 8 + 0x20);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (-1 < *(int *)(lVar16 + 0x18)) {
          FUN_07200548();
        }
        uVar19 = *(uint *)(lVar22 + 0x18);
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < (int)uVar19);
    }
    lVar22 = *(long *)(in_stack_000001d8 + 8);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  lVar22 = *(long *)(lVar22 + 0x68);
  if ((lVar22 != 0) && (uVar19 = *(uint *)(lVar22 + 0x18), 0 < (int)uVar19)) {
    lVar16 = 0;
    do {
      if (uVar19 <= (uint)lVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar17 = *(long *)(lVar22 + 0x20 + lVar16 * 8);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar17 = *(long *)(lVar17 + 0x50);
      if (((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x10), lVar17 != 0)) &&
         (lVar17 = *(long *)(lVar17 + 0x10), lVar17 != 0)) {
        if (-1 < *(int *)(lVar17 + 0x10)) {
          FUN_07200548();
        }
        if (-1 < *(int *)(lVar17 + 0x14)) {
          FUN_07200548();
        }
        if (-1 < *(int *)(lVar17 + 0x18)) {
          FUN_07200548();
        }
      }
      uVar19 = *(uint *)(lVar22 + 0x18);
      lVar16 = lVar16 + 1;
    } while ((int)lVar16 < (int)uVar19);
  }
  lVar22 = *(long *)(unaff_x28 + 0x110);
  if (lVar22 != 0) {
    if (*(uint *)(lVar22 + 0x18) <= (uint)in_stack_000001d8[0xc]) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(int *)(lVar22 + (long)(int)in_stack_000001d8[0xc] * 4 + 0x20) = in_stack_00000020;
  }
  uVar11 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdcc0,in_stack_00000020);
  *(undefined8 *)(unaff_x28 + 0x108) = uVar11;
  thunk_FUN_040ec700(unaff_x28 + 0x108);
  uVar11 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdcb8,in_stack_00000020);
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
  uVar10 = FUN_053841d4(in_stack_000001d8 + 0x14,*(undefined8 *)PTR_DAT_092bdc20);
  if ((uVar10 & 1) == 0) {
LAB_07207e98:
    iVar8 = 0x52;
  }
  else {
    _bStack00000000000001a8 = *(undefined8 *)(in_stack_000001d8 + 0x1a);
    lVar22 = *(long *)(in_stack_000001d8 + 0x18);
    in_stack_000001a0 = lVar22;
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar16 = *(long *)(lVar22 + 0x10);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar8 = *(int *)(lVar16 + 0x18);
    iVar2 = *(int *)(lVar16 + 0x14);
    if (-1 < *(int *)(lVar16 + 0x1c)) {
      iVar15 = 1;
      if (-1 < *(int *)(lVar16 + 0x20)) {
        iVar15 = 2;
      }
      lVar17 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,
                            (((((iVar15 - ((int)~*(uint *)(lVar16 + 0x24) >> 0x1f)) -
                               ((int)~*(uint *)(lVar16 + 0x28) >> 0x1f)) -
                              ((int)~*(uint *)(lVar16 + 0x2c) >> 0x1f)) -
                             ((int)~*(uint *)(lVar16 + 0x30) >> 0x1f)) -
                            ((int)~*(uint *)(lVar16 + 0x34) >> 0x1f)) -
                            ((int)~*(uint *)(lVar16 + 0x38) >> 0x1f));
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar19 = *(uint *)(lVar17 + 0x18);
      if (uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined4 *)(lVar17 + 0x20) = *(undefined4 *)(lVar16 + 0x1c);
      if (-1 < *(int *)(lVar16 + 0x20)) {
        if (uVar19 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar17 + 0x24) = *(int *)(lVar16 + 0x20);
      }
      if (-1 < *(int *)(lVar16 + 0x24)) {
        if (uVar19 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar17 + 0x28) = *(int *)(lVar16 + 0x24);
      }
      if (-1 < *(int *)(lVar16 + 0x28)) {
        if (uVar19 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar17 + 0x2c) = *(int *)(lVar16 + 0x28);
      }
      if (-1 < *(int *)(lVar16 + 0x2c)) {
        if (uVar19 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar17 + 0x30) = *(int *)(lVar16 + 0x2c);
      }
      if (-1 < *(int *)(lVar16 + 0x30)) {
        if (uVar19 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar17 + 0x34) = *(int *)(lVar16 + 0x30);
      }
      if (-1 < *(int *)(lVar16 + 0x34)) {
        if (uVar19 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar17 + 0x38) = *(int *)(lVar16 + 0x34);
      }
      if (-1 < *(int *)(lVar16 + 0x38)) {
        if (uVar19 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        *(int *)(lVar17 + 0x3c) = *(int *)(lVar16 + 0x38);
      }
      if (-1 < *(int *)(lVar16 + 0x3c)) {
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar23 = *(long **)(unaff_x28 + 0x130);
        if (plVar23 != (long *)0x0) {
          lVar17 = *(long *)PTR_DAT_092a2dd8;
          lVar16 = *(long *)(lVar17 + 0x38);
          if (lVar16 == 0) {
            FUN_040b1b28(lVar17);
            lVar16 = *(long *)(lVar17 + 0x38);
          }
          lVar16 = *(long *)(lVar16 + 0x10);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_040b1acc();
          }
          if (*(int *)(lVar16 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x10);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_040b1acc();
          }
          lVar17 = *plVar23;
          uVar11 = **(undefined8 **)(lVar16 + 0xb8);
          uVar10 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar10 == 0) {
LAB_07207ba0:
            puVar12 = (undefined8 *)FUN_040b1e00(plVar23,*(long *)PTR_DAT_092bc2c8,1);
          }
          else {
            piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            while (*(long *)(piVar21 + -2) != *(long *)PTR_DAT_092bc2c8) {
              uVar10 = uVar10 - 1;
              piVar21 = piVar21 + 4;
              if (uVar10 == 0) goto LAB_07207ba0;
            }
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          }
          (*(code *)*puVar12)(plVar23,0x33,uVar11,puVar12[1]);
        }
      }
    }
    plVar23 = (long *)PTR_DAT_092bdc70;
    if (_bStack00000000000001a8 == 1) goto LAB_07207c64;
    if (_bStack00000000000001a8 == 3) {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = *(undefined8 *)(unaff_x28 + 0x130);
      plVar13 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf8);
      FUN_0699efb4(plVar13,uVar11,*(undefined8 *)PTR_DAT_092bdcd8);
      goto LAB_07207c94;
    }
    if (_bStack00000000000001a8 == 7) {
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = *(undefined8 *)(unaff_x28 + 0x130);
      plVar13 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdcf0);
      FUN_0699fff4(plVar13,uVar11,*(undefined8 *)PTR_DAT_092bdcd0);
      goto LAB_07207c94;
    }
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar13 = *(long **)(unaff_x28 + 0x130);
    if (plVar13 != (long *)0x0) {
      lVar22 = FUN_04077674(*(undefined8 *)PTR_DAT_092858e8,1);
      uVar11 = FUN_059f7a58(&stack0x000001a0,*(undefined8 *)PTR_DAT_092bdc48);
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(int *)(lVar22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(undefined8 *)(lVar22 + 0x20) = uVar11;
      thunk_FUN_040ec700();
      lVar16 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar10 == 0) {
LAB_0720829c:
        puVar12 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092bc2c8,0);
      }
      else {
        piVar21 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        while (*(long *)(piVar21 + -2) != *(long *)PTR_DAT_092bc2c8) {
          uVar10 = uVar10 - 1;
          piVar21 = piVar21 + 4;
          if (uVar10 == 0) goto LAB_0720829c;
        }
        puVar12 = (undefined8 *)(lVar16 + (long)*piVar21 * 0x10 + 0x138);
      }
      (*(code *)*puVar12)(plVar13,9,lVar22,puVar12[1]);
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
  plVar13 = (long *)thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdce8);
  System_Linq_Enumerable_<ExceptIterator>d__77<KeyValuePair<object,_object>>__System_IDisposable_Dispose
            (plVar13,uVar11,*(undefined8 *)PTR_DAT_092bdce0);
LAB_07207c94:
  if (plVar13 == (long *)0x0) {
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
  *(byte *)(plVar13 + 2) = bVar7;
  *(byte *)((long)plVar13 + 0x11) = bVar1;
  plVar23 = (long *)PTR_DAT_092bdc70;
  if (*(long *)(unaff_x28 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_06efc7c4(*(long *)(unaff_x28 + 0x88),lVar22,plVar13,*(undefined8 *)PTR_DAT_092bdbc0);
  (**(code **)(*plVar13 + 0x178))(&stack0x00000028,plVar13);
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
  lVar22 = *(long *)(in_stack_000001d8 + 0x10);
  auVar26 = FUN_06016048(&stack0x00000180,*(undefined8 *)puVar4);
  if (lVar22 == 0) {
LAB_072082f8:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar16 = *(long *)(lVar22 + 0x10);
  lVar17 = *plVar23;
  *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
  if (lVar16 == 0) goto LAB_072082f8;
  uVar19 = *(uint *)(lVar22 + 0x18);
  if (uVar19 < *(uint *)(lVar16 + 0x18)) {
    *(uint *)(lVar22 + 0x18) = uVar19 + 1;
    *(undefined1 (*) [16])(lVar16 + (long)(int)uVar19 * 0x10 + 0x20) = auVar26;
  }
  else {
    FUN_05bd96b8(lVar22,auVar26._0_8_,auVar26._8_8_,
                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
  }
  plVar13 = *(long **)(unaff_x28 + 0x20);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar22 = *plVar13;
  uVar10 = (ulong)*(ushort *)(lVar22 + 0x12e);
  if (uVar10 == 0) {
LAB_07207de8:
    puVar12 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092bd558,2);
  }
  else {
    piVar21 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    while (*(long *)(piVar21 + -2) != *(long *)PTR_DAT_092bd558) {
      uVar10 = uVar10 - 1;
      piVar21 = piVar21 + 4;
      if (uVar10 == 0) goto LAB_07207de8;
    }
    puVar12 = (undefined8 *)(lVar22 + (long)(*piVar21 + 2) * 0x10 + 0x138);
  }
  lVar22 = (*(code *)*puVar12)(plVar13,puVar12[1]);
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000178 = FUN_076f1ee4(lVar22,0);
  uVar10 = FUN_07591eb4(&stack0x00000178,0);
  if ((uVar10 & 1) == 0) goto code_r0x07207e34;
  goto LAB_07207998;
LAB_0720729c:
  auVar26 = FUN_07200370();
  if (*(long *)(in_stack_000001d8 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830(0,auVar26._8_8_,auVar26._0_8_);
  }
  FUN_06efc7c4(*(long *)(in_stack_000001d8 + 0xe),unaff_x24,auVar26._0_8_,
               *(undefined8 *)PTR_DAT_092bdbd8);
  goto code_r0x072072e0;
code_r0x07207148:
  unaff_w26 = 0;
LAB_0720714c:
  if (uVar19 <= unaff_w26) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  unaff_x24 = *(long *)(unaff_x21 + (long)(int)unaff_w26 * 8 + 0x20);
  uVar10 = FUN_06efc9cc(unaff_x23,unaff_x24,*(undefined8 *)PTR_DAT_092bdb50);
  if ((uVar10 & 1) == 0) {
    uVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdc98);
    FUN_05c26520(uVar11,*(undefined8 *)PTR_DAT_092bdc80);
    FUN_06efc7c4(unaff_x23,unaff_x24,uVar11,*(undefined8 *)PTR_DAT_092bdbd0);
  }
  lVar22 = FUN_06efc758(unaff_x23,unaff_x24,*(undefined8 *)PTR_DAT_092bdbb0);
  if (lVar22 != 0) {
    lVar16 = *(long *)(lVar22 + 0x10);
    lVar17 = *unaff_x29;
    *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
    if (lVar16 != 0) {
      uVar19 = *(uint *)(lVar22 + 0x18);
      if (uVar19 < *(uint *)(lVar16 + 0x18)) {
        *(uint *)(lVar22 + 0x18) = uVar19 + 1;
        plVar23 = (long *)(lVar16 + (long)(int)uVar19 * 8 + 0x20);
        *plVar23 = unaff_x24;
        thunk_FUN_040ec700(plVar23,unaff_x24);
      }
      else {
        FUN_05c26d88(lVar22,unaff_x24,
                     *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(unaff_x24 + 0x28) == 0) goto code_r0x072072e0;
      if (*(long *)(in_stack_000001d8 + 0xe) == 0) {
        uVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdbe8);
        FUN_06efbe2c(uVar11,*(undefined8 *)PTR_DAT_092bdb88);
        *(undefined8 *)(in_stack_000001d8 + 0xe) = uVar11;
        thunk_FUN_040ec700(in_stack_000001d8 + 0xe,uVar11);
        goto LAB_0720729c;
      }
      uVar10 = FUN_06efc9cc(*(long *)(in_stack_000001d8 + 0xe),unaff_x24,
                            *(undefined8 *)PTR_DAT_092bdb58);
      if ((uVar10 & 1) == 0) goto LAB_0720729c;
      goto LAB_0720746c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
code_r0x07207e34:
  in_stack_000001d0._4_4_ = 0;
  *in_stack_000001d8 = 0;
  *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
  thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
  puVar18 = in_stack_000001d8;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1,in_stack_000001d8);
  }
  FUN_04995830(puVar18 + 2,&stack0x00000178,in_stack_000001d8,*(undefined8 *)PTR_DAT_092bdb40);
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
        while (uVar10 = FUN_05385f24(&stack0x00000150,*(undefined8 *)puVar5), (uVar10 & 1) != 0) {
          if (in_stack_00000168 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          auVar26 = FUN_07215d10(in_stack_00000168,0);
          lVar22 = *(long *)(in_stack_000001d8 + 0x10);
          if (lVar22 == 0) {
LAB_0720830c:
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *(long *)(lVar22 + 0x10);
          lVar17 = *plVar23;
          *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_0720830c;
          uVar19 = *(uint *)(lVar22 + 0x18);
          if (uVar19 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar22 + 0x18) = uVar19 + 1;
            *(undefined1 (*) [16])(lVar16 + (long)(int)uVar19 * 0x10 + 0x20) = auVar26;
          }
          else {
            FUN_05bd96b8(lVar22,auVar26._0_8_,auVar26._8_8_,
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
      uVar10 = FUN_0721f760(*(long *)(in_stack_000001d8 + 8),0);
      if ((uVar10 & 1) != 0) {
        lVar22 = *(long *)(in_stack_000001d8 + 8);
        if (lVar22 == 0) {
LAB_072081b4:
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar10 = 0;
        while( true ) {
          lVar22 = *(long *)(lVar22 + 0x28);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if ((int)*(uint *)(lVar22 + 0x18) <= (int)uVar10) break;
          if (*(uint *)(lVar22 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          lVar22 = *(long *)(lVar22 + uVar10 * 8 + 0x20);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar16 = *(long *)(lVar22 + 0x20);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar19 = *(uint *)(lVar16 + 0x18);
          if (0 < (int)uVar19) {
            lVar17 = 0;
            do {
              if (uVar19 <= (uint)lVar17) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              if (*(long *)(lVar16 + 0x20 + lVar17 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_07200548();
              uVar19 = *(uint *)(lVar16 + 0x18);
              lVar17 = lVar17 + 1;
            } while ((int)lVar17 < (int)uVar19);
          }
          lVar16 = *(long *)(lVar22 + 0x18);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar19 = *(uint *)(lVar16 + 0x18);
          if (0 < (int)uVar19) {
            uVar25 = 0;
            do {
              if (uVar19 <= uVar25) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              lVar17 = *(long *)(lVar16 + (long)(int)uVar25 * 8 + 0x20);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar20 = *(long *)(lVar22 + 0x20);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar20 + 0x18) <= *(uint *)(lVar17 + 0x10)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              if (*(long *)(lVar20 + (long)(int)*(uint *)(lVar17 + 0x10) * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(long *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              iVar8 = FUN_07212d80(*(long *)(lVar17 + 0x18),0);
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
              uVar19 = *(uint *)(lVar16 + 0x18);
              uVar25 = uVar25 + 1;
            } while ((int)uVar25 < (int)uVar19);
          }
          uVar10 = uVar10 + 1;
          lVar22 = *(long *)(in_stack_000001d8 + 8);
          if (lVar22 == 0) goto LAB_072081b4;
        }
      }
      if (*(long *)(in_stack_000001d8 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar22 = *(long *)(*(long *)(in_stack_000001d8 + 8) + 0x20);
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar11 = FUN_04077674(*(undefined8 *)PTR_DAT_092bdb00,*(undefined4 *)(lVar22 + 0x18));
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined8 *)(unaff_x28 + 0x60) = uVar11;
      thunk_FUN_040ec700();
      uVar19 = 0;
      in_stack_000001d8[0x20] = 0;
      puVar12 = (undefined8 *)PTR_DAT_092bda28;
      plVar13 = (long *)PTR_DAT_092bda30;
      puVar3 = (undefined8 *)PTR_DAT_092bdba8;
      puVar18 = in_stack_000001d8;
      do {
        PTR_DAT_092bda28 = (undefined *)puVar12;
        PTR_DAT_092bda30 = (undefined *)plVar13;
        PTR_DAT_092bdba8 = (undefined *)puVar3;
        if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(unaff_x28 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(int *)(*(long *)(unaff_x28 + 0x60) + 0x18) <= (int)uVar19) {
          if (0 < (int)puVar18[0xc]) {
            uVar19 = 0;
            uVar10 = 0;
            do {
              if (*(long *)(puVar18 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar22 = *(long *)(*(long *)(puVar18 + 8) + 0x60);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar22 + 0x18) <= uVar10) {
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
              lVar17 = *(long *)(lVar22 + uVar10 * 8 + 0x20);
              lVar22 = FUN_06efc5fc(lVar16,*(undefined8 *)PTR_DAT_092bdbb8);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_0685b4f8(&stack0x00000050,lVar22,*(undefined8 *)PTR_DAT_092bdcc8);
              in_stack_00000090 = in_stack_00000050;
              in_stack_000000a0 = in_stack_00000060;
              in_stack_00000050 = 0;
              in_stack_00000060 = &stack0x00000090;
              in_stack_00000098 = in_stack_00000058;
              in_stack_00000058 = (int *)((long)&stack0x000001d0 + 4);
              while (uVar14 = FUN_05386d5c(&stack0x00000090,*(undefined8 *)PTR_DAT_092bdc28),
                    plVar23 = in_stack_000000a0, (uVar14 & 1) != 0) {
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
                    lVar22 = FUN_05c26ab8(plVar23,iVar8,*puVar12);
                    if (plVar24 == (long *)0x0) {
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_04077830();
                      }
                      lVar16 = plVar23[3];
                      uVar11 = *(undefined8 *)(lVar17 + 0x10);
                      plVar24 = (long *)thunk_FUN_040b4efc(*plVar13);
                      FUN_07216bd0(plVar24,uVar19,(int)lVar16,uVar11,0);
                    }
                    else {
                      bVar7 = *(byte *)(*plVar13 + 0x130);
                      if (*(byte *)(*plVar24 + 0x130) < bVar7) {
                        plVar24 = (long *)0x0;
                      }
                      else if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar7 * 8 + -8) !=
                               *plVar13) {
                        plVar24 = (long *)0x0;
                      }
                    }
                    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04077830();
                    }
                    if (*(long *)(lVar22 + 0x28) == 0) {
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
                      lVar16 = FUN_06efc758(*(long *)(in_stack_000001d8 + 0xe),lVar22,*puVar3);
                      if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_04077830();
                      }
                      plVar24[5] = lVar16;
                      thunk_FUN_040ec700();
                    }
                    FUN_072175f4(plVar24,iVar8,*(undefined4 *)(lVar22 + 0x1c),0);
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < (int)plVar23[3]);
                }
                plVar23 = *(long **)(unaff_x28 + 0x80);
                if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                if ((plVar24 != (long *)0x0) &&
                   (lVar22 = thunk_FUN_040b4e00(plVar24,*(undefined8 *)(*plVar23 + 0x40)),
                   lVar22 == 0)) {
                  uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar11,0);
                }
                if (*(uint *)(plVar23 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar23[(long)(int)uVar19 + 4] = (long)plVar24;
                thunk_FUN_040ec700(plVar23 + (long)(int)uVar19 + 4,plVar24);
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
              puVar18 = in_stack_000001d8;
            } while ((int)uVar10 < (int)in_stack_000001d8[0xc]);
          }
          if (*(long *)(puVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar11 = FUN_05bdb0a8(*(long *)(puVar18 + 0x10),*(undefined8 *)PTR_DAT_092bdc78);
          FUN_05f3fd7c(&stack0x000001c0,uVar11,4,*(undefined8 *)PTR_DAT_092bdca8);
          auVar26 = FUN_0896aff0(in_stack_000001c0,in_stack_000001c8,0);
          puVar4 = PTR_DAT_092bc2d8;
          *(undefined1 (*) [16])(unaff_x28 + 0x70) = auVar26;
          FUN_05f3ffd8(&stack0x000001c0,*(undefined8 *)puVar4);
          FUN_0896af44(0);
          bVar6 = *(char *)(in_stack_000001d8 + 0x12) != '\0';
          goto LAB_07209208;
        }
        if (*(long *)(puVar18 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar22 = *(long *)(*(long *)(puVar18 + 8) + 0x20);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar22 = *(long *)(lVar22 + (long)(int)uVar19 * 8 + 0x20);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (-1 < *(int *)(lVar22 + 0x10)) {
          bVar7 = FUN_072199cc(lVar22,0);
          if (bVar7 < 4) {
            if (bVar7 == 1) {
              lVar22 = *(long *)(unaff_x28 + 0x68);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar22 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              iVar8 = *(int *)(lVar22 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
              if (iVar8 < 0x200) {
                if ((iVar8 == 2) || (iVar8 == 4)) {
                  lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd858);
                  FUN_06e52ce0(lVar22,*(undefined8 *)PTR_DAT_092bdb08);
                  if (lVar22 == 0) {
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
                  auVar26 = FUN_06016048(&stack0x00000138,*(undefined8 *)puVar4);
                  if (lVar16 == 0) {
LAB_07209348:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar17 = *(long *)(lVar16 + 0x10);
                  lVar20 = *plVar23;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_07209348;
                  uVar19 = *(uint *)(lVar16 + 0x18);
                  if (uVar19 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar19 + 1;
                    *(undefined1 (*) [16])(lVar17 + (long)(int)uVar19 * 0x10 + 0x20) = auVar26;
                  }
                  else {
                    FUN_05bd96b8(lVar16,auVar26._0_8_,auVar26._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar13 = *(long **)(unaff_x28 + 0x60);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar19 = in_stack_000001d8[0x20];
                  lVar16 = thunk_FUN_040b4e00(lVar22,*(undefined8 *)(*plVar13 + 0x40));
                  if (lVar16 == 0) {
                    uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar11,0);
                  }
                  if (*(uint *)(plVar13 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar13[(long)(int)uVar19 + 4] = lVar22;
                  thunk_FUN_040ec700(plVar13 + (long)(int)uVar19 + 4,lVar22);
                }
              }
              else if ((iVar8 == 0x200) || (iVar8 == 0x2000)) {
                lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bdb30);
                FUN_06e52d58(lVar22,*(undefined8 *)PTR_DAT_092bdb18);
                FUN_07201d94();
                if (in_stack_000000c0 != '\0') {
                  auVar26 = FUN_06008be0(&stack0x000000c0,*(undefined8 *)PTR_DAT_092bd960);
                  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  *(undefined1 (*) [16])(lVar22 + 0x10) = auVar26;
                }
                if (in_stack_000000a8 != '\0') {
                  lVar16 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar26 = FUN_06016048(&stack0x000000a8,*(undefined8 *)puVar4);
                  if (lVar16 == 0) {
LAB_07209384:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar17 = *(long *)(lVar16 + 0x10);
                  lVar20 = *plVar23;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_07209384;
                  uVar19 = *(uint *)(lVar16 + 0x18);
                  if (uVar19 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar19 + 1;
                    *(undefined1 (*) [16])(lVar17 + (long)(int)uVar19 * 0x10 + 0x20) = auVar26;
                  }
                  else {
                    FUN_05bd96b8(lVar16,auVar26._0_8_,auVar26._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                plVar13 = *(long **)(unaff_x28 + 0x60);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar19 = in_stack_000001d8[0x20];
                if ((lVar22 != 0) &&
                   (lVar16 = thunk_FUN_040b4e00(lVar22,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar16 == 0)) {
                  uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar11,0);
                }
                if (*(uint *)(plVar13 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar13[(long)(int)uVar19 + 4] = lVar22;
                thunk_FUN_040ec700(plVar13 + (long)(int)uVar19 + 4,lVar22);
              }
            }
            else if (bVar7 == 3) {
              lVar22 = *(long *)(unaff_x28 + 0x68);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              if (*(uint *)(lVar22 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              uVar19 = *(uint *)(lVar22 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20);
              if ((uVar19 >> 10 & 1) == 0) {
                if ((uVar19 >> 0xc & 1) != 0) {
                  lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                  FUN_06e52d78(lVar22,*(undefined8 *)PTR_DAT_092bdb10);
                  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  FUN_07201560();
                  lVar16 = *(long *)(in_stack_000001d8 + 0x10);
                  auVar26 = FUN_06016048(&stack0x000000d8,*(undefined8 *)puVar4);
                  if (lVar16 == 0) {
LAB_0720936c:
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  lVar17 = *(long *)(lVar16 + 0x10);
                  lVar20 = *plVar23;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_0720936c;
                  uVar19 = *(uint *)(lVar16 + 0x18);
                  if (uVar19 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar16 + 0x18) = uVar19 + 1;
                    *(undefined1 (*) [16])(lVar17 + (long)(int)uVar19 * 0x10 + 0x20) = auVar26;
                  }
                  else {
                    FUN_05bd96b8(lVar16,auVar26._0_8_,auVar26._8_8_,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  plVar13 = *(long **)(unaff_x28 + 0x60);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077830();
                  }
                  uVar19 = in_stack_000001d8[0x20];
                  lVar16 = thunk_FUN_040b4e00(lVar22,*(undefined8 *)(*plVar13 + 0x40));
                  if (lVar16 == 0) {
                    uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                    FUN_040776f4(uVar11,0);
                  }
                  if (*(uint *)(plVar13 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                    FUN_04077838();
                  }
                  plVar13[(long)(int)uVar19 + 4] = lVar22;
                  thunk_FUN_040ec700(plVar13 + (long)(int)uVar19 + 4,lVar22);
                }
              }
              else {
                lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd980);
                FUN_06e52d78(lVar22,*(undefined8 *)PTR_DAT_092bdb10);
                if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                FUN_07201560();
                lVar16 = *(long *)(in_stack_000001d8 + 0x10);
                auVar26 = FUN_06016048(&stack0x00000108,*(undefined8 *)puVar4);
                if (lVar16 == 0) {
LAB_07209328:
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                lVar17 = *(long *)(lVar16 + 0x10);
                lVar20 = *plVar23;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                if (lVar17 == 0) goto LAB_07209328;
                uVar19 = *(uint *)(lVar16 + 0x18);
                if (uVar19 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar16 + 0x18) = uVar19 + 1;
                  *(undefined1 (*) [16])(lVar17 + (long)(int)uVar19 * 0x10 + 0x20) = auVar26;
                }
                else {
                  FUN_05bd96b8(lVar16,auVar26._0_8_,auVar26._8_8_,
                               *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
                }
                plVar13 = *(long **)(unaff_x28 + 0x60);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077830();
                }
                uVar19 = in_stack_000001d8[0x20];
                lVar16 = thunk_FUN_040b4e00(lVar22,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar16 == 0) {
                  uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                  FUN_040776f4(uVar11,0);
                }
                if (*(uint *)(plVar13 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                  FUN_04077838();
                }
                plVar13[(long)(int)uVar19 + 4] = lVar22;
                thunk_FUN_040ec700(plVar13 + (long)(int)uVar19 + 4,lVar22);
              }
            }
          }
          else if (bVar7 == 4) {
            lVar22 = *(long *)(unaff_x28 + 0x68);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar22 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if ((*(uint *)(lVar22 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) >> 0xb & 1) != 0)
            {
              lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd988);
              FUN_06e52d38(lVar22,*(undefined8 *)PTR_DAT_092bdb28);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_07201930();
              lVar16 = *(long *)(in_stack_000001d8 + 0x10);
              auVar26 = FUN_06016048(&stack0x000000f0,*(undefined8 *)puVar4);
              if (lVar16 == 0) {
LAB_07209334:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar17 = *(long *)(lVar16 + 0x10);
              lVar20 = *plVar23;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_07209334;
              uVar19 = *(uint *)(lVar16 + 0x18);
              if (uVar19 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar19 + 1;
                *(undefined1 (*) [16])(lVar17 + (long)(int)uVar19 * 0x10 + 0x20) = auVar26;
              }
              else {
                FUN_05bd96b8(lVar16,auVar26._0_8_,auVar26._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
              plVar13 = *(long **)(unaff_x28 + 0x60);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar19 = in_stack_000001d8[0x20];
              lVar16 = thunk_FUN_040b4e00(lVar22,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar16 == 0) {
                uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar11,0);
              }
              if (*(uint *)(plVar13 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar13[(long)(int)uVar19 + 4] = lVar22;
              thunk_FUN_040ec700(plVar13 + (long)(int)uVar19 + 4,lVar22);
            }
          }
          else if (bVar7 == 7) {
            lVar22 = *(long *)(unaff_x28 + 0x68);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            if (*(uint *)(lVar22 + 0x18) <= (uint)in_stack_000001d8[0x20]) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (*(int *)(lVar22 + (long)(int)in_stack_000001d8[0x20] * 4 + 0x20) == 0x100) {
              lVar22 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092bd9c8);
              FUN_06e52d18(lVar22,*(undefined8 *)PTR_DAT_092bdb20);
              if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_072011ec();
              lVar16 = *(long *)(in_stack_000001d8 + 0x10);
              auVar26 = FUN_06016048(&stack0x00000120,*(undefined8 *)puVar4);
              if (lVar16 == 0) {
LAB_0720931c:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar17 = *(long *)(lVar16 + 0x10);
              lVar20 = *plVar23;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar17 == 0) goto LAB_0720931c;
              uVar19 = *(uint *)(lVar16 + 0x18);
              if (uVar19 < *(uint *)(lVar17 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar19 + 1;
                *(undefined1 (*) [16])(lVar17 + (long)(int)uVar19 * 0x10 + 0x20) = auVar26;
              }
              else {
                FUN_05bd96b8(lVar16,auVar26._0_8_,auVar26._8_8_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
              }
              plVar13 = *(long **)(unaff_x28 + 0x60);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              uVar19 = in_stack_000001d8[0x20];
              lVar16 = thunk_FUN_040b4e00(lVar22,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar16 == 0) {
                uVar11 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar11,0);
              }
              if (*(uint *)(plVar13 + 3) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              plVar13[(long)(int)uVar19 + 4] = lVar22;
              thunk_FUN_040ec700(plVar13 + (long)(int)uVar19 + 4,lVar22);
            }
          }
          plVar13 = *(long **)(unaff_x28 + 0x20);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar22 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar10 == 0) {
LAB_07208de8:
            puVar12 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092bd558,2);
          }
          else {
            piVar21 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            while (*(long *)(piVar21 + -2) != *(long *)PTR_DAT_092bd558) {
              uVar10 = uVar10 - 1;
              piVar21 = piVar21 + 4;
              if (uVar10 == 0) goto LAB_07208de8;
            }
            puVar12 = (undefined8 *)(lVar22 + (long)(*piVar21 + 2) * 0x10 + 0x138);
          }
          lVar22 = (*(code *)*puVar12)(plVar13,puVar12[1]);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          in_stack_00000178 = FUN_076f1ee4(lVar22,0);
          uVar10 = FUN_07591eb4(&stack0x00000178,0);
          if ((uVar10 & 1) == 0) {
            in_stack_000001d0._4_4_ = 1;
            *in_stack_000001d8 = 1;
            *(undefined8 *)(in_stack_000001d8 + 0x1e) = in_stack_00000178;
            thunk_FUN_040ec700(in_stack_000001d8 + 0x1e,0);
            puVar18 = in_stack_000001d8;
            if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
              thunk_FUN_040d65a8(*(long *)PTR_DAT_09289990,extraout_x1_00,in_stack_000001d8);
            }
            FUN_04995830(puVar18 + 2,&stack0x00000178,in_stack_000001d8,
                         *(undefined8 *)PTR_DAT_092bdb40);
            return;
          }
          FUN_07591f7c(&stack0x00000178,0);
          uVar19 = in_stack_000001d8[0x20];
          puVar18 = in_stack_000001d8;
        }
        uVar19 = uVar19 + 1;
        puVar18[0x20] = uVar19;
        puVar12 = (undefined8 *)PTR_DAT_092bda28;
        plVar13 = (long *)PTR_DAT_092bda30;
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
  puVar18 = in_stack_000001d8;
  if (*(int *)(*(long *)PTR_DAT_09289990 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_065d0838(puVar18 + 2,bVar6,*(undefined8 *)puVar4);
  return;
}


