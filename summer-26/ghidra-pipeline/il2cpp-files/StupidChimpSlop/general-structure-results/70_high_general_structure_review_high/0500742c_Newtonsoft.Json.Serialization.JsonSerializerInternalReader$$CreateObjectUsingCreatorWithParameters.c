/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters
ENTRY_POINT: 0500742c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
               (undefined **param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  undefined *puVar5;
  undefined2 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  short *psVar11;
  long lVar12;
  int unaff_w19;
  uint uVar13;
  undefined4 unaff_w20;
  ushort *puVar14;
  uint uVar15;
  int unaff_w21;
  long unaff_x22;
  uint uVar16;
  uint unaff_w23;
  uint uVar17;
  long lVar18;
  long unaff_x24;
  short *psVar19;
  undefined8 unaff_x25;
  short sVar20;
  undefined4 unaff_w26;
  undefined8 uVar21;
  int unaff_w27;
  int iVar22;
  int unaff_w28;
  long unaff_x29;
  undefined1 auVar23 [16];
  
  do {
    auVar23 = FUN_03c46940(unaff_x25,*(undefined8 *)param_1[6]);
    uVar7 = auVar23._8_8_;
    iVar10 = *(int *)(unaff_x29 + -0x74);
    lVar12 = *(long *)(unaff_x29 + -0x70);
    uVar15 = *(uint *)(unaff_x29 + -0x58);
    *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar23;
    do {
      if ((uint)uVar7 <= uVar15) goto LAB_0500749c;
      *(int *)(auVar23._0_8_ + (long)(int)uVar15 * 4) = unaff_w28;
      puVar5 = PTR_DAT_06646fe8;
      if ((int)unaff_x24 < unaff_w21) {
        unaff_x24 = (long)(int)unaff_x24 + 1;
        if (*(uint *)(lVar12 + 0x18) <= (uint)unaff_x24) goto LAB_0500749c;
        unaff_w27 = *(int *)(lVar12 + unaff_x24 * 4 + 0x20);
      }
      if ((unaff_w27 == 0) || (unaff_w28 = unaff_w27 + unaff_w28, iVar10 <= unaff_w28)) {
        *(undefined4 *)(unaff_x29 + -0x5c) = unaff_w26;
        *(undefined4 *)(unaff_x29 + -0x94) = unaff_w20;
        uVar7 = FUN_05011ef8(*(undefined8 *)(unaff_x29 + -0x80),0);
        uVar21 = *(undefined8 *)(unaff_x29 + -0x50);
        if (((uVar7 & 1) != 0) && (unaff_w23 == 0)) {
          if (*(long *)(unaff_x29 + -0x40) == 0) goto LAB_050074b4;
          lVar12 = *(long *)(*(long *)(unaff_x29 + -0x40) + 0x30);
          if (DAT_06a4f0a5 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4f0a5 = '\x01';
          }
          if (lVar12 == 0) goto LAB_050074b4;
          if (*(int *)(lVar12 + 0x10) == 1) {
            uVar16 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar16 < *(uint *)(unaff_x22 + 0x10)) {
                lVar18 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_04e7a3d8(lVar12,0,0);
                *(undefined2 *)(lVar18 + (long)(int)uVar16 * 2) = uVar6;
                *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
                goto LAB_050068b0;
              }
              goto LAB_0500749c;
            }
          }
          FUN_04e98608();
        }
LAB_050068b0:
        uVar8 = FUN_0329f284(*(undefined8 *)(unaff_x29 + -0x20),uVar21,
                             *(undefined8 *)PTR_DAT_06650828);
        uVar16 = *(uint *)(unaff_x29 + -0x24);
        *(undefined8 *)(unaff_x29 + -0x58) = uVar8;
        if ((int)uVar21 <= (int)unaff_w23) goto LAB_0500734c;
        psVar19 = *(short **)(unaff_x29 + -0x30);
        *(uint *)(unaff_x29 + -0x20) = *(uint *)(unaff_x29 + -0x34) ^ 1;
        iVar10 = (int)*(undefined8 *)(unaff_x29 + -0x50);
        *(int *)(unaff_x29 + -0x98) = iVar10 + -2;
        *(undefined4 *)(unaff_x29 + -0x74) = 0;
        *(int *)(unaff_x29 + -0x70) = -iVar10;
        goto LAB_050068fc;
      }
      uVar16 = *(uint *)(unaff_x29 + -0x10);
      uVar7 = (ulong)uVar16;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar16);
    *(uint *)(unaff_x29 + -0x58) = uVar15;
    unaff_x25 = FUN_02d4dd2c(*(undefined8 *)puVar5,uVar16 << 1);
    auVar23 = FUN_03c46940(unaff_x25,*(undefined8 *)PTR_DAT_0665a030);
    FUN_03c4642c(unaff_x29 + -0x18,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)PTR_DAT_0665a020);
    param_1 = &PTR_DAT_0665a000;
  } while( true );
LAB_050068fc:
  uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
  if ((uVar2 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = unaff_w23, uVar2 == 0)) goto LAB_0500734c;
  iVar10 = *(int *)(unaff_x29 + -0x44);
  if ((iVar10 < 1) || ((0x30 < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x1400800000000U) == 0)))) {
    lVar12 = *(long *)(unaff_x29 + -0x40);
  }
  else {
    iVar22 = iVar10 + 1;
    lVar12 = *(long *)(unaff_x29 + -0x40);
    if (0 < iVar10) {
      iVar10 = 1;
    }
    uVar13 = *(uint *)(unaff_x29 + -0x20);
    *(int *)(unaff_x29 + -0x34) = iVar10 + -1;
    do {
      sVar20 = *psVar19;
      sVar4 = 0x30;
      if (sVar20 != 0) {
        psVar19 = psVar19 + 1;
        sVar4 = sVar20;
      }
      if (DAT_06a4e421 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        DAT_06a4e421 = '\x01';
      }
      uVar17 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar17 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_0500749c;
        *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar17 * 2) = sVar4;
      }
      else {
        FUN_04e984dc();
      }
      if (((uVar13 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)uVar15)) {
        if (*(uint *)(unaff_x29 + -0x10) <= uVar15) goto LAB_0500749c;
        if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar15 * 4) + 1) {
          if (lVar12 == 0) goto LAB_050074b4;
          lVar18 = *(long *)(lVar12 + 0x40);
          if (DAT_06a4f0a5 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4f0a5 = '\x01';
          }
          if (lVar18 == 0) goto LAB_050074b4;
          if (*(int *)(lVar18 + 0x10) == 1) {
            uVar13 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar13) goto LAB_05006a84;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar13) goto LAB_0500749c;
            lVar12 = *(long *)(unaff_x22 + 8);
            uVar6 = FUN_04e7a3d8(lVar18,0,0);
            *(undefined2 *)(lVar12 + (long)(int)uVar13 * 2) = uVar6;
            lVar12 = *(long *)(unaff_x29 + -0x40);
            *(uint *)(unaff_x22 + 0x18) = uVar13 + 1;
          }
          else {
LAB_05006a84:
            FUN_04e98608();
          }
          uVar13 = *(uint *)(unaff_x29 + -0x20);
          uVar15 = uVar15 - 1;
        }
      }
      iVar22 = iVar22 + -1;
      unaff_w19 = unaff_w19 + -1;
    } while (1 < iVar22);
    iVar10 = *(int *)(unaff_x29 + -0x34);
  }
  *(int *)(unaff_x29 + -0x44) = iVar10;
  unaff_w23 = *(int *)(unaff_x29 + -0x24) + 1;
  uVar13 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
  if (uVar2 < 0x46) {
    if (uVar2 < 0x27) {
      if (uVar2 < 0x24) {
        if (uVar2 == 0x22) goto LAB_05006cec;
        if (uVar2 != 0x23) goto LAB_05006b74;
LAB_05006cd8:
        if (iVar10 < 0) {
          iVar10 = iVar10 + 1;
          if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_05007058:
            sVar20 = 0x30;
            goto LAB_0500705c;
          }
          *(int *)(unaff_x29 + -0x44) = iVar10;
        }
        else {
          sVar20 = *psVar19;
          if (sVar20 == 0) {
            if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_05007058;
          }
          else {
            psVar19 = psVar19 + 1;
LAB_0500705c:
            if (DAT_06a4e421 == '\0') {
              FUN_02d4dc40(PTR_DAT_06650d78);
              DAT_06a4e421 = '\x01';
            }
            uVar3 = *(uint *)(unaff_x22 + 0x18);
            uVar17 = *(uint *)(unaff_x22 + 0x10);
            *(int *)(unaff_x29 + -0x44) = iVar10;
            if ((int)uVar3 < (int)uVar17) {
              if (uVar17 <= uVar3) goto LAB_0500749c;
              *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = sVar20;
            }
            else {
              FUN_04e984dc();
            }
            if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) && (-1 < (int)uVar15)) {
              if (*(uint *)(unaff_x29 + -0x10) <= uVar15) goto LAB_0500749c;
              if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar15 * 4) + 1) {
                if (lVar12 == 0) goto LAB_050074b4;
                lVar12 = *(long *)(lVar12 + 0x40);
                if (DAT_06a4f0a5 == '\0') {
                  FUN_02d4dc40(PTR_DAT_06650d78);
                  DAT_06a4f0a5 = '\x01';
                }
                if (lVar12 == 0) goto LAB_050074b4;
                if (*(int *)(lVar12 + 0x10) == 1) {
                  uVar17 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar17) goto LAB_05007228;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_0500749c;
                  lVar18 = *(long *)(unaff_x22 + 8);
                  uVar6 = FUN_04e7a3d8(lVar12,0,0);
                  *(undefined2 *)(lVar18 + (long)(int)uVar17 * 2) = uVar6;
                  *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
                }
                else {
LAB_05007228:
                  FUN_04e98608();
                }
                uVar15 = uVar15 - 1;
              }
            }
          }
        }
        unaff_w19 = unaff_w19 + -1;
        goto LAB_05007290;
      }
      if (uVar2 == 0x24) goto LAB_05006bf4;
      if (uVar2 == 0x25) {
        if (lVar12 != 0) {
          lVar12 = *(long *)(lVar12 + 0x90);
          goto LAB_05006e3c;
        }
        goto LAB_050074b4;
      }
      if (uVar2 != 0x26) goto LAB_05006b74;
    }
    else if (uVar2 < 0x2e) {
      if (uVar2 == 0x27) {
LAB_05006cec:
        if ((int)unaff_w23 < (int)uVar13) {
          lVar12 = (ulong)unaff_w23 << 0x20;
          puVar14 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
          uVar17 = ~*(uint *)(unaff_x29 + -0x24);
          while ((uVar1 = *puVar14, uVar1 != 0 && (uVar1 != uVar2))) {
            if (DAT_06a4e421 == '\0') {
              FUN_02d4dc40(PTR_DAT_06650d78);
              DAT_06a4e421 = '\x01';
            }
            uVar13 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar13 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar13) goto LAB_0500749c;
              *(uint *)(unaff_x22 + 0x18) = uVar13 + 1;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar13 * 2) = uVar1;
            }
            else {
              FUN_04e984dc();
            }
            uVar17 = uVar17 - 1;
            puVar14 = puVar14 + 1;
            lVar12 = lVar12 + 0x100000000;
            if (*(uint *)(unaff_x29 + -0x70) == uVar17) goto LAB_0500734c;
          }
          uVar13 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
          unaff_w23 = (*(short *)((lVar12 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar17;
        }
        goto LAB_05007290;
      }
      if (uVar2 == 0x2c) goto LAB_05007290;
      if (uVar2 != 0x2d) goto LAB_05006b74;
    }
    else {
      if (uVar2 == 0x2e) {
        if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w19 != 0) goto LAB_05007290;
        if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
           ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*psVar19 != 0)))) {
          if (lVar12 == 0) goto LAB_050074b4;
          lVar12 = *(long *)(lVar12 + 0x38);
          if (DAT_06a4f0a5 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4f0a5 = '\x01';
          }
          if (lVar12 == 0) goto LAB_050074b4;
          if (*(int *)(lVar12 + 0x10) == 1) {
            uVar17 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar17) goto LAB_0500732c;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_0500749c;
            lVar18 = *(long *)(unaff_x22 + 8);
            uVar6 = FUN_04e7a3d8(lVar12,0,0);
            *(undefined2 *)(lVar18 + (long)(int)uVar17 * 2) = uVar6;
            *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          }
          else {
LAB_0500732c:
            FUN_04e98608();
          }
          unaff_w19 = 0;
          *(undefined4 *)(unaff_x29 + -0x74) = 1;
        }
        else {
          *(undefined4 *)(unaff_x29 + -0x74) = 0;
          unaff_w19 = 0;
        }
        goto LAB_05007290;
      }
      if (uVar2 != 0x2f) {
        if (uVar2 == 0x30) goto LAB_05006cd8;
LAB_05006b74:
        if (uVar2 == 0x45) goto LAB_05006b7c;
      }
    }
LAB_05006bf4:
    if (DAT_06a4e421 == '\0') {
      FUN_02d4dc40(PTR_DAT_06650d78);
      DAT_06a4e421 = '\x01';
    }
    uVar17 = *(uint *)(unaff_x22 + 0x18);
    if ((int)uVar17 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_0500749c;
      lVar12 = *(long *)(unaff_x22 + 8);
LAB_05006c38:
      *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
      *(ushort *)(lVar12 + (long)(int)uVar17 * 2) = uVar2;
    }
    else {
LAB_05006c4c:
      FUN_04e984dc();
    }
  }
  else if (uVar2 == 0x5c) {
    if (((int)unaff_w23 < (int)uVar13) &&
       (sVar20 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2), sVar20 != 0))
    {
      if (DAT_06a4e421 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        DAT_06a4e421 = '\x01';
      }
      uVar17 = *(uint *)(unaff_x22 + 0x18);
      unaff_w23 = *(int *)(unaff_x29 + -0x24) + 2;
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar17) goto LAB_05006c4c;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_0500749c;
      *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar17 * 2) = sVar20;
    }
  }
  else if (uVar2 == 0x65) {
LAB_05006b7c:
    if ((uVar16 & 1) != 0) {
      if (((int)unaff_w23 < (int)uVar13) &&
         (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2) == 0x30)) {
        uVar9 = 0;
        uVar16 = *(int *)(unaff_x29 + -0x24) + 2;
        goto LAB_05006ba8;
      }
      uVar16 = *(int *)(unaff_x29 + -0x24) + 2;
      if ((int)uVar16 < (int)uVar13) {
        sVar20 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
        if (sVar20 == 0x2d) {
          if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar16 * 2) == 0x30) {
            uVar9 = 0;
            goto LAB_05006ba8;
          }
        }
        else if ((sVar20 == 0x2b) &&
                (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar16 * 2) == 0x30)) {
          uVar9 = 1;
LAB_05006ba8:
          unaff_w23 = uVar16;
          if ((int)uVar16 < (int)uVar13) {
            psVar11 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar16 * 2);
            do {
              unaff_w23 = uVar16;
              if (*psVar11 != 0x30) break;
              uVar16 = uVar16 + 1;
              psVar11 = psVar11 + 1;
              unaff_w23 = uVar13;
            } while (uVar13 != uVar16);
          }
          if (*(int *)(*(long *)PTR_DAT_06656a10 + 0xe4) == 0) {
            *(undefined4 *)(unaff_x29 + -0x24) = uVar9;
            thunk_FUN_02dabd98();
          }
          FUN_0500c738();
          goto LAB_0500728c;
        }
      }
      if (DAT_06a4e421 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        DAT_06a4e421 = '\x01';
      }
      uVar17 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar17) {
        FUN_04e984dc();
        uVar16 = 1;
        goto LAB_05007290;
      }
      if (uVar17 < *(uint *)(unaff_x22 + 0x10)) {
        lVar12 = *(long *)(unaff_x22 + 8);
        uVar16 = 1;
        goto LAB_05006c38;
      }
      goto LAB_0500749c;
    }
    if (DAT_06a4e421 == '\0') {
      FUN_02d4dc40(PTR_DAT_06650d78);
      DAT_06a4e421 = '\x01';
    }
    uVar16 = *(uint *)(unaff_x22 + 0x18);
    iVar10 = *(int *)(unaff_x29 + -0x24);
    if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_0500749c;
      *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
      *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = uVar2;
    }
    else {
      FUN_04e984dc();
    }
    if ((int)unaff_w23 < (int)uVar13) {
      sVar20 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
      if ((sVar20 == 0x2d) || (sVar20 == 0x2b)) {
        if (DAT_06a4e421 == '\0') {
          FUN_02d4dc40(PTR_DAT_06650d78);
          DAT_06a4e421 = '\x01';
        }
        uVar16 = *(uint *)(unaff_x22 + 0x18);
        unaff_w23 = iVar10 + 2;
        if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_0500749c;
          *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar20;
        }
        else {
          FUN_04e984dc();
        }
      }
      if ((int)unaff_w23 < (int)uVar13) {
        psVar11 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
        lVar12 = *(long *)(unaff_x29 + -0x68) - (long)(int)unaff_w23;
        while (*psVar11 == 0x30) {
          if (DAT_06a4e421 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4e421 = '\x01';
          }
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_0500749c;
            *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
            *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = 0x30;
          }
          else {
            FUN_04e984dc();
          }
          lVar12 = lVar12 + -1;
          unaff_w23 = unaff_w23 + 1;
          psVar11 = psVar11 + 1;
          if (lVar12 == 0) goto LAB_0500734c;
        }
        uVar13 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
      }
    }
LAB_0500728c:
    uVar16 = 0;
  }
  else {
    if (uVar2 != 0x2030) goto LAB_05006bf4;
    if (lVar12 == 0) goto LAB_050074b4;
    lVar12 = *(long *)(lVar12 + 0x98);
LAB_05006e3c:
    if (DAT_06a4f0a5 == '\0') {
      FUN_02d4dc40(PTR_DAT_06650d78);
      DAT_06a4f0a5 = '\x01';
    }
    if (lVar12 == 0) goto LAB_050074b4;
    if (*(int *)(lVar12 + 0x10) == 1) {
      uVar17 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar17 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (uVar17 < *(uint *)(unaff_x22 + 0x10)) {
          lVar18 = *(long *)(unaff_x22 + 8);
          uVar6 = FUN_04e7a3d8(lVar12,0,0);
          *(undefined2 *)(lVar18 + (long)(int)uVar17 * 2) = uVar6;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          goto LAB_05007290;
        }
        goto LAB_0500749c;
      }
    }
    FUN_04e98608();
  }
LAB_05007290:
  if ((int)uVar13 <= (int)unaff_w23) goto LAB_0500734c;
  goto LAB_050068fc;
LAB_050074b4:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  goto LAB_050074cc;
LAB_0500749c:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
  goto LAB_050074cc;
LAB_0500734c:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_050074cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


