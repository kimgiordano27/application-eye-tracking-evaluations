/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 07104c30
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties
               (undefined1 *param_1)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  short *psVar6;
  long unaff_x22;
  short *unaff_x23;
  int iVar7;
  int unaff_w24;
  long lVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  long lVar12;
  uint unaff_w27;
  int unaff_w28;
  ushort *puVar13;
  long unaff_x29;
  
code_r0x07104c30:
  lVar12 = *(long *)(unaff_x21 + 0x98);
  if (param_1[0x223] != '\0') goto LAB_07104c54;
LAB_07104c3c:
  FUN_03c8f898(PTR_DAT_08e9c268);
  DAT_0941c223 = '\x01';
LAB_07104c54:
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x10) == 1) {
      uVar11 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar11) {
LAB_071054b8:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar8 = *(long *)(unaff_x22 + 8);
        uVar4 = FUN_06f6fafc(lVar12,0,0);
        *(undefined2 *)(lVar8 + (long)(int)uVar11 * 2) = uVar4;
        *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
        goto switchD_07104b50_caseD_2c;
      }
    }
    FUN_06f92598();
switchD_07104b50_caseD_2c:
    do {
      *(int *)(unaff_x29 + -0x4c) = unaff_w24;
      *(uint *)(unaff_x29 + -0x38) = unaff_w27;
      if ((((int)unaff_w20 <= (int)unaff_w27) ||
          (uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2)
          , uVar1 == 0x3b)) || (uVar1 == 0)) {
LAB_07105358:
        if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      unaff_w24 = *(int *)(unaff_x29 + -0x4c);
      uVar11 = (uint)uVar1;
      if (((unaff_w24 < 1) || (0x30 < uVar1)) ||
         ((1L << ((ulong)uVar11 & 0x3f) & 0x1400800000000U) == 0)) {
        unaff_x21 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        unaff_x21 = *(long *)(unaff_x29 + -0x48);
        uVar9 = *(uint *)(unaff_x29 + -0x28);
        iVar7 = unaff_w24 + 1;
        *(int *)(unaff_x29 + -0x3c) = unaff_w28 - unaff_w24;
        do {
          sVar10 = *unaff_x23;
          sVar3 = 0x30;
          if (sVar10 != 0) {
            unaff_x23 = unaff_x23 + 1;
            sVar3 = sVar10;
          }
          if (DAT_0941b532 == '\0') {
            FUN_03c8f898(PTR_DAT_08e9c268);
            DAT_0941b532 = '\x01';
          }
          uVar2 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_071054b8;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar3;
            *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          }
          else {
            FUN_06f9246c();
          }
          if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar9 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_071054b8;
            if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1) {
              if (unaff_x21 == 0) goto LAB_071054bc;
              lVar12 = *(long *)(unaff_x21 + 0x40);
              if (DAT_0941c223 == '\0') {
                FUN_03c8f898(PTR_DAT_08e9c268);
                DAT_0941c223 = '\x01';
              }
              if (lVar12 == 0) goto LAB_071054bc;
              if (*(int *)(lVar12 + 0x10) == 1) {
                uVar9 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar9) goto LAB_07104ae8;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_071054b8;
                lVar8 = *(long *)(unaff_x22 + 8);
                uVar4 = FUN_06f6fafc(lVar12,0,0);
                *(undefined2 *)(lVar8 + (long)(int)uVar9 * 2) = uVar4;
                unaff_x21 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
              }
              else {
LAB_07104ae8:
                FUN_06f92598();
              }
              uVar9 = *(uint *)(unaff_x29 + -0x28);
              unaff_w19 = unaff_w19 - 1;
            }
          }
          iVar7 = iVar7 + -1;
          unaff_w28 = unaff_w28 + -1;
        } while (1 < iVar7);
        unaff_w28 = *(int *)(unaff_x29 + -0x3c);
        unaff_w24 = 0;
      }
      unaff_w27 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar11 < 0x46) goto code_r0x07104b3c;
      if (uVar1 != 0x5c) {
        if (uVar1 == 0x65) goto LAB_07104d3c;
        if (uVar1 != 0x2030) goto switchD_07104b50_caseD_24;
        if (unaff_x21 == 0) break;
        param_1 = &DAT_0941c000;
        goto code_r0x07104c30;
      }
      if (((int)unaff_w27 < (int)unaff_w20) &&
         (uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2), uVar1 != 0))
      {
        if (DAT_0941b532 == '\0') {
          FUN_03c8f898(PTR_DAT_08e9c268);
          DAT_0941b532 = '\x01';
        }
        uVar9 = *(uint *)(unaff_x22 + 0x18);
        uVar11 = *(uint *)(unaff_x22 + 0x10);
        unaff_w27 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar11 <= (int)uVar9) goto LAB_07104d0c;
        goto LAB_07104da4;
      }
    } while( true );
  }
  goto LAB_071054bc;
code_r0x07104b3c:
  switch(uVar1) {
  case 0x22:
  case 0x27:
    if ((int)unaff_w27 < (int)unaff_w20) {
      *(int *)(unaff_x29 + -0x3c) = unaff_w28;
      *(int *)(unaff_x29 + -0x4c) = unaff_w24;
      lVar12 = (ulong)unaff_w27 << 0x20;
      uVar9 = ~*(uint *)(unaff_x29 + -0x38);
      puVar13 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
      lVar8 = *(long *)(unaff_x29 + -0x88) - (long)(int)unaff_w27;
      while( true ) {
        uVar1 = *puVar13;
        if ((uVar1 == 0) || (uVar1 == uVar11)) break;
        if (DAT_0941b532 == '\0') {
          FUN_03c8f898(PTR_DAT_08e9c268);
          DAT_0941b532 = '\x01';
        }
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar2 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar2) goto LAB_071054b8;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = uVar1;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        }
        else {
          FUN_06f9246c();
        }
        lVar12 = lVar12 + 0x100000000;
        uVar9 = uVar9 - 1;
        lVar8 = lVar8 + -1;
        puVar13 = puVar13 + 1;
        if (lVar8 == 0) goto LAB_07105358;
      }
      unaff_w24 = *(int *)(unaff_x29 + -0x4c);
      unaff_w28 = *(int *)(unaff_x29 + -0x3c);
      unaff_w27 = (*(short *)((lVar12 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar9;
    }
    goto switchD_07104b50_caseD_2c;
  case 0x23:
  case 0x30:
    goto switchD_07104b50_caseD_23;
  case 0x25:
    break;
  case 0x2c:
    goto switchD_07104b50_caseD_2c;
  case 0x2e:
    if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && unaff_w28 == 0) {
      if ((*(int *)(unaff_x29 + -0x74) < 0) ||
         ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*unaff_x23 != 0)))) {
        if (unaff_x21 == 0) goto LAB_071054bc;
        lVar12 = *(long *)(unaff_x21 + 0x38);
        if (DAT_0941c223 == '\0') {
          FUN_03c8f898(PTR_DAT_08e9c268);
          DAT_0941c223 = '\x01';
        }
        if (lVar12 == 0) goto LAB_071054bc;
        if (*(int *)(lVar12 + 0x10) == 1) {
          uVar11 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_071054b8;
            lVar8 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_06f6fafc(lVar12,0,0);
            *(undefined2 *)(lVar8 + (long)(int)uVar11 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            unaff_w28 = 0;
            *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            goto switchD_07104b50_caseD_2c;
          }
        }
        FUN_06f92598();
        unaff_w28 = 0;
        *(undefined4 *)(unaff_x29 + -0x7c) = 1;
        goto switchD_07104b50_caseD_2c;
      }
      *(undefined4 *)(unaff_x29 + -0x7c) = 0;
      unaff_w28 = 0;
    }
    goto switchD_07104b50_caseD_2c;
  default:
    if (uVar1 == 0x45) {
LAB_07104d3c:
      if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
        iVar7 = *(int *)(unaff_x29 + -0x38);
        if (DAT_0941b532 == '\0') {
          FUN_03c8f898(PTR_DAT_08e9c268);
          DAT_0941b532 = '\x01';
        }
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_071054b8;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar1;
          *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
        }
        else {
          FUN_06f9246c();
        }
        if ((int)unaff_w27 < (int)unaff_w20) {
          sVar10 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
          if ((sVar10 == 0x2d) || (sVar10 == 0x2b)) {
            if (DAT_0941b532 == '\0') {
              FUN_03c8f898(PTR_DAT_08e9c268);
              DAT_0941b532 = '\x01';
            }
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            unaff_w27 = iVar7 + 2;
            if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_071054b8;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = sVar10;
              *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            }
            else {
              FUN_06f9246c();
            }
          }
          if ((int)unaff_w27 < (int)unaff_w20) {
            psVar6 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
            lVar12 = *(long *)(unaff_x29 + -0x88) - (long)(int)unaff_w27;
            while (*psVar6 == 0x30) {
              if (DAT_0941b532 == '\0') {
                FUN_03c8f898(PTR_DAT_08e9c268);
                DAT_0941b532 = '\x01';
              }
              uVar11 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_071054b8;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = 0x30;
                *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
              }
              else {
                FUN_06f9246c();
              }
              unaff_w27 = unaff_w27 + 1;
              lVar12 = lVar12 + -1;
              psVar6 = psVar6 + 1;
              if (lVar12 == 0) goto LAB_07105358;
            }
            *(undefined4 *)(unaff_x29 + -0x5c) = 0;
            goto switchD_07104b50_caseD_2c;
          }
        }
      }
      else {
        if (((int)unaff_w27 < (int)unaff_w20) &&
           (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2) == 0x30)) {
          uVar5 = 0;
        }
        else {
          iVar7 = *(int *)(unaff_x29 + -0x38) + 2;
          if ((int)unaff_w20 <= iVar7) {
LAB_07105264:
            if (DAT_0941b532 == '\0') {
              FUN_03c8f898(PTR_DAT_08e9c268);
              DAT_0941b532 = '\x01';
            }
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_071054b8;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar1;
              *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            }
            else {
              FUN_06f9246c();
            }
            *(undefined4 *)(unaff_x29 + -0x5c) = 1;
            goto switchD_07104b50_caseD_2c;
          }
          sVar10 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w27 * 2);
          if (sVar10 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar7 * 2) != 0x30)
            goto LAB_07105264;
            uVar5 = 0;
          }
          else {
            if ((sVar10 != 0x2b) ||
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar7 * 2) != 0x30))
            goto LAB_07105264;
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
        if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
          *(undefined4 *)(unaff_x29 + -0x38) = uVar5;
          thunk_FUN_03cd7500();
        }
        FUN_0710a300();
      }
      *(undefined4 *)(unaff_x29 + -0x5c) = 0;
      goto switchD_07104b50_caseD_2c;
    }
  case 0x24:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2d:
  case 0x2f:
switchD_07104b50_caseD_24:
    if (DAT_0941b532 == '\0') {
      FUN_03c8f898(PTR_DAT_08e9c268);
      DAT_0941b532 = '\x01';
    }
    uVar9 = *(uint *)(unaff_x22 + 0x18);
    uVar11 = *(uint *)(unaff_x22 + 0x10);
    if ((int)uVar9 < (int)uVar11) {
LAB_07104da4:
      if (uVar11 <= uVar9) goto LAB_071054b8;
      *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = uVar1;
      *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
    }
    else {
LAB_07104d0c:
      FUN_06f9246c();
    }
    goto switchD_07104b50_caseD_2c;
  }
  if (unaff_x21 == 0) {
LAB_071054bc:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar12 = *(long *)(unaff_x21 + 0x90);
  if (DAT_0941c223 == '\0') goto LAB_07104c3c;
  goto LAB_07104c54;
switchD_07104b50_caseD_23:
  if (unaff_w24 < 0) {
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(unaff_x29 + -0x78) < unaff_w28) goto LAB_07105120;
LAB_07104ff0:
    sVar10 = 0x30;
  }
  else {
    sVar10 = *unaff_x23;
    if (sVar10 == 0) {
      if (unaff_w28 <= *(int *)(unaff_x29 + -0x74)) goto LAB_07105120;
      goto LAB_07104ff0;
    }
    unaff_x23 = unaff_x23 + 1;
  }
  if (DAT_0941b532 == '\0') {
    FUN_03c8f898(PTR_DAT_08e9c268);
    DAT_0941b532 = '\x01';
  }
  uVar9 = *(uint *)(unaff_x22 + 0x18);
  uVar11 = *(uint *)(unaff_x29 + -0x28);
  if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_071054b8;
    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar10;
    *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
  }
  else {
    FUN_06f9246c();
  }
  if (((int)unaff_w19 < 0) || (unaff_w28 < 2 || (uVar11 & 1) != 0)) goto LAB_07105120;
  if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_071054b8;
  if (unaff_w28 != *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1)
  goto LAB_07105120;
  if (unaff_x21 == 0) goto LAB_071054bc;
  lVar12 = *(long *)(unaff_x21 + 0x40);
  if (DAT_0941c223 == '\0') {
    FUN_03c8f898(PTR_DAT_08e9c268);
    DAT_0941c223 = '\x01';
  }
  if (lVar12 == 0) goto LAB_071054bc;
  if (*(int *)(lVar12 + 0x10) == 1) {
    uVar11 = *(uint *)(unaff_x22 + 0x18);
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_0710510c;
    if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_071054b8;
    lVar8 = *(long *)(unaff_x22 + 8);
    uVar4 = FUN_06f6fafc(lVar12,0,0);
    *(undefined2 *)(lVar8 + (long)(int)uVar11 * 2) = uVar4;
    *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
  }
  else {
LAB_0710510c:
    FUN_06f92598();
  }
  unaff_w19 = unaff_w19 - 1;
LAB_07105120:
  unaff_w28 = unaff_w28 + -1;
  goto switchD_07104b50_caseD_2c;
}


