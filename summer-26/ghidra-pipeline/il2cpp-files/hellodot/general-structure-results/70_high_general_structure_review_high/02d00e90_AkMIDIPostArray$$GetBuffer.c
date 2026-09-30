/*
FUNCTION_NAME: AkMIDIPostArray$$GetBuffer
ENTRY_POINT: 02d00e90
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


void AkMIDIPostArray__GetBuffer(undefined8 param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong in_x7;
  uint uVar6;
  uint in_w8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong in_x9;
  ulong uVar10;
  ulong *puVar11;
  int iVar12;
  ulong in_x10;
  uint in_w11;
  ulong uVar13;
  ulong uVar14;
  char cVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int *in_x16;
  int *piVar21;
  long in_x17;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long unaff_x23;
  long unaff_x24;
  ulong uVar26;
  long *unaff_x25;
  ulong uVar27;
  long *unaff_x26;
  uint uVar28;
  ulong unaff_x30;
  undefined8 uVar29;
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
code_r0x02d00e90:
  uVar28 = ((uint)in_x10 >> 3 & 0x1fff) * 3 + ((in_w11 & 0xfff8) >> 3);
  piVar21 = in_x16;
  in_w8 = ((0x520d40U >> (ulong)((uVar28 & 0xf) << 1) & 0xc0) + uVar28 * 0x40 | in_w8) + 0x40;
  do {
    *(short *)(piVar21 + 3) = (short)in_w8;
    uVar3 = param_2 + unaff_x30;
    uVar7 = uVar3;
    if (in_stack_00000050 <= uVar3) {
      uVar7 = in_stack_00000050;
    }
    *in_stack_00000040 = *in_stack_00000040 + uStack00000000000000a8;
    uVar16 = param_2 + 2;
    if (in_x9 < unaff_x30 >> 2) {
      uVar10 = uVar3 + in_x9 * -4;
      uVar13 = uVar16;
      if (uVar16 <= uVar10) {
        uVar13 = uVar10;
      }
      uVar16 = uVar7;
      if (uVar13 <= uVar7) {
        uVar16 = uVar13;
      }
    }
    param_2 = unaff_x23 + unaff_x30 * 2 + param_2;
    in_x16 = piVar21 + 4;
    if (uVar16 < uVar7) {
      do {
        *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_3 + (uVar16 & param_4)) *
                                                  0x35a7bd1e35a7bd00) >> 0x2c) +
                                   ((uint)uVar16 & 0x18)) & 0xfffff) * 4) = (uint)uVar16;
        uVar16 = uVar16 + 1;
      } while (uVar7 != uVar16);
      uStack00000000000000a8 = 0;
    }
    else {
      uStack00000000000000a8 = 0;
    }
LAB_02d00f7c:
    uVar7 = uVar3;
    uVar3 = in_stack_00000088 - uVar7;
    if (in_stack_00000088 <= uVar7 + 8) {
      *unaff_x25 = uVar3 + uStack00000000000000a8;
      *unaff_x26 = *unaff_x26 + ((long)in_x16 - in_stack_00000020 >> 4);
      return;
    }
    uVar13 = uVar7 & param_4;
    uStack00000000000000a0 = (ulong)*in_stack_00000058;
    puVar1 = (ulong *)(param_3 + uVar13);
    uVar10 = *puVar1;
    cVar15 = (char)*puVar1;
    uVar16 = uVar7;
    if (in_stack_00000098 <= uVar7) {
      uVar16 = in_stack_00000098;
    }
    uVar14 = uVar3 >> 3;
    if (uVar7 - uStack00000000000000a0 < uVar7) {
      uVar8 = in_stack_00000070 & uVar7 - uStack00000000000000a0;
      puVar5 = (ulong *)(param_3 + uVar8);
      if (cVar15 != (char)*puVar5) goto LAB_02d006fc;
      if (uVar14 == 0) {
        uVar9 = 0;
        puVar11 = puVar1;
LAB_02d00fcc:
        uVar10 = uVar3 & 7;
        unaff_x30 = uVar9;
        if (uVar10 != 0) {
          uVar8 = uVar9 | uVar10;
          do {
            unaff_x30 = uVar9;
            if (*(char *)((long)puVar5 + uVar9) != (char)*puVar11) break;
            puVar11 = (ulong *)((long)puVar11 + 1);
            uVar10 = uVar10 - 1;
            uVar9 = uVar9 + 1;
            unaff_x30 = uVar8;
          } while (uVar10 != 0);
        }
      }
      else {
        uVar23 = *puVar5;
        if (uVar10 == uVar23) {
          uVar9 = uVar3 & 0xfffffffffffffff8;
          lVar22 = 0;
          uVar26 = uVar14;
          do {
            uVar26 = uVar26 - 1;
            puVar11 = (ulong *)((long)puVar1 + uVar9);
            if (uVar26 == 0) goto LAB_02d00fcc;
            uVar10 = *(ulong *)(in_stack_00000008 + uVar13 + lVar22);
            uVar23 = *(ulong *)(in_stack_00000008 + uVar8 + lVar22);
            lVar22 = lVar22 + 8;
          } while (uVar10 == uVar23);
        }
        else {
          lVar22 = 0;
        }
        uVar10 = ((uVar23 ^ uVar10) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((uVar23 ^ uVar10) & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        unaff_x30 = lVar22 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3);
      }
      if ((unaff_x30 < 4) || (uVar10 = unaff_x30 * 0x87 + 0x78f, uVar10 < 0x7e5)) goto LAB_02d006fc;
      cVar15 = *(char *)(param_3 + unaff_x30 + uVar13);
    }
    else {
LAB_02d006fc:
      uStack00000000000000a0 = 0;
      unaff_x30 = 0;
      uVar10 = 0x7e4;
    }
    lVar22 = 0;
    uVar8 = uVar3 & 7;
    do {
      uVar23 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar22 * 8) * 4);
      uVar9 = uVar23 & param_4;
      uVar23 = uVar7 - uVar23;
      if (cVar15 == *(char *)(param_3 + uVar9 + unaff_x30) && uVar23 - 1 < uVar16) {
        lVar2 = param_3 + uVar9;
        uVar9 = 0;
        puVar5 = puVar1;
        uVar26 = uVar9;
        for (uVar17 = uVar14; uVar17 != 0; uVar17 = uVar17 - 1) {
          uVar26 = *(ulong *)(lVar2 + uVar9);
          if (*(ulong *)((long)puVar1 + uVar9) != uVar26) {
            uVar26 = uVar26 ^ *(ulong *)((long)puVar1 + uVar9);
            uVar26 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
            uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
            uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
            uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
            uVar9 = uVar9 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 3);
            goto LAB_02d007b0;
          }
          uVar9 = uVar9 + 8;
          puVar5 = (ulong *)((long)puVar1 + (uVar3 & 0xfffffffffffffff8));
          uVar26 = uVar3 & 0xfffffffffffffff8;
        }
        uVar9 = uVar26;
        if (uVar8 != 0) {
          uVar24 = uVar26 | uVar8;
          uVar17 = uVar8;
          do {
            uVar9 = uVar26;
            unaff_x25 = in_stack_00000010;
            if (*(char *)(lVar2 + uVar26) != (char)*puVar5) break;
            puVar5 = (ulong *)((long)puVar5 + 1);
            uVar17 = uVar17 - 1;
            uVar26 = uVar26 + 1;
            uVar9 = uVar24;
          } while (uVar17 != 0);
        }
LAB_02d007b0:
        if ((3 < uVar9) &&
           (uVar26 = (uVar9 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar23) ^ 0x1f) * 0x1e)) + 0x780,
           uVar10 < uVar26)) {
          cVar15 = *(char *)(param_3 + uVar9 + uVar13);
          uVar10 = uVar26;
          unaff_x30 = uVar9;
          uStack00000000000000a0 = uVar23;
        }
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 != 4);
    *(int *)(in_x17 + *(long *)(unaff_x24 + (uVar7 >> 3 & 3) * 8) * 4) = (int)uVar7;
    unaff_x26 = in_stack_00000060;
    if (uVar10 < 0x7e5) {
      uVar3 = uVar7 + 1;
      uStack00000000000000a8 = uStack00000000000000a8 + 1;
      if (param_2 < uVar3) {
        if (param_2 + in_stack_00000028 < uVar3) {
          uVar16 = uVar7 + 0x11;
          if (in_stack_00000030 <= uVar7 + 0x11) {
            uVar16 = in_stack_00000030;
          }
          for (; uVar3 < uVar16; uVar3 = uVar3 + 4) {
            uStack00000000000000a8 = uStack00000000000000a8 + 4;
            *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_3 + (uVar3 & param_4)) *
                                                      0x35a7bd1e35a7bd00) >> 0x2c) +
                                       ((uint)uVar3 & 0x18)) & 0xfffff) * 4) = (uint)uVar3;
          }
        }
        else {
          uVar16 = uVar7 + 9;
          if (in_stack_00000030 <= uVar7 + 9) {
            uVar16 = in_stack_00000030;
          }
          for (; uVar3 < uVar16; uVar3 = uVar3 + 2) {
            uStack00000000000000a8 = uStack00000000000000a8 + 2;
            *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_3 + (uVar3 & param_4)) *
                                                      0x35a7bd1e35a7bd00) >> 0x2c) +
                                       ((uint)uVar3 & 0x18)) & 0xfffff) * 4) = (uint)uVar3;
          }
        }
      }
      goto LAB_02d00f7c;
    }
    iVar12 = *in_stack_00000058;
    uVar28 = 0;
    uVar16 = uVar3;
    do {
      uVar16 = uVar16 - 1;
      uVar3 = uVar3 - 1;
      uVar13 = unaff_x30 - 1;
      if (uVar3 <= unaff_x30 - 1) {
        uVar13 = uVar3;
      }
      uVar14 = uVar7 + 1;
      uVar8 = uVar14 & param_4;
      if (4 < *(int *)(in_stack_00000080 + 4)) {
        uVar13 = 0;
      }
      puVar1 = (ulong *)(param_3 + uVar8);
      uVar9 = in_stack_00000098;
      if (uVar14 < in_stack_00000098) {
        uVar9 = uVar7 + 1;
      }
      uVar17 = *puVar1;
      cVar15 = *(char *)(param_3 + uVar13 + uVar8);
      uVar26 = uVar3 >> 3;
      uVar23 = uVar14 - (long)iVar12;
      if ((uVar23 < uVar14) &&
         (uVar23 = in_stack_00000070 & uVar23, cVar15 == *(char *)(param_3 + uVar23 + uVar13))) {
        if (uVar26 == 0) {
          uVar24 = 0;
          puVar5 = puVar1;
LAB_02d00ae4:
          uVar17 = uVar3 & 7;
          uVar25 = uVar24;
          if (uVar17 != 0) {
            uVar18 = uVar24 | uVar17;
            do {
              uVar25 = uVar24;
              if (*(char *)((long)(param_3 + uVar23) + uVar24) != (char)*puVar5) break;
              puVar5 = (ulong *)((long)puVar5 + 1);
              uVar17 = uVar17 - 1;
              uVar24 = uVar24 + 1;
              uVar25 = uVar18;
            } while (uVar17 != 0);
          }
        }
        else {
          uVar25 = *(ulong *)(param_3 + uVar23);
          if (uVar17 == uVar25) {
            uVar18 = uVar16 >> 3;
            uVar24 = uVar3 & 0xfffffffffffffff8;
            lVar22 = 0;
            do {
              uVar18 = uVar18 - 1;
              puVar5 = (ulong *)((long)puVar1 + uVar24);
              if (uVar18 == 0) goto LAB_02d00ae4;
              uVar17 = *(ulong *)(in_stack_00000008 + uVar8 + lVar22);
              uVar25 = *(ulong *)(in_stack_00000008 + uVar23 + lVar22);
              lVar22 = lVar22 + 8;
            } while (uVar17 == uVar25);
          }
          else {
            lVar22 = 0;
          }
          uVar23 = ((uVar25 ^ uVar17) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((uVar25 ^ uVar17) & 0x5555555555555555) << 1;
          uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
          uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
          uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
          uVar25 = lVar22 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
        }
        if ((uVar25 < 4) || (uVar23 = uVar25 * 0x87 + 0x78f, uVar23 < 0x7e5)) goto LAB_02d00938;
        cVar15 = *(char *)(param_3 + uVar25 + uVar8);
        uVar17 = (long)iVar12;
        uVar13 = uVar25;
      }
      else {
LAB_02d00938:
        uVar17 = 0;
        uVar23 = 0x7e4;
      }
      lVar22 = 0;
      uVar24 = uVar3 & 7;
      do {
        uVar25 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar22 * 8) * 4);
        uVar18 = uVar25 & param_4;
        uVar25 = uVar14 - uVar25;
        if (cVar15 == *(char *)(param_3 + uVar18 + uVar13) && uVar25 - 1 < uVar9) {
          lVar2 = param_3 + uVar18;
          if (uVar26 == 0) {
            puVar5 = puVar1;
            uVar18 = 0;
          }
          else {
            lVar4 = 0;
            uVar19 = uVar26;
            do {
              uVar18 = *(ulong *)(lVar2 + lVar4);
              if (*(ulong *)((long)puVar1 + lVar4) != uVar18) {
                uVar18 = uVar18 ^ *(ulong *)((long)puVar1 + lVar4);
                uVar18 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
                uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
                uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
                uVar19 = lVar4 + ((ulong)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) >> 3);
                goto LAB_02d009f0;
              }
              uVar19 = uVar19 - 1;
              lVar4 = lVar4 + 8;
              puVar5 = (ulong *)((long)puVar1 + (uVar3 & 0xfffffffffffffff8));
              uVar18 = uVar3 & 0xfffffffffffffff8;
            } while (uVar19 != 0);
          }
          uVar19 = uVar18;
          if (uVar24 != 0) {
            uVar27 = uVar18 | uVar24;
            uVar20 = uVar24;
            do {
              uVar19 = uVar18;
              unaff_x25 = in_stack_00000010;
              if (*(char *)(lVar2 + uVar18) != (char)*puVar5) break;
              puVar5 = (ulong *)((long)puVar5 + 1);
              uVar20 = uVar20 - 1;
              uVar18 = uVar18 + 1;
              uVar19 = uVar27;
            } while (uVar20 != 0);
          }
LAB_02d009f0:
          if ((3 < uVar19) &&
             (uVar18 = (uVar19 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar25) ^ 0x1f) * 0x1e)) + 0x780
             , uVar23 < uVar18)) {
            cVar15 = *(char *)(param_3 + uVar19 + uVar8);
            uVar23 = uVar18;
            uVar17 = uVar25;
            uVar13 = uVar19;
          }
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 != 4);
      *(int *)(in_x17 + *(long *)(unaff_x24 + (uVar14 >> 3 & 3) * 8) * 4) = (int)uVar14;
      param_2 = uVar7;
      in_x9 = uStack00000000000000a0;
    } while (((uVar10 + 0xaf <= uVar23) &&
             (uStack00000000000000a8 = uStack00000000000000a8 + 1, param_2 = uVar14, in_x9 = uVar17,
             unaff_x30 = uVar13, uVar28 < 3)) &&
            (uVar13 = uVar7 + 9, uVar28 = uVar28 + 1, uVar10 = uVar23, uVar7 = uVar14,
            uStack00000000000000a0 = uVar17, uVar13 < in_stack_00000088));
    uVar3 = param_2 + in_stack_00000038;
    if (in_stack_00000098 <= param_2 + in_stack_00000038) {
      uVar3 = in_stack_00000098;
    }
    if (uVar3 < in_x9) {
LAB_02d00c0c:
      uVar7 = in_x9 + 0xf;
LAB_02d00c10:
      if ((in_x9 <= uVar3) && (uVar7 != 0)) {
        uVar29 = *(undefined8 *)in_stack_00000058;
        *in_stack_00000058 = (int)in_x9;
        in_stack_00000058[3] = in_stack_00000058[2];
        *(undefined8 *)(in_stack_00000058 + 1) = uVar29;
      }
    }
    else {
      if (in_x9 != (long)*in_stack_00000058) {
        if (in_x9 == (long)in_stack_00000058[1]) {
          uVar7 = 1;
        }
        else {
          uVar7 = (in_x9 + 3) - (long)*in_stack_00000058;
          if (uVar7 < 7) {
            uVar6 = (uint)uVar7;
            uVar28 = 0x9750468;
          }
          else {
            uVar7 = (in_x9 + 3) - (long)in_stack_00000058[1];
            if (6 < uVar7) {
              if (in_x9 == (long)in_stack_00000058[2]) {
                uVar7 = 2;
              }
              else {
                if (in_x9 != (long)in_stack_00000058[3]) goto LAB_02d00c0c;
                uVar7 = 3;
              }
              goto LAB_02d00c10;
            }
            uVar6 = (uint)uVar7;
            uVar28 = 0xfdb1ace;
          }
          uVar7 = (ulong)(uVar28 >> (ulong)((uVar6 & 7) << 2) & 0xf);
        }
        goto LAB_02d00c10;
      }
      uVar7 = 0;
    }
    uVar28 = (uint)unaff_x30;
    *in_x16 = (int)uStack00000000000000a8;
    piVar21[5] = uVar28;
    uVar3 = (ulong)*(uint *)(in_stack_00000080 + 0x44) + 0x10;
    if (uVar7 < uVar3) {
      iVar12 = 0;
    }
    else {
      uVar13 = (ulong)*(uint *)(in_stack_00000080 + 0x40);
      uVar16 = ((uVar7 - *(uint *)(in_stack_00000080 + 0x44)) + (4L << (uVar13 & 0x3f))) - 0x10;
      uVar10 = (ulong)(((uint)LZCOUNT((uint)uVar16) ^ 0x1f) - 1);
      uVar14 = uVar16 >> (uVar10 & 0x3f);
      uVar7 = (ulong)(((uint)uVar16 &
                      (-1 << (ulong)(*(uint *)(in_stack_00000080 + 0x40) & 0x1f) ^ 0xffffffffU)) +
                      (int)uVar3 +
                      (int)((uVar14 & 1 | (uVar10 - uVar13) * 2) - 2 << (uVar13 & 0x3f)) |
                     (int)(uVar10 - uVar13) << 10);
      iVar12 = (int)(uVar16 - ((uVar14 & 1 | 2) << (uVar10 & 0x3f)) >> (uVar13 & 0x3f));
    }
    *(short *)((long)piVar21 + 0x1e) = (short)uVar7;
    piVar21[6] = iVar12;
    if (uStack00000000000000a8 < 6) {
      in_x10 = uStack00000000000000a8 & 0xffffffff;
    }
    else if (uStack00000000000000a8 < 0x82) {
      uVar6 = ((uint)LZCOUNT((int)(uStack00000000000000a8 - 2)) ^ 0x1f) - 1;
      in_x10 = (ulong)((int)(uStack00000000000000a8 - 2 >> ((ulong)uVar6 & 0x3f)) + uVar6 * 2 + 2);
    }
    else if (uStack00000000000000a8 < 0x842) {
      in_x10 = (ulong)(((uint)LZCOUNT((int)uStack00000000000000a8 + -0x42) ^ 0x1f) + 10);
    }
    else if (uStack00000000000000a8 >> 1 < 0xc21) {
      in_x10 = 0x15;
    }
    else {
      uVar6 = 0x16;
      if (0x5841 < uStack00000000000000a8) {
        uVar6 = 0x17;
      }
      in_x10 = (ulong)uVar6;
    }
    if (uVar28 < 10) {
      in_w11 = uVar28 - 2;
    }
    else if (uVar28 < 0x86) {
      uVar6 = ((uint)LZCOUNT((int)((long)(int)uVar28 - 6U)) ^ 0x1f) - 1;
      in_w11 = (int)((long)(int)uVar28 - 6U >> ((ulong)uVar6 & 0x3f)) + uVar6 * 2 + 4;
    }
    else if (uVar28 < 0x846) {
      in_w11 = ((uint)LZCOUNT(uVar28 - 0x46) ^ 0x1f) + 0xc;
    }
    else {
      in_w11 = 0x17;
    }
    in_w8 = in_w11 & 7 | ((uint)in_x10 & 7) << 3;
    unaff_x23 = in_stack_00000048;
    if ((((uVar7 & 0x3ff) != 0) || (7 < ((uint)in_x10 & 0xffff))) || (0xf < (in_w11 & 0xffff)))
    goto code_r0x02d00e90;
    piVar21 = in_x16;
    if (7 < (in_w11 & 0xffff)) {
      in_w8 = in_w8 | 0x40;
    }
  } while( true );
}


