/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasNoDefinedType
ENTRY_POINT: 07a42408
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasNoDefinedType(void)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint in_w8;
  uint unaff_w19;
  uint unaff_w20;
  long lVar6;
  short *psVar7;
  long unaff_x22;
  short *unaff_x23;
  int iVar8;
  int unaff_w24;
  uint uVar9;
  short sVar10;
  ushort unaff_w26;
  uint uVar11;
  uint unaff_w27;
  long lVar12;
  int unaff_w28;
  ushort *puVar13;
  long unaff_x29;
  
code_r0x07a42408:
  if (in_w8 == 0) {
    FUN_04447ba8(PTR_DAT_09f3b670);
    DAT_0a52453b = 1;
  }
  uVar11 = *(uint *)(unaff_x22 + 0x18);
  if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar11) {
LAB_07a42654:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = unaff_w26;
    *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
  }
  else {
    FUN_078d0cd4();
  }
  *(undefined4 *)(unaff_x29 + -0x5c) = 1;
switchD_07a41cec_caseD_2c:
  *(int *)(unaff_x29 + -0x4c) = unaff_w24;
  *(uint *)(unaff_x29 + -0x38) = unaff_w27;
  if ((((int)unaff_w20 <= (int)unaff_w27) ||
      (unaff_w26 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2)
      , unaff_w26 == 0x3b)) || (unaff_w26 == 0)) {
LAB_07a424f4:
    if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  unaff_w24 = *(int *)(unaff_x29 + -0x4c);
  uVar11 = (uint)unaff_w26;
  if (((unaff_w24 < 1) || (0x30 < unaff_w26)) ||
     ((1L << ((ulong)uVar11 & 0x3f) & 0x1400800000000U) == 0)) {
    lVar6 = *(long *)(unaff_x29 + -0x48);
  }
  else {
    lVar6 = *(long *)(unaff_x29 + -0x48);
    uVar9 = *(uint *)(unaff_x29 + -0x28);
    iVar8 = unaff_w24 + 1;
    *(int *)(unaff_x29 + -0x3c) = unaff_w28 - unaff_w24;
    do {
      sVar10 = *unaff_x23;
      sVar3 = 0x30;
      if (sVar10 != 0) {
        unaff_x23 = unaff_x23 + 1;
        sVar3 = sVar10;
      }
      if (DAT_0a52453b == 0) {
        FUN_04447ba8(PTR_DAT_09f3b670);
        DAT_0a52453b = 1;
      }
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_07a42654;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar3;
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      }
      else {
        FUN_078d0cd4();
      }
      if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar9 & 1) == 0)) {
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_07a42654;
        if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
          if (lVar6 == 0) goto LAB_07a42658;
          lVar12 = *(long *)(lVar6 + 0x40);
          if (DAT_0a5251ab == '\0') {
            FUN_04447ba8(PTR_DAT_09f3b670);
            DAT_0a5251ab = '\x01';
          }
          if (lVar12 == 0) goto LAB_07a42658;
          if (*(int *)(lVar12 + 0x10) == 1) {
            uVar9 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar9) goto LAB_07a41c84;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_07a42654;
            lVar6 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_078aee34(lVar12,0,0);
            *(undefined2 *)(lVar6 + (long)(int)uVar9 * 2) = uVar4;
            lVar6 = *(long *)(unaff_x29 + -0x48);
            *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
          }
          else {
LAB_07a41c84:
            FUN_078d0e00();
          }
          uVar9 = *(uint *)(unaff_x29 + -0x28);
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
  if (0x45 < uVar11) {
    if (unaff_w26 != 0x5c) {
      if (unaff_w26 == 0x65) goto LAB_07a41ed8;
      if (unaff_w26 == 0x2030) {
        if (lVar6 == 0) goto LAB_07a42658;
        lVar6 = *(long *)(lVar6 + 0x98);
        goto joined_r0x07a41dd4;
      }
      goto switchD_07a41cec_caseD_24;
    }
    if (((int)unaff_w27 < (int)unaff_w20) &&
       (unaff_w26 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2),
       unaff_w26 != 0)) {
      if (DAT_0a52453b == 0) {
        FUN_04447ba8(PTR_DAT_09f3b670);
        DAT_0a52453b = 1;
      }
      uVar9 = *(uint *)(unaff_x22 + 0x18);
      uVar11 = *(uint *)(unaff_x22 + 0x10);
      unaff_w27 = *(int *)(unaff_x29 + -0x38) + 2;
      if ((int)uVar9 < (int)uVar11) {
LAB_07a41f40:
        if (uVar11 <= uVar9) goto LAB_07a42654;
        *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = unaff_w26;
        *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
      }
      else {
LAB_07a41ea8:
        FUN_078d0cd4();
      }
    }
    goto switchD_07a41cec_caseD_2c;
  }
  switch(unaff_w26) {
  case 0x22:
  case 0x27:
    if ((int)unaff_w27 < (int)unaff_w20) {
      *(int *)(unaff_x29 + -0x3c) = unaff_w28;
      *(int *)(unaff_x29 + -0x4c) = unaff_w24;
      lVar6 = (ulong)unaff_w27 << 0x20;
      uVar9 = ~*(uint *)(unaff_x29 + -0x38);
      puVar13 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
      lVar12 = *(long *)(unaff_x29 + -0x88) - (long)(int)unaff_w27;
      while( true ) {
        uVar1 = *puVar13;
        if ((uVar1 == 0) || (uVar1 == uVar11)) break;
        if (DAT_0a52453b == 0) {
          FUN_04447ba8(PTR_DAT_09f3b670);
          DAT_0a52453b = 1;
        }
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_07a42654;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = uVar1;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        }
        else {
          FUN_078d0cd4();
        }
        lVar6 = lVar6 + 0x100000000;
        uVar9 = uVar9 - 1;
        lVar12 = lVar12 + -1;
        puVar13 = puVar13 + 1;
        if (lVar12 == 0) goto LAB_07a424f4;
      }
      unaff_w24 = *(int *)(unaff_x29 + -0x4c);
      unaff_w28 = *(int *)(unaff_x29 + -0x3c);
      unaff_w27 = (*(short *)((lVar6 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar9;
    }
    goto switchD_07a41cec_caseD_2c;
  case 0x23:
  case 0x30:
    goto switchD_07a41cec_caseD_23;
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
      uVar11 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_07a42654;
        lVar12 = *(long *)(unaff_x22 + 8);
        uVar4 = FUN_078aee34(lVar6,0,0);
        *(undefined2 *)(lVar12 + (long)(int)uVar11 * 2) = uVar4;
        *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
        goto switchD_07a41cec_caseD_2c;
      }
    }
    FUN_078d0e00();
    goto switchD_07a41cec_caseD_2c;
  case 0x2c:
    goto switchD_07a41cec_caseD_2c;
  case 0x2e:
    if ((*(uint *)(unaff_x29 + -0x7c) & 1) != 0 || unaff_w28 != 0) goto switchD_07a41cec_caseD_2c;
    if ((-1 < *(int *)(unaff_x29 + -0x74)) &&
       ((*(int *)(unaff_x29 + -0x1c) <= *(int *)(unaff_x29 + -0x34) || (*unaff_x23 == 0)))) {
      *(undefined4 *)(unaff_x29 + -0x7c) = 0;
      unaff_w28 = 0;
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
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_07a42654;
          lVar12 = *(long *)(unaff_x22 + 8);
          uVar4 = FUN_078aee34(lVar6,0,0);
          *(undefined2 *)(lVar12 + (long)(int)uVar11 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
          unaff_w28 = 0;
          *(undefined4 *)(unaff_x29 + -0x7c) = 1;
          goto switchD_07a41cec_caseD_2c;
        }
      }
      FUN_078d0e00();
      unaff_w28 = 0;
      *(undefined4 *)(unaff_x29 + -0x7c) = 1;
      goto switchD_07a41cec_caseD_2c;
    }
LAB_07a42658:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  default:
    if (unaff_w26 == 0x45) {
LAB_07a41ed8:
      if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
        iVar8 = *(int *)(unaff_x29 + -0x38);
        if (DAT_0a52453b == 0) {
          FUN_04447ba8(PTR_DAT_09f3b670);
          DAT_0a52453b = 1;
        }
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_07a42654;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = unaff_w26;
          *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
        }
        else {
          FUN_078d0cd4();
        }
        if ((int)unaff_w27 < (int)unaff_w20) {
          sVar10 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
          if ((sVar10 == 0x2d) || (sVar10 == 0x2b)) {
            if (DAT_0a52453b == 0) {
              FUN_04447ba8(PTR_DAT_09f3b670);
              DAT_0a52453b = 1;
            }
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            unaff_w27 = iVar8 + 2;
            if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_07a42654;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = sVar10;
              *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            }
            else {
              FUN_078d0cd4();
            }
          }
          if ((int)unaff_w27 < (int)unaff_w20) {
            psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
            lVar6 = *(long *)(unaff_x29 + -0x88) - (long)(int)unaff_w27;
            while (*psVar7 == 0x30) {
              if (DAT_0a52453b == 0) {
                FUN_04447ba8(PTR_DAT_09f3b670);
                DAT_0a52453b = 1;
              }
              uVar11 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_07a42654;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = 0x30;
                *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
              }
              else {
                FUN_078d0cd4();
              }
              unaff_w27 = unaff_w27 + 1;
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
        if (((int)unaff_w27 < (int)unaff_w20) &&
           (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2) == 0x30)) {
          uVar5 = 0;
        }
        else {
          iVar8 = *(int *)(unaff_x29 + -0x38) + 2;
          if ((int)unaff_w20 <= iVar8) break;
          sVar10 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
          if (sVar10 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30) break;
            uVar5 = 0;
          }
          else {
            if ((sVar10 != 0x2b) ||
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30)) break;
            uVar5 = 1;
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
        if (*(int *)(*(long *)PTR_DAT_09f40bf0 + 0xe4) == 0) {
          *(undefined4 *)(unaff_x29 + -0x38) = uVar5;
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
    if (DAT_0a52453b == 0) {
      FUN_04447ba8(PTR_DAT_09f3b670);
      DAT_0a52453b = 1;
    }
    uVar9 = *(uint *)(unaff_x22 + 0x18);
    uVar11 = *(uint *)(unaff_x22 + 0x10);
    if ((int)uVar11 <= (int)uVar9) goto LAB_07a41ea8;
    goto LAB_07a41f40;
  }
  in_w8 = (uint)DAT_0a52453b;
  goto code_r0x07a42408;
switchD_07a41cec_caseD_23:
  if (unaff_w24 < 0) {
    unaff_w24 = unaff_w24 + 1;
    if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_07a4218c:
      sVar10 = 0x30;
      goto LAB_07a42190;
    }
  }
  else {
    sVar10 = *unaff_x23;
    if (sVar10 == 0) {
      if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_07a4218c;
    }
    else {
      unaff_x23 = unaff_x23 + 1;
LAB_07a42190:
      if (DAT_0a52453b == 0) {
        FUN_04447ba8(PTR_DAT_09f3b670);
        DAT_0a52453b = 1;
      }
      uVar9 = *(uint *)(unaff_x22 + 0x18);
      uVar11 = *(uint *)(unaff_x29 + -0x28);
      if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_07a42654;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar10;
        *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
      }
      else {
        FUN_078d0cd4();
      }
      if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar11 & 1) == 0)) {
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_07a42654;
        if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
          if (lVar6 == 0) goto LAB_07a42658;
          lVar6 = *(long *)(lVar6 + 0x40);
          if (DAT_0a5251ab == '\0') {
            FUN_04447ba8(PTR_DAT_09f3b670);
            DAT_0a5251ab = '\x01';
          }
          if (lVar6 == 0) goto LAB_07a42658;
          if (*(int *)(lVar6 + 0x10) == 1) {
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_07a422a8;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_07a42654;
            lVar12 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_078aee34(lVar6,0,0);
            *(undefined2 *)(lVar12 + (long)(int)uVar11 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
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
  unaff_w28 = unaff_w28 + -1;
  goto switchD_07a41cec_caseD_2c;
}


