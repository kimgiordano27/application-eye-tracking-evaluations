/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ThrowUnexpectedEndException
ENTRY_POINT: 050072f4
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException
               (long param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined1 in_CY;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  short *psVar9;
  int unaff_w19;
  ushort *puVar10;
  uint unaff_w21;
  long unaff_x22;
  bool bVar11;
  short *unaff_x25;
  short sVar12;
  ulong unaff_x26;
  int iVar13;
  long lVar14;
  ulong unaff_x27;
  int iVar15;
  uint uVar16;
  ulong unaff_x28;
  long unaff_x29;
  
code_r0x050072f4:
  if ((bool)in_CY) {
LAB_0500749c:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
LAB_050074cc:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar8 = *(long *)(unaff_x22 + 8);
  uVar7 = (uint)param_1;
  bVar11 = true;
  do {
    *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
    *(short *)(lVar8 + param_1 * 2) = (short)unaff_x26;
LAB_05007290:
    iVar13 = (int)unaff_x27;
    if ((int)unaff_x28 <= iVar13) {
LAB_0500734c:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_050074cc;
    }
    uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2);
    unaff_x26 = (ulong)uVar2;
    if ((uVar2 == 0x3b) || (*(int *)(unaff_x29 + -0x24) = iVar13, uVar2 == 0)) goto LAB_0500734c;
    iVar13 = *(int *)(unaff_x29 + -0x44);
    if ((iVar13 < 1) || ((0x30 < uVar2 || ((1L << (unaff_x26 & 0x3f) & 0x1400800000000U) == 0)))) {
      lVar8 = *(long *)(unaff_x29 + -0x40);
    }
    else {
      iVar15 = iVar13 + 1;
      lVar8 = *(long *)(unaff_x29 + -0x40);
      if (0 < iVar13) {
        iVar13 = 1;
      }
      uVar7 = *(uint *)(unaff_x29 + -0x20);
      *(int *)(unaff_x29 + -0x34) = iVar13 + -1;
      do {
        sVar12 = *unaff_x25;
        sVar3 = 0x30;
        if (sVar12 != 0) {
          unaff_x25 = unaff_x25 + 1;
          sVar3 = sVar12;
        }
        if (DAT_06a4e421 == '\0') {
          FUN_02d4dc40(PTR_DAT_06650d78);
          DAT_06a4e421 = '\x01';
        }
        uVar16 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_0500749c;
          *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar3;
        }
        else {
          FUN_04e984dc();
        }
        if (((uVar7 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0500749c;
          if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
            if (lVar8 == 0) goto LAB_050074b4;
            lVar14 = *(long *)(lVar8 + 0x40);
            if (DAT_06a4f0a5 == '\0') {
              FUN_02d4dc40(PTR_DAT_06650d78);
              DAT_06a4f0a5 = '\x01';
            }
            if (lVar14 == 0) goto LAB_050074b4;
            if (*(int *)(lVar14 + 0x10) == 1) {
              uVar7 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_05006a84;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0500749c;
              lVar8 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_04e7a3d8(lVar14,0,0);
              *(undefined2 *)(lVar8 + (long)(int)uVar7 * 2) = uVar4;
              lVar8 = *(long *)(unaff_x29 + -0x40);
              *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
            }
            else {
LAB_05006a84:
              FUN_04e98608();
            }
            uVar7 = *(uint *)(unaff_x29 + -0x20);
            unaff_w21 = unaff_w21 - 1;
          }
        }
        iVar15 = iVar15 + -1;
        unaff_w19 = unaff_w19 + -1;
      } while (1 < iVar15);
      iVar13 = *(int *)(unaff_x29 + -0x34);
    }
    unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
    *(int *)(unaff_x29 + -0x44) = iVar13;
    uVar7 = *(int *)(unaff_x29 + -0x24) + 1;
    unaff_x27 = (ulong)uVar7;
    uVar16 = (uint)unaff_x28;
    if (0x45 < uVar2) {
      if (uVar2 == 0x5c) break;
      if (uVar2 == 0x65) {
LAB_05006b7c:
        if (bVar11) {
          if (((int)uVar7 < (int)uVar16) &&
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2) == 0x30)) {
            uVar5 = 0;
            uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
            goto LAB_05006ba8;
          }
          uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
          if ((int)uVar16 <= (int)uVar6) {
LAB_050072bc:
            if (DAT_06a4e421 == '\0') {
              FUN_02d4dc40(PTR_DAT_06650d78);
              DAT_06a4e421 = '\x01';
            }
            uVar7 = *(uint *)(unaff_x22 + 0x18);
            param_1 = (long)(int)uVar7;
            if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
              in_CY = *(uint *)(unaff_x22 + 0x10) <= uVar7;
              goto code_r0x050072f4;
            }
            FUN_04e984dc();
            bVar11 = true;
            goto LAB_05007290;
          }
          sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
          if (sVar12 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) != 0x30)
            goto LAB_050072bc;
            uVar5 = 0;
          }
          else {
            if ((sVar12 != 0x2b) ||
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) != 0x30))
            goto LAB_050072bc;
            uVar5 = 1;
          }
LAB_05006ba8:
          if ((int)uVar6 < (int)uVar16) {
            psVar9 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2);
            do {
              if (*psVar9 != 0x30) goto LAB_05007020;
              uVar6 = uVar6 + 1;
              psVar9 = psVar9 + 1;
            } while (uVar16 != uVar6);
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
        }
        else {
          if (DAT_06a4e421 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4e421 = '\x01';
          }
          uVar6 = *(uint *)(unaff_x22 + 0x18);
          iVar13 = *(int *)(unaff_x29 + -0x24);
          if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_0500749c;
            *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = uVar2;
          }
          else {
            FUN_04e984dc();
          }
          if ((int)uVar7 < (int)uVar16) {
            sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
            if ((sVar12 == 0x2d) || (sVar12 == 0x2b)) {
              if (DAT_06a4e421 == '\0') {
                FUN_02d4dc40(PTR_DAT_06650d78);
                DAT_06a4e421 = '\x01';
              }
              uVar7 = *(uint *)(unaff_x22 + 0x18);
              unaff_x27 = (ulong)(iVar13 + 2);
              if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0500749c;
                *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar12;
              }
              else {
                FUN_04e984dc();
              }
            }
            iVar13 = (int)unaff_x27;
            if (iVar13 < (int)uVar16) {
              psVar9 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2);
              lVar8 = *(long *)(unaff_x29 + -0x68) - (long)iVar13;
              while (*psVar9 == 0x30) {
                if (DAT_06a4e421 == '\0') {
                  FUN_02d4dc40(PTR_DAT_06650d78);
                  DAT_06a4e421 = '\x01';
                }
                uVar7 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0500749c;
                  *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
                  *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = 0x30;
                }
                else {
                  FUN_04e984dc();
                }
                lVar8 = lVar8 + -1;
                unaff_x27 = (ulong)((int)unaff_x27 + 1);
                psVar9 = psVar9 + 1;
                if (lVar8 == 0) goto LAB_0500734c;
              }
              unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
            }
          }
        }
        bVar11 = false;
        goto LAB_05007290;
      }
      if (uVar2 != 0x2030) goto LAB_05006bf4;
      if (lVar8 == 0) goto LAB_050074b4;
      lVar8 = *(long *)(lVar8 + 0x98);
LAB_05006e3c:
      if (DAT_06a4f0a5 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        DAT_06a4f0a5 = '\x01';
      }
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x10) == 1) {
          uVar7 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0500749c;
            lVar14 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_04e7a3d8(lVar8,0,0);
            *(undefined2 *)(lVar14 + (long)(int)uVar7 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
            goto LAB_05007290;
          }
        }
        FUN_04e98608();
        goto LAB_05007290;
      }
LAB_050074b4:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_050074cc;
    }
    if (uVar2 < 0x27) {
      if (0x23 < uVar2) {
        if (uVar2 != 0x24) {
          if (uVar2 == 0x25) {
            if (lVar8 != 0) {
              lVar8 = *(long *)(lVar8 + 0x90);
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
      if (iVar13 < 0) {
        iVar13 = iVar13 + 1;
        if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_05007058:
          sVar12 = 0x30;
          goto LAB_0500705c;
        }
        *(int *)(unaff_x29 + -0x44) = iVar13;
      }
      else {
        sVar12 = *unaff_x25;
        if (sVar12 == 0) {
          if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_05007058;
        }
        else {
          unaff_x25 = unaff_x25 + 1;
LAB_0500705c:
          if (DAT_06a4e421 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4e421 = '\x01';
          }
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          uVar7 = *(uint *)(unaff_x22 + 0x10);
          *(int *)(unaff_x29 + -0x44) = iVar13;
          if ((int)uVar16 < (int)uVar7) {
            if (uVar7 <= uVar16) goto LAB_0500749c;
            *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar12;
          }
          else {
            FUN_04e984dc();
          }
          if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0500749c;
            if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
              if (lVar8 == 0) goto LAB_050074b4;
              lVar8 = *(long *)(lVar8 + 0x40);
              if (DAT_06a4f0a5 == '\0') {
                FUN_02d4dc40(PTR_DAT_06650d78);
                DAT_06a4f0a5 = '\x01';
              }
              if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x10) == 1) {
                  uVar7 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_05007228;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0500749c;
                  lVar14 = *(long *)(unaff_x22 + 8);
                  uVar4 = FUN_04e7a3d8(lVar8,0,0);
                  *(undefined2 *)(lVar14 + (long)(int)uVar7 * 2) = uVar4;
                  *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
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
        if ((int)uVar7 < (int)uVar16) {
          lVar8 = unaff_x27 << 0x20;
          puVar10 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
          uVar7 = ~*(uint *)(unaff_x29 + -0x24);
          while ((uVar1 = *puVar10, uVar1 != 0 && (uVar1 != uVar2))) {
            if (DAT_06a4e421 == '\0') {
              FUN_02d4dc40(PTR_DAT_06650d78);
              DAT_06a4e421 = '\x01';
            }
            uVar16 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_0500749c;
              *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = uVar1;
            }
            else {
              FUN_04e984dc();
            }
            uVar7 = uVar7 - 1;
            puVar10 = puVar10 + 1;
            lVar8 = lVar8 + 0x100000000;
            if (*(uint *)(unaff_x29 + -0x70) == uVar7) goto LAB_0500734c;
          }
          unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
          unaff_x27 = (ulong)((*(short *)((lVar8 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) -
                             uVar7);
        }
        goto LAB_05007290;
      }
      if (uVar2 == 0x2c) goto LAB_05007290;
      if (uVar2 != 0x2d) {
LAB_05006b74:
        if (uVar2 == 0x45) goto LAB_05006b7c;
      }
    }
    else {
      if (uVar2 == 0x2e) {
        if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w19 != 0) goto LAB_05007290;
        if ((-1 < *(int *)(unaff_x29 + -0x8c)) &&
           ((*(int *)(unaff_x29 + -0x94) <= *(int *)(unaff_x29 + -0x5c) || (*unaff_x25 == 0)))) {
          *(undefined4 *)(unaff_x29 + -0x74) = 0;
          unaff_w19 = 0;
          goto LAB_05007290;
        }
        if (lVar8 != 0) {
          lVar8 = *(long *)(lVar8 + 0x38);
          if (DAT_06a4f0a5 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4f0a5 = '\x01';
          }
          if (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x10) == 1) {
              uVar7 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_0500732c;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0500749c;
              lVar14 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_04e7a3d8(lVar8,0,0);
              *(undefined2 *)(lVar14 + (long)(int)uVar7 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
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
      if (uVar2 != 0x2f) {
        if (uVar2 == 0x30) goto LAB_05006cd8;
        goto LAB_05006b74;
      }
    }
LAB_05006bf4:
    if (DAT_06a4e421 == '\0') {
      FUN_02d4dc40(PTR_DAT_06650d78);
      DAT_06a4e421 = '\x01';
    }
    uVar7 = *(uint *)(unaff_x22 + 0x18);
    param_1 = (long)(int)uVar7;
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_05006c4c;
    if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0500749c;
    lVar8 = *(long *)(unaff_x22 + 8);
  } while( true );
  if (((int)uVar7 < (int)uVar16) &&
     (sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2), sVar12 != 0)) {
    if (DAT_06a4e421 == '\0') {
      FUN_02d4dc40(PTR_DAT_06650d78);
      DAT_06a4e421 = '\x01';
    }
    uVar7 = *(uint *)(unaff_x22 + 0x18);
    unaff_x27 = (ulong)(*(int *)(unaff_x29 + -0x24) + 2);
    if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0500749c;
      *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar12;
    }
    else {
LAB_05006c4c:
      FUN_04e984dc();
    }
  }
  goto LAB_05007290;
}


