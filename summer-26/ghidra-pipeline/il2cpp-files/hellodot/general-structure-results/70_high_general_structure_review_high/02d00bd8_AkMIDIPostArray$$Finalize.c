/*
FUNCTION_NAME: AkMIDIPostArray$$Finalize
ENTRY_POINT: 02d00bd8
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


void AkMIDIPostArray__Finalize(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong in_x9;
  ulong uVar14;
  ulong *puVar15;
  uint uVar16;
  ulong uVar17;
  long in_x13;
  ulong uVar18;
  char cVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long in_x17;
  ulong unaff_x19;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long unaff_x24;
  ulong uVar28;
  ulong uVar29;
  long *unaff_x27;
  ulong unaff_x28;
  undefined8 uVar30;
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
  ulong in_stack_00000098;
  ulong uStack00000000000000a0;
  ulong in_stack_000000a8;
  
  lVar25 = in_x13;
  do {
    uVar4 = unaff_x28 + in_stack_00000038;
    if (in_stack_00000098 <= unaff_x28 + in_stack_00000038) {
      uVar4 = in_stack_00000098;
    }
    if (uVar4 < in_x9) {
LAB_02d00c0c:
      uVar11 = in_x9 + 0xf;
LAB_02d00c10:
      if ((in_x9 <= uVar4) && (uVar11 != 0)) {
        uVar30 = *(undefined8 *)in_stack_00000058;
        *in_stack_00000058 = (int)in_x9;
        in_stack_00000058[3] = in_stack_00000058[2];
        *(undefined8 *)(in_stack_00000058 + 1) = uVar30;
      }
    }
    else {
      if (in_x9 != (long)*in_stack_00000058) {
        if (in_x9 == (long)in_stack_00000058[1]) {
          uVar11 = 1;
        }
        else {
          uVar11 = (in_x9 + 3) - (long)*in_stack_00000058;
          if (uVar11 < 7) {
            uVar10 = (uint)uVar11;
            uVar8 = 0x9750468;
          }
          else {
            uVar11 = (in_x9 + 3) - (long)in_stack_00000058[1];
            if (6 < uVar11) {
              if (in_x9 == (long)in_stack_00000058[2]) {
                uVar11 = 2;
              }
              else {
                if (in_x9 != (long)in_stack_00000058[3]) goto LAB_02d00c0c;
                uVar11 = 3;
              }
              goto LAB_02d00c10;
            }
            uVar10 = (uint)uVar11;
            uVar8 = 0xfdb1ace;
          }
          uVar11 = (ulong)(uVar8 >> (ulong)((uVar10 & 7) << 2) & 0xf);
        }
        goto LAB_02d00c10;
      }
      uVar11 = 0;
    }
    uVar8 = (uint)in_stack_000000a8;
    uVar10 = (uint)unaff_x19;
    *in_stack_00000068 = uVar8;
    in_stack_00000068[1] = uVar10;
    uVar4 = (ulong)*(uint *)(lVar25 + 0x44) + 0x10;
    if (uVar11 < uVar4) {
      uVar16 = 0;
    }
    else {
      uVar17 = (ulong)*(uint *)(lVar25 + 0x40);
      uVar20 = ((uVar11 - *(uint *)(lVar25 + 0x44)) + (4L << (uVar17 & 0x3f))) - 0x10;
      uVar14 = (ulong)(((uint)LZCOUNT((uint)uVar20) ^ 0x1f) - 1);
      uVar21 = uVar20 >> (uVar14 & 0x3f);
      uVar11 = (ulong)(((uint)uVar20 &
                       (-1 << (ulong)(*(uint *)(lVar25 + 0x40) & 0x1f) ^ 0xffffffffU)) + (int)uVar4
                       + (int)((uVar21 & 1 | (uVar14 - uVar17) * 2) - 2 << (uVar17 & 0x3f)) |
                      (int)(uVar14 - uVar17) << 10);
      uVar16 = (uint)(uVar20 - ((uVar21 & 1 | 2) << (uVar14 & 0x3f)) >> (uVar17 & 0x3f));
    }
    *(short *)((long)in_stack_00000068 + 0xe) = (short)uVar11;
    in_stack_00000068[2] = uVar16;
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
      uVar16 = ((uint)LZCOUNT((int)((long)(int)uVar10 - 6U)) ^ 0x1f) - 1;
      uVar10 = (int)((long)(int)uVar10 - 6U >> ((ulong)uVar16 & 0x3f)) + uVar16 * 2 + 4;
    }
    else if (uVar10 < 0x846) {
      uVar10 = ((uint)LZCOUNT(uVar10 - 0x46) ^ 0x1f) + 0xc;
    }
    else {
      uVar10 = 0x17;
    }
    uVar9 = (ushort)uVar10 & 7 | (ushort)((uVar8 & 7) << 3);
    if ((((uVar11 & 0x3ff) == 0) && ((uVar8 & 0xffff) < 8)) && ((uVar10 & 0xffff) < 0x10)) {
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
    uVar4 = unaff_x28 + unaff_x19;
    uVar11 = uVar4;
    if (in_stack_00000050 <= uVar4) {
      uVar11 = in_stack_00000050;
    }
    *in_stack_00000040 = *in_stack_00000040 + in_stack_000000a8;
    uVar20 = unaff_x28 + 2;
    if (in_x9 < unaff_x19 >> 2) {
      uVar14 = uVar4 + in_x9 * -4;
      uVar17 = uVar20;
      if (uVar20 <= uVar14) {
        uVar17 = uVar14;
      }
      uVar20 = uVar11;
      if (uVar17 <= uVar11) {
        uVar20 = uVar17;
      }
    }
    uVar17 = in_stack_00000048 + unaff_x19 * 2 + unaff_x28;
    in_stack_00000068 = in_stack_00000068 + 4;
    if (uVar20 < uVar11) {
      do {
        *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_3 + (uVar20 & param_4)) *
                                                  0x35a7bd1e35a7bd00) >> 0x2c) +
                                   ((uint)uVar20 & 0x18)) & 0xfffff) * 4) = (uint)uVar20;
        uVar20 = uVar20 + 1;
      } while (uVar11 != uVar20);
      in_stack_000000a8 = 0;
    }
    else {
      in_stack_000000a8 = 0;
    }
LAB_02d00f7c:
    uVar11 = uVar4;
    uVar4 = in_stack_00000088 - uVar11;
    if (in_stack_00000088 <= uVar11 + 8) {
      *unaff_x27 = uVar4 + in_stack_000000a8;
      *in_stack_00000060 = *in_stack_00000060 + ((long)in_stack_00000068 - in_stack_00000020 >> 4);
      return;
    }
    uVar14 = uVar11 & param_4;
    uStack00000000000000a0 = (ulong)*in_stack_00000058;
    puVar1 = (ulong *)(param_3 + uVar14);
    uVar21 = *puVar1;
    cVar19 = (char)*puVar1;
    uVar20 = uVar11;
    if (in_stack_00000098 <= uVar11) {
      uVar20 = in_stack_00000098;
    }
    uVar18 = uVar4 >> 3;
    if (uVar11 - uStack00000000000000a0 < uVar11) {
      uVar12 = in_stack_00000070 & uVar11 - uStack00000000000000a0;
      puVar6 = (ulong *)(param_3 + uVar12);
      if (cVar19 != (char)*puVar6) goto LAB_02d006fc;
      if (uVar18 == 0) {
        uVar13 = 0;
        puVar15 = puVar1;
LAB_02d00fcc:
        uVar21 = uVar4 & 7;
        unaff_x19 = uVar13;
        if (uVar21 != 0) {
          uVar12 = uVar13 | uVar21;
          do {
            unaff_x19 = uVar13;
            if (*(char *)((long)puVar6 + uVar13) != (char)*puVar15) break;
            puVar15 = (ulong *)((long)puVar15 + 1);
            uVar21 = uVar21 - 1;
            uVar13 = uVar13 + 1;
            unaff_x19 = uVar12;
          } while (uVar21 != 0);
        }
      }
      else {
        uVar26 = *puVar6;
        if (uVar21 == uVar26) {
          uVar13 = uVar4 & 0xfffffffffffffff8;
          lVar25 = 0;
          uVar28 = uVar18;
          do {
            uVar28 = uVar28 - 1;
            puVar15 = (ulong *)((long)puVar1 + uVar13);
            if (uVar28 == 0) goto LAB_02d00fcc;
            uVar21 = *(ulong *)(in_stack_00000008 + uVar14 + lVar25);
            uVar26 = *(ulong *)(in_stack_00000008 + uVar12 + lVar25);
            lVar25 = lVar25 + 8;
          } while (uVar21 == uVar26);
        }
        else {
          lVar25 = 0;
        }
        uVar21 = ((uVar26 ^ uVar21) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((uVar26 ^ uVar21) & 0x5555555555555555) << 1;
        uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
        uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
        uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
        unaff_x19 = lVar25 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
      }
      if ((unaff_x19 < 4) || (uVar21 = unaff_x19 * 0x87 + 0x78f, uVar21 < 0x7e5)) goto LAB_02d006fc;
      cVar19 = *(char *)(param_3 + unaff_x19 + uVar14);
    }
    else {
LAB_02d006fc:
      uStack00000000000000a0 = 0;
      unaff_x19 = 0;
      uVar21 = 0x7e4;
    }
    lVar25 = 0;
    uVar12 = uVar4 & 7;
    do {
      uVar26 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar25 * 8) * 4);
      uVar13 = uVar26 & param_4;
      uVar26 = uVar11 - uVar26;
      if (cVar19 == *(char *)(param_3 + uVar13 + unaff_x19) && uVar26 - 1 < uVar20) {
        lVar2 = param_3 + uVar13;
        uVar13 = 0;
        puVar6 = puVar1;
        uVar28 = uVar13;
        for (uVar7 = uVar18; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar28 = *(ulong *)(lVar2 + uVar13);
          if (*(ulong *)((long)puVar1 + uVar13) != uVar28) {
            uVar28 = uVar28 ^ *(ulong *)((long)puVar1 + uVar13);
            uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
            uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
            uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            uVar13 = uVar13 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3);
            goto LAB_02d007b0;
          }
          uVar13 = uVar13 + 8;
          puVar6 = (ulong *)((long)puVar1 + (uVar4 & 0xfffffffffffffff8));
          uVar28 = uVar4 & 0xfffffffffffffff8;
        }
        uVar13 = uVar28;
        if (uVar12 != 0) {
          uVar27 = uVar28 | uVar12;
          uVar7 = uVar12;
          do {
            uVar13 = uVar28;
            unaff_x27 = in_stack_00000010;
            if (*(char *)(lVar2 + uVar28) != (char)*puVar6) break;
            puVar6 = (ulong *)((long)puVar6 + 1);
            uVar7 = uVar7 - 1;
            uVar28 = uVar28 + 1;
            uVar13 = uVar27;
          } while (uVar7 != 0);
        }
LAB_02d007b0:
        if ((3 < uVar13) &&
           (uVar28 = (uVar13 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar26) ^ 0x1f) * 0x1e)) + 0x780,
           uVar21 < uVar28)) {
          cVar19 = *(char *)(param_3 + uVar13 + uVar14);
          uVar21 = uVar28;
          unaff_x19 = uVar13;
          uStack00000000000000a0 = uVar26;
        }
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 != 4);
    *(int *)(in_x17 + *(long *)(unaff_x24 + (uVar11 >> 3 & 3) * 8) * 4) = (int)uVar11;
    if (uVar21 < 0x7e5) {
      uVar4 = uVar11 + 1;
      in_stack_000000a8 = in_stack_000000a8 + 1;
      if (uVar17 < uVar4) {
        if (uVar17 + in_stack_00000028 < uVar4) {
          uVar20 = uVar11 + 0x11;
          if (in_stack_00000030 <= uVar11 + 0x11) {
            uVar20 = in_stack_00000030;
          }
          for (; uVar4 < uVar20; uVar4 = uVar4 + 4) {
            in_stack_000000a8 = in_stack_000000a8 + 4;
            *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_3 + (uVar4 & param_4)) *
                                                      0x35a7bd1e35a7bd00) >> 0x2c) +
                                       ((uint)uVar4 & 0x18)) & 0xfffff) * 4) = (uint)uVar4;
          }
        }
        else {
          uVar20 = uVar11 + 9;
          if (in_stack_00000030 <= uVar11 + 9) {
            uVar20 = in_stack_00000030;
          }
          for (; uVar4 < uVar20; uVar4 = uVar4 + 2) {
            in_stack_000000a8 = in_stack_000000a8 + 2;
            *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_3 + (uVar4 & param_4)) *
                                                      0x35a7bd1e35a7bd00) >> 0x2c) +
                                       ((uint)uVar4 & 0x18)) & 0xfffff) * 4) = (uint)uVar4;
          }
        }
      }
      goto LAB_02d00f7c;
    }
    iVar3 = *in_stack_00000058;
    uVar8 = 0;
    uVar20 = uVar4;
    do {
      uVar20 = uVar20 - 1;
      uVar4 = uVar4 - 1;
      uVar17 = unaff_x19 - 1;
      if (uVar4 <= unaff_x19 - 1) {
        uVar17 = uVar4;
      }
      uVar14 = uVar11 + 1;
      uVar18 = uVar14 & param_4;
      if (4 < *(int *)(in_stack_00000080 + 4)) {
        uVar17 = 0;
      }
      puVar1 = (ulong *)(param_3 + uVar18);
      uVar12 = in_stack_00000098;
      if (uVar14 < in_stack_00000098) {
        uVar12 = uVar11 + 1;
      }
      uVar28 = *puVar1;
      cVar19 = *(char *)(param_3 + uVar17 + uVar18);
      uVar26 = uVar4 >> 3;
      uVar13 = uVar14 - (long)iVar3;
      if ((uVar13 < uVar14) &&
         (uVar13 = in_stack_00000070 & uVar13, cVar19 == *(char *)(param_3 + uVar13 + uVar17))) {
        if (uVar26 == 0) {
          uVar7 = 0;
          puVar6 = puVar1;
LAB_02d00ae4:
          uVar28 = uVar4 & 7;
          uVar27 = uVar7;
          if (uVar28 != 0) {
            uVar22 = uVar7 | uVar28;
            do {
              uVar27 = uVar7;
              if (*(char *)((long)(param_3 + uVar13) + uVar7) != (char)*puVar6) break;
              puVar6 = (ulong *)((long)puVar6 + 1);
              uVar28 = uVar28 - 1;
              uVar7 = uVar7 + 1;
              uVar27 = uVar22;
            } while (uVar28 != 0);
          }
        }
        else {
          uVar27 = *(ulong *)(param_3 + uVar13);
          if (uVar28 == uVar27) {
            uVar22 = uVar20 >> 3;
            uVar7 = uVar4 & 0xfffffffffffffff8;
            lVar25 = 0;
            do {
              uVar22 = uVar22 - 1;
              puVar6 = (ulong *)((long)puVar1 + uVar7);
              if (uVar22 == 0) goto LAB_02d00ae4;
              uVar28 = *(ulong *)(in_stack_00000008 + uVar18 + lVar25);
              uVar27 = *(ulong *)(in_stack_00000008 + uVar13 + lVar25);
              lVar25 = lVar25 + 8;
            } while (uVar28 == uVar27);
          }
          else {
            lVar25 = 0;
          }
          uVar13 = ((uVar27 ^ uVar28) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((uVar27 ^ uVar28) & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar27 = lVar25 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
        }
        if ((uVar27 < 4) || (uVar13 = uVar27 * 0x87 + 0x78f, uVar13 < 0x7e5)) goto LAB_02d00938;
        cVar19 = *(char *)(param_3 + uVar27 + uVar18);
        uVar28 = (long)iVar3;
        uVar17 = uVar27;
      }
      else {
LAB_02d00938:
        uVar28 = 0;
        uVar13 = 0x7e4;
      }
      lVar25 = 0;
      uVar7 = uVar4 & 7;
      do {
        uVar27 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar25 * 8) * 4);
        uVar22 = uVar27 & param_4;
        uVar27 = uVar14 - uVar27;
        if (cVar19 == *(char *)(param_3 + uVar22 + uVar17) && uVar27 - 1 < uVar12) {
          lVar2 = param_3 + uVar22;
          if (uVar26 == 0) {
            puVar6 = puVar1;
            uVar22 = 0;
          }
          else {
            lVar5 = 0;
            uVar23 = uVar26;
            do {
              uVar22 = *(ulong *)(lVar2 + lVar5);
              if (*(ulong *)((long)puVar1 + lVar5) != uVar22) {
                uVar22 = uVar22 ^ *(ulong *)((long)puVar1 + lVar5);
                uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
                uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
                uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
                uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
                uVar23 = lVar5 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
                goto LAB_02d009f0;
              }
              uVar23 = uVar23 - 1;
              lVar5 = lVar5 + 8;
              puVar6 = (ulong *)((long)puVar1 + (uVar4 & 0xfffffffffffffff8));
              uVar22 = uVar4 & 0xfffffffffffffff8;
            } while (uVar23 != 0);
          }
          uVar23 = uVar22;
          if (uVar7 != 0) {
            uVar29 = uVar22 | uVar7;
            uVar24 = uVar7;
            do {
              uVar23 = uVar22;
              unaff_x27 = in_stack_00000010;
              if (*(char *)(lVar2 + uVar22) != (char)*puVar6) break;
              puVar6 = (ulong *)((long)puVar6 + 1);
              uVar24 = uVar24 - 1;
              uVar22 = uVar22 + 1;
              uVar23 = uVar29;
            } while (uVar24 != 0);
          }
LAB_02d009f0:
          if ((3 < uVar23) &&
             (uVar22 = (uVar23 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar27) ^ 0x1f) * 0x1e)) + 0x780
             , uVar13 < uVar22)) {
            cVar19 = *(char *)(param_3 + uVar23 + uVar18);
            uVar13 = uVar22;
            uVar28 = uVar27;
            uVar17 = uVar23;
          }
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 != 4);
      *(int *)(in_x17 + *(long *)(unaff_x24 + (uVar14 >> 3 & 3) * 8) * 4) = (int)uVar14;
      unaff_x28 = uVar11;
      in_x9 = uStack00000000000000a0;
      lVar25 = in_stack_00000080;
    } while (((uVar21 + 0xaf <= uVar13) &&
             (in_stack_000000a8 = in_stack_000000a8 + 1, unaff_x28 = uVar14, in_x9 = uVar28,
             unaff_x19 = uVar17, uVar8 < 3)) &&
            (uVar17 = uVar11 + 9, uVar8 = uVar8 + 1, uVar21 = uVar13, uVar11 = uVar14,
            uStack00000000000000a0 = uVar28, uVar17 < in_stack_00000088));
  } while( true );
}


