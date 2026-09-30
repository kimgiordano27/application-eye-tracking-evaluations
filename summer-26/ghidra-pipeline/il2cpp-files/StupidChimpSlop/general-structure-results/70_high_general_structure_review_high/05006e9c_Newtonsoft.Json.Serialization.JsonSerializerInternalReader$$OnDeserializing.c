/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserializing
ENTRY_POINT: 05006e9c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing(undefined2 param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_w8;
  short *psVar7;
  int unaff_w19;
  uint uVar8;
  ushort *puVar9;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long lVar10;
  long unaff_x24;
  short *unaff_x25;
  short sVar11;
  int iVar12;
  long lVar13;
  ulong unaff_x27;
  int iVar14;
  uint uVar15;
  ulong unaff_x28;
  long unaff_x29;
  
code_r0x05006e9c:
  *(undefined2 *)(unaff_x24 + unaff_x20 * 2) = param_1;
  *(int *)(unaff_x22 + 0x18) = in_w8;
LAB_05007290:
  iVar12 = (int)unaff_x27;
  if ((int)unaff_x28 <= iVar12) {
LAB_0500734c:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
    goto LAB_050074cc;
  }
  uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)iVar12 * 2);
  if ((uVar2 == 0x3b) || (*(int *)(unaff_x29 + -0x24) = iVar12, uVar2 == 0)) goto LAB_0500734c;
  iVar12 = *(int *)(unaff_x29 + -0x44);
  if ((iVar12 < 1) || ((0x30 < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x1400800000000U) == 0)))) {
    lVar10 = *(long *)(unaff_x29 + -0x40);
  }
  else {
    iVar14 = iVar12 + 1;
    lVar10 = *(long *)(unaff_x29 + -0x40);
    if (0 < iVar12) {
      iVar12 = 1;
    }
    uVar8 = *(uint *)(unaff_x29 + -0x20);
    *(int *)(unaff_x29 + -0x34) = iVar12 + -1;
    do {
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
      uVar15 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_0500749c;
        *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar3;
      }
      else {
        FUN_04e984dc();
      }
      if (((uVar8 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0500749c;
        if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
          if (lVar10 == 0) goto LAB_050074b4;
          lVar13 = *(long *)(lVar10 + 0x40);
          if (DAT_06a4f0a5 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4f0a5 = '\x01';
          }
          if (lVar13 == 0) goto LAB_050074b4;
          if (*(int *)(lVar13 + 0x10) == 1) {
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_05006a84;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
            lVar10 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_04e7a3d8(lVar13,0,0);
            *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar4;
            lVar10 = *(long *)(unaff_x29 + -0x40);
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
      iVar14 = iVar14 + -1;
      unaff_w19 = unaff_w19 + -1;
    } while (1 < iVar14);
    iVar12 = *(int *)(unaff_x29 + -0x34);
  }
  unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
  *(int *)(unaff_x29 + -0x44) = iVar12;
  uVar8 = *(int *)(unaff_x29 + -0x24) + 1;
  unaff_x27 = (ulong)uVar8;
  uVar15 = (uint)unaff_x28;
  if (uVar2 < 0x46) {
    if (uVar2 < 0x27) {
      if (0x23 < uVar2) {
        if (uVar2 != 0x24) {
          if (uVar2 == 0x25) {
            if (lVar10 != 0) {
              lVar10 = *(long *)(lVar10 + 0x90);
              goto LAB_05006e3c;
            }
            goto LAB_050074b4;
          }
          if (uVar2 != 0x26) goto LAB_05006b74;
        }
        goto LAB_05006bf4;
      }
      if (uVar2 == 0x22) goto LAB_05006cec;
      if (uVar2 != 0x23) goto LAB_05006b74;
LAB_05006cd8:
      if (iVar12 < 0) {
        iVar12 = iVar12 + 1;
        if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_05007058:
          sVar11 = 0x30;
          goto LAB_0500705c;
        }
        *(int *)(unaff_x29 + -0x44) = iVar12;
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
          uVar15 = *(uint *)(unaff_x22 + 0x18);
          uVar8 = *(uint *)(unaff_x22 + 0x10);
          *(int *)(unaff_x29 + -0x44) = iVar12;
          if ((int)uVar15 < (int)uVar8) {
            if (uVar8 <= uVar15) goto LAB_0500749c;
            *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar11;
          }
          else {
            FUN_04e984dc();
          }
          if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0500749c;
            if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
              if (lVar10 == 0) goto LAB_050074b4;
              lVar10 = *(long *)(lVar10 + 0x40);
              if (DAT_06a4f0a5 == '\0') {
                FUN_02d4dc40(PTR_DAT_06650d78);
                DAT_06a4f0a5 = '\x01';
              }
              if (lVar10 != 0) {
                if (*(int *)(lVar10 + 0x10) == 1) {
                  uVar8 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_05007228;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
                  lVar13 = *(long *)(unaff_x22 + 8);
                  uVar4 = FUN_04e7a3d8(lVar10,0,0);
                  *(undefined2 *)(lVar13 + (long)(int)uVar8 * 2) = uVar4;
                  *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                }
                else {
LAB_05007228:
                  FUN_04e98608();
                }
                unaff_w21 = unaff_w21 - 1;
                goto LAB_0500723c;
              }
              goto LAB_050074b4;
            }
          }
        }
      }
LAB_0500723c:
      unaff_w19 = unaff_w19 + -1;
      goto LAB_05007290;
    }
    if (uVar2 < 0x2e) {
      if (uVar2 == 0x27) {
LAB_05006cec:
        if ((int)uVar8 < (int)uVar15) {
          lVar10 = unaff_x27 << 0x20;
          puVar9 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
          uVar8 = ~*(uint *)(unaff_x29 + -0x24);
          while ((uVar1 = *puVar9, uVar1 != 0 && (uVar1 != uVar2))) {
            if (DAT_06a4e421 == '\0') {
              FUN_02d4dc40(PTR_DAT_06650d78);
              DAT_06a4e421 = '\x01';
            }
            uVar15 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_0500749c;
              *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar1;
            }
            else {
              FUN_04e984dc();
            }
            uVar8 = uVar8 - 1;
            puVar9 = puVar9 + 1;
            lVar10 = lVar10 + 0x100000000;
            if (*(uint *)(unaff_x29 + -0x70) == uVar8) goto LAB_0500734c;
          }
          unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
          unaff_x27 = (ulong)((*(short *)((lVar10 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) -
                             uVar8);
        }
      }
      else if (uVar2 != 0x2c) {
        if (uVar2 != 0x2d) goto LAB_05006b74;
        goto LAB_05006bf4;
      }
      goto LAB_05007290;
    }
    if (uVar2 != 0x2e) {
      if (uVar2 != 0x2f) {
        if (uVar2 == 0x30) goto LAB_05006cd8;
LAB_05006b74:
        if (uVar2 == 0x45) goto LAB_05006b7c;
      }
LAB_05006bf4:
      if (DAT_06a4e421 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        DAT_06a4e421 = '\x01';
      }
      uVar8 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_05006c4c;
      if (uVar8 < *(uint *)(unaff_x22 + 0x10)) {
        lVar10 = *(long *)(unaff_x22 + 8);
        goto LAB_05006c38;
      }
      goto LAB_0500749c;
    }
    if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w19 != 0) goto LAB_05007290;
    if ((-1 < *(int *)(unaff_x29 + -0x8c)) &&
       ((*(int *)(unaff_x29 + -0x94) <= *(int *)(unaff_x29 + -0x5c) || (*unaff_x25 == 0)))) {
      *(undefined4 *)(unaff_x29 + -0x74) = 0;
      unaff_w19 = 0;
      goto LAB_05007290;
    }
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + 0x38);
      if (DAT_06a4f0a5 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        DAT_06a4f0a5 = '\x01';
      }
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x10) == 1) {
          uVar8 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_0500732c;
          if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
          lVar13 = *(long *)(unaff_x22 + 8);
          uVar4 = FUN_04e7a3d8(lVar10,0,0);
          *(undefined2 *)(lVar13 + (long)(int)uVar8 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
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
  }
  else {
    if (uVar2 == 0x5c) {
      if (((int)uVar8 < (int)uVar15) &&
         (sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2), sVar11 != 0)) {
        if (DAT_06a4e421 == '\0') {
          FUN_02d4dc40(PTR_DAT_06650d78);
          DAT_06a4e421 = '\x01';
        }
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        unaff_x27 = (ulong)(*(int *)(unaff_x29 + -0x24) + 2);
        if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
          *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar11;
        }
        else {
LAB_05006c4c:
          FUN_04e984dc();
        }
      }
      goto LAB_05007290;
    }
    if (uVar2 == 0x65) {
LAB_05006b7c:
      if ((unaff_x23 & 1) == 0) {
        if (DAT_06a4e421 == '\0') {
          FUN_02d4dc40(PTR_DAT_06650d78);
          DAT_06a4e421 = '\x01';
        }
        uVar6 = *(uint *)(unaff_x22 + 0x18);
        iVar12 = *(int *)(unaff_x29 + -0x24);
        if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_0500749c;
          *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = uVar2;
        }
        else {
          FUN_04e984dc();
        }
        if ((int)uVar8 < (int)uVar15) {
          sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
          if ((sVar11 == 0x2d) || (sVar11 == 0x2b)) {
            if (DAT_06a4e421 == '\0') {
              FUN_02d4dc40(PTR_DAT_06650d78);
                    /* try { // try from 05006fb0 to 05106fbb has its CatchHandler @ 05007088 */
              DAT_06a4e421 = '\x01';
            }
                    /* try { // try from 05006fbc to 05107057 has its CatchHandler @ 05006c68 */
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            unaff_x27 = (ulong)(iVar12 + 2);
            if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar11;
            }
            else {
              FUN_04e984dc();
            }
          }
          iVar12 = (int)unaff_x27;
          if (iVar12 < (int)uVar15) {
            psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar12 * 2);
            lVar10 = *(long *)(unaff_x29 + -0x68) - (long)iVar12;
            while (*psVar7 == 0x30) {
              if (DAT_06a4e421 == '\0') {
                FUN_02d4dc40(PTR_DAT_06650d78);
                DAT_06a4e421 = '\x01';
              }
              uVar8 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
                *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = 0x30;
              }
              else {
                FUN_04e984dc();
              }
              lVar10 = lVar10 + -1;
              unaff_x27 = (ulong)((int)unaff_x27 + 1);
              psVar7 = psVar7 + 1;
              if (lVar10 == 0) goto LAB_0500734c;
            }
            unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
          }
        }
LAB_0500728c:
        unaff_x23 = 0;
      }
      else {
        if (((int)uVar8 < (int)uVar15) &&
           (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2) == 0x30)) {
          uVar5 = 0;
          uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
          goto LAB_05006ba8;
        }
        uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
        if ((int)uVar6 < (int)uVar15) {
          sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
          if (sVar11 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) == 0x30) {
              uVar5 = 0;
              goto LAB_05006ba8;
            }
          }
          else if ((sVar11 == 0x2b) &&
                  (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) == 0x30)) {
            uVar5 = 1;
LAB_05006ba8:
            if ((int)uVar6 < (int)uVar15) {
              psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2);
              do {
                if (*psVar7 != 0x30) goto LAB_05007020;
                uVar6 = uVar6 + 1;
                psVar7 = psVar7 + 1;
              } while (uVar15 != uVar6);
              unaff_x27 = unaff_x28 & 0xffffffff;
            }
            else {
LAB_05007020:
              unaff_x27 = (ulong)uVar6;
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
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
          lVar10 = *(long *)(unaff_x22 + 8);
          unaff_x23 = 1;
LAB_05006c38:
          *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
          *(ushort *)(lVar10 + (long)(int)uVar8 * 2) = uVar2;
        }
        else {
          FUN_04e984dc();
          unaff_x23 = 1;
        }
      }
      goto LAB_05007290;
    }
    if (uVar2 != 0x2030) goto LAB_05006bf4;
    if (lVar10 == 0) goto LAB_050074b4;
    lVar10 = *(long *)(lVar10 + 0x98);
LAB_05006e3c:
    if (DAT_06a4f0a5 == '\0') {
      FUN_02d4dc40(PTR_DAT_06650d78);
      DAT_06a4f0a5 = '\x01';
    }
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x10) == 1) {
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        unaff_x20 = (long)(int)uVar8;
        if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) goto code_r0x05006e7c;
      }
      FUN_04e98608();
      goto LAB_05007290;
    }
  }
LAB_050074b4:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  goto LAB_050074cc;
code_r0x05006e7c:
  if (*(uint *)(unaff_x22 + 0x10) <= uVar8) {
LAB_0500749c:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
LAB_050074cc:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  unaff_x24 = *(long *)(unaff_x22 + 8);
  param_1 = FUN_04e7a3d8(lVar10,0,0);
  in_w8 = uVar8 + 1;
  goto code_r0x05006e9c;
}


