/*
FUNCTION_NAME: AkMIDIPostArray$$.ctor
ENTRY_POINT: 02d00924
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


void AkMIDIPostArray___ctor(ulong param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong in_x7;
  ushort uVar7;
  uint uVar8;
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
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint unaff_w23;
  long unaff_x24;
  ulong uVar21;
  long *unaff_x27;
  ulong unaff_x28;
  undefined8 uVar22;
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
  
code_r0x02d00924:
  cVar13 = *(char *)(param_4 + in_x10 + in_x11);
  uVar15 = in_x7;
  uVar12 = in_stack_00000090;
  uVar14 = unaff_x19;
  uVar2 = in_x10;
  do {
    lVar20 = 0;
    uVar5 = param_2 & 7;
    in_x7 = param_1;
    unaff_x19 = uVar2;
    do {
      uVar2 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar20 * 8) * 4);
      uVar16 = uVar2 & param_5;
      uVar2 = param_3 - uVar2;
      if (cVar13 == *(char *)(param_4 + uVar16 + unaff_x19) && uVar2 - 1 < in_x14) {
        lVar1 = param_4 + uVar16;
        if (in_x12 == 0) {
          puVar4 = in_x13;
          uVar16 = 0;
        }
        else {
          lVar3 = 0;
          uVar9 = in_x12;
          do {
            uVar16 = *(ulong *)(lVar1 + lVar3);
            if (*(ulong *)((long)in_x13 + lVar3) != uVar16) {
              uVar16 = uVar16 ^ *(ulong *)((long)in_x13 + lVar3);
              uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar9 = lVar3 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3);
              goto LAB_02d009f0;
            }
            uVar9 = uVar9 - 1;
            lVar3 = lVar3 + 8;
            puVar4 = (ulong *)((long)in_x13 + (param_2 & 0xfffffffffffffff8));
            uVar16 = param_2 & 0xfffffffffffffff8;
          } while (uVar9 != 0);
        }
        uVar9 = uVar16;
        if (uVar5 != 0) {
          uVar21 = uVar16 | uVar5;
          uVar18 = uVar5;
          do {
            uVar9 = uVar16;
            unaff_x27 = in_stack_00000010;
            if (*(char *)(lVar1 + uVar16) != (char)*puVar4) break;
            puVar4 = (ulong *)((long)puVar4 + 1);
            uVar18 = uVar18 - 1;
            uVar16 = uVar16 + 1;
            uVar9 = uVar21;
          } while (uVar18 != 0);
        }
LAB_02d009f0:
        if ((3 < uVar9) &&
           (uVar16 = (uVar9 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar2) ^ 0x1f) * 0x1e)) + 0x780,
           in_x7 < uVar16)) {
          cVar13 = *(char *)(param_4 + uVar9 + in_x11);
          in_x7 = uVar16;
          uVar12 = uVar2;
          unaff_x19 = uVar9;
        }
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != 4);
    *(int *)(in_x17 + *(long *)(unaff_x24 + (param_3 >> 3 & 3) * 8) * 4) = (int)param_3;
    uVar2 = unaff_x28;
    if (((in_x7 < uVar15 + 0xaf) ||
        (in_stack_000000a8 = in_stack_000000a8 + 1, uVar2 = param_3, in_stack_000000a0 = uVar12,
        uVar14 = unaff_x19, 2 < unaff_w23)) ||
       (uVar15 = unaff_x28 + 9, unaff_w23 = unaff_w23 + 1, unaff_x28 = param_3,
       in_stack_00000088 <= uVar15)) {
      uVar15 = uVar2 + in_stack_00000038;
      if (in_stack_00000098 <= uVar2 + in_stack_00000038) {
        uVar15 = in_stack_00000098;
      }
      if (uVar15 < in_stack_000000a0) {
LAB_02d00c0c:
        uVar12 = in_stack_000000a0 + 0xf;
LAB_02d00c10:
        if ((in_stack_000000a0 <= uVar15) && (uVar12 != 0)) {
          uVar22 = *(undefined8 *)in_stack_00000058;
          *in_stack_00000058 = (int)in_stack_000000a0;
          in_stack_00000058[3] = in_stack_00000058[2];
          *(undefined8 *)(in_stack_00000058 + 1) = uVar22;
        }
      }
      else {
        if (in_stack_000000a0 != (long)*in_stack_00000058) {
          if (in_stack_000000a0 == (long)in_stack_00000058[1]) {
            uVar12 = 1;
          }
          else {
            uVar12 = (in_stack_000000a0 + 3) - (long)*in_stack_00000058;
            if (uVar12 < 7) {
              uVar8 = (uint)uVar12;
              uVar6 = 0x9750468;
            }
            else {
              uVar12 = (in_stack_000000a0 + 3) - (long)in_stack_00000058[1];
              if (6 < uVar12) {
                if (in_stack_000000a0 == (long)in_stack_00000058[2]) {
                  uVar12 = 2;
                }
                else {
                  if (in_stack_000000a0 != (long)in_stack_00000058[3]) goto LAB_02d00c0c;
                  uVar12 = 3;
                }
                goto LAB_02d00c10;
              }
              uVar8 = (uint)uVar12;
              uVar6 = 0xfdb1ace;
            }
            uVar12 = (ulong)(uVar6 >> (ulong)((uVar8 & 7) << 2) & 0xf);
          }
          goto LAB_02d00c10;
        }
        uVar12 = 0;
      }
      uVar6 = (uint)in_stack_000000a8;
      uVar8 = (uint)uVar14;
      *in_stack_00000068 = uVar6;
      in_stack_00000068[1] = uVar8;
      uVar15 = (ulong)*(uint *)(in_stack_00000080 + 0x44) + 0x10;
      if (uVar12 < uVar15) {
        uVar11 = 0;
      }
      else {
        uVar16 = (ulong)*(uint *)(in_stack_00000080 + 0x40);
        uVar5 = ((uVar12 - *(uint *)(in_stack_00000080 + 0x44)) + (4L << (uVar16 & 0x3f))) - 0x10;
        uVar9 = (ulong)(((uint)LZCOUNT((uint)uVar5) ^ 0x1f) - 1);
        uVar18 = uVar5 >> (uVar9 & 0x3f);
        uVar12 = (ulong)(((uint)uVar5 &
                         (-1 << (ulong)(*(uint *)(in_stack_00000080 + 0x40) & 0x1f) ^ 0xffffffffU))
                         + (int)uVar15 +
                         (int)((uVar18 & 1 | (uVar9 - uVar16) * 2) - 2 << (uVar16 & 0x3f)) |
                        (int)(uVar9 - uVar16) << 10);
        uVar11 = (uint)(uVar5 - ((uVar18 & 1 | 2) << (uVar9 & 0x3f)) >> (uVar16 & 0x3f));
      }
      *(short *)((long)in_stack_00000068 + 0xe) = (short)uVar12;
      in_stack_00000068[2] = uVar11;
      if (5 < in_stack_000000a8) {
        if (in_stack_000000a8 < 0x82) {
          uVar6 = ((uint)LZCOUNT((int)(in_stack_000000a8 - 2)) ^ 0x1f) - 1;
          uVar6 = (int)(in_stack_000000a8 - 2 >> ((ulong)uVar6 & 0x3f)) + uVar6 * 2 + 2;
        }
        else if (in_stack_000000a8 < 0x842) {
          uVar6 = ((uint)LZCOUNT(uVar6 - 0x42) ^ 0x1f) + 10;
        }
        else if (in_stack_000000a8 >> 1 < 0xc21) {
          uVar6 = 0x15;
        }
        else {
          uVar6 = 0x16;
          if (0x5841 < in_stack_000000a8) {
            uVar6 = 0x17;
          }
        }
      }
      if (uVar8 < 10) {
        uVar8 = uVar8 - 2;
      }
      else if (uVar8 < 0x86) {
        uVar11 = ((uint)LZCOUNT((int)((long)(int)uVar8 - 6U)) ^ 0x1f) - 1;
        uVar8 = (int)((long)(int)uVar8 - 6U >> ((ulong)uVar11 & 0x3f)) + uVar11 * 2 + 4;
      }
      else if (uVar8 < 0x846) {
        uVar8 = ((uint)LZCOUNT(uVar8 - 0x46) ^ 0x1f) + 0xc;
      }
      else {
        uVar8 = 0x17;
      }
      uVar7 = (ushort)uVar8 & 7 | (ushort)((uVar6 & 7) << 3);
      if ((((uVar12 & 0x3ff) == 0) && ((uVar6 & 0xffff) < 8)) && ((uVar8 & 0xffff) < 0x10)) {
        if (7 < (uVar8 & 0xffff)) {
          uVar7 = uVar7 | 0x40;
        }
      }
      else {
        uVar6 = (uVar6 >> 3 & 0x1fff) * 3 + ((uVar8 & 0xfff8) >> 3);
        uVar7 = (((ushort)(0x520d40 >> (ulong)((uVar6 & 0xf) << 1)) & 0xc0) + (short)uVar6 * 0x40 |
                uVar7) + 0x40;
      }
      *(ushort *)(in_stack_00000068 + 3) = uVar7;
      uVar15 = uVar2 + uVar14;
      uVar12 = uVar15;
      if (in_stack_00000050 <= uVar15) {
        uVar12 = in_stack_00000050;
      }
      *in_stack_00000040 = *in_stack_00000040 + in_stack_000000a8;
      uVar5 = uVar2 + 2;
      if (in_stack_000000a0 < uVar14 >> 2) {
        uVar9 = uVar15 + in_stack_000000a0 * -4;
        uVar16 = uVar5;
        if (uVar5 <= uVar9) {
          uVar16 = uVar9;
        }
        uVar5 = uVar12;
        if (uVar16 <= uVar12) {
          uVar5 = uVar16;
        }
      }
      uVar2 = in_stack_00000048 + uVar14 * 2 + uVar2;
      in_stack_00000068 = in_stack_00000068 + 4;
      if (uVar5 < uVar12) {
        do {
          *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar5 & param_5)) *
                                                    0x35a7bd1e35a7bd00) >> 0x2c) +
                                     ((uint)uVar5 & 0x18)) & 0xfffff) * 4) = (uint)uVar5;
          uVar5 = uVar5 + 1;
        } while (uVar12 != uVar5);
        in_stack_000000a8 = 0;
      }
      else {
        in_stack_000000a8 = 0;
      }
LAB_02d00f7c:
      unaff_x28 = uVar15;
      param_2 = in_stack_00000088 - unaff_x28;
      if (in_stack_00000088 <= unaff_x28 + 8) {
        *unaff_x27 = param_2 + in_stack_000000a8;
        *in_stack_00000060 = *in_stack_00000060 + ((long)in_stack_00000068 - in_stack_00000020 >> 4)
        ;
        return;
      }
      uVar12 = unaff_x28 & param_5;
      in_stack_000000a0 = (ulong)*in_stack_00000058;
      puVar4 = (ulong *)(param_4 + uVar12);
      uVar14 = *puVar4;
      cVar13 = (char)*puVar4;
      uVar15 = unaff_x28;
      if (in_stack_00000098 <= unaff_x28) {
        uVar15 = in_stack_00000098;
      }
      uVar5 = param_2 >> 3;
      if (unaff_x28 - in_stack_000000a0 < unaff_x28) {
        uVar16 = in_stack_00000070 & unaff_x28 - in_stack_000000a0;
        puVar17 = (ulong *)(param_4 + uVar16);
        if (cVar13 != (char)*puVar17) goto LAB_02d006fc;
        if (uVar5 == 0) {
          uVar9 = 0;
          puVar10 = puVar4;
LAB_02d00fcc:
          uVar14 = param_2 & 7;
          unaff_x19 = uVar9;
          if (uVar14 != 0) {
            uVar16 = uVar9 | uVar14;
            do {
              unaff_x19 = uVar9;
              if (*(char *)((long)puVar17 + uVar9) != (char)*puVar10) break;
              puVar10 = (ulong *)((long)puVar10 + 1);
              uVar14 = uVar14 - 1;
              uVar9 = uVar9 + 1;
              unaff_x19 = uVar16;
            } while (uVar14 != 0);
          }
        }
        else {
          uVar18 = *puVar17;
          if (uVar14 == uVar18) {
            uVar9 = param_2 & 0xfffffffffffffff8;
            lVar20 = 0;
            uVar21 = uVar5;
            do {
              uVar21 = uVar21 - 1;
              puVar10 = (ulong *)((long)puVar4 + uVar9);
              if (uVar21 == 0) goto LAB_02d00fcc;
              uVar14 = *(ulong *)(in_stack_00000008 + uVar12 + lVar20);
              uVar18 = *(ulong *)(in_stack_00000008 + uVar16 + lVar20);
              lVar20 = lVar20 + 8;
            } while (uVar14 == uVar18);
          }
          else {
            lVar20 = 0;
          }
          uVar14 = ((uVar18 ^ uVar14) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((uVar18 ^ uVar14) & 0x5555555555555555) << 1;
          uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          unaff_x19 = lVar20 + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3);
        }
        if ((unaff_x19 < 4) || (in_x7 = unaff_x19 * 0x87 + 0x78f, in_x7 < 0x7e5)) goto LAB_02d006fc;
        cVar13 = *(char *)(param_4 + unaff_x19 + uVar12);
      }
      else {
LAB_02d006fc:
        in_stack_000000a0 = 0;
        unaff_x19 = 0;
        in_x7 = 0x7e4;
      }
      lVar20 = 0;
      uVar14 = param_2 & 7;
      do {
        uVar9 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar20 * 8) * 4);
        uVar16 = uVar9 & param_5;
        uVar9 = unaff_x28 - uVar9;
        if (cVar13 == *(char *)(param_4 + uVar16 + unaff_x19) && uVar9 - 1 < uVar15) {
          lVar1 = param_4 + uVar16;
          uVar16 = 0;
          puVar17 = puVar4;
          uVar18 = uVar16;
          for (uVar21 = uVar5; uVar21 != 0; uVar21 = uVar21 - 1) {
            uVar18 = *(ulong *)(lVar1 + uVar16);
            if (*(ulong *)((long)puVar4 + uVar16) != uVar18) {
              uVar18 = uVar18 ^ *(ulong *)((long)puVar4 + uVar16);
              uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar16 = uVar16 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
              goto LAB_02d007b0;
            }
            uVar16 = uVar16 + 8;
            puVar17 = (ulong *)((long)puVar4 + (param_2 & 0xfffffffffffffff8));
            uVar18 = param_2 & 0xfffffffffffffff8;
          }
          uVar16 = uVar18;
          if (uVar14 != 0) {
            uVar19 = uVar18 | uVar14;
            uVar21 = uVar14;
            do {
              uVar16 = uVar18;
              unaff_x27 = in_stack_00000010;
              if (*(char *)(lVar1 + uVar18) != (char)*puVar17) break;
              puVar17 = (ulong *)((long)puVar17 + 1);
              uVar21 = uVar21 - 1;
              uVar18 = uVar18 + 1;
              uVar16 = uVar19;
            } while (uVar21 != 0);
          }
LAB_02d007b0:
          if ((3 < uVar16) &&
             (uVar18 = (uVar16 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar9) ^ 0x1f) * 0x1e)) + 0x780,
             in_x7 < uVar18)) {
            cVar13 = *(char *)(param_4 + uVar16 + uVar12);
            in_x7 = uVar18;
            unaff_x19 = uVar16;
            in_stack_000000a0 = uVar9;
          }
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 != 4);
      *(int *)(in_x17 + *(long *)(unaff_x24 + (unaff_x28 >> 3 & 3) * 8) * 4) = (int)unaff_x28;
      if (in_x7 < 0x7e5) {
        uVar15 = unaff_x28 + 1;
        in_stack_000000a8 = in_stack_000000a8 + 1;
        if (uVar2 < uVar15) {
          if (uVar2 + in_stack_00000028 < uVar15) {
            uVar12 = unaff_x28 + 0x11;
            if (in_stack_00000030 <= unaff_x28 + 0x11) {
              uVar12 = in_stack_00000030;
            }
            for (; uVar15 < uVar12; uVar15 = uVar15 + 4) {
              in_stack_000000a8 = in_stack_000000a8 + 4;
              *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar15 & param_5)) *
                                                        0x35a7bd1e35a7bd00) >> 0x2c) +
                                         ((uint)uVar15 & 0x18)) & 0xfffff) * 4) = (uint)uVar15;
            }
          }
          else {
            uVar12 = unaff_x28 + 9;
            if (in_stack_00000030 <= unaff_x28 + 9) {
              uVar12 = in_stack_00000030;
            }
            for (; uVar15 < uVar12; uVar15 = uVar15 + 2) {
              in_stack_000000a8 = in_stack_000000a8 + 2;
              *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar15 & param_5)) *
                                                        0x35a7bd1e35a7bd00) >> 0x2c) +
                                         ((uint)uVar15 & 0x18)) & 0xfffff) * 4) = (uint)uVar15;
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
    uVar2 = unaff_x19 - 1;
    if (param_2 <= unaff_x19 - 1) {
      uVar2 = param_2;
    }
    param_3 = unaff_x28 + 1;
    in_x11 = param_3 & param_5;
    if (4 < *(int *)(in_stack_00000080 + 4)) {
      uVar2 = 0;
    }
    in_x13 = (ulong *)(param_4 + in_x11);
    in_x14 = in_stack_00000098;
    if (param_3 < in_stack_00000098) {
      in_x14 = unaff_x28 + 1;
    }
    uVar15 = *in_x13;
    cVar13 = *(char *)(param_4 + uVar2 + in_x11);
    in_x12 = param_2 >> 3;
    if ((param_3 - in_stack_00000090 < param_3) &&
       (uVar12 = in_stack_00000070 & param_3 - in_stack_00000090,
       cVar13 == *(char *)(param_4 + uVar12 + uVar2))) {
      if (in_x12 == 0) {
        uVar14 = 0;
        puVar4 = in_x13;
LAB_02d00ae4:
        uVar15 = param_2 & 7;
        in_x10 = uVar14;
        if (uVar15 != 0) {
          uVar5 = uVar14 | uVar15;
          do {
            in_x10 = uVar14;
            if (*(char *)((long)(param_4 + uVar12) + uVar14) != (char)*puVar4) break;
            puVar4 = (ulong *)((long)puVar4 + 1);
            uVar15 = uVar15 - 1;
            uVar14 = uVar14 + 1;
            in_x10 = uVar5;
          } while (uVar15 != 0);
        }
      }
      else {
        uVar5 = *(ulong *)(param_4 + uVar12);
        if (uVar15 == uVar5) {
          uVar16 = in_x15 >> 3;
          uVar14 = param_2 & 0xfffffffffffffff8;
          lVar20 = 0;
          do {
            uVar16 = uVar16 - 1;
            puVar4 = (ulong *)((long)in_x13 + uVar14);
            if (uVar16 == 0) goto LAB_02d00ae4;
            uVar15 = *(ulong *)(in_stack_00000008 + in_x11 + lVar20);
            uVar5 = *(ulong *)(in_stack_00000008 + uVar12 + lVar20);
            lVar20 = lVar20 + 8;
          } while (uVar15 == uVar5);
        }
        else {
          lVar20 = 0;
        }
        uVar15 = ((uVar5 ^ uVar15) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((uVar5 ^ uVar15) & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        in_x10 = lVar20 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3);
      }
      if ((3 < in_x10) && (param_1 = in_x10 * 0x87 + 0x78f, 0x7e4 < param_1)) goto code_r0x02d00924;
    }
    uVar12 = 0;
    param_1 = 0x7e4;
    uVar15 = in_x7;
    uVar14 = unaff_x19;
  } while( true );
}


