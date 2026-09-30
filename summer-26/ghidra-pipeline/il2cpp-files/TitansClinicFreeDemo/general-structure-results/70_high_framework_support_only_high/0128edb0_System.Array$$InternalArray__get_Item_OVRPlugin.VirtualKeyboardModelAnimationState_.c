/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 0128edb0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


ulong System_Array__InternalArray__get_Item<OVRPlugin_VirtualKeyboardModelAnimationState>
                (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5
                ,undefined8 param_6,ushort *param_7)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 in_CY;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  char *pcVar14;
  ulong in_x9;
  uint uVar15;
  uint uVar16;
  ulong in_x10;
  ulong uVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined2 uVar23;
  byte *pbVar24;
  ulong uVar25;
  ulong uVar26;
  byte *pbVar27;
  long *unaff_x19;
  int unaff_w20;
  undefined1 *unaff_x21;
  byte *unaff_x22;
  byte *pbVar28;
  int unaff_w23;
  uint uVar29;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  uint uVar30;
  undefined1 auVar31 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  uint *in_stack_00000060;
  int in_stack_00000068;
  
  auVar31._8_8_ = param_3;
  auVar31._0_8_ = param_2;
  while (uVar11 = in_x9, unaff_x24 = (in_x10 << (unaff_x25 & 0x3f)) + unaff_x24, !(bool)in_CY) {
    if (unaff_w27 == 0) goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
    in_x10 = (ulong)*unaff_x22;
    unaff_w27 = unaff_w27 - 1;
    in_x9 = uVar11 + 8;
    unaff_x22 = unaff_x22 + 1;
    unaff_x25 = uVar11;
    in_CY = 5 < uVar11;
  }
  uVar15 = (uint)unaff_x24;
  uVar29 = uVar15 >> 5 & 0x1f;
  unaff_x24 = unaff_x24 >> 0xe;
  uVar8 = (uVar15 >> 10 & 0xf) + 4;
  uVar11 = (ulong)((int)uVar11 - 0xe);
  *(uint *)(unaff_x26 + 0x84) = (uVar15 & 0x1f) + 0x101;
  *(uint *)(unaff_x26 + 0x88) = uVar29 + 1;
  *(uint *)(unaff_x26 + 0x80) = uVar8;
  if ((0x1d < (uVar15 & 0x1f)) || (0x1d < uVar29)) {
    pcVar14 = "too many length or distance symbols";
    uVar17 = param_4;
    in_stack_00000050 = param_5;
    goto LAB_01290120;
  }
  *(undefined4 *)(unaff_x26 + 0x8c) = 0;
  *(undefined4 *)(unaff_x26 + 8) = 0x3f45;
  uVar17 = 0;
  do {
    uVar29 = (uint)uVar11;
    pbVar28 = unaff_x22;
    if (uVar29 < 3) {
      if (unaff_w27 == 0)
      goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
      pbVar28 = unaff_x22 + 1;
      uVar29 = uVar29 + 8;
      unaff_w27 = unaff_w27 - 1;
      unaff_x24 = ((ulong)*unaff_x22 << (uVar11 & 0x3f)) + unaff_x24;
    }
    uVar3 = *(ushort *)(param_1 + uVar17 * 2);
    uVar17 = uVar17 + 1;
    uVar4 = (ushort)unaff_x24;
    unaff_x24 = unaff_x24 >> 3;
    uVar15 = (uint)uVar17;
    uVar11 = (ulong)(uVar29 - 3);
    *(uint *)(unaff_x26 + 0x8c) = uVar15;
    *(ushort *)(unaff_x26 + (ulong)uVar3 * 2 + 0x98) = uVar4 & 7;
    unaff_x22 = pbVar28;
  } while (uVar15 < uVar8);
  uVar8 = (uint)param_4;
  if (uVar15 < 0x13) {
    uVar17 = uVar17 & 0xffffffff;
    do {
      lVar18 = uVar17 * 2;
      uVar17 = uVar17 + 1;
      *(undefined2 *)(unaff_x26 + (ulong)*(ushort *)(param_1 + lVar18) * 2 + 0x98) = 0;
    } while ((int)uVar17 != 0x13);
    *(undefined4 *)(unaff_x26 + 0x8c) = 0x13;
  }
  *(undefined8 *)(unaff_x26 + 0x90) = in_stack_00000030;
  *(undefined8 *)(unaff_x26 + 0x68) = in_stack_00000030;
  *(undefined4 *)(unaff_x26 + 0x78) = 7;
  auVar31 = FUN_012949ec(0,in_stack_00000020,0x13,param_5,in_stack_00000028,in_stack_00000038);
  if (auVar31._0_4_ != 0) {
    uVar17 = param_4 & 0xffffffff;
    unaff_x19[6] = (long)"invalid code lengths set";
    *in_stack_00000060 = 0x3f51;
    param_6 = 0xffffc0cc;
    param_7 = &switchD_0128eacc::switchdataD_00a801ce;
    goto LAB_0129012c;
  }
  uVar29 = 0;
  param_7 = &switchD_0128eacc::switchdataD_00a801ce;
  *(undefined4 *)(unaff_x26 + 0x8c) = 0;
  *(undefined4 *)(unaff_x26 + 8) = 0x3f46;
  iVar6 = *(int *)(unaff_x26 + 0x84);
  uVar15 = *(int *)(unaff_x26 + 0x88) + iVar6;
  if (uVar15 != 0) {
    lVar18 = *(long *)(unaff_x26 + 0x68);
    uVar30 = ~(-1 << (ulong)(*(uint *)(unaff_x26 + 0x78) & 0x1f));
    do {
      uVar26 = (ulong)(uVar30 & (uint)unaff_x24);
      bVar2 = *(byte *)(lVar18 + uVar26 * 4 + 1);
      uVar17 = (ulong)bVar2;
      uVar10 = (uint)uVar11;
      pbVar27 = pbVar28;
      uVar16 = unaff_w27;
      if (uVar10 < bVar2) {
        do {
          if (uVar16 == 0) goto LAB_01290184;
          pbVar24 = pbVar27 + 1;
          uVar16 = uVar16 - 1;
          unaff_x24 = ((ulong)*pbVar27 << (uVar11 & 0x3f)) + unaff_x24;
          uVar1 = uVar30 & (uint)unaff_x24;
          uVar20 = (ulong)*(byte *)(lVar18 + (ulong)uVar1 * 4 + 1);
          uVar11 = uVar11 + 8;
          pbVar27 = pbVar24;
        } while (uVar11 < uVar20);
        uVar26 = (ulong)uVar1;
        uVar11 = uVar11 & 0xffffffff;
        uVar17 = uVar20;
        pbVar28 = pbVar24;
        unaff_w27 = uVar16;
      }
      else {
        uVar20 = (ulong)(uint)bVar2;
      }
      uVar3 = *(ushort *)(lVar18 + uVar26 * 4 + 2);
      iVar9 = (int)uVar20;
      uVar16 = (uint)uVar11;
      if (0xf < uVar3) {
        unaff_x22 = pbVar28;
        if (uVar3 == 0x10) {
          if (uVar16 < iVar9 + 2U) {
            do {
              if (unaff_w27 == 0) goto LAB_0129031c;
              pbVar28 = unaff_x22 + 1;
              unaff_w27 = unaff_w27 - 1;
              uVar26 = uVar11 & 0x3f;
              uVar11 = uVar11 + 8;
              unaff_x24 = ((ulong)*unaff_x22 << uVar26) + unaff_x24;
              unaff_x22 = pbVar28;
            } while (uVar11 < iVar9 + 2U);
          }
          uVar17 = unaff_x24 >> (uVar17 & 0x3f);
          uVar16 = (int)uVar11 - iVar9;
          uVar11 = (ulong)uVar16;
          if (uVar29 != 0) {
            uVar23 = *(undefined2 *)(unaff_x26 + (ulong)(uVar29 - 1) * 2 + 0x98);
            iVar19 = ((uint)uVar17 & 3) + 3;
            unaff_x24 = uVar17 >> 2;
            uVar11 = (ulong)(uVar16 - 2);
            goto LAB_0128f2f8;
          }
        }
        else {
          if (uVar3 == 0x11) {
            if (uVar16 < iVar9 + 3U) {
              do {
                if (unaff_w27 == 0) goto LAB_012902dc;
                pbVar28 = unaff_x22 + 1;
                unaff_w27 = unaff_w27 - 1;
                uVar26 = uVar11 & 0x3f;
                uVar11 = uVar11 + 8;
                unaff_x24 = ((ulong)*unaff_x22 << uVar26) + unaff_x24;
                unaff_x22 = pbVar28;
              } while (uVar11 < iVar9 + 3U);
              uVar16 = (uint)uVar11;
            }
            uVar11 = unaff_x24 >> (uVar17 & 0x3f);
            uVar23 = 0;
            unaff_x24 = uVar11 >> 3;
            iVar19 = ((uint)uVar11 & 7) + 3;
            uVar11 = (ulong)((uVar16 - iVar9) - 3);
          }
          else {
            if (uVar16 < iVar9 + 7U) {
              do {
                if (unaff_w27 == 0) goto LAB_012902dc;
                pbVar28 = unaff_x22 + 1;
                unaff_w27 = unaff_w27 - 1;
                uVar26 = uVar11 & 0x3f;
                uVar11 = uVar11 + 8;
                unaff_x24 = ((ulong)*unaff_x22 << uVar26) + unaff_x24;
                unaff_x22 = pbVar28;
              } while (uVar11 < iVar9 + 7U);
              uVar16 = (uint)uVar11;
            }
            uVar11 = unaff_x24 >> (uVar17 & 0x3f);
            uVar23 = 0;
            unaff_x24 = uVar11 >> 7;
            iVar19 = ((uint)uVar11 & 0x7f) + 0xb;
            uVar11 = (ulong)((uVar16 - iVar9) - 7);
          }
LAB_0128f2f8:
          if (iVar19 + uVar29 <= uVar15) {
            do {
              iVar19 = iVar19 + -1;
              uVar17 = (ulong)uVar29;
              uVar29 = uVar29 + 1;
              *(undefined2 *)(unaff_x26 + uVar17 * 2 + 0x98) = uVar23;
            } while (iVar19 != 0);
            *(uint *)(unaff_x26 + 0x8c) = uVar29;
            goto LAB_0128f31c;
          }
        }
        param_6 = 0xffffc0cc;
        pcVar14 = "invalid bit length repeat";
        uVar17 = param_4 & 0xffffffff;
        goto LAB_01290120;
      }
      uVar11 = (ulong)(uVar16 - iVar9);
      uVar26 = (ulong)uVar29;
      uVar29 = uVar29 + 1;
      unaff_x24 = unaff_x24 >> (uVar17 & 0x3f);
      *(uint *)(unaff_x26 + 0x8c) = uVar29;
      *(ushort *)(unaff_x26 + uVar26 * 2 + 0x98) = uVar3;
LAB_0128f31c:
      unaff_x22 = pbVar28;
    } while (uVar29 < uVar15);
  }
  if (*(short *)(unaff_x26 + 0x298) == 0) {
    uVar17 = param_4 & 0xffffffff;
    unaff_x19[6] = (long)"invalid code -- missing end-of-block";
    *in_stack_00000060 = 0x3f51;
    param_6 = 0xffffc0cc;
    goto LAB_0129012c;
  }
  *(undefined8 *)(unaff_x26 + 0x90) = in_stack_00000030;
  *(undefined8 *)(unaff_x26 + 0x68) = in_stack_00000030;
  *(undefined4 *)(unaff_x26 + 0x78) = 9;
  auVar31 = FUN_012949ec(1,in_stack_00000020,iVar6,in_stack_00000050,in_stack_00000028,
                         in_stack_00000038);
  if (auVar31._0_4_ == 0) {
    *(undefined8 *)(unaff_x26 + 0x70) = *(undefined8 *)(unaff_x26 + 0x90);
    *(undefined4 *)(unaff_x26 + 0x7c) = 6;
    auVar31 = FUN_012949ec(2,unaff_x26 + (ulong)*(uint *)(unaff_x26 + 0x84) * 2 + 0x98,
                           *(undefined4 *)(unaff_x26 + 0x88),in_stack_00000050,in_stack_00000010,
                           in_stack_00000038);
    uVar7 = auVar31._8_8_;
    uVar26 = auVar31._0_8_;
    if (auVar31._0_4_ != 0) {
      pcVar14 = "invalid distances set";
      goto LAB_0128f4c0;
    }
    uVar17 = param_4 & 0xffffffff;
    param_6 = 0xffffc0cc;
    param_7 = &switchD_0128eacc::switchdataD_00a801ce;
    in_stack_00000048._4_4_ = 0;
    *in_stack_00000060 = 0x3f47;
    uVar29 = unaff_w27;
    if (in_stack_00000068 == 6) {
LAB_0129037c:
      iVar6 = (int)uVar11;
      param_4 = uVar17;
      unaff_w27 = uVar29;
      goto switchD_0128eacc_caseD_3f50;
    }
    *in_stack_00000060 = 0x3f48;
    if ((uVar8 < 0x102) || (unaff_w27 < 6)) {
      lVar18 = *(long *)(unaff_x26 + 0x68);
      *(undefined4 *)(unaff_x26 + 0x1bec) = 0;
      uVar29 = -1 << (ulong)(*(uint *)(unaff_x26 + 0x78) & 0x1f);
      uVar22 = (ulong)((uint)unaff_x24 & (uVar29 ^ 0xffffffff));
      bVar2 = *(byte *)(lVar18 + uVar22 * 4 + 1);
      uVar20 = (ulong)bVar2;
      if ((uint)uVar11 < (uint)bVar2) {
        uVar20 = uVar11;
        pbVar27 = unaff_x22;
        uVar15 = unaff_w27;
        do {
          pbVar28 = unaff_x22;
          if (uVar15 == 0) goto LAB_01290174;
          pbVar28 = pbVar27 + 1;
          uVar15 = uVar15 - 1;
          unaff_x24 = ((ulong)*pbVar27 << (uVar20 & 0x3f)) + unaff_x24;
          uVar30 = ~uVar29 & (uint)unaff_x24;
          uVar12 = (ulong)*(byte *)(lVar18 + (ulong)uVar30 * 4 + 1);
          uVar20 = uVar20 + 8;
          pbVar27 = pbVar28;
        } while (uVar20 < uVar12);
        uVar22 = (ulong)uVar30;
        uVar11 = uVar20 & 0xffffffff;
        uVar20 = uVar12;
        unaff_w27 = uVar15;
      }
      else {
        uVar12 = (ulong)(uint)bVar2;
        pbVar28 = unaff_x22;
      }
      uVar15 = (uint)uVar12;
      uVar29 = (uint)uVar11;
      pbVar27 = (byte *)(lVar18 + uVar22 * 4);
      bVar2 = *pbVar27;
      uVar3 = *(ushort *)(pbVar27 + 2);
      if ((bVar2 == 0) || ((bVar2 & 0xf0) != 0)) {
        uVar15 = 0;
      }
      else {
        uVar30 = -1 << (ulong)(uVar15 + bVar2 & 0x1f);
        uVar25 = (ulong)((((uint)unaff_x24 & (uVar30 ^ 0xffffffff)) >> (ulong)(uVar15 & 0x1f)) +
                        (uint)uVar3);
        bVar2 = *(byte *)(lVar18 + uVar25 * 4 + 1);
        uVar22 = (ulong)bVar2;
        pbVar27 = pbVar28;
        if (uVar29 < uVar15 + bVar2) {
          uVar21 = uVar11;
          pbVar24 = pbVar28;
          uVar16 = unaff_w27;
          do {
            if (uVar16 == 0) goto LAB_01290174;
            pbVar27 = pbVar24 + 1;
            uVar16 = uVar16 - 1;
            unaff_x24 = ((ulong)*pbVar24 << (uVar21 & 0x3f)) + unaff_x24;
            uVar29 = (((uint)unaff_x24 & ~uVar30) >> (ulong)(uVar15 & 0x1f)) + (uint)uVar3;
            uVar22 = (ulong)*(byte *)(lVar18 + (ulong)uVar29 * 4 + 1);
            uVar21 = uVar21 + 8;
            uVar26 = uVar22 + uVar12;
            pbVar24 = pbVar27;
          } while (uVar21 < uVar26);
          uVar25 = (ulong)uVar29;
          uVar29 = (uint)uVar21;
          unaff_w27 = uVar16;
        }
        pbVar28 = (byte *)(lVar18 + uVar25 * 4);
        uVar3 = *(ushort *)(pbVar28 + 2);
        bVar2 = *pbVar28;
        unaff_x24 = unaff_x24 >> (uVar20 & 0x3f);
        uVar29 = uVar29 - uVar15;
        *(uint *)(unaff_x26 + 0x1bec) = uVar15;
        uVar20 = uVar22;
        pbVar28 = pbVar27;
      }
      auVar31._8_8_ = uVar7;
      auVar31._0_8_ = uVar26;
      unaff_x24 = unaff_x24 >> (uVar20 & 0x3f);
      uVar29 = uVar29 - (int)uVar20;
      uVar11 = (ulong)uVar29;
      *(uint *)(unaff_x26 + 0x1bec) = uVar15 + (int)uVar20;
      *(uint *)(unaff_x26 + 0x5c) = (uint)uVar3;
      if (bVar2 == 0) {
        uVar8 = 0x3f4d;
LAB_01290064:
        auVar31._0_8_ = uVar26;
        *in_stack_00000060 = uVar8;
      }
      else {
        if ((bVar2 >> 5 & 1) != 0) {
          *(undefined4 *)(unaff_x26 + 0x1bec) = 0xffffffff;
          *(undefined4 *)(unaff_x26 + 8) = 0x3f3f;
          goto LAB_0129012c;
        }
        if ((bVar2 >> 6 & 1) == 0) {
          uVar15 = bVar2 & 0xf;
          *(uint *)(unaff_x26 + 100) = uVar15;
          *(undefined4 *)(unaff_x26 + 8) = 0x3f49;
          uVar20 = uVar11;
          pbVar27 = pbVar28;
          uVar30 = unaff_w27;
          if ((bVar2 & 0xf) == 0) {
            iVar6 = *(int *)(unaff_x26 + 0x5c);
          }
          else {
            while (uVar29 < uVar15) {
              if (uVar30 == 0) goto LAB_01290174;
              uVar29 = (int)uVar20 + 8;
              unaff_x24 = ((ulong)*pbVar27 << (uVar20 & 0x3f)) + unaff_x24;
              uVar20 = (ulong)uVar29;
              pbVar27 = pbVar27 + 1;
              uVar30 = uVar30 - 1;
            }
            uVar11 = (ulong)(uVar29 - uVar15);
            uVar29 = (uint)unaff_x24;
            unaff_x24 = unaff_x24 >> uVar15;
            iVar6 = *(int *)(unaff_x26 + 0x5c) + (uVar29 & (-1 << uVar15 ^ 0xffffffffU));
            *(int *)(unaff_x26 + 0x5c) = iVar6;
            *(uint *)(unaff_x26 + 0x1bec) = *(int *)(unaff_x26 + 0x1bec) + uVar15;
            pbVar28 = pbVar27;
            unaff_w27 = uVar30;
          }
          *(int *)(unaff_x26 + 0x1bf0) = iVar6;
          *(undefined4 *)(unaff_x26 + 8) = 0x3f4a;
          lVar18 = *(long *)(unaff_x26 + 0x70);
          uVar29 = -1 << (ulong)(*(uint *)(unaff_x26 + 0x7c) & 0x1f);
          uVar22 = (ulong)((uint)unaff_x24 & (uVar29 ^ 0xffffffff));
          bVar2 = *(byte *)(lVar18 + uVar22 * 4 + 1);
          uVar20 = (ulong)bVar2;
          if ((uint)uVar11 < (uint)bVar2) {
            uVar12 = uVar11;
            pbVar27 = pbVar28;
            uVar15 = unaff_w27;
            do {
              if (uVar15 == 0) goto LAB_01290174;
              pbVar24 = pbVar27 + 1;
              uVar15 = uVar15 - 1;
              unaff_x24 = ((ulong)*pbVar27 << (uVar12 & 0x3f)) + unaff_x24;
              uVar30 = ~uVar29 & (uint)unaff_x24;
              uVar20 = (ulong)*(byte *)(lVar18 + (ulong)uVar30 * 4 + 1);
              uVar12 = uVar12 + 8;
              pbVar27 = pbVar24;
            } while (uVar12 < uVar20);
            uVar22 = (ulong)uVar30;
            uVar11 = uVar12 & 0xffffffff;
            uVar12 = uVar20;
            pbVar28 = pbVar24;
            unaff_w27 = uVar15;
          }
          else {
            uVar12 = (ulong)(uint)bVar2;
          }
          uVar15 = (uint)uVar11;
          pbVar27 = (byte *)(lVar18 + uVar22 * 4);
          bVar2 = *pbVar27;
          uVar3 = *(ushort *)(pbVar27 + 2);
          pbVar27 = pbVar28;
          if ((bVar2 & 0xf0) == 0) {
            uVar16 = (uint)uVar12;
            uVar29 = -1 << (ulong)(uVar16 + bVar2 & 0x1f);
            uVar25 = (ulong)((((uint)unaff_x24 & (uVar29 ^ 0xffffffff)) >> (ulong)(uVar16 & 0x1f)) +
                            (uint)uVar3);
            bVar2 = *(byte *)(lVar18 + uVar25 * 4 + 1);
            uVar22 = (ulong)bVar2;
            uVar30 = unaff_w27;
            if (uVar15 < uVar16 + bVar2) {
              uVar21 = uVar11;
              pbVar24 = pbVar28;
              do {
                if (uVar30 == 0) goto LAB_01290174;
                pbVar27 = pbVar24 + 1;
                uVar30 = uVar30 - 1;
                unaff_x24 = ((ulong)*pbVar24 << (uVar21 & 0x3f)) + unaff_x24;
                uVar15 = (((uint)unaff_x24 & ~uVar29) >> (ulong)(uVar16 & 0x1f)) + (uint)uVar3;
                uVar22 = (ulong)*(byte *)(lVar18 + (ulong)uVar15 * 4 + 1);
                uVar21 = uVar21 + 8;
                uVar26 = uVar22 + uVar12;
                pbVar24 = pbVar27;
              } while (uVar21 < uVar26);
              uVar25 = (ulong)uVar15;
              uVar15 = (uint)uVar21;
            }
            pbVar28 = (byte *)(lVar18 + uVar25 * 4);
            uVar3 = *(ushort *)(pbVar28 + 2);
            bVar2 = *pbVar28;
            unaff_x24 = unaff_x24 >> (uVar20 & 0x3f);
            uVar15 = uVar15 - uVar16;
            iVar6 = *(int *)(unaff_x26 + 0x1bec) + uVar16;
            *(int *)(unaff_x26 + 0x1bec) = iVar6;
            unaff_w27 = uVar30;
          }
          else {
            iVar6 = *(int *)(unaff_x26 + 0x1bec);
            uVar22 = uVar20;
          }
          auVar31._0_8_ = uVar26;
          auVar5._8_8_ = uVar7;
          auVar5._0_8_ = uVar26;
          unaff_x24 = unaff_x24 >> (uVar22 & 0x3f);
          uVar15 = uVar15 - (int)uVar22;
          uVar11 = (ulong)uVar15;
          *(int *)(unaff_x26 + 0x1bec) = iVar6 + (int)uVar22;
          if ((bVar2 >> 6 & 1) == 0) {
            uVar30 = bVar2 & 0xf;
            *(uint *)(unaff_x26 + 0x60) = (uint)uVar3;
            *(uint *)(unaff_x26 + 100) = uVar30;
            *(undefined4 *)(unaff_x26 + 8) = 0x3f4b;
            unaff_x22 = pbVar27;
            uVar29 = unaff_w27;
            uVar20 = uVar11;
            if ((bVar2 & 0xf) != 0) {
              while (uVar15 < uVar30) {
                pbVar28 = pbVar27;
                if (uVar29 == 0) goto LAB_01290174;
                uVar15 = (int)uVar20 + 8;
                unaff_x24 = ((ulong)*unaff_x22 << (uVar20 & 0x3f)) + unaff_x24;
                uVar20 = (ulong)uVar15;
                unaff_x22 = unaff_x22 + 1;
                uVar29 = uVar29 - 1;
              }
              uVar11 = (ulong)(uVar15 - uVar30);
              uVar15 = (uint)unaff_x24;
              unaff_x24 = unaff_x24 >> uVar30;
              *(uint *)(unaff_x26 + 0x60) =
                   *(int *)(unaff_x26 + 0x60) + (uVar15 & (-1 << (ulong)uVar30 ^ 0xffffffffU));
              *(uint *)(unaff_x26 + 0x1bec) = *(int *)(unaff_x26 + 0x1bec) + uVar30;
            }
            *in_stack_00000060 = 0x3f4c;
            if (uVar8 == 0) goto LAB_0129037c;
            uVar29 = *(uint *)(unaff_x26 + 0x60);
            if (unaff_w20 - uVar8 < uVar29) {
              uVar29 = uVar29 - (unaff_w20 - uVar8);
              if ((*(uint *)(unaff_x26 + 0x40) < uVar29) && (*(int *)(unaff_x26 + 0x1be8) != 0)) {
                pcVar14 = "invalid distance too far back";
                param_7 = &switchD_0128eacc::switchdataD_00a801ce;
                auVar31 = auVar5;
                goto LAB_01290120;
              }
              uVar30 = *(uint *)(unaff_x26 + 0x44);
              uVar15 = uVar29 - uVar30;
              if (uVar29 < uVar30 || uVar15 == 0) {
                uVar30 = uVar30 - uVar29;
              }
              else {
                uVar30 = *(int *)(unaff_x26 + 0x3c) - uVar15;
                uVar29 = uVar15;
              }
              uVar15 = *(uint *)(unaff_x26 + 0x5c);
              puVar13 = (undefined1 *)(*(long *)(unaff_x26 + 0x48) + (ulong)uVar30);
              uVar30 = uVar15;
              if (uVar29 <= uVar15) {
                uVar30 = uVar29;
              }
            }
            else {
              uVar15 = *(uint *)(unaff_x26 + 0x5c);
              puVar13 = unaff_x21 + -(ulong)uVar29;
              uVar30 = uVar15;
            }
            uVar29 = uVar8;
            if (uVar30 <= uVar8) {
              uVar29 = uVar30;
            }
            *(uint *)(unaff_x26 + 0x5c) = uVar15 - uVar29;
            uVar15 = uVar29;
            do {
              uVar15 = uVar15 - 1;
              *unaff_x21 = *puVar13;
              puVar13 = puVar13 + 1;
              unaff_x21 = unaff_x21 + 1;
            } while (uVar15 != 0);
            uVar17 = (ulong)(uVar8 - uVar29);
            if (*(int *)(unaff_x26 + 0x5c) != 0) goto LAB_0129012c;
            uVar8 = 0x3f48;
            goto LAB_01290064;
          }
          pcVar14 = "invalid distance code";
          param_7 = &switchD_0128eacc::switchdataD_00a801ce;
        }
        else {
          pcVar14 = "invalid literal/length code";
        }
LAB_01290120:
        unaff_x19[6] = (long)pcVar14;
        *in_stack_00000060 = 0x3f51;
      }
      goto LAB_0129012c;
    }
    unaff_x19[3] = (long)unaff_x21;
    *(uint *)(unaff_x19 + 4) = uVar8;
    *unaff_x19 = (long)unaff_x22;
    *(uint *)(unaff_x19 + 1) = unaff_w27;
    *(ulong *)(unaff_x26 + 0x50) = unaff_x24;
    *(uint *)(unaff_x26 + 0x58) = (uint)uVar11;
    auVar31 = FUN_0129454c();
    uVar8 = *(uint *)(unaff_x19 + 4);
    uVar11 = (ulong)*(uint *)(unaff_x26 + 0x58);
    if (*(int *)(unaff_x26 + 8) == 0x3f3f) {
      *(undefined4 *)(unaff_x26 + 0x1bec) = 0xffffffff;
    }
  }
  else {
    pcVar14 = "invalid literal/lengths set";
LAB_0128f4c0:
    unaff_x19[6] = (long)pcVar14;
    *in_stack_00000060 = 0x3f51;
  }
  uVar17 = (ulong)uVar8;
  param_6 = 0xffffc0cc;
  param_7 = &switchD_0128eacc::switchdataD_00a801ce;
LAB_0129012c:
  uVar8 = *in_stack_00000060 + (int)param_6;
  if (0x1e < uVar8) {
    return 0xfffffffe;
  }
                    /* WARNING: Could not recover jumptable at 0x0128eacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar11 = (*(code *)((ulong)param_7[uVar8] * 4 + 0x128ead0))
                     (&DAT_00a80214,auVar31._0_8_,auVar31._8_8_,uVar17,in_stack_00000050,param_6,
                      param_7,uVar11);
  return uVar11;
System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>:
  iVar6 = (int)uVar11;
  goto switchD_0128eacc_caseD_3f50;
LAB_01290174:
  uVar10 = (uint)uVar11;
LAB_01290184:
  in_stack_00000048._4_4_ = 0;
  param_4 = param_4 & 0xffffffff;
  iVar6 = uVar10 + unaff_w27 * 8;
  unaff_x22 = pbVar28 + unaff_w27;
  unaff_w27 = 0;
  goto switchD_0128eacc_caseD_3f50;
LAB_012902dc:
  uVar11 = uVar11 & 0xffffffff;
LAB_0129031c:
  unaff_w27 = 0;
  in_stack_00000048._4_4_ = 0;
  iVar6 = (int)uVar11;
  param_4 = param_4 & 0xffffffff;
switchD_0128eacc_caseD_3f50:
  unaff_x19[3] = (long)unaff_x21;
  iVar9 = (int)param_4;
  *(int *)(unaff_x19 + 4) = iVar9;
  *unaff_x19 = (long)unaff_x22;
  *(uint *)(unaff_x19 + 1) = unaff_w27;
  *(ulong *)(unaff_x26 + 0x50) = unaff_x24;
  *(int *)(unaff_x26 + 0x58) = iVar6;
  if ((*(int *)(unaff_x26 + 0x3c) != 0) ||
     (((unaff_w20 != iVar9 && (*in_stack_00000060 < 0x3f51)) &&
      ((in_stack_00000068 != 4 || (*in_stack_00000060 < 0x3f4e)))))) {
    iVar6 = FUN_01290384();
    if (iVar6 != 0) {
      *in_stack_00000060 = 0x3f52;
      return 0xfffffffc;
    }
    unaff_w27 = *(uint *)(unaff_x19 + 1);
    iVar9 = (int)unaff_x19[4];
  }
  uVar8 = unaff_w20 - iVar9;
  uVar11 = (ulong)uVar8;
  unaff_x19[2] = unaff_x19[2] + (ulong)(unaff_w23 - unaff_w27);
  unaff_x19[5] = unaff_x19[5] + uVar11;
  *(ulong *)(unaff_x26 + 0x28) = *(long *)(unaff_x26 + 0x28) + uVar11;
  if ((uVar8 != 0) && ((*(uint *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
    if (*(int *)(unaff_x26 + 0x18) == 0) {
      lVar18 = FUN_0128e738(*(undefined8 *)(unaff_x26 + 0x20),unaff_x19[3] - uVar11,uVar11);
    }
    else {
      lVar18 = FUN_0129514c();
    }
    *in_stack_00000058 = lVar18;
    unaff_x19[0xc] = lVar18;
  }
  iVar9 = *(int *)(unaff_x26 + 8);
  iVar6 = 0x100;
  if (iVar9 != 0x3f42 && iVar9 != 0x3f47) {
    iVar6 = 0;
  }
  *(uint *)(unaff_x19 + 0xb) =
       *(int *)(unaff_x26 + 0x58) + (uint)(*(int *)(unaff_x26 + 0xc) != 0) * 0x40 +
       (uint)(iVar9 == 0x3f3f) * 0x80 + iVar6;
  uVar29 = 0xfffffffb;
  if ((uVar8 != 0 || unaff_w23 - unaff_w27 != 0) && in_stack_00000068 != 4 ||
      in_stack_00000048._4_4_ != 0) {
    uVar29 = in_stack_00000048._4_4_;
  }
  return (ulong)uVar29;
}


