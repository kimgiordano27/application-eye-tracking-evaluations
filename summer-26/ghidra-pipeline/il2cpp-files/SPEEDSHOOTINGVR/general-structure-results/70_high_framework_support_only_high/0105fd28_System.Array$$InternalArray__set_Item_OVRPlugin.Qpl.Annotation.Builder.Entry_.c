/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 0105fd28
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array__InternalArray__set_Item<OVRPlugin_Qpl_Annotation_Builder_Entry>
                (ulong param_1,long *param_2,undefined8 param_3,ulong param_4,ulong param_5,
                long param_6,ulong param_7)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined1 in_ZR;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long in_x9;
  byte *in_x10;
  long in_x11;
  long in_x12;
  long in_x13;
  byte *pbVar21;
  byte *in_x14;
  ulong uVar22;
  uint uVar23;
  ulong in_x15;
  uint uVar24;
  uint uVar25;
  uint in_w16;
  long lVar26;
  long in_x17;
  long unaff_x19;
  ulong uVar27;
  ulong unaff_x20;
  ulong uVar28;
  long unaff_x21;
  long lVar29;
  byte *unaff_x24;
  uint *puVar30;
  long unaff_x26;
  ulong uVar31;
  ulong unaff_x27;
  ulong uVar32;
  long unaff_x29;
  long lVar33;
  
code_r0x0105fd28:
  if ((bool)in_ZR) {
    if (unaff_x24[3] != 0x20) goto switchD_0105f540_caseD_21;
    lVar14 = param_6 + in_x15 * 4;
    uVar24 = *(uint *)(lVar14 + 0x10);
    lVar16 = 0x2e;
  }
  else {
    if (in_w16 != 0x74) goto switchD_0105f540_caseD_21;
    if (unaff_x24[3] != 0x20) goto switchD_0105f540_caseD_21;
    lVar14 = param_6 + in_x15 * 4;
    uVar24 = *(uint *)(lVar14 + 0x10);
    lVar16 = 0x3c;
  }
LAB_0105fe78:
  uVar23 = (uint)in_x15 & 0x1f | ((int)(lVar16 << (unaff_x20 & 0x3f)) + (int)unaff_x27) * 0x20;
  if (uVar23 <= uVar24) {
    uVar24 = uVar23;
  }
LAB_0105fe8c:
  *(uint *)(lVar14 + 0x10) = uVar24;
switchD_0105f540_caseD_21:
  in_x11 = in_x11 + 1;
  if (((uint)param_7 >> 7 & 1) != 0) {
    if (param_5 < 5) goto LAB_01060a30;
    bVar2 = *in_x10;
    if ((bVar2 != 0x2e) && (bVar2 != 0x20)) goto LAB_010605a8;
    pbVar21 = in_x10 + 1;
    uVar22 = (ulong)*(ushort *)(in_x9 + (ulong)((uint)(*(int *)pbVar21 * 0x1e35a7bd) >> 0x11) * 2);
    if (uVar22 == 0) goto LAB_010605a8;
    lVar16 = param_2[6];
    lVar26 = *param_2;
    bVar8 = bVar2 != 0x20;
    pbVar13 = in_x10 + 2;
    lVar14 = 6;
    if (bVar8) {
      lVar14 = 0x20;
    }
    lVar29 = 0x59;
    if (bVar8) {
      lVar29 = 0x43;
    }
    lVar1 = 2;
    if (bVar8) {
      lVar1 = 0x4d;
    }
    goto LAB_0105ffd4;
  }
  pbVar21 = (byte *)(in_x12 + in_x11 * 4);
  bVar2 = *pbVar21;
  param_7 = (ulong)bVar2;
  bVar3 = pbVar21[1];
  unaff_x27 = (ulong)*(ushort *)(pbVar21 + 2);
  in_x15 = param_7 & 0x1f;
  unaff_x20 = (ulong)*(byte *)(in_x13 + in_x15);
  uVar18 = (uint)*(ushort *)(pbVar21 + 2);
  uVar23 = (uint)in_x15;
  if (bVar3 != 0) {
    if (param_5 < in_x15) goto switchD_0105f540_caseD_21;
    pbVar21 = (byte *)(*(long *)(in_x13 + 0xa8) +
                      (ulong)*(uint *)(in_x13 + in_x15 * 4 + 0x20) + unaff_x27 * in_x15);
    if (bVar3 == 0) {
      if (in_x15 >> 3 == 0) {
        uVar22 = 0;
        pbVar13 = in_x10;
      }
      else {
        uVar22 = param_7 & 0x18;
        lVar14 = 0;
        pbVar13 = in_x10 + uVar22;
        do {
          if (*(ulong *)(in_x10 + lVar14) != *(ulong *)(pbVar21 + lVar14)) {
            uVar22 = *(ulong *)(pbVar21 + lVar14) ^ *(ulong *)(in_x10 + lVar14);
            uVar22 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
            uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
            uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
            uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
            uVar31 = lVar14 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
            goto LAB_0105f4e0;
          }
          lVar14 = lVar14 + 8;
        } while ((in_x15 >> 3) * 8 - lVar14 != 0);
      }
      uVar15 = param_7 & 7;
      uVar31 = uVar22;
      if ((bVar2 & 7) != 0) {
        uVar32 = uVar22 | uVar15;
        do {
          uVar31 = uVar22;
          if (pbVar21[uVar22] != *pbVar13) break;
          pbVar13 = pbVar13 + 1;
          uVar15 = uVar15 - 1;
          uVar22 = uVar22 + 1;
          uVar31 = uVar32;
        } while (uVar15 != 0);
      }
LAB_0105f4e0:
      if (uVar31 != in_x15) goto switchD_0105f540_caseD_21;
    }
    else if (bVar3 == 10) {
      if ((0x19 < *pbVar21 - 0x61) || ((*pbVar21 ^ 0x20) != (uint)*in_x10))
      goto switchD_0105f540_caseD_21;
      uVar22 = in_x15 + 0xffffffff;
      uVar31 = uVar22 >> 3 & 0x1fffffff;
      if (uVar31 == 0) {
        uVar15 = 0;
        pbVar13 = in_x14;
      }
      else {
        uVar15 = uVar22 & 0xfffffff8;
        lVar14 = 0;
        pbVar13 = in_x14 + uVar15;
        do {
          if (*(ulong *)(in_x14 + lVar14) != *(ulong *)(pbVar21 + lVar14 + 1)) {
            uVar31 = *(ulong *)(pbVar21 + lVar14 + 1) ^ *(ulong *)(in_x14 + lVar14);
            uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
            uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
            uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
            uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
            uVar15 = lVar14 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
            goto LAB_0105f5b4;
          }
          lVar14 = lVar14 + 8;
        } while (uVar31 * 8 - lVar14 != 0);
      }
      uVar31 = uVar22 & 7;
      if (uVar31 != 0) {
        uVar19 = uVar15 | uVar31;
        uVar32 = uVar15;
        do {
          uVar15 = uVar32;
          if (pbVar21[uVar32 + 1] != *pbVar13) break;
          pbVar13 = pbVar13 + 1;
          uVar31 = uVar31 - 1;
          uVar15 = uVar19;
          uVar32 = uVar32 + 1;
        } while (uVar31 != 0);
      }
LAB_0105f5b4:
      if (uVar15 != (uVar22 & 0xffffffff)) goto switchD_0105f540_caseD_21;
    }
    else {
      pbVar13 = in_x10;
      uVar22 = in_x15;
      if ((bVar2 & 0x1f) != 0) {
        do {
          bVar2 = *pbVar21;
          uVar24 = (uint)bVar2;
          if (bVar2 - 0x61 < 0x1a) {
            bVar4 = *pbVar13;
            uVar24 = bVar2 ^ 0x20;
          }
          else {
            bVar4 = *pbVar13;
          }
          if (uVar24 != bVar4) goto switchD_0105f540_caseD_21;
          pbVar13 = pbVar13 + 1;
          uVar22 = uVar22 - 1;
          pbVar21 = pbVar21 + 1;
        } while (uVar22 != 0);
      }
    }
    uVar24 = *(uint *)(param_6 + in_x15 * 4);
    lVar14 = unaff_x26;
    if (bVar3 != 10) {
      lVar14 = unaff_x21;
    }
    uVar25 = uVar23 | ((int)(lVar14 << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
    if (uVar25 <= uVar24) {
      uVar24 = uVar25;
    }
    *(uint *)(param_6 + in_x15 * 4) = uVar24;
    if (in_x15 + 1 < param_5) {
      param_1 = 1;
      uVar25 = (uint)in_x10[in_x15];
      uVar24 = uVar25 - 0x20;
      if (uVar24 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x0105f540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar22 = (*(code *)((ulong)*(ushort *)(unaff_x29 + (ulong)uVar24 * 2) * 4 + 0x105f544))();
        return uVar22;
      }
      if (uVar25 != 0x3d) goto switchD_0105f540_caseD_21;
      bVar2 = (in_x10 + in_x15)[1];
      if (bVar2 == 0x27) {
        lVar14 = 0x6c;
        if (bVar3 != 10) {
          lVar14 = 0x74;
        }
      }
      else {
        if (bVar2 != 0x22) goto LAB_0105faa0;
        lVar14 = 0x68;
        if (bVar3 != 10) {
          lVar14 = 0x69;
        }
      }
      lVar16 = param_6 + in_x15 * 4;
      uVar24 = *(uint *)(lVar16 + 8);
      uVar23 = uVar23 | ((int)(lVar14 << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
      if (uVar23 <= uVar24) {
        uVar24 = uVar23;
      }
      *(uint *)(lVar16 + 8) = uVar24;
    }
LAB_0105faa0:
    param_1 = 1;
    goto switchD_0105f540_caseD_21;
  }
  uVar22 = in_x15;
  if (param_5 <= in_x15) {
    uVar22 = param_5;
  }
  lVar14 = *(long *)(in_x13 + 0xa8) +
           (ulong)*(uint *)(in_x13 + in_x15 * 4 + 0x20) + in_x15 * unaff_x27;
  if (uVar22 >> 3 == 0) {
    uVar31 = 0;
    pbVar21 = in_x10;
  }
  else {
    uVar31 = uVar22 & 0x18;
    lVar16 = 0;
    pbVar21 = in_x10 + uVar31;
    do {
      uVar15 = *(ulong *)(lVar14 + lVar16);
      if (*(ulong *)(in_x10 + lVar16) != uVar15) {
        uVar15 = uVar15 ^ *(ulong *)(in_x10 + lVar16);
        uVar22 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar22 = (uVar22 & 0xcccccccccccccccc) >> 2 | (uVar22 & 0x3333333333333333) << 2;
        uVar22 = (uVar22 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar22 = (uVar22 & 0xff00ff00ff00ff00) >> 8 | (uVar22 & 0xff00ff00ff00ff) << 8;
        uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
        uVar15 = lVar16 + ((ulong)LZCOUNT(uVar22 >> 0x20 | uVar22 << 0x20) >> 3);
        goto LAB_0105f230;
      }
      lVar16 = lVar16 + 8;
    } while ((uVar22 >> 3) * 8 - lVar16 != 0);
  }
  uVar22 = uVar22 & 7;
  uVar15 = uVar31;
  if (uVar22 != 0) {
    uVar32 = uVar31 | uVar22;
    do {
      uVar15 = uVar31;
      if (*(byte *)(lVar14 + uVar31) != *pbVar21) break;
      pbVar21 = pbVar21 + 1;
      uVar22 = uVar22 - 1;
      uVar31 = uVar31 + 1;
      uVar15 = uVar32;
    } while (uVar22 != 0);
  }
LAB_0105f230:
  if (uVar15 == in_x15) {
    uVar25 = *(uint *)(param_6 + in_x15 * 4);
    uVar24 = uVar23 | uVar18 << 5;
    if (uVar24 <= uVar25) {
      uVar25 = uVar24;
    }
    *(uint *)(param_6 + in_x15 * 4) = uVar25;
    param_1 = 1;
  }
  uVar22 = in_x15 - 1;
  if (uVar22 <= uVar15) {
    uVar25 = *(uint *)(param_6 + uVar22 * 4);
    uVar24 = uVar23 | ((int)(unaff_x19 << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
    if (uVar24 <= uVar25) {
      uVar25 = uVar24;
    }
    *(uint *)(param_6 + uVar22 * 4) = uVar25;
    if ((((in_x15 + 2 < param_5) && (in_x10[uVar22] == 0x69)) && (in_x10[in_x15] == 0x6e)) &&
       ((in_x10[in_x15 + 1] == 0x67 && (in_x10[in_x15 + 2] == 0x20)))) {
      lVar14 = param_6 + in_x15 * 4;
      uVar25 = *(uint *)(lVar14 + 0xc);
      uVar24 = uVar23 | ((int)(0x31L << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
      if (uVar24 <= uVar25) {
        uVar25 = uVar24;
      }
      *(uint *)(lVar14 + 0xc) = uVar25;
    }
    param_1 = 1;
  }
  uVar22 = param_4;
  if (param_4 <= in_x15 - 9) {
    uVar22 = in_x15 - 9;
  }
  if (uVar23 < 10) {
    uVar22 = param_4;
  }
  uVar31 = uVar15;
  if (in_x15 - 2 <= uVar15) {
    uVar31 = in_x15 - 2;
  }
  if (uVar22 <= uVar31) {
    uVar32 = param_2[2];
    lVar14 = (uVar31 - uVar22) + 1;
    lVar16 = in_x15 * 4 + uVar22 * -4;
    uVar31 = in_x15 * in_x17 - uVar22 * in_x17;
    puVar30 = (uint *)(param_6 + uVar22 * 4);
    do {
      uVar24 = uVar23 | ((int)(lVar16 + (uVar32 >> (uVar31 & 0x3f) & 0x3f) << (unaff_x20 & 0x3f)) +
                        uVar18) * 0x20;
      uVar25 = *puVar30;
      if (uVar24 <= *puVar30) {
        uVar25 = uVar24;
      }
      lVar14 = lVar14 + -1;
      lVar16 = lVar16 + -4;
      *puVar30 = uVar25;
      uVar31 = uVar31 - 6;
      puVar30 = puVar30 + 1;
    } while (lVar14 != 0);
    param_1 = 1;
  }
  if ((uVar15 < in_x15) || (uVar22 = in_x15 + 6, param_5 <= uVar22)) goto switchD_0105f540_caseD_21;
  unaff_x24 = in_x10 + in_x15;
  bVar2 = *unaff_x24;
  if (0x3c < bVar2) {
    switch(bVar2) {
    case 0x61:
      if ((unaff_x24[1] != 0x6c) || (unaff_x24[2] != 0x20)) goto switchD_0105f540_caseD_21;
      lVar14 = param_6 + in_x15 * 4;
      uVar24 = *(uint *)(lVar14 + 0xc);
      lVar16 = 0x54;
      break;
    case 0x62:
    case 99:
    case 100:
    case 0x67:
    case 0x68:
    case 0x6a:
    case 0x6b:
    case 0x6d:
    case 0x6e:
      goto switchD_0105f540_caseD_21;
    case 0x65:
      bVar2 = unaff_x24[1];
      if (bVar2 == 0x73) {
        if ((unaff_x24[2] == 0x74) && (unaff_x24[3] == 0x20)) {
          lVar14 = param_6 + in_x15 * 4;
          uVar24 = *(uint *)(lVar14 + 0x10);
          lVar16 = 0x5f;
          goto LAB_0105fe78;
        }
        goto switchD_0105f540_caseD_21;
      }
      if (bVar2 == 0x72) {
        if (unaff_x24[2] != 0x20) goto switchD_0105f540_caseD_21;
        lVar14 = param_6 + in_x15 * 4;
        uVar24 = *(uint *)(lVar14 + 0xc);
        lVar16 = 0x52;
      }
      else {
        if ((bVar2 != 100) || (unaff_x24[2] != 0x20)) goto switchD_0105f540_caseD_21;
        lVar14 = param_6 + in_x15 * 4;
        uVar24 = *(uint *)(lVar14 + 0xc);
        lVar16 = 0x35;
      }
      break;
    case 0x66:
      if (((unaff_x24[1] == 0x75) && (unaff_x24[2] == 0x6c)) && (unaff_x24[3] == 0x20)) {
        lVar14 = param_6 + in_x15 * 4;
        uVar24 = *(uint *)(lVar14 + 0x10);
        lVar16 = 0x5a;
        goto LAB_0105fe78;
      }
      goto switchD_0105f540_caseD_21;
    case 0x69:
      if (unaff_x24[1] == 0x7a) {
        if ((unaff_x24[2] == 0x65) && (unaff_x24[3] == 0x20)) {
          lVar14 = param_6 + in_x15 * 4;
          uVar24 = *(uint *)(lVar14 + 0x10);
          lVar16 = 100;
          goto LAB_0105fe78;
        }
      }
      else if (((unaff_x24[1] == 0x76) && (unaff_x24[2] == 0x65)) && (unaff_x24[3] == 0x20)) {
        lVar14 = param_6 + in_x15 * 4;
        uVar24 = *(uint *)(lVar14 + 0x10);
        lVar16 = 0x5c;
        goto LAB_0105fe78;
      }
      goto switchD_0105f540_caseD_21;
    case 0x6c:
      if (unaff_x24[1] != 0x79) {
        if (((unaff_x24[1] == 0x65) && (unaff_x24[2] == 0x73)) &&
           ((unaff_x24[3] == 0x73 && (unaff_x24[4] == 0x20)))) {
          lVar14 = param_6 + in_x15 * 4;
          uVar24 = *(uint *)(lVar14 + 0x14);
          lVar16 = 0x5d;
          goto FUN_0105fd08;
        }
        goto switchD_0105f540_caseD_21;
      }
      if (unaff_x24[2] != 0x20) goto switchD_0105f540_caseD_21;
      lVar14 = param_6 + in_x15 * 4;
      uVar24 = *(uint *)(lVar14 + 0xc);
      lVar16 = 0x3d;
      break;
    case 0x6f:
      if (((unaff_x24[1] == 0x75) && (unaff_x24[2] == 0x73)) && (unaff_x24[3] == 0x20)) {
        lVar14 = param_6 + in_x15 * 4;
        uVar24 = *(uint *)(lVar14 + 0x10);
        lVar16 = 0x6a;
        goto LAB_0105fe78;
      }
      goto switchD_0105f540_caseD_21;
    default:
      if (bVar2 == 0x3d) {
        if (unaff_x24[1] == 0x27) {
          lVar14 = param_6 + in_x15 * 4;
          uVar24 = *(uint *)(lVar14 + 8);
          lVar16 = 0x56;
        }
        else {
          if (unaff_x24[1] != 0x22) goto switchD_0105f540_caseD_21;
          lVar14 = param_6 + in_x15 * 4;
          uVar24 = *(uint *)(lVar14 + 8);
          lVar16 = 0x46;
        }
        uVar23 = uVar23 | ((int)(lVar16 << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
        if (uVar23 <= uVar24) {
          uVar24 = uVar23;
        }
        *(uint *)(lVar14 + 8) = uVar24;
        goto switchD_0105f540_caseD_21;
      }
      if (bVar2 == 0x5d) {
        lVar14 = param_6 + in_x15 * 4;
        uVar24 = *(uint *)(lVar14 + 4);
        lVar16 = 0x18;
        goto LAB_0105f7d4;
      }
      goto switchD_0105f540_caseD_21;
    }
LAB_0105fba8:
    uVar23 = uVar23 | ((int)(lVar16 << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
    if (uVar23 <= uVar24) {
      uVar24 = uVar23;
    }
    *(uint *)(lVar14 + 0xc) = uVar24;
    goto switchD_0105f540_caseD_21;
  }
  switch(bVar2) {
  case 0x20:
    lVar14 = param_6 + in_x15 * 4;
    uVar25 = *(uint *)(lVar14 + 4);
    iVar9 = (int)(1L << (unaff_x20 & 0x3f));
    uVar24 = uVar23 | (iVar9 + uVar18) * 0x20;
    if (uVar24 <= uVar25) {
      uVar25 = uVar24;
    }
    *(uint *)(lVar14 + 4) = uVar25;
    bVar2 = unaff_x24[1];
    switch(bVar2) {
    case 0x61:
      bVar2 = unaff_x24[2];
      in_w16 = (uint)bVar2;
      if (0x72 < bVar2) {
        in_ZR = bVar2 == 0x73;
        goto code_r0x0105fd28;
      }
      if (bVar2 == 0x20) {
        lVar14 = param_6 + in_x15 * 4;
        uVar24 = *(uint *)(lVar14 + 0xc);
        lVar16 = 0x1c;
        goto LAB_0105fba8;
      }
      if (((bVar2 != 0x6e) || (unaff_x24[3] != 100)) || (unaff_x24[4] != 0x20))
      goto switchD_0105f540_caseD_21;
      lVar14 = param_6 + in_x15 * 4;
      uVar24 = *(uint *)(lVar14 + 0x14);
      lVar16 = 10;
      break;
    case 0x62:
      if ((unaff_x24[2] == 0x79) && (unaff_x24[3] == 0x20)) {
        lVar14 = param_6 + in_x15 * 4;
        uVar24 = *(uint *)(lVar14 + 0x10);
        lVar16 = 0x26;
        goto LAB_0105fe78;
      }
    case 99:
    case 100:
    case 0x65:
    case 0x67:
    case 0x68:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
      goto switchD_0105f540_caseD_21;
    case 0x66:
      if (unaff_x24[2] == 0x72) {
        if (((unaff_x24[3] == 0x6f) && (unaff_x24[4] == 0x6d)) && (unaff_x24[5] == 0x20)) {
          uVar24 = *(uint *)(param_6 + uVar22 * 4);
          lVar14 = 0x25;
          goto LAB_0105feb4;
        }
        goto switchD_0105f540_caseD_21;
      }
      if (((unaff_x24[2] != 0x6f) || (unaff_x24[3] != 0x72)) || (unaff_x24[4] != 0x20))
      goto switchD_0105f540_caseD_21;
      lVar14 = param_6 + in_x15 * 4;
      uVar24 = *(uint *)(lVar14 + 0x14);
      lVar16 = 0x19;
      break;
    case 0x69:
      if (unaff_x24[2] == 0x73) {
        if (unaff_x24[3] == 0x20) {
          lVar14 = param_6 + in_x15 * 4;
          uVar24 = *(uint *)(lVar14 + 0x10);
          lVar16 = 0x2f;
          goto LAB_0105fe78;
        }
      }
      else if ((unaff_x24[2] == 0x6e) && (unaff_x24[3] == 0x20)) {
        lVar14 = param_6 + in_x15 * 4;
        uVar24 = *(uint *)(lVar14 + 0x10);
        iVar9 = iVar9 * 0x10;
        goto LAB_0105fcb8;
      }
      goto switchD_0105f540_caseD_21;
    case 0x6e:
      if (((unaff_x24[2] != 0x6f) || (unaff_x24[3] != 0x74)) || (unaff_x24[4] != 0x20))
      goto switchD_0105f540_caseD_21;
      lVar14 = param_6 + in_x15 * 4;
      uVar24 = *(uint *)(lVar14 + 0x14);
      lVar16 = 0x50;
      break;
    case 0x6f:
      if (unaff_x24[2] != 0x6e) goto code_r0x0105fc98;
      if (unaff_x24[3] == 0x20) {
        lVar14 = param_6 + in_x15 * 4;
        uVar24 = *(uint *)(lVar14 + 0x10);
        lVar16 = 0x2d;
        goto LAB_0105fe78;
      }
      goto switchD_0105f540_caseD_21;
    default:
      if (bVar2 == 0x74) {
        if (unaff_x24[2] == 0x6f) {
          if (unaff_x24[3] == 0x20) {
            lVar14 = param_6 + in_x15 * 4;
            uVar24 = *(uint *)(lVar14 + 0x10);
            lVar16 = 0x11;
            goto LAB_0105fe78;
          }
        }
        else if (unaff_x24[2] == 0x68) {
          if (unaff_x24[3] == 0x61) {
            if ((unaff_x24[4] == 0x74) && (unaff_x24[5] == 0x20)) {
              uVar24 = *(uint *)(param_6 + uVar22 * 4);
              lVar14 = 0x1d;
              goto LAB_0105feb4;
            }
          }
          else if ((unaff_x24[3] == 0x65) && (unaff_x24[4] == 0x20)) {
            lVar14 = param_6 + in_x15 * 4;
            uVar24 = *(uint *)(lVar14 + 0x14);
            lVar16 = 5;
            break;
          }
        }
        goto switchD_0105f540_caseD_21;
      }
      if ((((bVar2 != 0x77) || (unaff_x24[2] != 0x69)) || (unaff_x24[3] != 0x74)) ||
         ((unaff_x24[4] != 0x68 || (unaff_x24[5] != 0x20)))) goto switchD_0105f540_caseD_21;
      uVar24 = *(uint *)(param_6 + uVar22 * 4);
      lVar14 = 0x23;
      goto LAB_0105feb4;
    }
FUN_0105fd08:
    uVar23 = uVar23 | ((int)(lVar16 << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
    if (uVar23 <= uVar24) {
      uVar24 = uVar23;
    }
    *(uint *)(lVar14 + 0x14) = uVar24;
    goto switchD_0105f540_caseD_21;
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2d:
    goto switchD_0105f540_caseD_21;
  case 0x22:
    lVar14 = param_6 + in_x15 * 4;
    uVar24 = uVar23 | ((int)(0x13L << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
    uVar25 = *(uint *)(lVar14 + 4);
    if (uVar24 <= *(uint *)(lVar14 + 4)) {
      uVar25 = uVar24;
    }
    *(uint *)(lVar14 + 4) = uVar25;
    if (unaff_x24[1] != 0x3e) goto switchD_0105f540_caseD_21;
    uVar24 = *(uint *)(lVar14 + 8);
    lVar16 = 0x15;
    break;
  case 0x27:
    lVar14 = param_6 + in_x15 * 4;
    uVar24 = *(uint *)(lVar14 + 4);
    lVar16 = 0x24;
    goto LAB_0105f7d4;
  case 0x28:
    lVar14 = param_6 + in_x15 * 4;
    uVar24 = *(uint *)(lVar14 + 4);
    lVar16 = 0x39;
LAB_0105f7d4:
    uVar23 = uVar23 | ((int)(lVar16 << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
    if (uVar23 <= uVar24) {
      uVar24 = uVar23;
    }
    *(uint *)(lVar14 + 4) = uVar24;
    goto switchD_0105f540_caseD_21;
  case 0x2c:
    lVar14 = param_6 + in_x15 * 4;
    uVar24 = uVar23 | ((int)(0x4cL << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
    uVar25 = *(uint *)(lVar14 + 4);
    if (uVar24 <= *(uint *)(lVar14 + 4)) {
      uVar25 = uVar24;
    }
    *(uint *)(lVar14 + 4) = uVar25;
    if (unaff_x24[1] != 0x20) goto switchD_0105f540_caseD_21;
    uVar24 = *(uint *)(lVar14 + 8);
    lVar16 = 0xe;
    break;
  case 0x2e:
    lVar14 = param_6 + in_x15 * 4;
    uVar24 = uVar23 | ((int)(0x14L << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
    uVar25 = *(uint *)(lVar14 + 4);
    if (uVar24 <= *(uint *)(lVar14 + 4)) {
      uVar25 = uVar24;
    }
    *(uint *)(lVar14 + 4) = uVar25;
    if (unaff_x24[1] != 0x20) goto switchD_0105f540_caseD_21;
    uVar24 = uVar23 | ((int)(0x1fL << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
    uVar25 = *(uint *)(lVar14 + 8);
    if (uVar24 <= *(uint *)(lVar14 + 8)) {
      uVar25 = uVar24;
    }
    *(uint *)(lVar14 + 8) = uVar25;
    if ((unaff_x24[2] != 0x54) || (unaff_x24[3] != 0x68)) goto switchD_0105f540_caseD_21;
    if (unaff_x24[4] == 0x69) {
      if ((unaff_x24[5] == 0x73) && (unaff_x24[6] == 0x20)) {
        lVar14 = param_6 + in_x15 * 4;
        uVar24 = *(uint *)(lVar14 + 0x1c);
        uVar23 = uVar23 | ((int)(0x4bL << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
        if (uVar23 <= uVar24) {
          uVar24 = uVar23;
        }
        *(uint *)(lVar14 + 0x1c) = uVar24;
      }
      goto switchD_0105f540_caseD_21;
    }
    if ((unaff_x24[4] != 0x65) || (unaff_x24[5] != 0x20)) goto switchD_0105f540_caseD_21;
    uVar24 = *(uint *)(param_6 + uVar22 * 4);
    lVar14 = 0x2b;
LAB_0105feb4:
    uVar23 = uVar23 | ((int)(lVar14 << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
    if (uVar23 <= uVar24) {
      uVar24 = uVar23;
    }
    *(uint *)(param_6 + uVar22 * 4) = uVar24;
    goto switchD_0105f540_caseD_21;
  default:
    if (bVar2 != 10) {
      if (bVar2 == 0x3a) {
        lVar14 = param_6 + in_x15 * 4;
        uVar24 = *(uint *)(lVar14 + 4);
        lVar16 = 0x33;
        goto LAB_0105f7d4;
      }
      goto switchD_0105f540_caseD_21;
    }
    lVar14 = param_6 + in_x15 * 4;
    uVar24 = uVar23 | ((int)(0x16L << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
    uVar25 = *(uint *)(lVar14 + 4);
    if (uVar24 <= *(uint *)(lVar14 + 4)) {
      uVar25 = uVar24;
    }
    *(uint *)(lVar14 + 4) = uVar25;
    if (unaff_x24[1] != 9) goto switchD_0105f540_caseD_21;
    uVar24 = *(uint *)(lVar14 + 8);
    lVar16 = 0x32;
  }
  uVar23 = uVar23 | ((int)(lVar16 << (unaff_x20 & 0x3f)) + uVar18) * 0x20;
  if (uVar23 <= uVar24) {
    uVar24 = uVar23;
  }
  *(uint *)(lVar14 + 8) = uVar24;
  goto switchD_0105f540_caseD_21;
code_r0x0105fc98:
  if ((unaff_x24[2] != 0x66) || (unaff_x24[3] != 0x20)) goto switchD_0105f540_caseD_21;
  lVar14 = param_6 + in_x15 * 4;
  uVar24 = *(uint *)(lVar14 + 0x10);
  iVar9 = iVar9 * 8;
LAB_0105fcb8:
  uVar23 = uVar23 | (uVar18 + iVar9) * 0x20;
  if (uVar23 <= uVar24) {
    uVar24 = uVar23;
  }
  goto LAB_0105fe8c;
LAB_0105ffd4:
  do {
    pbVar11 = (byte *)(lVar16 + uVar22 * 4);
    bVar3 = *pbVar11;
    uVar31 = (ulong)bVar3;
    bVar4 = pbVar11[1];
    uVar7 = *(ushort *)(pbVar11 + 2);
    uVar32 = uVar31 & 0x1f;
    uVar15 = (ulong)*(byte *)(lVar26 + uVar32);
    uVar23 = (uint)uVar7;
    uVar24 = (uint)uVar32;
    if (bVar4 == 0) {
      if (uVar32 <= param_5 - 1) {
        lVar33 = *(long *)(lVar26 + 0xa8) +
                 (ulong)*(uint *)(lVar26 + uVar32 * 4 + 0x20) + (uint)uVar7 * uVar32;
        if (uVar32 >> 3 == 0) {
          uVar19 = 0;
          pbVar11 = pbVar21;
        }
        else {
          uVar19 = uVar31 & 0x18;
          lVar20 = 0;
          pbVar11 = pbVar21 + uVar19;
          do {
            uVar10 = *(ulong *)(lVar33 + lVar20);
            if (*(ulong *)(pbVar21 + lVar20) != uVar10) {
              uVar10 = uVar10 ^ *(ulong *)(pbVar21 + lVar20);
              uVar31 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
              uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
              uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
              uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
              uVar10 = lVar20 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
              goto LAB_01060110;
            }
            lVar20 = lVar20 + 8;
          } while ((uVar32 >> 3) * 8 - lVar20 != 0);
        }
        uVar31 = uVar31 & 7;
        uVar10 = uVar19;
        if ((bVar3 & 7) != 0) {
          uVar27 = uVar19 | uVar31;
          do {
            uVar10 = uVar19;
            if (*(byte *)(lVar33 + uVar19) != *pbVar11) break;
            pbVar11 = pbVar11 + 1;
            uVar31 = uVar31 - 1;
            uVar19 = uVar19 + 1;
            uVar10 = uVar27;
          } while (uVar31 != 0);
        }
LAB_01060110:
        if (uVar10 == uVar32) {
          lVar33 = uVar32 + 1;
          uVar25 = *(uint *)(param_6 + lVar33 * 4);
          uVar18 = uVar24 | ((int)(lVar14 << (uVar15 & 0x3f)) + (uint)uVar7) * 0x20;
          uVar31 = uVar32 + 2;
          if (uVar18 <= uVar25) {
            uVar25 = uVar18;
          }
          *(uint *)(param_6 + lVar33 * 4) = uVar25;
          if (param_5 <= uVar31) goto LAB_010604d8;
          pbVar11 = in_x10 + lVar33;
          bVar4 = *pbVar11;
          if (bVar4 == 0x28) {
            uVar18 = *(uint *)(param_6 + uVar31 * 4);
            lVar33 = lVar29;
          }
          else {
            if (bVar4 != 0x20) {
              if (bVar2 == 0x20) {
                if (bVar4 == 0x3d) {
                  if (pbVar11[1] == 0x27) {
                    lVar33 = param_6 + uVar32 * 4;
                    uVar18 = *(uint *)(lVar33 + 0xc);
                    lVar20 = 0x62;
                  }
                  else {
                    if (pbVar11[1] != 0x22) goto LAB_010604d8;
                    lVar33 = param_6 + uVar32 * 4;
                    uVar18 = *(uint *)(lVar33 + 0xc);
                    lVar20 = 0x51;
                  }
FUN_010604bc:
                  uVar24 = uVar24 | ((int)(lVar20 << (uVar15 & 0x3f)) + uVar23) * 0x20;
                  if (uVar24 <= uVar18) {
                    uVar18 = uVar24;
                  }
                  *(uint *)(lVar33 + 0xc) = uVar18;
                }
                else if (bVar4 == 0x2e) {
                  uVar25 = *(uint *)(param_6 + uVar31 * 4);
                  uVar18 = uVar24 | ((int)(0x47L << (uVar15 & 0x3f)) + uVar23) * 0x20;
                  if (uVar18 <= uVar25) {
                    uVar25 = uVar18;
                  }
                  *(uint *)(param_6 + uVar31 * 4) = uVar25;
                  if (pbVar11[1] == 0x20) {
                    lVar33 = param_6 + uVar32 * 4;
                    uVar18 = *(uint *)(lVar33 + 0xc);
                    lVar20 = 0x34;
                    goto FUN_010604bc;
                  }
                }
                else if (bVar4 == 0x2c) {
                  uVar25 = *(uint *)(param_6 + uVar31 * 4);
                  uVar18 = uVar24 | ((int)(0x67L << (uVar15 & 0x3f)) + uVar23) * 0x20;
                  if (uVar18 <= uVar25) {
                    uVar25 = uVar18;
                  }
                  *(uint *)(param_6 + uVar31 * 4) = uVar25;
                  if (pbVar11[1] == 0x20) {
                    lVar33 = param_6 + uVar32 * 4;
                    uVar18 = *(uint *)(lVar33 + 0xc);
                    lVar20 = 0x21;
                    goto FUN_010604bc;
                  }
                }
              }
              goto LAB_010604d8;
            }
            uVar18 = *(uint *)(param_6 + uVar31 * 4);
            lVar33 = lVar1;
          }
          uVar24 = uVar24 | ((int)(lVar33 << (uVar15 & 0x3f)) + uVar23) * 0x20;
          if (uVar24 <= uVar18) {
            uVar18 = uVar24;
          }
          *(uint *)(param_6 + uVar31 * 4) = uVar18;
          goto LAB_010604d8;
        }
      }
    }
    else if ((bVar2 == 0x20) && (uVar32 <= param_5 - 1)) {
      pbVar11 = (byte *)(*(long *)(lVar26 + 0xa8) +
                        (ulong)*(uint *)(lVar26 + uVar32 * 4 + 0x20) + uVar7 * uVar32);
      if (bVar4 == 0) {
        if (uVar32 >> 3 == 0) {
          uVar19 = 0;
          pbVar12 = pbVar21;
        }
        else {
          uVar19 = uVar31 & 0x18;
          lVar33 = 0;
          pbVar12 = pbVar21 + uVar19;
          do {
            if (*(ulong *)(pbVar21 + lVar33) != *(ulong *)(pbVar11 + lVar33)) {
              uVar31 = *(ulong *)(pbVar11 + lVar33) ^ *(ulong *)(pbVar21 + lVar33);
              uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
              uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
              uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
              uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
              uVar10 = lVar33 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
              goto LAB_010601f8;
            }
            lVar33 = lVar33 + 8;
          } while ((uVar32 >> 3) * 8 - lVar33 != 0);
        }
        uVar31 = uVar31 & 7;
        uVar10 = uVar19;
        if ((bVar3 & 7) != 0) {
          uVar27 = uVar19 | uVar31;
          do {
            uVar10 = uVar19;
            if (pbVar11[uVar19] != *pbVar12) break;
            pbVar12 = pbVar12 + 1;
            uVar31 = uVar31 - 1;
            uVar19 = uVar19 + 1;
            uVar10 = uVar27;
          } while (uVar31 != 0);
        }
LAB_010601f8:
        if (uVar10 == uVar32) goto LAB_01060200;
      }
      else if (bVar4 == 10) {
        if ((*pbVar11 - 0x61 < 0x1a) && ((*pbVar11 ^ 0x20) == (uint)*pbVar21)) {
          uVar31 = uVar32 + 0xffffffff;
          uVar19 = uVar31 >> 3 & 0x1fffffff;
          if (uVar19 == 0) {
            uVar10 = 0;
            pbVar12 = pbVar13;
          }
          else {
            uVar10 = uVar31 & 0xfffffff8;
            lVar33 = 0;
            pbVar12 = pbVar13 + uVar10;
            do {
              if (*(ulong *)(pbVar13 + lVar33) != *(ulong *)(pbVar11 + lVar33 + 1)) {
                uVar19 = *(ulong *)(pbVar11 + lVar33 + 1) ^ *(ulong *)(pbVar13 + lVar33);
                uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
                uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
                uVar10 = lVar33 + ((ulong)LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) >> 3);
                goto LAB_01060380;
              }
              lVar33 = lVar33 + 8;
            } while (uVar19 * 8 - lVar33 != 0);
          }
          uVar19 = uVar31 & 7;
          if (uVar19 != 0) {
            uVar28 = uVar10 | uVar19;
            uVar27 = uVar10;
            do {
              uVar10 = uVar27;
              if (pbVar11[uVar27 + 1] != *pbVar12) break;
              pbVar12 = pbVar12 + 1;
              uVar19 = uVar19 - 1;
              uVar10 = uVar28;
              uVar27 = uVar27 + 1;
            } while (uVar19 != 0);
          }
LAB_01060380:
          if (uVar10 == (uVar31 & 0xffffffff)) goto LAB_01060200;
        }
      }
      else {
        pbVar12 = pbVar21;
        uVar31 = uVar32;
        if ((bVar3 & 0x1f) != 0) {
          do {
            bVar6 = *pbVar11;
            uVar18 = (uint)bVar6;
            if (bVar6 - 0x61 < 0x1a) {
              bVar5 = *pbVar12;
              uVar18 = bVar6 ^ 0x20;
            }
            else {
              bVar5 = *pbVar12;
            }
            if (uVar18 != bVar5) goto LAB_010604dc;
            pbVar12 = pbVar12 + 1;
            uVar31 = uVar31 - 1;
            pbVar11 = pbVar11 + 1;
          } while (uVar31 != 0);
        }
LAB_01060200:
        lVar33 = uVar32 + 1;
        lVar20 = 0x1e;
        if (bVar4 != 10) {
          lVar20 = 0x55;
        }
        uVar25 = *(uint *)(param_6 + lVar33 * 4);
        uVar18 = uVar24 | ((int)(lVar20 << (uVar15 & 0x3f)) + uVar23) * 0x20;
        uVar31 = uVar32 + 2;
        if (uVar18 <= uVar25) {
          uVar25 = uVar18;
        }
        *(uint *)(param_6 + lVar33 * 4) = uVar25;
        if (uVar31 < param_5) {
          pbVar11 = in_x10 + lVar33;
          bVar6 = *pbVar11;
          param_1 = 1;
          if (bVar6 < 0x2e) {
            if (bVar6 == 0x20) {
              uVar18 = *(uint *)(param_6 + uVar31 * 4);
              lVar33 = 0xf;
              if (bVar4 != 10) {
                lVar33 = 0x53;
              }
              uVar24 = uVar24 | ((int)(lVar33 << (uVar15 & 0x3f)) + uVar23) * 0x20;
              if (uVar24 <= uVar18) {
                uVar18 = uVar24;
              }
              *(uint *)(param_6 + uVar31 * 4) = uVar18;
            }
            else {
              if (bVar6 != 0x2c) goto LAB_010604dc;
              if (bVar4 == 10) {
                uVar25 = *(uint *)(param_6 + uVar31 * 4);
                uVar18 = uVar24 | ((int)(0x6dL << (uVar15 & 0x3f)) + uVar23) * 0x20;
                if (uVar18 <= uVar25) {
                  uVar25 = uVar18;
                }
                *(uint *)(param_6 + uVar31 * 4) = uVar25;
              }
              if (pbVar11[1] == 0x20) {
                lVar33 = param_6 + uVar32 * 4;
                lVar17 = 0x6f;
                lVar20 = 0x41;
                goto LAB_01060410;
              }
            }
          }
          else if (bVar6 == 0x2e) {
            lVar33 = 0x60;
            if (bVar4 != 10) {
              lVar33 = 0x73;
            }
            uVar25 = *(uint *)(param_6 + uVar31 * 4);
            uVar18 = uVar24 | ((int)(lVar33 << (uVar15 & 0x3f)) + uVar23) * 0x20;
            if (uVar18 <= uVar25) {
              uVar25 = uVar18;
            }
            *(uint *)(param_6 + uVar31 * 4) = uVar25;
            if (pbVar11[1] == 0x20) {
              lVar33 = param_6 + uVar32 * 4;
              lVar17 = 0x75;
              lVar20 = 0x5b;
LAB_01060410:
              if (bVar4 != 10) {
                lVar20 = lVar17;
              }
LAB_01060414:
              uVar24 = uVar24 | ((int)(lVar20 << (uVar15 & 0x3f)) + uVar23) * 0x20;
              uVar23 = *(uint *)(lVar33 + 0xc);
              if (uVar24 <= *(uint *)(lVar33 + 0xc)) {
                uVar23 = uVar24;
              }
              *(uint *)(lVar33 + 0xc) = uVar23;
            }
          }
          else {
            if (bVar6 != 0x3d) goto LAB_010604dc;
            if (pbVar11[1] == 0x27) {
              lVar33 = param_6 + uVar32 * 4;
              lVar20 = 0x77;
              if (bVar4 == 10) {
                lVar20 = 0x78;
              }
              goto LAB_01060414;
            }
            if (pbVar11[1] == 0x22) {
              lVar33 = param_6 + uVar32 * 4;
              lVar17 = 0x6e;
              lVar20 = 0x76;
              goto LAB_01060410;
            }
          }
        }
LAB_010604d8:
        param_1 = 1;
      }
    }
LAB_010604dc:
    uVar22 = uVar22 + 1;
  } while (-1 < (char)bVar3);
LAB_010605a8:
  if (param_5 < 6) goto LAB_01060a30;
  bVar2 = *in_x10;
  if (in_x10[1] == 0x20) {
    if ((bVar2 == 0x2c) || ((bVar2 == 0x65 || (bVar2 == 0x73)))) {
LAB_010605ec:
      pbVar21 = in_x10 + 2;
      uVar22 = (ulong)*(ushort *)(in_x9 + (ulong)((uint)(*(int *)pbVar21 * 0x1e35a7bd) >> 0x11) * 2)
      ;
      if (uVar22 != 0) {
        lVar14 = param_2[6];
        lVar16 = *param_2;
        do {
          pbVar13 = (byte *)(lVar14 + uVar22 * 4);
          bVar2 = *pbVar13;
          uVar31 = (ulong)bVar2;
          if (pbVar13[1] == 0) {
            uVar7 = *(ushort *)(pbVar13 + 2);
            uVar15 = uVar31 & 0x1f;
            if (uVar15 <= param_5 - 2) {
              lVar26 = *(long *)(lVar16 + 0xa8) +
                       (ulong)*(uint *)(lVar16 + uVar15 * 4 + 0x20) + (uint)uVar7 * uVar15;
              if (uVar15 >> 3 == 0) {
                uVar32 = 0;
                pbVar13 = pbVar21;
              }
              else {
                uVar32 = uVar31 & 0x18;
                lVar29 = 0;
                pbVar13 = pbVar21 + uVar32;
                do {
                  uVar19 = *(ulong *)(lVar26 + lVar29);
                  if (*(ulong *)(pbVar21 + lVar29) != uVar19) {
                    uVar19 = uVar19 ^ *(ulong *)(pbVar21 + lVar29);
                    uVar31 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1
                    ;
                    uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2
                    ;
                    uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                    uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar31 & 0xffff0000ffff) << 0x10;
                    uVar19 = lVar29 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
                    goto LAB_010606b4;
                  }
                  lVar29 = lVar29 + 8;
                } while ((uVar15 >> 3) * 8 - lVar29 != 0);
              }
              uVar31 = uVar31 & 7;
              uVar19 = uVar32;
              if ((bVar2 & 7) != 0) {
                uVar10 = uVar32 | uVar31;
                do {
                  uVar19 = uVar32;
                  if (*(byte *)(lVar26 + uVar32) != *pbVar13) break;
                  pbVar13 = pbVar13 + 1;
                  uVar31 = uVar31 - 1;
                  uVar32 = uVar32 + 1;
                  uVar19 = uVar10;
                } while (uVar31 != 0);
              }
LAB_010606b4:
              if (uVar19 == uVar15) {
                bVar3 = *in_x10;
                if (bVar3 == 0xc2) {
                  lVar26 = param_6 + uVar15 * 4;
                  uVar23 = *(uint *)(lVar26 + 8);
                  uVar24 = (uint)uVar15 |
                           ((int)(0x66L << ((ulong)*(byte *)(lVar16 + uVar15) & 0x3f)) + (uint)uVar7
                           ) * 0x20;
                  if (uVar24 <= uVar23) {
                    uVar23 = uVar24;
                  }
                  *(uint *)(lVar26 + 8) = uVar23;
                }
                else {
                  if ((param_5 <= uVar15 + 2) || (in_x10[uVar15 + 2] != 0x20)) goto LAB_01060744;
                  lVar26 = param_6 + uVar15 * 4;
                  lVar29 = 7;
                  if (bVar3 != 0x73) {
                    lVar29 = 0xd;
                  }
                  uVar24 = *(uint *)(lVar26 + 0xc);
                  lVar1 = 0x12;
                  if (bVar3 != 0x65) {
                    lVar1 = lVar29;
                  }
                  uVar23 = (uint)uVar15 |
                           ((int)(lVar1 << ((ulong)*(byte *)(lVar16 + uVar15) & 0x3f)) + (uint)uVar7
                           ) * 0x20;
                  if (uVar23 <= uVar24) {
                    uVar24 = uVar23;
                  }
                  *(uint *)(lVar26 + 0xc) = uVar24;
                }
                param_1 = 1;
              }
            }
          }
LAB_01060744:
          uVar22 = uVar22 + 1;
        } while (-1 < (char)bVar2);
      }
    }
  }
  else if ((in_x10[1] == 0xa0) && (bVar2 == 0xc2)) goto LAB_010605ec;
  if (8 < param_5) {
    if (*in_x10 == 0x2e) {
      if ((((in_x10[1] != 99) || (in_x10[2] != 0x6f)) || (in_x10[3] != 0x6d)) || (in_x10[4] != 0x2f)
         ) goto LAB_01060a30;
    }
    else if (((*in_x10 != 0x20) || (in_x10[1] != 0x74)) ||
            ((in_x10[2] != 0x68 || ((in_x10[3] != 0x65 || (in_x10[4] != 0x20))))))
    goto LAB_01060a30;
    pbVar21 = in_x10 + 5;
    uVar22 = (ulong)*(ushort *)(in_x9 + (ulong)((uint)(*(int *)pbVar21 * 0x1e35a7bd) >> 0x11) * 2);
    if (uVar22 != 0) {
      lVar14 = param_2[6];
      lVar16 = *param_2;
      do {
        pbVar13 = (byte *)(lVar14 + uVar22 * 4);
        bVar2 = *pbVar13;
        uVar31 = (ulong)bVar2;
        if (pbVar13[1] == 0) {
          uVar7 = *(ushort *)(pbVar13 + 2);
          uVar15 = uVar31 & 0x1f;
          uVar24 = (uint)uVar15;
          if (uVar15 <= param_5 - 5) {
            lVar26 = *(long *)(lVar16 + 0xa8) +
                     (ulong)*(uint *)(lVar16 + uVar15 * 4 + 0x20) + (uint)uVar7 * uVar15;
            if (uVar15 >> 3 == 0) {
              uVar32 = 0;
              pbVar13 = pbVar21;
            }
            else {
              uVar32 = uVar31 & 0x18;
              lVar29 = 0;
              pbVar13 = pbVar21 + uVar32;
              do {
                uVar19 = *(ulong *)(lVar26 + lVar29);
                if (*(ulong *)(pbVar21 + lVar29) != uVar19) {
                  uVar19 = uVar19 ^ *(ulong *)(pbVar21 + lVar29);
                  uVar31 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
                  uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
                  uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
                  uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10
                  ;
                  uVar19 = lVar29 + ((ulong)LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) >> 3);
                  goto LAB_010608d0;
                }
                lVar29 = lVar29 + 8;
              } while ((uVar15 >> 3) * 8 - lVar29 != 0);
            }
            uVar31 = uVar31 & 7;
            uVar19 = uVar32;
            if ((bVar2 & 7) != 0) {
              uVar10 = uVar32 | uVar31;
              do {
                uVar19 = uVar32;
                if (*(byte *)(lVar26 + uVar32) != *pbVar13) break;
                pbVar13 = pbVar13 + 1;
                uVar31 = uVar31 - 1;
                uVar32 = uVar32 + 1;
                uVar19 = uVar10;
              } while (uVar31 != 0);
            }
LAB_010608d0:
            if (uVar19 == uVar15) {
              uVar32 = (ulong)*(byte *)(lVar16 + uVar15);
              uVar31 = uVar15 + 5;
              uVar23 = *(uint *)(param_6 + uVar31 * 4);
              lVar26 = 0x29;
              if (*in_x10 != 0x20) {
                lVar26 = 0x48;
              }
              uVar18 = uVar24 | ((int)(lVar26 << (uVar32 & 0x3f)) + (uint)uVar7) * 0x20;
              if (uVar18 <= uVar23) {
                uVar23 = uVar18;
              }
              *(uint *)(param_6 + uVar31 * 4) = uVar23;
              if (uVar31 < param_5) {
                param_1 = 1;
                if ((param_5 <= uVar15 + 8) || (*in_x10 != 0x20)) goto LAB_010609e8;
                pbVar13 = in_x10 + uVar31;
                if ((*pbVar13 == 0x20) &&
                   (((pbVar13[1] == 0x6f && (pbVar13[2] == 0x66)) && (pbVar13[3] == 0x20)))) {
                  lVar26 = param_6 + uVar15 * 4;
                  uVar18 = *(uint *)(lVar26 + 0x24);
                  uVar23 = uVar24 | ((int)(0x3eL << (uVar32 & 0x3f)) + (uint)uVar7) * 0x20;
                  if (uVar23 <= uVar18) {
                    uVar18 = uVar23;
                  }
                  *(uint *)(lVar26 + 0x24) = uVar18;
                  if (((uVar15 + 0xc < param_5) && (pbVar13[4] == 0x74)) &&
                     ((pbVar13[5] == 0x68 && ((pbVar13[6] == 0x65 && (pbVar13[7] == 0x20)))))) {
                    lVar26 = param_6 + uVar15 * 4;
                    uVar23 = *(uint *)(lVar26 + 0x34);
                    uVar24 = uVar24 | ((int)(0x49L << (uVar32 & 0x3f)) + (uint)uVar7) * 0x20;
                    if (uVar24 <= uVar23) {
                      uVar23 = uVar24;
                    }
                    *(uint *)(lVar26 + 0x34) = uVar23;
                  }
                }
              }
              param_1 = 1;
            }
          }
        }
LAB_010609e8:
        uVar22 = uVar22 + 1;
      } while (-1 < (char)bVar2);
    }
  }
LAB_01060a30:
  return param_1 & 0xffffffff;
}


