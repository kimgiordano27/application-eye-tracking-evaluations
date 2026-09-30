/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasFlag
ENTRY_POINT: 05006ad0
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasFlag(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  short *psVar7;
  int unaff_w19;
  uint uVar8;
  int unaff_w20;
  ushort *puVar9;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long lVar10;
  long unaff_x24;
  short *unaff_x25;
  short sVar11;
  uint uVar12;
  ulong unaff_x26;
  int iVar13;
  long lVar14;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  
code_r0x05006ad0:
  uVar12 = (uint)unaff_x26;
  if ((int)uVar12 < 0x27) {
    if (0x23 < (int)uVar12) {
      if (uVar12 == 0x24) goto LAB_05006bf4;
      if (uVar12 != 0x25) {
        if (uVar12 == 0x26) goto LAB_05006bf4;
LAB_05006b74:
        if (uVar12 != 0x45) goto LAB_05006bf4;
        goto LAB_05006b7c;
      }
      if (unaff_x24 != 0) {
        lVar14 = *(long *)(unaff_x24 + 0x90);
        goto LAB_05006e3c;
      }
      goto LAB_050074b4;
    }
    if (uVar12 != 0x22) {
      if (uVar12 != 0x23) goto LAB_05006b74;
      goto LAB_05006cd8;
    }
  }
  else {
    if (0x2d < (int)uVar12) {
      if (uVar12 == 0x2e) {
        if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w19 != 0) goto LAB_05007290;
        if ((-1 < *(int *)(unaff_x29 + -0x8c)) &&
           ((*(int *)(unaff_x29 + -0x94) <= *(int *)(unaff_x29 + -0x5c) || (*unaff_x25 == 0)))) {
          *(undefined4 *)(unaff_x29 + -0x74) = 0;
          unaff_w19 = 0;
          goto LAB_05007290;
        }
        if (unaff_x24 != 0) {
          lVar14 = *(long *)(unaff_x24 + 0x38);
          if (DAT_06a4f0a5 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4f0a5 = '\x01';
          }
          if (lVar14 != 0) {
            if (*(int *)(lVar14 + 0x10) == 1) {
              uVar12 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_0500732c;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0500749c;
              lVar10 = *(long *)(unaff_x22 + 8);
              uVar5 = FUN_04e7a3d8(lVar14,0,0);
              *(undefined2 *)(lVar10 + (long)(int)uVar12 * 2) = uVar5;
              *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
            }
            else {
LAB_0500732c:
              FUN_04e98608();
            }
            unaff_w19 = 0;
            *(undefined4 *)(unaff_x29 + -0x74) = 1;
            goto LAB_05007290;
          }
        }
        goto LAB_050074b4;
      }
      if (uVar12 == 0x2f) goto LAB_05006bf4;
      if (uVar12 != 0x30) goto LAB_05006b74;
LAB_05006cd8:
      if (unaff_w20 < 0) {
        unaff_w20 = unaff_w20 + 1;
        if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_05007058:
          sVar11 = 0x30;
          goto LAB_0500705c;
        }
        *(int *)(unaff_x29 + -0x44) = unaff_w20;
      }
      else {
        sVar11 = *unaff_x25;
        if (sVar11 != 0) {
          unaff_x25 = unaff_x25 + 1;
LAB_0500705c:
          if (DAT_06a4e421 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4e421 = '\x01';
          }
          uVar8 = *(uint *)(unaff_x22 + 0x18);
          uVar12 = *(uint *)(unaff_x22 + 0x10);
          *(int *)(unaff_x29 + -0x44) = unaff_w20;
          if ((int)uVar8 < (int)uVar12) {
            if (uVar8 < uVar12) {
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar11;
              goto LAB_050070c0;
            }
LAB_0500749c:
            if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
          }
          else {
            FUN_04e984dc();
LAB_050070c0:
            if (((*(uint *)(unaff_x29 + -0x20) & 1) != 0 || unaff_w19 < 2) || ((int)unaff_w21 < 0))
            goto LAB_0500723c;
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0500749c;
            if (unaff_w19 != *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1)
            goto LAB_0500723c;
            if (unaff_x24 != 0) {
              lVar14 = *(long *)(unaff_x24 + 0x40);
              if (DAT_06a4f0a5 == '\0') {
                FUN_02d4dc40(PTR_DAT_06650d78);
                DAT_06a4f0a5 = '\x01';
              }
              if (lVar14 != 0) {
                if (*(int *)(lVar14 + 0x10) == 1) {
                  uVar12 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_05007228;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0500749c;
                  lVar10 = *(long *)(unaff_x22 + 8);
                  uVar5 = FUN_04e7a3d8(lVar14,0,0);
                  *(undefined2 *)(lVar10 + (long)(int)uVar12 * 2) = uVar5;
                  *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
                }
                else {
LAB_05007228:
                  FUN_04e98608();
                }
                unaff_w21 = unaff_w21 - 1;
                goto LAB_0500723c;
              }
            }
LAB_050074b4:
            if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
          }
          goto LAB_050074cc;
        }
        if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_05007058;
      }
LAB_0500723c:
      unaff_w19 = unaff_w19 + -1;
      goto LAB_05007290;
    }
    if (uVar12 != 0x27) {
      if (uVar12 != 0x2c) {
        if (uVar12 == 0x2d) goto LAB_05006bf4;
        goto LAB_05006b74;
      }
      goto LAB_05007290;
    }
  }
  if ((int)unaff_x27 < (int)unaff_x28) {
    lVar14 = unaff_x27 << 0x20;
    puVar9 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_x27 * 2);
    uVar8 = ~*(uint *)(unaff_x29 + -0x24);
    while( true ) {
      uVar2 = *puVar9;
      if ((uVar2 == 0) || (uVar2 == uVar12)) break;
      if (DAT_06a4e421 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        DAT_06a4e421 = '\x01';
      }
      uVar3 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar3 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar3) goto LAB_0500749c;
        *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
        *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = uVar2;
      }
      else {
        FUN_04e984dc();
      }
      uVar8 = uVar8 - 1;
      puVar9 = puVar9 + 1;
      lVar14 = lVar14 + 0x100000000;
      if (*(uint *)(unaff_x29 + -0x70) == uVar8) goto LAB_0500734c;
    }
    unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
    unaff_x27 = (ulong)((*(short *)((lVar14 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar8);
  }
LAB_05007290:
  iVar13 = (int)unaff_x27;
  if ((int)unaff_x28 <= iVar13) goto LAB_0500734c;
  uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2);
  unaff_x26 = (ulong)uVar2;
  uVar12 = (uint)uVar2;
  if ((uVar2 == 0x3b) || (*(int *)(unaff_x29 + -0x24) = iVar13, uVar2 == 0)) goto LAB_0500734c;
  unaff_w20 = *(int *)(unaff_x29 + -0x44);
  if ((unaff_w20 < 1) || ((0x30 < uVar2 || ((1L << (unaff_x26 & 0x3f) & 0x1400800000000U) == 0)))) {
    unaff_x24 = *(long *)(unaff_x29 + -0x40);
  }
  else {
    iVar13 = unaff_w20 + 1;
    unaff_x24 = *(long *)(unaff_x29 + -0x40);
    if (0 < unaff_w20) {
      unaff_w20 = 1;
    }
    uVar8 = *(uint *)(unaff_x29 + -0x20);
    *(int *)(unaff_x29 + -0x34) = unaff_w20 + -1;
    do {
      sVar11 = *unaff_x25;
      sVar4 = 0x30;
      if (sVar11 != 0) {
        unaff_x25 = unaff_x25 + 1;
        sVar4 = sVar11;
      }
      if (DAT_06a4e421 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        DAT_06a4e421 = '\x01';
      }
      uVar3 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar3 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar3) goto LAB_0500749c;
        *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = sVar4;
      }
      else {
        FUN_04e984dc();
      }
      if (((uVar8 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0500749c;
        if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
          if (unaff_x24 == 0) goto LAB_050074b4;
          lVar14 = *(long *)(unaff_x24 + 0x40);
          if (DAT_06a4f0a5 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4f0a5 = '\x01';
          }
          if (lVar14 == 0) goto LAB_050074b4;
          if (*(int *)(lVar14 + 0x10) == 1) {
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_05006a84;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
            lVar10 = *(long *)(unaff_x22 + 8);
            uVar5 = FUN_04e7a3d8(lVar14,0,0);
            *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar5;
            unaff_x24 = *(long *)(unaff_x29 + -0x40);
            *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
          }
          else {
LAB_05006a84:
            FUN_04e98608();
          }
          uVar8 = *(uint *)(unaff_x29 + -0x20);
          unaff_w21 = unaff_w21 - 1;
        }
      }
      iVar13 = iVar13 + -1;
      unaff_w19 = unaff_w19 + -1;
    } while (1 < iVar13);
    unaff_w20 = *(int *)(unaff_x29 + -0x34);
  }
  unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
  *(int *)(unaff_x29 + -0x44) = unaff_w20;
  uVar8 = *(int *)(unaff_x29 + -0x24) + 1;
  unaff_x27 = (ulong)uVar8;
  if (0x45 < uVar2) {
    if (uVar2 == 0x5c) goto LAB_05006c58;
    if (uVar2 == 0x65) {
LAB_05006b7c:
      uVar5 = (undefined2)uVar12;
      iVar13 = (int)unaff_x27;
      uVar12 = (uint)unaff_x28;
      if ((unaff_x23 & 1) == 0) {
        if (DAT_06a4e421 == '\0') {
          FUN_02d4dc40(PTR_DAT_06650d78);
          DAT_06a4e421 = '\x01';
        }
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        iVar1 = *(int *)(unaff_x29 + -0x24);
        if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
          *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
          *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = uVar5;
        }
        else {
          FUN_04e984dc();
        }
        if (iVar13 < (int)uVar12) {
          sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2);
          if ((sVar11 == 0x2d) || (sVar11 == 0x2b)) {
            if (DAT_06a4e421 == '\0') {
              FUN_02d4dc40(PTR_DAT_06650d78);
              DAT_06a4e421 = '\x01';
            }
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            unaff_x27 = (ulong)(iVar1 + 2);
            if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar11;
            }
            else {
              FUN_04e984dc();
            }
          }
          iVar13 = (int)unaff_x27;
          if (iVar13 < (int)uVar12) {
            psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2);
            lVar14 = *(long *)(unaff_x29 + -0x68) - (long)iVar13;
            while (*psVar7 == 0x30) {
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
              lVar14 = lVar14 + -1;
              unaff_x27 = (ulong)((int)unaff_x27 + 1);
              psVar7 = psVar7 + 1;
              if (lVar14 == 0) goto LAB_0500734c;
            }
            unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
          }
        }
      }
      else {
        if ((iVar13 < (int)uVar12) &&
           (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2) == 0x30)) {
          uVar6 = 0;
          uVar8 = *(int *)(unaff_x29 + -0x24) + 2;
          goto LAB_05006ba8;
        }
        uVar8 = *(int *)(unaff_x29 + -0x24) + 2;
        if ((int)uVar12 <= (int)uVar8) {
LAB_050072bc:
          if (DAT_06a4e421 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4e421 = '\x01';
          }
          uVar12 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar12 < *(uint *)(unaff_x22 + 0x10)) {
              lVar14 = *(long *)(unaff_x22 + 8);
              unaff_x23 = 1;
              goto LAB_05006c38;
            }
            goto LAB_0500749c;
          }
          FUN_04e984dc();
          unaff_x23 = 1;
          goto LAB_05007290;
        }
        sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2);
        if (sVar11 == 0x2d) {
          if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2) != 0x30)
          goto LAB_050072bc;
          uVar6 = 0;
        }
        else {
          if ((sVar11 != 0x2b) ||
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2) != 0x30))
          goto LAB_050072bc;
          uVar6 = 1;
        }
LAB_05006ba8:
        if ((int)uVar8 < (int)uVar12) {
          psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
          do {
            if (*psVar7 != 0x30) goto LAB_05007020;
            uVar8 = uVar8 + 1;
            psVar7 = psVar7 + 1;
          } while (uVar12 != uVar8);
          unaff_x27 = unaff_x28 & 0xffffffff;
        }
        else {
LAB_05007020:
          unaff_x27 = (ulong)uVar8;
        }
        if (*(int *)(*(long *)PTR_DAT_06656a10 + 0xe4) == 0) {
          *(undefined4 *)(unaff_x29 + -0x24) = uVar6;
          thunk_FUN_02dabd98();
        }
        FUN_0500c738();
      }
      unaff_x23 = 0;
      goto LAB_05007290;
    }
    if (uVar2 != 0x2030) {
LAB_05006bf4:
      uVar5 = (undefined2)uVar12;
      if (DAT_06a4e421 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        DAT_06a4e421 = '\x01';
      }
      uVar12 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_05006c4c;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0500749c;
      lVar14 = *(long *)(unaff_x22 + 8);
LAB_05006c38:
      *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
      *(undefined2 *)(lVar14 + (long)(int)uVar12 * 2) = uVar5;
      goto LAB_05007290;
    }
    if (unaff_x24 == 0) goto LAB_050074b4;
    lVar14 = *(long *)(unaff_x24 + 0x98);
LAB_05006e3c:
    if (DAT_06a4f0a5 == '\0') {
      FUN_02d4dc40(PTR_DAT_06650d78);
      DAT_06a4f0a5 = '\x01';
    }
    if (lVar14 == 0) goto LAB_050074b4;
    if (*(int *)(lVar14 + 0x10) == 1) {
      uVar12 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0500749c;
        lVar10 = *(long *)(unaff_x22 + 8);
        uVar5 = FUN_04e7a3d8(lVar14,0,0);
        *(undefined2 *)(lVar10 + (long)(int)uVar12 * 2) = uVar5;
        *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
        goto LAB_05007290;
      }
    }
    FUN_04e98608();
    goto LAB_05007290;
  }
  goto code_r0x05006ad0;
LAB_05006c58:
  if (((int)uVar8 < (int)unaff_x28) &&
     (sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2), sVar11 != 0)) {
    if (DAT_06a4e421 == '\0') {
      FUN_02d4dc40(PTR_DAT_06650d78);
      DAT_06a4e421 = '\x01';
    }
    uVar12 = *(uint *)(unaff_x22 + 0x18);
    unaff_x27 = (ulong)(*(int *)(unaff_x29 + -0x24) + 2);
    if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_0500749c;
      *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar11;
    }
    else {
LAB_05006c4c:
      FUN_04e984dc();
    }
  }
  goto LAB_05007290;
LAB_0500734c:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_050074cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


