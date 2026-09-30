/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContractSafe
ENTRY_POINT: 05605a10
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe(void)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int in_w8;
  uint unaff_w19;
  uint unaff_w20;
  uint uVar6;
  long lVar7;
  long unaff_x21;
  short *psVar8;
  long unaff_x22;
  short *unaff_x23;
  int iVar9;
  int unaff_w24;
  uint uVar10;
  short sVar11;
  uint unaff_w26;
  long lVar12;
  int unaff_w28;
  ushort *puVar13;
  long unaff_x29;
  
  do {
    uVar10 = in_w8 + 1;
    if (unaff_w26 < 0x46) {
      switch(unaff_w26) {
      case 0x22:
      case 0x27:
        if ((int)uVar10 < (int)unaff_w20) {
          *(int *)(unaff_x29 + -0x3c) = unaff_w28;
          *(int *)(unaff_x29 + -0x4c) = unaff_w24;
          lVar12 = (ulong)uVar10 << 0x20;
          uVar6 = ~*(uint *)(unaff_x29 + -0x38);
          puVar13 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
          lVar7 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar10;
          while( true ) {
            uVar1 = *puVar13;
            if ((uVar1 == 0) || (uVar1 == unaff_w26)) break;
            if (DAT_071c1f5e == '\0') {
              FUN_02f07e70(PTR_DAT_06d48780);
              DAT_071c1f5e = '\x01';
            }
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_056063a4;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar1;
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
            }
            else {
              FUN_054832c0();
            }
            lVar12 = lVar12 + 0x100000000;
            uVar6 = uVar6 - 1;
            lVar7 = lVar7 + -1;
            puVar13 = puVar13 + 1;
            if (lVar7 == 0) goto LAB_05606244;
          }
          unaff_w24 = *(int *)(unaff_x29 + -0x4c);
          unaff_w28 = *(int *)(unaff_x29 + -0x3c);
          uVar10 = (*(short *)((lVar12 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar6;
        }
        break;
      case 0x23:
      case 0x30:
        if (unaff_w24 < 0) {
          unaff_w24 = unaff_w24 + 1;
          if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_05605edc:
            sVar11 = 0x30;
            goto LAB_05605ee0;
          }
        }
        else {
          sVar11 = *unaff_x23;
          if (sVar11 == 0) {
            if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_05605edc;
          }
          else {
            unaff_x23 = unaff_x23 + 1;
LAB_05605ee0:
            if (DAT_071c1f5e == '\0') {
              FUN_02f07e70(PTR_DAT_06d48780);
              DAT_071c1f5e = '\x01';
            }
            uVar2 = *(uint *)(unaff_x22 + 0x18);
            uVar6 = *(uint *)(unaff_x29 + -0x28);
            if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_056063a4;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar11;
              *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
            }
            else {
              FUN_054832c0();
            }
            if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar6 & 1) == 0)) {
              if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_056063a4;
              if (unaff_w28 != *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1)
              goto LAB_0560600c;
              if (unaff_x21 == 0) {
LAB_056063a8:
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar12 = *(long *)(unaff_x21 + 0x40);
              if (cRam00000000071c2cfa == '\0') {
                FUN_02f07e70(PTR_DAT_06d48780);
                cRam00000000071c2cfa = '\x01';
              }
              if (lVar12 == 0) goto LAB_056063a8;
              if (*(int *)(lVar12 + 0x10) == 1) {
                uVar6 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar6) goto LAB_05605ff8;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_056063a4;
                lVar7 = *(long *)(unaff_x22 + 8);
                uVar4 = FUN_05460528(lVar12,0,0);
                *(undefined2 *)(lVar7 + (long)(int)uVar6 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
              }
              else {
LAB_05605ff8:
                FUN_054833ec();
              }
              unaff_w19 = unaff_w19 - 1;
            }
          }
        }
LAB_0560600c:
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
switchD_05605a3c_caseD_24:
        if (DAT_071c1f5e == '\0') {
          FUN_02f07e70(PTR_DAT_06d48780);
          DAT_071c1f5e = '\x01';
        }
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        uVar6 = *(uint *)(unaff_x22 + 0x10);
        if ((int)uVar2 < (int)uVar6) goto LAB_05605c90;
LAB_05605bf8:
        FUN_054832c0();
        break;
      case 0x25:
        if (unaff_x21 == 0) goto LAB_056063a8;
        lVar12 = *(long *)(unaff_x21 + 0x90);
joined_r0x05605b24:
        if (cRam00000000071c2cfa == '\0') {
          FUN_02f07e70(PTR_DAT_06d48780);
          cRam00000000071c2cfa = '\x01';
        }
        if (lVar12 == 0) goto LAB_056063a8;
        if (*(int *)(lVar12 + 0x10) == 1) {
          uVar6 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_056063a4;
            lVar7 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_05460528(lVar12,0,0);
            *(undefined2 *)(lVar7 + (long)(int)uVar6 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
            break;
          }
        }
        FUN_054833ec();
        break;
      case 0x2c:
        break;
      case 0x2e:
        if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && unaff_w28 == 0) {
          if ((*(int *)(unaff_x29 + -0x74) < 0) ||
             ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*unaff_x23 != 0)))) {
            if (unaff_x21 == 0) goto LAB_056063a8;
            lVar12 = *(long *)(unaff_x21 + 0x38);
            if (cRam00000000071c2cfa == '\0') {
              FUN_02f07e70(PTR_DAT_06d48780);
              cRam00000000071c2cfa = '\x01';
            }
            if (lVar12 == 0) goto LAB_056063a8;
            if (*(int *)(lVar12 + 0x10) == 1) {
              uVar6 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_056063a4;
                lVar7 = *(long *)(unaff_x22 + 8);
                uVar4 = FUN_05460528(lVar12,0,0);
                *(undefined2 *)(lVar7 + (long)(int)uVar6 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
                unaff_w28 = 0;
                *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                break;
              }
            }
            FUN_054833ec();
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
        if (unaff_w26 != 0x45) goto switchD_05605a3c_caseD_24;
LAB_05605c28:
        if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
          iVar9 = *(int *)(unaff_x29 + -0x38);
          if (DAT_071c1f5e == '\0') {
            FUN_02f07e70(PTR_DAT_06d48780);
            DAT_071c1f5e = '\x01';
          }
          uVar6 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_056063a4;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = (short)unaff_w26;
            *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
          }
          else {
            FUN_054832c0();
          }
          if ((int)uVar10 < (int)unaff_w20) {
            sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
            if ((sVar11 == 0x2d) || (sVar11 == 0x2b)) {
              if (DAT_071c1f5e == '\0') {
                FUN_02f07e70(PTR_DAT_06d48780);
                DAT_071c1f5e = '\x01';
              }
              uVar6 = *(uint *)(unaff_x22 + 0x18);
              uVar10 = iVar9 + 2;
              if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_056063a4;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = sVar11;
                *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
              }
              else {
                FUN_054832c0();
              }
            }
            if ((int)uVar10 < (int)unaff_w20) {
              psVar8 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
              lVar12 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar10;
              while (*psVar8 == 0x30) {
                if (DAT_071c1f5e == '\0') {
                  FUN_02f07e70(PTR_DAT_06d48780);
                  DAT_071c1f5e = '\x01';
                }
                uVar6 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_056063a4;
                  *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = 0x30;
                  *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
                }
                else {
                  FUN_054832c0();
                }
                uVar10 = uVar10 + 1;
                lVar12 = lVar12 + -1;
                psVar8 = psVar8 + 1;
                if (lVar12 == 0) goto LAB_05606244;
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 0;
              break;
            }
          }
        }
        else {
          if (((int)uVar10 < (int)unaff_w20) &&
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2) == 0x30)) {
            uVar5 = 0;
            goto LAB_05606110;
          }
          iVar9 = *(int *)(unaff_x29 + -0x38) + 2;
          if ((int)unaff_w20 <= iVar9) {
LAB_05606150:
            if (DAT_071c1f5e == '\0') {
              FUN_02f07e70(PTR_DAT_06d48780);
              DAT_071c1f5e = '\x01';
            }
            uVar6 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_056063a4;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = (short)unaff_w26;
              *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
            }
            else {
              FUN_054832c0();
            }
            *(undefined4 *)(unaff_x29 + -0x5c) = 1;
            break;
          }
          sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
          if (sVar11 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar9 * 2) != 0x30)
            goto LAB_05606150;
            uVar5 = 0;
          }
          else {
            if ((sVar11 != 0x2b) ||
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar9 * 2) != 0x30))
            goto LAB_05606150;
            uVar5 = 1;
          }
LAB_05606110:
          uVar6 = *(int *)(unaff_x29 + -0x38) + 2;
          uVar10 = uVar6;
          if ((int)uVar6 < (int)unaff_w20) {
            do {
              uVar10 = uVar6;
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) != 0x30) break;
              uVar6 = uVar6 + 1;
              uVar10 = unaff_w20;
            } while (unaff_w20 != uVar6);
          }
          if (*(int *)(*(long *)PTR_DAT_06d4e298 + 0xe0) == 0) {
            *(undefined4 *)(unaff_x29 + -0x38) = uVar5;
            thunk_FUN_02f12b58();
          }
          FUN_0560b1ec();
        }
        *(undefined4 *)(unaff_x29 + -0x5c) = 0;
      }
    }
    else {
      if (unaff_w26 != 0x5c) {
        if (unaff_w26 == 0x65) goto LAB_05605c28;
        if (unaff_w26 == 0x2030) {
          if (unaff_x21 == 0) goto LAB_056063a8;
          lVar12 = *(long *)(unaff_x21 + 0x98);
          goto joined_r0x05605b24;
        }
        goto switchD_05605a3c_caseD_24;
      }
      if (((int)unaff_w20 <= (int)uVar10) ||
         (unaff_w26 = (uint)*(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2),
         unaff_w26 == 0)) goto switchD_05605a3c_caseD_2c;
      if (DAT_071c1f5e == '\0') {
        FUN_02f07e70(PTR_DAT_06d48780);
        DAT_071c1f5e = '\x01';
      }
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      uVar6 = *(uint *)(unaff_x22 + 0x10);
      uVar10 = *(int *)(unaff_x29 + -0x38) + 2;
      if ((int)uVar6 <= (int)uVar2) goto LAB_05605bf8;
LAB_05605c90:
      if (uVar6 <= uVar2) {
LAB_056063a4:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = (short)unaff_w26;
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
    }
switchD_05605a3c_caseD_2c:
    *(int *)(unaff_x29 + -0x4c) = unaff_w24;
    *(uint *)(unaff_x29 + -0x38) = uVar10;
    if ((int)unaff_w20 <= (int)uVar10) {
LAB_05606244:
      if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
    unaff_w26 = (uint)uVar1;
    if ((uVar1 == 0x3b) || (uVar1 == 0)) goto LAB_05606244;
    unaff_w24 = *(int *)(unaff_x29 + -0x4c);
    if (((unaff_w24 < 1) || (0x30 < uVar1)) ||
       ((1L << ((ulong)(uint)uVar1 & 0x3f) & 0x1400800000000U) == 0)) {
      unaff_x21 = *(long *)(unaff_x29 + -0x48);
    }
    else {
      unaff_x21 = *(long *)(unaff_x29 + -0x48);
      uVar10 = *(uint *)(unaff_x29 + -0x28);
      iVar9 = unaff_w24 + 1;
      *(int *)(unaff_x29 + -0x3c) = unaff_w28 - unaff_w24;
      do {
        sVar11 = *unaff_x23;
        sVar3 = 0x30;
        if (sVar11 != 0) {
          unaff_x23 = unaff_x23 + 1;
          sVar3 = sVar11;
        }
        if (DAT_071c1f5e == '\0') {
          FUN_02f07e70(PTR_DAT_06d48780);
          DAT_071c1f5e = '\x01';
        }
        uVar6 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_056063a4;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = sVar3;
          *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
        }
        else {
          FUN_054832c0();
        }
        if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar10 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_056063a4;
          if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
            if (unaff_x21 == 0) goto LAB_056063a8;
            lVar12 = *(long *)(unaff_x21 + 0x40);
            if (cRam00000000071c2cfa == '\0') {
              FUN_02f07e70(PTR_DAT_06d48780);
              cRam00000000071c2cfa = '\x01';
            }
            if (lVar12 == 0) goto LAB_056063a8;
            if (*(int *)(lVar12 + 0x10) == 1) {
              uVar10 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_056059d4;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_056063a4;
              lVar7 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_05460528(lVar12,0,0);
              *(undefined2 *)(lVar7 + (long)(int)uVar10 * 2) = uVar4;
              unaff_x21 = *(long *)(unaff_x29 + -0x48);
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
            }
            else {
LAB_056059d4:
              FUN_054833ec();
            }
            uVar10 = *(uint *)(unaff_x29 + -0x28);
            unaff_w19 = unaff_w19 - 1;
          }
        }
        iVar9 = iVar9 + -1;
        unaff_w28 = unaff_w28 + -1;
      } while (1 < iVar9);
      unaff_w28 = *(int *)(unaff_x29 + -0x3c);
      unaff_w24 = 0;
    }
    in_w8 = *(int *)(unaff_x29 + -0x38);
  } while( true );
}


