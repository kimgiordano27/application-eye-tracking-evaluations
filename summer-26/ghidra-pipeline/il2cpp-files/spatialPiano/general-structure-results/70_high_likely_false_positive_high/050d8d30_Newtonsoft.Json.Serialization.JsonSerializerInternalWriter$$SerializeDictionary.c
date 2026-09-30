/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDictionary
ENTRY_POINT: 050d8d30
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDictionary
               (long param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  undefined1 auVar6 [12];
  undefined *puVar7;
  undefined2 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int iVar13;
  long lVar14;
  int in_w10;
  short *psVar15;
  int unaff_w19;
  undefined4 unaff_w20;
  uint uVar16;
  ushort *puVar17;
  uint uVar18;
  long unaff_x22;
  uint unaff_w23;
  uint uVar19;
  uint uVar20;
  long lVar21;
  undefined4 unaff_w25;
  short *psVar22;
  short sVar23;
  int iVar24;
  undefined8 unaff_x27;
  int iVar25;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined1 auVar26 [16];
  
  *(undefined8 *)(param_1 + -0x10) = 0;
  *(undefined8 *)(param_1 + -8) = 0;
  uVar11 = DAT_011b1c08;
  lVar14 = *(long *)(unaff_x29 + -0x40);
  *(long *)(unaff_x29 + -0x18) = param_2;
  *(undefined8 *)(unaff_x29 + -0x50) = unaff_x27;
  *(undefined8 *)(unaff_x29 + -0x10) = uVar11;
  *(undefined8 *)(unaff_x29 + -0x80) = unaff_x28;
  *(int *)(unaff_x29 + -0x90) = in_w10;
  if ((*(uint *)(unaff_x29 + -0x34) & 1) == 0) {
LAB_050d8d90:
    uVar18 = 0xffffffff;
LAB_050d8d94:
    *(undefined4 *)(unaff_x29 + -0x5c) = unaff_w20;
    *(undefined4 *)(unaff_x29 + -0x94) = unaff_w25;
    uVar9 = FUN_050e41c4(*(undefined8 *)(unaff_x29 + -0x80),0);
    uVar11 = *(undefined8 *)(unaff_x29 + -0x50);
    if (((uVar9 & 1) == 0) || (unaff_w23 != 0)) {
LAB_050d8e44:
      uVar10 = FUN_034702c4(*(undefined8 *)(unaff_x29 + -0x20),uVar11,
                            *(undefined8 *)PTR_DAT_067d5ba8);
      uVar19 = *(uint *)(unaff_x29 + -0x24);
      *(undefined8 *)(unaff_x29 + -0x58) = uVar10;
      if ((int)unaff_w23 < (int)uVar11) {
        psVar22 = *(short **)(unaff_x29 + -0x30);
        *(uint *)(unaff_x29 + -0x20) = *(uint *)(unaff_x29 + -0x34) ^ 1;
        iVar13 = (int)*(undefined8 *)(unaff_x29 + -0x50);
        *(int *)(unaff_x29 + -0x98) = iVar13 + -2;
        *(undefined4 *)(unaff_x29 + -0x74) = 0;
        *(int *)(unaff_x29 + -0x70) = -iVar13;
LAB_050d8e90:
        uVar3 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
        if ((uVar3 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = unaff_w23, uVar3 == 0))
        goto LAB_050d98e0;
        iVar13 = *(int *)(unaff_x29 + -0x44);
        if ((iVar13 < 1) ||
           ((0x30 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x1400800000000U) == 0)))) {
          lVar14 = *(long *)(unaff_x29 + -0x40);
        }
        else {
          iVar25 = iVar13 + 1;
          lVar14 = *(long *)(unaff_x29 + -0x40);
          if (0 < iVar13) {
            iVar13 = 1;
          }
          uVar16 = *(uint *)(unaff_x29 + -0x20);
          *(int *)(unaff_x29 + -0x34) = iVar13 + -1;
          do {
            sVar23 = *psVar22;
            sVar5 = 0x30;
            if (sVar23 != 0) {
              psVar22 = psVar22 + 1;
              sVar5 = sVar23;
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
            if (((uVar16 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)uVar18)) {
              if (*(uint *)(unaff_x29 + -0x10) <= uVar18) goto LAB_050d9a30;
              if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar18 * 4) + 1) {
                if (lVar14 == 0) goto LAB_050d9a48;
                lVar21 = *(long *)(lVar14 + 0x40);
                if (DAT_06bb9c1f == '\0') {
                  FUN_02f08768(PTR_DAT_067d60d8);
                  DAT_06bb9c1f = '\x01';
                }
                if (lVar21 == 0) goto LAB_050d9a48;
                if (*(int *)(lVar21 + 0x10) == 1) {
                  uVar16 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar16) goto LAB_050d9018;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_050d9a30;
                  lVar14 = *(long *)(unaff_x22 + 8);
                  uVar8 = FUN_04f69818(lVar21,0,0);
                  *(undefined2 *)(lVar14 + (long)(int)uVar16 * 2) = uVar8;
                  lVar14 = *(long *)(unaff_x29 + -0x40);
                  *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
                }
                else {
LAB_050d9018:
                  FUN_04f87268();
                }
                uVar16 = *(uint *)(unaff_x29 + -0x20);
                uVar18 = uVar18 - 1;
              }
            }
            iVar25 = iVar25 + -1;
            unaff_w19 = unaff_w19 + -1;
          } while (1 < iVar25);
          iVar13 = *(int *)(unaff_x29 + -0x34);
        }
        *(int *)(unaff_x29 + -0x44) = iVar13;
        unaff_w23 = *(int *)(unaff_x29 + -0x24) + 1;
        uVar16 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
        if (uVar3 < 0x46) {
          if (uVar3 < 0x27) {
            if (uVar3 < 0x24) {
              if (uVar3 == 0x22) goto LAB_050d9280;
              if (uVar3 != 0x23) goto LAB_050d9108;
LAB_050d926c:
              if (iVar13 < 0) {
                iVar13 = iVar13 + 1;
                if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_050d95ec:
                  sVar23 = 0x30;
                  goto LAB_050d95f0;
                }
                *(int *)(unaff_x29 + -0x44) = iVar13;
              }
              else {
                sVar23 = *psVar22;
                if (sVar23 == 0) {
                  if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_050d95ec;
                }
                else {
                  psVar22 = psVar22 + 1;
LAB_050d95f0:
                  if (DAT_06bb905a == '\0') {
                    FUN_02f08768(PTR_DAT_067d60d8);
                    DAT_06bb905a = '\x01';
                  }
                  uVar4 = *(uint *)(unaff_x22 + 0x18);
                  uVar20 = *(uint *)(unaff_x22 + 0x10);
                  *(int *)(unaff_x29 + -0x44) = iVar13;
                  if ((int)uVar4 < (int)uVar20) {
                    if (uVar20 <= uVar4) goto LAB_050d9a30;
                    *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
                    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar4 * 2) = sVar23;
                  }
                  else {
                    FUN_04f8713c();
                  }
                  if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) &&
                     (-1 < (int)uVar18)) {
                    if (*(uint *)(unaff_x29 + -0x10) <= uVar18) goto LAB_050d9a30;
                    if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar18 * 4) + 1)
                    {
                      if (lVar14 == 0) goto LAB_050d9a48;
                      lVar14 = *(long *)(lVar14 + 0x40);
                      if (DAT_06bb9c1f == '\0') {
                        FUN_02f08768(PTR_DAT_067d60d8);
                        DAT_06bb9c1f = '\x01';
                      }
                      if (lVar14 == 0) goto LAB_050d9a48;
                      if (*(int *)(lVar14 + 0x10) == 1) {
                        uVar20 = *(uint *)(unaff_x22 + 0x18);
                        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_050d97bc;
                        if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_050d9a30;
                        lVar21 = *(long *)(unaff_x22 + 8);
                        uVar8 = FUN_04f69818(lVar14,0,0);
                        *(undefined2 *)(lVar21 + (long)(int)uVar20 * 2) = uVar8;
                        *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
                      }
                      else {
LAB_050d97bc:
                        FUN_04f87268();
                      }
                      uVar18 = uVar18 - 1;
                    }
                  }
                }
              }
              unaff_w19 = unaff_w19 + -1;
              goto LAB_050d9824;
            }
            if (uVar3 == 0x24) goto LAB_050d9188;
            if (uVar3 == 0x25) {
              if (lVar14 != 0) {
                lVar14 = *(long *)(lVar14 + 0x90);
                goto LAB_050d93d0;
              }
              goto LAB_050d9a48;
            }
            if (uVar3 != 0x26) goto LAB_050d9108;
          }
          else if (uVar3 < 0x2e) {
            if (uVar3 == 0x27) {
LAB_050d9280:
              if ((int)unaff_w23 < (int)uVar16) {
                lVar14 = (ulong)unaff_w23 << 0x20;
                puVar17 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
                uVar20 = ~*(uint *)(unaff_x29 + -0x24);
                while ((uVar2 = *puVar17, uVar2 != 0 && (uVar2 != uVar3))) {
                  if (DAT_06bb905a == '\0') {
                    FUN_02f08768(PTR_DAT_067d60d8);
                    DAT_06bb905a = '\x01';
                  }
                  uVar16 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_050d9a30;
                    *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
                    *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = uVar2;
                  }
                  else {
                    FUN_04f8713c();
                  }
                  uVar20 = uVar20 - 1;
                  puVar17 = puVar17 + 1;
                  lVar14 = lVar14 + 0x100000000;
                  if (*(uint *)(unaff_x29 + -0x70) == uVar20) goto LAB_050d98e0;
                }
                uVar16 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
                unaff_w23 = (*(short *)((lVar14 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) -
                            uVar20;
              }
              goto LAB_050d9824;
            }
            if (uVar3 == 0x2c) goto LAB_050d9824;
            if (uVar3 != 0x2d) goto LAB_050d9108;
          }
          else {
            if (uVar3 == 0x2e) {
              if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w19 != 0) goto LAB_050d9824;
              if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
                 ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*psVar22 != 0)))) {
                if (lVar14 == 0) goto LAB_050d9a48;
                lVar14 = *(long *)(lVar14 + 0x38);
                if (DAT_06bb9c1f == '\0') {
                  FUN_02f08768(PTR_DAT_067d60d8);
                  DAT_06bb9c1f = '\x01';
                }
                if (lVar14 == 0) goto LAB_050d9a48;
                if (*(int *)(lVar14 + 0x10) == 1) {
                  uVar20 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_050d98c0;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_050d9a30;
                  lVar21 = *(long *)(unaff_x22 + 8);
                  uVar8 = FUN_04f69818(lVar14,0,0);
                  *(undefined2 *)(lVar21 + (long)(int)uVar20 * 2) = uVar8;
                  *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
                }
                else {
LAB_050d98c0:
                  FUN_04f87268();
                }
                unaff_w19 = 0;
                *(undefined4 *)(unaff_x29 + -0x74) = 1;
              }
              else {
                *(undefined4 *)(unaff_x29 + -0x74) = 0;
                unaff_w19 = 0;
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
          uVar20 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_050d9a30;
            lVar14 = *(long *)(unaff_x22 + 8);
LAB_050d91cc:
            *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
            *(ushort *)(lVar14 + (long)(int)uVar20 * 2) = uVar3;
          }
          else {
LAB_050d91e0:
            FUN_04f8713c();
          }
        }
        else if (uVar3 == 0x5c) {
          if (((int)unaff_w23 < (int)uVar16) &&
             (sVar23 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2),
             sVar23 != 0)) {
            if (DAT_06bb905a == '\0') {
              FUN_02f08768(PTR_DAT_067d60d8);
              DAT_06bb905a = '\x01';
            }
            uVar20 = *(uint *)(unaff_x22 + 0x18);
            unaff_w23 = *(int *)(unaff_x29 + -0x24) + 2;
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_050d91e0;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_050d9a30;
            *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = sVar23;
          }
        }
        else if (uVar3 == 0x65) {
LAB_050d9110:
          if ((uVar19 & 1) != 0) {
            if (((int)unaff_w23 < (int)uVar16) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2) == 0x30)) {
              uVar12 = 0;
              uVar19 = *(int *)(unaff_x29 + -0x24) + 2;
              goto LAB_050d913c;
            }
            uVar19 = *(int *)(unaff_x29 + -0x24) + 2;
            if ((int)uVar19 < (int)uVar16) {
              sVar23 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
              if (sVar23 == 0x2d) {
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2) == 0x30) {
                  uVar12 = 0;
                  goto LAB_050d913c;
                }
              }
              else if ((sVar23 == 0x2b) &&
                      (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2) == 0x30)) {
                uVar12 = 1;
LAB_050d913c:
                unaff_w23 = uVar19;
                if ((int)uVar19 < (int)uVar16) {
                  psVar15 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2);
                  do {
                    unaff_w23 = uVar19;
                    if (*psVar15 != 0x30) break;
                    uVar19 = uVar19 + 1;
                    psVar15 = psVar15 + 1;
                    unaff_w23 = uVar16;
                  } while (uVar16 != uVar19);
                }
                if (*(int *)(*(long *)PTR_DAT_067dbd90 + 0xe4) == 0) {
                  *(undefined4 *)(unaff_x29 + -0x24) = uVar12;
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
              uVar19 = 1;
              goto LAB_050d9824;
            }
            if (uVar20 < *(uint *)(unaff_x22 + 0x10)) {
              lVar14 = *(long *)(unaff_x22 + 8);
              uVar19 = 1;
              goto LAB_050d91cc;
            }
            goto LAB_050d9a30;
          }
          if (DAT_06bb905a == '\0') {
            FUN_02f08768(PTR_DAT_067d60d8);
            DAT_06bb905a = '\x01';
          }
          uVar19 = *(uint *)(unaff_x22 + 0x18);
          iVar13 = *(int *)(unaff_x29 + -0x24);
          if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_050d9a30;
            *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar19 * 2) = uVar3;
          }
          else {
            FUN_04f8713c();
          }
          if ((int)unaff_w23 < (int)uVar16) {
            sVar23 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
            if ((sVar23 == 0x2d) || (sVar23 == 0x2b)) {
              if (DAT_06bb905a == '\0') {
                FUN_02f08768(PTR_DAT_067d60d8);
                DAT_06bb905a = '\x01';
              }
              uVar19 = *(uint *)(unaff_x22 + 0x18);
              unaff_w23 = iVar13 + 2;
              if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_050d9a30;
                *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar19 * 2) = sVar23;
              }
              else {
                FUN_04f8713c();
              }
            }
            if ((int)unaff_w23 < (int)uVar16) {
              psVar15 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
              lVar14 = *(long *)(unaff_x29 + -0x68) - (long)(int)unaff_w23;
              while (*psVar15 == 0x30) {
                if (DAT_06bb905a == '\0') {
                  FUN_02f08768(PTR_DAT_067d60d8);
                  DAT_06bb905a = '\x01';
                }
                uVar19 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_050d9a30;
                  *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
                  *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar19 * 2) = 0x30;
                }
                else {
                  FUN_04f8713c();
                }
                lVar14 = lVar14 + -1;
                unaff_w23 = unaff_w23 + 1;
                psVar15 = psVar15 + 1;
                if (lVar14 == 0) goto LAB_050d98e0;
              }
              uVar16 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
            }
          }
LAB_050d9820:
          uVar19 = 0;
        }
        else {
          if (uVar3 != 0x2030) goto LAB_050d9188;
          if (lVar14 == 0) goto LAB_050d9a48;
          lVar14 = *(long *)(lVar14 + 0x98);
LAB_050d93d0:
          if (DAT_06bb9c1f == '\0') {
            FUN_02f08768(PTR_DAT_067d60d8);
            DAT_06bb9c1f = '\x01';
          }
          if (lVar14 == 0) goto LAB_050d9a48;
          if (*(int *)(lVar14 + 0x10) == 1) {
            uVar20 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar20 < *(uint *)(unaff_x22 + 0x10)) {
                lVar21 = *(long *)(unaff_x22 + 8);
                uVar8 = FUN_04f69818(lVar14,0,0);
                *(undefined2 *)(lVar21 + (long)(int)uVar20 * 2) = uVar8;
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
                goto LAB_050d9824;
              }
              goto LAB_050d9a30;
            }
          }
          FUN_04f87268();
        }
LAB_050d9824:
        if ((int)uVar16 <= (int)unaff_w23) goto LAB_050d98e0;
        goto LAB_050d8e90;
      }
LAB_050d98e0:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_050d9a60;
    }
    if (*(long *)(unaff_x29 + -0x40) != 0) {
      lVar14 = *(long *)(*(long *)(unaff_x29 + -0x40) + 0x30);
      if (DAT_06bb9c1f == '\0') {
        FUN_02f08768(PTR_DAT_067d60d8);
        DAT_06bb9c1f = '\x01';
      }
      if (lVar14 != 0) {
        if (*(int *)(lVar14 + 0x10) == 1) {
          uVar19 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar19) {
LAB_050d9a30:
              if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              goto LAB_050d9a60;
            }
            lVar21 = *(long *)(unaff_x22 + 8);
            uVar8 = FUN_04f69818(lVar14,0,0);
            *(undefined2 *)(lVar21 + (long)(int)uVar19 * 2) = uVar8;
            *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
            goto LAB_050d8e44;
          }
        }
        FUN_04f87268();
        goto LAB_050d8e44;
      }
    }
  }
  else if ((lVar14 != 0) && (*(long *)(lVar14 + 0x40) != 0)) {
    if (*(int *)(*(long *)(lVar14 + 0x40) + 0x10) < 1) goto LAB_050d8d90;
    lVar14 = *(long *)(lVar14 + 0x10);
    if (lVar14 == 0) goto LAB_050d9a48;
    iVar13 = *(int *)(lVar14 + 0x18);
    if (iVar13 == 0) {
      iVar25 = 0;
    }
    else {
      iVar25 = *(int *)(lVar14 + 0x20);
    }
    uVar18 = 0xffffffff;
    iVar24 = (*(uint *)(unaff_x29 + -0x44) & (int)*(uint *)(unaff_x29 + -0x44) >> 0x1f) + unaff_w19;
    if (in_w10 <= iVar24) {
      in_w10 = iVar24;
    }
    if ((iVar25 != 0) && (iVar25 < in_w10)) {
      lVar21 = 0;
      *(long *)(unaff_x29 + -0x70) = lVar14;
      *(int *)(unaff_x29 + -0x74) = in_w10;
      iVar24 = iVar25;
      do {
        puVar7 = PTR_DAT_067cb890;
        iVar1 = *(int *)(unaff_x29 + -0x10);
        auVar6._8_4_ = iVar1;
        auVar6._0_8_ = param_2;
        uVar18 = uVar18 + 1;
        if (iVar1 <= (int)uVar18) {
          *(uint *)(unaff_x29 + -0x58) = uVar18;
          uVar11 = FUN_02f0880c(*(undefined8 *)puVar7,iVar1 << 1);
          auVar26 = FUN_0426a99c(uVar11,*(undefined8 *)
                                         UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var
                                );
          FUN_0426a488(unaff_x29 + -0x18,auVar26._0_8_,auVar26._8_8_,
                       *(undefined8 *)UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var);
          auVar26 = FUN_0426a99c(uVar11,*(undefined8 *)
                                         UnityEngine_InputSystem_Composites_ButtonWithTwoModifiers_var
                                );
          auVar6 = auVar26._0_12_;
          in_w10 = *(int *)(unaff_x29 + -0x74);
          lVar14 = *(long *)(unaff_x29 + -0x70);
          uVar18 = *(uint *)(unaff_x29 + -0x58);
          *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar26;
        }
        param_2 = auVar6._0_8_;
        if (auVar6._8_4_ <= uVar18) goto LAB_050d9a30;
        *(int *)(param_2 + (long)(int)uVar18 * 4) = iVar25;
        if ((int)lVar21 < iVar13 + -1) {
          lVar21 = (long)(int)lVar21 + 1;
          if (*(uint *)(lVar14 + 0x18) <= (uint)lVar21) goto LAB_050d9a30;
          iVar24 = *(int *)(lVar14 + lVar21 * 4 + 0x20);
        }
      } while ((iVar24 != 0) && (iVar25 = iVar24 + iVar25, iVar25 < in_w10));
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


