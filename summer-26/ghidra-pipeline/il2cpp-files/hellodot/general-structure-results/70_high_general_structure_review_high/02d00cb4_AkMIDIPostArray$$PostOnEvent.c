/*
FUNCTION_NAME: AkMIDIPostArray$$PostOnEvent
ENTRY_POINT: 02d00cb4
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
  uint uVar4;
  long lVar5;
  ulong *puVar6;
  ulong in_x7;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong in_x9;
  ulong uVar12;
  ulong *puVar13;
  int in_w10;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong in_x11;
  ulong in_x12;
  ulong in_x13;
  ulong uVar17;
  ulong in_x14;
  char cVar18;
  ulong uVar19;
  long in_x15;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined4 *in_x16;
  undefined4 *puVar24;
  long in_x17;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long unaff_x23;
  long unaff_x24;
  ulong uVar29;
  long *unaff_x25;
  ulong uVar30;
  long *unaff_x26;
  ulong unaff_x30;
  undefined8 uVar31;
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
code_r0x02d00cb4:
  uVar9 = (ulong)(uint)(in_w10 + (int)((in_x14 & 1 | in_x15 << 1) - 2 << (in_x12 & 0x3f)) |
                       (int)in_x15 << 10);
  uVar15 = param_1 - (in_x11 << (in_x13 & 0x3f)) >> (in_x12 & 0x3f);
  puVar24 = in_x16;
  do {
    *(short *)((long)puVar24 + 0xe) = (short)uVar9;
    puVar24[2] = (int)uVar15;
    uVar14 = (uint)uStack00000000000000a8;
    if (5 < uStack00000000000000a8) {
      if (uStack00000000000000a8 < 0x82) {
        uVar14 = ((uint)LZCOUNT((int)(uStack00000000000000a8 - 2)) ^ 0x1f) - 1;
        uVar14 = (int)(uStack00000000000000a8 - 2 >> ((ulong)uVar14 & 0x3f)) + uVar14 * 2 + 2;
      }
      else if (uStack00000000000000a8 < 0x842) {
        uVar14 = ((uint)LZCOUNT(uVar14 - 0x42) ^ 0x1f) + 10;
      }
      else if (uStack00000000000000a8 >> 1 < 0xc21) {
        uVar14 = 0x15;
      }
      else {
        uVar14 = 0x16;
        if (0x5841 < uStack00000000000000a8) {
          uVar14 = 0x17;
        }
      }
    }
    uVar8 = (uint)unaff_x30;
    if (uVar8 < 10) {
      uVar8 = uVar8 - 2;
    }
    else if (uVar8 < 0x86) {
      uVar4 = ((uint)LZCOUNT((int)((long)(int)uVar8 - 6U)) ^ 0x1f) - 1;
      uVar8 = (int)((long)(int)uVar8 - 6U >> ((ulong)uVar4 & 0x3f)) + uVar4 * 2 + 4;
    }
    else if (uVar8 < 0x846) {
      uVar8 = ((uint)LZCOUNT(uVar8 - 0x46) ^ 0x1f) + 0xc;
    }
    else {
      uVar8 = 0x17;
    }
    uVar7 = (ushort)uVar8 & 7 | (ushort)((uVar14 & 7) << 3);
    if ((((uVar9 & 0x3ff) == 0) && ((uVar14 & 0xffff) < 8)) && ((uVar8 & 0xffff) < 0x10)) {
      if (7 < (uVar8 & 0xffff)) {
        uVar7 = uVar7 | 0x40;
      }
    }
    else {
      uVar14 = (uVar14 >> 3 & 0x1fff) * 3 + ((uVar8 & 0xfff8) >> 3);
      uVar7 = (((ushort)(0x520d40 >> (ulong)((uVar14 & 0xf) << 1)) & 0xc0) + (short)uVar14 * 0x40 |
              uVar7) + 0x40;
    }
    *(ushort *)(puVar24 + 3) = uVar7;
    uVar9 = param_3 + unaff_x30;
    uVar15 = uVar9;
    if (in_stack_00000050 <= uVar9) {
      uVar15 = in_stack_00000050;
    }
    *in_stack_00000040 = *in_stack_00000040 + uStack00000000000000a8;
    uVar19 = param_3 + 2;
    if (in_x9 < unaff_x30 >> 2) {
      uVar12 = uVar9 + in_x9 * -4;
      uVar16 = uVar19;
      if (uVar19 <= uVar12) {
        uVar16 = uVar12;
      }
      uVar19 = uVar15;
      if (uVar16 <= uVar15) {
        uVar19 = uVar16;
      }
    }
    param_3 = unaff_x23 + unaff_x30 * 2 + param_3;
    in_x16 = puVar24 + 4;
    if (uVar19 < uVar15) {
      do {
        *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar19 & param_5)) *
                                                  0x35a7bd1e35a7bd00) >> 0x2c) +
                                   ((uint)uVar19 & 0x18)) & 0xfffff) * 4) = (uint)uVar19;
        uVar19 = uVar19 + 1;
      } while (uVar15 != uVar19);
      uStack00000000000000a8 = 0;
    }
    else {
      uStack00000000000000a8 = 0;
    }
LAB_02d00f7c:
    uVar15 = uVar9;
    uVar9 = in_stack_00000088 - uVar15;
    if (in_stack_00000088 <= uVar15 + 8) {
      *unaff_x25 = uVar9 + uStack00000000000000a8;
      *unaff_x26 = *unaff_x26 + ((long)in_x16 - in_stack_00000020 >> 4);
      return;
    }
    uVar16 = uVar15 & param_5;
    uStack00000000000000a0 = (ulong)*in_stack_00000058;
    puVar1 = (ulong *)(param_4 + uVar16);
    uVar12 = *puVar1;
    cVar18 = (char)*puVar1;
    uVar19 = uVar15;
    if (in_stack_00000098 <= uVar15) {
      uVar19 = in_stack_00000098;
    }
    uVar17 = uVar9 >> 3;
    if (uVar15 - uStack00000000000000a0 < uVar15) {
      uVar10 = in_stack_00000070 & uVar15 - uStack00000000000000a0;
      puVar6 = (ulong *)(param_4 + uVar10);
      if (cVar18 != (char)*puVar6) goto LAB_02d006fc;
      if (uVar17 == 0) {
        uVar11 = 0;
        puVar13 = puVar1;
LAB_02d00fcc:
        uVar12 = uVar9 & 7;
        unaff_x30 = uVar11;
        if (uVar12 != 0) {
          uVar10 = uVar11 | uVar12;
          do {
            unaff_x30 = uVar11;
            if (*(char *)((long)puVar6 + uVar11) != (char)*puVar13) break;
            puVar13 = (ulong *)((long)puVar13 + 1);
            uVar12 = uVar12 - 1;
            uVar11 = uVar11 + 1;
            unaff_x30 = uVar10;
          } while (uVar12 != 0);
        }
      }
      else {
        uVar26 = *puVar6;
        if (uVar12 == uVar26) {
          uVar11 = uVar9 & 0xfffffffffffffff8;
          lVar25 = 0;
          uVar29 = uVar17;
          do {
            uVar29 = uVar29 - 1;
            puVar13 = (ulong *)((long)puVar1 + uVar11);
            if (uVar29 == 0) goto LAB_02d00fcc;
            uVar12 = *(ulong *)(in_stack_00000008 + uVar16 + lVar25);
            uVar26 = *(ulong *)(in_stack_00000008 + uVar10 + lVar25);
            lVar25 = lVar25 + 8;
          } while (uVar12 == uVar26);
        }
        else {
          lVar25 = 0;
        }
        uVar12 = ((uVar26 ^ uVar12) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((uVar26 ^ uVar12) & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        unaff_x30 = lVar25 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
      }
      if ((unaff_x30 < 4) || (uVar12 = unaff_x30 * 0x87 + 0x78f, uVar12 < 0x7e5)) goto LAB_02d006fc;
      cVar18 = *(char *)(param_4 + unaff_x30 + uVar16);
    }
    else {
LAB_02d006fc:
      uStack00000000000000a0 = 0;
      unaff_x30 = 0;
      uVar12 = 0x7e4;
    }
    lVar25 = 0;
    uVar10 = uVar9 & 7;
    do {
      uVar26 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar25 * 8) * 4);
      uVar11 = uVar26 & param_5;
      uVar26 = uVar15 - uVar26;
      if (cVar18 == *(char *)(param_4 + uVar11 + unaff_x30) && uVar26 - 1 < uVar19) {
        lVar2 = param_4 + uVar11;
        uVar11 = 0;
        puVar6 = puVar1;
        uVar29 = uVar11;
        for (uVar20 = uVar17; uVar20 != 0; uVar20 = uVar20 - 1) {
          uVar29 = *(ulong *)(lVar2 + uVar11);
          if (*(ulong *)((long)puVar1 + uVar11) != uVar29) {
            uVar29 = uVar29 ^ *(ulong *)((long)puVar1 + uVar11);
            uVar29 = (uVar29 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar29 & 0x5555555555555555) << 1;
            uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 | (uVar29 & 0x3333333333333333) << 2;
            uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 | (uVar29 & 0xff00ff00ff00ff) << 8;
            uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
            uVar11 = uVar11 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3);
            goto LAB_02d007b0;
          }
          uVar11 = uVar11 + 8;
          puVar6 = (ulong *)((long)puVar1 + (uVar9 & 0xfffffffffffffff8));
          uVar29 = uVar9 & 0xfffffffffffffff8;
        }
        uVar11 = uVar29;
        if (uVar10 != 0) {
          uVar27 = uVar29 | uVar10;
          uVar20 = uVar10;
          do {
            uVar11 = uVar29;
            unaff_x25 = in_stack_00000010;
            if (*(char *)(lVar2 + uVar29) != (char)*puVar6) break;
            puVar6 = (ulong *)((long)puVar6 + 1);
            uVar20 = uVar20 - 1;
            uVar29 = uVar29 + 1;
            uVar11 = uVar27;
          } while (uVar20 != 0);
        }
LAB_02d007b0:
        if ((3 < uVar11) &&
           (uVar29 = (uVar11 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar26) ^ 0x1f) * 0x1e)) + 0x780,
           uVar12 < uVar29)) {
          cVar18 = *(char *)(param_4 + uVar11 + uVar16);
          uVar12 = uVar29;
          unaff_x30 = uVar11;
          uStack00000000000000a0 = uVar26;
        }
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 != 4);
    *(int *)(in_x17 + *(long *)(unaff_x24 + (uVar15 >> 3 & 3) * 8) * 4) = (int)uVar15;
    unaff_x26 = in_stack_00000060;
    if (uVar12 < 0x7e5) {
      uVar9 = uVar15 + 1;
      uStack00000000000000a8 = uStack00000000000000a8 + 1;
      if (param_3 < uVar9) {
        if (param_3 + in_stack_00000028 < uVar9) {
          uVar19 = uVar15 + 0x11;
          if (in_stack_00000030 <= uVar15 + 0x11) {
            uVar19 = in_stack_00000030;
          }
          for (; uVar9 < uVar19; uVar9 = uVar9 + 4) {
            uStack00000000000000a8 = uStack00000000000000a8 + 4;
            *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar9 & param_5)) *
                                                      0x35a7bd1e35a7bd00) >> 0x2c) +
                                       ((uint)uVar9 & 0x18)) & 0xfffff) * 4) = (uint)uVar9;
          }
        }
        else {
          uVar19 = uVar15 + 9;
          if (in_stack_00000030 <= uVar15 + 9) {
            uVar19 = in_stack_00000030;
          }
          for (; uVar9 < uVar19; uVar9 = uVar9 + 2) {
            uStack00000000000000a8 = uStack00000000000000a8 + 2;
            *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_4 + (uVar9 & param_5)) *
                                                      0x35a7bd1e35a7bd00) >> 0x2c) +
                                       ((uint)uVar9 & 0x18)) & 0xfffff) * 4) = (uint)uVar9;
          }
        }
      }
      goto LAB_02d00f7c;
    }
    iVar3 = *in_stack_00000058;
    uVar14 = 0;
    uVar19 = uVar9;
    do {
      uVar19 = uVar19 - 1;
      uVar9 = uVar9 - 1;
      uVar16 = unaff_x30 - 1;
      if (uVar9 <= unaff_x30 - 1) {
        uVar16 = uVar9;
      }
      uVar17 = uVar15 + 1;
      uVar10 = uVar17 & param_5;
      if (4 < *(int *)(in_stack_00000080 + 4)) {
        uVar16 = 0;
      }
      puVar1 = (ulong *)(param_4 + uVar10);
      uVar11 = in_stack_00000098;
      if (uVar17 < in_stack_00000098) {
        uVar11 = uVar15 + 1;
      }
      uVar20 = *puVar1;
      cVar18 = *(char *)(param_4 + uVar16 + uVar10);
      uVar29 = uVar9 >> 3;
      uVar26 = uVar17 - (long)iVar3;
      if ((uVar26 < uVar17) &&
         (uVar26 = in_stack_00000070 & uVar26, cVar18 == *(char *)(param_4 + uVar26 + uVar16))) {
        if (uVar29 == 0) {
          uVar27 = 0;
          puVar6 = puVar1;
LAB_02d00ae4:
          uVar20 = uVar9 & 7;
          uVar28 = uVar27;
          if (uVar20 != 0) {
            uVar21 = uVar27 | uVar20;
            do {
              uVar28 = uVar27;
              if (*(char *)((long)(param_4 + uVar26) + uVar27) != (char)*puVar6) break;
              puVar6 = (ulong *)((long)puVar6 + 1);
              uVar20 = uVar20 - 1;
              uVar27 = uVar27 + 1;
              uVar28 = uVar21;
            } while (uVar20 != 0);
          }
        }
        else {
          uVar28 = *(ulong *)(param_4 + uVar26);
          if (uVar20 == uVar28) {
            uVar21 = uVar19 >> 3;
            uVar27 = uVar9 & 0xfffffffffffffff8;
            lVar25 = 0;
            do {
              uVar21 = uVar21 - 1;
              puVar6 = (ulong *)((long)puVar1 + uVar27);
              if (uVar21 == 0) goto LAB_02d00ae4;
              uVar20 = *(ulong *)(in_stack_00000008 + uVar10 + lVar25);
              uVar28 = *(ulong *)(in_stack_00000008 + uVar26 + lVar25);
              lVar25 = lVar25 + 8;
            } while (uVar20 == uVar28);
          }
          else {
            lVar25 = 0;
          }
          uVar26 = ((uVar28 ^ uVar20) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((uVar28 ^ uVar20) & 0x5555555555555555) << 1;
          uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
          uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
          uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
          uVar28 = lVar25 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3);
        }
        if ((uVar28 < 4) || (uVar26 = uVar28 * 0x87 + 0x78f, uVar26 < 0x7e5)) goto LAB_02d00938;
        cVar18 = *(char *)(param_4 + uVar28 + uVar10);
        uVar20 = (long)iVar3;
        uVar16 = uVar28;
      }
      else {
LAB_02d00938:
        uVar20 = 0;
        uVar26 = 0x7e4;
      }
      lVar25 = 0;
      uVar27 = uVar9 & 7;
      do {
        uVar28 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar25 * 8) * 4);
        uVar21 = uVar28 & param_5;
        uVar28 = uVar17 - uVar28;
        if (cVar18 == *(char *)(param_4 + uVar21 + uVar16) && uVar28 - 1 < uVar11) {
          lVar2 = param_4 + uVar21;
          if (uVar29 == 0) {
            puVar6 = puVar1;
            uVar21 = 0;
          }
          else {
            lVar5 = 0;
            uVar22 = uVar29;
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
              puVar6 = (ulong *)((long)puVar1 + (uVar9 & 0xfffffffffffffff8));
              uVar21 = uVar9 & 0xfffffffffffffff8;
            } while (uVar22 != 0);
          }
          uVar22 = uVar21;
          if (uVar27 != 0) {
            uVar30 = uVar21 | uVar27;
            uVar23 = uVar27;
            do {
              uVar22 = uVar21;
              unaff_x25 = in_stack_00000010;
              if (*(char *)(lVar2 + uVar21) != (char)*puVar6) break;
              puVar6 = (ulong *)((long)puVar6 + 1);
              uVar23 = uVar23 - 1;
              uVar21 = uVar21 + 1;
              uVar22 = uVar30;
            } while (uVar23 != 0);
          }
LAB_02d009f0:
          if ((3 < uVar22) &&
             (uVar21 = (uVar22 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar28) ^ 0x1f) * 0x1e)) + 0x780
             , uVar26 < uVar21)) {
            cVar18 = *(char *)(param_4 + uVar22 + uVar10);
            uVar26 = uVar21;
            uVar20 = uVar28;
            uVar16 = uVar22;
          }
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 != 4);
      *(int *)(in_x17 + *(long *)(unaff_x24 + (uVar17 >> 3 & 3) * 8) * 4) = (int)uVar17;
      param_3 = uVar15;
      in_x9 = uStack00000000000000a0;
    } while (((uVar12 + 0xaf <= uVar26) &&
             (uStack00000000000000a8 = uStack00000000000000a8 + 1, param_3 = uVar17, in_x9 = uVar20,
             unaff_x30 = uVar16, uVar14 < 3)) &&
            (uVar16 = uVar15 + 9, uVar14 = uVar14 + 1, uVar12 = uVar26, uVar15 = uVar17,
            uStack00000000000000a0 = uVar20, uVar16 < in_stack_00000088));
    uVar15 = param_3 + in_stack_00000038;
    if (in_stack_00000098 <= param_3 + in_stack_00000038) {
      uVar15 = in_stack_00000098;
    }
    if (uVar15 < in_x9) {
LAB_02d00c0c:
      uVar9 = in_x9 + 0xf;
LAB_02d00c10:
      if ((in_x9 <= uVar15) && (uVar9 != 0)) {
        uVar31 = *(undefined8 *)in_stack_00000058;
        *in_stack_00000058 = (int)in_x9;
        in_stack_00000058[3] = in_stack_00000058[2];
        *(undefined8 *)(in_stack_00000058 + 1) = uVar31;
      }
    }
    else {
      if (in_x9 != (long)*in_stack_00000058) {
        if (in_x9 == (long)in_stack_00000058[1]) {
          uVar9 = 1;
        }
        else {
          uVar9 = (in_x9 + 3) - (long)*in_stack_00000058;
          if (uVar9 < 7) {
            uVar8 = (uint)uVar9;
            uVar14 = 0x9750468;
          }
          else {
            uVar9 = (in_x9 + 3) - (long)in_stack_00000058[1];
            if (6 < uVar9) {
              if (in_x9 == (long)in_stack_00000058[2]) {
                uVar9 = 2;
              }
              else {
                if (in_x9 != (long)in_stack_00000058[3]) goto LAB_02d00c0c;
                uVar9 = 3;
              }
              goto LAB_02d00c10;
            }
            uVar8 = (uint)uVar9;
            uVar14 = 0xfdb1ace;
          }
          uVar9 = (ulong)(uVar14 >> (ulong)((uVar8 & 7) << 2) & 0xf);
        }
        goto LAB_02d00c10;
      }
      uVar9 = 0;
    }
    *in_x16 = (int)uStack00000000000000a8;
    puVar24[5] = (int)unaff_x30;
    uVar15 = (ulong)*(uint *)(in_stack_00000080 + 0x44) + 0x10;
    unaff_x23 = in_stack_00000048;
    if (uVar15 <= uVar9) break;
    uVar15 = 0;
    puVar24 = in_x16;
  } while( true );
  in_x12 = (ulong)*(uint *)(in_stack_00000080 + 0x40);
  param_1 = ((uVar9 - *(uint *)(in_stack_00000080 + 0x44)) + (4L << (in_x12 & 0x3f))) - 0x10;
  in_x13 = (ulong)(((uint)LZCOUNT((uint)param_1) ^ 0x1f) - 1);
  in_w10 = ((uint)param_1 &
           (-1 << (ulong)(*(uint *)(in_stack_00000080 + 0x40) & 0x1f) ^ 0xffffffffU)) + (int)uVar15;
  in_x14 = param_1 >> (in_x13 & 0x3f);
  in_x15 = in_x13 - in_x12;
  in_x11 = in_x14 & 1 | 2;
  goto code_r0x02d00cb4;
}


