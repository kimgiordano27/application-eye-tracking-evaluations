/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateDynamic
ENTRY_POINT: 0767d5d4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateDynamic(void)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  short *psVar7;
  int unaff_w19;
  uint uVar8;
  ushort *puVar9;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long lVar10;
  short *unaff_x25;
  short sVar11;
  long unaff_x26;
  int iVar12;
  long lVar13;
  ulong unaff_x27;
  int iVar14;
  uint uVar15;
  ulong unaff_x28;
  long unaff_x29;
  
  do {
    uVar8 = (uint)unaff_x20;
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_0767d60c;
    if (*(uint *)(unaff_x22 + 0x10) <= uVar8) {
LAB_0767dc00:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar10 = *(long *)(unaff_x22 + 8);
    uVar4 = FUN_074e0328(unaff_x26,0,0);
    *(undefined2 *)(lVar10 + unaff_x20 * 2) = uVar4;
    *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
LAB_0767d9f4:
    iVar12 = (int)unaff_x27;
    if ((int)unaff_x28 <= iVar12) {
LAB_0767dab0:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable;
    }
    uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)iVar12 * 2);
    if ((uVar2 == 0x3b) || (*(int *)(unaff_x29 + -0x24) = iVar12, uVar2 == 0)) goto LAB_0767dab0;
    iVar12 = *(int *)(unaff_x29 + -0x44);
    if ((iVar12 < 1) || ((0x30 < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x1400800000000U) == 0))))
    {
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
        if (DAT_09891578 == '\0') {
          FUN_04077588(PTR_DAT_092d03e8);
          DAT_09891578 = '\x01';
        }
        uVar15 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_0767dc00;
          *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar3;
        }
        else {
          FUN_07503cf0();
        }
        if (((uVar8 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0767dc00;
          if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
            if (lVar10 == 0) goto LAB_0767dc18;
            lVar13 = *(long *)(lVar10 + 0x40);
            if (DAT_0989226f == '\0') {
              FUN_04077588(PTR_DAT_092d03e8);
              DAT_0989226f = '\x01';
            }
            if (lVar13 == 0) goto LAB_0767dc18;
            if (*(int *)(lVar13 + 0x10) == 1) {
              uVar8 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_0767d1e8;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0767dc00;
              lVar10 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_074e0328(lVar13,0,0);
              *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar4;
              lVar10 = *(long *)(unaff_x29 + -0x40);
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
            }
            else {
LAB_0767d1e8:
              FUN_07503e1c();
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
      if (0x26 < uVar2) {
        if (uVar2 < 0x2e) {
          if (uVar2 == 0x27) goto LAB_0767d450;
          if (uVar2 == 0x2c) goto LAB_0767d9f4;
          if (uVar2 != 0x2d) {
LAB_0767d2d8:
            if (uVar2 == 0x45) {
LAB_0767d2e0:
              if ((unaff_x23 & 1) == 0) {
                if (DAT_09891578 == '\0') {
                  FUN_04077588(PTR_DAT_092d03e8);
                  DAT_09891578 = '\x01';
                }
                uVar6 = *(uint *)(unaff_x22 + 0x18);
                iVar12 = *(int *)(unaff_x29 + -0x24);
                if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_0767dc00;
                  *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
                  *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = uVar2;
                }
                else {
                  FUN_07503cf0();
                }
                if ((int)uVar8 < (int)uVar15) {
                  sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
                  if ((sVar11 == 0x2d) || (sVar11 == 0x2b)) {
                    if (DAT_09891578 == '\0') {
                      FUN_04077588(PTR_DAT_092d03e8);
                      DAT_09891578 = '\x01';
                    }
                    uVar8 = *(uint *)(unaff_x22 + 0x18);
                    unaff_x27 = (ulong)(iVar12 + 2);
                    if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
                      if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0767dc00;
                      *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar11;
                    }
                    else {
                      FUN_07503cf0();
                    }
                  }
                  iVar12 = (int)unaff_x27;
                  if (iVar12 < (int)uVar15) {
                    psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar12 * 2);
                    lVar10 = *(long *)(unaff_x29 + -0x68) - (long)iVar12;
                    while (*psVar7 == 0x30) {
                      if (DAT_09891578 == '\0') {
                        FUN_04077588(PTR_DAT_092d03e8);
                        DAT_09891578 = '\x01';
                      }
                      uVar8 = *(uint *)(unaff_x22 + 0x18);
                      if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
                        if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0767dc00;
                        *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                        *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = 0x30;
                      }
                      else {
                        FUN_07503cf0();
                      }
                      lVar10 = lVar10 + -1;
                      unaff_x27 = (ulong)((int)unaff_x27 + 1);
                      psVar7 = psVar7 + 1;
                      if (lVar10 == 0) goto LAB_0767dab0;
                    }
                    unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
                  }
                }
                goto LAB_0767d9f0;
              }
              if (((int)uVar8 < (int)uVar15) &&
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2) == 0x30)) {
                uVar5 = 0;
                uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
                goto LAB_0767d30c;
              }
              uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
              if ((int)uVar6 < (int)uVar15) {
                sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
                if (sVar11 == 0x2d) {
                  if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) == 0x30) {
                    uVar5 = 0;
                    goto LAB_0767d30c;
                  }
                }
                else if ((sVar11 == 0x2b) &&
                        (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) == 0x30)) {
                  uVar5 = 1;
LAB_0767d30c:
                  if ((int)uVar6 < (int)uVar15) {
                    psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2);
                    do {
                      if (*psVar7 != 0x30) goto LAB_0767d784;
                      uVar6 = uVar6 + 1;
                      psVar7 = psVar7 + 1;
                    } while (uVar15 != uVar6);
                    unaff_x27 = unaff_x28 & 0xffffffff;
                  }
                  else {
LAB_0767d784:
                    unaff_x27 = (ulong)uVar6;
                  }
                  if (*(int *)(*(long *)PTR_DAT_092d6630 + 0xe4) == 0) {
                    *(undefined4 *)(unaff_x29 + -0x24) = uVar5;
                    thunk_FUN_040d65a8();
                  }
                  FUN_07682e9c();
LAB_0767d9f0:
                  unaff_x23 = 0;
                  goto LAB_0767d9f4;
                }
              }
              if (DAT_09891578 == '\0') {
                FUN_04077588(PTR_DAT_092d03e8);
                DAT_09891578 = '\x01';
              }
              uVar8 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) {
                FUN_07503cf0();
                unaff_x23 = 1;
                goto LAB_0767d9f4;
              }
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0767dc00;
              lVar10 = *(long *)(unaff_x22 + 8);
              unaff_x23 = 1;
              goto LAB_0767d39c;
            }
          }
LAB_0767d358:
          if (DAT_09891578 == '\0') {
            FUN_04077588(PTR_DAT_092d03e8);
            DAT_09891578 = '\x01';
          }
          uVar8 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) {
LAB_0767d3b0:
            FUN_07503cf0();
            goto LAB_0767d9f4;
          }
          if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0767dc00;
          lVar10 = *(long *)(unaff_x22 + 8);
LAB_0767d39c:
          *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
          *(ushort *)(lVar10 + (long)(int)uVar8 * 2) = uVar2;
          goto LAB_0767d9f4;
        }
        if (uVar2 != 0x2e) {
          if (uVar2 != 0x2f) {
            if (uVar2 != 0x30) goto LAB_0767d2d8;
            goto LAB_0767d43c;
          }
          goto LAB_0767d358;
        }
        if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w19 != 0) goto LAB_0767d9f4;
        if ((-1 < *(int *)(unaff_x29 + -0x8c)) &&
           ((*(int *)(unaff_x29 + -0x94) <= *(int *)(unaff_x29 + -0x5c) || (*unaff_x25 == 0)))) {
          *(undefined4 *)(unaff_x29 + -0x74) = 0;
          unaff_w19 = 0;
          goto LAB_0767d9f4;
        }
        if (lVar10 != 0) {
          lVar10 = *(long *)(lVar10 + 0x38);
          if (DAT_0989226f == '\0') {
            FUN_04077588(PTR_DAT_092d03e8);
            DAT_0989226f = '\x01';
          }
          if (lVar10 != 0) {
            if (*(int *)(lVar10 + 0x10) == 1) {
              uVar8 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_0767da90;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0767dc00;
              lVar13 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_074e0328(lVar10,0,0);
              *(undefined2 *)(lVar13 + (long)(int)uVar8 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
            }
            else {
LAB_0767da90:
              FUN_07503e1c();
            }
            unaff_w19 = 0;
            *(undefined4 *)(unaff_x29 + -0x74) = 1;
            goto LAB_0767d9f4;
          }
        }
        goto LAB_0767dc18;
      }
      if (0x23 < uVar2) {
        if (uVar2 != 0x24) {
          if (uVar2 == 0x25) {
            if (lVar10 != 0) {
              unaff_x26 = *(long *)(lVar10 + 0x90);
              goto LAB_0767d5a0;
            }
            goto LAB_0767dc18;
          }
          if (uVar2 != 0x26) goto LAB_0767d2d8;
        }
        goto LAB_0767d358;
      }
      if (uVar2 == 0x22) {
LAB_0767d450:
        if ((int)uVar8 < (int)uVar15) {
          lVar10 = unaff_x27 << 0x20;
          puVar9 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
          uVar8 = ~*(uint *)(unaff_x29 + -0x24);
          while ((uVar1 = *puVar9, uVar1 != 0 && (uVar1 != uVar2))) {
            if (DAT_09891578 == '\0') {
              FUN_04077588(PTR_DAT_092d03e8);
              DAT_09891578 = '\x01';
            }
            uVar15 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_0767dc00;
              *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar1;
            }
            else {
              FUN_07503cf0();
            }
            uVar8 = uVar8 - 1;
            puVar9 = puVar9 + 1;
            lVar10 = lVar10 + 0x100000000;
            if (*(uint *)(unaff_x29 + -0x70) == uVar8) goto LAB_0767dab0;
          }
          unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
          unaff_x27 = (ulong)((*(short *)((lVar10 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) -
                             uVar8);
        }
        goto LAB_0767d9f4;
      }
      if (uVar2 != 0x23) goto LAB_0767d2d8;
LAB_0767d43c:
      if (iVar12 < 0) {
        iVar12 = iVar12 + 1;
        if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_0767d7bc:
          sVar11 = 0x30;
          goto LAB_0767d7c0;
        }
        *(int *)(unaff_x29 + -0x44) = iVar12;
      }
      else {
        sVar11 = *unaff_x25;
        if (sVar11 == 0) {
          if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_0767d7bc;
        }
        else {
          unaff_x25 = unaff_x25 + 1;
LAB_0767d7c0:
          if (DAT_09891578 == '\0') {
            FUN_04077588(PTR_DAT_092d03e8);
            DAT_09891578 = '\x01';
          }
          uVar15 = *(uint *)(unaff_x22 + 0x18);
          uVar8 = *(uint *)(unaff_x22 + 0x10);
          *(int *)(unaff_x29 + -0x44) = iVar12;
          if ((int)uVar15 < (int)uVar8) {
            if (uVar8 <= uVar15) goto LAB_0767dc00;
            *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar11;
          }
          else {
            FUN_07503cf0();
          }
          if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0767dc00;
            if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
              if (lVar10 == 0) goto LAB_0767dc18;
              lVar10 = *(long *)(lVar10 + 0x40);
              if (DAT_0989226f == '\0') {
                FUN_04077588(PTR_DAT_092d03e8);
                DAT_0989226f = '\x01';
              }
              if (lVar10 != 0) {
                if (*(int *)(lVar10 + 0x10) == 1) {
                  uVar8 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_0767d98c;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0767dc00;
                  lVar13 = *(long *)(unaff_x22 + 8);
                  uVar4 = FUN_074e0328(lVar10,0,0);
                  *(undefined2 *)(lVar13 + (long)(int)uVar8 * 2) = uVar4;
                  *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                }
                else {
LAB_0767d98c:
                  FUN_07503e1c();
                }
                unaff_w21 = unaff_w21 - 1;
                goto LAB_0767d9a0;
              }
LAB_0767dc18:
              if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable;
            }
          }
        }
      }
LAB_0767d9a0:
      unaff_w19 = unaff_w19 + -1;
      goto LAB_0767d9f4;
    }
    if (uVar2 == 0x5c) {
      if (((int)uVar8 < (int)uVar15) &&
         (sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2), sVar11 != 0)) {
        if (DAT_09891578 == '\0') {
          FUN_04077588(PTR_DAT_092d03e8);
          DAT_09891578 = '\x01';
        }
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        unaff_x27 = (ulong)(*(int *)(unaff_x29 + -0x24) + 2);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_0767d3b0;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0767dc00;
        *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar11;
      }
      goto LAB_0767d9f4;
    }
    if (uVar2 == 0x65) goto LAB_0767d2e0;
    if (uVar2 != 0x2030) goto LAB_0767d358;
    if (lVar10 == 0) goto LAB_0767dc18;
    unaff_x26 = *(long *)(lVar10 + 0x98);
LAB_0767d5a0:
    if (DAT_0989226f == '\0') {
      FUN_04077588(PTR_DAT_092d03e8);
      DAT_0989226f = '\x01';
    }
    if (unaff_x26 == 0) goto LAB_0767dc18;
    if (*(int *)(unaff_x26 + 0x10) != 1) {
LAB_0767d60c:
      FUN_07503e1c();
      goto LAB_0767d9f4;
    }
    unaff_x20 = (long)*(int *)(unaff_x22 + 0x18);
  } while( true );
}


