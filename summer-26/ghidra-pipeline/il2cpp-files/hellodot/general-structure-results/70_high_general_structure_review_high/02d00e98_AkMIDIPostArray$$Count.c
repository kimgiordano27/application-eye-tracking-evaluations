/*
FUNCTION_NAME: AkMIDIPostArray$$Count
ENTRY_POINT: 02d00e98
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


void AkMIDIPostArray__Count(undefined8 param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  uint uVar7;
  ulong in_x7;
  uint uVar8;
  uint in_w8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong in_x9;
  ulong uVar12;
  ulong *puVar13;
  uint uVar14;
  uint in_w10;
  uint in_w11;
  ulong uVar15;
  ulong uVar16;
  char cVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint *in_x16;
  uint *puVar23;
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
code_r0x02d00e98:
  uVar7 = in_w10 * 3 + (in_w11 >> 3);
  puVar23 = in_x16;
  in_w8 = ((0x520d40U >> (ulong)((uVar7 & 0xf) << 1) & 0xc0) + uVar7 * 0x40 | in_w8) + 0x40;
  do {
    *(short *)(puVar23 + 3) = (short)in_w8;
    uVar4 = param_2 + unaff_x30;
    uVar9 = uVar4;
    if (in_stack_00000050 <= uVar4) {
      uVar9 = in_stack_00000050;
    }
    *in_stack_00000040 = *in_stack_00000040 + uStack00000000000000a8;
    uVar18 = param_2 + 2;
    if (in_x9 < unaff_x30 >> 2) {
      uVar12 = uVar4 + in_x9 * -4;
      uVar15 = uVar18;
      if (uVar18 <= uVar12) {
        uVar15 = uVar12;
      }
      uVar18 = uVar9;
      if (uVar15 <= uVar9) {
        uVar18 = uVar15;
      }
    }
    param_2 = unaff_x23 + unaff_x30 * 2 + param_2;
    in_x16 = puVar23 + 4;
    if (uVar18 < uVar9) {
      do {
        *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_3 + (uVar18 & param_4)) *
                                                  0x35a7bd1e35a7bd00) >> 0x2c) +
                                   ((uint)uVar18 & 0x18)) & 0xfffff) * 4) = (uint)uVar18;
        uVar18 = uVar18 + 1;
      } while (uVar9 != uVar18);
      uStack00000000000000a8 = 0;
    }
    else {
      uStack00000000000000a8 = 0;
    }
LAB_02d00f7c:
    uVar9 = uVar4;
    uVar4 = in_stack_00000088 - uVar9;
    if (in_stack_00000088 <= uVar9 + 8) {
      *unaff_x25 = uVar4 + uStack00000000000000a8;
      *unaff_x26 = *unaff_x26 + ((long)in_x16 - in_stack_00000020 >> 4);
      return;
    }
    uVar15 = uVar9 & param_4;
    uStack00000000000000a0 = (ulong)*in_stack_00000058;
    puVar1 = (ulong *)(param_3 + uVar15);
    uVar12 = *puVar1;
    cVar17 = (char)*puVar1;
    uVar18 = uVar9;
    if (in_stack_00000098 <= uVar9) {
      uVar18 = in_stack_00000098;
    }
    uVar16 = uVar4 >> 3;
    if (uVar9 - uStack00000000000000a0 < uVar9) {
      uVar10 = in_stack_00000070 & uVar9 - uStack00000000000000a0;
      puVar6 = (ulong *)(param_3 + uVar10);
      if (cVar17 != (char)*puVar6) goto LAB_02d006fc;
      if (uVar16 == 0) {
        uVar11 = 0;
        puVar13 = puVar1;
LAB_02d00fcc:
        uVar12 = uVar4 & 7;
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
        uVar25 = *puVar6;
        if (uVar12 == uVar25) {
          uVar11 = uVar4 & 0xfffffffffffffff8;
          lVar24 = 0;
          uVar28 = uVar16;
          do {
            uVar28 = uVar28 - 1;
            puVar13 = (ulong *)((long)puVar1 + uVar11);
            if (uVar28 == 0) goto LAB_02d00fcc;
            uVar12 = *(ulong *)(in_stack_00000008 + uVar15 + lVar24);
            uVar25 = *(ulong *)(in_stack_00000008 + uVar10 + lVar24);
            lVar24 = lVar24 + 8;
          } while (uVar12 == uVar25);
        }
        else {
          lVar24 = 0;
        }
        uVar12 = ((uVar25 ^ uVar12) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((uVar25 ^ uVar12) & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        unaff_x30 = lVar24 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
      }
      if ((unaff_x30 < 4) || (uVar12 = unaff_x30 * 0x87 + 0x78f, uVar12 < 0x7e5)) goto LAB_02d006fc;
      cVar17 = *(char *)(param_3 + unaff_x30 + uVar15);
    }
    else {
LAB_02d006fc:
      uStack00000000000000a0 = 0;
      unaff_x30 = 0;
      uVar12 = 0x7e4;
    }
    lVar24 = 0;
    uVar10 = uVar4 & 7;
    do {
      uVar25 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar24 * 8) * 4);
      uVar11 = uVar25 & param_4;
      uVar25 = uVar9 - uVar25;
      if (cVar17 == *(char *)(param_3 + uVar11 + unaff_x30) && uVar25 - 1 < uVar18) {
        lVar2 = param_3 + uVar11;
        uVar11 = 0;
        puVar6 = puVar1;
        uVar28 = uVar11;
        for (uVar19 = uVar16; uVar19 != 0; uVar19 = uVar19 - 1) {
          uVar28 = *(ulong *)(lVar2 + uVar11);
          if (*(ulong *)((long)puVar1 + uVar11) != uVar28) {
            uVar28 = uVar28 ^ *(ulong *)((long)puVar1 + uVar11);
            uVar28 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
            uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
            uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
            uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
            uVar11 = uVar11 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3);
            goto LAB_02d007b0;
          }
          uVar11 = uVar11 + 8;
          puVar6 = (ulong *)((long)puVar1 + (uVar4 & 0xfffffffffffffff8));
          uVar28 = uVar4 & 0xfffffffffffffff8;
        }
        uVar11 = uVar28;
        if (uVar10 != 0) {
          uVar26 = uVar28 | uVar10;
          uVar19 = uVar10;
          do {
            uVar11 = uVar28;
            unaff_x25 = in_stack_00000010;
            if (*(char *)(lVar2 + uVar28) != (char)*puVar6) break;
            puVar6 = (ulong *)((long)puVar6 + 1);
            uVar19 = uVar19 - 1;
            uVar28 = uVar28 + 1;
            uVar11 = uVar26;
          } while (uVar19 != 0);
        }
LAB_02d007b0:
        if ((3 < uVar11) &&
           (uVar28 = (uVar11 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar25) ^ 0x1f) * 0x1e)) + 0x780,
           uVar12 < uVar28)) {
          cVar17 = *(char *)(param_3 + uVar11 + uVar15);
          uVar12 = uVar28;
          unaff_x30 = uVar11;
          uStack00000000000000a0 = uVar25;
        }
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 != 4);
    *(int *)(in_x17 + *(long *)(unaff_x24 + (uVar9 >> 3 & 3) * 8) * 4) = (int)uVar9;
    unaff_x26 = in_stack_00000060;
    if (uVar12 < 0x7e5) {
      uVar4 = uVar9 + 1;
      uStack00000000000000a8 = uStack00000000000000a8 + 1;
      if (param_2 < uVar4) {
        if (param_2 + in_stack_00000028 < uVar4) {
          uVar18 = uVar9 + 0x11;
          if (in_stack_00000030 <= uVar9 + 0x11) {
            uVar18 = in_stack_00000030;
          }
          for (; uVar4 < uVar18; uVar4 = uVar4 + 4) {
            uStack00000000000000a8 = uStack00000000000000a8 + 4;
            *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_3 + (uVar4 & param_4)) *
                                                      0x35a7bd1e35a7bd00) >> 0x2c) +
                                       ((uint)uVar4 & 0x18)) & 0xfffff) * 4) = (uint)uVar4;
          }
        }
        else {
          uVar18 = uVar9 + 9;
          if (in_stack_00000030 <= uVar9 + 9) {
            uVar18 = in_stack_00000030;
          }
          for (; uVar4 < uVar18; uVar4 = uVar4 + 2) {
            uStack00000000000000a8 = uStack00000000000000a8 + 2;
            *(uint *)(in_x17 + ((ulong)((uint)((ulong)(*(long *)(param_3 + (uVar4 & param_4)) *
                                                      0x35a7bd1e35a7bd00) >> 0x2c) +
                                       ((uint)uVar4 & 0x18)) & 0xfffff) * 4) = (uint)uVar4;
          }
        }
      }
      goto LAB_02d00f7c;
    }
    iVar3 = *in_stack_00000058;
    uVar7 = 0;
    uVar18 = uVar4;
    do {
      uVar18 = uVar18 - 1;
      uVar4 = uVar4 - 1;
      uVar15 = unaff_x30 - 1;
      if (uVar4 <= unaff_x30 - 1) {
        uVar15 = uVar4;
      }
      uVar16 = uVar9 + 1;
      uVar10 = uVar16 & param_4;
      if (4 < *(int *)(in_stack_00000080 + 4)) {
        uVar15 = 0;
      }
      puVar1 = (ulong *)(param_3 + uVar10);
      uVar11 = in_stack_00000098;
      if (uVar16 < in_stack_00000098) {
        uVar11 = uVar9 + 1;
      }
      uVar19 = *puVar1;
      cVar17 = *(char *)(param_3 + uVar15 + uVar10);
      uVar28 = uVar4 >> 3;
      uVar25 = uVar16 - (long)iVar3;
      if ((uVar25 < uVar16) &&
         (uVar25 = in_stack_00000070 & uVar25, cVar17 == *(char *)(param_3 + uVar25 + uVar15))) {
        if (uVar28 == 0) {
          uVar26 = 0;
          puVar6 = puVar1;
LAB_02d00ae4:
          uVar19 = uVar4 & 7;
          uVar27 = uVar26;
          if (uVar19 != 0) {
            uVar20 = uVar26 | uVar19;
            do {
              uVar27 = uVar26;
              if (*(char *)((long)(param_3 + uVar25) + uVar26) != (char)*puVar6) break;
              puVar6 = (ulong *)((long)puVar6 + 1);
              uVar19 = uVar19 - 1;
              uVar26 = uVar26 + 1;
              uVar27 = uVar20;
            } while (uVar19 != 0);
          }
        }
        else {
          uVar27 = *(ulong *)(param_3 + uVar25);
          if (uVar19 == uVar27) {
            uVar20 = uVar18 >> 3;
            uVar26 = uVar4 & 0xfffffffffffffff8;
            lVar24 = 0;
            do {
              uVar20 = uVar20 - 1;
              puVar6 = (ulong *)((long)puVar1 + uVar26);
              if (uVar20 == 0) goto LAB_02d00ae4;
              uVar19 = *(ulong *)(in_stack_00000008 + uVar10 + lVar24);
              uVar27 = *(ulong *)(in_stack_00000008 + uVar25 + lVar24);
              lVar24 = lVar24 + 8;
            } while (uVar19 == uVar27);
          }
          else {
            lVar24 = 0;
          }
          uVar25 = ((uVar27 ^ uVar19) & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((uVar27 ^ uVar19) & 0x5555555555555555) << 1;
          uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
          uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          uVar27 = lVar24 + ((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 3);
        }
        if ((uVar27 < 4) || (uVar25 = uVar27 * 0x87 + 0x78f, uVar25 < 0x7e5)) goto LAB_02d00938;
        cVar17 = *(char *)(param_3 + uVar27 + uVar10);
        uVar19 = (long)iVar3;
        uVar15 = uVar27;
      }
      else {
LAB_02d00938:
        uVar19 = 0;
        uVar25 = 0x7e4;
      }
      lVar24 = 0;
      uVar26 = uVar4 & 7;
      do {
        uVar27 = (ulong)*(uint *)(in_x17 + *(long *)(unaff_x24 + lVar24 * 8) * 4);
        uVar20 = uVar27 & param_4;
        uVar27 = uVar16 - uVar27;
        if (cVar17 == *(char *)(param_3 + uVar20 + uVar15) && uVar27 - 1 < uVar11) {
          lVar2 = param_3 + uVar20;
          if (uVar28 == 0) {
            puVar6 = puVar1;
            uVar20 = 0;
          }
          else {
            lVar5 = 0;
            uVar21 = uVar28;
            do {
              uVar20 = *(ulong *)(lVar2 + lVar5);
              if (*(ulong *)((long)puVar1 + lVar5) != uVar20) {
                uVar20 = uVar20 ^ *(ulong *)((long)puVar1 + lVar5);
                uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                uVar21 = lVar5 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
                goto LAB_02d009f0;
              }
              uVar21 = uVar21 - 1;
              lVar5 = lVar5 + 8;
              puVar6 = (ulong *)((long)puVar1 + (uVar4 & 0xfffffffffffffff8));
              uVar20 = uVar4 & 0xfffffffffffffff8;
            } while (uVar21 != 0);
          }
          uVar21 = uVar20;
          if (uVar26 != 0) {
            uVar29 = uVar20 | uVar26;
            uVar22 = uVar26;
            do {
              uVar21 = uVar20;
              unaff_x25 = in_stack_00000010;
              if (*(char *)(lVar2 + uVar20) != (char)*puVar6) break;
              puVar6 = (ulong *)((long)puVar6 + 1);
              uVar22 = uVar22 - 1;
              uVar20 = uVar20 + 1;
              uVar21 = uVar29;
            } while (uVar22 != 0);
          }
LAB_02d009f0:
          if ((3 < uVar21) &&
             (uVar20 = (uVar21 * 0x87 - (ulong)(((uint)LZCOUNT((int)uVar27) ^ 0x1f) * 0x1e)) + 0x780
             , uVar25 < uVar20)) {
            cVar17 = *(char *)(param_3 + uVar21 + uVar10);
            uVar25 = uVar20;
            uVar19 = uVar27;
            uVar15 = uVar21;
          }
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 != 4);
      *(int *)(in_x17 + *(long *)(unaff_x24 + (uVar16 >> 3 & 3) * 8) * 4) = (int)uVar16;
      param_2 = uVar9;
      in_x9 = uStack00000000000000a0;
    } while (((uVar12 + 0xaf <= uVar25) &&
             (uStack00000000000000a8 = uStack00000000000000a8 + 1, param_2 = uVar16, in_x9 = uVar19,
             unaff_x30 = uVar15, uVar7 < 3)) &&
            (uVar15 = uVar9 + 9, uVar7 = uVar7 + 1, uVar12 = uVar25, uVar9 = uVar16,
            uStack00000000000000a0 = uVar19, uVar15 < in_stack_00000088));
    uVar4 = param_2 + in_stack_00000038;
    if (in_stack_00000098 <= param_2 + in_stack_00000038) {
      uVar4 = in_stack_00000098;
    }
    if (uVar4 < in_x9) {
LAB_02d00c0c:
      uVar9 = in_x9 + 0xf;
LAB_02d00c10:
      if ((in_x9 <= uVar4) && (uVar9 != 0)) {
        uVar30 = *(undefined8 *)in_stack_00000058;
        *in_stack_00000058 = (int)in_x9;
        in_stack_00000058[3] = in_stack_00000058[2];
        *(undefined8 *)(in_stack_00000058 + 1) = uVar30;
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
            uVar7 = 0x9750468;
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
            uVar7 = 0xfdb1ace;
          }
          uVar9 = (ulong)(uVar7 >> (ulong)((uVar8 & 7) << 2) & 0xf);
        }
        goto LAB_02d00c10;
      }
      uVar9 = 0;
    }
    uVar7 = (uint)uStack00000000000000a8;
    uVar8 = (uint)unaff_x30;
    *in_x16 = uVar7;
    puVar23[5] = uVar8;
    uVar4 = (ulong)*(uint *)(in_stack_00000080 + 0x44) + 0x10;
    if (uVar9 < uVar4) {
      uVar14 = 0;
    }
    else {
      uVar15 = (ulong)*(uint *)(in_stack_00000080 + 0x40);
      uVar18 = ((uVar9 - *(uint *)(in_stack_00000080 + 0x44)) + (4L << (uVar15 & 0x3f))) - 0x10;
      uVar12 = (ulong)(((uint)LZCOUNT((uint)uVar18) ^ 0x1f) - 1);
      uVar16 = uVar18 >> (uVar12 & 0x3f);
      uVar9 = (ulong)(((uint)uVar18 &
                      (-1 << (ulong)(*(uint *)(in_stack_00000080 + 0x40) & 0x1f) ^ 0xffffffffU)) +
                      (int)uVar4 +
                      (int)((uVar16 & 1 | (uVar12 - uVar15) * 2) - 2 << (uVar15 & 0x3f)) |
                     (int)(uVar12 - uVar15) << 10);
      uVar14 = (uint)(uVar18 - ((uVar16 & 1 | 2) << (uVar12 & 0x3f)) >> (uVar15 & 0x3f));
    }
    *(short *)((long)puVar23 + 0x1e) = (short)uVar9;
    puVar23[6] = uVar14;
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
    if (uVar8 < 10) {
      uVar8 = uVar8 - 2;
    }
    else if (uVar8 < 0x86) {
      uVar14 = ((uint)LZCOUNT((int)((long)(int)uVar8 - 6U)) ^ 0x1f) - 1;
      uVar8 = (int)((long)(int)uVar8 - 6U >> ((ulong)uVar14 & 0x3f)) + uVar14 * 2 + 4;
    }
    else if (uVar8 < 0x846) {
      uVar8 = ((uint)LZCOUNT(uVar8 - 0x46) ^ 0x1f) + 0xc;
    }
    else {
      uVar8 = 0x17;
    }
    in_w8 = uVar8 & 7 | (uVar7 & 7) << 3;
    unaff_x23 = in_stack_00000048;
    if ((((uVar9 & 0x3ff) != 0) || (7 < (uVar7 & 0xffff))) || (0xf < (uVar8 & 0xffff))) break;
    puVar23 = in_x16;
    if (7 < (uVar8 & 0xffff)) {
      in_w8 = in_w8 | 0x40;
    }
  } while( true );
  in_w10 = uVar7 >> 3 & 0x1fff;
  in_w11 = uVar8 & 0xfff8;
  goto code_r0x02d00e98;
}


