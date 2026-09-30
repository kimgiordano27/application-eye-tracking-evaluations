/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ClearErrorContext
ENTRY_POINT: 062465cc
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext(void)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint unaff_w20;
  uint uVar8;
  short *psVar9;
  long unaff_x22;
  short *psVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  short sVar16;
  uint uVar17;
  int unaff_w28;
  ushort *puVar18;
  long unaff_x29;
  
  uVar7 = 0xffffffff;
  uVar4 = FUN_06251744();
  if ((*(int *)(unaff_x29 + -0x38) != 0) || ((uVar4 & 1) == 0)) {
LAB_06246670:
    uVar5 = FUN_04077750(*(undefined8 *)(unaff_x29 + -0x28));
    *(undefined8 *)(unaff_x29 + -0x58) = uVar5;
    if (*(int *)(unaff_x29 + -0x38) < (int)unaff_w20) {
      psVar10 = *(short **)(unaff_x29 + -0x30);
      *(undefined4 *)(unaff_x29 + -0x7c) = 0;
      *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
      *(uint *)(unaff_x29 + -0x8c) = unaff_w20 - 2;
      *(long *)(unaff_x29 + -0x88) = (long)(int)unaff_w20;
      do {
        uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
        if ((uVar1 == 0x3b) || (uVar1 == 0)) break;
        iVar12 = *(int *)(unaff_x29 + -0x4c);
        uVar17 = (uint)uVar1;
        if ((iVar12 < 1) ||
           ((0x30 < uVar1 || ((1L << ((ulong)uVar17 & 0x3f) & 0x1400800000000U) == 0)))) {
          lVar15 = *(long *)(unaff_x29 + -0x48);
        }
        else {
          lVar15 = *(long *)(unaff_x29 + -0x48);
          uVar14 = *(uint *)(unaff_x29 + -0x28);
          iVar11 = iVar12 + 1;
          *(int *)(unaff_x29 + -0x3c) = unaff_w28 - iVar12;
          do {
            sVar16 = *psVar10;
            sVar2 = 0x30;
            if (sVar16 != 0) {
              psVar10 = psVar10 + 1;
              sVar2 = sVar16;
            }
            if (DAT_0825aded == '\0') {
              FUN_0373b518(PTR_DAT_07da5848);
              DAT_0825aded = '\x01';
            }
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_06247214;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar2;
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
            }
            else {
              FUN_060dbfe4();
            }
            if ((-1 < (int)uVar7) && (1 < unaff_w28 && (uVar14 & 1) == 0)) {
              if (*(uint *)(unaff_x29 + -0x10) <= uVar7) goto LAB_06247214;
              if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar7 * 4) + 1) {
                if (lVar15 == 0) goto LAB_06247218;
                lVar13 = *(long *)(lVar15 + 0x40);
                if (DAT_0825ba12 == '\0') {
                  FUN_0373b518(PTR_DAT_07da5848);
                  DAT_0825ba12 = '\x01';
                }
                if (lVar13 == 0) goto LAB_06247218;
                if (*(int *)(lVar13 + 0x10) == 1) {
                  uVar14 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar14) goto LAB_06246844;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_06247214;
                  lVar15 = *(long *)(unaff_x22 + 8);
                  uVar3 = FUN_060bb390(lVar13,0,0);
                  *(undefined2 *)(lVar15 + (long)(int)uVar14 * 2) = uVar3;
                  lVar15 = *(long *)(unaff_x29 + -0x48);
                  *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
                }
                else {
LAB_06246844:
                  FUN_060dc110();
                }
                uVar14 = *(uint *)(unaff_x29 + -0x28);
                uVar7 = uVar7 - 1;
              }
            }
            iVar11 = iVar11 + -1;
            unaff_w28 = unaff_w28 + -1;
          } while (1 < iVar11);
          unaff_w28 = *(int *)(unaff_x29 + -0x3c);
          iVar12 = 0;
        }
        uVar14 = *(int *)(unaff_x29 + -0x38) + 1;
        if (uVar17 < 0x46) {
          switch(uVar1) {
          case 0x22:
          case 0x27:
            if ((int)uVar14 < (int)unaff_w20) {
              *(int *)(unaff_x29 + -0x3c) = unaff_w28;
              *(int *)(unaff_x29 + -0x4c) = iVar12;
              lVar15 = (ulong)uVar14 << 0x20;
              uVar8 = ~*(uint *)(unaff_x29 + -0x38);
              puVar18 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar14 * 2);
              lVar13 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar14;
              while( true ) {
                uVar1 = *puVar18;
                if ((uVar1 == 0) || (uVar1 == uVar17)) break;
                if (DAT_0825aded == '\0') {
                  FUN_0373b518(PTR_DAT_07da5848);
                  DAT_0825aded = '\x01';
                }
                uVar14 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_06247214;
                  *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = uVar1;
                  *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
                }
                else {
                  FUN_060dbfe4();
                }
                lVar15 = lVar15 + 0x100000000;
                uVar8 = uVar8 - 1;
                lVar13 = lVar13 + -1;
                puVar18 = puVar18 + 1;
                if (lVar13 == 0) goto LAB_062470b4;
              }
              iVar12 = *(int *)(unaff_x29 + -0x4c);
              unaff_w28 = *(int *)(unaff_x29 + -0x3c);
              uVar14 = (*(short *)((lVar15 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar8;
            }
            break;
          case 0x23:
          case 0x30:
            if (iVar12 < 0) {
              iVar12 = iVar12 + 1;
              if (unaff_w28 <= *(int *)(unaff_x29 + -0x78)) {
LAB_06246d4c:
                sVar16 = 0x30;
                goto LAB_06246d50;
              }
            }
            else {
              sVar16 = *psVar10;
              if (sVar16 == 0) {
                if (*(int *)(unaff_x29 + -0x74) < unaff_w28) goto LAB_06246d4c;
              }
              else {
                psVar10 = psVar10 + 1;
LAB_06246d50:
                if (DAT_0825aded == '\0') {
                  FUN_0373b518(PTR_DAT_07da5848);
                  DAT_0825aded = '\x01';
                }
                uVar8 = *(uint *)(unaff_x22 + 0x18);
                uVar17 = *(uint *)(unaff_x29 + -0x28);
                if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_06247214;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar16;
                  *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                }
                else {
                  FUN_060dbfe4();
                }
                if ((-1 < (int)uVar7) && (1 < unaff_w28 && (uVar17 & 1) == 0)) {
                  if (*(uint *)(unaff_x29 + -0x10) <= uVar7) goto LAB_06247214;
                  if (unaff_w28 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar7 * 4) + 1) {
                    if (lVar15 == 0) goto LAB_06247218;
                    lVar15 = *(long *)(lVar15 + 0x40);
                    if (DAT_0825ba12 == '\0') {
                      FUN_0373b518(PTR_DAT_07da5848);
                      DAT_0825ba12 = '\x01';
                    }
                    if (lVar15 == 0) goto LAB_06247218;
                    if (*(int *)(lVar15 + 0x10) == 1) {
                      uVar17 = *(uint *)(unaff_x22 + 0x18);
                      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar17) goto LAB_06246e68;
                      if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_06247214;
                      lVar13 = *(long *)(unaff_x22 + 8);
                      uVar3 = FUN_060bb390(lVar15,0,0);
                      *(undefined2 *)(lVar13 + (long)(int)uVar17 * 2) = uVar3;
                      *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
                    }
                    else {
LAB_06246e68:
                      FUN_060dc110();
                    }
                    uVar7 = uVar7 - 1;
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
switchD_062468ac_caseD_24:
            if (DAT_0825aded == '\0') {
              FUN_0373b518(PTR_DAT_07da5848);
              DAT_0825aded = '\x01';
            }
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            uVar17 = *(uint *)(unaff_x22 + 0x10);
            if ((int)uVar8 < (int)uVar17) goto LAB_06246b00;
LAB_06246a68:
            FUN_060dbfe4();
            break;
          case 0x25:
            if (lVar15 == 0) goto LAB_06247218;
            lVar15 = *(long *)(lVar15 + 0x90);
joined_r0x06246994:
            if (DAT_0825ba12 == '\0') {
              FUN_0373b518(PTR_DAT_07da5848);
              DAT_0825ba12 = '\x01';
            }
            if (lVar15 == 0) goto LAB_06247218;
            if (*(int *)(lVar15 + 0x10) == 1) {
              uVar17 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar17 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (uVar17 < *(uint *)(unaff_x22 + 0x10)) {
                  lVar13 = *(long *)(unaff_x22 + 8);
                  uVar3 = FUN_060bb390(lVar15,0,0);
                  *(undefined2 *)(lVar13 + (long)(int)uVar17 * 2) = uVar3;
                  *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
                  break;
                }
                goto LAB_06247214;
              }
            }
            FUN_060dc110();
            break;
          case 0x2c:
            break;
          case 0x2e:
            if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && unaff_w28 == 0) {
              if ((*(int *)(unaff_x29 + -0x74) < 0) ||
                 ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar10 != 0)))) {
                if (lVar15 == 0) goto LAB_06247218;
                lVar15 = *(long *)(lVar15 + 0x38);
                if (DAT_0825ba12 == '\0') {
                  FUN_0373b518(PTR_DAT_07da5848);
                  DAT_0825ba12 = '\x01';
                }
                if (lVar15 == 0) goto LAB_06247218;
                if (*(int *)(lVar15 + 0x10) == 1) {
                  uVar17 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar17 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (uVar17 < *(uint *)(unaff_x22 + 0x10)) {
                      lVar13 = *(long *)(unaff_x22 + 8);
                      uVar3 = FUN_060bb390(lVar15,0,0);
                      *(undefined2 *)(lVar13 + (long)(int)uVar17 * 2) = uVar3;
                      *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
                      unaff_w28 = 0;
                      *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                      break;
                    }
                    goto LAB_06247214;
                  }
                }
                FUN_060dc110();
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
            if (uVar1 != 0x45) goto switchD_062468ac_caseD_24;
LAB_06246a98:
            if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
              iVar11 = *(int *)(unaff_x29 + -0x38);
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar17 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar17 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_06247214;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar17 * 2) = uVar1;
                *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
              }
              else {
                FUN_060dbfe4();
              }
              if ((int)uVar14 < (int)unaff_w20) {
                sVar16 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar14 * 2);
                if ((sVar16 == 0x2d) || (sVar16 == 0x2b)) {
                  if (DAT_0825aded == '\0') {
                    FUN_0373b518(PTR_DAT_07da5848);
                    DAT_0825aded = '\x01';
                  }
                  uVar17 = *(uint *)(unaff_x22 + 0x18);
                  uVar14 = iVar11 + 2;
                  if ((int)uVar17 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_06247214;
                    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar17 * 2) = sVar16;
                    *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
                  }
                  else {
                    FUN_060dbfe4();
                  }
                }
                if ((int)uVar14 < (int)unaff_w20) {
                  psVar9 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar14 * 2);
                  lVar15 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar14;
                  while (*psVar9 == 0x30) {
                    if (DAT_0825aded == '\0') {
                      FUN_0373b518(PTR_DAT_07da5848);
                      DAT_0825aded = '\x01';
                    }
                    uVar17 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)uVar17 < (int)*(uint *)(unaff_x22 + 0x10)) {
                      if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_06247214;
                      *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar17 * 2) = 0x30;
                      *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
                    }
                    else {
                      FUN_060dbfe4();
                    }
                    uVar14 = uVar14 + 1;
                    lVar15 = lVar15 + -1;
                    psVar9 = psVar9 + 1;
                    if (lVar15 == 0) goto LAB_062470b4;
                  }
                  *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                  break;
                }
              }
            }
            else {
              if (((int)uVar14 < (int)unaff_w20) &&
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar14 * 2) == 0x30)) {
                uVar6 = 0;
                goto LAB_06246f80;
              }
              iVar11 = *(int *)(unaff_x29 + -0x38) + 2;
              if ((int)unaff_w20 <= iVar11) {
LAB_06246fc0:
                if (DAT_0825aded == '\0') {
                  FUN_0373b518(PTR_DAT_07da5848);
                  DAT_0825aded = '\x01';
                }
                uVar17 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar17 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar17) goto LAB_06247214;
                  *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar17 * 2) = uVar1;
                  *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
                }
                else {
                  FUN_060dbfe4();
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 1;
                break;
              }
              sVar16 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar14 * 2);
              if (sVar16 == 0x2d) {
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar11 * 2) != 0x30)
                goto LAB_06246fc0;
                uVar6 = 0;
              }
              else {
                if ((sVar16 != 0x2b) ||
                   (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar11 * 2) != 0x30))
                goto LAB_06246fc0;
                uVar6 = 1;
              }
LAB_06246f80:
              uVar17 = *(int *)(unaff_x29 + -0x38) + 2;
              uVar14 = uVar17;
              if ((int)uVar17 < (int)unaff_w20) {
                do {
                  uVar14 = uVar17;
                  if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar17 * 2) != 0x30)
                  break;
                  uVar17 = uVar17 + 1;
                  uVar14 = unaff_w20;
                } while (unaff_w20 != uVar17);
              }
              if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
                *(undefined4 *)(unaff_x29 + -0x38) = uVar6;
                thunk_FUN_03798b70();
              }
              FUN_0624c068();
            }
            *(undefined4 *)(unaff_x29 + -0x5c) = 0;
          }
        }
        else {
          if (uVar1 != 0x5c) {
            if (uVar1 == 0x65) goto LAB_06246a98;
            if (uVar1 != 0x2030) goto switchD_062468ac_caseD_24;
            if (lVar15 != 0) {
              lVar15 = *(long *)(lVar15 + 0x98);
              goto joined_r0x06246994;
            }
            goto LAB_06247218;
          }
          if (((int)unaff_w20 <= (int)uVar14) ||
             (uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar14 * 2), uVar1 == 0)
             ) goto switchD_062468ac_caseD_2c;
          if (DAT_0825aded == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825aded = '\x01';
          }
          uVar8 = *(uint *)(unaff_x22 + 0x18);
          uVar17 = *(uint *)(unaff_x22 + 0x10);
          uVar14 = *(int *)(unaff_x29 + -0x38) + 2;
          if ((int)uVar17 <= (int)uVar8) goto LAB_06246a68;
LAB_06246b00:
          if (uVar17 <= uVar8) goto LAB_06247214;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = uVar1;
          *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
        }
switchD_062468ac_caseD_2c:
        *(int *)(unaff_x29 + -0x4c) = iVar12;
        *(uint *)(unaff_x29 + -0x38) = uVar14;
      } while ((int)uVar14 < (int)unaff_w20);
    }
LAB_062470b4:
    if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (*(long *)(unaff_x29 + -0x48) != 0) {
    lVar15 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
    if (DAT_0825ba12 == '\0') {
      FUN_0373b518(PTR_DAT_07da5848);
      DAT_0825ba12 = '\x01';
    }
    if (lVar15 != 0) {
      if (*(int *)(lVar15 + 0x10) == 1) {
        uVar17 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar17 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar17) {
LAB_06247214:
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          lVar13 = *(long *)(unaff_x22 + 8);
          uVar3 = FUN_060bb390(lVar15,0,0);
          *(undefined2 *)(lVar13 + (long)(int)uVar17 * 2) = uVar3;
          *(uint *)(unaff_x22 + 0x18) = uVar17 + 1;
          goto LAB_06246670;
        }
      }
      FUN_060dc110();
      goto LAB_06246670;
    }
  }
LAB_06247218:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


