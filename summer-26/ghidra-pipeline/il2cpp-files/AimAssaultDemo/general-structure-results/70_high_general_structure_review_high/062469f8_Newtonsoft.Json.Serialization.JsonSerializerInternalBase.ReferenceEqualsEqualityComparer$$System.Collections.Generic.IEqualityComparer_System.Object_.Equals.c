/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.Equals
ENTRY_POINT: 062469f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_Equals
               (void)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int in_w8;
  uint unaff_w19;
  uint unaff_w20;
  long lVar6;
  short *psVar7;
  long unaff_x22;
  short *unaff_x23;
  int iVar8;
  uint uVar9;
  int unaff_w25;
  short sVar10;
  uint uVar11;
  uint unaff_w27;
  long lVar12;
  int unaff_w28;
  ushort *puVar13;
  long unaff_x29;
  
code_r0x062469f8:
  *(int *)(unaff_x22 + 0x18) = in_w8;
switchD_062468ac_caseD_2c:
  *(int *)(unaff_x29 + -0x4c) = unaff_w25;
  *(uint *)(unaff_x29 + -0x38) = unaff_w27;
  if ((((int)unaff_w20 <= (int)unaff_w27) ||
      (uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2),
      uVar1 == 0x3b)) || (uVar1 == 0)) {
LAB_062470b4:
    if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  unaff_w25 = *(int *)(unaff_x29 + -0x4c);
  uVar11 = (uint)uVar1;
  if (((unaff_w25 < 1) || (0x30 < uVar1)) ||
     ((1L << ((ulong)uVar11 & 0x3f) & 0x1400800000000U) == 0)) {
    lVar6 = *(long *)(unaff_x29 + -0x48);
  }
  else {
    lVar6 = *(long *)(unaff_x29 + -0x48);
    uVar9 = *(uint *)(unaff_x29 + -0x28);
    iVar8 = unaff_w25 + 1;
    *(int *)(unaff_x29 + -0x3c) = unaff_w28 - unaff_w25;
    do {
      sVar10 = *unaff_x23;
      sVar3 = 0x30;
      if (sVar10 != 0) {
        unaff_x23 = unaff_x23 + 1;
        sVar3 = sVar10;
      }
      if (DAT_0825aded == '\0') {
        FUN_0373b518(PTR_DAT_07da5848);
        DAT_0825aded = '\x01';
      }
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_06247214;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar3;
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      }
      else {
        FUN_060dbfe4();
      }
      if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar9 & 1) == 0)) {
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_06247214;
        if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
          if (lVar6 == 0) goto LAB_06247218;
          lVar12 = *(long *)(lVar6 + 0x40);
          if (DAT_0825ba12 == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825ba12 = '\x01';
          }
          if (lVar12 == 0) goto LAB_06247218;
          if (*(int *)(lVar12 + 0x10) == 1) {
            uVar9 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar9) goto LAB_06246844;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_06247214;
            lVar6 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_060bb390(lVar12,0,0);
            *(undefined2 *)(lVar6 + (long)(int)uVar9 * 2) = uVar4;
            lVar6 = *(long *)(unaff_x29 + -0x48);
            *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
          }
          else {
LAB_06246844:
            FUN_060dc110();
          }
          uVar9 = *(uint *)(unaff_x29 + -0x28);
          unaff_w19 = unaff_w19 - 1;
        }
      }
      iVar8 = iVar8 + -1;
      unaff_w28 = unaff_w28 + -1;
    } while (1 < iVar8);
    unaff_w28 = *(int *)(unaff_x29 + -0x3c);
    unaff_w25 = 0;
  }
  unaff_w27 = *(int *)(unaff_x29 + -0x38) + 1;
  if (0x45 < uVar11) {
    if (uVar1 != 0x5c) {
      if (uVar1 == 0x65) goto LAB_06246a98;
      if (uVar1 == 0x2030) {
        if (lVar6 == 0) goto LAB_06247218;
        lVar6 = *(long *)(lVar6 + 0x98);
        goto joined_r0x06246994;
      }
      goto switchD_062468ac_caseD_24;
    }
    if (((int)unaff_w27 < (int)unaff_w20) &&
       (uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2), uVar1 != 0)) {
      if (DAT_0825aded == '\0') {
        FUN_0373b518(PTR_DAT_07da5848);
        DAT_0825aded = '\x01';
      }
      uVar9 = *(uint *)(unaff_x22 + 0x18);
      uVar11 = *(uint *)(unaff_x22 + 0x10);
      unaff_w27 = *(int *)(unaff_x29 + -0x38) + 2;
      if ((int)uVar9 < (int)uVar11) {
LAB_06246b00:
        if (uVar11 <= uVar9) goto LAB_06247214;
        *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = uVar1;
        *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
      }
      else {
LAB_06246a68:
        FUN_060dbfe4();
      }
    }
    goto switchD_062468ac_caseD_2c;
  }
  switch(uVar1) {
  case 0x22:
  case 0x27:
    if ((int)unaff_w27 < (int)unaff_w20) {
      *(int *)(unaff_x29 + -0x3c) = unaff_w28;
      *(int *)(unaff_x29 + -0x4c) = unaff_w25;
      lVar6 = (ulong)unaff_w27 << 0x20;
      uVar9 = ~*(uint *)(unaff_x29 + -0x38);
      puVar13 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
      lVar12 = *(long *)(unaff_x29 + -0x88) - (long)(int)unaff_w27;
      while( true ) {
        uVar1 = *puVar13;
        if ((uVar1 == 0) || (uVar1 == uVar11)) break;
        if (DAT_0825aded == '\0') {
          FUN_0373b518(PTR_DAT_07da5848);
          DAT_0825aded = '\x01';
        }
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_06247214;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = uVar1;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        }
        else {
          FUN_060dbfe4();
        }
        lVar6 = lVar6 + 0x100000000;
        uVar9 = uVar9 - 1;
        lVar12 = lVar12 + -1;
        puVar13 = puVar13 + 1;
        if (lVar12 == 0) goto LAB_062470b4;
      }
      unaff_w25 = *(int *)(unaff_x29 + -0x4c);
      unaff_w28 = *(int *)(unaff_x29 + -0x3c);
      unaff_w27 = (*(short *)((lVar6 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar9;
    }
    goto switchD_062468ac_caseD_2c;
  case 0x23:
  case 0x30:
    goto switchD_062468ac_caseD_23;
  case 0x25:
    if (lVar6 == 0) goto LAB_06247218;
    lVar6 = *(long *)(lVar6 + 0x90);
joined_r0x06246994:
    if (DAT_0825ba12 == '\0') {
      FUN_0373b518(PTR_DAT_07da5848);
      DAT_0825ba12 = '\x01';
    }
    if (lVar6 == 0) goto LAB_06247218;
    if (*(int *)(lVar6 + 0x10) == 1) {
      uVar11 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) break;
    }
    FUN_060dc110();
    goto switchD_062468ac_caseD_2c;
  case 0x2c:
    goto switchD_062468ac_caseD_2c;
  case 0x2e:
    if ((*(uint *)(unaff_x29 + -0x7c) & 1) != 0 || unaff_w28 != 0) goto switchD_062468ac_caseD_2c;
    if ((-1 < *(int *)(unaff_x29 + -0x74)) &&
       ((*(int *)(unaff_x29 + -0x1c) <= *(int *)(unaff_x29 + -0x34) || (*unaff_x23 == 0)))) {
      *(undefined4 *)(unaff_x29 + -0x7c) = 0;
      unaff_w28 = 0;
      goto switchD_062468ac_caseD_2c;
    }
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x38);
      if (DAT_0825ba12 == '\0') {
        FUN_0373b518(PTR_DAT_07da5848);
        DAT_0825ba12 = '\x01';
      }
      if (lVar6 == 0) goto LAB_06247218;
      if (*(int *)(lVar6 + 0x10) == 1) {
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_06247214;
          lVar12 = *(long *)(unaff_x22 + 8);
          uVar4 = FUN_060bb390(lVar6,0,0);
          *(undefined2 *)(lVar12 + (long)(int)uVar11 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
          unaff_w28 = 0;
          *(undefined4 *)(unaff_x29 + -0x7c) = 1;
          goto switchD_062468ac_caseD_2c;
        }
      }
      FUN_060dc110();
      unaff_w28 = 0;
      *(undefined4 *)(unaff_x29 + -0x7c) = 1;
      goto switchD_062468ac_caseD_2c;
    }
LAB_06247218:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  default:
    if (uVar1 == 0x45) {
LAB_06246a98:
      if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
        iVar8 = *(int *)(unaff_x29 + -0x38);
        if (DAT_0825aded == '\0') {
          FUN_0373b518(PTR_DAT_07da5848);
          DAT_0825aded = '\x01';
        }
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_06247214;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar1;
          *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
        }
        else {
          FUN_060dbfe4();
        }
        if ((int)unaff_w27 < (int)unaff_w20) {
          sVar10 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
          if ((sVar10 == 0x2d) || (sVar10 == 0x2b)) {
            if (DAT_0825aded == '\0') {
              FUN_0373b518(PTR_DAT_07da5848);
              DAT_0825aded = '\x01';
            }
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            unaff_w27 = iVar8 + 2;
            if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_06247214;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = sVar10;
              *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            }
            else {
              FUN_060dbfe4();
            }
          }
          if ((int)unaff_w27 < (int)unaff_w20) {
            psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
            lVar6 = *(long *)(unaff_x29 + -0x88) - (long)(int)unaff_w27;
            while (*psVar7 == 0x30) {
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar11 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_06247214;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = 0x30;
                *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
              }
              else {
                FUN_060dbfe4();
              }
              unaff_w27 = unaff_w27 + 1;
              lVar6 = lVar6 + -1;
              psVar7 = psVar7 + 1;
              if (lVar6 == 0) goto LAB_062470b4;
            }
            *(undefined4 *)(unaff_x29 + -0x5c) = 0;
            goto switchD_062468ac_caseD_2c;
          }
        }
      }
      else {
        if (((int)unaff_w27 < (int)unaff_w20) &&
           (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2) == 0x30)) {
          uVar5 = 0;
          goto LAB_06246f80;
        }
        iVar8 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)unaff_w20 <= iVar8) {
LAB_06246fc0:
          if (DAT_0825aded == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825aded = '\x01';
          }
          uVar11 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_06247214;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar1;
            *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
          }
          else {
            FUN_060dbfe4();
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 1;
          goto switchD_062468ac_caseD_2c;
        }
        sVar10 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
        if (sVar10 == 0x2d) {
          if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30) goto LAB_06246fc0;
          uVar5 = 0;
        }
        else {
          if ((sVar10 != 0x2b) ||
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar8 * 2) != 0x30))
          goto LAB_06246fc0;
          uVar5 = 1;
        }
LAB_06246f80:
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
        if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
          *(undefined4 *)(unaff_x29 + -0x38) = uVar5;
          thunk_FUN_03798b70();
        }
        FUN_0624c068();
      }
      *(undefined4 *)(unaff_x29 + -0x5c) = 0;
      goto switchD_062468ac_caseD_2c;
    }
  case 0x24:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2d:
  case 0x2f:
switchD_062468ac_caseD_24:
    if (DAT_0825aded == '\0') {
      FUN_0373b518(PTR_DAT_07da5848);
      DAT_0825aded = '\x01';
    }
    uVar9 = *(uint *)(unaff_x22 + 0x18);
    uVar11 = *(uint *)(unaff_x22 + 0x10);
    if ((int)uVar11 <= (int)uVar9) goto LAB_06246a68;
    goto LAB_06246b00;
  }
  if (*(uint *)(unaff_x22 + 0x10) <= uVar11) {
LAB_06247214:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  lVar12 = *(long *)(unaff_x22 + 8);
  uVar4 = FUN_060bb390(lVar6,0,0);
  in_w8 = uVar11 + 1;
  *(undefined2 *)(lVar12 + (long)(int)uVar11 * 2) = uVar4;
  goto code_r0x062469f8;
switchD_062468ac_caseD_23:
  if (unaff_w25 < 0) {
    unaff_w25 = unaff_w25 + 1;
    if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_06246d4c:
      sVar10 = 0x30;
      goto LAB_06246d50;
    }
  }
  else {
    sVar10 = *unaff_x23;
    if (sVar10 == 0) {
      if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_06246d4c;
    }
    else {
      unaff_x23 = unaff_x23 + 1;
LAB_06246d50:
      if (DAT_0825aded == '\0') {
        FUN_0373b518(PTR_DAT_07da5848);
        DAT_0825aded = '\x01';
      }
      uVar9 = *(uint *)(unaff_x22 + 0x18);
      uVar11 = *(uint *)(unaff_x29 + -0x28);
      if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_06247214;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar10;
        *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
      }
      else {
        FUN_060dbfe4();
      }
      if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar11 & 1) == 0)) {
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_06247214;
        if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
          if (lVar6 == 0) goto LAB_06247218;
          lVar6 = *(long *)(lVar6 + 0x40);
          if (DAT_0825ba12 == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825ba12 = '\x01';
          }
          if (lVar6 == 0) goto LAB_06247218;
          if (*(int *)(lVar6 + 0x10) == 1) {
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_06246e68;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_06247214;
            lVar12 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_060bb390(lVar6,0,0);
            *(undefined2 *)(lVar12 + (long)(int)uVar11 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
          }
          else {
LAB_06246e68:
            FUN_060dc110();
          }
          unaff_w19 = unaff_w19 - 1;
        }
      }
    }
  }
  unaff_w28 = unaff_w28 + -1;
  goto switchD_062468ac_caseD_2c;
}


