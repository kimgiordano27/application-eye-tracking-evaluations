/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContract
ENTRY_POINT: 05605a9c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract(undefined1 *param_1)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined1 in_w9;
  uint uVar5;
  uint unaff_w19;
  uint unaff_w20;
  uint unaff_w21;
  long lVar6;
  short *psVar7;
  long unaff_x22;
  short *unaff_x23;
  int iVar8;
  int iVar9;
  long unaff_x24;
  uint uVar10;
  long unaff_x25;
  ushort uVar11;
  short sVar12;
  uint unaff_w26;
  ushort unaff_w27;
  long lVar13;
  int iVar14;
  ushort *unaff_x28;
  long unaff_x29;
  
  do {
    param_1[0xf5e] = in_w9;
    do {
      uVar10 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar10) {
LAB_056063a4:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = unaff_w27;
        *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
      }
      else {
        FUN_054832c0();
      }
      unaff_x24 = unaff_x24 + 0x100000000;
      unaff_w21 = unaff_w21 - 1;
      unaff_x25 = unaff_x25 + -1;
      unaff_x28 = unaff_x28 + 1;
      if (unaff_x25 == 0) {
LAB_05606244:
        if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
LAB_05605a6c:
      unaff_w27 = *unaff_x28;
      if ((unaff_w27 == 0) || (unaff_w27 == unaff_w26)) {
        iVar9 = *(int *)(unaff_x29 + -0x4c);
        iVar14 = *(int *)(unaff_x29 + -0x3c);
        uVar10 = (*(short *)((unaff_x24 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - unaff_w21;
switchD_05605a3c_caseD_2c:
        *(int *)(unaff_x29 + -0x4c) = iVar9;
        *(uint *)(unaff_x29 + -0x38) = uVar10;
        if ((int)unaff_w20 <= (int)uVar10) goto LAB_05606244;
        uVar11 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
        unaff_w26 = (uint)uVar11;
        if ((uVar11 == 0x3b) || (uVar11 == 0)) goto LAB_05606244;
        iVar9 = *(int *)(unaff_x29 + -0x4c);
        if ((iVar9 < 1) ||
           ((0x30 < uVar11 || ((1L << ((ulong)(uint)uVar11 & 0x3f) & 0x1400800000000U) == 0)))) {
          lVar6 = *(long *)(unaff_x29 + -0x48);
        }
        else {
          lVar6 = *(long *)(unaff_x29 + -0x48);
          uVar10 = *(uint *)(unaff_x29 + -0x28);
          iVar8 = iVar9 + 1;
          *(int *)(unaff_x29 + -0x3c) = iVar14 - iVar9;
          do {
            sVar12 = *unaff_x23;
            sVar2 = 0x30;
            if (sVar12 != 0) {
              unaff_x23 = unaff_x23 + 1;
              sVar2 = sVar12;
            }
            if (DAT_071c1f5e == '\0') {
              FUN_02f07e70(PTR_DAT_06d48780);
              DAT_071c1f5e = '\x01';
            }
            uVar5 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_056063a4;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = sVar2;
              *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
            }
            else {
              FUN_054832c0();
            }
            if ((-1 < (int)unaff_w19) && (1 < iVar14 && (uVar10 & 1) == 0)) {
              if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_056063a4;
              if (iVar14 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
                if (lVar6 == 0) goto LAB_056063a8;
                lVar13 = *(long *)(lVar6 + 0x40);
                if (cRam00000000071c2cfa == '\0') {
                  FUN_02f07e70(PTR_DAT_06d48780);
                  cRam00000000071c2cfa = '\x01';
                }
                if (lVar13 == 0) goto LAB_056063a8;
                if (*(int *)(lVar13 + 0x10) == 1) {
                  uVar10 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_056059d4;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_056063a4;
                  lVar6 = *(long *)(unaff_x22 + 8);
                  uVar3 = FUN_05460528(lVar13,0,0);
                  *(undefined2 *)(lVar6 + (long)(int)uVar10 * 2) = uVar3;
                  lVar6 = *(long *)(unaff_x29 + -0x48);
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
            iVar14 = iVar14 + -1;
          } while (1 < iVar8);
          iVar14 = *(int *)(unaff_x29 + -0x3c);
          iVar9 = 0;
        }
        uVar10 = *(int *)(unaff_x29 + -0x38) + 1;
        if (uVar11 < 0x46) {
          switch(uVar11) {
          case 0x22:
          case 0x27:
            goto switchD_05605a3c_caseD_22;
          case 0x23:
          case 0x30:
            if (iVar9 < 0) {
              iVar9 = iVar9 + 1;
              if (iVar14 <= *(int *)(unaff_x29 + -0x78)) {
LAB_05605edc:
                sVar12 = 0x30;
                goto LAB_05605ee0;
              }
            }
            else {
              sVar12 = *unaff_x23;
              if (sVar12 == 0) {
                if (*(int *)(unaff_x29 + -0x74) < iVar14) goto LAB_05605edc;
              }
              else {
                unaff_x23 = unaff_x23 + 1;
LAB_05605ee0:
                if (DAT_071c1f5e == '\0') {
                  FUN_02f07e70(PTR_DAT_06d48780);
                  DAT_071c1f5e = '\x01';
                }
                uVar1 = *(uint *)(unaff_x22 + 0x18);
                uVar5 = *(uint *)(unaff_x29 + -0x28);
                if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar1) goto LAB_056063a4;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = sVar12;
                  *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
                }
                else {
                  FUN_054832c0();
                }
                if ((-1 < (int)unaff_w19) && (1 < iVar14 && (uVar5 & 1) == 0)) {
                  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_056063a4;
                  if (iVar14 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
                    if (lVar6 == 0) goto LAB_056063a8;
                    lVar6 = *(long *)(lVar6 + 0x40);
                    if (cRam00000000071c2cfa == '\0') {
                      FUN_02f07e70(PTR_DAT_06d48780);
                      cRam00000000071c2cfa = '\x01';
                    }
                    if (lVar6 == 0) goto LAB_056063a8;
                    if (*(int *)(lVar6 + 0x10) == 1) {
                      uVar5 = *(uint *)(unaff_x22 + 0x18);
                      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar5) goto LAB_05605ff8;
                      if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_056063a4;
                      lVar13 = *(long *)(unaff_x22 + 8);
                      uVar3 = FUN_05460528(lVar6,0,0);
                      *(undefined2 *)(lVar13 + (long)(int)uVar5 * 2) = uVar3;
                      *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                    }
                    else {
LAB_05605ff8:
                      FUN_054833ec();
                    }
                    unaff_w19 = unaff_w19 - 1;
                  }
                }
              }
            }
            iVar14 = iVar14 + -1;
            goto switchD_05605a3c_caseD_2c;
          case 0x25:
            if (lVar6 == 0) goto LAB_056063a8;
            lVar6 = *(long *)(lVar6 + 0x90);
joined_r0x05605b24:
            if (cRam00000000071c2cfa == '\0') {
              FUN_02f07e70(PTR_DAT_06d48780);
              cRam00000000071c2cfa = '\x01';
            }
            if (lVar6 == 0) goto LAB_056063a8;
            if (*(int *)(lVar6 + 0x10) == 1) {
              uVar5 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_056063a4;
                lVar13 = *(long *)(unaff_x22 + 8);
                uVar3 = FUN_05460528(lVar6,0,0);
                *(undefined2 *)(lVar13 + (long)(int)uVar5 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                goto switchD_05605a3c_caseD_2c;
              }
            }
            FUN_054833ec();
            goto switchD_05605a3c_caseD_2c;
          case 0x2c:
            goto switchD_05605a3c_caseD_2c;
          case 0x2e:
            if ((*(uint *)(unaff_x29 + -0x7c) & 1) != 0 || iVar14 != 0)
            goto switchD_05605a3c_caseD_2c;
            if ((-1 < *(int *)(unaff_x29 + -0x74)) &&
               ((*(int *)(unaff_x29 + -0x1c) <= *(int *)(unaff_x29 + -0x34) || (*unaff_x23 == 0))))
            {
              *(undefined4 *)(unaff_x29 + -0x7c) = 0;
              iVar14 = 0;
              goto switchD_05605a3c_caseD_2c;
            }
            if (lVar6 != 0) {
              lVar6 = *(long *)(lVar6 + 0x38);
              if (cRam00000000071c2cfa == '\0') {
                FUN_02f07e70(PTR_DAT_06d48780);
                cRam00000000071c2cfa = '\x01';
              }
              if (lVar6 == 0) goto LAB_056063a8;
              if (*(int *)(lVar6 + 0x10) == 1) {
                uVar5 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_056063a4;
                  lVar13 = *(long *)(unaff_x22 + 8);
                  uVar3 = FUN_05460528(lVar6,0,0);
                  *(undefined2 *)(lVar13 + (long)(int)uVar5 * 2) = uVar3;
                  *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                  iVar14 = 0;
                  *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                  goto switchD_05605a3c_caseD_2c;
                }
              }
              FUN_054833ec();
              iVar14 = 0;
              *(undefined4 *)(unaff_x29 + -0x7c) = 1;
              goto switchD_05605a3c_caseD_2c;
            }
LAB_056063a8:
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          default:
            if (uVar11 == 0x45) {
LAB_05605c28:
              if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
                iVar8 = *(int *)(unaff_x29 + -0x38);
                if (DAT_071c1f5e == '\0') {
                  FUN_02f07e70(PTR_DAT_06d48780);
                  DAT_071c1f5e = '\x01';
                }
                uVar5 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_056063a4;
                  *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = uVar11;
                  *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                }
                else {
                  FUN_054832c0();
                }
                if ((int)uVar10 < (int)unaff_w20) {
                  sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
                  if ((sVar12 == 0x2d) || (sVar12 == 0x2b)) {
                    if (DAT_071c1f5e == '\0') {
                      FUN_02f07e70(PTR_DAT_06d48780);
                      DAT_071c1f5e = '\x01';
                    }
                    uVar5 = *(uint *)(unaff_x22 + 0x18);
                    uVar10 = iVar8 + 2;
                    if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
                      if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_056063a4;
                      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = sVar12;
                      *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                    }
                    else {
                      FUN_054832c0();
                    }
                  }
                  if ((int)uVar10 < (int)unaff_w20) {
                    psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
                    lVar6 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar10;
                    while (*psVar7 == 0x30) {
                      if (DAT_071c1f5e == '\0') {
                        FUN_02f07e70(PTR_DAT_06d48780);
                        DAT_071c1f5e = '\x01';
                      }
                      uVar5 = *(uint *)(unaff_x22 + 0x18);
                      if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
                        if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_056063a4;
                        *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = 0x30;
                        *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                      }
                      else {
                        FUN_054832c0();
                      }
                      uVar10 = uVar10 + 1;
                      lVar6 = lVar6 + -1;
                      psVar7 = psVar7 + 1;
                      if (lVar6 == 0) goto LAB_05606244;
                    }
                    *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                    goto switchD_05605a3c_caseD_2c;
                  }
                }
              }
              else {
                if (((int)uVar10 < (int)unaff_w20) &&
                   (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2) == 0x30)) {
                  uVar4 = 0;
                  goto LAB_05606110;
                }
                iVar8 = *(int *)(unaff_x29 + -0x38) + 2;
                if ((int)unaff_w20 <= iVar8) {
LAB_05606150:
                  if (DAT_071c1f5e == '\0') {
                    FUN_02f07e70(PTR_DAT_06d48780);
                    DAT_071c1f5e = '\x01';
                  }
                  uVar5 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_056063a4;
                    *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = uVar11;
                    *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                  }
                  else {
                    FUN_054832c0();
                  }
                  *(undefined4 *)(unaff_x29 + -0x5c) = 1;
                  goto switchD_05605a3c_caseD_2c;
                }
                sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
                if (sVar12 == 0x2d) {
                  if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30)
                  goto LAB_05606150;
                  uVar4 = 0;
                }
                else {
                  if ((sVar12 != 0x2b) ||
                     (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30))
                  goto LAB_05606150;
                  uVar4 = 1;
                }
LAB_05606110:
                uVar5 = *(int *)(unaff_x29 + -0x38) + 2;
                uVar10 = uVar5;
                if ((int)uVar5 < (int)unaff_w20) {
                  do {
                    uVar10 = uVar5;
                    if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar5 * 2) != 0x30)
                    break;
                    uVar5 = uVar5 + 1;
                    uVar10 = unaff_w20;
                  } while (unaff_w20 != uVar5);
                }
                if (*(int *)(*(long *)PTR_DAT_06d4e298 + 0xe0) == 0) {
                  *(undefined4 *)(unaff_x29 + -0x38) = uVar4;
                  thunk_FUN_02f12b58();
                }
                FUN_0560b1ec();
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 0;
              goto switchD_05605a3c_caseD_2c;
            }
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
            uVar1 = *(uint *)(unaff_x22 + 0x18);
            uVar5 = *(uint *)(unaff_x22 + 0x10);
            if ((int)uVar5 <= (int)uVar1) {
LAB_05605bf8:
              FUN_054832c0();
              goto switchD_05605a3c_caseD_2c;
            }
          }
        }
        else {
          if (uVar11 != 0x5c) {
            if (uVar11 == 0x65) goto LAB_05605c28;
            if (uVar11 == 0x2030) {
              if (lVar6 == 0) goto LAB_056063a8;
              lVar6 = *(long *)(lVar6 + 0x98);
              goto joined_r0x05605b24;
            }
            goto switchD_05605a3c_caseD_24;
          }
          if (((int)unaff_w20 <= (int)uVar10) ||
             (uVar11 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2),
             uVar11 == 0)) goto switchD_05605a3c_caseD_2c;
          if (DAT_071c1f5e == '\0') {
            FUN_02f07e70(PTR_DAT_06d48780);
            DAT_071c1f5e = '\x01';
          }
          uVar1 = *(uint *)(unaff_x22 + 0x18);
          uVar5 = *(uint *)(unaff_x22 + 0x10);
          uVar10 = *(int *)(unaff_x29 + -0x38) + 2;
          if ((int)uVar5 <= (int)uVar1) goto LAB_05605bf8;
        }
        if (uVar5 <= uVar1) goto LAB_056063a4;
        *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = uVar11;
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        goto switchD_05605a3c_caseD_2c;
      }
    } while (DAT_071c1f5e != '\0');
    FUN_02f07e70(PTR_DAT_06d48780);
    param_1 = &DAT_071c1000;
    in_w9 = 1;
  } while( true );
switchD_05605a3c_caseD_22:
  if ((int)uVar10 < (int)unaff_w20) goto code_r0x05605a48;
  goto switchD_05605a3c_caseD_2c;
code_r0x05605a48:
  *(int *)(unaff_x29 + -0x3c) = iVar14;
  *(int *)(unaff_x29 + -0x4c) = iVar9;
  unaff_x24 = (ulong)uVar10 << 0x20;
  unaff_w21 = ~*(uint *)(unaff_x29 + -0x38);
  unaff_x28 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
  unaff_x25 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar10;
  goto LAB_05605a6c;
}


