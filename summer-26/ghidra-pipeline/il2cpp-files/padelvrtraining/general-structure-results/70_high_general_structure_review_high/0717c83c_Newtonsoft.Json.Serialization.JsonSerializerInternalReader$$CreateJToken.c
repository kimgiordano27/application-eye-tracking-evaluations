/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken
ENTRY_POINT: 0717c83c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int unaff_w19;
  uint uVar11;
  int unaff_w20;
  uint uVar12;
  short *psVar13;
  long unaff_x21;
  uint unaff_w22;
  short *psVar14;
  undefined8 unaff_x23;
  int iVar15;
  int iVar16;
  long lVar17;
  long unaff_x24;
  uint uVar18;
  undefined8 unaff_x25;
  short sVar19;
  uint uVar20;
  int unaff_w26;
  int unaff_w27;
  int unaff_w28;
  ushort *puVar21;
  long unaff_x29;
  undefined1 auVar22 [16];
  
  auVar22._8_8_ = param_3;
  auVar22._0_8_ = param_4;
  do {
    FUN_062be9b4(unaff_x29 + -0x18,auVar22._0_8_,auVar22._8_8_,*param_1);
    auVar22 = FUN_062beef0(unaff_x25,*(undefined8 *)PTR_DAT_091db0a0);
    uVar6 = auVar22._8_8_;
    lVar10 = *(long *)(unaff_x29 + -0x58);
    *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar22;
    do {
      if ((uint)uVar6 <= unaff_w22) goto LAB_0717c8d8;
      *(int *)(auVar22._0_8_ + (long)(int)unaff_w22 * 4) = unaff_w27;
      if ((int)unaff_x24 < unaff_w19) {
        unaff_x24 = (long)(int)unaff_x24 + 1;
        if (*(uint *)(lVar10 + 0x18) <= (uint)unaff_x24) goto LAB_0717c8d8;
        unaff_w26 = *(int *)(lVar10 + unaff_x24 * 4 + 0x20);
      }
      if ((unaff_w26 == 0) || (unaff_w27 = unaff_w26 + unaff_w27, unaff_w20 <= unaff_w27)) {
        uVar6 = FUN_07186bc8(*(undefined8 *)(unaff_x29 + -0x70),0);
        if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar6 & 1) != 0)) {
          if (*(long *)(unaff_x29 + -0x48) == 0) goto LAB_0717c8dc;
          lVar10 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
          if (DAT_09843015 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091fa408);
            DAT_09843015 = '\x01';
          }
          if (lVar10 == 0) goto LAB_0717c8dc;
          if (*(int *)(lVar10 + 0x10) == 1) {
            uVar11 = *(uint *)(unaff_x21 + 0x18);
            if ((int)uVar11 < (int)*(uint *)(unaff_x21 + 0x10)) {
              if (uVar11 < *(uint *)(unaff_x21 + 0x10)) {
                lVar17 = *(long *)(unaff_x21 + 8);
                uVar4 = FUN_06fcd2c8(lVar10,0,0);
                *(undefined2 *)(lVar17 + (long)(int)uVar11 * 2) = uVar4;
                *(uint *)(unaff_x21 + 0x18) = uVar11 + 1;
                goto LAB_0717bd34;
              }
              goto LAB_0717c8d8;
            }
          }
          FUN_06ff1720(unaff_x21,lVar10,0);
        }
LAB_0717bd34:
        uVar5 = FUN_0502844c(*(undefined8 *)(unaff_x29 + -0x28),unaff_x23,
                             *(undefined8 *)PTR_DAT_09208b68);
        *(undefined8 *)(unaff_x29 + -0x58) = uVar5;
        uVar11 = (uint)unaff_x23;
        if ((int)uVar11 <= *(int *)(unaff_x29 + -0x38)) goto LAB_0717c778;
        psVar14 = *(short **)(unaff_x29 + -0x30);
        *(undefined4 *)(unaff_x29 + -0x7c) = 0;
        *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
        *(uint *)(unaff_x29 + -0x8c) = uVar11 - 2;
        *(long *)(unaff_x29 + -0x88) = (long)(int)uVar11;
        goto LAB_0717bd84;
      }
      uVar11 = *(uint *)(unaff_x29 + -0x10);
      uVar6 = (ulong)uVar11;
      unaff_w22 = unaff_w22 + 1;
    } while ((int)unaff_w22 < (int)uVar11);
    unaff_x25 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a0fc8,uVar11 << 1);
    auVar22 = FUN_062beef0(unaff_x25,*(undefined8 *)PTR_DAT_091db0a0);
    param_1 = (undefined8 *)PTR_DAT_0920fbf8;
  } while( true );
LAB_0717bd84:
  do {
    uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
    if ((uVar2 == 0x3b) || (uVar2 == 0)) break;
    iVar16 = *(int *)(unaff_x29 + -0x4c);
    uVar20 = (uint)uVar2;
    if ((iVar16 < 1) || ((0x30 < uVar2 || ((1L << ((ulong)uVar20 & 0x3f) & 0x1400800000000U) == 0)))
       ) {
      lVar10 = *(long *)(unaff_x29 + -0x48);
    }
    else {
      lVar10 = *(long *)(unaff_x29 + -0x48);
      uVar18 = *(uint *)(unaff_x29 + -0x28);
      iVar15 = iVar16 + 1;
      *(int *)(unaff_x29 + -0x3c) = unaff_w28 - iVar16;
      do {
        sVar19 = *psVar14;
        sVar3 = 0x30;
        if (sVar19 != 0) {
          psVar14 = psVar14 + 1;
          sVar3 = sVar19;
        }
        if (DAT_09842200 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091fa408);
          DAT_09842200 = '\x01';
        }
        uVar12 = *(uint *)(unaff_x21 + 0x18);
        if ((int)uVar12 < (int)*(uint *)(unaff_x21 + 0x10)) {
          if (*(uint *)(unaff_x21 + 0x10) <= uVar12) goto LAB_0717c8d8;
          *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar12 * 2) = sVar3;
          *(uint *)(unaff_x21 + 0x18) = uVar12 + 1;
        }
        else {
          FUN_06ff15f4(unaff_x21,sVar3,0);
        }
        if ((-1 < (int)unaff_w22) && (1 < unaff_w28 && (uVar18 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_0717c8d8;
          if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w22 * 4) + 1) {
            if (lVar10 == 0) goto LAB_0717c8dc;
            lVar17 = *(long *)(lVar10 + 0x40);
            if (DAT_09843015 == '\0') {
              FUN_03d2d2b0(PTR_DAT_091fa408);
              DAT_09843015 = '\x01';
            }
            if (lVar17 == 0) goto LAB_0717c8dc;
            if (*(int *)(lVar17 + 0x10) == 1) {
              uVar18 = *(uint *)(unaff_x21 + 0x18);
              if ((int)*(uint *)(unaff_x21 + 0x10) <= (int)uVar18) goto LAB_0717bf08;
              if (*(uint *)(unaff_x21 + 0x10) <= uVar18) goto LAB_0717c8d8;
              lVar10 = *(long *)(unaff_x21 + 8);
              uVar4 = FUN_06fcd2c8(lVar17,0,0);
              *(undefined2 *)(lVar10 + (long)(int)uVar18 * 2) = uVar4;
              lVar10 = *(long *)(unaff_x29 + -0x48);
              *(uint *)(unaff_x21 + 0x18) = uVar18 + 1;
            }
            else {
LAB_0717bf08:
              FUN_06ff1720(unaff_x21,lVar17,0);
            }
            uVar18 = *(uint *)(unaff_x29 + -0x28);
            unaff_w22 = unaff_w22 - 1;
          }
        }
        iVar15 = iVar15 + -1;
        unaff_w28 = unaff_w28 + -1;
      } while (1 < iVar15);
      unaff_w28 = *(int *)(unaff_x29 + -0x3c);
      iVar16 = 0;
    }
    uVar18 = *(int *)(unaff_x29 + -0x38) + 1;
    if (uVar20 < 0x46) {
      switch(uVar2) {
      case 0x22:
      case 0x27:
        if ((int)uVar18 < (int)uVar11) {
          *(int *)(unaff_x29 + -0x3c) = unaff_w28;
          *(int *)(unaff_x29 + -0x4c) = iVar16;
          lVar10 = (ulong)uVar18 << 0x20;
          uVar12 = ~*(uint *)(unaff_x29 + -0x38);
          puVar21 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar18 * 2);
          lVar17 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar18;
          while( true ) {
            uVar2 = *puVar21;
            if ((uVar2 == 0) || (uVar2 == uVar20)) break;
            if (DAT_09842200 == '\0') {
              FUN_03d2d2b0(PTR_DAT_091fa408);
              DAT_09842200 = '\x01';
            }
            uVar18 = *(uint *)(unaff_x21 + 0x18);
            if ((int)uVar18 < (int)*(uint *)(unaff_x21 + 0x10)) {
              if (*(uint *)(unaff_x21 + 0x10) <= uVar18) goto LAB_0717c8d8;
              *(ushort *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar18 * 2) = uVar2;
              *(uint *)(unaff_x21 + 0x18) = uVar18 + 1;
            }
            else {
              FUN_06ff15f4(unaff_x21,uVar2,0);
            }
            lVar10 = lVar10 + 0x100000000;
            uVar12 = uVar12 - 1;
            lVar17 = lVar17 + -1;
            puVar21 = puVar21 + 1;
            if (lVar17 == 0) goto LAB_0717c778;
          }
          iVar16 = *(int *)(unaff_x29 + -0x4c);
          unaff_w28 = *(int *)(unaff_x29 + -0x3c);
          uVar18 = (*(short *)((lVar10 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar12;
        }
        break;
      case 0x23:
      case 0x30:
        if (iVar16 < 0) {
          iVar16 = iVar16 + 1;
          if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_0717c410:
            sVar19 = 0x30;
            goto LAB_0717c414;
          }
        }
        else {
          sVar19 = *psVar14;
          if (sVar19 == 0) {
            if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_0717c410;
          }
          else {
            psVar14 = psVar14 + 1;
LAB_0717c414:
            if (DAT_09842200 == '\0') {
              FUN_03d2d2b0(PTR_DAT_091fa408);
              DAT_09842200 = '\x01';
            }
            uVar12 = *(uint *)(unaff_x21 + 0x18);
            uVar20 = *(uint *)(unaff_x29 + -0x28);
            if ((int)uVar12 < (int)*(uint *)(unaff_x21 + 0x10)) {
              if (*(uint *)(unaff_x21 + 0x10) <= uVar12) goto LAB_0717c8d8;
              *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar12 * 2) = sVar19;
              *(uint *)(unaff_x21 + 0x18) = uVar12 + 1;
            }
            else {
              FUN_06ff15f4(unaff_x21,sVar19,0);
            }
            if ((-1 < (int)unaff_w22) && (1 < unaff_w28 && (uVar20 & 1) == 0)) {
              if (*(uint *)(unaff_x29 + -0x10) <= unaff_w22) goto LAB_0717c8d8;
              if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w22 * 4) + 1) {
                if (lVar10 == 0) {
LAB_0717c8dc:
                    /* WARNING: Subroutine does not return */
                  FUN_03d2d548();
                }
                lVar10 = *(long *)(lVar10 + 0x40);
                if (DAT_09843015 == '\0') {
                  FUN_03d2d2b0(PTR_DAT_091fa408);
                  DAT_09843015 = '\x01';
                }
                if (lVar10 == 0) goto LAB_0717c8dc;
                if (*(int *)(lVar10 + 0x10) == 1) {
                  uVar20 = *(uint *)(unaff_x21 + 0x18);
                  if ((int)*(uint *)(unaff_x21 + 0x10) <= (int)uVar20) goto LAB_0717c52c;
                  if (*(uint *)(unaff_x21 + 0x10) <= uVar20) {
LAB_0717c8d8:
                    /* WARNING: Subroutine does not return */
                    FUN_03d2d550();
                  }
                  lVar17 = *(long *)(unaff_x21 + 8);
                  uVar4 = FUN_06fcd2c8(lVar10,0,0);
                  *(undefined2 *)(lVar17 + (long)(int)uVar20 * 2) = uVar4;
                  *(uint *)(unaff_x21 + 0x18) = uVar20 + 1;
                }
                else {
LAB_0717c52c:
                  FUN_06ff1720(unaff_x21,lVar10,0);
                }
                unaff_w22 = unaff_w22 - 1;
              }
            }
          }
        }
        unaff_w28 = unaff_w28 + -1;
        break;
      case 0x24:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2d:
      case 0x2f:
switchD_0717bf70_caseD_24:
        if (DAT_09842200 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091fa408);
          DAT_09842200 = '\x01';
        }
        uVar12 = *(uint *)(unaff_x21 + 0x18);
        uVar20 = *(uint *)(unaff_x21 + 0x10);
        if ((int)uVar20 <= (int)uVar12) goto LAB_0717c12c;
LAB_0717c1c4:
        if (uVar20 <= uVar12) goto LAB_0717c8d8;
        *(ushort *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar12 * 2) = uVar2;
        *(uint *)(unaff_x21 + 0x18) = uVar12 + 1;
        break;
      case 0x25:
        if (lVar10 == 0) goto LAB_0717c8dc;
        lVar10 = *(long *)(lVar10 + 0x90);
joined_r0x0717c058:
        if (DAT_09843015 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091fa408);
          DAT_09843015 = '\x01';
        }
        if (lVar10 == 0) goto LAB_0717c8dc;
        if (*(int *)(lVar10 + 0x10) == 1) {
          uVar20 = *(uint *)(unaff_x21 + 0x18);
          if ((int)uVar20 < (int)*(uint *)(unaff_x21 + 0x10)) {
            if (uVar20 < *(uint *)(unaff_x21 + 0x10)) {
              lVar17 = *(long *)(unaff_x21 + 8);
              uVar4 = FUN_06fcd2c8(lVar10,0,0);
              *(undefined2 *)(lVar17 + (long)(int)uVar20 * 2) = uVar4;
              *(uint *)(unaff_x21 + 0x18) = uVar20 + 1;
              break;
            }
            goto LAB_0717c8d8;
          }
        }
        FUN_06ff1720(unaff_x21,lVar10,0);
        break;
      case 0x2c:
        break;
      case 0x2e:
        if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && unaff_w28 == 0) {
          if ((*(int *)(unaff_x29 + -0x74) < 0) ||
             ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar14 != 0)))) {
            if (lVar10 == 0) goto LAB_0717c8dc;
            lVar10 = *(long *)(lVar10 + 0x38);
            if (DAT_09843015 == '\0') {
              FUN_03d2d2b0(PTR_DAT_091fa408);
              DAT_09843015 = '\x01';
            }
            if (lVar10 == 0) goto LAB_0717c8dc;
            if (*(int *)(lVar10 + 0x10) == 1) {
              uVar20 = *(uint *)(unaff_x21 + 0x18);
              if ((int)uVar20 < (int)*(uint *)(unaff_x21 + 0x10)) {
                if (uVar20 < *(uint *)(unaff_x21 + 0x10)) {
                  lVar17 = *(long *)(unaff_x21 + 8);
                  uVar4 = FUN_06fcd2c8(lVar10,0,0);
                  *(undefined2 *)(lVar17 + (long)(int)uVar20 * 2) = uVar4;
                  *(uint *)(unaff_x21 + 0x18) = uVar20 + 1;
                  unaff_w28 = 0;
                  *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                  break;
                }
                goto LAB_0717c8d8;
              }
            }
            FUN_06ff1720(unaff_x21,lVar10,0);
            unaff_w28 = 0;
            *(undefined4 *)(unaff_x29 + -0x7c) = 1;
          }
          else {
            *(undefined4 *)(unaff_x29 + -0x7c) = 0;
            unaff_w28 = 0;
          }
        }
        break;
      default:
        if (uVar2 != 0x45) goto switchD_0717bf70_caseD_24;
LAB_0717c15c:
        if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
          iVar15 = *(int *)(unaff_x29 + -0x38);
          if (DAT_09842200 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091fa408);
            DAT_09842200 = '\x01';
          }
          uVar12 = *(uint *)(unaff_x21 + 0x18);
          if ((int)uVar12 < (int)*(uint *)(unaff_x21 + 0x10)) {
            if (*(uint *)(unaff_x21 + 0x10) <= uVar12) goto LAB_0717c8d8;
            *(ushort *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar12 * 2) = uVar2;
            *(uint *)(unaff_x21 + 0x18) = uVar12 + 1;
          }
          else {
            FUN_06ff15f4(unaff_x21,uVar20,0);
          }
          if ((int)uVar18 < (int)uVar11) {
            sVar19 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar18 * 2);
            if ((sVar19 == 0x2d) || (sVar19 == 0x2b)) {
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar20 = *(uint *)(unaff_x21 + 0x18);
              uVar18 = iVar15 + 2;
              if ((int)uVar20 < (int)*(uint *)(unaff_x21 + 0x10)) {
                if (*(uint *)(unaff_x21 + 0x10) <= uVar20) goto LAB_0717c8d8;
                *(short *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar20 * 2) = sVar19;
                *(uint *)(unaff_x21 + 0x18) = uVar20 + 1;
              }
              else {
                FUN_06ff15f4(unaff_x21,sVar19,0);
              }
            }
            if ((int)uVar18 < (int)uVar11) {
              psVar13 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar18 * 2);
              lVar10 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar18;
              while (*psVar13 == 0x30) {
                if (DAT_09842200 == '\0') {
                  FUN_03d2d2b0(PTR_DAT_091fa408);
                  DAT_09842200 = '\x01';
                }
                uVar20 = *(uint *)(unaff_x21 + 0x18);
                if ((int)uVar20 < (int)*(uint *)(unaff_x21 + 0x10)) {
                  if (*(uint *)(unaff_x21 + 0x10) <= uVar20) goto LAB_0717c8d8;
                  *(undefined2 *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar20 * 2) = 0x30;
                  *(uint *)(unaff_x21 + 0x18) = uVar20 + 1;
                }
                else {
                  FUN_06ff15f4(unaff_x21,0x30,0);
                }
                uVar18 = uVar18 + 1;
                lVar10 = lVar10 + -1;
                psVar13 = psVar13 + 1;
                if (lVar10 == 0) goto LAB_0717c778;
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 0;
              break;
            }
          }
        }
        else {
          iVar15 = *(int *)(unaff_x29 + -0x38);
          if (((int)uVar18 < (int)uVar11) &&
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar18 * 2) == 0x30)) {
            uVar7 = 0;
            iVar8 = 1;
            goto LAB_0717c644;
          }
          iVar8 = iVar15 + 2;
          if ((int)uVar11 <= iVar8) {
LAB_0717c684:
            if (DAT_09842200 == '\0') {
              FUN_03d2d2b0(PTR_DAT_091fa408);
              DAT_09842200 = '\x01';
            }
            uVar20 = *(uint *)(unaff_x21 + 0x18);
            if ((int)uVar20 < (int)*(uint *)(unaff_x21 + 0x10)) {
              if (*(uint *)(unaff_x21 + 0x10) <= uVar20) goto LAB_0717c8d8;
              *(ushort *)(*(long *)(unaff_x21 + 8) + (long)(int)uVar20 * 2) = uVar2;
              *(uint *)(unaff_x21 + 0x18) = uVar20 + 1;
            }
            else {
              FUN_06ff15f4(unaff_x21,uVar2,0);
            }
            *(undefined4 *)(unaff_x29 + -0x5c) = 1;
            break;
          }
          sVar19 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar18 * 2);
          if (sVar19 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30)
            goto LAB_0717c684;
            iVar8 = 0;
            uVar7 = 0;
          }
          else {
            if ((sVar19 != 0x2b) ||
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30))
            goto LAB_0717c684;
            iVar8 = 0;
            uVar7 = 1;
          }
LAB_0717c644:
          uVar20 = iVar15 + 2;
          iVar9 = iVar8;
          uVar18 = uVar20;
          if ((int)uVar20 < (int)uVar11) {
            iVar1 = *(int *)(unaff_x29 + -0x8c) + iVar8;
            do {
              iVar9 = iVar8;
              uVar18 = uVar20;
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2) != 0x30) break;
              uVar20 = uVar20 + 1;
              iVar8 = iVar8 + 1;
              iVar9 = iVar1 - iVar15;
              uVar18 = uVar11;
            } while (uVar11 != uVar20);
          }
          if (9 < iVar9) {
            iVar9 = 10;
          }
          if (**(short **)(unaff_x29 + -0x30) == 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
          }
          if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
            *(undefined4 *)(unaff_x29 + -0x38) = uVar7;
            thunk_FUN_03db619c();
            uVar7 = *(undefined4 *)(unaff_x29 + -0x38);
          }
          FUN_07181720(unaff_x21,*(undefined8 *)(unaff_x29 + -0x48),iVar15,uVar2,iVar9,uVar7);
        }
        *(undefined4 *)(unaff_x29 + -0x5c) = 0;
      }
    }
    else {
      if (uVar2 != 0x5c) {
        if (uVar2 == 0x65) goto LAB_0717c15c;
        if (uVar2 != 0x2030) goto switchD_0717bf70_caseD_24;
        if (lVar10 != 0) {
          lVar10 = *(long *)(lVar10 + 0x98);
          goto joined_r0x0717c058;
        }
        goto LAB_0717c8dc;
      }
      if (((int)uVar11 <= (int)uVar18) ||
         (uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar18 * 2), uVar2 == 0))
      goto switchD_0717bf70_caseD_2c;
      if (DAT_09842200 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091fa408);
        DAT_09842200 = '\x01';
      }
      uVar12 = *(uint *)(unaff_x21 + 0x18);
      uVar20 = *(uint *)(unaff_x21 + 0x10);
      uVar18 = *(int *)(unaff_x29 + -0x38) + 2;
      if ((int)uVar12 < (int)uVar20) goto LAB_0717c1c4;
LAB_0717c12c:
      FUN_06ff15f4(unaff_x21,uVar2,0);
    }
switchD_0717bf70_caseD_2c:
    *(int *)(unaff_x29 + -0x4c) = iVar16;
    *(uint *)(unaff_x29 + -0x38) = uVar18;
  } while ((int)uVar18 < (int)uVar11);
LAB_0717c778:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


