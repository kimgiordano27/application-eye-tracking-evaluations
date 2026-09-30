/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldSetPropertyValue
ENTRY_POINT: 050069d4
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue(void)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  short *psVar6;
  int unaff_w19;
  uint unaff_w20;
  int iVar7;
  ushort *puVar8;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  uint uVar9;
  long unaff_x24;
  long lVar10;
  short *unaff_x25;
  short sVar11;
  uint uVar12;
  ulong unaff_x26;
  long lVar13;
  int unaff_w28;
  uint uVar14;
  long unaff_x29;
  
code_r0x050069d4:
  if (((unaff_w20 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
    if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0500749c;
    if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
      if (unaff_x24 != 0) {
        lVar13 = *(long *)(unaff_x24 + 0x40);
        if (DAT_06a4f0a5 == '\0') {
          FUN_02d4dc40(PTR_DAT_06650d78);
          DAT_06a4f0a5 = '\x01';
        }
        if (lVar13 != 0) {
          if (*(int *)(lVar13 + 0x10) == 1) {
            uVar9 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar9) goto LAB_05006a84;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar9) {
LAB_0500749c:
              if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4def0();
              }
LAB_050074cc:
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            lVar10 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_04e7a3d8(lVar13,0,0);
            *(undefined2 *)(lVar10 + (long)(int)uVar9 * 2) = uVar4;
            unaff_x24 = *(long *)(unaff_x29 + -0x40);
            *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
          }
          else {
LAB_05006a84:
            FUN_04e98608();
          }
          unaff_w20 = *(uint *)(unaff_x29 + -0x20);
          unaff_w21 = unaff_w21 - 1;
          goto LAB_05006a9c;
        }
      }
LAB_050074b4:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_050074cc;
    }
  }
LAB_05006a9c:
  unaff_w28 = unaff_w28 + -1;
  unaff_w19 = unaff_w19 + -1;
  if (unaff_w28 < 2) {
    iVar7 = *(int *)(unaff_x29 + -0x34);
LAB_05006ab8:
    uVar12 = (uint)unaff_x26;
    *(int *)(unaff_x29 + -0x44) = iVar7;
    uVar9 = *(int *)(unaff_x29 + -0x24) + 1;
    uVar14 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
    if (uVar12 < 0x46) {
      if ((int)uVar12 < 0x27) {
        if ((int)uVar12 < 0x24) {
          if (uVar12 == 0x22) goto LAB_05006cec;
          if (uVar12 != 0x23) goto LAB_05006b74;
LAB_05006cd8:
          if (iVar7 < 0) {
            iVar7 = iVar7 + 1;
            if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_05007058:
              sVar11 = 0x30;
              goto LAB_0500705c;
            }
            *(int *)(unaff_x29 + -0x44) = iVar7;
          }
          else {
            sVar11 = *unaff_x25;
            if (sVar11 == 0) {
              if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_05007058;
            }
            else {
              unaff_x25 = unaff_x25 + 1;
LAB_0500705c:
              if (DAT_06a4e421 == '\0') {
                FUN_02d4dc40(PTR_DAT_06650d78);
                DAT_06a4e421 = '\x01';
              }
              uVar2 = *(uint *)(unaff_x22 + 0x18);
              uVar12 = *(uint *)(unaff_x22 + 0x10);
              *(int *)(unaff_x29 + -0x44) = iVar7;
              if ((int)uVar2 < (int)uVar12) {
                if (uVar12 <= uVar2) goto LAB_0500749c;
                *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar11;
              }
              else {
                FUN_04e984dc();
              }
              if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) &&
                 (-1 < (int)unaff_w21)) {
                if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0500749c;
                if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1)
                {
                  if (unaff_x24 == 0) goto LAB_050074b4;
                  lVar13 = *(long *)(unaff_x24 + 0x40);
                  if (DAT_06a4f0a5 == '\0') {
                    FUN_02d4dc40(PTR_DAT_06650d78);
                    DAT_06a4f0a5 = '\x01';
                  }
                  if (lVar13 == 0) goto LAB_050074b4;
                  if (*(int *)(lVar13 + 0x10) == 1) {
                    uVar12 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_05007228;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0500749c;
                    lVar10 = *(long *)(unaff_x22 + 8);
                    uVar4 = FUN_04e7a3d8(lVar13,0,0);
                    *(undefined2 *)(lVar10 + (long)(int)uVar12 * 2) = uVar4;
                    *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
                  }
                  else {
LAB_05007228:
                    FUN_04e98608();
                  }
                  unaff_w21 = unaff_w21 - 1;
                }
              }
            }
          }
          unaff_w19 = unaff_w19 + -1;
          goto LAB_05007290;
        }
        if (uVar12 == 0x24) goto LAB_05006bf4;
        if (uVar12 == 0x25) {
          if (unaff_x24 != 0) {
            lVar13 = *(long *)(unaff_x24 + 0x90);
            goto LAB_05006e3c;
          }
          goto LAB_050074b4;
        }
        if (uVar12 != 0x26) goto LAB_05006b74;
      }
      else if ((int)uVar12 < 0x2e) {
        if (uVar12 == 0x27) {
LAB_05006cec:
          if ((int)uVar9 < (int)uVar14) {
            lVar13 = (ulong)uVar9 << 0x20;
            puVar8 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2);
            uVar9 = ~*(uint *)(unaff_x29 + -0x24);
            while( true ) {
              uVar1 = *puVar8;
              if ((uVar1 == 0) || (uVar1 == uVar12)) break;
              if (DAT_06a4e421 == '\0') {
                FUN_02d4dc40(PTR_DAT_06650d78);
                DAT_06a4e421 = '\x01';
              }
              uVar14 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_0500749c;
                *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = uVar1;
              }
              else {
                FUN_04e984dc();
              }
              uVar9 = uVar9 - 1;
              puVar8 = puVar8 + 1;
              lVar13 = lVar13 + 0x100000000;
              if (*(uint *)(unaff_x29 + -0x70) == uVar9) goto LAB_0500734c;
            }
            uVar14 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
            uVar9 = (*(short *)((lVar13 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar9;
          }
          goto LAB_05007290;
        }
        if (uVar12 == 0x2c) goto LAB_05007290;
        if (uVar12 != 0x2d) goto LAB_05006b74;
      }
      else {
        if (uVar12 == 0x2e) {
          if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w19 != 0) goto LAB_05007290;
          if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
             ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*unaff_x25 != 0)))) {
            if (unaff_x24 == 0) goto LAB_050074b4;
            lVar13 = *(long *)(unaff_x24 + 0x38);
            if (DAT_06a4f0a5 == '\0') {
              FUN_02d4dc40(PTR_DAT_06650d78);
              DAT_06a4f0a5 = '\x01';
            }
            if (lVar13 == 0) goto LAB_050074b4;
            if (*(int *)(lVar13 + 0x10) == 1) {
              uVar12 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_0500732c;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0500749c;
              lVar10 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_04e7a3d8(lVar13,0,0);
              *(undefined2 *)(lVar10 + (long)(int)uVar12 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
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
        if (uVar12 != 0x2f) {
          if (uVar12 == 0x30) goto LAB_05006cd8;
LAB_05006b74:
          if (uVar12 == 0x45) goto LAB_05006b7c;
        }
      }
LAB_05006bf4:
      if (DAT_06a4e421 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        DAT_06a4e421 = '\x01';
      }
      uVar12 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0500749c;
        lVar13 = *(long *)(unaff_x22 + 8);
LAB_05006c38:
        *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
        *(short *)(lVar13 + (long)(int)uVar12 * 2) = (short)unaff_x26;
      }
      else {
LAB_05006c4c:
        FUN_04e984dc();
      }
    }
    else if (uVar12 == 0x5c) {
      if (((int)uVar9 < (int)uVar14) &&
         (sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2), sVar11 != 0)) {
        if (DAT_06a4e421 == '\0') {
          FUN_02d4dc40(PTR_DAT_06650d78);
          DAT_06a4e421 = '\x01';
        }
        uVar12 = *(uint *)(unaff_x22 + 0x18);
        uVar9 = *(int *)(unaff_x29 + -0x24) + 2;
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_05006c4c;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0500749c;
        *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar11;
      }
    }
    else if (uVar12 == 0x65) {
LAB_05006b7c:
      if ((unaff_x23 & 1) != 0) {
        if (((int)uVar9 < (int)uVar14) &&
           (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2) == 0x30)) {
          uVar5 = 0;
          uVar12 = *(int *)(unaff_x29 + -0x24) + 2;
          goto LAB_05006ba8;
        }
        uVar12 = *(int *)(unaff_x29 + -0x24) + 2;
        if ((int)uVar12 < (int)uVar14) {
          sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2);
          if (sVar11 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2) == 0x30) {
              uVar5 = 0;
              goto LAB_05006ba8;
            }
          }
          else if ((sVar11 == 0x2b) &&
                  (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2) == 0x30)) {
            uVar5 = 1;
LAB_05006ba8:
            uVar9 = uVar12;
            if ((int)uVar12 < (int)uVar14) {
              psVar6 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2);
              do {
                uVar9 = uVar12;
                if (*psVar6 != 0x30) break;
                uVar12 = uVar12 + 1;
                psVar6 = psVar6 + 1;
                uVar9 = uVar14;
              } while (uVar14 != uVar12);
            }
            if (*(int *)(*(long *)PTR_DAT_06656a10 + 0xe4) == 0) {
              *(undefined4 *)(unaff_x29 + -0x24) = uVar5;
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
        uVar12 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) {
          FUN_04e984dc();
          unaff_x23 = 1;
          goto LAB_05007290;
        }
        if (uVar12 < *(uint *)(unaff_x22 + 0x10)) {
          lVar13 = *(long *)(unaff_x22 + 8);
          unaff_x23 = 1;
          goto LAB_05006c38;
        }
        goto LAB_0500749c;
      }
      if (DAT_06a4e421 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        DAT_06a4e421 = '\x01';
      }
      uVar12 = *(uint *)(unaff_x22 + 0x18);
      iVar7 = *(int *)(unaff_x29 + -0x24);
      if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0500749c;
        *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = (short)unaff_x26;
      }
      else {
        FUN_04e984dc();
      }
      if ((int)uVar9 < (int)uVar14) {
        sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2);
        if ((sVar11 == 0x2d) || (sVar11 == 0x2b)) {
          if (DAT_06a4e421 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4e421 = '\x01';
          }
          uVar12 = *(uint *)(unaff_x22 + 0x18);
          uVar9 = iVar7 + 2;
          if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0500749c;
            *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar11;
          }
          else {
            FUN_04e984dc();
          }
        }
        if ((int)uVar9 < (int)uVar14) {
          psVar6 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2);
          lVar13 = *(long *)(unaff_x29 + -0x68) - (long)(int)uVar9;
          while (*psVar6 == 0x30) {
            if (DAT_06a4e421 == '\0') {
              FUN_02d4dc40(PTR_DAT_06650d78);
              DAT_06a4e421 = '\x01';
            }
            uVar12 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0500749c;
              *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
              *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = 0x30;
            }
            else {
              FUN_04e984dc();
            }
            lVar13 = lVar13 + -1;
            uVar9 = uVar9 + 1;
            psVar6 = psVar6 + 1;
            if (lVar13 == 0) goto LAB_0500734c;
          }
          uVar14 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
        }
      }
LAB_0500728c:
      unaff_x23 = 0;
    }
    else {
      if (uVar12 != 0x2030) goto LAB_05006bf4;
      if (unaff_x24 == 0) goto LAB_050074b4;
      lVar13 = *(long *)(unaff_x24 + 0x98);
LAB_05006e3c:
      if (DAT_06a4f0a5 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        DAT_06a4f0a5 = '\x01';
      }
      if (lVar13 == 0) goto LAB_050074b4;
      if (*(int *)(lVar13 + 0x10) == 1) {
        uVar12 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (uVar12 < *(uint *)(unaff_x22 + 0x10)) {
            lVar10 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_04e7a3d8(lVar13,0,0);
            *(undefined2 *)(lVar10 + (long)(int)uVar12 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
            goto LAB_05007290;
          }
          goto LAB_0500749c;
        }
      }
      FUN_04e98608();
    }
LAB_05007290:
    if ((int)uVar14 <= (int)uVar9) {
LAB_0500734c:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_050074cc;
    }
    uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2);
    unaff_x26 = (ulong)uVar1;
    if ((uVar1 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = uVar9, uVar1 == 0)) goto LAB_0500734c;
    iVar7 = *(int *)(unaff_x29 + -0x44);
    if (((0 < iVar7) && (uVar1 < 0x31)) && ((1L << (unaff_x26 & 0x3f) & 0x1400800000000U) != 0))
    goto code_r0x05006940;
    unaff_x24 = *(long *)(unaff_x29 + -0x40);
    goto LAB_05006ab8;
  }
  goto LAB_0500695c;
code_r0x05006940:
  unaff_w28 = iVar7 + 1;
  unaff_x24 = *(long *)(unaff_x29 + -0x40);
  if (0 < iVar7) {
    iVar7 = 1;
  }
  unaff_w20 = *(uint *)(unaff_x29 + -0x20);
  *(int *)(unaff_x29 + -0x34) = iVar7 + -1;
LAB_0500695c:
  sVar11 = *unaff_x25;
  sVar3 = 0x30;
  if (sVar11 != 0) {
    unaff_x25 = unaff_x25 + 1;
    sVar3 = sVar11;
  }
  if (DAT_06a4e421 == '\0') {
    FUN_02d4dc40(PTR_DAT_06650d78);
    DAT_06a4e421 = '\x01';
  }
  uVar9 = *(uint *)(unaff_x22 + 0x18);
  if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_0500749c;
    *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar3;
  }
  else {
    FUN_04e984dc();
  }
  goto code_r0x050069d4;
}


