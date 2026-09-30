/*
FUNCTION_NAME: AkMIDIPostArray$$PostOnEvent
ENTRY_POINT: 02d00d74
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void AkMIDIPostArray__PostOnEvent
               (ulong param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  uint uVar7;
  ulong in_x7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong in_x9;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  ulong in_x10;
  ulong uVar16;
  long in_x13;
  ulong uVar17;
  char cVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint *in_x16;
  long in_x17;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long unaff_x23;
  long unaff_x24;
  ulong uVar28;
  long *unaff_x25;
  ulong uVar29;
  long *unaff_x26;
  ulong unaff_x30;
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
  ulong in_stack_00000070;
  long in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000098;
  ulong uStack00000000000000a0;
  ulong uStack00000000000000a8;
  
  uStack00000000000000a8 = in_x7;
LAB_02d00c10:
  if ((in_x9 <= in_x10) && (param_1 != 0)) {
    uVar30 = *(undefined8 *)in_stack_00000058;
    *in_stack_00000058 = (int)in_x9;
    in_stack_00000058[3] = in_stack_00000058[2];
    *(undefined8 *)(in_stack_00000058 + 1) = uVar30;
  }
  do {
    uVar7 = (uint)uStack00000000000000a8;
    uVar9 = (uint)unaff_x30;
    *in_x16 = uVar7;
    in_x16[1] = uVar9;
    uVar4 = (ulong)*(uint *)(in_x13 + 0x44) + 0x10;
    if (param_1 < uVar4) {
      uVar15 = 0;
    }
    else {
      uVar19 = (ulong)*(uint *)(in_x13 + 0x40);
      uVar10 = ((param_1 - *(uint *)(in_x13 + 0x44)) + (4L << (uVar19 & 0x3f))) - 0x10;
      uVar16 = (ulong)(((uint)LZCOUNT((uint)uVar10) ^ 0x1f) - 1);
      uVar13 = uVar10 >> (uVar16 & 0x3f);
      param_1 = (ulong)(((uint)uVar10 &
                        (-1 << (ulong)(*(uint *)(in_x13 + 0x40) & 0x1f) ^ 0xffffffffU)) + (int)uVar4
                        + (int)((uVar13 & 1 | (uVar16 - uVar19) * 2) - 2 << (uVar19 & 0x3f)) |
                       (int)(uVar16 - uVar19) << 10);
      uVar15 = (uint)(uVar10 - ((uVar13 & 1 | 2) << (uVar16 & 0x3f)) >> (uVar19 & 0x3f));
    }
    *(short *)((long)in_x16 + 0xe) = (short)param_1;
    in_x16[2] = uVar15;
    if (5 < uStack00000000000000a8) {
      if (uStack00000000000000a8 < 0x82) {
        uVar7 = ((uint)LZCOUNT((int)(uStack00000000000000a8 - 2)) ^ 0x1f) - 1;
        uVar7 = (int)(uStack00000000000000a8 - 2 >> ((ulong)uVar7 & 0x3f)) + uVar7 * 2 + 2;
      }
      else if (uStack00000000000000a8 < 0x842) {
        uVar7 = ((uint)LZCOUNT(uVar7 - 0x42) ^ 0x1f) + 10;
      }
      else if (uStack00000000000000a8 >> 1 < 0xc21) {
        uVar7 = 0x15;
      }
      else {
        uVar7 = 0x16;
        if (0x5841 < uStack00000000000000a8) {
          uVar7 = 0x17;
        }
      }
    }
    if (uVar9 < 10) {
      uVar9 = uVar9 - 2;
    }
    else if (uVar9 < 0x86) {
      uVar15 = ((uint)LZCOUNT((int)((long)(int)uVar9 - 6U)) ^ 0x1f) - 1;
      uVar9 = (int)((long)(int)uVar9 - 6U >> ((ulong)uVar15 & 0x3f)) + uVar15 * 2 + 4;
    }
    else if (uVar9 < 0x846) {
      uVar9 = ((uint)LZCOUNT(uVar9 - 0x46) ^ 0x1f) + 0xc;
    }
    else {
      uVar9 = 0x17;
    }
    uVar8 = (ushort)uVar9 & 7 | (ushort)((uVar7 & 7) << 3);
    if ((((param_1 & 0x3ff) == 0) && ((uVar7 & 0xffff) < 8)) && ((uVar9 & 0xffff) < 0x10)) {
      if (7 < (uVar9 & 0xffff)) {
        uVar8 = uVar8 | 0x40;
      }
    }
    else {
      uVar7 = (uVar7 >> 3 & 0x1fff) * 3 + ((uVar9 & 0xfff8) >> 3);
      uVar8 = (((ushort)(0x520d40 >> (ulong)((uVar7 & 0xf) << 1)) & 0xc0) + (short)uVar7 * 0x40 |
              uVar8) + 0x40;
    }
    *(ushort *)(in_x16 + 3) = uVar8;
    uVar4 = param_3 + unaff_x30;
    uVar10 = uVar4;
    if (in_stack_00000050 <= uVar4) {
      uVar10 = in_stack_00000050;
    }
    *in_stack_00000040 = *in_stack_00000040 + uStack00000000000000a8;
    uVar19 = param_3 + 2;
    if (in_x9 < unaff_x30 >> 2) {
      uVar13 = uVar4 + in_x9 * -4;
      uVar16 = uVar19;
      if (uVar19 <= uVar13) {
        uVar16 = uVar13;
      }
      uVar19 = uVar10;
      if (uVar16 <= uVar10) {
        uVar19 = uVar16;
      }
    }
    param_3 = unaff_x23 + unaff_x30 * 2 + param_3;
    in_x16 = in_x16 + 4;
    if (uVar19 < uVar10) {
      do {
        *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar19 & param_5)) *
                                                  0x35a7bd1e35a7bd00) >> 0x2c) +
                                   ((uint)uVar19 & 0x18)) & 0xfffff) * 4) = (uint)uVar19;
        uVar19 = uVar19 + 1;
      } while (uVar10 != uVar19);
      uStack00000000000000a8 = 0;
    }
    else {
      uStack00000000000000a8 = 0;
    }
LAB_02d00f7c:
    uVar10 = uVar4;
    uVar4 = in_stack_00000088 - uVar10;
    if (in_stack_00000088 <= uVar10 + 8) {
      *unaff_x25 = uVar4 + uStack00000000000000a8;
      *unaff_x26 = *unaff_x26 + ((long)in_x16 - in_stack_00000020 >> 4);
      return;
    }
    uVar16 = uVar10 & param_5;
    uStack00000000000000a0 = (ulong)*in_stack_00000058;
    puVar1 = (ulong *)(param_4 + uVar16);
    uVar13 = *puVar1;
    cVar18 = (char)*puVar1;
    uVar19 = uVar10;
    if (in_stack_00000098 <= uVar10) {
      uVar19 = in_stack_00000098;
    }
    uVar17 = uVar4 >> 3;
    if (uVar10 - uStack00000000000000a0 < uVar10) {
      uVar11 = in_stack_00000070 & uVar10 - uStack00000000000000a0;
      puVar6 = (ulong *)(param_4 + uVar11);
      if (cVar18 != (char)*puVar6) goto LAB_02d006fc;
      if (uVar17 == 0) {
        uVar12 = 0;
        puVar14 = puVar1;
LAB_02d00fcc:
        uVar13 = uVar4 & 7;
        unaff_x30 = uVar12;
        if (uVar13 != 0) {
          uVar11 = uVar12 | uVar13;
          do {
            unaff_x30 = uVar12;
            if (*(char *)((long)puVar6 + uVar12) != (char)*puVar14) break;
            puVar14 = (ulong *)((long)puVar14 + 1);
            uVar13 = uVar13 - 1;
            uVar12 = uVar12 + 1;
            unaff_x30 = uVar11;
          } while (uVar13 != 0);
        }
      }
      else {
        uVar25 = *puVar6;
        if (uVar13 == uVar25) {
          uVar12 = uVar4 & 0xfffffffffffffff8;
          lVar24 = 0;
          uVar28 = uVar17;
          do {
            uVar28 = uVar28 - 1;
            puVar14 = (ulong *)((long)puVar1 + uVar12);
            if (uVar28 == 0) goto LAB_02d00fcc;
            uVar13 = *(ulong *)(in_stack_00000008 + uVar16 + lVar24);
            uVar25 = *(ulong *)(in_stack_00000008 + uVar11 + lVar24);
            lVar24 = lVar24 + 8;
          } while (uVar13 == uVar25);
        }
        else {
          lVar24 = 0;
        }
        uVar13 = ((uVar25 ^ uVar13) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((uVar25 ^ uVar13) & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        unaff_x30 = lVar24 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3);
      }
      if ((unaff_x30 < 4) || (uVar13 = unaff_x30 * 0x87 + 0x78f, uVar13 < 0x7e5)) goto LAB_02d006fc;
      cVar18 = *(char *)(param_4 + unaff_x30 + uVar16);
    }
    else {
LAB_02d006fc:
      uStack00000000000000a0 = 0;
      unaff_x30 = 0;
      uVar13 = 0x7e4;
    }
    lVar24 = 0;
    uVar11 = uVar4 & 7;
    do {
      uVar25 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar24 * 8) * 4);
      uVar12 = uVar25 & param_5;
      uVar25 = uVar10 - uVar25;
      if (cVar18 == *(char *)(param_4 + uVar12 + unaff_x30) && uVar25 - 1 < uVar19) {
        lVar2 = param_4 + uVar12;
        uVar12 = 0;
        puVar6 = puVar1;
        uVar28 = uVar12;
        for (uVar20 = uVar17; uVar20 != 0; uVar20 = uVar20 - 1) {
          uVar28 = *(ulong *)(lVar2 + uVar12);
          if (*(ulong *)((long)puVar1 + uVar12) != uVar28) {
            uVar28 = uVar28 ^ *(ulong *)((long)puVar1 + uVar12);
            uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
            uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
            uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            uVar12 = uVar12 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3);
            goto LAB_02d007b0;
          }
          uVar12 = uVar12 + 8;
          puVar6 = (ulong *)((long)puVar1 + (uVar4 & 0xfffffffffffffff8));
          uVar28 = uVar4 & 0xfffffffffffffff8;
        }
        uVar12 = uVar28;
        if (uVar11 != 0) {
          uVar26 = uVar28 | uVar11;
          uVar20 = uVar11;
          do {
            uVar12 = uVar28;
            unaff_x25 = in_stack_00000010;
            if (*(char *)(lVar2 + uVar28) != (char)*puVar6) break;
            puVar6 = (ulong *)((long)puVar6 + 1);
            uVar20 = uVar20 - 1;
            uVar28 = uVar28 + 1;
            uVar12 = uVar26;
          } while (uVar20 != 0);
        }
LAB_02d007b0:
        if ((3 < uVar12) &&
           (uVar28 = (uVar12 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar25) ^ 0x1f) * 0x1e)) + 0x780,
           uVar13 < uVar28)) {
          cVar18 = *(char *)(param_4 + uVar12 + uVar16);
          uVar13 = uVar28;
          unaff_x30 = uVar12;
          uStack00000000000000a0 = uVar25;
        }
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 != 4);
    *(int *)(in_x17 + *(long *)(unaff_x24 + (uVar10 >> 3 & 3) * 8) * 4) = (int)uVar10;
    unaff_x26 = in_stack_00000060;
    if (uVar13 < 0x7e5) {
      uVar4 = uVar10 + 1;
      uStack00000000000000a8 = uStack00000000000000a8 + 1;
      if (param_3 < uVar4) {
        if (param_3 + in_stack_00000028 < uVar4) {
          uVar19 = uVar10 + 0x11;
          if (in_stack_00000030 <= uVar10 + 0x11) {
            uVar19 = in_stack_00000030;
          }
          for (; uVar4 < uVar19; uVar4 = uVar4 + 4) {
            uStack00000000000000a8 = uStack00000000000000a8 + 4;
            *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar4 & param_5)) *
                                                      0x35a7bd1e35a7bd00) >> 0x2c) +
                                       ((uint)uVar4 & 0x18)) & 0xfffff) * 4) = (uint)uVar4;
          }
        }
        else {
          uVar19 = uVar10 + 9;
          if (in_stack_00000030 <= uVar10 + 9) {
            uVar19 = in_stack_00000030;
          }
          for (; uVar4 < uVar19; uVar4 = uVar4 + 2) {
            uStack00000000000000a8 = uStack00000000000000a8 + 2;
            *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar4 & param_5)) *
                                                      0x35a7bd1e35a7bd00) >> 0x2c) +
                                       ((uint)uVar4 & 0x18)) & 0xfffff) * 4) = (uint)uVar4;
          }
        }
      }
      goto LAB_02d00f7c;
    }
    iVar3 = *in_stack_00000058;
    uVar7 = 0;
    uVar19 = uVar4;
    do {
      uVar19 = uVar19 - 1;
      uVar4 = uVar4 - 1;
      uVar16 = unaff_x30 - 1;
      if (uVar4 <= unaff_x30 - 1) {
        uVar16 = uVar4;
      }
      uVar17 = uVar10 + 1;
      uVar11 = uVar17 & param_5;
      if (4 < *(int *)(in_stack_00000080 + 4)) {
        uVar16 = 0;
      }
      puVar1 = (ulong *)(param_4 + uVar11);
      uVar12 = in_stack_00000098;
      if (uVar17 < in_stack_00000098) {
        uVar12 = uVar10 + 1;
      }
      uVar20 = *puVar1;
      cVar18 = *(char *)(param_4 + uVar16 + uVar11);
      uVar28 = uVar4 >> 3;
      uVar25 = uVar17 - (long)iVar3;
      if ((uVar25 < uVar17) &&
         (uVar25 = in_stack_00000070 & uVar25, cVar18 == *(char *)(param_4 + uVar25 + uVar16))) {
        if (uVar28 == 0) {
          uVar26 = 0;
          puVar6 = puVar1;
LAB_02d00ae4:
          uVar20 = uVar4 & 7;
          uVar27 = uVar26;
          if (uVar20 != 0) {
            uVar21 = uVar26 | uVar20;
            do {
              uVar27 = uVar26;
              if (*(char *)((long)(param_4 + uVar25) + uVar26) != (char)*puVar6) break;
              puVar6 = (ulong *)((long)puVar6 + 1);
              uVar20 = uVar20 - 1;
              uVar26 = uVar26 + 1;
              uVar27 = uVar21;
            } while (uVar20 != 0);
          }
        }
        else {
          uVar27 = *(ulong *)(param_4 + uVar25);
          if (uVar20 == uVar27) {
            uVar21 = uVar19 >> 3;
            uVar26 = uVar4 & 0xfffffffffffffff8;
            lVar24 = 0;
            do {
              uVar21 = uVar21 - 1;
              puVar6 = (ulong *)((long)puVar1 + uVar26);
              if (uVar21 == 0) goto LAB_02d00ae4;
              uVar20 = *(ulong *)(in_stack_00000008 + uVar11 + lVar24);
              uVar27 = *(ulong *)(in_stack_00000008 + uVar25 + lVar24);
              lVar24 = lVar24 + 8;
            } while (uVar20 == uVar27);
          }
          else {
            lVar24 = 0;
          }
          uVar25 = ((uVar27 ^ uVar20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((uVar27 ^ uVar20) & 0x5555555555555555) << 1;
          uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
          uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          uVar27 = lVar24 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3);
        }
        if ((uVar27 < 4) || (uVar25 = uVar27 * 0x87 + 0x78f, uVar25 < 0x7e5)) goto LAB_02d00938;
        cVar18 = *(char *)(param_4 + uVar27 + uVar11);
        uVar20 = (long)iVar3;
        uVar16 = uVar27;
      }
      else {
LAB_02d00938:
        uVar20 = 0;
        uVar25 = 0x7e4;
      }
      lVar24 = 0;
      uVar26 = uVar4 & 7;
      do {
        uVar27 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar24 * 8) * 4);
        uVar21 = uVar27 & param_5;
        uVar27 = uVar17 - uVar27;
        if (cVar18 == *(char *)(param_4 + uVar21 + uVar16) && uVar27 - 1 < uVar12) {
          lVar2 = param_4 + uVar21;
          if (uVar28 == 0) {
            puVar6 = puVar1;
            uVar21 = 0;
          }
          else {
            lVar5 = 0;
            uVar22 = uVar28;
            do {
              uVar21 = *(ulong *)(lVar2 + lVar5);
              if (*(ulong *)((long)puVar1 + lVar5) != uVar21) {
                uVar21 = uVar21 ^ *(ulong *)((long)puVar1 + lVar5);
                uVar21 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
                uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
                uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
                uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
                uVar22 = lVar5 + ((ulong)LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) >> 3);
                goto LAB_02d009f0;
              }
              uVar22 = uVar22 - 1;
              lVar5 = lVar5 + 8;
              puVar6 = (ulong *)((long)puVar1 + (uVar4 & 0xfffffffffffffff8));
              uVar21 = uVar4 & 0xfffffffffffffff8;
            } while (uVar22 != 0);
          }
          uVar22 = uVar21;
          if (uVar26 != 0) {
            uVar29 = uVar21 | uVar26;
            uVar23 = uVar26;
            do {
              uVar22 = uVar21;
              unaff_x25 = in_stack_00000010;
              if (*(char *)(lVar2 + uVar21) != (char)*puVar6) break;
              puVar6 = (ulong *)((long)puVar6 + 1);
              uVar23 = uVar23 - 1;
              uVar21 = uVar21 + 1;
              uVar22 = uVar29;
            } while (uVar23 != 0);
          }
LAB_02d009f0:
          if ((3 < uVar22) &&
             (uVar21 = (uVar22 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar27) ^ 0x1f) * 0x1e)) + 0x780
             , uVar25 < uVar21)) {
            cVar18 = *(char *)(param_4 + uVar22 + uVar11);
            uVar25 = uVar21;
            uVar20 = uVar27;
            uVar16 = uVar22;
          }
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 != 4);
      *(int *)(in_x17 + *(long *)(unaff_x24 + (uVar17 >> 3 & 3) * 8) * 4) = (int)uVar17;
      param_3 = uVar10;
      in_x9 = uStack00000000000000a0;
    } while (((uVar13 + 0xaf <= uVar25) &&
             (uStack00000000000000a8 = uStack00000000000000a8 + 1, param_3 = uVar17, in_x9 = uVar20,
             unaff_x30 = uVar16, uVar7 < 3)) &&
            (uVar16 = uVar10 + 9, uVar7 = uVar7 + 1, uVar13 = uVar25, uVar10 = uVar17,
            uStack00000000000000a0 = uVar20, uVar16 < in_stack_00000088));
    in_x10 = param_3 + in_stack_00000038;
    if (in_stack_00000098 <= param_3 + in_stack_00000038) {
      in_x10 = in_stack_00000098;
    }
    in_x13 = in_stack_00000080;
    unaff_x23 = in_stack_00000048;
    if (in_x10 < in_x9) goto LAB_02d00c0c;
    if (in_x9 != (long)*in_stack_00000058) break;
    param_1 = 0;
  } while( true );
  if (in_x9 != (long)in_stack_00000058[1]) {
    uVar4 = (in_x9 + 3) - (long)*in_stack_00000058;
    if (uVar4 < 7) {
      uVar9 = (uint)uVar4;
      uVar7 = 0x9750468;
    }
    else {
      uVar4 = (in_x9 + 3) - (long)in_stack_00000058[1];
      if (6 < uVar4) {
        if (in_x9 == (long)in_stack_00000058[2]) {
          param_1 = 2;
        }
        else if (in_x9 == (long)in_stack_00000058[3]) {
          param_1 = 3;
        }
        else {
LAB_02d00c0c:
          param_1 = in_x9 + 0xf;
        }
        goto LAB_02d00c10;
      }
      uVar9 = (uint)uVar4;
      uVar7 = 0xfdb1ace;
    }
    param_1 = (ulong)(uVar7 >> (ulong)((uVar9 & 7) << 2) & 0xf);
    goto LAB_02d00c10;
  }
  param_1 = 1;
  goto LAB_02d00c10;
}


