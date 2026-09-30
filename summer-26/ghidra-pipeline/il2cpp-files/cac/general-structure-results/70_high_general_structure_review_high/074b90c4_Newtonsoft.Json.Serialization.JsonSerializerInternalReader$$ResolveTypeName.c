/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 074b90c4
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int in_w8;
  int iVar8;
  short *psVar9;
  int unaff_w19;
  uint uVar10;
  ushort *puVar11;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  uint uVar12;
  uint unaff_w24;
  uint uVar13;
  long lVar14;
  short *psVar15;
  short sVar16;
  int unaff_w26;
  long lVar17;
  int iVar18;
  long unaff_x29;
  
  if (in_w8 == 1) {
    uVar12 = *(uint *)(unaff_x22 + 0x18);
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_074b910c;
    if (*(uint *)(unaff_x22 + 0x10) <= uVar12) {
LAB_074b9d08:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      goto LAB_074b9d38;
    }
    lVar14 = *(long *)(unaff_x22 + 8);
    uVar5 = FUN_073213d0();
    *(undefined2 *)(lVar14 + (long)(int)uVar12 * 2) = uVar5;
    *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
    unaff_w24 = unaff_w23;
  }
  else {
LAB_074b910c:
    FUN_0734705c();
  }
  uVar6 = FUN_04a8ef90(*(undefined8 *)(unaff_x29 + -0x20));
  uVar12 = *(uint *)(unaff_x29 + -0x24);
  *(undefined8 *)(unaff_x29 + -0x58) = uVar6;
  if (unaff_w26 <= (int)unaff_w24) {
LAB_074b9bb8:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
LAB_074b9d38:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  psVar15 = *(short **)(unaff_x29 + -0x30);
  *(uint *)(unaff_x29 + -0x20) = *(uint *)(unaff_x29 + -0x34) ^ 1;
  iVar8 = (int)*(undefined8 *)(unaff_x29 + -0x50);
  *(int *)(unaff_x29 + -0x98) = iVar8 + -2;
  *(undefined4 *)(unaff_x29 + -0x74) = 0;
  *(int *)(unaff_x29 + -0x70) = -iVar8;
LAB_074b9168:
  uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2);
  if ((uVar2 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = unaff_w24, uVar2 == 0)) goto LAB_074b9bb8;
  iVar8 = *(int *)(unaff_x29 + -0x44);
  if ((iVar8 < 1) || ((0x30 < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x1400800000000U) == 0)))) {
    lVar14 = *(long *)(unaff_x29 + -0x40);
  }
  else {
    iVar18 = iVar8 + 1;
    lVar14 = *(long *)(unaff_x29 + -0x40);
    if (0 < iVar8) {
      iVar8 = 1;
    }
    uVar10 = *(uint *)(unaff_x29 + -0x20);
    *(int *)(unaff_x29 + -0x34) = iVar8 + -1;
    do {
      sVar16 = *psVar15;
      sVar4 = 0x30;
      if (sVar16 != 0) {
        psVar15 = psVar15 + 1;
        sVar4 = sVar16;
      }
      if (DAT_0968d807 == '\0') {
        FUN_03f13384(PTR_DAT_09129228);
        DAT_0968d807 = '\x01';
      }
      uVar13 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar13 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar13) goto LAB_074b9d08;
        *(uint *)(unaff_x22 + 0x18) = uVar13 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar13 * 2) = sVar4;
      }
      else {
        FUN_07346f30();
      }
      if (((uVar10 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_074b9d08;
        if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
          if (lVar14 == 0) goto LAB_074b9d20;
          lVar17 = *(long *)(lVar14 + 0x40);
          if (DAT_0968e4c0 == '\0') {
            FUN_03f13384(PTR_DAT_09129228);
            DAT_0968e4c0 = '\x01';
          }
          if (lVar17 == 0) goto LAB_074b9d20;
          if (*(int *)(lVar17 + 0x10) == 1) {
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_074b92f0;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_074b9d08;
            lVar14 = *(long *)(unaff_x22 + 8);
            uVar5 = FUN_073213d0(lVar17,0,0);
            *(undefined2 *)(lVar14 + (long)(int)uVar10 * 2) = uVar5;
            lVar14 = *(long *)(unaff_x29 + -0x40);
            *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
          }
          else {
LAB_074b92f0:
            FUN_0734705c();
          }
          uVar10 = *(uint *)(unaff_x29 + -0x20);
          unaff_w21 = unaff_w21 - 1;
        }
      }
      iVar18 = iVar18 + -1;
      unaff_w19 = unaff_w19 + -1;
    } while (1 < iVar18);
    iVar8 = *(int *)(unaff_x29 + -0x34);
  }
  *(int *)(unaff_x29 + -0x44) = iVar8;
  unaff_w24 = *(int *)(unaff_x29 + -0x24) + 1;
  uVar10 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
  if (uVar2 < 0x46) {
    if (uVar2 < 0x27) {
      if (0x23 < uVar2) {
        if (uVar2 != 0x24) {
          if (uVar2 == 0x25) {
            if (lVar14 != 0) {
              lVar14 = *(long *)(lVar14 + 0x90);
              goto LAB_074b96a8;
            }
            goto LAB_074b9d20;
          }
          if (uVar2 != 0x26) goto LAB_074b93e0;
        }
        goto LAB_074b9460;
      }
      if (uVar2 == 0x22) goto LAB_074b9558;
      if (uVar2 != 0x23) goto LAB_074b93e0;
LAB_074b9544:
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1;
        if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_074b98c4:
          sVar16 = 0x30;
          goto LAB_074b98c8;
        }
        *(int *)(unaff_x29 + -0x44) = iVar8;
      }
      else {
        sVar16 = *psVar15;
        if (sVar16 == 0) {
          if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_074b98c4;
        }
        else {
          psVar15 = psVar15 + 1;
LAB_074b98c8:
          if (DAT_0968d807 == '\0') {
            FUN_03f13384(PTR_DAT_09129228);
            DAT_0968d807 = '\x01';
          }
          uVar3 = *(uint *)(unaff_x22 + 0x18);
          uVar13 = *(uint *)(unaff_x22 + 0x10);
          *(int *)(unaff_x29 + -0x44) = iVar8;
          if ((int)uVar3 < (int)uVar13) {
            if (uVar13 <= uVar3) goto LAB_074b9d08;
            *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = sVar16;
          }
          else {
            FUN_07346f30();
          }
          if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_074b9d08;
            if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
              if (lVar14 == 0) goto LAB_074b9d20;
              lVar14 = *(long *)(lVar14 + 0x40);
              if (DAT_0968e4c0 == '\0') {
                FUN_03f13384(PTR_DAT_09129228);
                DAT_0968e4c0 = '\x01';
              }
              if (lVar14 != 0) {
                if (*(int *)(lVar14 + 0x10) == 1) {
                  uVar13 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar13) goto LAB_074b9a94;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar13) goto LAB_074b9d08;
                  lVar17 = *(long *)(unaff_x22 + 8);
                  uVar5 = FUN_073213d0(lVar14,0,0);
                  *(undefined2 *)(lVar17 + (long)(int)uVar13 * 2) = uVar5;
                  *(uint *)(unaff_x22 + 0x18) = uVar13 + 1;
                }
                else {
LAB_074b9a94:
                  FUN_0734705c();
                }
                unaff_w21 = unaff_w21 - 1;
                goto LAB_074b9aa8;
              }
              goto LAB_074b9d20;
            }
          }
        }
      }
LAB_074b9aa8:
      unaff_w19 = unaff_w19 + -1;
      goto LAB_074b9afc;
    }
    if (uVar2 < 0x2e) {
      if (uVar2 == 0x27) {
LAB_074b9558:
        if ((int)unaff_w24 < (int)uVar10) {
          lVar14 = (ulong)unaff_w24 << 0x20;
          puVar11 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2);
          uVar13 = ~*(uint *)(unaff_x29 + -0x24);
          while ((uVar1 = *puVar11, uVar1 != 0 && (uVar1 != uVar2))) {
            if (DAT_0968d807 == '\0') {
              FUN_03f13384(PTR_DAT_09129228);
              DAT_0968d807 = '\x01';
            }
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_074b9d08;
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar1;
            }
            else {
              FUN_07346f30();
            }
            uVar13 = uVar13 - 1;
            puVar11 = puVar11 + 1;
            lVar14 = lVar14 + 0x100000000;
            if (*(uint *)(unaff_x29 + -0x70) == uVar13) goto LAB_074b9bb8;
          }
          uVar10 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
          unaff_w24 = (*(short *)((lVar14 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar13;
        }
        goto LAB_074b9afc;
      }
      if (uVar2 == 0x2c) goto LAB_074b9afc;
      if (uVar2 != 0x2d) goto LAB_074b93e0;
    }
    else {
      if (uVar2 == 0x2e) {
        if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w19 != 0) goto LAB_074b9afc;
        if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
           ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*psVar15 != 0)))) {
          if (lVar14 != 0) {
            lVar14 = *(long *)(lVar14 + 0x38);
            if (DAT_0968e4c0 == '\0') {
              FUN_03f13384(PTR_DAT_09129228);
              DAT_0968e4c0 = '\x01';
            }
            if (lVar14 != 0) {
              if (*(int *)(lVar14 + 0x10) == 1) {
                uVar13 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar13) goto LAB_074b9b98;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar13) goto LAB_074b9d08;
                lVar17 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_073213d0(lVar14,0,0);
                *(undefined2 *)(lVar17 + (long)(int)uVar13 * 2) = uVar5;
                *(uint *)(unaff_x22 + 0x18) = uVar13 + 1;
              }
              else {
LAB_074b9b98:
                FUN_0734705c();
              }
              unaff_w19 = 0;
              *(undefined4 *)(unaff_x29 + -0x74) = 1;
              goto LAB_074b9afc;
            }
          }
          goto LAB_074b9d20;
        }
        *(undefined4 *)(unaff_x29 + -0x74) = 0;
        unaff_w19 = 0;
        goto LAB_074b9afc;
      }
      if (uVar2 != 0x2f) {
        if (uVar2 == 0x30) goto LAB_074b9544;
LAB_074b93e0:
        if (uVar2 == 0x45) goto LAB_074b93e8;
      }
    }
LAB_074b9460:
    if (DAT_0968d807 == '\0') {
      FUN_03f13384(PTR_DAT_09129228);
      DAT_0968d807 = '\x01';
    }
    uVar13 = *(uint *)(unaff_x22 + 0x18);
    if ((int)uVar13 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar13) goto LAB_074b9d08;
      lVar14 = *(long *)(unaff_x22 + 8);
LAB_074b94a4:
      *(uint *)(unaff_x22 + 0x18) = uVar13 + 1;
      *(ushort *)(lVar14 + (long)(int)uVar13 * 2) = uVar2;
    }
    else {
LAB_074b94b8:
      FUN_07346f30();
    }
  }
  else {
    if (uVar2 != 0x5c) {
      if (uVar2 == 0x65) {
LAB_074b93e8:
        if ((uVar12 & 1) != 0) {
          if (((int)unaff_w24 < (int)uVar10) &&
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2) == 0x30)) {
            uVar7 = 0;
            uVar12 = *(int *)(unaff_x29 + -0x24) + 2;
            goto LAB_074b9414;
          }
          uVar12 = *(int *)(unaff_x29 + -0x24) + 2;
          if ((int)uVar12 < (int)uVar10) {
            sVar16 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2);
            if (sVar16 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2) == 0x30) {
                uVar7 = 0;
                goto LAB_074b9414;
              }
            }
            else if ((sVar16 == 0x2b) &&
                    (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2) == 0x30)) {
              uVar7 = 1;
LAB_074b9414:
              unaff_w24 = uVar12;
              if ((int)uVar12 < (int)uVar10) {
                psVar9 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2);
                do {
                  unaff_w24 = uVar12;
                  if (*psVar9 != 0x30) break;
                  uVar12 = uVar12 + 1;
                  psVar9 = psVar9 + 1;
                  unaff_w24 = uVar10;
                } while (uVar10 != uVar12);
              }
              if (*(int *)(*(long *)PTR_DAT_0912f2c0 + 0xe4) == 0) {
                *(undefined4 *)(unaff_x29 + -0x24) = uVar7;
                thunk_FUN_03f6fea8();
              }
              FUN_074befa4();
              goto LAB_074b9af8;
            }
          }
          if (DAT_0968d807 == '\0') {
            FUN_03f13384(PTR_DAT_09129228);
            DAT_0968d807 = '\x01';
          }
          uVar13 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar13) {
            FUN_07346f30();
            uVar12 = 1;
            goto LAB_074b9afc;
          }
          if (uVar13 < *(uint *)(unaff_x22 + 0x10)) {
            lVar14 = *(long *)(unaff_x22 + 8);
            uVar12 = 1;
            goto LAB_074b94a4;
          }
          goto LAB_074b9d08;
        }
        if (DAT_0968d807 == '\0') {
          FUN_03f13384(PTR_DAT_09129228);
          DAT_0968d807 = '\x01';
        }
        uVar12 = *(uint *)(unaff_x22 + 0x18);
        iVar8 = *(int *)(unaff_x29 + -0x24);
        if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_074b9d08;
          *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = uVar2;
        }
        else {
          FUN_07346f30();
        }
        if ((int)unaff_w24 < (int)uVar10) {
          sVar16 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2);
          if ((sVar16 == 0x2d) || (sVar16 == 0x2b)) {
            if (DAT_0968d807 == '\0') {
              FUN_03f13384(PTR_DAT_09129228);
              DAT_0968d807 = '\x01';
            }
            uVar12 = *(uint *)(unaff_x22 + 0x18);
            unaff_w24 = iVar8 + 2;
            if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_074b9d08;
              *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar16;
            }
            else {
              FUN_07346f30();
            }
          }
          if ((int)unaff_w24 < (int)uVar10) {
            psVar9 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2);
            lVar14 = *(long *)(unaff_x29 + -0x68) - (long)(int)unaff_w24;
            while (*psVar9 == 0x30) {
              if (DAT_0968d807 == '\0') {
                FUN_03f13384(PTR_DAT_09129228);
                DAT_0968d807 = '\x01';
              }
              uVar12 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_074b9d08;
                *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = 0x30;
              }
              else {
                FUN_07346f30();
              }
              lVar14 = lVar14 + -1;
              unaff_w24 = unaff_w24 + 1;
              psVar9 = psVar9 + 1;
              if (lVar14 == 0) goto LAB_074b9bb8;
            }
            uVar10 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
          }
        }
LAB_074b9af8:
        uVar12 = 0;
        goto LAB_074b9afc;
      }
      if (uVar2 != 0x2030) goto LAB_074b9460;
      if (lVar14 == 0) goto LAB_074b9d20;
      lVar14 = *(long *)(lVar14 + 0x98);
LAB_074b96a8:
      if (DAT_0968e4c0 == '\0') {
        FUN_03f13384(PTR_DAT_09129228);
        DAT_0968e4c0 = '\x01';
      }
      if (lVar14 != 0) {
        if (*(int *)(lVar14 + 0x10) == 1) {
          uVar13 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar13 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar13 < *(uint *)(unaff_x22 + 0x10)) {
              lVar17 = *(long *)(unaff_x22 + 8);
              uVar5 = FUN_073213d0(lVar14,0,0);
              *(undefined2 *)(lVar17 + (long)(int)uVar13 * 2) = uVar5;
              *(uint *)(unaff_x22 + 0x18) = uVar13 + 1;
              goto LAB_074b9afc;
            }
            goto LAB_074b9d08;
          }
        }
        FUN_0734705c();
        goto LAB_074b9afc;
      }
LAB_074b9d20:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      goto LAB_074b9d38;
    }
    if (((int)unaff_w24 < (int)uVar10) &&
       (sVar16 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2), sVar16 != 0))
    {
      if (DAT_0968d807 == '\0') {
        FUN_03f13384(PTR_DAT_09129228);
        DAT_0968d807 = '\x01';
      }
      uVar13 = *(uint *)(unaff_x22 + 0x18);
      unaff_w24 = *(int *)(unaff_x29 + -0x24) + 2;
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar13) goto LAB_074b94b8;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar13) goto LAB_074b9d08;
      *(uint *)(unaff_x22 + 0x18) = uVar13 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar13 * 2) = sVar16;
    }
  }
LAB_074b9afc:
  if ((int)uVar10 <= (int)unaff_w24) goto LAB_074b9bb8;
  goto LAB_074b9168;
}


