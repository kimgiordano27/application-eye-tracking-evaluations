/*
FUNCTION_NAME: AkMIDIPostArray$$get_Item
ENTRY_POINT: 02d009d8
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void AkMIDIPostArray__get_Item
               (ulong param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,ulong *param_6,
               long param_7,ulong param_8,ulong param_9,undefined8 param_10,long param_11,
               long *param_12,undefined8 param_13,long param_14,long param_15,ulong param_16,
               long param_17,long *param_18,long param_19,ulong param_20,int *param_21,
               long *param_22,uint *param_23,ulong param_24,ulong *param_25,long param_26,
               ulong param_27,ulong param_28,ulong param_29,ulong param_30,ulong param_31)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  ulong in_x9;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong in_x10;
  ulong uVar12;
  ulong in_x11;
  ulong in_x12;
  ulong *in_x13;
  ulong in_x14;
  char cVar13;
  ulong in_x15;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long in_x17;
  ulong unaff_x19;
  ulong unaff_x20;
  long lVar17;
  ulong *puVar18;
  long unaff_x21;
  ulong uVar19;
  ulong uVar20;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *unaff_x27;
  ulong unaff_x28;
  uint unaff_w29;
  ulong unaff_x30;
  undefined8 uVar24;
  
  uVar14 = in_x10;
LAB_02d00a4c:
  uVar16 = uVar14;
  if (param_8 != 0) {
    uVar23 = uVar14 | param_8;
    uVar7 = param_8;
    do {
      uVar16 = uVar14;
      unaff_x27 = param_12;
      if (*(char *)(unaff_x21 + uVar14) != (char)*param_6) break;
      param_6 = (ulong *)((long)param_6 + 1);
      uVar7 = uVar7 - 1;
      uVar14 = uVar14 + 1;
      uVar16 = uVar23;
    } while (uVar7 != 0);
  }
  do {
    uVar14 = param_1;
    uVar7 = unaff_x30;
    if ((3 < uVar16) &&
       (uVar23 = (uVar16 * 0x87 - (ulong)(((uint)LZCOUNT((int)unaff_x20) ^ 0x1f) * 0x1e)) + 0x780,
       param_1 < uVar23)) {
      unaff_w29 = (uint)*(byte *)(param_4 + uVar16 + in_x11);
      uVar14 = uVar23;
      in_x9 = unaff_x20;
      uVar7 = uVar16;
    }
    do {
      unaff_x22 = unaff_x22 + 1;
      param_1 = uVar14;
      unaff_x30 = uVar7;
      if (unaff_x22 == 4) {
        *(int *)(in_x17 + param_7 * 4) = (int)param_3;
        uVar16 = unaff_x28;
        if (((uVar14 < param_9 + 0xaf) ||
            (param_31 = param_31 + 1, uVar16 = param_3, param_30 = in_x9, unaff_x19 = uVar7,
            2 < unaff_w23)) ||
           (uVar23 = unaff_x28 + 9, unaff_w23 = unaff_w23 + 1, unaff_x28 = param_3,
           param_27 <= uVar23)) {
          uVar14 = uVar16 + param_17;
          if (param_29 <= uVar16 + param_17) {
            uVar14 = param_29;
          }
          if (uVar14 < param_30) {
LAB_02d00c0c:
            uVar7 = param_30 + 0xf;
LAB_02d00c10:
            if ((param_30 <= uVar14) && (uVar7 != 0)) {
              uVar24 = *(undefined8 *)param_21;
              *param_21 = (int)param_30;
              param_21[3] = param_21[2];
              *(undefined8 *)(param_21 + 1) = uVar24;
            }
          }
          else {
            if (param_30 != (long)*param_21) {
              if (param_30 == (long)param_21[1]) {
                uVar7 = 1;
              }
              else {
                uVar7 = (param_30 + 3) - (long)*param_21;
                if (uVar7 < 7) {
                  uVar6 = (uint)uVar7;
                  uVar4 = 0x9750468;
                }
                else {
                  uVar7 = (param_30 + 3) - (long)param_21[1];
                  if (6 < uVar7) {
                    if (param_30 == (long)param_21[2]) {
                      uVar7 = 2;
                    }
                    else {
                      if (param_30 != (long)param_21[3]) goto LAB_02d00c0c;
                      uVar7 = 3;
                    }
                    goto LAB_02d00c10;
                  }
                  uVar6 = (uint)uVar7;
                  uVar4 = 0xfdb1ace;
                }
                uVar7 = (ulong)(uVar4 >> (ulong)((uVar6 & 7) << 2) & 0xf);
              }
              goto LAB_02d00c10;
            }
            uVar7 = 0;
          }
          uVar4 = (uint)param_31;
          uVar6 = (uint)unaff_x19;
          *param_23 = uVar4;
          param_23[1] = uVar6;
          uVar14 = (ulong)*(uint *)(param_26 + 0x44) + 0x10;
          if (uVar7 < uVar14) {
            uVar11 = 0;
          }
          else {
            uVar12 = (ulong)*(uint *)(param_26 + 0x40);
            uVar23 = ((uVar7 - *(uint *)(param_26 + 0x44)) + (4L << (uVar12 & 0x3f))) - 0x10;
            uVar9 = (ulong)(((uint)LZCOUNT((uint)uVar23) ^ 0x1f) - 1);
            uVar3 = uVar23 >> (uVar9 & 0x3f);
            uVar7 = (ulong)(((uint)uVar23 &
                            (-1 << (ulong)(*(uint *)(param_26 + 0x40) & 0x1f) ^ 0xffffffffU)) +
                            (int)uVar14 +
                            (int)((uVar3 & 1 | (uVar9 - uVar12) * 2) - 2 << (uVar12 & 0x3f)) |
                           (int)(uVar9 - uVar12) << 10);
            uVar11 = (uint)(uVar23 - ((uVar3 & 1 | 2) << (uVar9 & 0x3f)) >> (uVar12 & 0x3f));
          }
          *(short *)((long)param_23 + 0xe) = (short)uVar7;
          param_23[2] = uVar11;
          if (5 < param_31) {
            if (param_31 < 0x82) {
              uVar4 = ((uint)LZCOUNT((int)(param_31 - 2)) ^ 0x1f) - 1;
              uVar4 = (int)(param_31 - 2 >> ((ulong)uVar4 & 0x3f)) + uVar4 * 2 + 2;
            }
            else if (param_31 < 0x842) {
              uVar4 = ((uint)LZCOUNT(uVar4 - 0x42) ^ 0x1f) + 10;
            }
            else if (param_31 >> 1 < 0xc21) {
              uVar4 = 0x15;
            }
            else {
              uVar4 = 0x16;
              if (0x5841 < param_31) {
                uVar4 = 0x17;
              }
            }
          }
          if (uVar6 < 10) {
            uVar6 = uVar6 - 2;
          }
          else if (uVar6 < 0x86) {
            uVar11 = ((uint)LZCOUNT((int)((long)(int)uVar6 - 6U)) ^ 0x1f) - 1;
            uVar6 = (int)((long)(int)uVar6 - 6U >> ((ulong)uVar11 & 0x3f)) + uVar11 * 2 + 4;
          }
          else if (uVar6 < 0x846) {
            uVar6 = ((uint)LZCOUNT(uVar6 - 0x46) ^ 0x1f) + 0xc;
          }
          else {
            uVar6 = 0x17;
          }
          uVar5 = (ushort)uVar6 & 7 | (ushort)((uVar4 & 7) << 3);
          if ((((uVar7 & 0x3ff) == 0) && ((uVar4 & 0xffff) < 8)) && ((uVar6 & 0xffff) < 0x10)) {
            if (7 < (uVar6 & 0xffff)) {
              uVar5 = uVar5 | 0x40;
            }
          }
          else {
            uVar4 = (uVar4 >> 3 & 0x1fff) * 3 + ((uVar6 & 0xfff8) >> 3);
            uVar5 = (((ushort)(0x520d40 >> (ulong)((uVar4 & 0xf) << 1)) & 0xc0) +
                     (short)uVar4 * 0x40 | uVar5) + 0x40;
          }
          *(ushort *)(param_23 + 3) = uVar5;
          uVar14 = uVar16 + unaff_x19;
          uVar7 = uVar14;
          if (param_20 <= uVar14) {
            uVar7 = param_20;
          }
          *param_18 = *param_18 + param_31;
          uVar23 = uVar16 + 2;
          if (param_30 < unaff_x19 >> 2) {
            uVar9 = uVar14 + param_30 * -4;
            uVar12 = uVar23;
            if (uVar23 <= uVar9) {
              uVar12 = uVar9;
            }
            uVar23 = uVar7;
            if (uVar12 <= uVar7) {
              uVar23 = uVar12;
            }
          }
          uVar16 = param_19 + unaff_x19 * 2 + uVar16;
          param_23 = param_23 + 4;
          if (uVar23 < uVar7) {
            do {
              *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar23 & param_5)) *
                                                        0x35a7bd1e35a7bd00) >> 0x2c) +
                                         ((uint)uVar23 & 0x18)) & 0xfffff) * 4) = (uint)uVar23;
              uVar23 = uVar23 + 1;
            } while (uVar7 != uVar23);
            param_31 = 0;
          }
          else {
            param_31 = 0;
          }
LAB_02d00f7c:
          unaff_x28 = uVar14;
          param_2 = param_27 - unaff_x28;
          if (param_27 <= unaff_x28 + 8) {
            *unaff_x27 = param_2 + param_31;
            *param_22 = *param_22 + ((long)param_23 - param_14 >> 4);
            return;
          }
          uVar12 = unaff_x28 & param_5;
          param_30 = (ulong)*param_21;
          puVar8 = (ulong *)(param_4 + uVar12);
          uVar14 = *puVar8;
          cVar13 = (char)*puVar8;
          uVar23 = unaff_x28;
          if (param_29 <= unaff_x28) {
            uVar23 = param_29;
          }
          uVar9 = param_2 >> 3;
          if (unaff_x28 - param_30 < unaff_x28) {
            uVar7 = param_24 & unaff_x28 - param_30;
            puVar18 = (ulong *)(param_4 + uVar7);
            if (cVar13 != (char)*puVar18) goto LAB_02d006fc;
            if (uVar9 == 0) {
              uVar3 = 0;
              puVar10 = puVar8;
LAB_02d00fcc:
              uVar14 = param_2 & 7;
              uVar7 = uVar3;
              if (uVar14 != 0) {
                uVar19 = uVar3 | uVar14;
                do {
                  uVar7 = uVar3;
                  if (*(char *)((long)puVar18 + uVar3) != (char)*puVar10) break;
                  puVar10 = (ulong *)((long)puVar10 + 1);
                  uVar14 = uVar14 - 1;
                  uVar3 = uVar3 + 1;
                  uVar7 = uVar19;
                } while (uVar14 != 0);
              }
            }
            else {
              uVar19 = *puVar18;
              if (uVar14 == uVar19) {
                uVar3 = param_2 & 0xfffffffffffffff8;
                lVar17 = 0;
                uVar15 = uVar9;
                do {
                  uVar15 = uVar15 - 1;
                  puVar10 = (ulong *)((long)puVar8 + uVar3);
                  if (uVar15 == 0) goto LAB_02d00fcc;
                  uVar14 = *(ulong *)(param_11 + uVar12 + lVar17);
                  uVar19 = *(ulong *)(param_11 + uVar7 + lVar17);
                  lVar17 = lVar17 + 8;
                } while (uVar14 == uVar19);
              }
              else {
                lVar17 = 0;
              }
              uVar14 = ((uVar19 ^ uVar14) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                       ((uVar19 ^ uVar14) & 0x5555555555555555) << 1;
              uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
              uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar7 = lVar17 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3);
            }
            if ((uVar7 < 4) || (uVar14 = uVar7 * 0x87 + 0x78f, uVar14 < 0x7e5)) goto LAB_02d006fc;
            cVar13 = *(char *)(param_4 + uVar7 + uVar12);
          }
          else {
LAB_02d006fc:
            param_30 = 0;
            uVar7 = 0;
            uVar14 = 0x7e4;
          }
          lVar17 = 0;
          uVar3 = param_2 & 7;
          do {
            uVar15 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar17 * 8) * 4);
            uVar19 = uVar15 & param_5;
            uVar15 = unaff_x28 - uVar15;
            if (cVar13 == *(char *)(param_4 + uVar19 + uVar7) && uVar15 - 1 < uVar23) {
              lVar1 = param_4 + uVar19;
              uVar19 = 0;
              puVar18 = puVar8;
              uVar21 = uVar19;
              for (uVar22 = uVar9; uVar22 != 0; uVar22 = uVar22 - 1) {
                uVar21 = *(ulong *)(lVar1 + uVar19);
                if (*(ulong *)((long)puVar8 + uVar19) != uVar21) {
                  uVar21 = uVar21 ^ *(ulong *)((long)puVar8 + uVar19);
                  uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                  uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                  uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                  uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10
                  ;
                  uVar19 = uVar19 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
                  goto LAB_02d007b0;
                }
                uVar19 = uVar19 + 8;
                puVar18 = (ulong *)((long)puVar8 + (param_2 & 0xfffffffffffffff8));
                uVar21 = param_2 & 0xfffffffffffffff8;
              }
              uVar19 = uVar21;
              if (uVar3 != 0) {
                uVar20 = uVar21 | uVar3;
                uVar22 = uVar3;
                do {
                  uVar19 = uVar21;
                  unaff_x27 = param_12;
                  if (*(char *)(lVar1 + uVar21) != (char)*puVar18) break;
                  puVar18 = (ulong *)((long)puVar18 + 1);
                  uVar22 = uVar22 - 1;
                  uVar21 = uVar21 + 1;
                  uVar19 = uVar20;
                } while (uVar22 != 0);
              }
LAB_02d007b0:
              if ((3 < uVar19) &&
                 (uVar21 = (uVar19 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar15) ^ 0x1f) * 0x1e)) +
                           0x780, uVar14 < uVar21)) {
                cVar13 = *(char *)(param_4 + uVar19 + uVar12);
                uVar14 = uVar21;
                uVar7 = uVar19;
                param_30 = uVar15;
              }
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 != 4);
          *(int *)(in_x17 + *(long *)(unaff_x24 + (unaff_x28 >> 3 & 3) * 8) * 4) = (int)unaff_x28;
          if (uVar14 < 0x7e5) {
            uVar14 = unaff_x28 + 1;
            param_31 = param_31 + 1;
            if (uVar16 < uVar14) {
              if (uVar16 + param_15 < uVar14) {
                uVar7 = unaff_x28 + 0x11;
                if (param_16 <= unaff_x28 + 0x11) {
                  uVar7 = param_16;
                }
                for (; uVar14 < uVar7; uVar14 = uVar14 + 4) {
                  param_31 = param_31 + 4;
                  *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar14 & param_5))
                                                            * 0x35a7bd1e35a7bd00) >> 0x2c) +
                                             ((uint)uVar14 & 0x18)) & 0xfffff) * 4) = (uint)uVar14;
                }
              }
              else {
                uVar7 = unaff_x28 + 9;
                if (param_16 <= unaff_x28 + 9) {
                  uVar7 = param_16;
                }
                for (; uVar14 < uVar7; uVar14 = uVar14 + 2) {
                  param_31 = param_31 + 2;
                  *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar14 & param_5))
                                                            * 0x35a7bd1e35a7bd00) >> 0x2c) +
                                             ((uint)uVar14 & 0x18)) & 0xfffff) * 4) = (uint)uVar14;
                }
              }
            }
            goto LAB_02d00f7c;
          }
          param_28 = (ulong)*param_21;
          unaff_w23 = 0;
          in_x15 = param_2;
        }
        in_x15 = in_x15 - 1;
        param_2 = param_2 - 1;
        unaff_x30 = uVar7 - 1;
        if (param_2 <= uVar7 - 1) {
          unaff_x30 = param_2;
        }
        param_3 = unaff_x28 + 1;
        in_x11 = param_3 & param_5;
        if (4 < *(int *)(param_26 + 4)) {
          unaff_x30 = 0;
        }
        in_x13 = (ulong *)(param_4 + in_x11);
        in_x14 = param_29;
        if (param_3 < param_29) {
          in_x14 = unaff_x28 + 1;
        }
        uVar16 = *in_x13;
        bVar2 = *(byte *)(param_4 + unaff_x30 + in_x11);
        in_x12 = param_2 >> 3;
        if ((param_3 - param_28 < param_3) &&
           (uVar23 = param_24 & param_3 - param_28, bVar2 == *(byte *)(param_4 + uVar23 + unaff_x30)
           )) {
          if (in_x12 == 0) {
            uVar12 = 0;
            puVar8 = in_x13;
LAB_02d00ae4:
            uVar16 = param_2 & 7;
            uVar9 = uVar12;
            if (uVar16 != 0) {
              uVar3 = uVar12 | uVar16;
              do {
                uVar9 = uVar12;
                if (*(char *)((long)(param_4 + uVar23) + uVar12) != (char)*puVar8) break;
                puVar8 = (ulong *)((long)puVar8 + 1);
                uVar16 = uVar16 - 1;
                uVar12 = uVar12 + 1;
                uVar9 = uVar3;
              } while (uVar16 != 0);
            }
          }
          else {
            uVar9 = *(ulong *)(param_4 + uVar23);
            if (uVar16 == uVar9) {
              uVar3 = in_x15 >> 3;
              uVar12 = param_2 & 0xfffffffffffffff8;
              lVar17 = 0;
              do {
                uVar3 = uVar3 - 1;
                puVar8 = (ulong *)((long)in_x13 + uVar12);
                if (uVar3 == 0) goto LAB_02d00ae4;
                uVar16 = *(ulong *)(param_11 + in_x11 + lVar17);
                uVar9 = *(ulong *)(param_11 + uVar23 + lVar17);
                lVar17 = lVar17 + 8;
              } while (uVar16 == uVar9);
            }
            else {
              lVar17 = 0;
            }
            uVar16 = ((uVar9 ^ uVar16) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                     ((uVar9 ^ uVar16) & 0x5555555555555555) << 1;
            uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
            uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
            uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
            uVar9 = lVar17 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
          }
          if ((uVar9 < 4) || (param_1 = uVar9 * 0x87 + 0x78f, param_1 < 0x7e5)) goto LAB_02d00938;
          bVar2 = *(byte *)(param_4 + uVar9 + in_x11);
          in_x9 = param_28;
          unaff_x30 = uVar9;
        }
        else {
LAB_02d00938:
          in_x9 = 0;
          param_1 = 0x7e4;
        }
        unaff_w29 = (uint)bVar2;
        param_7 = *(long *)(unaff_x24 + (param_3 >> 3 & 3) * 8);
        in_x10 = param_2 & 0xfffffffffffffff8;
        unaff_x22 = 0;
        param_25 = (ulong *)((long)in_x13 + in_x10);
        param_8 = param_2 & 7;
        param_9 = uVar14;
        unaff_x19 = uVar7;
      }
      uVar14 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + unaff_x22 * 8) * 4);
      uVar16 = uVar14 & param_5;
      unaff_x20 = param_3 - uVar14;
      uVar14 = param_1;
      uVar7 = unaff_x30;
    } while (unaff_w29 != *(byte *)(param_4 + uVar16 + unaff_x30) || in_x14 <= unaff_x20 - 1);
    unaff_x21 = param_4 + uVar16;
    if (in_x12 == 0) {
      param_6 = in_x13;
      uVar14 = 0;
      goto LAB_02d00a4c;
    }
    lVar17 = 0;
    uVar16 = in_x12;
    while( true ) {
      if (*(ulong *)((long)in_x13 + lVar17) != *(ulong *)(unaff_x21 + lVar17)) break;
      uVar16 = uVar16 - 1;
      lVar17 = lVar17 + 8;
      param_6 = param_25;
      uVar14 = in_x10;
      if (uVar16 == 0) goto LAB_02d00a4c;
    }
    uVar14 = *(ulong *)(unaff_x21 + lVar17) ^ *(ulong *)((long)in_x13 + lVar17);
    uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar16 = lVar17 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3);
  } while( true );
}


