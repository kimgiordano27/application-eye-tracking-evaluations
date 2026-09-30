/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyPresence
ENTRY_POINT: 074e9164
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyPresence(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  undefined1 auVar5 [12];
  undefined *puVar6;
  undefined2 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  int iVar12;
  int in_w8;
  int in_w9;
  int in_w10;
  short *psVar13;
  long in_x11;
  int unaff_w19;
  uint uVar14;
  undefined4 unaff_w20;
  ushort *puVar15;
  uint unaff_w21;
  long unaff_x22;
  uint uVar16;
  uint unaff_w23;
  uint uVar17;
  long lVar18;
  long lVar19;
  undefined4 unaff_w25;
  short *psVar20;
  short sVar21;
  int iVar22;
  int unaff_w28;
  long unaff_x29;
  undefined1 auVar23 [16];
  
  if (in_w10 <= in_w9 + unaff_w19) {
    in_w10 = in_w9 + unaff_w19;
  }
  if ((unaff_w28 != 0) && (unaff_w28 < in_w10)) {
    lVar19 = 0;
    *(long *)(unaff_x29 + -0x70) = in_x11;
    *(int *)(unaff_x29 + -0x74) = in_w10;
    iVar12 = unaff_w28;
    do {
      puVar6 = PTR_DAT_08f68538;
      iVar22 = *(int *)(unaff_x29 + -0x10);
      auVar5._8_4_ = iVar22;
      auVar5._0_8_ = param_1;
      unaff_w21 = unaff_w21 + 1;
      if (iVar22 <= (int)unaff_w21) {
        *(uint *)(unaff_x29 + -0x58) = unaff_w21;
        uVar10 = FUN_040316d0(*(undefined8 *)puVar6,iVar22 << 1);
        auVar23 = FUN_060267d4(uVar10,*(undefined8 *)PTR_DAT_08fa2c00);
        FUN_060262c0(unaff_x29 + -0x18,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)PTR_DAT_08fa2bf8);
        auVar23 = FUN_060267d4(uVar10,*(undefined8 *)PTR_DAT_08fa2c00);
        auVar5 = auVar23._0_12_;
        in_w10 = *(int *)(unaff_x29 + -0x74);
        in_x11 = *(long *)(unaff_x29 + -0x70);
        unaff_w21 = *(uint *)(unaff_x29 + -0x58);
        *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar23;
      }
      param_1 = auVar5._0_8_;
      if (auVar5._8_4_ <= unaff_w21) goto LAB_074e9270;
      *(int *)(param_1 + (long)(int)unaff_w21 * 4) = unaff_w28;
      if ((int)lVar19 < in_w8 + -1) {
        lVar19 = (long)(int)lVar19 + 1;
        if (*(uint *)(in_x11 + 0x18) <= (uint)lVar19) goto LAB_074e9270;
        iVar12 = *(int *)(in_x11 + lVar19 * 4 + 0x20);
      }
    } while ((iVar12 != 0) && (unaff_w28 = iVar12 + unaff_w28, unaff_w28 < in_w10));
  }
  *(undefined4 *)(unaff_x29 + -0x5c) = unaff_w20;
  *(undefined4 *)(unaff_x29 + -0x94) = unaff_w25;
  uVar8 = FUN_074f3a04(*(undefined8 *)(unaff_x29 + -0x80),0);
  uVar10 = *(undefined8 *)(unaff_x29 + -0x50);
  if (((uVar8 & 1) == 0) || (unaff_w23 != 0)) {
LAB_074e8684:
    uVar9 = FUN_04bf989c(*(undefined8 *)(unaff_x29 + -0x20),uVar10,*(undefined8 *)PTR_DAT_08f992c8);
    uVar16 = *(uint *)(unaff_x29 + -0x24);
    *(undefined8 *)(unaff_x29 + -0x58) = uVar9;
    if ((int)unaff_w23 < (int)uVar10) {
      psVar20 = *(short **)(unaff_x29 + -0x30);
      *(uint *)(unaff_x29 + -0x20) = *(uint *)(unaff_x29 + -0x34) ^ 1;
      iVar12 = (int)*(undefined8 *)(unaff_x29 + -0x50);
      *(int *)(unaff_x29 + -0x98) = iVar12 + -2;
      *(undefined4 *)(unaff_x29 + -0x74) = 0;
      *(int *)(unaff_x29 + -0x70) = -iVar12;
LAB_074e86d0:
      uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
      if ((uVar2 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = unaff_w23, uVar2 == 0))
      goto LAB_074e9120;
      iVar12 = *(int *)(unaff_x29 + -0x44);
      if ((iVar12 < 1) ||
         ((0x30 < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar19 = *(long *)(unaff_x29 + -0x40);
      }
      else {
        iVar22 = iVar12 + 1;
        lVar19 = *(long *)(unaff_x29 + -0x40);
        if (0 < iVar12) {
          iVar12 = 1;
        }
        uVar14 = *(uint *)(unaff_x29 + -0x20);
        *(int *)(unaff_x29 + -0x34) = iVar12 + -1;
        do {
          sVar21 = *psVar20;
          sVar4 = 0x30;
          if (sVar21 != 0) {
            psVar20 = psVar20 + 1;
            sVar4 = sVar21;
          }
          if (DAT_095462cd == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca68);
            DAT_095462cd = '\x01';
          }
          uVar17 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar17 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_074e9270;
            *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar17 * 2) = sVar4;
          }
          else {
            FUN_073869c4();
          }
          if (((uVar14 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_074e9270;
            if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
              if (lVar19 == 0) goto LAB_074e9288;
              lVar18 = *(long *)(lVar19 + 0x40);
              if (DAT_09546f42 == '\0') {
                FUN_0403162c(PTR_DAT_08f8ca68);
                DAT_09546f42 = '\x01';
              }
              if (lVar18 == 0) goto LAB_074e9288;
              if (*(int *)(lVar18 + 0x10) == 1) {
                uVar14 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar14) goto LAB_074e8858;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_074e9270;
                lVar19 = *(long *)(unaff_x22 + 8);
                uVar7 = FUN_07363804(lVar18,0,0);
                *(undefined2 *)(lVar19 + (long)(int)uVar14 * 2) = uVar7;
                lVar19 = *(long *)(unaff_x29 + -0x40);
                *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
              }
              else {
LAB_074e8858:
                FUN_07386af0();
              }
              uVar14 = *(uint *)(unaff_x29 + -0x20);
              unaff_w21 = unaff_w21 - 1;
            }
          }
          iVar22 = iVar22 + -1;
          unaff_w19 = unaff_w19 + -1;
        } while (1 < iVar22);
        iVar12 = *(int *)(unaff_x29 + -0x34);
      }
      *(int *)(unaff_x29 + -0x44) = iVar12;
      unaff_w23 = *(int *)(unaff_x29 + -0x24) + 1;
      uVar14 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
      if (uVar2 < 0x46) {
        if (uVar2 < 0x27) {
          if (uVar2 < 0x24) {
            if (uVar2 == 0x22) goto LAB_074e8ac0;
            if (uVar2 != 0x23) goto LAB_074e8948;
LAB_074e8aac:
            if (iVar12 < 0) {
              iVar12 = iVar12 + 1;
              if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_074e8e2c:
                sVar21 = 0x30;
                goto LAB_074e8e30;
              }
              *(int *)(unaff_x29 + -0x44) = iVar12;
            }
            else {
              sVar21 = *psVar20;
              if (sVar21 == 0) {
                if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_074e8e2c;
              }
              else {
                psVar20 = psVar20 + 1;
LAB_074e8e30:
                if (DAT_095462cd == '\0') {
                  FUN_0403162c(PTR_DAT_08f8ca68);
                  DAT_095462cd = '\x01';
                }
                uVar3 = *(uint *)(unaff_x22 + 0x18);
                uVar17 = *(uint *)(unaff_x22 + 0x10);
                *(int *)(unaff_x29 + -0x44) = iVar12;
                if ((int)uVar3 < (int)uVar17) {
                  if (uVar17 <= uVar3) goto LAB_074e9270;
                  *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = sVar21;
                }
                else {
                  FUN_073869c4();
                }
                if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) &&
                   (-1 < (int)unaff_w21)) {
                  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_074e9270;
                  if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1
                     ) {
                    if (lVar19 == 0) goto LAB_074e9288;
                    lVar19 = *(long *)(lVar19 + 0x40);
                    if (DAT_09546f42 == '\0') {
                      FUN_0403162c(PTR_DAT_08f8ca68);
                      DAT_09546f42 = '\x01';
                    }
                    if (lVar19 == 0) goto LAB_074e9288;
                    if (*(int *)(lVar19 + 0x10) == 1) {
                      uVar17 = *(uint *)(unaff_x22 + 0x18);
                      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar17) goto LAB_074e8ffc;
                      if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_074e9270;
                      lVar18 = *(long *)(unaff_x22 + 8);
                      uVar7 = FUN_07363804(lVar19,0,0);
                      *(undefined2 *)(lVar18 + (long)(int)uVar17 * 2) = uVar7;
                      *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
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
            if (lVar19 != 0) {
              lVar19 = *(long *)(lVar19 + 0x90);
              goto LAB_074e8c10;
            }
            goto LAB_074e9288;
          }
          if (uVar2 != 0x26) goto LAB_074e8948;
        }
        else if (uVar2 < 0x2e) {
          if (uVar2 == 0x27) {
LAB_074e8ac0:
            if ((int)unaff_w23 < (int)uVar14) {
              lVar19 = (ulong)unaff_w23 << 0x20;
              puVar15 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
              uVar17 = ~*(uint *)(unaff_x29 + -0x24);
              while ((uVar1 = *puVar15, uVar1 != 0 && (uVar1 != uVar2))) {
                if (DAT_095462cd == '\0') {
                  FUN_0403162c(PTR_DAT_08f8ca68);
                  DAT_095462cd = '\x01';
                }
                uVar14 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_074e9270;
                  *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
                  *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = uVar1;
                }
                else {
                  FUN_073869c4();
                }
                uVar17 = uVar17 - 1;
                puVar15 = puVar15 + 1;
                lVar19 = lVar19 + 0x100000000;
                if (*(uint *)(unaff_x29 + -0x70) == uVar17) goto LAB_074e9120;
              }
              uVar14 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
              unaff_w23 = (*(short *)((lVar19 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) -
                          uVar17;
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
               ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*psVar20 != 0)))) {
              if (lVar19 == 0) goto LAB_074e9288;
              lVar19 = *(long *)(lVar19 + 0x38);
              if (DAT_09546f42 == '\0') {
                FUN_0403162c(PTR_DAT_08f8ca68);
                DAT_09546f42 = '\x01';
              }
              if (lVar19 == 0) goto LAB_074e9288;
              if (*(int *)(lVar19 + 0x10) == 1) {
                uVar17 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar17) goto LAB_074e9100;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_074e9270;
                lVar18 = *(long *)(unaff_x22 + 8);
                uVar7 = FUN_07363804(lVar19,0,0);
                *(undefined2 *)(lVar18 + (long)(int)uVar17 * 2) = uVar7;
                *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
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
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar17 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_074e9270;
          lVar19 = *(long *)(unaff_x22 + 8);
LAB_074e8a0c:
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(ushort *)(lVar19 + (long)(int)uVar17 * 2) = uVar2;
        }
        else {
LAB_074e8a20:
          FUN_073869c4();
        }
      }
      else if (uVar2 == 0x5c) {
        if (((int)unaff_w23 < (int)uVar14) &&
           (sVar21 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2),
           sVar21 != 0)) {
          if (DAT_095462cd == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca68);
            DAT_095462cd = '\x01';
          }
          uVar17 = *(uint *)(unaff_x22 + 0x18);
          unaff_w23 = *(int *)(unaff_x29 + -0x24) + 2;
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar17) goto LAB_074e8a20;
          if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_074e9270;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar17 * 2) = sVar21;
        }
      }
      else if (uVar2 == 0x65) {
LAB_074e8950:
        if ((uVar16 & 1) != 0) {
          if (((int)unaff_w23 < (int)uVar14) &&
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2) == 0x30)) {
            uVar11 = 0;
            uVar16 = *(int *)(unaff_x29 + -0x24) + 2;
            goto LAB_074e897c;
          }
          uVar16 = *(int *)(unaff_x29 + -0x24) + 2;
          if ((int)uVar16 < (int)uVar14) {
            sVar21 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
            if (sVar21 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar16 * 2) == 0x30) {
                uVar11 = 0;
                goto LAB_074e897c;
              }
            }
            else if ((sVar21 == 0x2b) &&
                    (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar16 * 2) == 0x30)) {
              uVar11 = 1;
LAB_074e897c:
              unaff_w23 = uVar16;
              if ((int)uVar16 < (int)uVar14) {
                psVar13 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar16 * 2);
                do {
                  unaff_w23 = uVar16;
                  if (*psVar13 != 0x30) break;
                  uVar16 = uVar16 + 1;
                  psVar13 = psVar13 + 1;
                  unaff_w23 = uVar14;
                } while (uVar14 != uVar16);
              }
              if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
                *(undefined4 *)(unaff_x29 + -0x24) = uVar11;
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
          uVar17 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar17) {
            FUN_073869c4();
            uVar16 = 1;
            goto LAB_074e9064;
          }
          if (uVar17 < *(uint *)(unaff_x22 + 0x10)) {
            lVar19 = *(long *)(unaff_x22 + 8);
            uVar16 = 1;
            goto LAB_074e8a0c;
          }
          goto LAB_074e9270;
        }
        if (DAT_095462cd == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca68);
          DAT_095462cd = '\x01';
        }
        uVar16 = *(uint *)(unaff_x22 + 0x18);
        iVar12 = *(int *)(unaff_x29 + -0x24);
        if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_074e9270;
          *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = uVar2;
        }
        else {
          FUN_073869c4();
        }
        if ((int)unaff_w23 < (int)uVar14) {
          sVar21 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
          if ((sVar21 == 0x2d) || (sVar21 == 0x2b)) {
            if (DAT_095462cd == '\0') {
              FUN_0403162c(PTR_DAT_08f8ca68);
              DAT_095462cd = '\x01';
            }
            uVar16 = *(uint *)(unaff_x22 + 0x18);
            unaff_w23 = iVar12 + 2;
            if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_074e9270;
              *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar21;
            }
            else {
              FUN_073869c4();
            }
          }
          if ((int)unaff_w23 < (int)uVar14) {
            psVar13 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
            lVar19 = *(long *)(unaff_x29 + -0x68) - (long)(int)unaff_w23;
            while (*psVar13 == 0x30) {
              if (DAT_095462cd == '\0') {
                FUN_0403162c(PTR_DAT_08f8ca68);
                DAT_095462cd = '\x01';
              }
              uVar16 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_074e9270;
                *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = 0x30;
              }
              else {
                FUN_073869c4();
              }
              lVar19 = lVar19 + -1;
              unaff_w23 = unaff_w23 + 1;
              psVar13 = psVar13 + 1;
              if (lVar19 == 0) goto LAB_074e9120;
            }
            uVar14 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
          }
        }
LAB_074e9060:
        uVar16 = 0;
      }
      else {
        if (uVar2 != 0x2030) goto LAB_074e89c8;
        if (lVar19 == 0) goto LAB_074e9288;
        lVar19 = *(long *)(lVar19 + 0x98);
LAB_074e8c10:
        if (DAT_09546f42 == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca68);
          DAT_09546f42 = '\x01';
        }
        if (lVar19 == 0) goto LAB_074e9288;
        if (*(int *)(lVar19 + 0x10) == 1) {
          uVar17 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar17 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar17 < *(uint *)(unaff_x22 + 0x10)) {
              lVar18 = *(long *)(unaff_x22 + 8);
              uVar7 = FUN_07363804(lVar19,0,0);
              *(undefined2 *)(lVar18 + (long)(int)uVar17 * 2) = uVar7;
              *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
              goto LAB_074e9064;
            }
            goto LAB_074e9270;
          }
        }
        FUN_07386af0();
      }
LAB_074e9064:
      if ((int)uVar14 <= (int)unaff_w23) goto LAB_074e9120;
      goto LAB_074e86d0;
    }
LAB_074e9120:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else {
    if (*(long *)(unaff_x29 + -0x40) != 0) {
      lVar19 = *(long *)(*(long *)(unaff_x29 + -0x40) + 0x30);
      if (DAT_09546f42 == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca68);
        DAT_09546f42 = '\x01';
      }
      if (lVar19 != 0) {
        if (*(int *)(lVar19 + 0x10) == 1) {
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar16) {
LAB_074e9270:
              if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              goto LAB_074e92a0;
            }
            lVar18 = *(long *)(unaff_x22 + 8);
            uVar7 = FUN_07363804(lVar19,0,0);
            *(undefined2 *)(lVar18 + (long)(int)uVar16 * 2) = uVar7;
            *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
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


