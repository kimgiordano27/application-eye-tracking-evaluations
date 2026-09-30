/*
FUNCTION_NAME: BattleCardSender$$SetActiveCollider
ENTRY_POINT: 03cbd904
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void BattleCardSender__SetActiveCollider
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined8 param_6,ulong param_7,
               long param_8,ulong param_9,long param_10,long param_11,int *param_12,ulong param_13,
               undefined8 param_14,undefined8 param_15,long *param_16,long *param_17,ulong param_18,
               ulong param_19)

{
  undefined2 *puVar1;
  int *piVar2;
  ushort *puVar3;
  char *pcVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong in_x9;
  char *pcVar19;
  long lVar20;
  ulong in_x11;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  uint *in_x16;
  long lVar27;
  ulong in_x17;
  ulong uVar28;
  ushort uVar29;
  ulong uVar30;
  ulong unaff_x19;
  ulong uVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  int unaff_w25;
  ulong uVar35;
  ulong uVar36;
  long unaff_x26;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  undefined8 uVar42;
  int iVar43;
  int iVar44;
  ulong uStack0000000000000040;
  long in_stack_00000048;
  long *in_stack_00000050;
  long in_stack_00000058;
  ulong in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000078;
  ulong in_stack_000000a8;
  ulong uStack00000000000000b0;
  long in_stack_000000b8;
  ulong uStack00000000000000c0;
  ulong uStack00000000000000e8;
  ulong in_stack_000000f8;
  ulong uStack0000000000000100;
  long in_stack_00000108;
  
  iVar44 = param_5._4_4_;
  iVar43 = param_5._0_4_;
  uStack00000000000000e8 = in_x17;
code_r0x03cbd904:
  *(ulong *)(param_12 + 8) = CONCAT44(iVar44,iVar43);
LAB_03cbdac0:
  uVar15 = (uint)uStack00000000000000e8;
  *in_x16 = uVar15;
  in_x16[1] = (uint)in_x9 | unaff_w25 << 0x19;
  uVar8 = (ulong)*(uint *)(unaff_x26 + 0x44) + 0x10;
  if (in_x11 < uVar8) {
    uVar14 = 0;
  }
  else {
    uVar22 = (ulong)*(uint *)(unaff_x26 + 0x40);
    uVar26 = ((in_x11 - *(uint *)(unaff_x26 + 0x44)) + (4L << (uVar22 & 0x3f))) - 0x10;
    uVar28 = (ulong)(((uint)LZCOUNT((uint)uVar26) ^ 0x1f) - 1);
    uVar23 = uVar26 >> (uVar28 & 0x3f);
    in_x11 = (ulong)(((uint)uVar26 &
                     (-1 << (ulong)(*(uint *)(unaff_x26 + 0x40) & 0x1f) ^ 0xffffffffU)) + (int)uVar8
                     + (int)((uVar23 & 1 | (uVar28 - uVar22) * 2) - 2 << (uVar22 & 0x3f)) |
                    (int)(uVar28 - uVar22) << 10);
    uVar14 = (uint)(uVar26 - ((uVar23 & 1 | 2) << (uVar28 & 0x3f)) >> (uVar22 & 0x3f));
  }
  *(short *)((long)in_x16 + 0xe) = (short)in_x11;
  in_x16[2] = uVar14;
  if (5 < uStack00000000000000e8) {
    if (uStack00000000000000e8 < 0x82) {
      uVar15 = ((uint)LZCOUNT((int)(uStack00000000000000e8 - 2)) ^ 0x1f) - 1;
      uVar15 = (int)(uStack00000000000000e8 - 2 >> ((ulong)uVar15 & 0x3f)) + uVar15 * 2 + 2;
    }
    else if (uStack00000000000000e8 < 0x842) {
      uVar15 = ((uint)LZCOUNT(uVar15 - 0x42) ^ 0x1f) + 10;
    }
    else if (uStack00000000000000e8 >> 1 < 0xc21) {
      uVar15 = 0x15;
    }
    else {
      uVar15 = 0x16;
      if (0x5841 < uStack00000000000000e8) {
        uVar15 = 0x17;
      }
    }
  }
  uVar14 = unaff_w25 + (uint)in_x9;
  if (uVar14 < 10) {
    uVar14 = uVar14 - 2;
  }
  else if (uVar14 < 0x86) {
    uVar7 = ((uint)LZCOUNT((int)((long)(int)uVar14 - 6U)) ^ 0x1f) - 1;
    uVar14 = (int)((long)(int)uVar14 - 6U >> ((ulong)uVar7 & 0x3f)) + uVar7 * 2 + 4;
  }
  else if (uVar14 < 0x846) {
    uVar14 = ((uint)LZCOUNT(uVar14 - 0x46) ^ 0x1f) + 0xc;
  }
  else {
    uVar14 = 0x17;
  }
  uVar29 = (ushort)uVar14 & 7 | (ushort)((uVar15 & 7) << 3);
  if ((((in_x11 & 0x3ff) == 0) && ((uVar15 & 0xffff) < 8)) && ((uVar14 & 0xffff) < 0x10)) {
    if (7 < (uVar14 & 0xffff)) {
      uVar29 = uVar29 | 0x40;
    }
  }
  else {
    uVar15 = (uVar15 >> 3 & 0x1fff) * 3 + ((uVar14 & 0xfff8) >> 3);
    uVar29 = (((ushort)(0x520d40 >> (ulong)((uVar15 & 0xf) << 1)) & 0xc0) + (short)uVar15 * 0x40 |
             uVar29) + 0x40;
  }
  *(ushort *)(in_x16 + 3) = uVar29;
  uVar8 = param_7 + in_x9;
  uVar26 = uVar8;
  if (in_stack_00000060 <= uVar8) {
    uVar26 = in_stack_00000060;
  }
  *in_stack_00000050 = *in_stack_00000050 + uStack00000000000000e8;
  uVar22 = param_7 + 2;
  if (param_13 < in_x9 >> 2) {
    uVar23 = uVar8 + param_13 * -4;
    uVar28 = uVar22;
    if (uVar22 <= uVar23) {
      uVar28 = uVar23;
    }
    uVar22 = uVar26;
    if (uVar28 <= uVar26) {
      uVar22 = uVar28;
    }
  }
  in_x16 = in_x16 + 4;
  param_7 = in_stack_00000058 + in_x9 * 2 + param_7;
  if (uVar22 < uVar26) {
    lVar20 = *(long *)(param_11 + 0x40);
    uVar29 = *(ushort *)(param_11 + 0x30);
    do {
      puVar1 = (undefined2 *)(lVar20 + 0x40000 + (ulong)uVar29 * 4);
      uVar14 = (uint)(*(int *)(param_8 + (uVar22 & param_9)) * 0x1e35a7bd) >> 0x11;
      uVar15 = *(uint *)(lVar20 + (ulong)uVar14 * 4);
      *(char *)(lVar20 + 0x30000 + (uVar22 & 0xffff)) = (char)uVar14;
      uVar28 = uVar22 - uVar15;
      if (unaff_x19 <= uVar28) {
        uVar28 = unaff_x19;
      }
      *puVar1 = (short)uVar28;
      puVar1[1] = *(undefined2 *)(lVar20 + 0x20000 + (ulong)uVar14 * 2);
      *(int *)(lVar20 + (ulong)uVar14 * 4) = (int)uVar22;
      uVar22 = uVar22 + 1;
      *(ushort *)(lVar20 + 0x20000 + (ulong)uVar14 * 2) = uVar29;
      uVar29 = uVar29 + 1;
    } while (uVar26 != uVar22);
    uStack00000000000000e8 = 0;
    *(ushort *)(param_11 + 0x30) = uVar29;
  }
  else {
    uStack00000000000000e8 = 0;
  }
LAB_03cbde58:
  do {
    uVar26 = uVar8;
    uVar8 = in_stack_000000a8 - uVar26;
    if (in_stack_000000a8 <= uVar26 + 4) {
      *param_17 = uVar8 + uStack00000000000000e8;
      *param_16 = *param_16 + ((long)in_x16 - param_10 >> 4);
      return;
    }
    piVar2 = (int *)(param_8 + (uVar26 & param_9));
    uVar28 = *(ulong *)(unaff_x26 + 0x50);
    uVar38 = uVar8 & 0xfffffffffffffff8;
    lVar20 = *(long *)(param_11 + 0x40);
    uVar23 = uVar8 & 7;
    uVar22 = uVar26;
    if (in_stack_000000f8 <= uVar26) {
      uVar22 = in_stack_000000f8;
    }
    uVar31 = 0;
    uVar21 = 0;
    uVar9 = 0;
    lVar34 = 0;
    uVar30 = uVar8 >> 3;
    uVar39 = 0x7e4;
    uVar15 = (uint)(*piVar2 * 0x1e35a7bd) >> 0x11;
    uVar25 = 0x7e4;
    do {
      uVar13 = (ulong)param_12[lVar34];
      uVar17 = uVar26 - uVar13;
      if (((lVar34 == 0) ||
          ((uint)*(byte *)(lVar20 + 0x30000 + (uVar17 & 0xffff)) == (uVar15 & 0xff))) &&
         ((uVar13 <= uVar22 && (uVar17 < uVar26)))) {
        lVar27 = param_8 + (uVar17 & param_9);
        if (uVar30 == 0) {
          piVar11 = piVar2;
          uVar17 = 0;
        }
        else {
          lVar24 = 0;
          uVar36 = uVar30;
          do {
            uVar17 = *(ulong *)(lVar27 + lVar24);
            if (*(ulong *)((long)piVar2 + lVar24) != uVar17) {
              uVar17 = uVar17 ^ *(ulong *)((long)piVar2 + lVar24);
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar36 = lVar24 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
              goto LAB_03cbcf68;
            }
            uVar36 = uVar36 - 1;
            lVar24 = lVar24 + 8;
            piVar11 = (int *)((long)piVar2 + uVar38);
            uVar17 = uVar38;
          } while (uVar36 != 0);
        }
        uVar36 = uVar17;
        if (uVar23 != 0) {
          uVar35 = uVar17 | uVar23;
          uVar40 = uVar23;
          do {
            uVar36 = uVar17;
            if (*(char *)(lVar27 + uVar17) != (char)*piVar11) break;
            piVar11 = (int *)((long)piVar11 + 1);
            uVar40 = uVar40 - 1;
            uVar17 = uVar17 + 1;
            uVar36 = uVar35;
          } while (uVar40 != 0);
        }
LAB_03cbcf68:
        if ((1 < uVar36) && (uVar17 = uVar36 * 0x87 + 0x78f, uVar25 < uVar17)) {
          if (lVar34 != 0) {
            uVar17 = uVar17 - ((0x1ca10U >> (ulong)((uint)lVar34 & 0xe) & 0xe) + 0x27);
          }
          if (uVar25 < uVar17) {
            uVar9 = uVar36;
            uVar21 = uVar36;
            uVar25 = uVar17;
            uVar31 = uVar13;
            uVar39 = uVar17;
          }
        }
      }
      lVar34 = lVar34 + 1;
    } while (lVar34 != 10);
    lVar34 = *(long *)(param_11 + 0x38);
    uVar13 = uVar26 + in_stack_000000b8;
    if (in_stack_000000f8 <= uVar26 + in_stack_000000b8) {
      uVar13 = in_stack_000000f8;
    }
    lVar27 = lVar20 + 0x20000;
    uVar36 = (ulong)uVar15;
    uVar17 = uVar26 - *(uint *)(lVar20 + (ulong)uVar15 * 4);
    if (lVar34 != 0) {
      uVar29 = *(ushort *)(lVar27 + uVar36 * 2);
      uVar40 = 0;
      uVar35 = uVar17;
      do {
        uVar40 = uVar40 + uVar35;
        if (uVar22 < uVar40) break;
        uVar35 = uVar9 + (uVar26 & param_9);
        lVar34 = lVar34 + -1;
        if (uVar35 <= param_9) {
          uVar18 = uVar26 - uVar40 & param_9;
          uVar10 = uVar18 + uVar9;
          if ((uVar10 <= param_9) && (*(char *)(param_8 + uVar35) == *(char *)(param_8 + uVar10))) {
            lVar24 = param_8 + uVar18;
            uVar35 = 0;
            piVar11 = piVar2;
            uVar10 = uVar35;
            for (uVar18 = uVar30; uVar18 != 0; uVar18 = uVar18 - 1) {
              uVar10 = *(ulong *)(lVar24 + uVar35);
              if (*(ulong *)((long)piVar2 + uVar35) != uVar10) {
                uVar10 = uVar10 ^ *(ulong *)((long)piVar2 + uVar35);
                uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
                uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
                uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
                uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
                uVar35 = uVar35 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3);
                unaff_x26 = in_stack_00000108;
                goto LAB_03cbd0dc;
              }
              uVar35 = uVar35 + 8;
              piVar11 = (int *)((long)piVar2 + uVar38);
              uVar10 = uVar38;
              unaff_x26 = in_stack_00000108;
            }
            uVar35 = uVar10;
            if (uVar23 != 0) {
              uVar33 = uVar10 | uVar23;
              uVar18 = uVar23;
              do {
                uVar35 = uVar10;
                if (*(char *)(lVar24 + uVar10) != (char)*piVar11) break;
                piVar11 = (int *)((long)piVar11 + 1);
                uVar10 = uVar10 + 1;
                uVar18 = uVar18 - 1;
                uVar35 = uVar33;
              } while (uVar18 != 0);
            }
LAB_03cbd0dc:
            if ((3 < uVar35) &&
               (uVar10 = (uVar35 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar40) ^ 0x1f) * 0x1e)) +
                         0x780, uVar25 < uVar10)) {
              uVar9 = uVar35;
              uVar39 = uVar10;
              uVar25 = uVar10;
              uVar31 = uVar40;
              uVar21 = uVar35;
            }
          }
        }
        puVar3 = (ushort *)(lVar20 + 0x40000 + (ulong)uVar29 * 4);
        uVar29 = puVar3[1];
        uVar35 = (ulong)*puVar3;
      } while (lVar34 != 0);
    }
    uVar29 = *(ushort *)(in_stack_00000078 + 0x30);
    if (0xfffe < uVar17) {
      uVar17 = 0xffff;
    }
    puVar1 = (undefined2 *)(lVar20 + 0x40000 + (ulong)uVar29 * 4);
    *(ushort *)(in_stack_00000078 + 0x30) = uVar29 + 1;
    *(char *)(lVar20 + 0x30000 + (uVar26 & 0xffff)) = (char)uVar15;
    *puVar1 = (short)uVar17;
    puVar1[1] = *(undefined2 *)(lVar27 + uVar36 * 2);
    *(int *)(lVar20 + uVar36 * 4) = (int)uVar26;
    *(ushort *)(lVar27 + uVar36 * 2) = uVar29;
    if (uVar25 == 0x7e4) {
      lVar20 = *(long *)(in_stack_00000078 + 0x48);
      iVar43 = 0;
      uVar22 = *(ulong *)(lVar20 + 8);
      uVar23 = *(ulong *)(lVar20 + 0x10);
      if (uVar22 >> 7 <= uVar23) {
        lVar27 = *(long *)(unaff_x26 + 0x78);
        lVar34 = 0;
        uVar38 = (ulong)(uVar15 & 0x7ffe);
        uVar9 = 0x7e4;
        do {
          uVar22 = uVar22 + 1;
          *(ulong *)(lVar20 + 8) = uVar22;
          bVar5 = *(byte *)(lVar27 + uVar38);
          uVar25 = (ulong)bVar5;
          if ((uVar25 != 0) && (uVar25 <= uVar8)) {
            lVar24 = *(long *)(in_stack_00000108 + 0x58);
            uVar30 = (ulong)*(ushort *)(*(long *)(in_stack_00000108 + 0x70) + uVar38 * 2);
            pcVar4 = (char *)(*(long *)(lVar24 + 0xa8) +
                             (ulong)*(uint *)(lVar24 + uVar25 * 4 + 0x20) + uVar30 * uVar25);
            if ((ulong)(bVar5 >> 3) == 0) {
              uVar17 = 0;
              pcVar19 = pcVar4;
            }
            else {
              uVar17 = uVar25 & 0xf8;
              lVar32 = 0;
              pcVar19 = pcVar4 + uVar17;
              do {
                if (*(ulong *)(pcVar4 + lVar32) != *(ulong *)((long)piVar2 + lVar32)) {
                  uVar17 = *(ulong *)((long)piVar2 + lVar32) ^ *(ulong *)(pcVar4 + lVar32);
                  uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
                  uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
                  uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                  uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10
                  ;
                  uVar36 = lVar32 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
                  goto LAB_03cbd9b8;
                }
                lVar32 = lVar32 + 8;
              } while ((ulong)(bVar5 >> 3) * 8 - lVar32 != 0);
            }
            uVar40 = uVar25 & 7;
            uVar36 = uVar17;
            if ((bVar5 & 7) != 0) {
              uVar35 = uVar17 | uVar40;
              do {
                uVar36 = uVar17;
                if (*(char *)((long)piVar2 + uVar17) != *pcVar19) break;
                pcVar19 = pcVar19 + 1;
                uVar40 = uVar40 - 1;
                uVar17 = uVar17 + 1;
                uVar36 = uVar35;
              } while (uVar40 != 0);
            }
LAB_03cbd9b8:
            if ((((uVar36 != 0) && (uVar25 < uVar36 + *(uint *)(in_stack_00000108 + 100))) &&
                (uVar25 = uVar13 + 1 + uVar30 +
                          ((*(ulong *)(in_stack_00000108 + 0x68) >>
                            (((uVar25 - uVar36) * 3 & 0x1f) << 1) & 0x3f) + (uVar25 - uVar36) * 4 <<
                          ((ulong)*(byte *)(lVar24 + uVar25) & 0x3f)), uVar25 <= uVar28)) &&
               (uVar30 = (uVar36 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar25) ^ 0x1f) * 0x1e)) +
                         0x780, uVar9 <= uVar30)) {
              iVar43 = (uint)bVar5 - (int)uVar36;
              uVar23 = uVar23 + 1;
              *(ulong *)(lVar20 + 0x10) = uVar23;
              uVar31 = uVar25;
              uVar21 = uVar36;
              uVar9 = uVar30;
              uVar39 = uVar30;
            }
          }
          lVar34 = lVar34 + 1;
          uVar38 = uVar38 + 1;
        } while (lVar34 != 2);
      }
    }
    else {
      iVar43 = 0;
    }
    param_10 = in_stack_00000068;
    param_11 = in_stack_00000078;
    if (0x7e4 < uVar39) break;
    uVar8 = uVar26 + 1;
    uStack00000000000000e8 = uStack00000000000000e8 + 1;
    unaff_x26 = in_stack_00000108;
    if (param_7 < uVar8) {
      if (param_7 + in_stack_00000048 < uVar8) {
        uVar22 = uVar26 + 0x11;
        if (param_18 <= uVar26 + 0x11) {
          uVar22 = param_18;
        }
        if (uVar22 <= uVar8) goto LAB_03cbde58;
        lVar20 = *(long *)(in_stack_00000078 + 0x40);
        uVar29 = *(ushort *)(in_stack_00000078 + 0x30);
        do {
          puVar1 = (undefined2 *)(lVar20 + 0x40000 + (ulong)uVar29 * 4);
          uStack00000000000000e8 = uStack00000000000000e8 + 4;
          uVar14 = (uint)(*(int *)(param_8 + (uVar8 & param_9)) * 0x1e35a7bd) >> 0x11;
          uVar15 = *(uint *)(lVar20 + (ulong)uVar14 * 4);
          *(char *)(lVar20 + 0x30000 + (uVar8 & 0xffff)) = (char)uVar14;
          uVar26 = uVar8 - uVar15;
          if (0xfffe < uVar26) {
            uVar26 = 0xffff;
          }
          *puVar1 = (short)uVar26;
          puVar1[1] = *(undefined2 *)(lVar20 + 0x20000 + (ulong)uVar14 * 2);
          *(int *)(lVar20 + (ulong)uVar14 * 4) = (int)uVar8;
          uVar8 = uVar8 + 4;
          *(ushort *)(lVar20 + 0x20000 + (ulong)uVar14 * 2) = uVar29;
          uVar29 = uVar29 + 1;
        } while (uVar8 < uVar22);
      }
      else {
        uVar22 = uVar26 + 9;
        if (param_19 <= uVar26 + 9) {
          uVar22 = param_19;
        }
        if (uVar22 <= uVar8) goto LAB_03cbde58;
        lVar20 = *(long *)(in_stack_00000078 + 0x40);
        uVar29 = *(ushort *)(in_stack_00000078 + 0x30);
        do {
          puVar1 = (undefined2 *)(lVar20 + 0x40000 + (ulong)uVar29 * 4);
          uStack00000000000000e8 = uStack00000000000000e8 + 2;
          uVar14 = (uint)(*(int *)(param_8 + (uVar8 & param_9)) * 0x1e35a7bd) >> 0x11;
          uVar15 = *(uint *)(lVar20 + (ulong)uVar14 * 4);
          *(char *)(lVar20 + 0x30000 + (uVar8 & 0xffff)) = (char)uVar14;
          uVar26 = uVar8 - uVar15;
          if (0xfffe < uVar26) {
            uVar26 = 0xffff;
          }
          *puVar1 = (short)uVar26;
          puVar1[1] = *(undefined2 *)(lVar20 + 0x20000 + (ulong)uVar14 * 2);
          *(int *)(lVar20 + (ulong)uVar14 * 4) = (int)uVar8;
          uVar8 = uVar8 + 2;
          *(ushort *)(lVar20 + 0x20000 + (ulong)uVar14 * 2) = uVar29;
          uVar29 = uVar29 + 1;
        } while (uVar8 < uVar22);
      }
      *(ushort *)(in_stack_00000078 + 0x30) = uVar29;
    }
  } while( true );
  lVar34 = *(long *)(in_stack_00000078 + 0x38);
  lVar27 = *(long *)(in_stack_00000078 + 0x40);
  uVar29 = *(ushort *)(in_stack_00000078 + 0x30);
  uVar15 = 0;
  lVar20 = lVar27 + 0x20000;
LAB_03cbd234:
  uVar28 = *(ulong *)(in_stack_00000108 + 0x50);
  uVar8 = uVar8 - 1;
  uStack0000000000000100 = 0x7e4;
  param_7 = uVar26 + 1;
  uVar22 = uVar21 - 1;
  if (uVar8 <= uVar21 - 1) {
    uVar22 = uVar8;
  }
  uStack00000000000000b0 = param_7 + in_stack_000000b8;
  uVar23 = uVar8 & 7;
  uVar38 = uVar8 & 0xfffffffffffffff8;
  piVar2 = (int *)(param_8 + (param_7 & param_9));
  if (4 < *(int *)(in_stack_00000108 + 4)) {
    uVar22 = 0;
  }
  uVar9 = in_stack_000000f8;
  if (param_7 < in_stack_000000f8) {
    uVar9 = uVar26 + 1;
  }
  param_13 = 0;
  in_x9 = 0;
  lVar24 = 0;
  uVar14 = (uint)(*piVar2 * 0x1e35a7bd) >> 0x11;
  uVar25 = 0x7e4;
  do {
    uVar30 = (ulong)param_12[lVar24];
    uVar13 = param_7 - uVar30;
    if (((lVar24 == 0) || ((uint)*(byte *)(lVar27 + 0x30000 + (uVar13 & 0xffff)) == (uVar14 & 0xff))
        ) && ((uVar30 <= uVar9 && (uVar13 < param_7)))) {
      lVar32 = param_8 + (uVar13 & param_9);
      uVar13 = 0;
      piVar11 = piVar2;
      uVar17 = uVar13;
      for (uVar36 = uVar8 >> 3; uVar36 != 0; uVar36 = uVar36 - 1) {
        uVar17 = *(ulong *)(lVar32 + uVar13);
        if (*(ulong *)((long)piVar2 + uVar13) != uVar17) {
          uVar17 = uVar17 ^ *(ulong *)((long)piVar2 + uVar13);
          uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar13 = uVar13 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
          goto LAB_03cbd348;
        }
        uVar13 = uVar13 + 8;
        piVar11 = (int *)((long)piVar2 + uVar38);
        uVar17 = uVar38;
      }
      uVar13 = uVar17;
      if (uVar23 != 0) {
        uVar40 = uVar17 | uVar23;
        uVar36 = uVar23;
        do {
          uVar13 = uVar17;
          if (*(char *)(lVar32 + uVar17) != (char)*piVar11) break;
          piVar11 = (int *)((long)piVar11 + 1);
          uVar36 = uVar36 - 1;
          uVar17 = uVar17 + 1;
          uVar13 = uVar40;
        } while (uVar36 != 0);
      }
LAB_03cbd348:
      if ((1 < uVar13) && (uVar17 = uVar13 * 0x87 + 0x78f, uVar25 < uVar17)) {
        if (lVar24 != 0) {
          uVar17 = uVar17 - ((0x1ca10U >> (ulong)((uint)lVar24 & 0xe) & 0xe) + 0x27);
        }
        if (uVar25 < uVar17) {
          param_13 = uVar30;
          uVar25 = uVar17;
          in_x9 = uVar13;
          uVar22 = uVar13;
          uStack0000000000000100 = uVar17;
        }
      }
    }
    lVar24 = lVar24 + 1;
  } while (lVar24 != 10);
  uVar13 = (ulong)uVar14;
  uVar30 = uStack00000000000000b0;
  if (in_stack_000000f8 <= uStack00000000000000b0) {
    uVar30 = in_stack_000000f8;
  }
  uVar17 = param_7 - *(uint *)(lVar27 + (ulong)uVar14 * 4);
  if (lVar34 != 0) {
    uVar36 = 0;
    uVar6 = *(ushort *)(lVar20 + uVar13 * 2);
    uVar40 = uVar17;
    lVar24 = lVar34;
    do {
      uVar36 = uVar36 + uVar40;
      if (uVar9 < uVar36) break;
      uVar40 = uVar22 + (param_7 & param_9);
      lVar24 = lVar24 + -1;
      if (uVar40 <= param_9) {
        uVar10 = param_7 - uVar36 & param_9;
        uVar35 = uVar10 + uVar22;
        if ((uVar35 <= param_9) && (*(char *)(param_8 + uVar40) == *(char *)(param_8 + uVar35))) {
          lVar32 = param_8 + uVar10;
          uVar40 = 0;
          piVar11 = piVar2;
          uVar35 = uVar40;
          for (uVar10 = uVar8 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            uVar35 = *(ulong *)(lVar32 + uVar40);
            if (*(ulong *)((long)piVar2 + uVar40) != uVar35) {
              uVar35 = uVar35 ^ *(ulong *)((long)piVar2 + uVar40);
              uVar35 = (uVar35 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar35 & 0x5555555555555555) << 1;
              uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
              uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
              uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
              uVar40 = uVar40 + ((ulong)LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) >> 3);
              goto LAB_03cbd4bc;
            }
            uVar40 = uVar40 + 8;
            piVar11 = (int *)((long)piVar2 + uVar38);
            uVar35 = uVar38;
          }
          uVar40 = uVar35;
          if (uVar23 != 0) {
            uVar10 = uVar35 | uVar23;
            uStack0000000000000040 = uVar23;
            do {
              uVar40 = uVar35;
              if (*(char *)(lVar32 + uVar35) != (char)*piVar11) break;
              uVar35 = uVar35 + 1;
              piVar11 = (int *)((long)piVar11 + 1);
              uStack0000000000000040 = uStack0000000000000040 - 1;
              uVar40 = uVar10;
            } while (uStack0000000000000040 != 0);
          }
LAB_03cbd4bc:
          if ((3 < uVar40) &&
             (uVar35 = (uVar40 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar36) ^ 0x1f) * 0x1e)) + 0x780
             , uVar25 < uVar35)) {
            param_13 = uVar36;
            uVar25 = uVar35;
            in_x9 = uVar40;
            uVar22 = uVar40;
            uStack0000000000000100 = uVar35;
          }
        }
      }
      puVar3 = (ushort *)(lVar27 + 0x40000 + (ulong)uVar6 * 4);
      uVar6 = puVar3[1];
      uVar40 = (ulong)*puVar3;
    } while (lVar24 != 0);
  }
  *(char *)(lVar27 + 0x30000 + (param_7 & 0xffff)) = (char)uVar14;
  puVar1 = (undefined2 *)(lVar27 + 0x40000 + (ulong)uVar29 * 4);
  if (0xfffe < uVar17) {
    uVar17 = 0xffff;
  }
  *puVar1 = (short)uVar17;
  puVar1[1] = *(undefined2 *)(lVar20 + uVar13 * 2);
  *(int *)(lVar27 + uVar13 * 4) = (int)param_7;
  *(ushort *)(lVar20 + uVar13 * 2) = uVar29;
  if (uVar25 == 0x7e4) {
    lVar24 = *(long *)(in_stack_00000078 + 0x48);
    uVar22 = *(ulong *)(lVar24 + 8);
    uVar23 = *(ulong *)(lVar24 + 0x10);
    if (uVar23 < uVar22 >> 7) goto LogoSceneAgent_<>c__<Start>b__2_0;
    lVar41 = *(long *)(in_stack_00000108 + 0x78);
    unaff_w25 = 0;
    lVar32 = 0;
    uVar38 = (ulong)(uVar14 & 0x7ffe);
    uStack00000000000000c0 = 0x7e4;
    do {
      uVar22 = uVar22 + 1;
      *(ulong *)(lVar24 + 8) = uVar22;
      bVar5 = *(byte *)(lVar41 + uVar38);
      uVar9 = (ulong)bVar5;
      if ((uVar9 != 0) && (uVar9 <= uVar8)) {
        lVar37 = *(long *)(in_stack_00000108 + 0x58);
        uVar25 = (ulong)*(ushort *)(*(long *)(in_stack_00000108 + 0x70) + uVar38 * 2);
        pcVar4 = (char *)(*(long *)(lVar37 + 0xa8) +
                         (ulong)*(uint *)(lVar37 + uVar9 * 4 + 0x20) + uVar25 * uVar9);
        if ((ulong)(bVar5 >> 3) == 0) {
          uVar13 = 0;
          pcVar19 = pcVar4;
        }
        else {
          uVar13 = uVar9 & 0xf8;
          lVar16 = 0;
          pcVar19 = pcVar4 + uVar13;
          do {
            if (*(ulong *)(pcVar4 + lVar16) != *(ulong *)((long)piVar2 + lVar16)) {
              uVar13 = *(ulong *)((long)piVar2 + lVar16) ^ *(ulong *)(pcVar4 + lVar16);
              uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
              uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
              uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
              uVar17 = lVar16 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
              goto LAB_03cbd6d8;
            }
            lVar16 = lVar16 + 8;
          } while ((ulong)(bVar5 >> 3) * 8 - lVar16 != 0);
        }
        uVar36 = uVar9 & 7;
        uVar17 = uVar13;
        if ((bVar5 & 7) != 0) {
          uVar40 = uVar13 | uVar36;
          do {
            uVar17 = uVar13;
            if (*(char *)((long)piVar2 + uVar13) != *pcVar19) break;
            pcVar19 = pcVar19 + 1;
            uVar36 = uVar36 - 1;
            uVar13 = uVar13 + 1;
            uVar17 = uVar40;
          } while (uVar36 != 0);
        }
LAB_03cbd6d8:
        if ((((uVar17 != 0) && (uVar9 < uVar17 + *(uint *)(in_stack_00000108 + 100))) &&
            (uVar9 = uVar30 + 1 + uVar25 +
                     ((*(ulong *)(in_stack_00000108 + 0x68) >> (((uVar9 - uVar17) * 3 & 0x1f) << 1)
                      & 0x3f) + (uVar9 - uVar17) * 4 << ((ulong)*(byte *)(lVar37 + uVar9) & 0x3f)),
            uVar9 <= uVar28)) &&
           (uVar25 = (uVar17 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar9) ^ 0x1f) * 0x1e)) + 0x780,
           uStack00000000000000c0 <= uVar25)) {
          unaff_w25 = (uint)bVar5 - (int)uVar17;
          uVar23 = uVar23 + 1;
          *(ulong *)(lVar24 + 0x10) = uVar23;
          param_13 = uVar9;
          in_x9 = uVar17;
          uStack00000000000000c0 = uVar25;
          uStack0000000000000100 = uVar25;
        }
      }
      lVar32 = lVar32 + 1;
      uVar38 = uVar38 + 1;
    } while (lVar32 != 2);
  }
  else {
LogoSceneAgent_<>c__<Start>b__2_0:
    unaff_w25 = 0;
  }
  uVar29 = uVar29 + 1;
  if (uVar39 + 0xaf <= uStack0000000000000100) {
    uStack00000000000000e8 = uStack00000000000000e8 + 1;
    if ((2 < uVar15) ||
       (uVar22 = uVar26 + 5, uVar15 = uVar15 + 1, uVar31 = param_13, uVar21 = in_x9,
       uVar39 = uStack0000000000000100, uVar26 = param_7, iVar43 = unaff_w25,
       in_stack_000000a8 <= uVar22)) goto LAB_03cbd8a0;
    goto LAB_03cbd234;
  }
  uStack00000000000000b0 = uVar26 + in_stack_000000b8;
  param_7 = uVar26;
  param_13 = uVar31;
  in_x9 = uVar21;
  unaff_w25 = iVar43;
LAB_03cbd8a0:
  if (in_stack_000000f8 <= uStack00000000000000b0) {
    uStack00000000000000b0 = in_stack_000000f8;
  }
  *(ushort *)(in_stack_00000078 + 0x30) = uVar29;
  if (uStack00000000000000b0 < param_13) {
LAB_03cbd8c8:
    in_x11 = param_13 + 0xf;
  }
  else {
    if (param_13 == (long)*param_12) {
      in_x11 = 0;
      goto LAB_03cbdabc;
    }
    if (param_13 == (long)param_12[1]) {
      in_x11 = 1;
    }
    else {
      uVar8 = (param_13 + 3) - (long)*param_12;
      if (uVar8 < 7) {
        uVar14 = (uint)uVar8;
        uVar15 = 0x9750468;
      }
      else {
        uVar8 = (param_13 + 3) - (long)param_12[1];
        if (6 < uVar8) {
          if (param_13 == (long)param_12[2]) {
            in_x11 = 2;
          }
          else {
            if (param_13 != (long)param_12[3]) goto LAB_03cbd8c8;
            in_x11 = 3;
          }
          goto LAB_03cbd8cc;
        }
        uVar14 = (uint)uVar8;
        uVar15 = 0xfdb1ace;
      }
      in_x11 = (ulong)(uVar15 >> (ulong)((uVar14 & 7) << 2) & 0xf);
    }
  }
LAB_03cbd8cc:
  if (param_13 <= uStack00000000000000b0) {
    unaff_x19 = 0xffff;
    unaff_x26 = in_stack_00000108;
    if (in_x11 != 0) goto code_r0x03cbd8dc;
    goto LAB_03cbdac0;
  }
LAB_03cbdabc:
  unaff_x19 = 0xffff;
  unaff_x26 = in_stack_00000108;
  goto LAB_03cbdac0;
code_r0x03cbd8dc:
  uVar42 = *(undefined8 *)param_12;
  iVar12 = (int)param_13;
  iVar43 = iVar12 + param_1._0_4_;
  iVar44 = iVar12 + param_1._4_4_;
  *param_12 = iVar12;
  *(ulong *)(param_12 + 4) = CONCAT44(iVar12 + param_2._4_4_,iVar12 + param_2._0_4_);
  *(ulong *)(param_12 + 6) = CONCAT44(iVar12 + param_3._4_4_,iVar12 + param_3._0_4_);
  param_12[3] = param_12[2];
  *(undefined8 *)(param_12 + 1) = uVar42;
  goto code_r0x03cbd904;
}


