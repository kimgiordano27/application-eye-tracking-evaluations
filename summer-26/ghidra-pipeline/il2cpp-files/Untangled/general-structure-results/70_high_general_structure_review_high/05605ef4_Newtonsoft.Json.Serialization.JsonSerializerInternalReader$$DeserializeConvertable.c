/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$DeserializeConvertable
ENTRY_POINT: 05605ef4
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable
               (undefined *param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  short *psVar7;
  long unaff_x22;
  short *unaff_x23;
  int iVar8;
  int unaff_w24;
  long lVar9;
  uint uVar10;
  short unaff_w26;
  uint uVar11;
  long lVar12;
  uint unaff_w27;
  int unaff_w28;
  ushort *puVar13;
  long unaff_x29;
  
code_r0x05605ef4:
  FUN_02f07e70(param_1);
  DAT_071c1f5e = '\x01';
LAB_05605f04:
  uVar10 = *(uint *)(unaff_x22 + 0x18);
  uVar11 = *(uint *)(unaff_x29 + -0x28);
  if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_056063a4;
    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = unaff_w26;
    *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
  }
  else {
    FUN_054832c0();
  }
  if (((int)unaff_w19 < 0) || (unaff_w28 < 2 || (uVar11 & 1) != 0)) goto LAB_0560600c;
  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) {
LAB_056063a4:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
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
    uVar11 = *(uint *)(unaff_x22 + 0x18);
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_05605ff8;
    if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_056063a4;
    lVar9 = *(long *)(unaff_x22 + 8);
    uVar5 = FUN_05460528(lVar12,0,0);
    *(undefined2 *)(lVar9 + (long)(int)uVar11 * 2) = uVar5;
    *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
  }
  else {
LAB_05605ff8:
    FUN_054833ec();
  }
  unaff_w19 = unaff_w19 - 1;
LAB_0560600c:
  unaff_w28 = unaff_w28 + -1;
switchD_05605a3c_caseD_2c:
  do {
    *(int *)(unaff_x29 + -0x4c) = unaff_w24;
    *(uint *)(unaff_x29 + -0x38) = unaff_w27;
    if ((((int)unaff_w20 <= (int)unaff_w27) ||
        (uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2),
        uVar2 == 0x3b)) || (uVar2 == 0)) {
LAB_05606244:
      if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    unaff_w24 = *(int *)(unaff_x29 + -0x4c);
    uVar11 = (uint)uVar2;
    if (((unaff_w24 < 1) || (0x30 < uVar2)) ||
       ((1L << ((ulong)uVar11 & 0x3f) & 0x1400800000000U) == 0)) {
      unaff_x21 = *(long *)(unaff_x29 + -0x48);
    }
    else {
      unaff_x21 = *(long *)(unaff_x29 + -0x48);
      uVar10 = *(uint *)(unaff_x29 + -0x28);
      iVar8 = unaff_w24 + 1;
      *(int *)(unaff_x29 + -0x3c) = unaff_w28 - unaff_w24;
      do {
        sVar1 = *unaff_x23;
        sVar4 = 0x30;
        if (sVar1 != 0) {
          unaff_x23 = unaff_x23 + 1;
          sVar4 = sVar1;
        }
        if (DAT_071c1f5e == '\0') {
          FUN_02f07e70(PTR_DAT_06d48780);
          DAT_071c1f5e = '\x01';
        }
        uVar3 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar3 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar3) goto LAB_056063a4;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = sVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
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
              lVar9 = *(long *)(unaff_x22 + 8);
              uVar5 = FUN_05460528(lVar12,0,0);
              *(undefined2 *)(lVar9 + (long)(int)uVar10 * 2) = uVar5;
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
        iVar8 = iVar8 + -1;
        unaff_w28 = unaff_w28 + -1;
      } while (1 < iVar8);
      unaff_w28 = *(int *)(unaff_x29 + -0x3c);
      unaff_w24 = 0;
    }
    unaff_w27 = *(int *)(unaff_x29 + -0x38) + 1;
    if (uVar11 < 0x46) break;
    if (uVar2 != 0x5c) {
      if (uVar2 == 0x65) goto LAB_05605c28;
      if (uVar2 != 0x2030) goto switchD_05605a3c_caseD_24;
      if (unaff_x21 != 0) {
        lVar12 = *(long *)(unaff_x21 + 0x98);
        goto joined_r0x05605d50;
      }
      goto LAB_056063a8;
    }
    if (((int)unaff_w27 < (int)unaff_w20) &&
       (uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2), uVar2 != 0)) {
      if (DAT_071c1f5e == '\0') {
        FUN_02f07e70(PTR_DAT_06d48780);
        DAT_071c1f5e = '\x01';
      }
      uVar10 = *(uint *)(unaff_x22 + 0x18);
      uVar11 = *(uint *)(unaff_x22 + 0x10);
      unaff_w27 = *(int *)(unaff_x29 + -0x38) + 2;
      if ((int)uVar11 <= (int)uVar10) goto LAB_05605bf8;
      goto LAB_05605c90;
    }
  } while( true );
  switch(uVar2) {
  case 0x22:
  case 0x27:
    if ((int)unaff_w27 < (int)unaff_w20) {
      *(int *)(unaff_x29 + -0x3c) = unaff_w28;
      *(int *)(unaff_x29 + -0x4c) = unaff_w24;
      lVar12 = (ulong)unaff_w27 << 0x20;
      uVar10 = ~*(uint *)(unaff_x29 + -0x38);
      puVar13 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
      lVar9 = *(long *)(unaff_x29 + -0x88) - (long)(int)unaff_w27;
      while( true ) {
        uVar2 = *puVar13;
        if ((uVar2 == 0) || (uVar2 == uVar11)) break;
        if (DAT_071c1f5e == '\0') {
          FUN_02f07e70(PTR_DAT_06d48780);
          DAT_071c1f5e = '\x01';
        }
        uVar3 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar3 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar3) goto LAB_056063a4;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = uVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
        }
        else {
          FUN_054832c0();
        }
        lVar12 = lVar12 + 0x100000000;
        uVar10 = uVar10 - 1;
        lVar9 = lVar9 + -1;
        puVar13 = puVar13 + 1;
        if (lVar9 == 0) goto LAB_05606244;
      }
      unaff_w24 = *(int *)(unaff_x29 + -0x4c);
      unaff_w28 = *(int *)(unaff_x29 + -0x3c);
      unaff_w27 = (*(short *)((lVar12 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar10;
    }
    goto switchD_05605a3c_caseD_2c;
  case 0x23:
  case 0x30:
    break;
  case 0x24:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2d:
  case 0x2f:
    goto switchD_05605a3c_caseD_24;
  case 0x25:
    if (unaff_x21 == 0) goto LAB_056063a8;
    lVar12 = *(long *)(unaff_x21 + 0x90);
joined_r0x05605d50:
    if (cRam00000000071c2cfa == '\0') {
      FUN_02f07e70(PTR_DAT_06d48780);
      cRam00000000071c2cfa = '\x01';
    }
    if (lVar12 == 0) goto LAB_056063a8;
    if (*(int *)(lVar12 + 0x10) == 1) {
      uVar11 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_056063a4;
        lVar9 = *(long *)(unaff_x22 + 8);
        uVar5 = FUN_05460528(lVar12,0,0);
        *(undefined2 *)(lVar9 + (long)(int)uVar11 * 2) = uVar5;
        *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
        goto switchD_05605a3c_caseD_2c;
      }
    }
    FUN_054833ec();
    goto switchD_05605a3c_caseD_2c;
  case 0x2c:
    goto switchD_05605a3c_caseD_2c;
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
          uVar11 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_056063a4;
            lVar9 = *(long *)(unaff_x22 + 8);
            uVar5 = FUN_05460528(lVar12,0,0);
            *(undefined2 *)(lVar9 + (long)(int)uVar11 * 2) = uVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            unaff_w28 = 0;
            *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            goto switchD_05605a3c_caseD_2c;
          }
        }
        FUN_054833ec();
        unaff_w28 = 0;
        *(undefined4 *)(unaff_x29 + -0x7c) = 1;
        goto switchD_05605a3c_caseD_2c;
      }
      *(undefined4 *)(unaff_x29 + -0x7c) = 0;
      unaff_w28 = 0;
    }
    goto switchD_05605a3c_caseD_2c;
  default:
    if (uVar2 == 0x45) {
LAB_05605c28:
      if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
        iVar8 = *(int *)(unaff_x29 + -0x38);
        if (DAT_071c1f5e == '\0') {
          FUN_02f07e70(PTR_DAT_06d48780);
          DAT_071c1f5e = '\x01';
        }
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_056063a4;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
        }
        else {
          FUN_054832c0();
        }
        if ((int)unaff_w27 < (int)unaff_w20) {
          sVar1 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
          if ((sVar1 == 0x2d) || (sVar1 == 0x2b)) {
            if (DAT_071c1f5e == '\0') {
              FUN_02f07e70(PTR_DAT_06d48780);
              DAT_071c1f5e = '\x01';
            }
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            unaff_w27 = iVar8 + 2;
            if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_056063a4;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = sVar1;
              *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            }
            else {
              FUN_054832c0();
            }
          }
          if ((int)unaff_w27 < (int)unaff_w20) {
            psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
            lVar12 = *(long *)(unaff_x29 + -0x88) - (long)(int)unaff_w27;
            while (*psVar7 == 0x30) {
              if (DAT_071c1f5e == '\0') {
                FUN_02f07e70(PTR_DAT_06d48780);
                DAT_071c1f5e = '\x01';
              }
              uVar11 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_056063a4;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = 0x30;
                *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
              }
              else {
                FUN_054832c0();
              }
              unaff_w27 = unaff_w27 + 1;
              lVar12 = lVar12 + -1;
              psVar7 = psVar7 + 1;
              if (lVar12 == 0) goto LAB_05606244;
            }
            *(undefined4 *)(unaff_x29 + -0x5c) = 0;
            goto switchD_05605a3c_caseD_2c;
          }
        }
      }
      else {
        if (((int)unaff_w27 < (int)unaff_w20) &&
           (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2) == 0x30)) {
          uVar6 = 0;
        }
        else {
          iVar8 = *(int *)(unaff_x29 + -0x38) + 2;
          if ((int)unaff_w20 <= iVar8) {
LAB_05606150:
            if (DAT_071c1f5e == '\0') {
              FUN_02f07e70(PTR_DAT_06d48780);
              DAT_071c1f5e = '\x01';
            }
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_056063a4;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar2;
              *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            }
            else {
              FUN_054832c0();
            }
            *(undefined4 *)(unaff_x29 + -0x5c) = 1;
            goto switchD_05605a3c_caseD_2c;
          }
          sVar1 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
          if (sVar1 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30)
            goto LAB_05606150;
            uVar6 = 0;
          }
          else {
            if ((sVar1 != 0x2b) ||
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30))
            goto LAB_05606150;
            uVar6 = 1;
          }
        }
        uVar11 = *(int *)(unaff_x29 + -0x38) + 2;
        unaff_w27 = uVar11;
        if ((int)uVar11 < (int)unaff_w20) {
          do {
            unaff_w27 = uVar11;
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2) != 0x30) break;
            uVar11 = uVar11 + 1;
            unaff_w27 = unaff_w20;
          } while (unaff_w20 != uVar11);
        }
        if (*(int *)(*(long *)PTR_DAT_06d4e298 + 0xe0) == 0) {
          *(undefined4 *)(unaff_x29 + -0x38) = uVar6;
          thunk_FUN_02f12b58();
        }
        FUN_0560b1ec();
      }
      *(undefined4 *)(unaff_x29 + -0x5c) = 0;
      goto switchD_05605a3c_caseD_2c;
    }
switchD_05605a3c_caseD_24:
    if (DAT_071c1f5e == '\0') {
      FUN_02f07e70(PTR_DAT_06d48780);
      DAT_071c1f5e = '\x01';
    }
    uVar10 = *(uint *)(unaff_x22 + 0x18);
    uVar11 = *(uint *)(unaff_x22 + 0x10);
    if ((int)uVar10 < (int)uVar11) {
LAB_05605c90:
      if (uVar11 <= uVar10) goto LAB_056063a4;
      *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar2;
      *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
    }
    else {
LAB_05605bf8:
      FUN_054832c0();
    }
    goto switchD_05605a3c_caseD_2c;
  }
  if (-1 < unaff_w24) {
    unaff_w26 = *unaff_x23;
    if (unaff_w26 != 0) {
      unaff_x23 = unaff_x23 + 1;
      goto LAB_05605ee0;
    }
    if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_05605edc;
    goto LAB_0560600c;
  }
  unaff_w24 = unaff_w24 + 1;
  if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) goto LAB_05605edc;
  goto LAB_0560600c;
LAB_05605edc:
  unaff_w26 = 0x30;
LAB_05605ee0:
  param_1 = PTR_DAT_06d48780;
  if (DAT_071c1f5e == '\0') goto code_r0x05605ef4;
  goto LAB_05605f04;
}


