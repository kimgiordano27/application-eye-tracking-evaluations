/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 0105fa74
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


undefined8
System_Array__InternalArray__set_Item<OVRPlugin_Qpl_Annotation>
          (ulong param_1,long *param_2,undefined8 param_3,ulong param_4,ulong param_5,long param_6,
          ulong param_7)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  undefined1 in_ZR;
  bool bVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long in_x9;
  byte *in_x10;
  long in_x11;
  long in_x12;
  long in_x13;
  byte *pbVar22;
  byte *in_x14;
  ulong uVar23;
  ulong in_x15;
  long lVar24;
  uint uVar25;
  long lVar26;
  long in_x17;
  long unaff_x19;
  ulong uVar27;
  ulong unaff_x20;
  ulong uVar28;
  uint uVar29;
  long unaff_x21;
  long lVar30;
  uint *puVar31;
  long unaff_x26;
  ulong uVar32;
  ulong unaff_x27;
  ulong uVar33;
  long unaff_x29;
  long lVar34;
  
code_r0x0105fa74:
  lVar16 = 0x6c;
  if (!(bool)in_ZR) {
    lVar16 = 0x74;
  }
LAB_0105fa84:
  lVar24 = param_6 + in_x15 * 4;
  uVar25 = *(uint *)(lVar24 + 8);
  uVar29 = (uint)param_1 & 0x1f | ((int)(lVar16 << (unaff_x20 & 0x3f)) + (int)unaff_x27) * 0x20;
  if (uVar29 <= uVar25) {
    uVar25 = uVar29;
  }
  *(uint *)(lVar24 + 8) = uVar25;
switchD_0105f540_caseD_21:
  in_x11 = in_x11 + 1;
  if (((uint)param_7 >> 7 & 1) != 0) {
    if (param_5 < 5) {
      return 1;
    }
    bVar3 = *in_x10;
    if ((bVar3 != 0x2e) && (bVar3 != 0x20)) goto LAB_010605a8;
    pbVar22 = in_x10 + 1;
    uVar23 = (ulong)*(ushort *)(in_x9 + (ulong)((uint)(*(int *)pbVar22 * 0x1e35a7bd) >> 0x11) * 2);
    if (uVar23 == 0) goto LAB_010605a8;
    lVar24 = param_2[6];
    lVar26 = *param_2;
    bVar9 = bVar3 != 0x20;
    pbVar15 = in_x10 + 2;
    lVar16 = 6;
    if (bVar9) {
      lVar16 = 0x20;
    }
    lVar30 = 0x59;
    if (bVar9) {
      lVar30 = 0x43;
    }
    lVar1 = 2;
    if (bVar9) {
      lVar1 = 0x4d;
    }
    goto LAB_0105ffd4;
  }
  pbVar22 = (byte *)(in_x12 + in_x11 * 4);
  bVar3 = *pbVar22;
  param_7 = (ulong)bVar3;
  bVar4 = pbVar22[1];
  unaff_x27 = (ulong)*(ushort *)(pbVar22 + 2);
  param_1 = param_7 & 0x1f;
  unaff_x20 = (ulong)*(byte *)(in_x13 + param_1);
  uVar25 = (uint)*(ushort *)(pbVar22 + 2);
  uVar29 = (uint)param_1;
  if (bVar4 != 0) {
    if (param_5 < param_1) goto switchD_0105f540_caseD_21;
    pbVar22 = (byte *)(*(long *)(in_x13 + 0xa8) +
                      (ulong)*(uint *)(in_x13 + param_1 * 4 + 0x20) + unaff_x27 * param_1);
    if (bVar4 == 0) {
      if (param_1 >> 3 == 0) {
        uVar23 = 0;
        pbVar15 = in_x10;
      }
      else {
        uVar23 = param_7 & 0x18;
        lVar16 = 0;
        pbVar15 = in_x10 + uVar23;
        do {
          if (*(ulong *)(in_x10 + lVar16) != *(ulong *)(pbVar22 + lVar16)) {
            uVar23 = *(ulong *)(pbVar22 + lVar16) ^ *(ulong *)(in_x10 + lVar16);
            uVar23 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
            uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
            uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
            uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
            uVar32 = lVar16 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
            goto LAB_0105f4e0;
          }
          lVar16 = lVar16 + 8;
        } while ((param_1 >> 3) * 8 - lVar16 != 0);
      }
      uVar17 = param_7 & 7;
      uVar32 = uVar23;
      if ((bVar3 & 7) != 0) {
        uVar33 = uVar23 | uVar17;
        do {
          uVar32 = uVar23;
          if (pbVar22[uVar23] != *pbVar15) break;
          pbVar15 = pbVar15 + 1;
          uVar17 = uVar17 - 1;
          uVar23 = uVar23 + 1;
          uVar32 = uVar33;
        } while (uVar17 != 0);
      }
LAB_0105f4e0:
      if (uVar32 != param_1) goto switchD_0105f540_caseD_21;
    }
    else if (bVar4 == 10) {
      if ((0x19 < *pbVar22 - 0x61) || ((*pbVar22 ^ 0x20) != (uint)*in_x10))
      goto switchD_0105f540_caseD_21;
      uVar23 = param_1 + 0xffffffff;
      uVar32 = uVar23 >> 3 & 0x1fffffff;
      if (uVar32 == 0) {
        uVar17 = 0;
        pbVar15 = in_x14;
      }
      else {
        uVar17 = uVar23 & 0xfffffff8;
        lVar16 = 0;
        pbVar15 = in_x14 + uVar17;
        do {
          if (*(ulong *)(in_x14 + lVar16) != *(ulong *)(pbVar22 + lVar16 + 1)) {
            uVar32 = *(ulong *)(pbVar22 + lVar16 + 1) ^ *(ulong *)(in_x14 + lVar16);
            uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
            uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
            uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
            uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
            uVar17 = lVar16 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
            goto LAB_0105f5b4;
          }
          lVar16 = lVar16 + 8;
        } while (uVar32 * 8 - lVar16 != 0);
      }
      uVar32 = uVar23 & 7;
      if (uVar32 != 0) {
        uVar20 = uVar17 | uVar32;
        uVar33 = uVar17;
        do {
          uVar17 = uVar33;
          if (pbVar22[uVar33 + 1] != *pbVar15) break;
          pbVar15 = pbVar15 + 1;
          uVar32 = uVar32 - 1;
          uVar17 = uVar20;
          uVar33 = uVar33 + 1;
        } while (uVar32 != 0);
      }
LAB_0105f5b4:
      if (uVar17 != (uVar23 & 0xffffffff)) goto switchD_0105f540_caseD_21;
    }
    else {
      pbVar15 = in_x10;
      uVar23 = param_1;
      if ((bVar3 & 0x1f) != 0) {
        do {
          bVar3 = *pbVar22;
          uVar19 = (uint)bVar3;
          if (bVar3 - 0x61 < 0x1a) {
            bVar5 = *pbVar15;
            uVar19 = bVar3 ^ 0x20;
          }
          else {
            bVar5 = *pbVar15;
          }
          if (uVar19 != bVar5) goto switchD_0105f540_caseD_21;
          pbVar15 = pbVar15 + 1;
          uVar23 = uVar23 - 1;
          pbVar22 = pbVar22 + 1;
        } while (uVar23 != 0);
      }
    }
    uVar19 = *(uint *)(param_6 + param_1 * 4);
    lVar16 = unaff_x26;
    if (bVar4 != 10) {
      lVar16 = unaff_x21;
    }
    uVar29 = uVar29 | ((int)(lVar16 << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
    if (uVar29 <= uVar19) {
      uVar19 = uVar29;
    }
    *(uint *)(param_6 + param_1 * 4) = uVar19;
    if (param_1 + 1 < param_5) {
      uVar25 = (uint)in_x10[param_1];
      uVar29 = uVar25 - 0x20;
      if (uVar29 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x0105f540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*(code *)((ulong)*(ushort *)(unaff_x29 + (ulong)uVar29 * 2) * 4 + 0x105f544))();
        return uVar10;
      }
      if (uVar25 == 0x3d) {
        bVar3 = (in_x10 + param_1)[1];
        in_x15 = param_1;
        if (bVar3 != 0x27) goto code_r0x0105f5d8;
        in_ZR = bVar4 == 10;
        goto code_r0x0105fa74;
      }
    }
    goto switchD_0105f540_caseD_21;
  }
  uVar23 = param_1;
  if (param_5 <= param_1) {
    uVar23 = param_5;
  }
  lVar16 = *(long *)(in_x13 + 0xa8) +
           (ulong)*(uint *)(in_x13 + param_1 * 4 + 0x20) + param_1 * unaff_x27;
  if (uVar23 >> 3 == 0) {
    uVar32 = 0;
    pbVar22 = in_x10;
  }
  else {
    uVar32 = uVar23 & 0x18;
    lVar24 = 0;
    pbVar22 = in_x10 + uVar32;
    do {
      uVar17 = *(ulong *)(lVar16 + lVar24);
      if (*(ulong *)(in_x10 + lVar24) != uVar17) {
        uVar17 = uVar17 ^ *(ulong *)(in_x10 + lVar24);
        uVar23 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
        uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
        uVar17 = lVar24 + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3);
        goto LAB_0105f230;
      }
      lVar24 = lVar24 + 8;
    } while ((uVar23 >> 3) * 8 - lVar24 != 0);
  }
  uVar23 = uVar23 & 7;
  uVar17 = uVar32;
  if (uVar23 != 0) {
    uVar33 = uVar32 | uVar23;
    do {
      uVar17 = uVar32;
      if (*(byte *)(lVar16 + uVar32) != *pbVar22) break;
      pbVar22 = pbVar22 + 1;
      uVar23 = uVar23 - 1;
      uVar32 = uVar32 + 1;
      uVar17 = uVar33;
    } while (uVar23 != 0);
  }
LAB_0105f230:
  if (uVar17 == param_1) {
    uVar2 = *(uint *)(param_6 + param_1 * 4);
    uVar19 = uVar29 | uVar25 << 5;
    if (uVar19 <= uVar2) {
      uVar2 = uVar19;
    }
    *(uint *)(param_6 + param_1 * 4) = uVar2;
  }
  uVar23 = param_1 - 1;
  if (uVar23 <= uVar17) {
    uVar2 = *(uint *)(param_6 + uVar23 * 4);
    uVar19 = uVar29 | ((int)(unaff_x19 << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
    if (uVar19 <= uVar2) {
      uVar2 = uVar19;
    }
    *(uint *)(param_6 + uVar23 * 4) = uVar2;
    if ((((param_1 + 2 < param_5) && (in_x10[uVar23] == 0x69)) && (in_x10[param_1] == 0x6e)) &&
       ((in_x10[param_1 + 1] == 0x67 && (in_x10[param_1 + 2] == 0x20)))) {
      lVar16 = param_6 + param_1 * 4;
      uVar2 = *(uint *)(lVar16 + 0xc);
      uVar19 = uVar29 | ((int)(0x31L << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
      if (uVar19 <= uVar2) {
        uVar2 = uVar19;
      }
      *(uint *)(lVar16 + 0xc) = uVar2;
    }
  }
  uVar23 = param_4;
  if (param_4 <= param_1 - 9) {
    uVar23 = param_1 - 9;
  }
  if (uVar29 < 10) {
    uVar23 = param_4;
  }
  uVar32 = uVar17;
  if (param_1 - 2 <= uVar17) {
    uVar32 = param_1 - 2;
  }
  if (uVar23 <= uVar32) {
    uVar33 = param_2[2];
    lVar16 = (uVar32 - uVar23) + 1;
    lVar24 = param_1 * 4 + uVar23 * -4;
    uVar32 = param_1 * in_x17 - uVar23 * in_x17;
    puVar31 = (uint *)(param_6 + uVar23 * 4);
    do {
      uVar19 = uVar29 | ((int)(lVar24 + (uVar33 >> (uVar32 & 0x3f) & 0x3f) << (unaff_x20 & 0x3f)) +
                        uVar25) * 0x20;
      uVar2 = *puVar31;
      if (uVar19 <= *puVar31) {
        uVar2 = uVar19;
      }
      lVar16 = lVar16 + -1;
      lVar24 = lVar24 + -4;
      *puVar31 = uVar2;
      uVar32 = uVar32 - 6;
      puVar31 = puVar31 + 1;
    } while (lVar16 != 0);
  }
  if ((uVar17 < param_1) || (uVar23 = param_1 + 6, param_5 <= uVar23))
  goto switchD_0105f540_caseD_21;
  pbVar22 = in_x10 + param_1;
  bVar3 = *pbVar22;
  if (bVar3 < 0x3d) {
    switch(bVar3) {
    case 0x20:
      lVar16 = param_6 + param_1 * 4;
      uVar2 = *(uint *)(lVar16 + 4);
      iVar11 = (int)(1L << (unaff_x20 & 0x3f));
      uVar19 = uVar29 | (iVar11 + uVar25) * 0x20;
      if (uVar19 <= uVar2) {
        uVar2 = uVar19;
      }
      *(uint *)(lVar16 + 4) = uVar2;
      bVar3 = pbVar22[1];
      switch(bVar3) {
      case 0x61:
        bVar3 = pbVar22[2];
        if (bVar3 < 0x73) {
          if (bVar3 == 0x20) {
            lVar16 = param_6 + param_1 * 4;
            uVar19 = *(uint *)(lVar16 + 0xc);
            lVar24 = 0x1c;
            goto LAB_0105fba8;
          }
          if (((bVar3 == 0x6e) && (pbVar22[3] == 100)) && (pbVar22[4] == 0x20)) {
            lVar16 = param_6 + param_1 * 4;
            uVar19 = *(uint *)(lVar16 + 0x14);
            lVar24 = 10;
            goto FUN_0105fd08;
          }
          goto switchD_0105f540_caseD_21;
        }
        if (bVar3 != 0x73) {
          if ((bVar3 == 0x74) && (pbVar22[3] == 0x20)) {
            lVar16 = param_6 + param_1 * 4;
            uVar19 = *(uint *)(lVar16 + 0x10);
            lVar24 = 0x3c;
            break;
          }
          goto switchD_0105f540_caseD_21;
        }
        if (pbVar22[3] != 0x20) goto switchD_0105f540_caseD_21;
        lVar16 = param_6 + param_1 * 4;
        uVar19 = *(uint *)(lVar16 + 0x10);
        lVar24 = 0x2e;
        break;
      case 0x62:
        if ((pbVar22[2] != 0x79) || (pbVar22[3] != 0x20)) goto switchD_0105f540_caseD_21;
        lVar16 = param_6 + param_1 * 4;
        uVar19 = *(uint *)(lVar16 + 0x10);
        lVar24 = 0x26;
        break;
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
        if (pbVar22[2] == 0x72) {
          if (((pbVar22[3] == 0x6f) && (pbVar22[4] == 0x6d)) && (pbVar22[5] == 0x20)) {
            uVar19 = *(uint *)(param_6 + uVar23 * 4);
            lVar16 = 0x25;
            goto LAB_0105feb4;
          }
        }
        else if (((pbVar22[2] == 0x6f) && (pbVar22[3] == 0x72)) && (pbVar22[4] == 0x20)) {
          lVar16 = param_6 + param_1 * 4;
          uVar19 = *(uint *)(lVar16 + 0x14);
          lVar24 = 0x19;
          goto FUN_0105fd08;
        }
        goto switchD_0105f540_caseD_21;
      case 0x69:
        if (pbVar22[2] == 0x73) {
          if (pbVar22[3] == 0x20) {
            lVar16 = param_6 + param_1 * 4;
            uVar19 = *(uint *)(lVar16 + 0x10);
            lVar24 = 0x2f;
            break;
          }
        }
        else if ((pbVar22[2] == 0x6e) && (pbVar22[3] == 0x20)) {
          lVar16 = param_6 + param_1 * 4;
          uVar19 = *(uint *)(lVar16 + 0x10);
          iVar11 = iVar11 * 0x10;
LAB_0105fcb8:
          uVar29 = uVar29 | (uVar25 + iVar11) * 0x20;
          if (uVar29 <= uVar19) {
            uVar19 = uVar29;
          }
          goto LAB_0105fe8c;
        }
        goto switchD_0105f540_caseD_21;
      case 0x6e:
        if (((pbVar22[2] == 0x6f) && (pbVar22[3] == 0x74)) && (pbVar22[4] == 0x20)) {
          lVar16 = param_6 + param_1 * 4;
          uVar19 = *(uint *)(lVar16 + 0x14);
          lVar24 = 0x50;
FUN_0105fd08:
          uVar29 = uVar29 | ((int)(lVar24 << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
          if (uVar29 <= uVar19) {
            uVar19 = uVar29;
          }
          *(uint *)(lVar16 + 0x14) = uVar19;
        }
        goto switchD_0105f540_caseD_21;
      case 0x6f:
        if (pbVar22[2] != 0x6e) {
          if ((pbVar22[2] == 0x66) && (pbVar22[3] == 0x20)) {
            lVar16 = param_6 + param_1 * 4;
            uVar19 = *(uint *)(lVar16 + 0x10);
            iVar11 = iVar11 * 8;
            goto LAB_0105fcb8;
          }
          goto switchD_0105f540_caseD_21;
        }
        if (pbVar22[3] != 0x20) goto switchD_0105f540_caseD_21;
        lVar16 = param_6 + param_1 * 4;
        uVar19 = *(uint *)(lVar16 + 0x10);
        lVar24 = 0x2d;
        break;
      default:
        if (bVar3 != 0x74) {
          if ((((bVar3 == 0x77) && (pbVar22[2] == 0x69)) && (pbVar22[3] == 0x74)) &&
             ((pbVar22[4] == 0x68 && (pbVar22[5] == 0x20)))) {
            uVar19 = *(uint *)(param_6 + uVar23 * 4);
            lVar16 = 0x23;
            goto LAB_0105feb4;
          }
          goto switchD_0105f540_caseD_21;
        }
        if (pbVar22[2] == 0x6f) {
          if (pbVar22[3] == 0x20) {
            lVar16 = param_6 + param_1 * 4;
            uVar19 = *(uint *)(lVar16 + 0x10);
            lVar24 = 0x11;
            break;
          }
          goto switchD_0105f540_caseD_21;
        }
        if (pbVar22[2] != 0x68) goto switchD_0105f540_caseD_21;
        if (pbVar22[3] != 0x61) {
          if ((pbVar22[3] == 0x65) && (pbVar22[4] == 0x20)) {
            lVar16 = param_6 + param_1 * 4;
            uVar19 = *(uint *)(lVar16 + 0x14);
            lVar24 = 5;
            goto FUN_0105fd08;
          }
          goto switchD_0105f540_caseD_21;
        }
        if ((pbVar22[4] != 0x74) || (pbVar22[5] != 0x20)) goto switchD_0105f540_caseD_21;
        uVar19 = *(uint *)(param_6 + uVar23 * 4);
        lVar16 = 0x1d;
        goto LAB_0105feb4;
      }
      goto LAB_0105fe78;
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
      lVar16 = param_6 + param_1 * 4;
      uVar19 = uVar29 | ((int)(0x13L << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
      uVar2 = *(uint *)(lVar16 + 4);
      if (uVar19 <= *(uint *)(lVar16 + 4)) {
        uVar2 = uVar19;
      }
      *(uint *)(lVar16 + 4) = uVar2;
      if (pbVar22[1] == 0x3e) {
        uVar19 = *(uint *)(lVar16 + 8);
        lVar24 = 0x15;
        goto LAB_0105fa2c;
      }
      goto switchD_0105f540_caseD_21;
    case 0x27:
      lVar16 = param_6 + param_1 * 4;
      uVar19 = *(uint *)(lVar16 + 4);
      lVar24 = 0x24;
      break;
    case 0x28:
      lVar16 = param_6 + param_1 * 4;
      uVar19 = *(uint *)(lVar16 + 4);
      lVar24 = 0x39;
      break;
    case 0x2c:
      lVar16 = param_6 + param_1 * 4;
      uVar19 = uVar29 | ((int)(0x4cL << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
      uVar2 = *(uint *)(lVar16 + 4);
      if (uVar19 <= *(uint *)(lVar16 + 4)) {
        uVar2 = uVar19;
      }
      *(uint *)(lVar16 + 4) = uVar2;
      if (pbVar22[1] == 0x20) {
        uVar19 = *(uint *)(lVar16 + 8);
        lVar24 = 0xe;
LAB_0105fa2c:
        uVar29 = uVar29 | ((int)(lVar24 << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
        if (uVar29 <= uVar19) {
          uVar19 = uVar29;
        }
        *(uint *)(lVar16 + 8) = uVar19;
      }
      goto switchD_0105f540_caseD_21;
    case 0x2e:
      lVar16 = param_6 + param_1 * 4;
      uVar19 = uVar29 | ((int)(0x14L << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
      uVar2 = *(uint *)(lVar16 + 4);
      if (uVar19 <= *(uint *)(lVar16 + 4)) {
        uVar2 = uVar19;
      }
      *(uint *)(lVar16 + 4) = uVar2;
      if (pbVar22[1] != 0x20) goto switchD_0105f540_caseD_21;
      uVar19 = uVar29 | ((int)(0x1fL << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
      uVar2 = *(uint *)(lVar16 + 8);
      if (uVar19 <= *(uint *)(lVar16 + 8)) {
        uVar2 = uVar19;
      }
      *(uint *)(lVar16 + 8) = uVar2;
      if ((pbVar22[2] != 0x54) || (pbVar22[3] != 0x68)) goto switchD_0105f540_caseD_21;
      if (pbVar22[4] == 0x69) {
        if ((pbVar22[5] == 0x73) && (pbVar22[6] == 0x20)) {
          lVar16 = param_6 + param_1 * 4;
          uVar19 = *(uint *)(lVar16 + 0x1c);
          uVar29 = uVar29 | ((int)(0x4bL << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
          if (uVar29 <= uVar19) {
            uVar19 = uVar29;
          }
          *(uint *)(lVar16 + 0x1c) = uVar19;
        }
        goto switchD_0105f540_caseD_21;
      }
      if ((pbVar22[4] != 0x65) || (pbVar22[5] != 0x20)) goto switchD_0105f540_caseD_21;
      uVar19 = *(uint *)(param_6 + uVar23 * 4);
      lVar16 = 0x2b;
LAB_0105feb4:
      uVar29 = uVar29 | ((int)(lVar16 << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
      if (uVar29 <= uVar19) {
        uVar19 = uVar29;
      }
      *(uint *)(param_6 + uVar23 * 4) = uVar19;
      goto switchD_0105f540_caseD_21;
    default:
      if (bVar3 == 10) {
        lVar16 = param_6 + param_1 * 4;
        uVar19 = uVar29 | ((int)(0x16L << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
        uVar2 = *(uint *)(lVar16 + 4);
        if (uVar19 <= *(uint *)(lVar16 + 4)) {
          uVar2 = uVar19;
        }
        *(uint *)(lVar16 + 4) = uVar2;
        if (pbVar22[1] == 9) {
          uVar19 = *(uint *)(lVar16 + 8);
          lVar24 = 0x32;
          goto LAB_0105fa2c;
        }
        goto switchD_0105f540_caseD_21;
      }
      if (bVar3 != 0x3a) goto switchD_0105f540_caseD_21;
      lVar16 = param_6 + param_1 * 4;
      uVar19 = *(uint *)(lVar16 + 4);
      lVar24 = 0x33;
    }
LAB_0105f7d4:
    uVar29 = uVar29 | ((int)(lVar24 << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
    if (uVar29 <= uVar19) {
      uVar19 = uVar29;
    }
    *(uint *)(lVar16 + 4) = uVar19;
    goto switchD_0105f540_caseD_21;
  }
  switch(bVar3) {
  case 0x61:
    if ((pbVar22[1] != 0x6c) || (pbVar22[2] != 0x20)) goto switchD_0105f540_caseD_21;
    lVar16 = param_6 + param_1 * 4;
    uVar19 = *(uint *)(lVar16 + 0xc);
    lVar24 = 0x54;
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
    bVar3 = pbVar22[1];
    if (bVar3 == 0x73) {
      if ((pbVar22[2] == 0x74) && (pbVar22[3] == 0x20)) {
        lVar16 = param_6 + param_1 * 4;
        uVar19 = *(uint *)(lVar16 + 0x10);
        lVar24 = 0x5f;
        goto LAB_0105fe78;
      }
      goto switchD_0105f540_caseD_21;
    }
    if (bVar3 == 0x72) {
      if (pbVar22[2] != 0x20) goto switchD_0105f540_caseD_21;
      lVar16 = param_6 + param_1 * 4;
      uVar19 = *(uint *)(lVar16 + 0xc);
      lVar24 = 0x52;
    }
    else {
      if ((bVar3 != 100) || (pbVar22[2] != 0x20)) goto switchD_0105f540_caseD_21;
      lVar16 = param_6 + param_1 * 4;
      uVar19 = *(uint *)(lVar16 + 0xc);
      lVar24 = 0x35;
    }
    break;
  case 0x66:
    if (((pbVar22[1] == 0x75) && (pbVar22[2] == 0x6c)) && (pbVar22[3] == 0x20)) {
      lVar16 = param_6 + param_1 * 4;
      uVar19 = *(uint *)(lVar16 + 0x10);
      lVar24 = 0x5a;
      goto LAB_0105fe78;
    }
    goto switchD_0105f540_caseD_21;
  case 0x69:
    if (pbVar22[1] != 0x7a) {
      if (((pbVar22[1] == 0x76) && (pbVar22[2] == 0x65)) && (pbVar22[3] == 0x20)) {
        lVar16 = param_6 + param_1 * 4;
        uVar19 = *(uint *)(lVar16 + 0x10);
        lVar24 = 0x5c;
        goto LAB_0105fe78;
      }
      goto switchD_0105f540_caseD_21;
    }
    if ((pbVar22[2] != 0x65) || (pbVar22[3] != 0x20)) goto switchD_0105f540_caseD_21;
    lVar16 = param_6 + param_1 * 4;
    uVar19 = *(uint *)(lVar16 + 0x10);
    lVar24 = 100;
    goto LAB_0105fe78;
  case 0x6c:
    if (pbVar22[1] != 0x79) {
      if (((pbVar22[1] == 0x65) && (pbVar22[2] == 0x73)) &&
         ((pbVar22[3] == 0x73 && (pbVar22[4] == 0x20)))) {
        lVar16 = param_6 + param_1 * 4;
        uVar19 = *(uint *)(lVar16 + 0x14);
        lVar24 = 0x5d;
        goto FUN_0105fd08;
      }
      goto switchD_0105f540_caseD_21;
    }
    if (pbVar22[2] != 0x20) goto switchD_0105f540_caseD_21;
    lVar16 = param_6 + param_1 * 4;
    uVar19 = *(uint *)(lVar16 + 0xc);
    lVar24 = 0x3d;
    break;
  case 0x6f:
    if (((pbVar22[1] != 0x75) || (pbVar22[2] != 0x73)) || (pbVar22[3] != 0x20))
    goto switchD_0105f540_caseD_21;
    lVar16 = param_6 + param_1 * 4;
    uVar19 = *(uint *)(lVar16 + 0x10);
    lVar24 = 0x6a;
LAB_0105fe78:
    uVar29 = uVar29 | ((int)(lVar24 << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
    if (uVar29 <= uVar19) {
      uVar19 = uVar29;
    }
LAB_0105fe8c:
    *(uint *)(lVar16 + 0x10) = uVar19;
    goto switchD_0105f540_caseD_21;
  default:
    if (bVar3 != 0x3d) {
      if (bVar3 == 0x5d) {
        lVar16 = param_6 + param_1 * 4;
        uVar19 = *(uint *)(lVar16 + 4);
        lVar24 = 0x18;
        goto LAB_0105f7d4;
      }
      goto switchD_0105f540_caseD_21;
    }
    if (pbVar22[1] == 0x27) {
      lVar16 = param_6 + param_1 * 4;
      uVar19 = *(uint *)(lVar16 + 8);
      lVar24 = 0x56;
    }
    else {
      if (pbVar22[1] != 0x22) goto switchD_0105f540_caseD_21;
      lVar16 = param_6 + param_1 * 4;
      uVar19 = *(uint *)(lVar16 + 8);
      lVar24 = 0x46;
    }
    uVar29 = uVar29 | ((int)(lVar24 << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
    if (uVar29 <= uVar19) {
      uVar19 = uVar29;
    }
    *(uint *)(lVar16 + 8) = uVar19;
    goto switchD_0105f540_caseD_21;
  }
LAB_0105fba8:
  uVar29 = uVar29 | ((int)(lVar24 << (unaff_x20 & 0x3f)) + uVar25) * 0x20;
  if (uVar29 <= uVar19) {
    uVar19 = uVar29;
  }
  *(uint *)(lVar16 + 0xc) = uVar19;
  goto switchD_0105f540_caseD_21;
code_r0x0105f5d8:
  if (bVar3 == 0x22) goto code_r0x0105f5e0;
  goto switchD_0105f540_caseD_21;
code_r0x0105f5e0:
  lVar16 = 0x68;
  if (bVar4 != 10) {
    lVar16 = 0x69;
  }
  goto LAB_0105fa84;
LAB_0105ffd4:
  do {
    pbVar13 = (byte *)(lVar24 + uVar23 * 4);
    bVar4 = *pbVar13;
    uVar32 = (ulong)bVar4;
    bVar5 = pbVar13[1];
    uVar8 = *(ushort *)(pbVar13 + 2);
    uVar33 = uVar32 & 0x1f;
    uVar17 = (ulong)*(byte *)(lVar26 + uVar33);
    uVar25 = (uint)uVar8;
    uVar29 = (uint)uVar33;
    if (bVar5 == 0) {
      if (uVar33 <= param_5 - 1) {
        lVar34 = *(long *)(lVar26 + 0xa8) +
                 (ulong)*(uint *)(lVar26 + uVar33 * 4 + 0x20) + (uint)uVar8 * uVar33;
        if (uVar33 >> 3 == 0) {
          uVar20 = 0;
          pbVar13 = pbVar22;
        }
        else {
          uVar20 = uVar32 & 0x18;
          lVar21 = 0;
          pbVar13 = pbVar22 + uVar20;
          do {
            uVar12 = *(ulong *)(lVar34 + lVar21);
            if (*(ulong *)(pbVar22 + lVar21) != uVar12) {
              uVar12 = uVar12 ^ *(ulong *)(pbVar22 + lVar21);
              uVar32 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
              uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
              uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
              uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
              uVar12 = lVar21 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
              goto LAB_01060110;
            }
            lVar21 = lVar21 + 8;
          } while ((uVar33 >> 3) * 8 - lVar21 != 0);
        }
        uVar32 = uVar32 & 7;
        uVar12 = uVar20;
        if ((bVar4 & 7) != 0) {
          uVar27 = uVar20 | uVar32;
          do {
            uVar12 = uVar20;
            if (*(byte *)(lVar34 + uVar20) != *pbVar13) break;
            pbVar13 = pbVar13 + 1;
            uVar32 = uVar32 - 1;
            uVar20 = uVar20 + 1;
            uVar12 = uVar27;
          } while (uVar32 != 0);
        }
LAB_01060110:
        if (uVar12 == uVar33) {
          lVar34 = uVar33 + 1;
          uVar2 = *(uint *)(param_6 + lVar34 * 4);
          uVar19 = uVar29 | ((int)(lVar16 << (uVar17 & 0x3f)) + (uint)uVar8) * 0x20;
          uVar32 = uVar33 + 2;
          if (uVar19 <= uVar2) {
            uVar2 = uVar19;
          }
          *(uint *)(param_6 + lVar34 * 4) = uVar2;
          if (uVar32 < param_5) {
            pbVar13 = in_x10 + lVar34;
            bVar5 = *pbVar13;
            if (bVar5 == 0x28) {
              uVar19 = *(uint *)(param_6 + uVar32 * 4);
              lVar34 = lVar30;
            }
            else {
              if (bVar5 != 0x20) {
                if (bVar3 == 0x20) {
                  if (bVar5 == 0x3d) {
                    if (pbVar13[1] == 0x27) {
                      lVar34 = param_6 + uVar33 * 4;
                      uVar19 = *(uint *)(lVar34 + 0xc);
                      lVar21 = 0x62;
                    }
                    else {
                      if (pbVar13[1] != 0x22) goto LAB_010604dc;
                      lVar34 = param_6 + uVar33 * 4;
                      uVar19 = *(uint *)(lVar34 + 0xc);
                      lVar21 = 0x51;
                    }
FUN_010604bc:
                    uVar29 = uVar29 | ((int)(lVar21 << (uVar17 & 0x3f)) + uVar25) * 0x20;
                    if (uVar29 <= uVar19) {
                      uVar19 = uVar29;
                    }
                    *(uint *)(lVar34 + 0xc) = uVar19;
                  }
                  else if (bVar5 == 0x2e) {
                    uVar2 = *(uint *)(param_6 + uVar32 * 4);
                    uVar19 = uVar29 | ((int)(0x47L << (uVar17 & 0x3f)) + uVar25) * 0x20;
                    if (uVar19 <= uVar2) {
                      uVar2 = uVar19;
                    }
                    *(uint *)(param_6 + uVar32 * 4) = uVar2;
                    if (pbVar13[1] == 0x20) {
                      lVar34 = param_6 + uVar33 * 4;
                      uVar19 = *(uint *)(lVar34 + 0xc);
                      lVar21 = 0x34;
                      goto FUN_010604bc;
                    }
                  }
                  else if (bVar5 == 0x2c) {
                    uVar2 = *(uint *)(param_6 + uVar32 * 4);
                    uVar19 = uVar29 | ((int)(0x67L << (uVar17 & 0x3f)) + uVar25) * 0x20;
                    if (uVar19 <= uVar2) {
                      uVar2 = uVar19;
                    }
                    *(uint *)(param_6 + uVar32 * 4) = uVar2;
                    if (pbVar13[1] == 0x20) {
                      lVar34 = param_6 + uVar33 * 4;
                      uVar19 = *(uint *)(lVar34 + 0xc);
                      lVar21 = 0x21;
                      goto FUN_010604bc;
                    }
                  }
                }
                goto LAB_010604dc;
              }
              uVar19 = *(uint *)(param_6 + uVar32 * 4);
              lVar34 = lVar1;
            }
            uVar29 = uVar29 | ((int)(lVar34 << (uVar17 & 0x3f)) + uVar25) * 0x20;
            if (uVar29 <= uVar19) {
              uVar19 = uVar29;
            }
            *(uint *)(param_6 + uVar32 * 4) = uVar19;
          }
        }
      }
    }
    else if ((bVar3 == 0x20) && (uVar33 <= param_5 - 1)) {
      pbVar13 = (byte *)(*(long *)(lVar26 + 0xa8) +
                        (ulong)*(uint *)(lVar26 + uVar33 * 4 + 0x20) + uVar8 * uVar33);
      if (bVar5 == 0) {
        if (uVar33 >> 3 == 0) {
          uVar20 = 0;
          pbVar14 = pbVar22;
        }
        else {
          uVar20 = uVar32 & 0x18;
          lVar34 = 0;
          pbVar14 = pbVar22 + uVar20;
          do {
            if (*(ulong *)(pbVar22 + lVar34) != *(ulong *)(pbVar13 + lVar34)) {
              uVar32 = *(ulong *)(pbVar13 + lVar34) ^ *(ulong *)(pbVar22 + lVar34);
              uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
              uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
              uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
              uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
              uVar12 = lVar34 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
              goto LAB_010601f8;
            }
            lVar34 = lVar34 + 8;
          } while ((uVar33 >> 3) * 8 - lVar34 != 0);
        }
        uVar32 = uVar32 & 7;
        uVar12 = uVar20;
        if ((bVar4 & 7) != 0) {
          uVar27 = uVar20 | uVar32;
          do {
            uVar12 = uVar20;
            if (pbVar13[uVar20] != *pbVar14) break;
            pbVar14 = pbVar14 + 1;
            uVar32 = uVar32 - 1;
            uVar20 = uVar20 + 1;
            uVar12 = uVar27;
          } while (uVar32 != 0);
        }
LAB_010601f8:
        if (uVar12 == uVar33) goto LAB_01060200;
      }
      else if (bVar5 == 10) {
        if ((*pbVar13 - 0x61 < 0x1a) && ((*pbVar13 ^ 0x20) == (uint)*pbVar22)) {
          uVar32 = uVar33 + 0xffffffff;
          uVar20 = uVar32 >> 3 & 0x1fffffff;
          if (uVar20 == 0) {
            uVar12 = 0;
            pbVar14 = pbVar15;
          }
          else {
            uVar12 = uVar32 & 0xfffffff8;
            lVar34 = 0;
            pbVar14 = pbVar15 + uVar12;
            do {
              if (*(ulong *)(pbVar15 + lVar34) != *(ulong *)(pbVar13 + lVar34 + 1)) {
                uVar20 = *(ulong *)(pbVar13 + lVar34 + 1) ^ *(ulong *)(pbVar15 + lVar34);
                uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                uVar12 = lVar34 + ((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
                goto LAB_01060380;
              }
              lVar34 = lVar34 + 8;
            } while (uVar20 * 8 - lVar34 != 0);
          }
          uVar20 = uVar32 & 7;
          if (uVar20 != 0) {
            uVar28 = uVar12 | uVar20;
            uVar27 = uVar12;
            do {
              uVar12 = uVar27;
              if (pbVar13[uVar27 + 1] != *pbVar14) break;
              pbVar14 = pbVar14 + 1;
              uVar20 = uVar20 - 1;
              uVar12 = uVar28;
              uVar27 = uVar27 + 1;
            } while (uVar20 != 0);
          }
LAB_01060380:
          if (uVar12 == (uVar32 & 0xffffffff)) goto LAB_01060200;
        }
      }
      else {
        pbVar14 = pbVar22;
        uVar32 = uVar33;
        if ((bVar4 & 0x1f) != 0) {
          do {
            bVar7 = *pbVar13;
            uVar19 = (uint)bVar7;
            if (bVar7 - 0x61 < 0x1a) {
              bVar6 = *pbVar14;
              uVar19 = bVar7 ^ 0x20;
            }
            else {
              bVar6 = *pbVar14;
            }
            if (uVar19 != bVar6) goto LAB_010604dc;
            pbVar14 = pbVar14 + 1;
            uVar32 = uVar32 - 1;
            pbVar13 = pbVar13 + 1;
          } while (uVar32 != 0);
        }
LAB_01060200:
        lVar34 = uVar33 + 1;
        lVar21 = 0x1e;
        if (bVar5 != 10) {
          lVar21 = 0x55;
        }
        uVar2 = *(uint *)(param_6 + lVar34 * 4);
        uVar19 = uVar29 | ((int)(lVar21 << (uVar17 & 0x3f)) + uVar25) * 0x20;
        uVar32 = uVar33 + 2;
        if (uVar19 <= uVar2) {
          uVar2 = uVar19;
        }
        *(uint *)(param_6 + lVar34 * 4) = uVar2;
        if (uVar32 < param_5) {
          pbVar13 = in_x10 + lVar34;
          bVar7 = *pbVar13;
          if (bVar7 < 0x2e) {
            if (bVar7 == 0x20) {
              uVar19 = *(uint *)(param_6 + uVar32 * 4);
              lVar34 = 0xf;
              if (bVar5 != 10) {
                lVar34 = 0x53;
              }
              uVar29 = uVar29 | ((int)(lVar34 << (uVar17 & 0x3f)) + uVar25) * 0x20;
              if (uVar29 <= uVar19) {
                uVar19 = uVar29;
              }
              *(uint *)(param_6 + uVar32 * 4) = uVar19;
            }
            else if (bVar7 == 0x2c) {
              if (bVar5 == 10) {
                uVar2 = *(uint *)(param_6 + uVar32 * 4);
                uVar19 = uVar29 | ((int)(0x6dL << (uVar17 & 0x3f)) + uVar25) * 0x20;
                if (uVar19 <= uVar2) {
                  uVar2 = uVar19;
                }
                *(uint *)(param_6 + uVar32 * 4) = uVar2;
              }
              if (pbVar13[1] == 0x20) {
                lVar34 = param_6 + uVar33 * 4;
                lVar18 = 0x6f;
                lVar21 = 0x41;
                goto LAB_01060410;
              }
            }
          }
          else if (bVar7 == 0x2e) {
            lVar34 = 0x60;
            if (bVar5 != 10) {
              lVar34 = 0x73;
            }
            uVar2 = *(uint *)(param_6 + uVar32 * 4);
            uVar19 = uVar29 | ((int)(lVar34 << (uVar17 & 0x3f)) + uVar25) * 0x20;
            if (uVar19 <= uVar2) {
              uVar2 = uVar19;
            }
            *(uint *)(param_6 + uVar32 * 4) = uVar2;
            if (pbVar13[1] == 0x20) {
              lVar34 = param_6 + uVar33 * 4;
              lVar18 = 0x75;
              lVar21 = 0x5b;
LAB_01060410:
              if (bVar5 != 10) {
                lVar21 = lVar18;
              }
LAB_01060414:
              uVar29 = uVar29 | ((int)(lVar21 << (uVar17 & 0x3f)) + uVar25) * 0x20;
              uVar25 = *(uint *)(lVar34 + 0xc);
              if (uVar29 <= *(uint *)(lVar34 + 0xc)) {
                uVar25 = uVar29;
              }
              *(uint *)(lVar34 + 0xc) = uVar25;
            }
          }
          else if (bVar7 == 0x3d) {
            if (pbVar13[1] == 0x27) {
              lVar34 = param_6 + uVar33 * 4;
              lVar21 = 0x77;
              if (bVar5 == 10) {
                lVar21 = 0x78;
              }
              goto LAB_01060414;
            }
            if (pbVar13[1] == 0x22) {
              lVar34 = param_6 + uVar33 * 4;
              lVar18 = 0x6e;
              lVar21 = 0x76;
              goto LAB_01060410;
            }
          }
        }
      }
    }
LAB_010604dc:
    uVar23 = uVar23 + 1;
  } while (-1 < (char)bVar4);
LAB_010605a8:
  if (param_5 < 6) {
    return 1;
  }
  bVar3 = *in_x10;
  if (in_x10[1] == 0x20) {
    if ((bVar3 != 0x2c) && ((bVar3 != 0x65 && (bVar3 != 0x73)))) goto LAB_0106078c;
  }
  else if ((in_x10[1] != 0xa0) || (bVar3 != 0xc2)) goto LAB_0106078c;
  pbVar22 = in_x10 + 2;
  uVar23 = (ulong)*(ushort *)(in_x9 + (ulong)((uint)(*(int *)pbVar22 * 0x1e35a7bd) >> 0x11) * 2);
  if (uVar23 != 0) {
    lVar16 = param_2[6];
    lVar24 = *param_2;
    do {
      pbVar15 = (byte *)(lVar16 + uVar23 * 4);
      bVar3 = *pbVar15;
      uVar32 = (ulong)bVar3;
      if (pbVar15[1] == 0) {
        uVar8 = *(ushort *)(pbVar15 + 2);
        uVar17 = uVar32 & 0x1f;
        if (uVar17 <= param_5 - 2) {
          lVar26 = *(long *)(lVar24 + 0xa8) +
                   (ulong)*(uint *)(lVar24 + uVar17 * 4 + 0x20) + (uint)uVar8 * uVar17;
          if (uVar17 >> 3 == 0) {
            uVar33 = 0;
            pbVar15 = pbVar22;
          }
          else {
            uVar33 = uVar32 & 0x18;
            lVar30 = 0;
            pbVar15 = pbVar22 + uVar33;
            do {
              uVar20 = *(ulong *)(lVar26 + lVar30);
              if (*(ulong *)(pbVar22 + lVar30) != uVar20) {
                uVar20 = uVar20 ^ *(ulong *)(pbVar22 + lVar30);
                uVar32 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
                uVar20 = lVar30 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                goto LAB_010606b4;
              }
              lVar30 = lVar30 + 8;
            } while ((uVar17 >> 3) * 8 - lVar30 != 0);
          }
          uVar32 = uVar32 & 7;
          uVar20 = uVar33;
          if ((bVar3 & 7) != 0) {
            uVar12 = uVar33 | uVar32;
            do {
              uVar20 = uVar33;
              if (*(byte *)(lVar26 + uVar33) != *pbVar15) break;
              pbVar15 = pbVar15 + 1;
              uVar32 = uVar32 - 1;
              uVar33 = uVar33 + 1;
              uVar20 = uVar12;
            } while (uVar32 != 0);
          }
LAB_010606b4:
          if (uVar20 == uVar17) {
            bVar4 = *in_x10;
            if (bVar4 == 0xc2) {
              lVar26 = param_6 + uVar17 * 4;
              uVar25 = *(uint *)(lVar26 + 8);
              uVar29 = (uint)uVar17 |
                       ((int)(0x66L << ((ulong)*(byte *)(lVar24 + uVar17) & 0x3f)) + (uint)uVar8) *
                       0x20;
              if (uVar29 <= uVar25) {
                uVar25 = uVar29;
              }
              *(uint *)(lVar26 + 8) = uVar25;
            }
            else if ((uVar17 + 2 < param_5) && (in_x10[uVar17 + 2] == 0x20)) {
              lVar26 = param_6 + uVar17 * 4;
              lVar30 = 7;
              if (bVar4 != 0x73) {
                lVar30 = 0xd;
              }
              uVar29 = *(uint *)(lVar26 + 0xc);
              lVar1 = 0x12;
              if (bVar4 != 0x65) {
                lVar1 = lVar30;
              }
              uVar25 = (uint)uVar17 |
                       ((int)(lVar1 << ((ulong)*(byte *)(lVar24 + uVar17) & 0x3f)) + (uint)uVar8) *
                       0x20;
              if (uVar25 <= uVar29) {
                uVar29 = uVar25;
              }
              *(uint *)(lVar26 + 0xc) = uVar29;
            }
          }
        }
      }
      uVar23 = uVar23 + 1;
    } while (-1 < (char)bVar3);
  }
LAB_0106078c:
  if (8 < param_5) {
    if (*in_x10 == 0x2e) {
      if (in_x10[1] != 99) {
        return 1;
      }
      if (in_x10[2] != 0x6f) {
        return 1;
      }
      if (in_x10[3] != 0x6d) {
        return 1;
      }
      if (in_x10[4] != 0x2f) {
        return 1;
      }
    }
    else {
      if (*in_x10 != 0x20) {
        return 1;
      }
      if (in_x10[1] != 0x74) {
        return 1;
      }
      if (in_x10[2] != 0x68) {
        return 1;
      }
      if (in_x10[3] != 0x65) {
        return 1;
      }
      if (in_x10[4] != 0x20) {
        return 1;
      }
    }
    pbVar22 = in_x10 + 5;
    uVar23 = (ulong)*(ushort *)(in_x9 + (ulong)((uint)(*(int *)pbVar22 * 0x1e35a7bd) >> 0x11) * 2);
    if (uVar23 != 0) {
      lVar16 = param_2[6];
      lVar24 = *param_2;
      do {
        pbVar15 = (byte *)(lVar16 + uVar23 * 4);
        bVar3 = *pbVar15;
        uVar32 = (ulong)bVar3;
        if (pbVar15[1] == 0) {
          uVar8 = *(ushort *)(pbVar15 + 2);
          uVar17 = uVar32 & 0x1f;
          uVar29 = (uint)uVar17;
          if (uVar17 <= param_5 - 5) {
            lVar26 = *(long *)(lVar24 + 0xa8) +
                     (ulong)*(uint *)(lVar24 + uVar17 * 4 + 0x20) + (uint)uVar8 * uVar17;
            if (uVar17 >> 3 == 0) {
              uVar33 = 0;
              pbVar15 = pbVar22;
            }
            else {
              uVar33 = uVar32 & 0x18;
              lVar30 = 0;
              pbVar15 = pbVar22 + uVar33;
              do {
                uVar20 = *(ulong *)(lVar26 + lVar30);
                if (*(ulong *)(pbVar22 + lVar30) != uVar20) {
                  uVar20 = uVar20 ^ *(ulong *)(pbVar22 + lVar30);
                  uVar32 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                  uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                  uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                  uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10
                  ;
                  uVar20 = lVar30 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                  goto LAB_010608d0;
                }
                lVar30 = lVar30 + 8;
              } while ((uVar17 >> 3) * 8 - lVar30 != 0);
            }
            uVar32 = uVar32 & 7;
            uVar20 = uVar33;
            if ((bVar3 & 7) != 0) {
              uVar12 = uVar33 | uVar32;
              do {
                uVar20 = uVar33;
                if (*(byte *)(lVar26 + uVar33) != *pbVar15) break;
                pbVar15 = pbVar15 + 1;
                uVar32 = uVar32 - 1;
                uVar33 = uVar33 + 1;
                uVar20 = uVar12;
              } while (uVar32 != 0);
            }
LAB_010608d0:
            if (uVar20 == uVar17) {
              uVar33 = (ulong)*(byte *)(lVar24 + uVar17);
              uVar32 = uVar17 + 5;
              uVar25 = *(uint *)(param_6 + uVar32 * 4);
              lVar26 = 0x29;
              if (*in_x10 != 0x20) {
                lVar26 = 0x48;
              }
              uVar19 = uVar29 | ((int)(lVar26 << (uVar33 & 0x3f)) + (uint)uVar8) * 0x20;
              if (uVar19 <= uVar25) {
                uVar25 = uVar19;
              }
              *(uint *)(param_6 + uVar32 * 4) = uVar25;
              if ((((((uVar32 < param_5) && (uVar17 + 8 < param_5)) && (*in_x10 == 0x20)) &&
                   ((pbVar15 = in_x10 + uVar32, *pbVar15 == 0x20 && (pbVar15[1] == 0x6f)))) &&
                  (pbVar15[2] == 0x66)) && (pbVar15[3] == 0x20)) {
                lVar26 = param_6 + uVar17 * 4;
                uVar19 = *(uint *)(lVar26 + 0x24);
                uVar25 = uVar29 | ((int)(0x3eL << (uVar33 & 0x3f)) + (uint)uVar8) * 0x20;
                if (uVar25 <= uVar19) {
                  uVar19 = uVar25;
                }
                *(uint *)(lVar26 + 0x24) = uVar19;
                if (((uVar17 + 0xc < param_5) && (pbVar15[4] == 0x74)) &&
                   ((pbVar15[5] == 0x68 && ((pbVar15[6] == 0x65 && (pbVar15[7] == 0x20)))))) {
                  lVar26 = param_6 + uVar17 * 4;
                  uVar25 = *(uint *)(lVar26 + 0x34);
                  uVar29 = uVar29 | ((int)(0x49L << (uVar33 & 0x3f)) + (uint)uVar8) * 0x20;
                  if (uVar29 <= uVar25) {
                    uVar25 = uVar29;
                  }
                  *(uint *)(lVar26 + 0x34) = uVar25;
                }
              }
            }
          }
        }
        uVar23 = uVar23 + 1;
      } while (-1 < (char)bVar3);
    }
  }
  return 1;
}


