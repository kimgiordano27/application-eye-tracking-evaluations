/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserialized
ENTRY_POINT: 050070c8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserialized(void)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  char in_NG;
  char in_OV;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint in_w9;
  short *psVar7;
  int unaff_w19;
  uint uVar8;
  ushort *puVar9;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long lVar10;
  short *unaff_x25;
  short sVar11;
  long lVar12;
  int iVar13;
  ulong unaff_x27;
  int iVar14;
  uint uVar15;
  ulong unaff_x28;
  long unaff_x29;
  
  do {
                    /* try { // try from 050070cc to 051070d7 has its CatchHandler @ 05006c68 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050070c4 with catch @ 050070d4
                        */
    if (((in_w9 & 1) == 0 && in_NG == in_OV) && (-1 < (int)unaff_w21)) {
      if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0500749c;
      if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
        if (unaff_x24 != 0) {
          lVar12 = *(long *)(unaff_x24 + 0x40);
          if (DAT_06a4f0a5 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4f0a5 = '\x01';
          }
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x10) == 1) {
              uVar8 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_05007228;
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
              lVar10 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_04e7a3d8(lVar12,0,0);
              *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
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
        goto LAB_050074cc;
      }
    }
LAB_0500723c:
    do {
      unaff_w19 = unaff_w19 + -1;
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
      if ((uVar2 == 0x3b) || (*(int *)(unaff_x29 + -0x24) = iVar13, uVar2 == 0)) goto LAB_0500734c;
      iVar13 = *(int *)(unaff_x29 + -0x44);
      if ((iVar13 < 1) ||
         ((0x30 < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x1400800000000U) == 0)))) {
        unaff_x24 = *(long *)(unaff_x29 + -0x40);
      }
      else {
        iVar14 = iVar13 + 1;
        unaff_x24 = *(long *)(unaff_x29 + -0x40);
        if (0 < iVar13) {
          iVar13 = 1;
        }
        uVar8 = *(uint *)(unaff_x29 + -0x20);
        *(int *)(unaff_x29 + -0x34) = iVar13 + -1;
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
              if (unaff_x24 == 0) goto LAB_050074b4;
              lVar12 = *(long *)(unaff_x24 + 0x40);
              if (DAT_06a4f0a5 == '\0') {
                FUN_02d4dc40(PTR_DAT_06650d78);
                DAT_06a4f0a5 = '\x01';
              }
              if (lVar12 == 0) goto LAB_050074b4;
              if (*(int *)(lVar12 + 0x10) == 1) {
                uVar8 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_05006a84;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
                lVar10 = *(long *)(unaff_x22 + 8);
                uVar4 = FUN_04e7a3d8(lVar12,0,0);
                *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar4;
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
          iVar14 = iVar14 + -1;
          unaff_w19 = unaff_w19 + -1;
        } while (1 < iVar14);
        iVar13 = *(int *)(unaff_x29 + -0x34);
      }
      unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
      *(int *)(unaff_x29 + -0x44) = iVar13;
      uVar8 = *(int *)(unaff_x29 + -0x24) + 1;
      unaff_x27 = (ulong)uVar8;
      uVar15 = (uint)unaff_x28;
      if (0x45 < uVar2) {
        if (uVar2 == 0x5c) goto LAB_05006c58;
        if (uVar2 == 0x65) {
LAB_05006b7c:
          if ((unaff_x23 & 1) == 0) {
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
            if ((int)uVar8 < (int)uVar15) {
              sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
              if ((sVar11 == 0x2d) || (sVar11 == 0x2b)) {
                if (DAT_06a4e421 == '\0') {
                  FUN_02d4dc40(PTR_DAT_06650d78);
                  DAT_06a4e421 = '\x01';
                }
                uVar8 = *(uint *)(unaff_x22 + 0x18);
                unaff_x27 = (ulong)(iVar13 + 2);
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
              if (iVar13 < (int)uVar15) {
                psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2);
                lVar12 = *(long *)(unaff_x29 + -0x68) - (long)iVar13;
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
                  lVar12 = lVar12 + -1;
                  unaff_x27 = (ulong)((int)unaff_x27 + 1);
                  psVar7 = psVar7 + 1;
                  if (lVar12 == 0) goto LAB_0500734c;
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
              if (uVar8 < *(uint *)(unaff_x22 + 0x10)) {
                lVar12 = *(long *)(unaff_x22 + 8);
                unaff_x23 = 1;
                goto LAB_05006c38;
              }
              goto LAB_0500749c;
            }
            FUN_04e984dc();
            unaff_x23 = 1;
          }
          goto LAB_05007290;
        }
        if (uVar2 != 0x2030) goto LAB_05006bf4;
        if (unaff_x24 == 0) goto LAB_050074b4;
        lVar12 = *(long *)(unaff_x24 + 0x98);
LAB_05006e3c:
        if (DAT_06a4f0a5 == '\0') {
          FUN_02d4dc40(PTR_DAT_06650d78);
          DAT_06a4f0a5 = '\x01';
        }
        if (lVar12 == 0) goto LAB_050074b4;
        if (*(int *)(lVar12 + 0x10) == 1) {
          uVar8 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
            lVar10 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_04e7a3d8(lVar12,0,0);
            *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
            goto LAB_05007290;
          }
        }
        FUN_04e98608();
        goto LAB_05007290;
      }
      if (0x26 < uVar2) {
        if (uVar2 < 0x2e) {
          if (uVar2 == 0x27) goto LAB_05006cec;
          if (uVar2 == 0x2c) goto LAB_05007290;
          if (uVar2 != 0x2d) {
LAB_05006b74:
            if (uVar2 == 0x45) goto LAB_05006b7c;
          }
        }
        else {
          if (uVar2 == 0x2e) {
            if ((*(uint *)(unaff_x29 + -0x74) & 1) == 0 && unaff_w19 == 0) {
              if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
                 ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*unaff_x25 != 0))))
              {
                if (unaff_x24 == 0) goto LAB_050074b4;
                lVar12 = *(long *)(unaff_x24 + 0x38);
                if (DAT_06a4f0a5 == '\0') {
                  FUN_02d4dc40(PTR_DAT_06650d78);
                  DAT_06a4f0a5 = '\x01';
                }
                if (lVar12 == 0) goto LAB_050074b4;
                if (*(int *)(lVar12 + 0x10) == 1) {
                  uVar8 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_0500732c;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
                  lVar10 = *(long *)(unaff_x22 + 8);
                  uVar4 = FUN_04e7a3d8(lVar12,0,0);
                  *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar4;
                  *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
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
            }
            goto LAB_05007290;
          }
          if (uVar2 != 0x2f) {
            if (uVar2 != 0x30) goto LAB_05006b74;
            goto LAB_05006cd8;
          }
        }
LAB_05006bf4:
        if (DAT_06a4e421 == '\0') {
          FUN_02d4dc40(PTR_DAT_06650d78);
          DAT_06a4e421 = '\x01';
        }
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_05006c4c;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0500749c;
        lVar12 = *(long *)(unaff_x22 + 8);
LAB_05006c38:
        *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
        *(ushort *)(lVar12 + (long)(int)uVar8 * 2) = uVar2;
        goto LAB_05007290;
      }
      if (0x23 < uVar2) {
        if (uVar2 != 0x24) {
          if (uVar2 == 0x25) {
            if (unaff_x24 != 0) {
              lVar12 = *(long *)(unaff_x24 + 0x90);
              goto LAB_05006e3c;
            }
            goto LAB_050074b4;
          }
          if (uVar2 != 0x26) goto LAB_05006b74;
        }
        goto LAB_05006bf4;
      }
      if (uVar2 == 0x22) {
LAB_05006cec:
        if ((int)uVar8 < (int)uVar15) {
          lVar12 = unaff_x27 << 0x20;
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
            lVar12 = lVar12 + 0x100000000;
            if (*(uint *)(unaff_x29 + -0x70) == uVar8) goto LAB_0500734c;
          }
          unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
          unaff_x27 = (ulong)((*(short *)((lVar12 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) -
                             uVar8);
        }
        goto LAB_05007290;
      }
      if (uVar2 != 0x23) goto LAB_05006b74;
LAB_05006cd8:
      if (iVar13 < 0) {
        iVar13 = iVar13 + 1;
        if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) break;
        *(int *)(unaff_x29 + -0x44) = iVar13;
        goto LAB_0500723c;
      }
      sVar11 = *unaff_x25;
      if (sVar11 != 0) {
        unaff_x25 = unaff_x25 + 1;
        goto LAB_0500705c;
      }
    } while (unaff_w19 <= *(int *)(unaff_x29 + -0x8c));
    sVar11 = 0x30;
LAB_0500705c:
    if (DAT_06a4e421 == '\0') {
      FUN_02d4dc40(PTR_DAT_06650d78);
      DAT_06a4e421 = '\x01';
    }
    uVar15 = *(uint *)(unaff_x22 + 0x18);
    uVar8 = *(uint *)(unaff_x22 + 0x10);
    *(int *)(unaff_x29 + -0x44) = iVar13;
    if ((int)uVar15 < (int)uVar8) {
      if (uVar8 <= uVar15) goto LAB_0500749c;
      *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar11;
    }
    else {
      FUN_04e984dc();
    }
    in_OV = SBORROW4(unaff_w19,2);
    in_NG = unaff_w19 + -2 < 0;
    in_w9 = *(uint *)(unaff_x29 + -0x20);
  } while( true );
LAB_05006c58:
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


