/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.CreatorPropertyContext$$.ctor
ENTRY_POINT: 074e9268
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___ctor
               (long param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  undefined1 auVar5 [12];
  undefined *puVar6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined2 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int iVar11;
  int in_w10;
  short *psVar12;
  long in_x11;
  int in_w12;
  int unaff_w19;
  uint uVar13;
  undefined4 unaff_w20;
  ushort *puVar14;
  uint unaff_w21;
  long unaff_x22;
  uint uVar15;
  uint unaff_w23;
  uint uVar16;
  long lVar17;
  long unaff_x24;
  undefined4 unaff_w25;
  long lVar18;
  short *psVar19;
  short sVar20;
  undefined8 uVar21;
  int unaff_w27;
  int iVar22;
  int unaff_w28;
  long unaff_x29;
  undefined1 auVar23 [16];
  
  while (puVar6 = PTR_DAT_08f68538, !(bool)in_ZR && in_NG == in_OV) {
    iVar11 = *(int *)(unaff_x29 + -0x10);
    auVar5._8_4_ = iVar11;
    auVar5._0_8_ = param_1;
    unaff_w21 = unaff_w21 + 1;
    if (iVar11 <= (int)unaff_w21) {
      *(uint *)(unaff_x29 + -0x58) = unaff_w21;
      uVar21 = FUN_040316d0(*(undefined8 *)puVar6,iVar11 << 1);
      auVar23 = FUN_060267d4(uVar21,*(undefined8 *)PTR_DAT_08fa2c00);
      FUN_060262c0(unaff_x29 + -0x18,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)PTR_DAT_08fa2bf8);
      auVar23 = FUN_060267d4(uVar21,*(undefined8 *)PTR_DAT_08fa2c00);
      auVar5 = auVar23._0_12_;
      in_w10 = *(int *)(unaff_x29 + -0x74);
      in_x11 = *(long *)(unaff_x29 + -0x70);
      unaff_w21 = *(uint *)(unaff_x29 + -0x58);
      *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar23;
    }
    param_1 = auVar5._0_8_;
    if (auVar5._8_4_ <= unaff_w21) goto LAB_074e9270;
    *(int *)(param_1 + (long)(int)unaff_w21 * 4) = unaff_w28;
    if ((int)unaff_x24 < in_w12) {
      unaff_x24 = (long)(int)unaff_x24 + 1;
      if (*(uint *)(in_x11 + 0x18) <= (uint)unaff_x24) goto LAB_074e9270;
      unaff_w27 = *(int *)(in_x11 + unaff_x24 * 4 + 0x20);
    }
    if (unaff_w27 == 0) break;
    unaff_w28 = unaff_w27 + unaff_w28;
    in_OV = SBORROW4(in_w10,unaff_w28);
    in_NG = in_w10 - unaff_w28 < 0;
    in_ZR = in_w10 == unaff_w28;
  }
  *(undefined4 *)(unaff_x29 + -0x5c) = unaff_w20;
  *(undefined4 *)(unaff_x29 + -0x94) = unaff_w25;
  uVar8 = FUN_074f3a04(*(undefined8 *)(unaff_x29 + -0x80),0);
  uVar21 = *(undefined8 *)(unaff_x29 + -0x50);
  if (((uVar8 & 1) == 0) || (unaff_w23 != 0)) {
LAB_074e8684:
    uVar9 = FUN_04bf989c(*(undefined8 *)(unaff_x29 + -0x20),uVar21,*(undefined8 *)PTR_DAT_08f992c8);
    uVar15 = *(uint *)(unaff_x29 + -0x24);
    *(undefined8 *)(unaff_x29 + -0x58) = uVar9;
    if ((int)unaff_w23 < (int)uVar21) {
      psVar19 = *(short **)(unaff_x29 + -0x30);
      *(uint *)(unaff_x29 + -0x20) = *(uint *)(unaff_x29 + -0x34) ^ 1;
      iVar11 = (int)*(undefined8 *)(unaff_x29 + -0x50);
      *(int *)(unaff_x29 + -0x98) = iVar11 + -2;
      *(undefined4 *)(unaff_x29 + -0x74) = 0;
      *(int *)(unaff_x29 + -0x70) = -iVar11;
LAB_074e86d0:
      uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
      if ((uVar2 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = unaff_w23, uVar2 == 0))
      goto LAB_074e9120;
      iVar11 = *(int *)(unaff_x29 + -0x44);
      if ((iVar11 < 1) ||
         ((0x30 < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar18 = *(long *)(unaff_x29 + -0x40);
      }
      else {
        iVar22 = iVar11 + 1;
        lVar18 = *(long *)(unaff_x29 + -0x40);
        if (0 < iVar11) {
          iVar11 = 1;
        }
        uVar13 = *(uint *)(unaff_x29 + -0x20);
        *(int *)(unaff_x29 + -0x34) = iVar11 + -1;
        do {
          sVar20 = *psVar19;
          sVar4 = 0x30;
          if (sVar20 != 0) {
            psVar19 = psVar19 + 1;
            sVar4 = sVar20;
          }
          if (DAT_095462cd == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca68);
            DAT_095462cd = '\x01';
          }
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_074e9270;
            *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar4;
          }
          else {
            FUN_073869c4();
          }
          if (((uVar13 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_074e9270;
            if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
              if (lVar18 == 0) goto LAB_074e9288;
              lVar17 = *(long *)(lVar18 + 0x40);
              if (DAT_09546f42 == '\0') {
                FUN_0403162c(PTR_DAT_08f8ca68);
                DAT_09546f42 = '\x01';
              }
              if (lVar17 == 0) goto LAB_074e9288;
              if (*(int *)(lVar17 + 0x10) == 1) {
                uVar13 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar13) goto LAB_074e8858;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar13) goto LAB_074e9270;
                lVar18 = *(long *)(unaff_x22 + 8);
                uVar7 = FUN_07363804(lVar17,0,0);
                *(undefined2 *)(lVar18 + (long)(int)uVar13 * 2) = uVar7;
                lVar18 = *(long *)(unaff_x29 + -0x40);
                *(uint *)(unaff_x22 + 0x18) = uVar13 + 1;
              }
              else {
LAB_074e8858:
                FUN_07386af0();
              }
              uVar13 = *(uint *)(unaff_x29 + -0x20);
              unaff_w21 = unaff_w21 - 1;
            }
          }
          iVar22 = iVar22 + -1;
          unaff_w19 = unaff_w19 + -1;
        } while (1 < iVar22);
        iVar11 = *(int *)(unaff_x29 + -0x34);
      }
      *(int *)(unaff_x29 + -0x44) = iVar11;
      unaff_w23 = *(int *)(unaff_x29 + -0x24) + 1;
      uVar13 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
      if (uVar2 < 0x46) {
        if (uVar2 < 0x27) {
          if (uVar2 < 0x24) {
            if (uVar2 == 0x22) goto LAB_074e8ac0;
            if (uVar2 != 0x23) goto LAB_074e8948;
LAB_074e8aac:
            if (iVar11 < 0) {
              iVar11 = iVar11 + 1;
              if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_074e8e2c:
                sVar20 = 0x30;
                goto LAB_074e8e30;
              }
              *(int *)(unaff_x29 + -0x44) = iVar11;
            }
            else {
              sVar20 = *psVar19;
              if (sVar20 == 0) {
                if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_074e8e2c;
              }
              else {
                psVar19 = psVar19 + 1;
LAB_074e8e30:
                if (DAT_095462cd == '\0') {
                  FUN_0403162c(PTR_DAT_08f8ca68);
                  DAT_095462cd = '\x01';
                }
                uVar3 = *(uint *)(unaff_x22 + 0x18);
                uVar16 = *(uint *)(unaff_x22 + 0x10);
                *(int *)(unaff_x29 + -0x44) = iVar11;
                if ((int)uVar3 < (int)uVar16) {
                  if (uVar16 <= uVar3) goto LAB_074e9270;
                  *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = sVar20;
                }
                else {
                  FUN_073869c4();
                }
                if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) &&
                   (-1 < (int)unaff_w21)) {
                  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_074e9270;
                  if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1
                     ) {
                    if (lVar18 == 0) goto LAB_074e9288;
                    lVar18 = *(long *)(lVar18 + 0x40);
                    if (DAT_09546f42 == '\0') {
                      FUN_0403162c(PTR_DAT_08f8ca68);
                      DAT_09546f42 = '\x01';
                    }
                    if (lVar18 == 0) goto LAB_074e9288;
                    if (*(int *)(lVar18 + 0x10) == 1) {
                      uVar16 = *(uint *)(unaff_x22 + 0x18);
                      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar16) goto LAB_074e8ffc;
                      if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_074e9270;
                      lVar17 = *(long *)(unaff_x22 + 8);
                      uVar7 = FUN_07363804(lVar18,0,0);
                      *(undefined2 *)(lVar17 + (long)(int)uVar16 * 2) = uVar7;
                      *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
                    }
                    else {
LAB_074e8ffc:
                      FUN_07386af0();
                    }
                    unaff_w21 = unaff_w21 - 1;
                  }
                }
              }
            }
            unaff_w19 = unaff_w19 + -1;
            goto LAB_074e9064;
          }
          if (uVar2 == 0x24) goto LAB_074e89c8;
          if (uVar2 == 0x25) {
            if (lVar18 != 0) {
              lVar18 = *(long *)(lVar18 + 0x90);
              goto LAB_074e8c10;
            }
            goto LAB_074e9288;
          }
          if (uVar2 != 0x26) goto LAB_074e8948;
        }
        else if (uVar2 < 0x2e) {
          if (uVar2 == 0x27) {
LAB_074e8ac0:
            if ((int)unaff_w23 < (int)uVar13) {
              lVar18 = (ulong)unaff_w23 << 0x20;
              puVar14 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
              uVar16 = ~*(uint *)(unaff_x29 + -0x24);
              while ((uVar1 = *puVar14, uVar1 != 0 && (uVar1 != uVar2))) {
                if (DAT_095462cd == '\0') {
                  FUN_0403162c(PTR_DAT_08f8ca68);
                  DAT_095462cd = '\x01';
                }
                uVar13 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar13 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar13) goto LAB_074e9270;
                  *(uint *)(unaff_x22 + 0x18) = uVar13 + 1;
                  *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar13 * 2) = uVar1;
                }
                else {
                  FUN_073869c4();
                }
                uVar16 = uVar16 - 1;
                puVar14 = puVar14 + 1;
                lVar18 = lVar18 + 0x100000000;
                if (*(uint *)(unaff_x29 + -0x70) == uVar16) goto LAB_074e9120;
              }
              uVar13 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
              unaff_w23 = (*(short *)((lVar18 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) -
                          uVar16;
            }
            goto LAB_074e9064;
          }
          if (uVar2 == 0x2c) goto LAB_074e9064;
          if (uVar2 != 0x2d) goto LAB_074e8948;
        }
        else {
          if (uVar2 == 0x2e) {
            if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w19 != 0) goto LAB_074e9064;
            if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
               ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*psVar19 != 0)))) {
              if (lVar18 == 0) goto LAB_074e9288;
              lVar18 = *(long *)(lVar18 + 0x38);
              if (DAT_09546f42 == '\0') {
                FUN_0403162c(PTR_DAT_08f8ca68);
                DAT_09546f42 = '\x01';
              }
              if (lVar18 == 0) goto LAB_074e9288;
              if (*(int *)(lVar18 + 0x10) == 1) {
                uVar16 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar16) goto LAB_074e9100;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_074e9270;
                lVar17 = *(long *)(unaff_x22 + 8);
                uVar7 = FUN_07363804(lVar18,0,0);
                *(undefined2 *)(lVar17 + (long)(int)uVar16 * 2) = uVar7;
                *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
              }
              else {
LAB_074e9100:
                FUN_07386af0();
              }
              unaff_w19 = 0;
              *(undefined4 *)(unaff_x29 + -0x74) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x74) = 0;
              unaff_w19 = 0;
            }
            goto LAB_074e9064;
          }
          if (uVar2 != 0x2f) {
            if (uVar2 == 0x30) goto LAB_074e8aac;
LAB_074e8948:
            if (uVar2 == 0x45) goto LAB_074e8950;
          }
        }
LAB_074e89c8:
        if (DAT_095462cd == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca68);
          DAT_095462cd = '\x01';
        }
        uVar16 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_074e9270;
          lVar18 = *(long *)(unaff_x22 + 8);
LAB_074e8a0c:
          *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
          *(ushort *)(lVar18 + (long)(int)uVar16 * 2) = uVar2;
        }
        else {
LAB_074e8a20:
          FUN_073869c4();
        }
      }
      else if (uVar2 == 0x5c) {
        if (((int)unaff_w23 < (int)uVar13) &&
           (sVar20 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2),
           sVar20 != 0)) {
          if (DAT_095462cd == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca68);
            DAT_095462cd = '\x01';
          }
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          unaff_w23 = *(int *)(unaff_x29 + -0x24) + 2;
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar16) goto LAB_074e8a20;
          if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_074e9270;
          *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar20;
        }
      }
      else if (uVar2 == 0x65) {
LAB_074e8950:
        if ((uVar15 & 1) != 0) {
          if (((int)unaff_w23 < (int)uVar13) &&
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2) == 0x30)) {
            uVar10 = 0;
            uVar15 = *(int *)(unaff_x29 + -0x24) + 2;
            goto LAB_074e897c;
          }
          uVar15 = *(int *)(unaff_x29 + -0x24) + 2;
          if ((int)uVar15 < (int)uVar13) {
            sVar20 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
            if (sVar20 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar15 * 2) == 0x30) {
                uVar10 = 0;
                goto LAB_074e897c;
              }
            }
            else if ((sVar20 == 0x2b) &&
                    (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar15 * 2) == 0x30)) {
              uVar10 = 1;
LAB_074e897c:
              unaff_w23 = uVar15;
              if ((int)uVar15 < (int)uVar13) {
                psVar12 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar15 * 2);
                do {
                  unaff_w23 = uVar15;
                  if (*psVar12 != 0x30) break;
                  uVar15 = uVar15 + 1;
                  psVar12 = psVar12 + 1;
                  unaff_w23 = uVar13;
                } while (uVar13 != uVar15);
              }
              if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
                *(undefined4 *)(unaff_x29 + -0x24) = uVar10;
                thunk_FUN_0408f364();
              }
              FUN_074ee50c();
              goto LAB_074e9060;
            }
          }
          if (DAT_095462cd == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca68);
            DAT_095462cd = '\x01';
          }
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar16) {
            FUN_073869c4();
            uVar15 = 1;
            goto LAB_074e9064;
          }
          if (uVar16 < *(uint *)(unaff_x22 + 0x10)) {
            lVar18 = *(long *)(unaff_x22 + 8);
            uVar15 = 1;
            goto LAB_074e8a0c;
          }
          goto LAB_074e9270;
        }
        if (DAT_095462cd == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca68);
          DAT_095462cd = '\x01';
        }
        uVar15 = *(uint *)(unaff_x22 + 0x18);
        iVar11 = *(int *)(unaff_x29 + -0x24);
        if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_074e9270;
          *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar2;
        }
        else {
          FUN_073869c4();
        }
        if ((int)unaff_w23 < (int)uVar13) {
          sVar20 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
          if ((sVar20 == 0x2d) || (sVar20 == 0x2b)) {
            if (DAT_095462cd == '\0') {
              FUN_0403162c(PTR_DAT_08f8ca68);
              DAT_095462cd = '\x01';
            }
            uVar15 = *(uint *)(unaff_x22 + 0x18);
            unaff_w23 = iVar11 + 2;
            if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_074e9270;
              *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar20;
            }
            else {
              FUN_073869c4();
            }
          }
          if ((int)unaff_w23 < (int)uVar13) {
            psVar12 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
            lVar18 = *(long *)(unaff_x29 + -0x68) - (long)(int)unaff_w23;
            while (*psVar12 == 0x30) {
              if (DAT_095462cd == '\0') {
                FUN_0403162c(PTR_DAT_08f8ca68);
                DAT_095462cd = '\x01';
              }
              uVar15 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_074e9270;
                *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = 0x30;
              }
              else {
                FUN_073869c4();
              }
              lVar18 = lVar18 + -1;
              unaff_w23 = unaff_w23 + 1;
              psVar12 = psVar12 + 1;
              if (lVar18 == 0) goto LAB_074e9120;
            }
            uVar13 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
          }
        }
LAB_074e9060:
        uVar15 = 0;
      }
      else {
        if (uVar2 != 0x2030) goto LAB_074e89c8;
        if (lVar18 == 0) goto LAB_074e9288;
        lVar18 = *(long *)(lVar18 + 0x98);
LAB_074e8c10:
        if (DAT_09546f42 == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca68);
          DAT_09546f42 = '\x01';
        }
        if (lVar18 == 0) goto LAB_074e9288;
        if (*(int *)(lVar18 + 0x10) == 1) {
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar16 < *(uint *)(unaff_x22 + 0x10)) {
              lVar17 = *(long *)(unaff_x22 + 8);
              uVar7 = FUN_07363804(lVar18,0,0);
              *(undefined2 *)(lVar17 + (long)(int)uVar16 * 2) = uVar7;
              *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
              goto LAB_074e9064;
            }
            goto LAB_074e9270;
          }
        }
        FUN_07386af0();
      }
LAB_074e9064:
      if ((int)uVar13 <= (int)unaff_w23) goto LAB_074e9120;
      goto LAB_074e86d0;
    }
LAB_074e9120:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else {
    if (*(long *)(unaff_x29 + -0x40) != 0) {
      lVar18 = *(long *)(*(long *)(unaff_x29 + -0x40) + 0x30);
      if (DAT_09546f42 == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca68);
        DAT_09546f42 = '\x01';
      }
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0x10) == 1) {
          uVar15 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar15) {
LAB_074e9270:
              if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              goto LAB_074e92a0;
            }
            lVar17 = *(long *)(unaff_x22 + 8);
            uVar7 = FUN_07363804(lVar18,0,0);
            *(undefined2 *)(lVar17 + (long)(int)uVar15 * 2) = uVar7;
            *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
            goto LAB_074e8684;
          }
        }
        FUN_07386af0();
        goto LAB_074e8684;
      }
    }
LAB_074e9288:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  }
LAB_074e92a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


