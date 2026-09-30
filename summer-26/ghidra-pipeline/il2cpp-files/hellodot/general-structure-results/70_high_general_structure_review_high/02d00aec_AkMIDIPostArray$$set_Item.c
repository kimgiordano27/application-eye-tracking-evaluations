/*
FUNCTION_NAME: AkMIDIPostArray$$set_Item
ENTRY_POINT: 02d00aec
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


void AkMIDIPostArray__set_Item
               (ulong *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong in_x7;
  ushort uVar9;
  uint uVar10;
  ulong *in_x9;
  ulong uVar11;
  ulong *puVar12;
  uint uVar13;
  ulong in_x10;
  ulong uVar14;
  ulong in_x11;
  ulong in_x12;
  ulong *in_x13;
  ulong in_x14;
  char cVar15;
  ulong in_x15;
  ulong uVar16;
  ulong uVar17;
  ulong in_x16;
  long in_x17;
  ulong unaff_x19;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint unaff_w23;
  long unaff_x24;
  ulong uVar22;
  long *unaff_x27;
  ulong unaff_x28;
  uint unaff_w29;
  ulong unaff_x30;
  undefined8 uVar23;
  long in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000020;
  long in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000048;
  ulong in_stack_00000050;
  int *in_stack_00000058;
  long *in_stack_00000060;
  uint *in_stack_00000068;
  ulong in_stack_00000070;
  long in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  
code_r0x02d00aec:
  uVar6 = in_x10 | in_x16;
  do {
    uVar7 = in_x10;
    if (*(char *)((long)param_1 + in_x10) != (char)*in_x9) break;
    in_x9 = (ulong *)((long)in_x9 + 1);
    in_x16 = in_x16 - 1;
    in_x10 = in_x10 + 1;
    uVar7 = uVar6;
  } while (in_x16 != 0);
LAB_02d00908:
  if (uVar7 < 4) goto LAB_02d00938;
  uVar6 = uVar7 * 0x87 + 0x78f;
  if (uVar6 < 0x7e5) goto LAB_02d00938;
  unaff_w29 = (uint)*(byte *)(param_4 + uVar7 + in_x11);
  uVar14 = in_x7;
  in_x7 = uVar6;
  uVar6 = in_stack_00000090;
  uVar16 = unaff_x19;
  unaff_x19 = uVar7;
  do {
    lVar21 = 0;
    uVar7 = param_2 & 7;
    do {
      uVar3 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar21 * 8) * 4);
      uVar17 = uVar3 & param_5;
      uVar3 = param_3 - uVar3;
      if (unaff_w29 == *(byte *)(param_4 + uVar17 + unaff_x19) && uVar3 - 1 < in_x14) {
        lVar1 = param_4 + uVar17;
        if (in_x12 == 0) {
          puVar5 = in_x13;
          uVar17 = 0;
        }
        else {
          lVar4 = 0;
          uVar11 = in_x12;
          do {
            uVar17 = *(ulong *)(lVar1 + lVar4);
            if (*(ulong *)((long)in_x13 + lVar4) != uVar17) {
              uVar17 = uVar17 ^ *(ulong *)((long)in_x13 + lVar4);
              uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar11 = lVar4 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
              goto LAB_02d009f0;
            }
            uVar11 = uVar11 - 1;
            lVar4 = lVar4 + 8;
            puVar5 = (ulong *)((long)in_x13 + (param_2 & 0xfffffffffffffff8));
            uVar17 = param_2 & 0xfffffffffffffff8;
          } while (uVar11 != 0);
        }
        uVar11 = uVar17;
        if (uVar7 != 0) {
          uVar22 = uVar17 | uVar7;
          uVar19 = uVar7;
          do {
            uVar11 = uVar17;
            unaff_x27 = in_stack_00000010;
            if (*(char *)(lVar1 + uVar17) != (char)*puVar5) break;
            puVar5 = (ulong *)((long)puVar5 + 1);
            uVar19 = uVar19 - 1;
            uVar17 = uVar17 + 1;
            uVar11 = uVar22;
          } while (uVar19 != 0);
        }
LAB_02d009f0:
        if ((3 < uVar11) &&
           (uVar17 = (uVar11 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar3) ^ 0x1f) * 0x1e)) + 0x780,
           in_x7 < uVar17)) {
          unaff_w29 = (uint)*(byte *)(param_4 + uVar11 + in_x11);
          in_x7 = uVar17;
          uVar6 = uVar3;
          unaff_x19 = uVar11;
        }
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != 4);
    *(int *)(in_x17 + *(long *)(unaff_x24 + (param_3 >> 3 & 3) * 8) * 4) = (int)param_3;
    uVar7 = unaff_x28;
    if (((in_x7 < uVar14 + 0xaf) ||
        (in_stack_000000a8 = in_stack_000000a8 + 1, uVar7 = param_3, in_stack_000000a0 = uVar6,
        uVar16 = unaff_x19, 2 < unaff_w23)) ||
       (uVar6 = unaff_x28 + 9, unaff_w23 = unaff_w23 + 1, unaff_x28 = param_3,
       in_stack_00000088 <= uVar6)) {
      uVar6 = uVar7 + in_stack_00000038;
      if (in_stack_00000098 <= uVar7 + in_stack_00000038) {
        uVar6 = in_stack_00000098;
      }
      if (uVar6 < in_stack_000000a0) {
LAB_02d00c0c:
        uVar14 = in_stack_000000a0 + 0xf;
LAB_02d00c10:
        if ((in_stack_000000a0 <= uVar6) && (uVar14 != 0)) {
          uVar23 = *(undefined8 *)in_stack_00000058;
          *in_stack_00000058 = (int)in_stack_000000a0;
          in_stack_00000058[3] = in_stack_00000058[2];
          *(undefined8 *)(in_stack_00000058 + 1) = uVar23;
        }
      }
      else {
        if (in_stack_000000a0 != (long)*in_stack_00000058) {
          if (in_stack_000000a0 == (long)in_stack_00000058[1]) {
            uVar14 = 1;
          }
          else {
            uVar14 = (in_stack_000000a0 + 3) - (long)*in_stack_00000058;
            if (uVar14 < 7) {
              uVar10 = (uint)uVar14;
              uVar8 = 0x9750468;
            }
            else {
              uVar14 = (in_stack_000000a0 + 3) - (long)in_stack_00000058[1];
              if (6 < uVar14) {
                if (in_stack_000000a0 == (long)in_stack_00000058[2]) {
                  uVar14 = 2;
                }
                else {
                  if (in_stack_000000a0 != (long)in_stack_00000058[3]) goto LAB_02d00c0c;
                  uVar14 = 3;
                }
                goto LAB_02d00c10;
              }
              uVar10 = (uint)uVar14;
              uVar8 = 0xfdb1ace;
            }
            uVar14 = (ulong)(uVar8 >> (ulong)((uVar10 & 7) << 2) & 0xf);
          }
          goto LAB_02d00c10;
        }
        uVar14 = 0;
      }
      uVar8 = (uint)in_stack_000000a8;
      uVar10 = (uint)uVar16;
      *in_stack_00000068 = uVar8;
      in_stack_00000068[1] = uVar10;
      uVar6 = (ulong)*(uint *)(in_stack_00000080 + 0x44) + 0x10;
      if (uVar14 < uVar6) {
        uVar13 = 0;
      }
      else {
        uVar17 = (ulong)*(uint *)(in_stack_00000080 + 0x40);
        uVar3 = ((uVar14 - *(uint *)(in_stack_00000080 + 0x44)) + (4L << (uVar17 & 0x3f))) - 0x10;
        uVar11 = (ulong)(((uint)LZCOUNT((uint)uVar3) ^ 0x1f) - 1);
        uVar19 = uVar3 >> (uVar11 & 0x3f);
        uVar14 = (ulong)(((uint)uVar3 &
                         (-1 << (ulong)(*(uint *)(in_stack_00000080 + 0x40) & 0x1f) ^ 0xffffffffU))
                         + (int)uVar6 +
                         (int)((uVar19 & 1 | (uVar11 - uVar17) * 2) - 2 << (uVar17 & 0x3f)) |
                        (int)(uVar11 - uVar17) << 10);
        uVar13 = (uint)(uVar3 - ((uVar19 & 1 | 2) << (uVar11 & 0x3f)) >> (uVar17 & 0x3f));
      }
      *(short *)((long)in_stack_00000068 + 0xe) = (short)uVar14;
      in_stack_00000068[2] = uVar13;
      if (5 < in_stack_000000a8) {
        if (in_stack_000000a8 < 0x82) {
          uVar8 = ((uint)LZCOUNT((int)(in_stack_000000a8 - 2)) ^ 0x1f) - 1;
          uVar8 = (int)(in_stack_000000a8 - 2 >> ((ulong)uVar8 & 0x3f)) + uVar8 * 2 + 2;
        }
        else if (in_stack_000000a8 < 0x842) {
          uVar8 = ((uint)LZCOUNT(uVar8 - 0x42) ^ 0x1f) + 10;
        }
        else if (in_stack_000000a8 >> 1 < 0xc21) {
          uVar8 = 0x15;
        }
        else {
          uVar8 = 0x16;
          if (0x5841 < in_stack_000000a8) {
            uVar8 = 0x17;
          }
        }
      }
      if (uVar10 < 10) {
        uVar10 = uVar10 - 2;
      }
      else if (uVar10 < 0x86) {
        uVar13 = ((uint)LZCOUNT((int)((long)(int)uVar10 - 6U)) ^ 0x1f) - 1;
        uVar10 = (int)((long)(int)uVar10 - 6U >> ((ulong)uVar13 & 0x3f)) + uVar13 * 2 + 4;
      }
      else if (uVar10 < 0x846) {
        uVar10 = ((uint)LZCOUNT(uVar10 - 0x46) ^ 0x1f) + 0xc;
      }
      else {
        uVar10 = 0x17;
      }
      uVar9 = (ushort)uVar10 & 7 | (ushort)((uVar8 & 7) << 3);
      if ((((uVar14 & 0x3ff) == 0) && ((uVar8 & 0xffff) < 8)) && ((uVar10 & 0xffff) < 0x10)) {
        if (7 < (uVar10 & 0xffff)) {
          uVar9 = uVar9 | 0x40;
        }
      }
      else {
        uVar8 = (uVar8 >> 3 & 0x1fff) * 3 + ((uVar10 & 0xfff8) >> 3);
        uVar9 = (((ushort)(0x520d40 >> (ulong)((uVar8 & 0xf) << 1)) & 0xc0) + (short)uVar8 * 0x40 |
                uVar9) + 0x40;
      }
      *(ushort *)(in_stack_00000068 + 3) = uVar9;
      uVar6 = uVar7 + uVar16;
      uVar14 = uVar6;
      if (in_stack_00000050 <= uVar6) {
        uVar14 = in_stack_00000050;
      }
      *in_stack_00000040 = *in_stack_00000040 + in_stack_000000a8;
      uVar3 = uVar7 + 2;
      if (in_stack_000000a0 < uVar16 >> 2) {
        uVar11 = uVar6 + in_stack_000000a0 * -4;
        uVar17 = uVar3;
        if (uVar3 <= uVar11) {
          uVar17 = uVar11;
        }
        uVar3 = uVar14;
        if (uVar17 <= uVar14) {
          uVar3 = uVar17;
        }
      }
      uVar7 = in_stack_00000048 + uVar16 * 2 + uVar7;
      in_stack_00000068 = in_stack_00000068 + 4;
      if (uVar3 < uVar14) {
        do {
          *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar3 & param_5)) *
                                                    0x35a7bd1e35a7bd00) >> 0x2c) +
                                     ((uint)uVar3 & 0x18)) & 0xfffff) * 4) = (uint)uVar3;
          uVar3 = uVar3 + 1;
        } while (uVar14 != uVar3);
        in_stack_000000a8 = 0;
      }
      else {
        in_stack_000000a8 = 0;
      }
LAB_02d00f7c:
      unaff_x28 = uVar6;
      param_2 = in_stack_00000088 - unaff_x28;
      if (in_stack_00000088 <= unaff_x28 + 8) {
        *unaff_x27 = param_2 + in_stack_000000a8;
        *in_stack_00000060 = *in_stack_00000060 + ((long)in_stack_00000068 - in_stack_00000020 >> 4)
        ;
        return;
      }
      uVar14 = unaff_x28 & param_5;
      in_stack_000000a0 = (ulong)*in_stack_00000058;
      puVar5 = (ulong *)(param_4 + uVar14);
      uVar16 = *puVar5;
      cVar15 = (char)*puVar5;
      uVar6 = unaff_x28;
      if (in_stack_00000098 <= unaff_x28) {
        uVar6 = in_stack_00000098;
      }
      uVar3 = param_2 >> 3;
      if (unaff_x28 - in_stack_000000a0 < unaff_x28) {
        uVar17 = in_stack_00000070 & unaff_x28 - in_stack_000000a0;
        puVar18 = (ulong *)(param_4 + uVar17);
        if (cVar15 != (char)*puVar18) goto LAB_02d006fc;
        if (uVar3 == 0) {
          uVar11 = 0;
          puVar12 = puVar5;
LAB_02d00fcc:
          uVar16 = param_2 & 7;
          unaff_x19 = uVar11;
          if (uVar16 != 0) {
            uVar17 = uVar11 | uVar16;
            do {
              unaff_x19 = uVar11;
              if (*(char *)((long)puVar18 + uVar11) != (char)*puVar12) break;
              puVar12 = (ulong *)((long)puVar12 + 1);
              uVar16 = uVar16 - 1;
              uVar11 = uVar11 + 1;
              unaff_x19 = uVar17;
            } while (uVar16 != 0);
          }
        }
        else {
          uVar19 = *puVar18;
          if (uVar16 == uVar19) {
            uVar11 = param_2 & 0xfffffffffffffff8;
            lVar21 = 0;
            uVar22 = uVar3;
            do {
              uVar22 = uVar22 - 1;
              puVar12 = (ulong *)((long)puVar5 + uVar11);
              if (uVar22 == 0) goto LAB_02d00fcc;
              uVar16 = *(ulong *)(in_stack_00000008 + uVar14 + lVar21);
              uVar19 = *(ulong *)(in_stack_00000008 + uVar17 + lVar21);
              lVar21 = lVar21 + 8;
            } while (uVar16 == uVar19);
          }
          else {
            lVar21 = 0;
          }
          uVar16 = ((uVar19 ^ uVar16) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((uVar19 ^ uVar16) & 0x5555555555555555) << 1;
          uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
          uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
          uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
          unaff_x19 = lVar21 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
        }
        if ((unaff_x19 < 4) || (in_x7 = unaff_x19 * 0x87 + 0x78f, in_x7 < 0x7e5)) goto LAB_02d006fc;
        cVar15 = *(char *)(param_4 + unaff_x19 + uVar14);
      }
      else {
LAB_02d006fc:
        in_stack_000000a0 = 0;
        unaff_x19 = 0;
        in_x7 = 0x7e4;
      }
      lVar21 = 0;
      uVar16 = param_2 & 7;
      do {
        uVar11 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar21 * 8) * 4);
        uVar17 = uVar11 & param_5;
        uVar11 = unaff_x28 - uVar11;
        if (cVar15 == *(char *)(param_4 + uVar17 + unaff_x19) && uVar11 - 1 < uVar6) {
          lVar1 = param_4 + uVar17;
          uVar17 = 0;
          puVar18 = puVar5;
          uVar19 = uVar17;
          for (uVar22 = uVar3; uVar22 != 0; uVar22 = uVar22 - 1) {
            uVar19 = *(ulong *)(lVar1 + uVar17);
            if (*(ulong *)((long)puVar5 + uVar17) != uVar19) {
              uVar19 = uVar19 ^ *(ulong *)((long)puVar5 + uVar17);
              uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar17 = uVar17 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
              goto LAB_02d007b0;
            }
            uVar17 = uVar17 + 8;
            puVar18 = (ulong *)((long)puVar5 + (param_2 & 0xfffffffffffffff8));
            uVar19 = param_2 & 0xfffffffffffffff8;
          }
          uVar17 = uVar19;
          if (uVar16 != 0) {
            uVar20 = uVar19 | uVar16;
            uVar22 = uVar16;
            do {
              uVar17 = uVar19;
              unaff_x27 = in_stack_00000010;
              if (*(char *)(lVar1 + uVar19) != (char)*puVar18) break;
              puVar18 = (ulong *)((long)puVar18 + 1);
              uVar22 = uVar22 - 1;
              uVar19 = uVar19 + 1;
              uVar17 = uVar20;
            } while (uVar22 != 0);
          }
LAB_02d007b0:
          if ((3 < uVar17) &&
             (uVar19 = (uVar17 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar11) ^ 0x1f) * 0x1e)) + 0x780
             , in_x7 < uVar19)) {
            cVar15 = *(char *)(param_4 + uVar17 + uVar14);
            in_x7 = uVar19;
            unaff_x19 = uVar17;
            in_stack_000000a0 = uVar11;
          }
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 != 4);
      *(int *)(in_x17 + *(long *)(unaff_x24 + (unaff_x28 >> 3 & 3) * 8) * 4) = (int)unaff_x28;
      if (in_x7 < 0x7e5) {
        uVar6 = unaff_x28 + 1;
        in_stack_000000a8 = in_stack_000000a8 + 1;
        if (uVar7 < uVar6) {
          if (uVar7 + in_stack_00000028 < uVar6) {
            uVar14 = unaff_x28 + 0x11;
            if (in_stack_00000030 <= unaff_x28 + 0x11) {
              uVar14 = in_stack_00000030;
            }
            for (; uVar6 < uVar14; uVar6 = uVar6 + 4) {
              in_stack_000000a8 = in_stack_000000a8 + 4;
              *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar6 & param_5)) *
                                                        0x35a7bd1e35a7bd00) >> 0x2c) +
                                         ((uint)uVar6 & 0x18)) & 0xfffff) * 4) = (uint)uVar6;
            }
          }
          else {
            uVar14 = unaff_x28 + 9;
            if (in_stack_00000030 <= unaff_x28 + 9) {
              uVar14 = in_stack_00000030;
            }
            for (; uVar6 < uVar14; uVar6 = uVar6 + 2) {
              in_stack_000000a8 = in_stack_000000a8 + 2;
              *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar6 & param_5)) *
                                                        0x35a7bd1e35a7bd00) >> 0x2c) +
                                         ((uint)uVar6 & 0x18)) & 0xfffff) * 4) = (uint)uVar6;
            }
          }
        }
        goto LAB_02d00f7c;
      }
      in_stack_00000090 = (ulong)*in_stack_00000058;
      unaff_w23 = 0;
      in_x15 = param_2;
    }
    in_x15 = in_x15 - 1;
    param_2 = param_2 - 1;
    unaff_x30 = unaff_x19 - 1;
    if (param_2 <= unaff_x19 - 1) {
      unaff_x30 = param_2;
    }
    param_3 = unaff_x28 + 1;
    in_x11 = param_3 & param_5;
    if (4 < *(int *)(in_stack_00000080 + 4)) {
      unaff_x30 = 0;
    }
    in_x13 = (ulong *)(param_4 + in_x11);
    in_x14 = in_stack_00000098;
    if (param_3 < in_stack_00000098) {
      in_x14 = unaff_x28 + 1;
    }
    uVar6 = *in_x13;
    bVar2 = *(byte *)(param_4 + unaff_x30 + in_x11);
    unaff_w29 = (uint)bVar2;
    in_x12 = param_2 >> 3;
    if ((param_3 - in_stack_00000090 < param_3) &&
       (uVar7 = in_stack_00000070 & param_3 - in_stack_00000090,
       bVar2 == *(byte *)(param_4 + uVar7 + unaff_x30))) break;
LAB_02d00938:
    uVar6 = 0;
    uVar14 = in_x7;
    in_x7 = 0x7e4;
    uVar16 = unaff_x19;
    unaff_x19 = unaff_x30;
  } while( true );
  param_1 = (ulong *)(param_4 + uVar7);
  if (in_x12 != 0) {
    uVar14 = *param_1;
    if (uVar6 == uVar14) {
      uVar16 = in_x15 >> 3;
      in_x10 = param_2 & 0xfffffffffffffff8;
      lVar21 = 0;
      do {
        uVar16 = uVar16 - 1;
        in_x9 = (ulong *)((long)in_x13 + in_x10);
        if (uVar16 == 0) goto LAB_02d00ae4;
        uVar6 = *(ulong *)(in_stack_00000008 + in_x11 + lVar21);
        uVar14 = *(ulong *)(in_stack_00000008 + uVar7 + lVar21);
        lVar21 = lVar21 + 8;
      } while (uVar6 == uVar14);
    }
    else {
      lVar21 = 0;
    }
    uVar6 = ((uVar14 ^ uVar6) & 0xaaaaaaaaaaaaaaaa) >> 1 |
            ((uVar14 ^ uVar6) & 0x5555555555555555) << 1;
    uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar7 = lVar21 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3);
    goto LAB_02d00908;
  }
  in_x10 = 0;
  in_x9 = in_x13;
LAB_02d00ae4:
  in_x16 = param_2 & 7;
  uVar7 = in_x10;
  if (in_x16 != 0) goto code_r0x02d00aec;
  goto LAB_02d00908;
}


