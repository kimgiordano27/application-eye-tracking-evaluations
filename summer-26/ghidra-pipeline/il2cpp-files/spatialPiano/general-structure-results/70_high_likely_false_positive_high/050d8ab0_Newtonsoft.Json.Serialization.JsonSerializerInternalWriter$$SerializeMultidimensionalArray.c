/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 050d8ab0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (long param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  undefined1 auVar7 [12];
  undefined *puVar8;
  char in_NG;
  char in_OV;
  undefined2 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  int in_w8;
  int iVar15;
  int in_w9;
  int iVar16;
  long lVar17;
  int in_w10;
  uint in_w11;
  ushort *puVar18;
  short *psVar19;
  uint in_w12;
  uint uVar20;
  int iVar21;
  undefined4 in_w16;
  uint in_w17;
  int unaff_w19;
  uint uVar22;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  uint uVar23;
  long lVar24;
  int unaff_w25;
  short *psVar25;
  short sVar26;
  int unaff_w26;
  int iVar27;
  undefined8 unaff_x27;
  int iVar28;
  uint uVar29;
  int iVar30;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar31 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
code_r0x050d8ab0:
  iVar15 = unaff_w25;
  iVar28 = unaff_w26;
  iVar16 = in_w9;
  if ((in_NG != in_OV) && (*(short *)(param_1 + (long)(int)in_w11 * 2) != 0)) {
    in_w11 = in_w12 + 2;
  }
LAB_050d8bd8:
  unaff_w26 = iVar28;
  unaff_w25 = iVar15;
  iVar21 = (int)unaff_x27;
  in_w9 = iVar16;
  in_w12 = in_w11;
  uVar22 = unaff_w23;
  if ((int)in_w11 < iVar21) goto LAB_050d89f0;
LAB_050d8c0c:
  *(undefined4 *)(unaff_x29 + -0x24) = in_w16;
  iVar15 = unaff_w25;
  if (-1 < iVar16) {
    iVar15 = iVar16;
  }
  if (-1 < in_w10) {
    if (in_w10 == iVar15) {
      in_w8 = *(int *)(unaff_x29 + -0x44) * -3 + in_w8;
    }
    else {
      in_w17 = 1;
    }
  }
  do {
    *(uint *)(unaff_x29 + -0x34) = in_w17;
    puVar8 = PTR_DAT_067dbd90;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      FUN_050e41d4();
      *(undefined4 *)(unaff_x28 + 4) = 0;
LAB_050d8cf4:
      iVar28 = iVar15 - unaff_w26;
      *(undefined4 *)(unaff_x29 + -0x44) = 0;
      if (iVar28 == 0 || iVar15 < unaff_w26) {
        iVar28 = 0;
      }
      iVar16 = iVar15 - unaff_w19;
      if (unaff_w19 <= iVar15) {
        iVar16 = 0;
      }
      *(int *)(unaff_x29 + -0x8c) = iVar16;
      iVar16 = iVar15;
      if ((*(uint *)(unaff_x29 + -0x24) & 1) == 0) {
        iVar21 = *(int *)(unaff_x28 + 4);
        iVar16 = iVar21;
        if (iVar21 - iVar15 == 0 || iVar21 < iVar15) {
          iVar16 = iVar15;
        }
        *(int *)(unaff_x29 + -0x44) = iVar21 - iVar15;
      }
      uVar12 = DAT_011b1c08;
      puVar13 = &uStack_10;
      uStack_10 = 0;
      uStack_8 = 0;
      lVar17 = *(long *)(unaff_x29 + -0x40);
      *(undefined8 **)(unaff_x29 + -0x18) = puVar13;
      *(undefined8 *)(unaff_x29 + -0x50) = unaff_x27;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar12;
      *(long *)(unaff_x29 + -0x80) = unaff_x28;
      *(int *)(unaff_x29 + -0x90) = iVar28;
      if ((*(uint *)(unaff_x29 + -0x34) & 1) != 0) {
        if ((lVar17 == 0) || (*(long *)(lVar17 + 0x40) == 0)) goto LAB_050d9a48;
        if (0 < *(int *)(*(long *)(lVar17 + 0x40) + 0x10)) {
          lVar17 = *(long *)(lVar17 + 0x10);
          if (lVar17 == 0) goto LAB_050d9a48;
          iVar21 = *(int *)(lVar17 + 0x18);
          if (iVar21 == 0) {
            iVar30 = 0;
          }
          else {
            iVar30 = *(int *)(lVar17 + 0x20);
          }
          uVar20 = 0xffffffff;
          iVar27 = (*(uint *)(unaff_x29 + -0x44) & (int)*(uint *)(unaff_x29 + -0x44) >> 0x1f) +
                   iVar16;
          if (iVar28 <= iVar27) {
            iVar28 = iVar27;
          }
          if ((iVar30 == 0) || (iVar28 <= iVar30)) goto LAB_050d8d94;
          lVar24 = 0;
          *(long *)(unaff_x29 + -0x70) = lVar17;
          *(int *)(unaff_x29 + -0x74) = iVar28;
          iVar27 = iVar30;
          goto LAB_050d9950;
        }
      }
      uVar20 = 0xffffffff;
      goto LAB_050d8d94;
    }
    *(int *)(unaff_x28 + 4) = *(int *)(unaff_x28 + 4) + in_w8;
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_050dd7f8();
    if (**(short **)(unaff_x29 + -0x30) != 0) goto LAB_050d8cf4;
    if (*(int *)(*(long *)PTR_DAT_067dbd90 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    unaff_w23 = FUN_050deb88(*(undefined8 *)(unaff_x29 + -0x20));
    if (unaff_w23 == uVar22) goto LAB_050d8cf4;
    param_1 = FUN_034702c4(*(undefined8 *)(unaff_x29 + -0x20));
    if ((int)unaff_w23 < iVar21) break;
    iVar15 = 0;
    *(undefined4 *)(unaff_x29 + -0x24) = 0;
    unaff_w19 = 0;
    unaff_w25 = 0;
    in_w8 = 0;
    in_w17 = 0;
    unaff_w26 = 0x7fffffff;
    uVar22 = unaff_w23;
  } while( true );
  unaff_w25 = 0;
  unaff_w19 = 0;
  in_w16 = 0;
  in_w17 = 0;
  in_w8 = 0;
  unaff_w26 = 0x7fffffff;
  in_w9 = -1;
  in_w10 = -1;
  in_w12 = unaff_w23;
LAB_050d89f0:
  uVar3 = *(ushort *)(param_1 + (long)(int)in_w12 * 2);
  iVar16 = in_w9;
  uVar22 = unaff_w23;
  if ((uVar3 == 0x3b) || (uVar3 == 0)) goto LAB_050d8c0c;
  in_w11 = in_w12 + 1;
  uVar20 = (uint)uVar3;
  iVar15 = unaff_w25;
  iVar28 = unaff_w26;
  if (uVar3 < 0x46) {
    if (uVar3 < 0x27) {
      if (uVar3 < 0x24) {
        if (uVar20 == 0x22) goto LAB_050d8ae0;
        if (uVar20 == 0x23) {
          iVar15 = unaff_w25 + 1;
          goto LAB_050d8bd8;
        }
      }
      else {
        if (uVar20 == 0x24) goto LAB_050d8bd8;
        if (uVar3 == 0x25) {
          in_w8 = in_w8 + 2;
          goto LAB_050d8bd8;
        }
        if (uVar3 == 0x26) goto LAB_050d8bd8;
      }
    }
    else if (uVar3 < 0x2e) {
      if (uVar20 == 0x27) {
LAB_050d8ae0:
        lVar17 = (long)(int)in_w11;
        puVar18 = (ushort *)(param_1 + (long)(int)in_w11 * 2);
        lVar24 = lVar17;
        if (lVar17 <= *(long *)(unaff_x29 + -0x68)) {
          lVar24 = *(long *)(unaff_x29 + -0x68);
        }
LAB_050d8af4:
        if (lVar24 != lVar17) {
          uVar3 = *puVar18;
          if (uVar3 != 0) goto code_r0x050d8b04;
          goto LAB_050d8b14;
        }
        goto LAB_050d8c0c;
      }
      if (uVar3 == 0x2c) {
        if ((0 < unaff_w25) && (in_w9 < 0)) {
          if (in_w10 < 0) {
            *(undefined4 *)(unaff_x29 + -0x44) = 1;
            in_w10 = unaff_w25;
          }
          else {
            in_w17 = in_w10 != unaff_w25 | in_w17;
            iVar21 = 1;
            if (in_w10 == unaff_w25) {
              iVar21 = *(int *)(unaff_x29 + -0x44) + 1;
            }
            *(int *)(unaff_x29 + -0x44) = iVar21;
            in_w10 = unaff_w25;
          }
        }
        goto LAB_050d8bd8;
      }
      if (uVar3 == 0x2d) goto LAB_050d8bd8;
    }
    else {
      if (uVar3 == 0x2e) {
        iVar16 = unaff_w25;
        if (-1 < in_w9) {
          iVar16 = in_w9;
        }
        goto LAB_050d8bd8;
      }
      if (uVar3 == 0x2f) goto LAB_050d8bd8;
      if (uVar20 == 0x30) {
        unaff_w19 = unaff_w25 + 1;
        iVar15 = unaff_w19;
        iVar28 = unaff_w25;
        if (unaff_w26 != 0x7fffffff) {
          iVar28 = unaff_w26;
        }
        goto LAB_050d8bd8;
      }
    }
    if (uVar20 != 0x45) goto LAB_050d8bd8;
  }
  else {
    if (uVar3 == 0x5c) {
      in_OV = SBORROW4(in_w11,iVar21);
      in_NG = (int)(in_w11 - iVar21) < 0;
      goto code_r0x050d8ab0;
    }
    if (uVar3 != 0x65) {
      if (uVar20 == unaff_w21) {
        in_w8 = in_w8 + 3;
      }
      goto LAB_050d8bd8;
    }
  }
  if ((iVar21 <= (int)in_w11) || (*(short *)(param_1 + (long)(int)in_w11 * 2) != 0x30)) {
    if (((int)(in_w12 + 2) < iVar21) &&
       ((sVar26 = *(short *)(param_1 + (long)(int)in_w11 * 2), sVar26 == 0x2d || (sVar26 == 0x2b))))
    {
      sVar26 = *(short *)(param_1 + (long)(int)(in_w12 + 2) * 2);
      goto joined_r0x050d8ba8;
    }
    goto LAB_050d8bd8;
  }
  while (in_w11 = in_w11 + 1, (int)in_w11 < iVar21) {
    sVar26 = *(short *)(param_1 + (long)(int)in_w11 * 2);
    in_w16 = 1;
joined_r0x050d8ba8:
    if (sVar26 != 0x30) goto LAB_050d8bd8;
  }
  in_w16 = 1;
  goto LAB_050d8c0c;
code_r0x050d8b04:
  lVar17 = lVar17 + 1;
  puVar18 = puVar18 + 1;
  if (uVar3 == uVar20) {
LAB_050d8b14:
    in_w11 = (uint)lVar17;
    goto LAB_050d8bd8;
  }
  goto LAB_050d8af4;
  while ((iVar27 != 0 && (iVar30 = iVar27 + iVar30, iVar30 < iVar28))) {
LAB_050d9950:
    puVar8 = PTR_DAT_067cb890;
    iVar1 = *(int *)(unaff_x29 + -0x10);
    auVar7._8_4_ = iVar1;
    auVar7._0_8_ = puVar13;
    uVar20 = uVar20 + 1;
    if (iVar1 <= (int)uVar20) {
      *(uint *)(unaff_x29 + -0x58) = uVar20;
      uVar12 = FUN_02f0880c(*(undefined8 *)puVar8,iVar1 << 1);
      auVar31 = FUN_0426a99c(uVar12,*(undefined8 *)
                                     UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var);
      FUN_0426a488(unaff_x29 + -0x18,auVar31._0_8_,auVar31._8_8_,
                   *(undefined8 *)UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var);
      auVar31 = FUN_0426a99c(uVar12,*(undefined8 *)
                                     UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var);
      auVar7 = auVar31._0_12_;
      iVar28 = *(int *)(unaff_x29 + -0x74);
      lVar17 = *(long *)(unaff_x29 + -0x70);
      uVar20 = *(uint *)(unaff_x29 + -0x58);
      *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar31;
    }
    puVar13 = auVar7._0_8_;
    if (auVar7._8_4_ <= uVar20) goto LAB_050d9a30;
    *(int *)((long)puVar13 + (long)(int)uVar20 * 4) = iVar30;
    if ((int)lVar24 < iVar21 + -1) {
      lVar24 = (long)(int)lVar24 + 1;
      if (*(uint *)(lVar17 + 0x18) <= (uint)lVar24) goto LAB_050d9a30;
      iVar27 = *(int *)(lVar17 + lVar24 * 4 + 0x20);
    }
  }
LAB_050d8d94:
  *(int *)(unaff_x29 + -0x5c) = iVar15;
  *(int *)(unaff_x29 + -0x94) = unaff_w25;
  uVar10 = FUN_050e41c4(*(undefined8 *)(unaff_x29 + -0x80),0);
  uVar12 = *(undefined8 *)(unaff_x29 + -0x50);
  if (((uVar10 & 1) == 0) || (uVar22 != 0)) {
LAB_050d8e44:
    uVar11 = FUN_034702c4(*(undefined8 *)(unaff_x29 + -0x20),uVar12,*(undefined8 *)PTR_DAT_067d5ba8)
    ;
    uVar23 = *(uint *)(unaff_x29 + -0x24);
    *(undefined8 *)(unaff_x29 + -0x58) = uVar11;
    if ((int)uVar22 < (int)uVar12) {
      psVar25 = *(short **)(unaff_x29 + -0x30);
      *(uint *)(unaff_x29 + -0x20) = *(uint *)(unaff_x29 + -0x34) ^ 1;
      iVar15 = (int)*(undefined8 *)(unaff_x29 + -0x50);
      *(int *)(unaff_x29 + -0x98) = iVar15 + -2;
      *(undefined4 *)(unaff_x29 + -0x74) = 0;
      *(int *)(unaff_x29 + -0x70) = -iVar15;
LAB_050d8e90:
      uVar3 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar22 * 2);
      if ((uVar3 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = uVar22, uVar3 == 0)) goto LAB_050d98e0;
      iVar15 = *(int *)(unaff_x29 + -0x44);
      if ((iVar15 < 1) ||
         ((0x30 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar17 = *(long *)(unaff_x29 + -0x40);
      }
      else {
        iVar28 = iVar15 + 1;
        lVar17 = *(long *)(unaff_x29 + -0x40);
        if (0 < iVar15) {
          iVar15 = 1;
        }
        uVar22 = *(uint *)(unaff_x29 + -0x20);
        *(int *)(unaff_x29 + -0x34) = iVar15 + -1;
        do {
          sVar26 = *psVar25;
          sVar6 = 0x30;
          if (sVar26 != 0) {
            psVar25 = psVar25 + 1;
            sVar6 = sVar26;
          }
          if (DAT_06bb905a == '\0') {
            FUN_02f08768(PTR_DAT_067d60d8);
            DAT_06bb905a = '\x01';
          }
          uVar29 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar29) goto LAB_050d9a30;
            *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar29 * 2) = sVar6;
          }
          else {
            FUN_04f8713c();
          }
          if (((uVar22 & 1) == 0 && 1 < iVar16) && (-1 < (int)uVar20)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar20) goto LAB_050d9a30;
            if (iVar16 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar20 * 4) + 1) {
              if (lVar17 == 0) goto LAB_050d9a48;
              lVar24 = *(long *)(lVar17 + 0x40);
              if (DAT_06bb9c1f == '\0') {
                FUN_02f08768(PTR_DAT_067d60d8);
                DAT_06bb9c1f = '\x01';
              }
              if (lVar24 == 0) goto LAB_050d9a48;
              if (*(int *)(lVar24 + 0x10) == 1) {
                uVar22 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar22) goto LAB_050d9018;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_050d9a30;
                lVar17 = *(long *)(unaff_x22 + 8);
                uVar9 = FUN_04f69818(lVar24,0,0);
                *(undefined2 *)(lVar17 + (long)(int)uVar22 * 2) = uVar9;
                lVar17 = *(long *)(unaff_x29 + -0x40);
                *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
              }
              else {
LAB_050d9018:
                FUN_04f87268();
              }
              uVar22 = *(uint *)(unaff_x29 + -0x20);
              uVar20 = uVar20 - 1;
            }
          }
          iVar28 = iVar28 + -1;
          iVar16 = iVar16 + -1;
        } while (1 < iVar28);
        iVar15 = *(int *)(unaff_x29 + -0x34);
      }
      *(int *)(unaff_x29 + -0x44) = iVar15;
      uVar22 = *(int *)(unaff_x29 + -0x24) + 1;
      uVar29 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
      if (uVar3 < 0x46) {
        if (uVar3 < 0x27) {
          if (uVar3 < 0x24) {
            if (uVar3 == 0x22) goto LAB_050d9280;
            if (uVar3 != 0x23) goto LAB_050d9108;
LAB_050d926c:
            if (iVar15 < 0) {
              iVar15 = iVar15 + 1;
              if (iVar16 <= *(int *)(unaff_x29 + -0x90)) {
LAB_050d95ec:
                sVar26 = 0x30;
                goto LAB_050d95f0;
              }
              *(int *)(unaff_x29 + -0x44) = iVar15;
            }
            else {
              sVar26 = *psVar25;
              if (sVar26 == 0) {
                if (*(int *)(unaff_x29 + -0x8c) < iVar16) goto LAB_050d95ec;
              }
              else {
                psVar25 = psVar25 + 1;
LAB_050d95f0:
                if (DAT_06bb905a == '\0') {
                  FUN_02f08768(PTR_DAT_067d60d8);
                  DAT_06bb905a = '\x01';
                }
                uVar4 = *(uint *)(unaff_x22 + 0x18);
                uVar5 = *(uint *)(unaff_x22 + 0x10);
                *(int *)(unaff_x29 + -0x44) = iVar15;
                if ((int)uVar4 < (int)uVar5) {
                  if (uVar5 <= uVar4) goto LAB_050d9a30;
                  *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar4 * 2) = sVar26;
                }
                else {
                  FUN_04f8713c();
                }
                if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < iVar16) && (-1 < (int)uVar20)) {
                  if (*(uint *)(unaff_x29 + -0x10) <= uVar20) goto LAB_050d9a30;
                  if (iVar16 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar20 * 4) + 1) {
                    if (lVar17 == 0) goto LAB_050d9a48;
                    lVar17 = *(long *)(lVar17 + 0x40);
                    if (DAT_06bb9c1f == '\0') {
                      FUN_02f08768(PTR_DAT_067d60d8);
                      DAT_06bb9c1f = '\x01';
                    }
                    if (lVar17 == 0) goto LAB_050d9a48;
                    if (*(int *)(lVar17 + 0x10) == 1) {
                      uVar5 = *(uint *)(unaff_x22 + 0x18);
                      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar5) goto LAB_050d97bc;
                      if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_050d9a30;
                      lVar24 = *(long *)(unaff_x22 + 8);
                      uVar9 = FUN_04f69818(lVar17,0,0);
                      *(undefined2 *)(lVar24 + (long)(int)uVar5 * 2) = uVar9;
                      *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                    }
                    else {
LAB_050d97bc:
                      FUN_04f87268();
                    }
                    uVar20 = uVar20 - 1;
                  }
                }
              }
            }
            iVar16 = iVar16 + -1;
            goto LAB_050d9824;
          }
          if (uVar3 == 0x24) goto LAB_050d9188;
          if (uVar3 == 0x25) {
            if (lVar17 != 0) {
              lVar17 = *(long *)(lVar17 + 0x90);
              goto LAB_050d93d0;
            }
            goto LAB_050d9a48;
          }
          if (uVar3 != 0x26) goto LAB_050d9108;
        }
        else if (uVar3 < 0x2e) {
          if (uVar3 == 0x27) {
LAB_050d9280:
            if ((int)uVar22 < (int)uVar29) {
              lVar17 = (ulong)uVar22 << 0x20;
              puVar18 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar22 * 2);
              uVar22 = ~*(uint *)(unaff_x29 + -0x24);
              while ((uVar2 = *puVar18, uVar2 != 0 && (uVar2 != uVar3))) {
                if (DAT_06bb905a == '\0') {
                  FUN_02f08768(PTR_DAT_067d60d8);
                  DAT_06bb905a = '\x01';
                }
                uVar29 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar29) goto LAB_050d9a30;
                  *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
                  *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar29 * 2) = uVar2;
                }
                else {
                  FUN_04f8713c();
                }
                uVar22 = uVar22 - 1;
                puVar18 = puVar18 + 1;
                lVar17 = lVar17 + 0x100000000;
                if (*(uint *)(unaff_x29 + -0x70) == uVar22) goto LAB_050d98e0;
              }
              uVar29 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
              uVar22 = (*(short *)((lVar17 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar22;
            }
            goto LAB_050d9824;
          }
          if (uVar3 == 0x2c) goto LAB_050d9824;
          if (uVar3 != 0x2d) goto LAB_050d9108;
        }
        else {
          if (uVar3 == 0x2e) {
            if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || iVar16 != 0) goto LAB_050d9824;
            if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
               ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*psVar25 != 0)))) {
              if (lVar17 == 0) goto LAB_050d9a48;
              lVar17 = *(long *)(lVar17 + 0x38);
              if (DAT_06bb9c1f == '\0') {
                FUN_02f08768(PTR_DAT_067d60d8);
                DAT_06bb9c1f = '\x01';
              }
              if (lVar17 == 0) goto LAB_050d9a48;
              if (*(int *)(lVar17 + 0x10) == 1) {
                uVar5 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar5) goto LAB_050d98c0;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_050d9a30;
                lVar24 = *(long *)(unaff_x22 + 8);
                uVar9 = FUN_04f69818(lVar17,0,0);
                *(undefined2 *)(lVar24 + (long)(int)uVar5 * 2) = uVar9;
                *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
              }
              else {
LAB_050d98c0:
                FUN_04f87268();
              }
              iVar16 = 0;
              *(undefined4 *)(unaff_x29 + -0x74) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x74) = 0;
              iVar16 = 0;
            }
            goto LAB_050d9824;
          }
          if (uVar3 != 0x2f) {
            if (uVar3 == 0x30) goto LAB_050d926c;
LAB_050d9108:
            if (uVar3 == 0x45) goto LAB_050d9110;
          }
        }
LAB_050d9188:
        if (DAT_06bb905a == '\0') {
          FUN_02f08768(PTR_DAT_067d60d8);
          DAT_06bb905a = '\x01';
        }
        uVar5 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_050d9a30;
          lVar17 = *(long *)(unaff_x22 + 8);
LAB_050d91cc:
          *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
          *(ushort *)(lVar17 + (long)(int)uVar5 * 2) = uVar3;
        }
        else {
LAB_050d91e0:
          FUN_04f8713c();
        }
      }
      else if (uVar3 == 0x5c) {
        if (((int)uVar22 < (int)uVar29) &&
           (sVar26 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar22 * 2), sVar26 != 0))
        {
          if (DAT_06bb905a == '\0') {
            FUN_02f08768(PTR_DAT_067d60d8);
            DAT_06bb905a = '\x01';
          }
          uVar5 = *(uint *)(unaff_x22 + 0x18);
          uVar22 = *(int *)(unaff_x29 + -0x24) + 2;
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar5) goto LAB_050d91e0;
          if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_050d9a30;
          *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = sVar26;
        }
      }
      else if (uVar3 == 0x65) {
LAB_050d9110:
        if ((uVar23 & 1) != 0) {
          if (((int)uVar22 < (int)uVar29) &&
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar22 * 2) == 0x30)) {
            uVar14 = 0;
            uVar23 = *(int *)(unaff_x29 + -0x24) + 2;
            goto LAB_050d913c;
          }
          uVar23 = *(int *)(unaff_x29 + -0x24) + 2;
          if ((int)uVar23 < (int)uVar29) {
            sVar26 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar22 * 2);
            if (sVar26 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar23 * 2) == 0x30) {
                uVar14 = 0;
                goto LAB_050d913c;
              }
            }
            else if ((sVar26 == 0x2b) &&
                    (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar23 * 2) == 0x30)) {
              uVar14 = 1;
LAB_050d913c:
              uVar22 = uVar23;
              if ((int)uVar23 < (int)uVar29) {
                psVar19 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar23 * 2);
                do {
                  uVar22 = uVar23;
                  if (*psVar19 != 0x30) break;
                  uVar23 = uVar23 + 1;
                  psVar19 = psVar19 + 1;
                  uVar22 = uVar29;
                } while (uVar29 != uVar23);
              }
              if (*(int *)(*(long *)PTR_DAT_067dbd90 + 0xe4) == 0) {
                *(undefined4 *)(unaff_x29 + -0x24) = uVar14;
                thunk_FUN_02f6670c();
              }
              FUN_050deccc();
              goto LAB_050d9820;
            }
          }
          if (DAT_06bb905a == '\0') {
            FUN_02f08768(PTR_DAT_067d60d8);
            DAT_06bb905a = '\x01';
          }
          uVar5 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar5) {
            FUN_04f8713c();
            uVar23 = 1;
            goto LAB_050d9824;
          }
          if (uVar5 < *(uint *)(unaff_x22 + 0x10)) {
            lVar17 = *(long *)(unaff_x22 + 8);
            uVar23 = 1;
            goto LAB_050d91cc;
          }
          goto LAB_050d9a30;
        }
        if (DAT_06bb905a == '\0') {
          FUN_02f08768(PTR_DAT_067d60d8);
          DAT_06bb905a = '\x01';
        }
        uVar23 = *(uint *)(unaff_x22 + 0x18);
        iVar15 = *(int *)(unaff_x29 + -0x24);
        if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_050d9a30;
          *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = uVar3;
        }
        else {
          FUN_04f8713c();
        }
        if ((int)uVar22 < (int)uVar29) {
          sVar26 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar22 * 2);
          if ((sVar26 == 0x2d) || (sVar26 == 0x2b)) {
            if (DAT_06bb905a == '\0') {
              FUN_02f08768(PTR_DAT_067d60d8);
              DAT_06bb905a = '\x01';
            }
            uVar23 = *(uint *)(unaff_x22 + 0x18);
            uVar22 = iVar15 + 2;
            if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_050d9a30;
              *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = sVar26;
            }
            else {
              FUN_04f8713c();
            }
          }
          if ((int)uVar22 < (int)uVar29) {
            psVar19 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar22 * 2);
            lVar17 = *(long *)(unaff_x29 + -0x68) - (long)(int)uVar22;
            while (*psVar19 == 0x30) {
              if (DAT_06bb905a == '\0') {
                FUN_02f08768(PTR_DAT_067d60d8);
                DAT_06bb905a = '\x01';
              }
              uVar23 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_050d9a30;
                *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = 0x30;
              }
              else {
                FUN_04f8713c();
              }
              lVar17 = lVar17 + -1;
              uVar22 = uVar22 + 1;
              psVar19 = psVar19 + 1;
              if (lVar17 == 0) goto LAB_050d98e0;
            }
            uVar29 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
          }
        }
LAB_050d9820:
        uVar23 = 0;
      }
      else {
        if (uVar3 != 0x2030) goto LAB_050d9188;
        if (lVar17 == 0) goto LAB_050d9a48;
        lVar17 = *(long *)(lVar17 + 0x98);
LAB_050d93d0:
        if (DAT_06bb9c1f == '\0') {
          FUN_02f08768(PTR_DAT_067d60d8);
          DAT_06bb9c1f = '\x01';
        }
        if (lVar17 == 0) goto LAB_050d9a48;
        if (*(int *)(lVar17 + 0x10) == 1) {
          uVar5 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar5 < *(uint *)(unaff_x22 + 0x10)) {
              lVar24 = *(long *)(unaff_x22 + 8);
              uVar9 = FUN_04f69818(lVar17,0,0);
              *(undefined2 *)(lVar24 + (long)(int)uVar5 * 2) = uVar9;
              *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
              goto LAB_050d9824;
            }
            goto LAB_050d9a30;
          }
        }
        FUN_04f87268();
      }
LAB_050d9824:
      if ((int)uVar29 <= (int)uVar22) goto LAB_050d98e0;
      goto LAB_050d8e90;
    }
LAB_050d98e0:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else {
    if (*(long *)(unaff_x29 + -0x40) != 0) {
      lVar17 = *(long *)(*(long *)(unaff_x29 + -0x40) + 0x30);
      if (DAT_06bb9c1f == '\0') {
        FUN_02f08768(PTR_DAT_067d60d8);
        DAT_06bb9c1f = '\x01';
      }
      if (lVar17 != 0) {
        if (*(int *)(lVar17 + 0x10) == 1) {
          uVar23 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar23) {
LAB_050d9a30:
              if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              goto LAB_050d9a60;
            }
            lVar24 = *(long *)(unaff_x22 + 8);
            uVar9 = FUN_04f69818(lVar17,0,0);
            *(undefined2 *)(lVar24 + (long)(int)uVar23 * 2) = uVar9;
            *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
            goto LAB_050d8e44;
          }
        }
        FUN_04f87268();
        goto LAB_050d8e44;
      }
    }
LAB_050d9a48:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
LAB_050d9a60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


