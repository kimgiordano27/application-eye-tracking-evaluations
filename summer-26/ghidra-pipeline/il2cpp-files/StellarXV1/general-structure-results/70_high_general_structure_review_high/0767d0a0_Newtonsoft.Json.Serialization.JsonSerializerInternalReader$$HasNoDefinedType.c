/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 0767d0a0
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType(void)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  undefined1 in_ZR;
  undefined2 uVar4;
  undefined4 uVar5;
  short *psVar6;
  int unaff_w19;
  int unaff_w20;
  uint uVar7;
  ushort *puVar8;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long lVar9;
  short *unaff_x25;
  short sVar10;
  uint uVar11;
  ulong unaff_x26;
  long lVar12;
  int iVar13;
  uint uVar14;
  long unaff_x29;
  
code_r0x0767d0a0:
  if ((bool)in_ZR) goto LAB_0767d218;
  iVar13 = unaff_w20 + 1;
  lVar9 = *(long *)(unaff_x29 + -0x40);
  if (0 < unaff_w20) {
    unaff_w20 = 1;
  }
  uVar7 = *(uint *)(unaff_x29 + -0x20);
  *(int *)(unaff_x29 + -0x34) = unaff_w20 + -1;
  do {
    sVar10 = *unaff_x25;
    sVar3 = 0x30;
    if (sVar10 != 0) {
      unaff_x25 = unaff_x25 + 1;
      sVar3 = sVar10;
    }
    if (DAT_09891578 == '\0') {
      FUN_04077588(PTR_DAT_092d03e8);
      DAT_09891578 = '\x01';
    }
    uVar11 = *(uint *)(unaff_x22 + 0x18);
    if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_0767dc00;
      *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = sVar3;
    }
    else {
      FUN_07503cf0();
    }
    if (((uVar7 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
      if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0767dc00;
      if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
        if (lVar9 == 0) goto LAB_0767dc18;
        lVar12 = *(long *)(lVar9 + 0x40);
        if (DAT_0989226f == '\0') {
          FUN_04077588(PTR_DAT_092d03e8);
          DAT_0989226f = '\x01';
        }
        if (lVar12 == 0) goto LAB_0767dc18;
        if (*(int *)(lVar12 + 0x10) == 1) {
          uVar7 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_0767d1e8;
          if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_0767dc00;
          lVar9 = *(long *)(unaff_x22 + 8);
          uVar4 = FUN_074e0328(lVar12,0,0);
          *(undefined2 *)(lVar9 + (long)(int)uVar7 * 2) = uVar4;
          lVar9 = *(long *)(unaff_x29 + -0x40);
          *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
        }
        else {
LAB_0767d1e8:
          FUN_07503e1c();
        }
        uVar7 = *(uint *)(unaff_x29 + -0x20);
        unaff_w21 = unaff_w21 - 1;
      }
    }
    iVar13 = iVar13 + -1;
    unaff_w19 = unaff_w19 + -1;
  } while (1 < iVar13);
  unaff_w20 = *(int *)(unaff_x29 + -0x34);
LAB_0767d21c:
  uVar11 = (uint)unaff_x26;
  *(int *)(unaff_x29 + -0x44) = unaff_w20;
  uVar7 = *(int *)(unaff_x29 + -0x24) + 1;
  uVar14 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
  if (uVar11 < 0x46) {
    if ((int)uVar11 < 0x27) {
      if ((int)uVar11 < 0x24) {
        if (uVar11 == 0x22) goto LAB_0767d450;
        if (uVar11 != 0x23) goto LAB_0767d2d8;
LAB_0767d43c:
        if (unaff_w20 < 0) {
          unaff_w20 = unaff_w20 + 1;
          if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_0767d7bc:
            sVar10 = 0x30;
            goto LAB_0767d7c0;
          }
          *(int *)(unaff_x29 + -0x44) = unaff_w20;
        }
        else {
          sVar10 = *unaff_x25;
          if (sVar10 == 0) {
            if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_0767d7bc;
          }
          else {
            unaff_x25 = unaff_x25 + 1;
LAB_0767d7c0:
            if (DAT_09891578 == '\0') {
              FUN_04077588(PTR_DAT_092d03e8);
              DAT_09891578 = '\x01';
            }
            uVar2 = *(uint *)(unaff_x22 + 0x18);
            uVar11 = *(uint *)(unaff_x22 + 0x10);
            *(int *)(unaff_x29 + -0x44) = unaff_w20;
            if ((int)uVar2 < (int)uVar11) {
              if (uVar11 <= uVar2) goto LAB_0767dc00;
              *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar10;
            }
            else {
              FUN_07503cf0();
            }
            if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21))
            {
              if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0767dc00;
              if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
                if (lVar9 == 0) goto LAB_0767dc18;
                lVar9 = *(long *)(lVar9 + 0x40);
                if (DAT_0989226f == '\0') {
                  FUN_04077588(PTR_DAT_092d03e8);
                  DAT_0989226f = '\x01';
                }
                if (lVar9 == 0) goto LAB_0767dc18;
                if (*(int *)(lVar9 + 0x10) == 1) {
                  uVar11 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_0767d98c;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_0767dc00;
                  lVar12 = *(long *)(unaff_x22 + 8);
                  uVar4 = FUN_074e0328(lVar9,0,0);
                  *(undefined2 *)(lVar12 + (long)(int)uVar11 * 2) = uVar4;
                  *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
                }
                else {
LAB_0767d98c:
                  FUN_07503e1c();
                }
                unaff_w21 = unaff_w21 - 1;
              }
            }
          }
        }
        unaff_w19 = unaff_w19 + -1;
        goto LAB_0767d9f4;
      }
      if (uVar11 == 0x24) goto LAB_0767d358;
      if (uVar11 == 0x25) {
        if (lVar9 != 0) {
          lVar9 = *(long *)(lVar9 + 0x90);
          goto LAB_0767d5a0;
        }
        goto LAB_0767dc18;
      }
      if (uVar11 != 0x26) goto LAB_0767d2d8;
    }
    else if ((int)uVar11 < 0x2e) {
      if (uVar11 == 0x27) {
LAB_0767d450:
        if ((int)uVar7 < (int)uVar14) {
          lVar9 = (ulong)uVar7 << 0x20;
          puVar8 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
          uVar7 = ~*(uint *)(unaff_x29 + -0x24);
          while( true ) {
            uVar1 = *puVar8;
            if ((uVar1 == 0) || (uVar1 == uVar11)) break;
            if (DAT_09891578 == '\0') {
              FUN_04077588(PTR_DAT_092d03e8);
              DAT_09891578 = '\x01';
            }
            uVar14 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_0767dc00;
              *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = uVar1;
            }
            else {
              FUN_07503cf0();
            }
            uVar7 = uVar7 - 1;
            puVar8 = puVar8 + 1;
            lVar9 = lVar9 + 0x100000000;
            if (*(uint *)(unaff_x29 + -0x70) == uVar7) goto LAB_0767dab0;
          }
          uVar14 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
          uVar7 = (*(short *)((lVar9 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar7;
        }
        goto LAB_0767d9f4;
      }
      if (uVar11 == 0x2c) goto LAB_0767d9f4;
      if (uVar11 != 0x2d) goto LAB_0767d2d8;
    }
    else {
      if (uVar11 == 0x2e) {
        if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w19 != 0) goto LAB_0767d9f4;
        if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
           ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*unaff_x25 != 0)))) {
          if (lVar9 == 0) goto LAB_0767dc18;
          lVar9 = *(long *)(lVar9 + 0x38);
          if (DAT_0989226f == '\0') {
            FUN_04077588(PTR_DAT_092d03e8);
            DAT_0989226f = '\x01';
          }
          if (lVar9 == 0) goto LAB_0767dc18;
          if (*(int *)(lVar9 + 0x10) == 1) {
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_0767da90;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_0767dc00;
            lVar12 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_074e0328(lVar9,0,0);
            *(undefined2 *)(lVar12 + (long)(int)uVar11 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
          }
          else {
LAB_0767da90:
            FUN_07503e1c();
          }
          unaff_w19 = 0;
          *(undefined4 *)(unaff_x29 + -0x74) = 1;
        }
        else {
          *(undefined4 *)(unaff_x29 + -0x74) = 0;
          unaff_w19 = 0;
        }
        goto LAB_0767d9f4;
      }
      if (uVar11 != 0x2f) {
        if (uVar11 == 0x30) goto LAB_0767d43c;
LAB_0767d2d8:
        if (uVar11 == 0x45) goto LAB_0767d2e0;
      }
    }
LAB_0767d358:
    if (DAT_09891578 == '\0') {
      FUN_04077588(PTR_DAT_092d03e8);
      DAT_09891578 = '\x01';
    }
    uVar11 = *(uint *)(unaff_x22 + 0x18);
    if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_0767dc00;
      lVar9 = *(long *)(unaff_x22 + 8);
LAB_0767d39c:
      *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
      *(short *)(lVar9 + (long)(int)uVar11 * 2) = (short)unaff_x26;
    }
    else {
LAB_0767d3b0:
      FUN_07503cf0();
    }
  }
  else if (uVar11 == 0x5c) {
    if (((int)uVar7 < (int)uVar14) &&
       (sVar10 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2), sVar10 != 0)) {
      if (DAT_09891578 == '\0') {
        FUN_04077588(PTR_DAT_092d03e8);
        DAT_09891578 = '\x01';
      }
      uVar11 = *(uint *)(unaff_x22 + 0x18);
      uVar7 = *(int *)(unaff_x29 + -0x24) + 2;
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_0767d3b0;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_0767dc00;
      *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = sVar10;
    }
  }
  else if (uVar11 == 0x65) {
LAB_0767d2e0:
    if ((unaff_x23 & 1) != 0) {
      if (((int)uVar7 < (int)uVar14) &&
         (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2) == 0x30)) {
        uVar5 = 0;
        uVar11 = *(int *)(unaff_x29 + -0x24) + 2;
        goto LAB_0767d30c;
      }
      uVar11 = *(int *)(unaff_x29 + -0x24) + 2;
      if ((int)uVar11 < (int)uVar14) {
        sVar10 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
        if (sVar10 == 0x2d) {
          if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2) == 0x30) {
            uVar5 = 0;
            goto LAB_0767d30c;
          }
        }
        else if ((sVar10 == 0x2b) &&
                (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2) == 0x30)) {
          uVar5 = 1;
LAB_0767d30c:
          uVar7 = uVar11;
          if ((int)uVar11 < (int)uVar14) {
            psVar6 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2);
            do {
              uVar7 = uVar11;
              if (*psVar6 != 0x30) break;
              uVar11 = uVar11 + 1;
              psVar6 = psVar6 + 1;
              uVar7 = uVar14;
            } while (uVar14 != uVar11);
          }
          if (*(int *)(*(long *)PTR_DAT_092d6630 + 0xe4) == 0) {
            *(undefined4 *)(unaff_x29 + -0x24) = uVar5;
            thunk_FUN_040d65a8();
          }
          FUN_07682e9c();
          goto LAB_0767d9f0;
        }
      }
      if (DAT_09891578 == '\0') {
        FUN_04077588(PTR_DAT_092d03e8);
        DAT_09891578 = '\x01';
      }
      uVar11 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) {
        FUN_07503cf0();
        unaff_x23 = 1;
        goto LAB_0767d9f4;
      }
      if (uVar11 < *(uint *)(unaff_x22 + 0x10)) {
        lVar9 = *(long *)(unaff_x22 + 8);
        unaff_x23 = 1;
        goto LAB_0767d39c;
      }
      goto LAB_0767dc00;
    }
    if (DAT_09891578 == '\0') {
      FUN_04077588(PTR_DAT_092d03e8);
      DAT_09891578 = '\x01';
    }
    uVar11 = *(uint *)(unaff_x22 + 0x18);
    iVar13 = *(int *)(unaff_x29 + -0x24);
    if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_0767dc00;
      *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = (short)unaff_x26;
    }
    else {
      FUN_07503cf0();
    }
    if ((int)uVar7 < (int)uVar14) {
      sVar10 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
      if ((sVar10 == 0x2d) || (sVar10 == 0x2b)) {
        if (DAT_09891578 == '\0') {
          FUN_04077588(PTR_DAT_092d03e8);
          DAT_09891578 = '\x01';
        }
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        uVar7 = iVar13 + 2;
        if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_0767dc00;
          *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = sVar10;
        }
        else {
          FUN_07503cf0();
        }
      }
      if ((int)uVar7 < (int)uVar14) {
        psVar6 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
        lVar9 = *(long *)(unaff_x29 + -0x68) - (long)(int)uVar7;
        while (*psVar6 == 0x30) {
          if (DAT_09891578 == '\0') {
            FUN_04077588(PTR_DAT_092d03e8);
            DAT_09891578 = '\x01';
          }
          uVar11 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_0767dc00;
            *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = 0x30;
          }
          else {
            FUN_07503cf0();
          }
          lVar9 = lVar9 + -1;
          uVar7 = uVar7 + 1;
          psVar6 = psVar6 + 1;
          if (lVar9 == 0) goto LAB_0767dab0;
        }
        uVar14 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
      }
    }
LAB_0767d9f0:
    unaff_x23 = 0;
  }
  else {
    if (uVar11 != 0x2030) goto LAB_0767d358;
    if (lVar9 == 0) goto LAB_0767dc18;
    lVar9 = *(long *)(lVar9 + 0x98);
LAB_0767d5a0:
    if (DAT_0989226f == '\0') {
      FUN_04077588(PTR_DAT_092d03e8);
      DAT_0989226f = '\x01';
    }
    if (lVar9 == 0) goto LAB_0767dc18;
    if (*(int *)(lVar9 + 0x10) == 1) {
      uVar11 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (uVar11 < *(uint *)(unaff_x22 + 0x10)) {
          lVar12 = *(long *)(unaff_x22 + 8);
          uVar4 = FUN_074e0328(lVar9,0,0);
          *(undefined2 *)(lVar12 + (long)(int)uVar11 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
          goto LAB_0767d9f4;
        }
        goto LAB_0767dc00;
      }
    }
    FUN_07503e1c();
  }
LAB_0767d9f4:
  if ((int)uVar14 <= (int)uVar7) {
LAB_0767dab0:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
    goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable;
  }
  uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
  unaff_x26 = (ulong)uVar1;
  if ((uVar1 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = uVar7, uVar1 == 0)) goto LAB_0767dab0;
  unaff_w20 = *(int *)(unaff_x29 + -0x44);
  if ((0 < unaff_w20) && (uVar1 < 0x31)) goto code_r0x0767d08c;
LAB_0767d218:
  lVar9 = *(long *)(unaff_x29 + -0x40);
  goto LAB_0767d21c;
LAB_0767dc00:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
  goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable;
code_r0x0767d08c:
  in_ZR = (1L << (unaff_x26 & 0x3f) & 0x1400800000000U) == 0;
  goto code_r0x0767d0a0;
LAB_0767dc18:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


