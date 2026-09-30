/*
FUNCTION_NAME: RootMotion.AvatarUtility$$GetPostRotation
ENTRY_POINT: 02ece03c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
RootMotion_AvatarUtility__GetPostRotation
          (ulong param_1,long *param_2,char *param_3,byte *param_4,ulong param_5,long param_6,
          ulong param_7,uint param_8,undefined8 param_9,long param_10,long param_11)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  undefined1 in_CY;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long in_x9;
  ulong uVar19;
  char *in_x10;
  ulong in_x11;
  int in_w12;
  int *piVar20;
  byte *in_x13;
  long in_x14;
  long in_x15;
  long in_x16;
  ulong in_x17;
  uint unaff_w19;
  uint uVar21;
  long unaff_x21;
  long lVar22;
  ulong uVar23;
  long unaff_x23;
  ulong uVar24;
  ulong unaff_x26;
  uint uVar25;
  ulong unaff_x27;
  ulong unaff_x28;
  
code_r0x02ece03c:
  if ((bool)in_CY) {
    param_8 = unaff_w19;
  }
  *(uint *)(param_6 + param_1 * 4) = param_8;
  if (param_3[1] != ' ') goto LAB_02ece08c;
  lVar13 = param_6 + unaff_x28 * 4;
  uVar21 = *(uint *)(lVar13 + 0xc);
  lVar16 = 0x34;
LAB_02ece06c:
  do {
    uVar25 = (uint)unaff_x28 & 0x1f | ((int)(lVar16 << (param_7 & 0x3f)) + (int)unaff_x27) * 0x20;
    if (uVar25 <= uVar21) {
      uVar21 = uVar25;
    }
    *(uint *)(lVar13 + 0xc) = uVar21;
LAB_02ece08c:
    in_x14 = in_x14 + 1;
    if (((uint)unaff_x26 >> 7 & 1) != 0) {
      if (param_5 < 6) {
        return 1;
      }
      cVar6 = *in_x10;
      if (in_x10[1] == ' ') {
        if ((cVar6 != ',') && ((cVar6 != 'e' && (cVar6 != 's')))) goto LAB_02ece33c;
      }
      else if ((in_x10[1] != -0x60) || (cVar6 != -0x3e)) goto LAB_02ece33c;
      piVar20 = (int *)(in_x10 + 2);
      uVar19 = (ulong)*(ushort *)(in_x9 + (ulong)((uint)(*piVar20 * 0x1e35a7bd) >> 0x11) * 2);
      if (uVar19 == 0) goto LAB_02ece33c;
      lVar13 = param_2[6];
      lVar16 = *param_2;
      break;
    }
    pbVar10 = (byte *)(in_x15 + in_x14 * 4);
    bVar7 = *pbVar10;
    unaff_x26 = (ulong)bVar7;
    bVar4 = pbVar10[1];
    uVar8 = *(ushort *)(pbVar10 + 2);
    unaff_x27 = (ulong)uVar8;
    unaff_x28 = unaff_x26 & 0x1f;
    param_7 = (ulong)*(byte *)(in_x16 + unaff_x28);
    uVar25 = (uint)uVar8;
    uVar21 = (uint)unaff_x28;
    if (bVar4 != 0) {
      if ((in_w12 != 0x20) || (in_x17 < unaff_x28)) goto LAB_02ece08c;
      pbVar10 = (byte *)(*(long *)(in_x16 + 0xa8) +
                        (ulong)*(uint *)(in_x16 + unaff_x28 * 4 + 0x20) + unaff_x27 * unaff_x28);
      if (bVar4 == 0) {
        if (unaff_x28 >> 3 == 0) {
          uVar19 = 0;
          pbVar11 = in_x13;
        }
        else {
          uVar19 = unaff_x26 & 0x18;
          lVar13 = 0;
          pbVar11 = in_x13 + uVar19;
          do {
            if (*(ulong *)(in_x13 + lVar13) != *(ulong *)(pbVar10 + lVar13)) {
              uVar19 = *(ulong *)(pbVar10 + lVar13) ^ *(ulong *)(in_x13 + lVar13);
              uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
              uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
              uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
              uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
              uVar9 = lVar13 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
              goto LAB_02ecdda8;
            }
            lVar13 = lVar13 + 8;
          } while ((unaff_x28 >> 3) * 8 - lVar13 != 0);
        }
        uVar14 = unaff_x26 & 7;
        uVar9 = uVar19;
        if ((bVar7 & 7) != 0) {
          uVar18 = uVar19 | uVar14;
          do {
            uVar9 = uVar19;
            if (pbVar10[uVar19] != *pbVar11) break;
            pbVar11 = pbVar11 + 1;
            uVar14 = uVar14 - 1;
            uVar19 = uVar19 + 1;
            uVar9 = uVar18;
          } while (uVar14 != 0);
        }
LAB_02ecdda8:
        if (uVar9 != unaff_x28) goto LAB_02ece08c;
      }
      else if (bVar4 == 10) {
        if ((0x19 < *pbVar10 - 0x61) || ((*pbVar10 ^ 0x20) != (uint)*in_x13)) goto LAB_02ece08c;
        uVar19 = unaff_x28 + 0xffffffff;
        uVar9 = uVar19 >> 3 & 0x1fffffff;
        if (uVar9 == 0) {
          uVar14 = 0;
          pbVar11 = param_4;
        }
        else {
          uVar14 = uVar19 & 0xfffffff8;
          lVar13 = 0;
          pbVar11 = param_4 + uVar14;
          do {
            if (*(ulong *)(param_4 + lVar13) != *(ulong *)(pbVar10 + lVar13 + 1)) {
              uVar9 = *(ulong *)(pbVar10 + lVar13 + 1) ^ *(ulong *)(param_4 + lVar13);
              uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar14 = lVar13 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
              goto LAB_02ecdf30;
            }
            lVar13 = lVar13 + 8;
          } while (uVar9 * 8 - lVar13 != 0);
        }
        uVar9 = uVar19 & 7;
        if (uVar9 != 0) {
          uVar24 = uVar14 | uVar9;
          uVar18 = uVar14;
          do {
            uVar14 = uVar18;
            if (pbVar10[uVar18 + 1] != *pbVar11) break;
            pbVar11 = pbVar11 + 1;
            uVar9 = uVar9 - 1;
            uVar14 = uVar24;
            uVar18 = uVar18 + 1;
          } while (uVar9 != 0);
        }
LAB_02ecdf30:
        if (uVar14 != (uVar19 & 0xffffffff)) goto LAB_02ece08c;
      }
      else {
        pbVar11 = in_x13;
        uVar19 = unaff_x28;
        if ((bVar7 & 0x1f) != 0) {
          do {
            bVar7 = *pbVar10;
            uVar17 = (uint)bVar7;
            if (bVar7 - 0x61 < 0x1a) {
              bVar5 = *pbVar11;
              uVar17 = bVar7 ^ 0x20;
            }
            else {
              bVar5 = *pbVar11;
            }
            if (uVar17 != bVar5) goto LAB_02ece08c;
            pbVar11 = pbVar11 + 1;
            uVar19 = uVar19 - 1;
            pbVar10 = pbVar10 + 1;
          } while (uVar19 != 0);
        }
      }
      lVar13 = unaff_x28 + 1;
      lVar16 = unaff_x23;
      if (bVar4 != 10) {
        lVar16 = 0x55;
      }
      uVar3 = *(uint *)(param_6 + lVar13 * 4);
      uVar17 = uVar21 | ((int)(lVar16 << (param_7 & 0x3f)) + uVar25) * 0x20;
      uVar19 = unaff_x28 + 2;
      if (uVar17 <= uVar3) {
        uVar3 = uVar17;
      }
      *(uint *)(param_6 + lVar13 * 4) = uVar3;
      if (uVar19 < param_5) {
        pbVar10 = (byte *)(in_x10 + lVar13);
        bVar7 = *pbVar10;
        if (bVar7 < 0x2e) {
          if (bVar7 == 0x20) {
            uVar17 = *(uint *)(param_6 + uVar19 * 4);
            lVar13 = 0xf;
            if (bVar4 != 10) {
              lVar13 = 0x53;
            }
            uVar21 = uVar21 | ((int)(lVar13 << (param_7 & 0x3f)) + uVar25) * 0x20;
            if (uVar21 <= uVar17) {
              uVar17 = uVar21;
            }
            *(uint *)(param_6 + uVar19 * 4) = uVar17;
            goto LAB_02ece08c;
          }
          if (bVar7 != 0x2c) goto LAB_02ece08c;
          if (bVar4 == 10) {
            uVar3 = *(uint *)(param_6 + uVar19 * 4);
            uVar17 = uVar21 | ((int)(0x6dL << (param_7 & 0x3f)) + uVar25) * 0x20;
            if (uVar17 <= uVar3) {
              uVar3 = uVar17;
            }
            *(uint *)(param_6 + uVar19 * 4) = uVar3;
          }
          if (pbVar10[1] != 0x20) goto LAB_02ece08c;
          lVar13 = param_6 + unaff_x28 * 4;
          lVar15 = 0x6f;
          lVar16 = 0x41;
LAB_02ecdfc0:
          if (bVar4 != 10) {
            lVar16 = lVar15;
          }
        }
        else {
          if (bVar7 == 0x2e) {
            lVar13 = 0x60;
            if (bVar4 != 10) {
              lVar13 = 0x73;
            }
            uVar3 = *(uint *)(param_6 + uVar19 * 4);
            uVar17 = uVar21 | ((int)(lVar13 << (param_7 & 0x3f)) + uVar25) * 0x20;
            if (uVar17 <= uVar3) {
              uVar3 = uVar17;
            }
            *(uint *)(param_6 + uVar19 * 4) = uVar3;
            if (pbVar10[1] == 0x20) {
              lVar13 = param_6 + unaff_x28 * 4;
              lVar15 = 0x75;
              lVar16 = 0x5b;
              goto LAB_02ecdfc0;
            }
            goto LAB_02ece08c;
          }
          if (bVar7 != 0x3d) goto LAB_02ece08c;
          if (pbVar10[1] != 0x27) {
            if (pbVar10[1] == 0x22) {
              lVar13 = param_6 + unaff_x28 * 4;
              lVar15 = 0x6e;
              lVar16 = 0x76;
              goto LAB_02ecdfc0;
            }
            goto LAB_02ece08c;
          }
          lVar13 = param_6 + unaff_x28 * 4;
          lVar16 = 0x77;
          if (bVar4 == 10) {
            lVar16 = 0x78;
          }
        }
        uVar21 = uVar21 | ((int)(lVar16 << (param_7 & 0x3f)) + uVar25) * 0x20;
        uVar25 = *(uint *)(lVar13 + 0xc);
        if (uVar21 <= *(uint *)(lVar13 + 0xc)) {
          uVar25 = uVar21;
        }
        *(uint *)(lVar13 + 0xc) = uVar25;
      }
      goto LAB_02ece08c;
    }
    if (in_x17 < unaff_x28) goto LAB_02ece08c;
    lVar13 = *(long *)(in_x16 + 0xa8) +
             (ulong)*(uint *)(in_x16 + unaff_x28 * 4 + 0x20) + (uint)uVar8 * unaff_x28;
    if (unaff_x28 >> 3 == 0) {
      uVar19 = 0;
      pbVar10 = in_x13;
    }
    else {
      uVar19 = unaff_x26 & 0x18;
      lVar16 = 0;
      pbVar10 = in_x13 + uVar19;
      do {
        uVar9 = *(ulong *)(lVar13 + lVar16);
        if (*(ulong *)(in_x13 + lVar16) != uVar9) {
          uVar9 = uVar9 ^ *(ulong *)(in_x13 + lVar16);
          uVar19 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
          uVar9 = lVar16 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
          goto LAB_02ecdcc0;
        }
        lVar16 = lVar16 + 8;
      } while ((unaff_x28 >> 3) * 8 - lVar16 != 0);
    }
    uVar14 = unaff_x26 & 7;
    uVar9 = uVar19;
    if ((bVar7 & 7) != 0) {
      uVar18 = uVar19 | uVar14;
      do {
        uVar9 = uVar19;
        if (*(byte *)(lVar13 + uVar19) != *pbVar10) break;
        pbVar10 = pbVar10 + 1;
        uVar14 = uVar14 - 1;
        uVar19 = uVar19 + 1;
        uVar9 = uVar18;
      } while (uVar14 != 0);
    }
LAB_02ecdcc0:
    if (uVar9 != unaff_x28) goto LAB_02ece08c;
    lVar13 = unaff_x28 + 1;
    uVar3 = *(uint *)(param_6 + lVar13 * 4);
    uVar17 = uVar21 | ((int)(unaff_x21 << (param_7 & 0x3f)) + (uint)uVar8) * 0x20;
    param_1 = unaff_x28 + 2;
    if (uVar17 <= uVar3) {
      uVar3 = uVar17;
    }
    *(uint *)(param_6 + lVar13 * 4) = uVar3;
    if (param_5 <= param_1) goto LAB_02ece08c;
    param_3 = in_x10 + lVar13;
    cVar6 = *param_3;
    if (cVar6 == '(') {
      uVar17 = *(uint *)(param_6 + param_1 * 4);
      lVar13 = param_11;
LAB_02ecdea4:
      uVar21 = uVar21 | ((int)(lVar13 << (param_7 & 0x3f)) + uVar25) * 0x20;
      if (uVar21 <= uVar17) {
        uVar17 = uVar21;
      }
      *(uint *)(param_6 + param_1 * 4) = uVar17;
      goto LAB_02ece08c;
    }
    if (cVar6 == ' ') {
      uVar17 = *(uint *)(param_6 + param_1 * 4);
      lVar13 = param_10;
      goto LAB_02ecdea4;
    }
    if (in_w12 != 0x20) goto LAB_02ece08c;
    if (cVar6 != '=') {
      if (cVar6 == '.') {
        param_8 = *(uint *)(param_6 + param_1 * 4);
        unaff_w19 = uVar21 | ((int)(0x47L << (param_7 & 0x3f)) + uVar25) * 0x20;
        in_CY = unaff_w19 <= param_8;
        goto code_r0x02ece03c;
      }
      if (cVar6 == ',') {
        uVar17 = *(uint *)(param_6 + param_1 * 4);
        uVar21 = uVar21 | ((int)(0x67L << (param_7 & 0x3f)) + uVar25) * 0x20;
        if (uVar21 <= uVar17) {
          uVar17 = uVar21;
        }
        *(uint *)(param_6 + param_1 * 4) = uVar17;
        if (param_3[1] == ' ') {
          lVar13 = param_6 + unaff_x28 * 4;
          uVar21 = *(uint *)(lVar13 + 0xc);
          lVar16 = 0x21;
          goto LAB_02ece06c;
        }
      }
      goto LAB_02ece08c;
    }
    if (param_3[1] == '\'') {
      lVar13 = param_6 + unaff_x28 * 4;
      uVar21 = *(uint *)(lVar13 + 0xc);
      lVar16 = 0x62;
      goto LAB_02ece06c;
    }
    if (param_3[1] != '\"') goto LAB_02ece08c;
    lVar13 = param_6 + unaff_x28 * 4;
    uVar21 = *(uint *)(lVar13 + 0xc);
    lVar16 = 0x51;
  } while( true );
  do {
    pbVar10 = (byte *)(lVar13 + uVar19 * 4);
    bVar7 = *pbVar10;
    uVar9 = (ulong)bVar7;
    if (pbVar10[1] == 0) {
      uVar8 = *(ushort *)(pbVar10 + 2);
      uVar14 = uVar9 & 0x1f;
      if (uVar14 <= param_5 - 2) {
        lVar15 = *(long *)(lVar16 + 0xa8) +
                 (ulong)*(uint *)(lVar16 + uVar14 * 4 + 0x20) + (uint)uVar8 * uVar14;
        if (uVar14 >> 3 == 0) {
          uVar18 = 0;
          piVar12 = piVar20;
        }
        else {
          uVar18 = uVar9 & 0x18;
          lVar22 = 0;
          piVar12 = (int *)((long)piVar20 + uVar18);
          do {
            uVar24 = *(ulong *)(lVar15 + lVar22);
            if (*(ulong *)((long)piVar20 + lVar22) != uVar24) {
              uVar24 = uVar24 ^ *(ulong *)((long)piVar20 + lVar22);
              uVar9 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar24 = lVar22 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
              goto LAB_02ece264;
            }
            lVar22 = lVar22 + 8;
          } while ((uVar14 >> 3) * 8 - lVar22 != 0);
        }
        uVar9 = uVar9 & 7;
        uVar24 = uVar18;
        if ((bVar7 & 7) != 0) {
          uVar23 = uVar18 | uVar9;
          do {
            uVar24 = uVar18;
            if (*(char *)(lVar15 + uVar18) != (char)*piVar12) break;
            piVar12 = (int *)((long)piVar12 + 1);
            uVar9 = uVar9 - 1;
            uVar18 = uVar18 + 1;
            uVar24 = uVar23;
          } while (uVar9 != 0);
        }
LAB_02ece264:
        if (uVar24 == uVar14) {
          cVar6 = *in_x10;
          if (cVar6 == -0x3e) {
            lVar15 = param_6 + uVar14 * 4;
            uVar25 = *(uint *)(lVar15 + 8);
            uVar21 = (uint)uVar14 |
                     ((int)(0x66L << ((ulong)*(byte *)(lVar16 + uVar14) & 0x3f)) + (uint)uVar8) *
                     0x20;
            if (uVar21 <= uVar25) {
              uVar25 = uVar21;
            }
            *(uint *)(lVar15 + 8) = uVar25;
          }
          else if ((uVar14 + 2 < param_5) && (in_x10[uVar14 + 2] == ' ')) {
            lVar15 = param_6 + uVar14 * 4;
            lVar22 = 7;
            if (cVar6 != 's') {
              lVar22 = 0xd;
            }
            uVar21 = *(uint *)(lVar15 + 0xc);
            lVar2 = 0x12;
            if (cVar6 != 'e') {
              lVar2 = lVar22;
            }
            uVar25 = (uint)uVar14 |
                     ((int)(lVar2 << ((ulong)*(byte *)(lVar16 + uVar14) & 0x3f)) + (uint)uVar8) *
                     0x20;
            if (uVar25 <= uVar21) {
              uVar21 = uVar25;
            }
            *(uint *)(lVar15 + 0xc) = uVar21;
          }
        }
      }
    }
    uVar19 = uVar19 + 1;
  } while (-1 < (char)bVar7);
LAB_02ece33c:
  if (8 < param_5) {
    if (*in_x10 == '.') {
      if (in_x10[1] != 'c') {
        return 1;
      }
      if (in_x10[2] != 'o') {
        return 1;
      }
      if (in_x10[3] != 'm') {
        return 1;
      }
      if (in_x10[4] != '/') {
        return 1;
      }
    }
    else {
      if (*in_x10 != ' ') {
        return 1;
      }
      if (in_x10[1] != 't') {
        return 1;
      }
      if (in_x10[2] != 'h') {
        return 1;
      }
      if (in_x10[3] != 'e') {
        return 1;
      }
      if (in_x10[4] != ' ') {
        return 1;
      }
    }
    piVar20 = (int *)(in_x10 + 5);
    uVar19 = (ulong)*(ushort *)(in_x9 + (ulong)((uint)(*piVar20 * 0x1e35a7bd) >> 0x11) * 2);
    if (uVar19 != 0) {
      lVar13 = param_2[6];
      lVar16 = *param_2;
      do {
        pbVar10 = (byte *)(lVar13 + uVar19 * 4);
        bVar7 = *pbVar10;
        uVar9 = (ulong)bVar7;
        if (pbVar10[1] == 0) {
          uVar8 = *(ushort *)(pbVar10 + 2);
          uVar14 = uVar9 & 0x1f;
          uVar21 = (uint)uVar14;
          if (uVar14 <= in_x11) {
            lVar15 = *(long *)(lVar16 + 0xa8) +
                     (ulong)*(uint *)(lVar16 + uVar14 * 4 + 0x20) + (uint)uVar8 * uVar14;
            if (uVar14 >> 3 == 0) {
              uVar18 = 0;
              piVar12 = piVar20;
            }
            else {
              uVar18 = uVar9 & 0x18;
              lVar22 = 0;
              piVar12 = (int *)((long)piVar20 + uVar18);
              do {
                uVar24 = *(ulong *)(lVar15 + lVar22);
                if (*(ulong *)((long)piVar20 + lVar22) != uVar24) {
                  uVar24 = uVar24 ^ *(ulong *)((long)piVar20 + lVar22);
                  uVar9 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
                  uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
                  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
                  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
                  uVar24 = lVar22 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3);
                  goto LAB_02ece480;
                }
                lVar22 = lVar22 + 8;
              } while ((uVar14 >> 3) * 8 - lVar22 != 0);
            }
            uVar9 = uVar9 & 7;
            uVar24 = uVar18;
            if ((bVar7 & 7) != 0) {
              uVar23 = uVar18 | uVar9;
              do {
                uVar24 = uVar18;
                if (*(char *)(lVar15 + uVar18) != (char)*piVar12) break;
                piVar12 = (int *)((long)piVar12 + 1);
                uVar9 = uVar9 - 1;
                uVar18 = uVar18 + 1;
                uVar24 = uVar23;
              } while (uVar9 != 0);
            }
LAB_02ece480:
            if (uVar24 == uVar14) {
              uVar18 = (ulong)*(byte *)(lVar16 + uVar14);
              uVar9 = uVar14 + 5;
              uVar25 = *(uint *)(param_6 + uVar9 * 4);
              lVar15 = 0x29;
              if (*in_x10 != ' ') {
                lVar15 = 0x48;
              }
              uVar17 = uVar21 | ((int)(lVar15 << (uVar18 & 0x3f)) + (uint)uVar8) * 0x20;
              if (uVar17 <= uVar25) {
                uVar25 = uVar17;
              }
              *(uint *)(param_6 + uVar9 * 4) = uVar25;
              if (((((uVar9 < param_5) && (uVar14 + 8 < param_5)) && (*in_x10 == ' ')) &&
                  ((pcVar1 = in_x10 + uVar9, *pcVar1 == ' ' && (pcVar1[1] == 'o')))) &&
                 ((pcVar1[2] == 'f' && (pcVar1[3] == ' ')))) {
                lVar15 = param_6 + uVar14 * 4;
                uVar17 = *(uint *)(lVar15 + 0x24);
                uVar25 = uVar21 | ((int)(0x3eL << (uVar18 & 0x3f)) + (uint)uVar8) * 0x20;
                if (uVar25 <= uVar17) {
                  uVar17 = uVar25;
                }
                *(uint *)(lVar15 + 0x24) = uVar17;
                if (((uVar14 + 0xc < param_5) && (pcVar1[4] == 't')) &&
                   ((pcVar1[5] == 'h' && ((pcVar1[6] == 'e' && (pcVar1[7] == ' ')))))) {
                  lVar15 = param_6 + uVar14 * 4;
                  uVar25 = *(uint *)(lVar15 + 0x34);
                  uVar21 = uVar21 | ((int)(0x49L << (uVar18 & 0x3f)) + (uint)uVar8) * 0x20;
                  if (uVar21 <= uVar25) {
                    uVar25 = uVar21;
                  }
                  *(uint *)(lVar15 + 0x34) = uVar25;
                }
              }
            }
          }
        }
        uVar19 = uVar19 + 1;
      } while (-1 < (char)bVar7);
    }
  }
  return 1;
}


