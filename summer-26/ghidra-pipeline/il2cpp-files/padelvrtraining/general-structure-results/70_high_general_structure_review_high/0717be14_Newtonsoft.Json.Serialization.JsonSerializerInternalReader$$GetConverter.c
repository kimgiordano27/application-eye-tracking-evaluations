/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetConverter
ENTRY_POINT: 0717be14
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter(undefined1 *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint unaff_w19;
  uint unaff_w20;
  uint uVar6;
  long unaff_x21;
  long lVar7;
  short *psVar8;
  long unaff_x22;
  short *unaff_x23;
  int unaff_w24;
  int iVar9;
  uint unaff_w25;
  short sVar10;
  uint unaff_w26;
  short unaff_w27;
  uint uVar11;
  long lVar12;
  int unaff_w28;
  ushort *puVar13;
  long unaff_x29;
  
code_r0x0717be14:
  param_1[0x200] = 1;
LAB_0717be1c:
                    /* try { // try from 0717be1c to 0727be23 has its CatchHandler @ 0717c158 */
  uVar11 = *(uint *)(unaff_x22 + 0x18);
                    /* try { // try from 0717be28 to 0727be63 has its CatchHandler @ 0717c17c */
  if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_0717c8d8;
    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = unaff_w27;
    *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
  }
  else {
    FUN_06ff15f4();
  }
  if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (unaff_w25 & 1) == 0)) {
                    /* try { // try from 0717be70 to 0727be73 has its CatchHandler @ 0717c1dc */
    if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) {
LAB_0717c8d8:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    if (unaff_w28 != *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1)
    goto LAB_0717bf20;
    if (unaff_x21 == 0) {
LAB_0717c8dc:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar12 = *(long *)(unaff_x21 + 0x40);
    if (DAT_09843015 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091fa408);
      DAT_09843015 = '\x01';
    }
    if (lVar12 == 0) goto LAB_0717c8dc;
    if (*(int *)(lVar12 + 0x10) == 1) {
      uVar11 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_0717bf08;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_0717c8d8;
      lVar7 = *(long *)(unaff_x22 + 8);
      uVar4 = FUN_06fcd2c8(lVar12,0,0);
      *(undefined2 *)(lVar7 + (long)(int)uVar11 * 2) = uVar4;
      unaff_x21 = *(long *)(unaff_x29 + -0x48);
      *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
    }
    else {
LAB_0717bf08:
      FUN_06ff1720();
    }
    unaff_w25 = *(uint *)(unaff_x29 + -0x28);
    unaff_w19 = unaff_w19 - 1;
  }
LAB_0717bf20:
  unaff_w24 = unaff_w24 + -1;
  unaff_w28 = unaff_w28 + -1;
  if (unaff_w24 < 2) {
    unaff_w28 = *(int *)(unaff_x29 + -0x3c);
    iVar9 = 0;
    do {
      uVar11 = *(int *)(unaff_x29 + -0x38) + 1;
      if (unaff_w26 < 0x46) {
        switch(unaff_w26) {
        case 0x22:
        case 0x27:
          if ((int)uVar11 < (int)unaff_w20) {
            *(int *)(unaff_x29 + -0x3c) = unaff_w28;
            *(int *)(unaff_x29 + -0x4c) = iVar9;
            lVar12 = (ulong)uVar11 << 0x20;
            uVar6 = ~*(uint *)(unaff_x29 + -0x38);
            puVar13 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2);
            lVar7 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar11;
            while( true ) {
              uVar2 = *puVar13;
              if ((uVar2 == 0) || (uVar2 == unaff_w26)) break;
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar11 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_0717c8d8;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
              }
              else {
                FUN_06ff15f4();
              }
              lVar12 = lVar12 + 0x100000000;
              uVar6 = uVar6 - 1;
              lVar7 = lVar7 + -1;
              puVar13 = puVar13 + 1;
              if (lVar7 == 0) goto LAB_0717c778;
            }
            iVar9 = *(int *)(unaff_x29 + -0x4c);
            unaff_w28 = *(int *)(unaff_x29 + -0x3c);
            uVar11 = (*(short *)((lVar12 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar6;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar9 < 0) {
            iVar9 = iVar9 + 1;
            if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_0717c410:
              sVar10 = 0x30;
              goto LAB_0717c414;
            }
          }
          else {
            sVar10 = *unaff_x23;
            if (sVar10 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_0717c410;
            }
            else {
              unaff_x23 = unaff_x23 + 1;
LAB_0717c414:
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar3 = *(uint *)(unaff_x22 + 0x18);
              uVar6 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar3 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar3) goto LAB_0717c8d8;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = sVar10;
                *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
              }
              else {
                FUN_06ff15f4();
              }
              if ((-1 < (int)unaff_w19) && (1 < unaff_w28 && (uVar6 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= unaff_w19) goto LAB_0717c8d8;
                if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w19 * 4) + 1)
                {
                  if (unaff_x21 == 0) goto LAB_0717c8dc;
                  lVar12 = *(long *)(unaff_x21 + 0x40);
                  if (DAT_09843015 == '\0') {
                    FUN_03d2d2b0(PTR_DAT_091fa408);
                    DAT_09843015 = '\x01';
                  }
                  if (lVar12 == 0) goto LAB_0717c8dc;
                  if (*(int *)(lVar12 + 0x10) == 1) {
                    uVar6 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar6) goto LAB_0717c52c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_0717c8d8;
                    lVar7 = *(long *)(unaff_x22 + 8);
                    uVar4 = FUN_06fcd2c8(lVar12,0,0);
                    *(undefined2 *)(lVar7 + (long)(int)uVar6 * 2) = uVar4;
                    *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
                  }
                  else {
LAB_0717c52c:
                    FUN_06ff1720();
                  }
                  unaff_w19 = unaff_w19 - 1;
                }
              }
            }
          }
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
switchD_0717bf70_caseD_24:
          if (DAT_09842200 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091fa408);
            DAT_09842200 = '\x01';
          }
          uVar3 = *(uint *)(unaff_x22 + 0x18);
          uVar6 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar3 < (int)uVar6) goto LAB_0717c1c4;
LAB_0717c12c:
          FUN_06ff15f4();
          break;
        case 0x25:
          if (unaff_x21 == 0) goto LAB_0717c8dc;
          lVar12 = *(long *)(unaff_x21 + 0x90);
joined_r0x0717c058:
          if (DAT_09843015 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091fa408);
            DAT_09843015 = '\x01';
          }
          if (lVar12 == 0) goto LAB_0717c8dc;
          if (*(int *)(lVar12 + 0x10) == 1) {
            uVar6 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar6 < *(uint *)(unaff_x22 + 0x10)) {
                lVar7 = *(long *)(unaff_x22 + 8);
                uVar4 = FUN_06fcd2c8(lVar12,0,0);
                *(undefined2 *)(lVar7 + (long)(int)uVar6 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
                break;
              }
              goto LAB_0717c8d8;
            }
          }
          FUN_06ff1720();
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && unaff_w28 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*unaff_x23 != 0)))) {
              if (unaff_x21 == 0) goto LAB_0717c8dc;
              lVar12 = *(long *)(unaff_x21 + 0x38);
              if (DAT_09843015 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09843015 = '\x01';
              }
              if (lVar12 == 0) goto LAB_0717c8dc;
              if (*(int *)(lVar12 + 0x10) == 1) {
                uVar6 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar6 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar7 = *(long *)(unaff_x22 + 8);
                    uVar4 = FUN_06fcd2c8(lVar12,0,0);
                    *(undefined2 *)(lVar7 + (long)(int)uVar6 * 2) = uVar4;
                    *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
                    unaff_w28 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_0717c8d8;
                }
              }
              FUN_06ff1720();
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
          if (unaff_w26 != 0x45) goto switchD_0717bf70_caseD_24;
LAB_0717c15c:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar1 = *(int *)(unaff_x29 + -0x38);
            if (DAT_09842200 == '\0') {
              FUN_03d2d2b0(PTR_DAT_091fa408);
              DAT_09842200 = '\x01';
            }
            uVar6 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_0717c8d8;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = (short)unaff_w26;
              *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
            }
            else {
              FUN_06ff15f4();
            }
            if ((int)uVar11 < (int)unaff_w20) {
              sVar10 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2);
              if ((sVar10 == 0x2d) || (sVar10 == 0x2b)) {
                if (DAT_09842200 == '\0') {
                  FUN_03d2d2b0(PTR_DAT_091fa408);
                  DAT_09842200 = '\x01';
                }
                uVar6 = *(uint *)(unaff_x22 + 0x18);
                uVar11 = iVar1 + 2;
                if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_0717c8d8;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = sVar10;
                  *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
                }
                else {
                  FUN_06ff15f4();
                }
              }
              if ((int)uVar11 < (int)unaff_w20) {
                psVar8 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2);
                lVar12 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar11;
                while (*psVar8 == 0x30) {
                  if (DAT_09842200 == '\0') {
                    FUN_03d2d2b0(PTR_DAT_091fa408);
                    DAT_09842200 = '\x01';
                  }
                  uVar6 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_0717c8d8;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
                  }
                  else {
                    FUN_06ff15f4();
                  }
                  uVar11 = uVar11 + 1;
                  lVar12 = lVar12 + -1;
                  psVar8 = psVar8 + 1;
                  if (lVar12 == 0) goto LAB_0717c778;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            if (((int)uVar11 < (int)unaff_w20) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2) == 0x30)) {
              uVar5 = 0;
              goto LAB_0717c644;
            }
            iVar1 = *(int *)(unaff_x29 + -0x38) + 2;
            if ((int)unaff_w20 <= iVar1) {
LAB_0717c684:
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar6 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_0717c8d8;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = (short)unaff_w26;
                *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
              }
              else {
                FUN_06ff15f4();
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar10 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2);
            if (sVar10 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar1 * 2) != 0x30)
              goto LAB_0717c684;
              uVar5 = 0;
            }
            else {
              if ((sVar10 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar1 * 2) != 0x30))
              goto LAB_0717c684;
              uVar5 = 1;
            }
LAB_0717c644:
            uVar6 = *(int *)(unaff_x29 + -0x38) + 2;
            uVar11 = uVar6;
            if ((int)uVar6 < (int)unaff_w20) {
              do {
                uVar11 = uVar6;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) != 0x30) break;
                uVar6 = uVar6 + 1;
                uVar11 = unaff_w20;
              } while (unaff_w20 != uVar6);
            }
            if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar5;
              thunk_FUN_03db619c();
            }
            FUN_07181720();
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (unaff_w26 != 0x5c) {
          if (unaff_w26 == 0x65) goto LAB_0717c15c;
          if (unaff_w26 != 0x2030) goto switchD_0717bf70_caseD_24;
          if (unaff_x21 != 0) {
            lVar12 = *(long *)(unaff_x21 + 0x98);
            goto joined_r0x0717c058;
          }
          goto LAB_0717c8dc;
        }
        if (((int)unaff_w20 <= (int)uVar11) ||
           (unaff_w26 = (uint)*(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar11 * 2),
           unaff_w26 == 0)) goto switchD_0717bf70_caseD_2c;
        if (DAT_09842200 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091fa408);
          DAT_09842200 = '\x01';
        }
        uVar3 = *(uint *)(unaff_x22 + 0x18);
        uVar6 = *(uint *)(unaff_x22 + 0x10);
        uVar11 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar6 <= (int)uVar3) goto LAB_0717c12c;
LAB_0717c1c4:
        if (uVar6 <= uVar3) goto LAB_0717c8d8;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = (short)unaff_w26;
        *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
      }
switchD_0717bf70_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar9;
      *(uint *)(unaff_x29 + -0x38) = uVar11;
      if ((int)unaff_w20 <= (int)uVar11) {
LAB_0717c778:
        if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      unaff_w26 = (uint)uVar2;
      if ((uVar2 == 0x3b) || (uVar2 == 0)) goto LAB_0717c778;
      iVar9 = *(int *)(unaff_x29 + -0x4c);
      if (((0 < iVar9) && (uVar2 < 0x31)) &&
         ((1L << ((ulong)(uint)uVar2 & 0x3f) & 0x1400800000000U) != 0)) goto code_r0x0717bdcc;
      unaff_x21 = *(long *)(unaff_x29 + -0x48);
    } while( true );
  }
  goto LAB_0717bde0;
code_r0x0717bdcc:
  unaff_x21 = *(long *)(unaff_x29 + -0x48);
  unaff_w25 = *(uint *)(unaff_x29 + -0x28);
  unaff_w24 = iVar9 + 1;
  *(int *)(unaff_x29 + -0x3c) = unaff_w28 - iVar9;
LAB_0717bde0:
  sVar10 = *unaff_x23;
  unaff_w27 = 0x30;
  if (sVar10 != 0) {
    unaff_x23 = unaff_x23 + 1;
    unaff_w27 = sVar10;
  }
  if (DAT_09842200 == '\0') goto LAB_0717be04;
  goto LAB_0717be1c;
LAB_0717be04:
  FUN_03d2d2b0(PTR_DAT_091fa408);
  param_1 = &DAT_09842000;
  goto code_r0x0717be14;
}


