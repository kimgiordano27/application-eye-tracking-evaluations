/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 07a41d24
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties(void)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
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
  uint unaff_w27;
  long lVar13;
  int iVar14;
  ushort *unaff_x28;
  long unaff_x29;
  
code_r0x07a41d24:
  if (unaff_w27 == unaff_w26) goto LAB_07a4215c;
  if (DAT_0a52453b == '\0') {
    FUN_04447ba8(PTR_DAT_09f3b670);
    DAT_0a52453b = '\x01';
  }
  uVar10 = *(uint *)(unaff_x22 + 0x18);
  if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar10) {
LAB_07a42654:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = (short)unaff_w27;
    *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
  }
  else {
    FUN_078d0cd4();
  }
  unaff_x24 = unaff_x24 + 0x100000000;
  unaff_w21 = unaff_w21 - 1;
  unaff_x25 = unaff_x25 + -1;
  unaff_x28 = unaff_x28 + 1;
  if (unaff_x25 == 0) {
LAB_07a424f4:
    if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_07a41d1c:
  unaff_w27 = (uint)*unaff_x28;
  if (*unaff_x28 == 0) {
LAB_07a4215c:
    iVar9 = *(int *)(unaff_x29 + -0x4c);
    iVar14 = *(int *)(unaff_x29 + -0x3c);
    uVar10 = (*(short *)((unaff_x24 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - unaff_w21;
switchD_07a41cec_caseD_2c:
    *(int *)(unaff_x29 + -0x4c) = iVar9;
    *(uint *)(unaff_x29 + -0x38) = uVar10;
    if ((int)unaff_w20 <= (int)uVar10) goto LAB_07a424f4;
    uVar11 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
    unaff_w26 = (uint)uVar11;
    if ((uVar11 == 0x3b) || (uVar11 == 0)) goto LAB_07a424f4;
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
        if (DAT_0a52453b == '\0') {
          FUN_04447ba8(PTR_DAT_09f3b670);
          DAT_0a52453b = '\x01';
        }
        uVar5 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_07a42654;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = sVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
        }
        else {
          FUN_078d0cd4();
        }
        if ((-1 < (int)unaff_w19) && (1 < iVar14 && (uVar10 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_07a42654;
          if (iVar14 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
            if (lVar6 == 0) goto LAB_07a42658;
            lVar13 = *(long *)(lVar6 + 0x40);
            if (DAT_0a5251ab == '\0') {
              FUN_04447ba8(PTR_DAT_09f3b670);
              DAT_0a5251ab = '\x01';
            }
            if (lVar13 == 0) goto LAB_07a42658;
            if (*(int *)(lVar13 + 0x10) == 1) {
              uVar10 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_07a41c84;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_07a42654;
              lVar6 = *(long *)(unaff_x22 + 8);
              uVar3 = FUN_078aee34(lVar13,0,0);
              *(undefined2 *)(lVar6 + (long)(int)uVar10 * 2) = uVar3;
              lVar6 = *(long *)(unaff_x29 + -0x48);
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
            }
            else {
LAB_07a41c84:
              FUN_078d0e00();
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
        goto switchD_07a41cec_caseD_22;
      case 0x23:
      case 0x30:
        if (iVar9 < 0) {
          iVar9 = iVar9 + 1;
          if (iVar14 <= *(int *)(unaff_x29 + -0x78)) {
LAB_07a4218c:
            sVar12 = 0x30;
            goto LAB_07a42190;
          }
        }
        else {
          sVar12 = *unaff_x23;
          if (sVar12 == 0) {
            if (*(int *)(unaff_x29 + -0x74) < iVar14) goto LAB_07a4218c;
          }
          else {
            unaff_x23 = unaff_x23 + 1;
LAB_07a42190:
            if (DAT_0a52453b == '\0') {
              FUN_04447ba8(PTR_DAT_09f3b670);
              DAT_0a52453b = '\x01';
            }
            uVar1 = *(uint *)(unaff_x22 + 0x18);
            uVar5 = *(uint *)(unaff_x29 + -0x28);
            if ((int)uVar1 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar1) goto LAB_07a42654;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = sVar12;
              *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
            }
            else {
              FUN_078d0cd4();
            }
            if ((-1 < (int)unaff_w19) && (1 < iVar14 && (uVar5 & 1) == 0)) {
              if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_07a42654;
              if (iVar14 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
                if (lVar6 == 0) goto LAB_07a42658;
                lVar6 = *(long *)(lVar6 + 0x40);
                if (DAT_0a5251ab == '\0') {
                  FUN_04447ba8(PTR_DAT_09f3b670);
                  DAT_0a5251ab = '\x01';
                }
                if (lVar6 == 0) goto LAB_07a42658;
                if (*(int *)(lVar6 + 0x10) == 1) {
                  uVar5 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar5) goto LAB_07a422a8;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_07a42654;
                  lVar13 = *(long *)(unaff_x22 + 8);
                  uVar3 = FUN_078aee34(lVar6,0,0);
                  *(undefined2 *)(lVar13 + (long)(int)uVar5 * 2) = uVar3;
                  *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                }
                else {
LAB_07a422a8:
                  FUN_078d0e00();
                }
                unaff_w19 = unaff_w19 - 1;
              }
            }
          }
        }
        iVar14 = iVar14 + -1;
        goto switchD_07a41cec_caseD_2c;
      case 0x25:
        if (lVar6 == 0) goto LAB_07a42658;
        lVar6 = *(long *)(lVar6 + 0x90);
joined_r0x07a41dd4:
        if (DAT_0a5251ab == '\0') {
          FUN_04447ba8(PTR_DAT_09f3b670);
          DAT_0a5251ab = '\x01';
        }
        if (lVar6 == 0) goto LAB_07a42658;
        if (*(int *)(lVar6 + 0x10) == 1) {
          uVar5 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_07a42654;
            lVar13 = *(long *)(unaff_x22 + 8);
            uVar3 = FUN_078aee34(lVar6,0,0);
            *(undefined2 *)(lVar13 + (long)(int)uVar5 * 2) = uVar3;
            *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
            goto switchD_07a41cec_caseD_2c;
          }
        }
        FUN_078d0e00();
        goto switchD_07a41cec_caseD_2c;
      case 0x2c:
        goto switchD_07a41cec_caseD_2c;
      case 0x2e:
        if ((*(uint *)(unaff_x29 + -0x7c) & 1) != 0 || iVar14 != 0) goto switchD_07a41cec_caseD_2c;
        if ((-1 < *(int *)(unaff_x29 + -0x74)) &&
           ((*(int *)(unaff_x29 + -0x1c) <= *(int *)(unaff_x29 + -0x34) || (*unaff_x23 == 0)))) {
          *(undefined4 *)(unaff_x29 + -0x7c) = 0;
          iVar14 = 0;
          goto switchD_07a41cec_caseD_2c;
        }
        if (lVar6 != 0) {
          lVar6 = *(long *)(lVar6 + 0x38);
          if (DAT_0a5251ab == '\0') {
            FUN_04447ba8(PTR_DAT_09f3b670);
            DAT_0a5251ab = '\x01';
          }
          if (lVar6 == 0) goto LAB_07a42658;
          if (*(int *)(lVar6 + 0x10) == 1) {
            uVar5 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_07a42654;
              lVar13 = *(long *)(unaff_x22 + 8);
              uVar3 = FUN_078aee34(lVar6,0,0);
              *(undefined2 *)(lVar13 + (long)(int)uVar5 * 2) = uVar3;
              *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
              iVar14 = 0;
              *(undefined4 *)(unaff_x29 + -0x7c) = 1;
              goto switchD_07a41cec_caseD_2c;
            }
          }
          FUN_078d0e00();
          iVar14 = 0;
          *(undefined4 *)(unaff_x29 + -0x7c) = 1;
          goto switchD_07a41cec_caseD_2c;
        }
LAB_07a42658:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      default:
        if (uVar11 == 0x45) {
LAB_07a41ed8:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar8 = *(int *)(unaff_x29 + -0x38);
            if (DAT_0a52453b == '\0') {
              FUN_04447ba8(PTR_DAT_09f3b670);
              DAT_0a52453b = '\x01';
            }
            uVar5 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_07a42654;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = uVar11;
              *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
            }
            else {
              FUN_078d0cd4();
            }
            if ((int)uVar10 < (int)unaff_w20) {
              sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
              if ((sVar12 == 0x2d) || (sVar12 == 0x2b)) {
                if (DAT_0a52453b == '\0') {
                  FUN_04447ba8(PTR_DAT_09f3b670);
                  DAT_0a52453b = '\x01';
                }
                uVar5 = *(uint *)(unaff_x22 + 0x18);
                uVar10 = iVar8 + 2;
                if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_07a42654;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = sVar12;
                  *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                }
                else {
                  FUN_078d0cd4();
                }
              }
              if ((int)uVar10 < (int)unaff_w20) {
                psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
                lVar6 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar10;
                while (*psVar7 == 0x30) {
                  if (DAT_0a52453b == '\0') {
                    FUN_04447ba8(PTR_DAT_09f3b670);
                    DAT_0a52453b = '\x01';
                  }
                  uVar5 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_07a42654;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                  }
                  else {
                    FUN_078d0cd4();
                  }
                  uVar10 = uVar10 + 1;
                  lVar6 = lVar6 + -1;
                  psVar7 = psVar7 + 1;
                  if (lVar6 == 0) goto LAB_07a424f4;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                goto switchD_07a41cec_caseD_2c;
              }
            }
          }
          else {
            if (((int)uVar10 < (int)unaff_w20) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2) == 0x30)) {
              uVar4 = 0;
              goto LAB_07a423c0;
            }
            iVar8 = *(int *)(unaff_x29 + -0x38) + 2;
            if ((int)unaff_w20 <= iVar8) {
LAB_07a42400:
              if (DAT_0a52453b == '\0') {
                FUN_04447ba8(PTR_DAT_09f3b670);
                DAT_0a52453b = '\x01';
              }
              uVar5 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_07a42654;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = uVar11;
                *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
              }
              else {
                FUN_078d0cd4();
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              goto switchD_07a41cec_caseD_2c;
            }
            sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
            if (sVar12 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30)
              goto LAB_07a42400;
              uVar4 = 0;
            }
            else {
              if ((sVar12 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30))
              goto LAB_07a42400;
              uVar4 = 1;
            }
LAB_07a423c0:
            uVar5 = *(int *)(unaff_x29 + -0x38) + 2;
            uVar10 = uVar5;
            if ((int)uVar5 < (int)unaff_w20) {
              do {
                uVar10 = uVar5;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar5 * 2) != 0x30) break;
                uVar5 = uVar5 + 1;
                uVar10 = unaff_w20;
              } while (unaff_w20 != uVar5);
            }
            if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar4;
              thunk_FUN_044a54b4();
            }
            FUN_07a474a8();
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
          goto switchD_07a41cec_caseD_2c;
        }
      case 0x24:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2d:
      case 0x2f:
switchD_07a41cec_caseD_24:
        if (DAT_0a52453b == '\0') {
          FUN_04447ba8(PTR_DAT_09f3b670);
          DAT_0a52453b = '\x01';
        }
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        uVar5 = *(uint *)(unaff_x22 + 0x10);
        if ((int)uVar5 <= (int)uVar1) {
LAB_07a41ea8:
          FUN_078d0cd4();
          goto switchD_07a41cec_caseD_2c;
        }
      }
    }
    else {
      if (uVar11 != 0x5c) {
        if (uVar11 == 0x65) goto LAB_07a41ed8;
        if (uVar11 == 0x2030) {
          if (lVar6 == 0) goto LAB_07a42658;
          lVar6 = *(long *)(lVar6 + 0x98);
          goto joined_r0x07a41dd4;
        }
        goto switchD_07a41cec_caseD_24;
      }
      if (((int)unaff_w20 <= (int)uVar10) ||
         (uVar11 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2), uVar11 == 0))
      goto switchD_07a41cec_caseD_2c;
      if (DAT_0a52453b == '\0') {
        FUN_04447ba8(PTR_DAT_09f3b670);
        DAT_0a52453b = '\x01';
      }
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      uVar5 = *(uint *)(unaff_x22 + 0x10);
      uVar10 = *(int *)(unaff_x29 + -0x38) + 2;
      if ((int)uVar5 <= (int)uVar1) goto LAB_07a41ea8;
    }
    if (uVar5 <= uVar1) goto LAB_07a42654;
    *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar1 * 2) = uVar11;
    *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
    goto switchD_07a41cec_caseD_2c;
  }
  goto code_r0x07a41d24;
switchD_07a41cec_caseD_22:
  if ((int)uVar10 < (int)unaff_w20) goto code_r0x07a41cf8;
  goto switchD_07a41cec_caseD_2c;
code_r0x07a41cf8:
  *(int *)(unaff_x29 + -0x3c) = iVar14;
  *(int *)(unaff_x29 + -0x4c) = iVar9;
  unaff_x24 = (ulong)uVar10 << 0x20;
  unaff_w21 = ~*(uint *)(unaff_x29 + -0x38);
  unaff_x28 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar10 * 2);
  unaff_x25 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar10;
  goto LAB_07a41d1c;
}


