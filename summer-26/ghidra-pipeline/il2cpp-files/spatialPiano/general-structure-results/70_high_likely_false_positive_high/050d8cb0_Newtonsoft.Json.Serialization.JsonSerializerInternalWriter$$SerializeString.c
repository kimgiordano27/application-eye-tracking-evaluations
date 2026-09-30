/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 050d8cb0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString
               (undefined **param_1)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  undefined1 auVar6 [12];
  undefined *puVar7;
  int iVar8;
  undefined2 uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  ushort *puVar21;
  short *psVar22;
  uint uVar23;
  int iVar24;
  undefined4 uVar25;
  uint uVar26;
  int unaff_w19;
  int unaff_w20;
  uint uVar27;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  long lVar28;
  int unaff_w25;
  short *psVar29;
  short sVar30;
  int unaff_w26;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar31 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
code_r0x050d8cb0:
  if (*(int *)(*(long *)param_1[0x1b2] + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar10 = FUN_050deb88(*(undefined8 *)(unaff_x29 + -0x20));
  if (uVar10 == unaff_w24) goto LAB_050d8cf4;
  lVar18 = FUN_034702c4(*(undefined8 *)(unaff_x29 + -0x20));
  iVar16 = (int)unaff_x27;
  if ((int)uVar10 < iVar16) {
    unaff_w25 = 0;
    unaff_w19 = 0;
    uVar25 = 0;
    uVar26 = 0;
    iVar15 = 0;
    unaff_w26 = 0x7fffffff;
    iVar19 = -1;
    iVar24 = -1;
    uVar27 = uVar10;
    do {
      uVar4 = *(ushort *)(lVar18 + (long)(int)uVar27 * 2);
      iVar17 = iVar24;
      if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
      uVar20 = uVar27 + 1;
      uVar23 = (uint)uVar4;
      iVar2 = unaff_w25;
      iVar8 = unaff_w26;
      if (uVar4 < 0x46) {
        if (uVar4 < 0x27) {
          if (uVar4 < 0x24) {
            if (uVar23 == 0x22) goto LAB_050d8ae0;
            if (uVar23 == 0x23) {
              iVar2 = unaff_w25 + 1;
            }
            else {
LAB_050d8b64:
              if (uVar23 == 0x45) goto LAB_050d8b6c;
            }
          }
          else if (uVar23 != 0x24) {
            if (uVar4 == 0x25) {
              iVar15 = iVar15 + 2;
            }
            else if (uVar4 != 0x26) goto LAB_050d8b64;
          }
        }
        else if (uVar4 < 0x2e) {
          if (uVar23 == 0x27) {
LAB_050d8ae0:
            lVar28 = (long)(int)uVar20;
            puVar21 = (ushort *)(lVar18 + (long)(int)uVar20 * 2);
            lVar1 = lVar28;
            if (lVar28 <= *(long *)(unaff_x29 + -0x68)) {
              lVar1 = *(long *)(unaff_x29 + -0x68);
            }
            do {
              if (lVar1 == lVar28) goto LAB_050d8c0c;
              uVar4 = *puVar21;
              if (uVar4 == 0) break;
              lVar28 = lVar28 + 1;
              puVar21 = puVar21 + 1;
            } while (uVar4 != uVar23);
            uVar20 = (uint)lVar28;
          }
          else if (uVar4 == 0x2c) {
            if ((0 < unaff_w25) && (iVar24 < 0)) {
              if (iVar19 < 0) {
                *(undefined4 *)(unaff_x29 + -0x44) = 1;
                iVar19 = unaff_w25;
              }
              else {
                uVar26 = iVar19 != unaff_w25 | uVar26;
                iVar24 = 1;
                if (iVar19 == unaff_w25) {
                  iVar24 = *(int *)(unaff_x29 + -0x44) + 1;
                }
                *(int *)(unaff_x29 + -0x44) = iVar24;
                iVar19 = unaff_w25;
              }
            }
          }
          else if (uVar4 != 0x2d) goto LAB_050d8b64;
        }
        else if (uVar4 == 0x2e) {
          iVar17 = unaff_w25;
          if (-1 < iVar24) {
            iVar17 = iVar24;
          }
        }
        else if (uVar4 != 0x2f) {
          if (uVar23 != 0x30) goto LAB_050d8b64;
          unaff_w19 = unaff_w25 + 1;
          iVar2 = unaff_w19;
          iVar8 = unaff_w25;
          if (unaff_w26 != 0x7fffffff) {
            iVar8 = unaff_w26;
          }
        }
      }
      else if (uVar4 == 0x5c) {
        if (((int)uVar20 < iVar16) && (*(short *)(lVar18 + (long)(int)uVar20 * 2) != 0)) {
          uVar20 = uVar27 + 2;
        }
      }
      else if (uVar4 == 0x65) {
LAB_050d8b6c:
        if (((int)uVar20 < iVar16) && (*(short *)(lVar18 + (long)(int)uVar20 * 2) == 0x30))
        goto LAB_050d8bac;
        if (((int)(uVar27 + 2) < iVar16) &&
           ((sVar30 = *(short *)(lVar18 + (long)(int)uVar20 * 2), sVar30 == 0x2d || (sVar30 == 0x2b)
            ))) {
          sVar30 = *(short *)(lVar18 + (long)(int)(uVar27 + 2) * 2);
          while (sVar30 == 0x30) {
LAB_050d8bac:
            uVar20 = uVar20 + 1;
            if (iVar16 <= (int)uVar20) {
              uVar25 = 1;
              goto LAB_050d8c0c;
            }
            uVar25 = 1;
            sVar30 = *(short *)(lVar18 + (long)(int)uVar20 * 2);
          }
        }
      }
      else if (uVar23 == unaff_w21) {
        iVar15 = iVar15 + 3;
      }
      unaff_w26 = iVar8;
      unaff_w25 = iVar2;
      iVar24 = iVar17;
      uVar27 = uVar20;
    } while ((int)uVar20 < iVar16);
LAB_050d8c0c:
    *(undefined4 *)(unaff_x29 + -0x24) = uVar25;
    unaff_w20 = unaff_w25;
    if (-1 < iVar17) {
      unaff_w20 = iVar17;
    }
    if (-1 < iVar19) {
      if (iVar19 == unaff_w20) {
        iVar15 = *(int *)(unaff_x29 + -0x44) * -3 + iVar15;
      }
      else {
        uVar26 = 1;
      }
    }
  }
  else {
    unaff_w20 = 0;
    *(undefined4 *)(unaff_x29 + -0x24) = 0;
    unaff_w19 = 0;
    unaff_w25 = 0;
    iVar15 = 0;
    uVar26 = 0;
    unaff_w26 = 0x7fffffff;
  }
  *(uint *)(unaff_x29 + -0x34) = uVar26;
  puVar7 = PTR_DAT_067dbd90;
  unaff_w23 = uVar10;
  if (**(short **)(unaff_x29 + -0x30) != 0) {
    *(int *)(unaff_x28 + 4) = *(int *)(unaff_x28 + 4) + iVar15;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_050dd7f8();
    if (**(short **)(unaff_x29 + -0x30) != 0) goto LAB_050d8cf4;
    param_1 = &PTR_DAT_067db000;
    unaff_w24 = uVar10;
    goto code_r0x050d8cb0;
  }
  FUN_050e41d4();
  *(undefined4 *)(unaff_x28 + 4) = 0;
LAB_050d8cf4:
  iVar16 = unaff_w20 - unaff_w26;
  *(undefined4 *)(unaff_x29 + -0x44) = 0;
  if (iVar16 == 0 || unaff_w20 < unaff_w26) {
    iVar16 = 0;
  }
  iVar15 = unaff_w20 - unaff_w19;
  if (unaff_w19 <= unaff_w20) {
    iVar15 = 0;
  }
  *(int *)(unaff_x29 + -0x8c) = iVar15;
  iVar15 = unaff_w20;
  if ((*(uint *)(unaff_x29 + -0x24) & 1) == 0) {
    iVar19 = *(int *)(unaff_x28 + 4);
    iVar15 = iVar19;
    if (iVar19 - unaff_w20 == 0 || iVar19 < unaff_w20) {
      iVar15 = unaff_w20;
    }
    *(int *)(unaff_x29 + -0x44) = iVar19 - unaff_w20;
  }
  uVar13 = DAT_011b1c08;
  puVar14 = &uStack_10;
  uStack_10 = 0;
  uStack_8 = 0;
  lVar18 = *(long *)(unaff_x29 + -0x40);
  *(undefined8 **)(unaff_x29 + -0x18) = puVar14;
  *(undefined8 *)(unaff_x29 + -0x50) = unaff_x27;
  *(undefined8 *)(unaff_x29 + -0x10) = uVar13;
  *(long *)(unaff_x29 + -0x80) = unaff_x28;
  *(int *)(unaff_x29 + -0x90) = iVar16;
  if ((*(uint *)(unaff_x29 + -0x34) & 1) == 0) {
LAB_050d8d90:
    uVar10 = 0xffffffff;
LAB_050d8d94:
    *(int *)(unaff_x29 + -0x5c) = unaff_w20;
    *(int *)(unaff_x29 + -0x94) = unaff_w25;
    uVar11 = FUN_050e41c4(*(undefined8 *)(unaff_x29 + -0x80),0);
    uVar13 = *(undefined8 *)(unaff_x29 + -0x50);
    if (((uVar11 & 1) == 0) || (unaff_w23 != 0)) {
LAB_050d8e44:
      uVar12 = FUN_034702c4(*(undefined8 *)(unaff_x29 + -0x20),uVar13,
                            *(undefined8 *)PTR_DAT_067d5ba8);
      uVar26 = *(uint *)(unaff_x29 + -0x24);
      *(undefined8 *)(unaff_x29 + -0x58) = uVar12;
      if ((int)unaff_w23 < (int)uVar13) {
        psVar29 = *(short **)(unaff_x29 + -0x30);
        *(uint *)(unaff_x29 + -0x20) = *(uint *)(unaff_x29 + -0x34) ^ 1;
        iVar16 = (int)*(undefined8 *)(unaff_x29 + -0x50);
        *(int *)(unaff_x29 + -0x98) = iVar16 + -2;
        *(undefined4 *)(unaff_x29 + -0x74) = 0;
        *(int *)(unaff_x29 + -0x70) = -iVar16;
LAB_050d8e90:
        uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
        if ((uVar4 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = unaff_w23, uVar4 == 0))
        goto LAB_050d98e0;
        iVar16 = *(int *)(unaff_x29 + -0x44);
        if ((iVar16 < 1) ||
           ((0x30 < uVar4 || ((1L << ((ulong)uVar4 & 0x3f) & 0x1400800000000U) == 0)))) {
          lVar18 = *(long *)(unaff_x29 + -0x40);
        }
        else {
          iVar19 = iVar16 + 1;
          lVar18 = *(long *)(unaff_x29 + -0x40);
          if (0 < iVar16) {
            iVar16 = 1;
          }
          uVar27 = *(uint *)(unaff_x29 + -0x20);
          *(int *)(unaff_x29 + -0x34) = iVar16 + -1;
          do {
            sVar30 = *psVar29;
            sVar5 = 0x30;
            if (sVar30 != 0) {
              psVar29 = psVar29 + 1;
              sVar5 = sVar30;
            }
            if (DAT_06bb905a == '\0') {
              FUN_02f08768(PTR_DAT_067d60d8);
              DAT_06bb905a = '\x01';
            }
            uVar20 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_050d9a30;
              *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = sVar5;
            }
            else {
              FUN_04f8713c();
            }
            if (((uVar27 & 1) == 0 && 1 < iVar15) && (-1 < (int)uVar10)) {
              if (*(uint *)(unaff_x29 + -0x10) <= uVar10) goto LAB_050d9a30;
              if (iVar15 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar10 * 4) + 1) {
                if (lVar18 == 0) goto LAB_050d9a48;
                lVar28 = *(long *)(lVar18 + 0x40);
                if (DAT_06bb9c1f == '\0') {
                  FUN_02f08768(PTR_DAT_067d60d8);
                  DAT_06bb9c1f = '\x01';
                }
                if (lVar28 == 0) goto LAB_050d9a48;
                if (*(int *)(lVar28 + 0x10) == 1) {
                  uVar27 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar27) goto LAB_050d9018;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar27) goto LAB_050d9a30;
                  lVar18 = *(long *)(unaff_x22 + 8);
                  uVar9 = FUN_04f69818(lVar28,0,0);
                  *(undefined2 *)(lVar18 + (long)(int)uVar27 * 2) = uVar9;
                  lVar18 = *(long *)(unaff_x29 + -0x40);
                  *(uint *)(unaff_x22 + 0x18) = uVar27 + 1;
                }
                else {
LAB_050d9018:
                  FUN_04f87268();
                }
                uVar27 = *(uint *)(unaff_x29 + -0x20);
                uVar10 = uVar10 - 1;
              }
            }
            iVar19 = iVar19 + -1;
            iVar15 = iVar15 + -1;
          } while (1 < iVar19);
          iVar16 = *(int *)(unaff_x29 + -0x34);
        }
        *(int *)(unaff_x29 + -0x44) = iVar16;
        unaff_w23 = *(int *)(unaff_x29 + -0x24) + 1;
        uVar27 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
        if (uVar4 < 0x46) {
          if (uVar4 < 0x27) {
            if (uVar4 < 0x24) {
              if (uVar4 == 0x22) goto LAB_050d9280;
              if (uVar4 != 0x23) goto LAB_050d9108;
LAB_050d926c:
              if (iVar16 < 0) {
                iVar16 = iVar16 + 1;
                if (iVar15 <= *(int *)(unaff_x29 + -0x90)) {
LAB_050d95ec:
                  sVar30 = 0x30;
                  goto LAB_050d95f0;
                }
                *(int *)(unaff_x29 + -0x44) = iVar16;
              }
              else {
                sVar30 = *psVar29;
                if (sVar30 == 0) {
                  if (*(int *)(unaff_x29 + -0x8c) < iVar15) goto LAB_050d95ec;
                }
                else {
                  psVar29 = psVar29 + 1;
LAB_050d95f0:
                  if (DAT_06bb905a == '\0') {
                    FUN_02f08768(PTR_DAT_067d60d8);
                    DAT_06bb905a = '\x01';
                  }
                  uVar23 = *(uint *)(unaff_x22 + 0x18);
                  uVar20 = *(uint *)(unaff_x22 + 0x10);
                  *(int *)(unaff_x29 + -0x44) = iVar16;
                  if ((int)uVar23 < (int)uVar20) {
                    if (uVar20 <= uVar23) goto LAB_050d9a30;
                    *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
                    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = sVar30;
                  }
                  else {
                    FUN_04f8713c();
                  }
                  if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < iVar15) && (-1 < (int)uVar10))
                  {
                    if (*(uint *)(unaff_x29 + -0x10) <= uVar10) goto LAB_050d9a30;
                    if (iVar15 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar10 * 4) + 1) {
                      if (lVar18 == 0) goto LAB_050d9a48;
                      lVar18 = *(long *)(lVar18 + 0x40);
                      if (DAT_06bb9c1f == '\0') {
                        FUN_02f08768(PTR_DAT_067d60d8);
                        DAT_06bb9c1f = '\x01';
                      }
                      if (lVar18 == 0) goto LAB_050d9a48;
                      if (*(int *)(lVar18 + 0x10) == 1) {
                        uVar20 = *(uint *)(unaff_x22 + 0x18);
                        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_050d97bc;
                        if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_050d9a30;
                        lVar28 = *(long *)(unaff_x22 + 8);
                        uVar9 = FUN_04f69818(lVar18,0,0);
                        *(undefined2 *)(lVar28 + (long)(int)uVar20 * 2) = uVar9;
                        *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
                      }
                      else {
LAB_050d97bc:
                        FUN_04f87268();
                      }
                      uVar10 = uVar10 - 1;
                    }
                  }
                }
              }
              iVar15 = iVar15 + -1;
              goto LAB_050d9824;
            }
            if (uVar4 == 0x24) goto LAB_050d9188;
            if (uVar4 == 0x25) {
              if (lVar18 != 0) {
                lVar18 = *(long *)(lVar18 + 0x90);
                goto LAB_050d93d0;
              }
              goto LAB_050d9a48;
            }
            if (uVar4 != 0x26) goto LAB_050d9108;
          }
          else if (uVar4 < 0x2e) {
            if (uVar4 == 0x27) {
LAB_050d9280:
              if ((int)unaff_w23 < (int)uVar27) {
                lVar18 = (ulong)unaff_w23 << 0x20;
                puVar21 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
                uVar20 = ~*(uint *)(unaff_x29 + -0x24);
                while ((uVar3 = *puVar21, uVar3 != 0 && (uVar3 != uVar4))) {
                  if (DAT_06bb905a == '\0') {
                    FUN_02f08768(PTR_DAT_067d60d8);
                    DAT_06bb905a = '\x01';
                  }
                  uVar27 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar27 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar27) goto LAB_050d9a30;
                    *(uint *)(unaff_x22 + 0x18) = uVar27 + 1;
                    *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar27 * 2) = uVar3;
                  }
                  else {
                    FUN_04f8713c();
                  }
                  uVar20 = uVar20 - 1;
                  puVar21 = puVar21 + 1;
                  lVar18 = lVar18 + 0x100000000;
                  if (*(uint *)(unaff_x29 + -0x70) == uVar20) goto LAB_050d98e0;
                }
                uVar27 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
                unaff_w23 = (*(short *)((lVar18 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) -
                            uVar20;
              }
              goto LAB_050d9824;
            }
            if (uVar4 == 0x2c) goto LAB_050d9824;
            if (uVar4 != 0x2d) goto LAB_050d9108;
          }
          else {
            if (uVar4 == 0x2e) {
              if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || iVar15 != 0) goto LAB_050d9824;
              if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
                 ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*psVar29 != 0)))) {
                if (lVar18 == 0) goto LAB_050d9a48;
                lVar18 = *(long *)(lVar18 + 0x38);
                if (DAT_06bb9c1f == '\0') {
                  FUN_02f08768(PTR_DAT_067d60d8);
                  DAT_06bb9c1f = '\x01';
                }
                if (lVar18 == 0) goto LAB_050d9a48;
                if (*(int *)(lVar18 + 0x10) == 1) {
                  uVar20 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_050d98c0;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_050d9a30;
                  lVar28 = *(long *)(unaff_x22 + 8);
                  uVar9 = FUN_04f69818(lVar18,0,0);
                  *(undefined2 *)(lVar28 + (long)(int)uVar20 * 2) = uVar9;
                  *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
                }
                else {
LAB_050d98c0:
                  FUN_04f87268();
                }
                iVar15 = 0;
                *(undefined4 *)(unaff_x29 + -0x74) = 1;
              }
              else {
                *(undefined4 *)(unaff_x29 + -0x74) = 0;
                iVar15 = 0;
              }
              goto LAB_050d9824;
            }
            if (uVar4 != 0x2f) {
              if (uVar4 == 0x30) goto LAB_050d926c;
LAB_050d9108:
              if (uVar4 == 0x45) goto LAB_050d9110;
            }
          }
LAB_050d9188:
          if (DAT_06bb905a == '\0') {
            FUN_02f08768(PTR_DAT_067d60d8);
            DAT_06bb905a = '\x01';
          }
          uVar20 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_050d9a30;
            lVar18 = *(long *)(unaff_x22 + 8);
LAB_050d91cc:
            *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
            *(ushort *)(lVar18 + (long)(int)uVar20 * 2) = uVar4;
          }
          else {
LAB_050d91e0:
            FUN_04f8713c();
          }
        }
        else if (uVar4 == 0x5c) {
          if (((int)unaff_w23 < (int)uVar27) &&
             (sVar30 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2),
             sVar30 != 0)) {
            if (DAT_06bb905a == '\0') {
              FUN_02f08768(PTR_DAT_067d60d8);
              DAT_06bb905a = '\x01';
            }
            uVar20 = *(uint *)(unaff_x22 + 0x18);
            unaff_w23 = *(int *)(unaff_x29 + -0x24) + 2;
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_050d91e0;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_050d9a30;
            *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = sVar30;
          }
        }
        else if (uVar4 == 0x65) {
LAB_050d9110:
          if ((uVar26 & 1) != 0) {
            if (((int)unaff_w23 < (int)uVar27) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2) == 0x30)) {
              uVar25 = 0;
              uVar26 = *(int *)(unaff_x29 + -0x24) + 2;
              goto LAB_050d913c;
            }
            uVar26 = *(int *)(unaff_x29 + -0x24) + 2;
            if ((int)uVar26 < (int)uVar27) {
              sVar30 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
              if (sVar30 == 0x2d) {
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar26 * 2) == 0x30) {
                  uVar25 = 0;
                  goto LAB_050d913c;
                }
              }
              else if ((sVar30 == 0x2b) &&
                      (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar26 * 2) == 0x30)) {
                uVar25 = 1;
LAB_050d913c:
                unaff_w23 = uVar26;
                if ((int)uVar26 < (int)uVar27) {
                  psVar22 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar26 * 2);
                  do {
                    unaff_w23 = uVar26;
                    if (*psVar22 != 0x30) break;
                    uVar26 = uVar26 + 1;
                    psVar22 = psVar22 + 1;
                    unaff_w23 = uVar27;
                  } while (uVar27 != uVar26);
                }
                if (*(int *)(*(long *)PTR_DAT_067dbd90 + 0xe4) == 0) {
                  *(undefined4 *)(unaff_x29 + -0x24) = uVar25;
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
            uVar20 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) {
              FUN_04f8713c();
              uVar26 = 1;
              goto LAB_050d9824;
            }
            if (uVar20 < *(uint *)(unaff_x22 + 0x10)) {
              lVar18 = *(long *)(unaff_x22 + 8);
              uVar26 = 1;
              goto LAB_050d91cc;
            }
            goto LAB_050d9a30;
          }
          if (DAT_06bb905a == '\0') {
            FUN_02f08768(PTR_DAT_067d60d8);
            DAT_06bb905a = '\x01';
          }
          uVar26 = *(uint *)(unaff_x22 + 0x18);
          iVar16 = *(int *)(unaff_x29 + -0x24);
          if ((int)uVar26 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar26) goto LAB_050d9a30;
            *(uint *)(unaff_x22 + 0x18) = uVar26 + 1;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar26 * 2) = uVar4;
          }
          else {
            FUN_04f8713c();
          }
          if ((int)unaff_w23 < (int)uVar27) {
            sVar30 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
            if ((sVar30 == 0x2d) || (sVar30 == 0x2b)) {
              if (DAT_06bb905a == '\0') {
                FUN_02f08768(PTR_DAT_067d60d8);
                DAT_06bb905a = '\x01';
              }
              uVar26 = *(uint *)(unaff_x22 + 0x18);
              unaff_w23 = iVar16 + 2;
              if ((int)uVar26 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar26) goto LAB_050d9a30;
                *(uint *)(unaff_x22 + 0x18) = uVar26 + 1;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar26 * 2) = sVar30;
              }
              else {
                FUN_04f8713c();
              }
            }
            if ((int)unaff_w23 < (int)uVar27) {
              psVar22 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
              lVar18 = *(long *)(unaff_x29 + -0x68) - (long)(int)unaff_w23;
              while (*psVar22 == 0x30) {
                if (DAT_06bb905a == '\0') {
                  FUN_02f08768(PTR_DAT_067d60d8);
                  DAT_06bb905a = '\x01';
                }
                uVar26 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar26 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar26) goto LAB_050d9a30;
                  *(uint *)(unaff_x22 + 0x18) = uVar26 + 1;
                  *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar26 * 2) = 0x30;
                }
                else {
                  FUN_04f8713c();
                }
                lVar18 = lVar18 + -1;
                unaff_w23 = unaff_w23 + 1;
                psVar22 = psVar22 + 1;
                if (lVar18 == 0) goto LAB_050d98e0;
              }
              uVar27 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
            }
          }
LAB_050d9820:
          uVar26 = 0;
        }
        else {
          if (uVar4 != 0x2030) goto LAB_050d9188;
          if (lVar18 == 0) goto LAB_050d9a48;
          lVar18 = *(long *)(lVar18 + 0x98);
LAB_050d93d0:
          if (DAT_06bb9c1f == '\0') {
            FUN_02f08768(PTR_DAT_067d60d8);
            DAT_06bb9c1f = '\x01';
          }
          if (lVar18 == 0) goto LAB_050d9a48;
          if (*(int *)(lVar18 + 0x10) == 1) {
            uVar20 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar20 < *(uint *)(unaff_x22 + 0x10)) {
                lVar28 = *(long *)(unaff_x22 + 8);
                uVar9 = FUN_04f69818(lVar18,0,0);
                *(undefined2 *)(lVar28 + (long)(int)uVar20 * 2) = uVar9;
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
                goto LAB_050d9824;
              }
              goto LAB_050d9a30;
            }
          }
          FUN_04f87268();
        }
LAB_050d9824:
        if ((int)uVar27 <= (int)unaff_w23) goto LAB_050d98e0;
        goto LAB_050d8e90;
      }
LAB_050d98e0:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_050d9a60;
    }
    if (*(long *)(unaff_x29 + -0x40) != 0) {
      lVar18 = *(long *)(*(long *)(unaff_x29 + -0x40) + 0x30);
      if (DAT_06bb9c1f == '\0') {
        FUN_02f08768(PTR_DAT_067d60d8);
        DAT_06bb9c1f = '\x01';
      }
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0x10) == 1) {
          uVar26 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar26 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar26) {
LAB_050d9a30:
              if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              goto LAB_050d9a60;
            }
            lVar28 = *(long *)(unaff_x22 + 8);
            uVar9 = FUN_04f69818(lVar18,0,0);
            *(undefined2 *)(lVar28 + (long)(int)uVar26 * 2) = uVar9;
            *(uint *)(unaff_x22 + 0x18) = uVar26 + 1;
            goto LAB_050d8e44;
          }
        }
        FUN_04f87268();
        goto LAB_050d8e44;
      }
    }
  }
  else if ((lVar18 != 0) && (*(long *)(lVar18 + 0x40) != 0)) {
    if (*(int *)(*(long *)(lVar18 + 0x40) + 0x10) < 1) goto LAB_050d8d90;
    lVar18 = *(long *)(lVar18 + 0x10);
    if (lVar18 == 0) goto LAB_050d9a48;
    iVar19 = *(int *)(lVar18 + 0x18);
    if (iVar19 == 0) {
      iVar24 = 0;
    }
    else {
      iVar24 = *(int *)(lVar18 + 0x20);
    }
    uVar10 = 0xffffffff;
    iVar17 = (*(uint *)(unaff_x29 + -0x44) & (int)*(uint *)(unaff_x29 + -0x44) >> 0x1f) + iVar15;
    if (iVar16 <= iVar17) {
      iVar16 = iVar17;
    }
    if ((iVar24 != 0) && (iVar24 < iVar16)) {
      lVar28 = 0;
      *(long *)(unaff_x29 + -0x70) = lVar18;
      *(int *)(unaff_x29 + -0x74) = iVar16;
      iVar17 = iVar24;
      do {
        puVar7 = PTR_DAT_067cb890;
        iVar2 = *(int *)(unaff_x29 + -0x10);
        auVar6._8_4_ = iVar2;
        auVar6._0_8_ = puVar14;
        uVar10 = uVar10 + 1;
        if (iVar2 <= (int)uVar10) {
          *(uint *)(unaff_x29 + -0x58) = uVar10;
          uVar13 = FUN_02f0880c(*(undefined8 *)puVar7,iVar2 << 1);
          auVar31 = FUN_0426a99c(uVar13,*(undefined8 *)
                                         UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var
                                );
          FUN_0426a488(unaff_x29 + -0x18,auVar31._0_8_,auVar31._8_8_,
                       *(undefined8 *)UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var);
          auVar31 = FUN_0426a99c(uVar13,*(undefined8 *)
                                         UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var
                                );
          auVar6 = auVar31._0_12_;
          iVar16 = *(int *)(unaff_x29 + -0x74);
          lVar18 = *(long *)(unaff_x29 + -0x70);
          uVar10 = *(uint *)(unaff_x29 + -0x58);
          *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar31;
        }
        puVar14 = auVar6._0_8_;
        if (auVar6._8_4_ <= uVar10) goto LAB_050d9a30;
        *(int *)((long)puVar14 + (long)(int)uVar10 * 4) = iVar24;
        if ((int)lVar28 < iVar19 + -1) {
          lVar28 = (long)(int)lVar28 + 1;
          if (*(uint *)(lVar18 + 0x18) <= (uint)lVar28) goto LAB_050d9a30;
          iVar17 = *(int *)(lVar18 + lVar28 * 4 + 0x20);
        }
      } while ((iVar17 != 0) && (iVar24 = iVar17 + iVar24, iVar24 < iVar16));
    }
    goto LAB_050d8d94;
  }
LAB_050d9a48:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_050d9a60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


