/*
FUNCTION_NAME: AkMIDIPostArray$$GetObjectPtr
ENTRY_POINT: 02d00ab4
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


void AkMIDIPostArray__GetObjectPtr
               (ulong param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  ulong in_x9;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong in_x11;
  long in_x13;
  ulong uVar13;
  char cVar14;
  ulong in_x15;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long in_x17;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint unaff_w23;
  long unaff_x24;
  ulong uVar22;
  long *unaff_x27;
  ulong unaff_x28;
  ulong uVar23;
  ulong unaff_x30;
  undefined8 uVar24;
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
  ulong uStack00000000000000a0;
  ulong in_stack_000000a8;
  
  uStack00000000000000a0 = in_x9;
  do {
    uVar23 = unaff_x28 + 9;
    unaff_w23 = unaff_w23 + 1;
    uVar12 = param_3;
    unaff_x28 = param_3;
    if (uVar23 < in_x11) goto LAB_02d00860;
    do {
      uVar23 = uVar12 + in_stack_00000038;
      if (in_stack_00000098 <= uVar12 + in_stack_00000038) {
        uVar23 = in_stack_00000098;
      }
      if (uVar23 < uStack00000000000000a0) {
LAB_02d00c0c:
        uVar11 = uStack00000000000000a0 + 0xf;
LAB_02d00c10:
        if ((uStack00000000000000a0 <= uVar23) && (uVar11 != 0)) {
          uVar24 = *(undefined8 *)in_stack_00000058;
          *in_stack_00000058 = (int)uStack00000000000000a0;
          in_stack_00000058[3] = in_stack_00000058[2];
          *(undefined8 *)(in_stack_00000058 + 1) = uVar24;
        }
      }
      else {
        if (uStack00000000000000a0 != (long)*in_stack_00000058) {
          if (uStack00000000000000a0 == (long)in_stack_00000058[1]) {
            uVar11 = 1;
          }
          else {
            uVar11 = (uStack00000000000000a0 + 3) - (long)*in_stack_00000058;
            if (uVar11 < 7) {
              uVar7 = (uint)uVar11;
              uVar5 = 0x9750468;
            }
            else {
              uVar11 = (uStack00000000000000a0 + 3) - (long)in_stack_00000058[1];
              if (6 < uVar11) {
                if (uStack00000000000000a0 == (long)in_stack_00000058[2]) {
                  uVar11 = 2;
                }
                else {
                  if (uStack00000000000000a0 != (long)in_stack_00000058[3]) goto LAB_02d00c0c;
                  uVar11 = 3;
                }
                goto LAB_02d00c10;
              }
              uVar7 = (uint)uVar11;
              uVar5 = 0xfdb1ace;
            }
            uVar11 = (ulong)(uVar5 >> (ulong)((uVar7 & 7) << 2) & 0xf);
          }
          goto LAB_02d00c10;
        }
        uVar11 = 0;
      }
      uVar5 = (uint)in_stack_000000a8;
      uVar7 = (uint)unaff_x30;
      *in_stack_00000068 = uVar5;
      in_stack_00000068[1] = uVar7;
      uVar23 = (ulong)*(uint *)(in_x13 + 0x44) + 0x10;
      if (uVar11 < uVar23) {
        uVar10 = 0;
      }
      else {
        uVar13 = (ulong)*(uint *)(in_x13 + 0x40);
        uVar15 = ((uVar11 - *(uint *)(in_x13 + 0x44)) + (4L << (uVar13 & 0x3f))) - 0x10;
        uVar8 = (ulong)(((uint)LZCOUNT((uint)uVar15) ^ 0x1f) - 1);
        uVar16 = uVar15 >> (uVar8 & 0x3f);
        uVar11 = (ulong)(((uint)uVar15 &
                         (-1 << (ulong)(*(uint *)(in_x13 + 0x40) & 0x1f) ^ 0xffffffffU)) +
                         (int)uVar23 +
                         (int)((uVar16 & 1 | (uVar8 - uVar13) * 2) - 2 << (uVar13 & 0x3f)) |
                        (int)(uVar8 - uVar13) << 10);
        uVar10 = (uint)(uVar15 - ((uVar16 & 1 | 2) << (uVar8 & 0x3f)) >> (uVar13 & 0x3f));
      }
      *(short *)((long)in_stack_00000068 + 0xe) = (short)uVar11;
      in_stack_00000068[2] = uVar10;
      if (5 < in_stack_000000a8) {
        if (in_stack_000000a8 < 0x82) {
          uVar5 = ((uint)LZCOUNT((int)(in_stack_000000a8 - 2)) ^ 0x1f) - 1;
          uVar5 = (int)(in_stack_000000a8 - 2 >> ((ulong)uVar5 & 0x3f)) + uVar5 * 2 + 2;
        }
        else if (in_stack_000000a8 < 0x842) {
          uVar5 = ((uint)LZCOUNT(uVar5 - 0x42) ^ 0x1f) + 10;
        }
        else if (in_stack_000000a8 >> 1 < 0xc21) {
          uVar5 = 0x15;
        }
        else {
          uVar5 = 0x16;
          if (0x5841 < in_stack_000000a8) {
            uVar5 = 0x17;
          }
        }
      }
      if (uVar7 < 10) {
        uVar7 = uVar7 - 2;
      }
      else if (uVar7 < 0x86) {
        uVar10 = ((uint)LZCOUNT((int)((long)(int)uVar7 - 6U)) ^ 0x1f) - 1;
        uVar7 = (int)((long)(int)uVar7 - 6U >> ((ulong)uVar10 & 0x3f)) + uVar10 * 2 + 4;
      }
      else if (uVar7 < 0x846) {
        uVar7 = ((uint)LZCOUNT(uVar7 - 0x46) ^ 0x1f) + 0xc;
      }
      else {
        uVar7 = 0x17;
      }
      uVar6 = (ushort)uVar7 & 7 | (ushort)((uVar5 & 7) << 3);
      if ((((uVar11 & 0x3ff) == 0) && ((uVar5 & 0xffff) < 8)) && ((uVar7 & 0xffff) < 0x10)) {
        if (7 < (uVar7 & 0xffff)) {
          uVar6 = uVar6 | 0x40;
        }
      }
      else {
        uVar5 = (uVar5 >> 3 & 0x1fff) * 3 + ((uVar7 & 0xfff8) >> 3);
        uVar6 = (((ushort)(0x520d40 >> (ulong)((uVar5 & 0xf) << 1)) & 0xc0) + (short)uVar5 * 0x40 |
                uVar6) + 0x40;
      }
      *(ushort *)(in_stack_00000068 + 3) = uVar6;
      uVar23 = uVar12 + unaff_x30;
      uVar11 = uVar23;
      if (in_stack_00000050 <= uVar23) {
        uVar11 = in_stack_00000050;
      }
      *in_stack_00000040 = *in_stack_00000040 + in_stack_000000a8;
      uVar15 = uVar12 + 2;
      if (uStack00000000000000a0 < unaff_x30 >> 2) {
        uVar8 = uVar23 + uStack00000000000000a0 * -4;
        uVar13 = uVar15;
        if (uVar15 <= uVar8) {
          uVar13 = uVar8;
        }
        uVar15 = uVar11;
        if (uVar13 <= uVar11) {
          uVar15 = uVar13;
        }
      }
      uVar12 = in_stack_00000048 + unaff_x30 * 2 + uVar12;
      in_stack_00000068 = in_stack_00000068 + 4;
      if (uVar15 < uVar11) {
        do {
          *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar15 & param_5)) *
                                                    0x35a7bd1e35a7bd00) >> 0x2c) +
                                     ((uint)uVar15 & 0x18)) & 0xfffff) * 4) = (uint)uVar15;
          uVar15 = uVar15 + 1;
        } while (uVar11 != uVar15);
        in_stack_000000a8 = 0;
      }
      else {
        in_stack_000000a8 = 0;
      }
LAB_02d00f7c:
      unaff_x28 = uVar23;
      param_2 = in_stack_00000088 - unaff_x28;
      if (in_stack_00000088 <= unaff_x28 + 8) {
        *unaff_x27 = param_2 + in_stack_000000a8;
        *in_stack_00000060 = *in_stack_00000060 + ((long)in_stack_00000068 - in_stack_00000020 >> 4)
        ;
        return;
      }
      uVar11 = unaff_x28 & param_5;
      uStack00000000000000a0 = (ulong)*in_stack_00000058;
      puVar1 = (ulong *)(param_4 + uVar11);
      uVar15 = *puVar1;
      cVar14 = (char)*puVar1;
      uVar23 = unaff_x28;
      if (in_stack_00000098 <= unaff_x28) {
        uVar23 = in_stack_00000098;
      }
      uVar13 = param_2 >> 3;
      if (unaff_x28 - uStack00000000000000a0 < unaff_x28) {
        uVar8 = in_stack_00000070 & unaff_x28 - uStack00000000000000a0;
        puVar4 = (ulong *)(param_4 + uVar8);
        if (cVar14 != (char)*puVar4) goto LAB_02d006fc;
        if (uVar13 == 0) {
          uVar16 = 0;
          puVar9 = puVar1;
LAB_02d00fcc:
          uVar15 = param_2 & 7;
          unaff_x30 = uVar16;
          if (uVar15 != 0) {
            uVar8 = uVar16 | uVar15;
            do {
              unaff_x30 = uVar16;
              if (*(char *)((long)puVar4 + uVar16) != (char)*puVar9) break;
              puVar9 = (ulong *)((long)puVar9 + 1);
              uVar15 = uVar15 - 1;
              uVar16 = uVar16 + 1;
              unaff_x30 = uVar8;
            } while (uVar15 != 0);
          }
        }
        else {
          uVar20 = *puVar4;
          if (uVar15 == uVar20) {
            uVar16 = param_2 & 0xfffffffffffffff8;
            lVar19 = 0;
            uVar17 = uVar13;
            do {
              uVar17 = uVar17 - 1;
              puVar9 = (ulong *)((long)puVar1 + uVar16);
              if (uVar17 == 0) goto LAB_02d00fcc;
              uVar15 = *(ulong *)(in_stack_00000008 + uVar11 + lVar19);
              uVar20 = *(ulong *)(in_stack_00000008 + uVar8 + lVar19);
              lVar19 = lVar19 + 8;
            } while (uVar15 == uVar20);
          }
          else {
            lVar19 = 0;
          }
          uVar15 = ((uVar20 ^ uVar15) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((uVar20 ^ uVar15) & 0x5555555555555555) << 1;
          uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          unaff_x30 = lVar19 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3);
        }
        if ((unaff_x30 < 4) || (param_1 = unaff_x30 * 0x87 + 0x78f, param_1 < 0x7e5))
        goto LAB_02d006fc;
        cVar14 = *(char *)(param_4 + unaff_x30 + uVar11);
      }
      else {
LAB_02d006fc:
        uStack00000000000000a0 = 0;
        unaff_x30 = 0;
        param_1 = 0x7e4;
      }
      lVar19 = 0;
      uVar15 = param_2 & 7;
      do {
        uVar16 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar19 * 8) * 4);
        uVar8 = uVar16 & param_5;
        uVar16 = unaff_x28 - uVar16;
        if (cVar14 == *(char *)(param_4 + uVar8 + unaff_x30) && uVar16 - 1 < uVar23) {
          lVar2 = param_4 + uVar8;
          uVar8 = 0;
          puVar4 = puVar1;
          uVar20 = uVar8;
          for (uVar17 = uVar13; uVar17 != 0; uVar17 = uVar17 - 1) {
            uVar20 = *(ulong *)(lVar2 + uVar8);
            if (*(ulong *)((long)puVar1 + uVar8) != uVar20) {
              uVar20 = uVar20 ^ *(ulong *)((long)puVar1 + uVar8);
              uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
              uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
              uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
              uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
              uVar8 = uVar8 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
              goto LAB_02d007b0;
            }
            uVar8 = uVar8 + 8;
            puVar4 = (ulong *)((long)puVar1 + (param_2 & 0xfffffffffffffff8));
            uVar20 = param_2 & 0xfffffffffffffff8;
          }
          uVar8 = uVar20;
          if (uVar15 != 0) {
            uVar21 = uVar20 | uVar15;
            uVar17 = uVar15;
            do {
              uVar8 = uVar20;
              unaff_x27 = in_stack_00000010;
              if (*(char *)(lVar2 + uVar20) != (char)*puVar4) break;
              puVar4 = (ulong *)((long)puVar4 + 1);
              uVar17 = uVar17 - 1;
              uVar20 = uVar20 + 1;
              uVar8 = uVar21;
            } while (uVar17 != 0);
          }
LAB_02d007b0:
          if ((3 < uVar8) &&
             (uVar20 = (uVar8 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar16) ^ 0x1f) * 0x1e)) + 0x780,
             param_1 < uVar20)) {
            cVar14 = *(char *)(param_4 + uVar8 + uVar11);
            param_1 = uVar20;
            unaff_x30 = uVar8;
            uStack00000000000000a0 = uVar16;
          }
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 != 4);
      *(int *)(in_x17 + *(long *)(unaff_x24 + (unaff_x28 >> 3 & 3) * 8) * 4) = (int)unaff_x28;
      if (param_1 < 0x7e5) {
        uVar23 = unaff_x28 + 1;
        in_stack_000000a8 = in_stack_000000a8 + 1;
        if (uVar12 < uVar23) {
          if (uVar12 + in_stack_00000028 < uVar23) {
            uVar11 = unaff_x28 + 0x11;
            if (in_stack_00000030 <= unaff_x28 + 0x11) {
              uVar11 = in_stack_00000030;
            }
            for (; uVar23 < uVar11; uVar23 = uVar23 + 4) {
              in_stack_000000a8 = in_stack_000000a8 + 4;
              *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar23 & param_5)) *
                                                        0x35a7bd1e35a7bd00) >> 0x2c) +
                                         ((uint)uVar23 & 0x18)) & 0xfffff) * 4) = (uint)uVar23;
            }
          }
          else {
            uVar11 = unaff_x28 + 9;
            if (in_stack_00000030 <= unaff_x28 + 9) {
              uVar11 = in_stack_00000030;
            }
            for (; uVar23 < uVar11; uVar23 = uVar23 + 2) {
              in_stack_000000a8 = in_stack_000000a8 + 2;
              *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar23 & param_5)) *
                                                        0x35a7bd1e35a7bd00) >> 0x2c) +
                                         ((uint)uVar23 & 0x18)) & 0xfffff) * 4) = (uint)uVar23;
            }
          }
        }
        goto LAB_02d00f7c;
      }
      in_stack_00000090 = (ulong)*in_stack_00000058;
      unaff_w23 = 0;
      in_x13 = in_stack_00000080;
      in_x15 = param_2;
LAB_02d00860:
      in_x15 = in_x15 - 1;
      param_2 = param_2 - 1;
      uVar23 = unaff_x30 - 1;
      if (param_2 <= unaff_x30 - 1) {
        uVar23 = param_2;
      }
      param_3 = unaff_x28 + 1;
      uVar12 = param_3 & param_5;
      if (4 < *(int *)(in_x13 + 4)) {
        uVar23 = 0;
      }
      puVar1 = (ulong *)(param_4 + uVar12);
      uVar11 = in_stack_00000098;
      if (param_3 < in_stack_00000098) {
        uVar11 = unaff_x28 + 1;
      }
      uVar13 = *puVar1;
      cVar14 = *(char *)(param_4 + uVar23 + uVar12);
      uVar15 = param_2 >> 3;
      if ((param_3 - in_stack_00000090 < param_3) &&
         (uVar8 = in_stack_00000070 & param_3 - in_stack_00000090,
         cVar14 == *(char *)(param_4 + uVar8 + uVar23))) {
        if (uVar15 == 0) {
          uVar16 = 0;
          puVar4 = puVar1;
LAB_02d00ae4:
          uVar13 = param_2 & 7;
          uVar20 = uVar16;
          if (uVar13 != 0) {
            uVar17 = uVar16 | uVar13;
            do {
              uVar20 = uVar16;
              if (*(char *)((long)(param_4 + uVar8) + uVar16) != (char)*puVar4) break;
              puVar4 = (ulong *)((long)puVar4 + 1);
              uVar13 = uVar13 - 1;
              uVar16 = uVar16 + 1;
              uVar20 = uVar17;
            } while (uVar13 != 0);
          }
        }
        else {
          uVar20 = *(ulong *)(param_4 + uVar8);
          if (uVar13 == uVar20) {
            uVar17 = in_x15 >> 3;
            uVar16 = param_2 & 0xfffffffffffffff8;
            lVar19 = 0;
            do {
              uVar17 = uVar17 - 1;
              puVar4 = (ulong *)((long)puVar1 + uVar16);
              if (uVar17 == 0) goto LAB_02d00ae4;
              uVar13 = *(ulong *)(in_stack_00000008 + uVar12 + lVar19);
              uVar20 = *(ulong *)(in_stack_00000008 + uVar8 + lVar19);
              lVar19 = lVar19 + 8;
            } while (uVar13 == uVar20);
          }
          else {
            lVar19 = 0;
          }
          uVar13 = ((uVar20 ^ uVar13) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((uVar20 ^ uVar13) & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar20 = lVar19 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
        }
        if ((uVar20 < 4) || (uVar13 = uVar20 * 0x87 + 0x78f, uVar13 < 0x7e5)) goto LAB_02d00938;
        cVar14 = *(char *)(param_4 + uVar20 + uVar12);
        uVar8 = in_stack_00000090;
        uVar23 = uVar20;
      }
      else {
LAB_02d00938:
        uVar8 = 0;
        uVar13 = 0x7e4;
      }
      lVar19 = 0;
      uVar16 = param_2 & 7;
      do {
        uVar20 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar19 * 8) * 4);
        uVar17 = uVar20 & param_5;
        uVar20 = param_3 - uVar20;
        if (cVar14 == *(char *)(param_4 + uVar17 + uVar23) && uVar20 - 1 < uVar11) {
          lVar2 = param_4 + uVar17;
          if (uVar15 == 0) {
            puVar4 = puVar1;
            uVar17 = 0;
          }
          else {
            lVar3 = 0;
            uVar21 = uVar15;
            do {
              uVar17 = *(ulong *)(lVar2 + lVar3);
              if (*(ulong *)((long)puVar1 + lVar3) != uVar17) {
                uVar17 = uVar17 ^ *(ulong *)((long)puVar1 + lVar3);
                uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
                uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
                uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
                uVar21 = lVar3 + ((ulong)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) >> 3);
                goto LAB_02d009f0;
              }
              uVar21 = uVar21 - 1;
              lVar3 = lVar3 + 8;
              puVar4 = (ulong *)((long)puVar1 + (param_2 & 0xfffffffffffffff8));
              uVar17 = param_2 & 0xfffffffffffffff8;
            } while (uVar21 != 0);
          }
          uVar21 = uVar17;
          if (uVar16 != 0) {
            uVar22 = uVar17 | uVar16;
            uVar18 = uVar16;
            do {
              uVar21 = uVar17;
              unaff_x27 = in_stack_00000010;
              if (*(char *)(lVar2 + uVar17) != (char)*puVar4) break;
              puVar4 = (ulong *)((long)puVar4 + 1);
              uVar18 = uVar18 - 1;
              uVar17 = uVar17 + 1;
              uVar21 = uVar22;
            } while (uVar18 != 0);
          }
LAB_02d009f0:
          if ((3 < uVar21) &&
             (uVar17 = (uVar21 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar20) ^ 0x1f) * 0x1e)) + 0x780
             , uVar13 < uVar17)) {
            cVar14 = *(char *)(param_4 + uVar21 + uVar12);
            uVar13 = uVar17;
            uVar8 = uVar20;
            uVar23 = uVar21;
          }
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 != 4);
      *(int *)(in_x17 + *(long *)(unaff_x24 + (param_3 >> 3 & 3) * 8) * 4) = (int)param_3;
      uVar12 = unaff_x28;
      in_x13 = in_stack_00000080;
    } while ((uVar13 < param_1 + 0xaf) ||
            (in_stack_000000a8 = in_stack_000000a8 + 1, uVar12 = param_3, param_1 = uVar13,
            uStack00000000000000a0 = uVar8, in_x11 = in_stack_00000088, unaff_x30 = uVar23,
            2 < unaff_w23));
  } while( true );
}


