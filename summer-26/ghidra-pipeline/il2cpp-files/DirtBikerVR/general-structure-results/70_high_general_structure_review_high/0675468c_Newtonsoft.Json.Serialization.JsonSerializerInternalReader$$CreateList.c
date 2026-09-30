/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
ENTRY_POINT: 0675468c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint in_w8;
  int iVar7;
  uint uVar8;
  short *psVar9;
  int unaff_w19;
  uint uVar10;
  ushort *puVar11;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  uint unaff_w24;
  long lVar12;
  short *psVar13;
  short sVar14;
  long lVar15;
  int iVar16;
  long unaff_x29;
  
  psVar13 = *(short **)(unaff_x29 + -0x30);
  *(uint *)(unaff_x29 + -0x20) = in_w8 ^ 1;
  iVar7 = (int)*(undefined8 *)(unaff_x29 + -0x50);
  *(int *)(unaff_x29 + -0x98) = iVar7 + -2;
  *(undefined4 *)(unaff_x29 + -0x74) = 0;
  *(int *)(unaff_x29 + -0x70) = -iVar7;
LAB_067546ac:
  uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2);
  if ((uVar2 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = unaff_w24, uVar2 == 0)) goto LAB_067550fc;
  iVar7 = *(int *)(unaff_x29 + -0x44);
  if ((iVar7 < 1) || ((0x30 < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x1400800000000U) == 0)))) {
    lVar12 = *(long *)(unaff_x29 + -0x40);
  }
  else {
    iVar16 = iVar7 + 1;
    lVar12 = *(long *)(unaff_x29 + -0x40);
    if (0 < iVar7) {
      iVar7 = 1;
    }
    uVar10 = *(uint *)(unaff_x29 + -0x20);
    *(int *)(unaff_x29 + -0x34) = iVar7 + -1;
    do {
      sVar14 = *psVar13;
      sVar4 = 0x30;
      if (sVar14 != 0) {
        psVar13 = psVar13 + 1;
        sVar4 = sVar14;
      }
      if (DAT_0897af3c == '\0') {
        FUN_03a8a718(PTR_DAT_0849fcb0);
        DAT_0897af3c = '\x01';
      }
      uVar8 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0675524c;
        *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar4;
      }
      else {
        FUN_065e5c34();
      }
      if (((uVar10 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0675524c;
        if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
          if (lVar12 == 0) goto LAB_06755264;
          lVar15 = *(long *)(lVar12 + 0x40);
          if (DAT_0897bb55 == '\0') {
            FUN_03a8a718(PTR_DAT_0849fcb0);
            DAT_0897bb55 = '\x01';
          }
          if (lVar15 == 0) goto LAB_06755264;
          if (*(int *)(lVar15 + 0x10) == 1) {
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_06754834;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_0675524c;
            lVar12 = *(long *)(unaff_x22 + 8);
            uVar5 = FUN_065c7d98(lVar15,0,0);
            *(undefined2 *)(lVar12 + (long)(int)uVar10 * 2) = uVar5;
            lVar12 = *(long *)(unaff_x29 + -0x40);
            *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
          }
          else {
LAB_06754834:
            FUN_065e5d60();
          }
          uVar10 = *(uint *)(unaff_x29 + -0x20);
          unaff_w21 = unaff_w21 - 1;
        }
      }
      iVar16 = iVar16 + -1;
      unaff_w19 = unaff_w19 + -1;
    } while (1 < iVar16);
    iVar7 = *(int *)(unaff_x29 + -0x34);
  }
  *(int *)(unaff_x29 + -0x44) = iVar7;
  unaff_w24 = *(int *)(unaff_x29 + -0x24) + 1;
  uVar10 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
  if (uVar2 < 0x46) {
    if (uVar2 < 0x27) {
      if (0x23 < uVar2) {
        if (uVar2 != 0x24) {
          if (uVar2 == 0x25) {
            if (lVar12 != 0) {
              lVar12 = *(long *)(lVar12 + 0x90);
              goto LAB_06754bec;
            }
            goto LAB_06755264;
          }
          if (uVar2 != 0x26) goto LAB_06754924;
        }
        goto LAB_067549a4;
      }
      if (uVar2 == 0x22) goto LAB_06754a9c;
      if (uVar2 != 0x23) goto LAB_06754924;
LAB_06754a88:
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1;
        if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_06754e08:
          sVar14 = 0x30;
          goto LAB_06754e0c;
        }
        *(int *)(unaff_x29 + -0x44) = iVar7;
      }
      else {
        sVar14 = *psVar13;
        if (sVar14 == 0) {
          if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_06754e08;
        }
        else {
          psVar13 = psVar13 + 1;
LAB_06754e0c:
          if (DAT_0897af3c == '\0') {
            FUN_03a8a718(PTR_DAT_0849fcb0);
            DAT_0897af3c = '\x01';
          }
          uVar3 = *(uint *)(unaff_x22 + 0x18);
          uVar8 = *(uint *)(unaff_x22 + 0x10);
          *(int *)(unaff_x29 + -0x44) = iVar7;
          if ((int)uVar3 < (int)uVar8) {
            if (uVar8 <= uVar3) goto LAB_0675524c;
            *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = sVar14;
          }
          else {
            FUN_065e5c34();
          }
          if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
            if (unaff_w21 < *(uint *)(unaff_x29 + -0x10)) {
              if (unaff_w19 != *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1)
              goto LAB_06754fec;
              if (lVar12 != 0) {
                lVar12 = *(long *)(lVar12 + 0x40);
                if (DAT_0897bb55 == '\0') {
                  FUN_03a8a718(PTR_DAT_0849fcb0);
                  DAT_0897bb55 = '\x01';
                }
                if (lVar12 != 0) {
                  if (*(int *)(lVar12 + 0x10) == 1) {
                    uVar8 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_06754fd8;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0675524c;
                    lVar15 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_065c7d98(lVar12,0,0);
                    *(undefined2 *)(lVar15 + (long)(int)uVar8 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                  }
                  else {
LAB_06754fd8:
                    FUN_065e5d60();
                  }
                  unaff_w21 = unaff_w21 - 1;
                  goto LAB_06754fec;
                }
              }
              goto LAB_06755264;
            }
            goto LAB_0675524c;
          }
        }
      }
LAB_06754fec:
      unaff_w19 = unaff_w19 + -1;
    }
    else {
      if (uVar2 < 0x2e) {
        if (uVar2 == 0x27) {
LAB_06754a9c:
          if ((int)unaff_w24 < (int)uVar10) {
            lVar12 = (ulong)unaff_w24 << 0x20;
            puVar11 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2);
            uVar8 = ~*(uint *)(unaff_x29 + -0x24);
            while ((uVar1 = *puVar11, uVar1 != 0 && (uVar1 != uVar2))) {
              if (DAT_0897af3c == '\0') {
                FUN_03a8a718(PTR_DAT_0849fcb0);
                DAT_0897af3c = '\x01';
              }
              uVar10 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_0675524c;
                *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar1;
              }
              else {
                FUN_065e5c34();
              }
              uVar8 = uVar8 - 1;
              puVar11 = puVar11 + 1;
              lVar12 = lVar12 + 0x100000000;
              if (*(uint *)(unaff_x29 + -0x70) == uVar8) goto LAB_067550fc;
            }
            uVar10 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
            unaff_w24 = (*(short *)((lVar12 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar8;
          }
          goto LAB_06755040;
        }
        if (uVar2 == 0x2c) goto LAB_06755040;
        if (uVar2 != 0x2d) goto LAB_06754924;
      }
      else {
        if (uVar2 == 0x2e) {
          if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w19 != 0) goto LAB_06755040;
          if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
             ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*psVar13 != 0)))) {
            if (lVar12 != 0) {
              lVar12 = *(long *)(lVar12 + 0x38);
              if (DAT_0897bb55 == '\0') {
                FUN_03a8a718(PTR_DAT_0849fcb0);
                DAT_0897bb55 = '\x01';
              }
              if (lVar12 != 0) {
                if (*(int *)(lVar12 + 0x10) == 1) {
                  uVar8 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_067550dc;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0675524c;
                  lVar15 = *(long *)(unaff_x22 + 8);
                  uVar5 = FUN_065c7d98(lVar12,0,0);
                  *(undefined2 *)(lVar15 + (long)(int)uVar8 * 2) = uVar5;
                  *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                }
                else {
LAB_067550dc:
                  FUN_065e5d60();
                }
                unaff_w19 = 0;
                *(undefined4 *)(unaff_x29 + -0x74) = 1;
                goto LAB_06755040;
              }
            }
LAB_06755264:
            if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c0();
            }
            goto LAB_0675527c;
          }
          *(undefined4 *)(unaff_x29 + -0x74) = 0;
          unaff_w19 = 0;
          goto LAB_06755040;
        }
        if (uVar2 != 0x2f) {
          if (uVar2 == 0x30) goto LAB_06754a88;
LAB_06754924:
          if (uVar2 == 0x45) goto LAB_0675492c;
        }
      }
LAB_067549a4:
      if (DAT_0897af3c == '\0') {
        FUN_03a8a718(PTR_DAT_0849fcb0);
        DAT_0897af3c = '\x01';
      }
      uVar8 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (uVar8 < *(uint *)(unaff_x22 + 0x10)) {
          lVar12 = *(long *)(unaff_x22 + 8);
          goto LAB_067549e8;
        }
LAB_0675524c:
        if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        goto LAB_0675527c;
      }
LAB_067549fc:
      FUN_065e5c34();
    }
  }
  else if (uVar2 == 0x5c) {
    if (((int)unaff_w24 < (int)uVar10) &&
       (sVar14 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2), sVar14 != 0))
    {
      if (DAT_0897af3c == '\0') {
        FUN_03a8a718(PTR_DAT_0849fcb0);
        DAT_0897af3c = '\x01';
      }
      uVar8 = *(uint *)(unaff_x22 + 0x18);
      unaff_w24 = *(int *)(unaff_x29 + -0x24) + 2;
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_067549fc;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0675524c;
      *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar14;
    }
  }
  else {
    if (uVar2 != 0x65) {
      if (uVar2 != 0x2030) goto LAB_067549a4;
      if (lVar12 != 0) {
        lVar12 = *(long *)(lVar12 + 0x98);
LAB_06754bec:
        if (DAT_0897bb55 == '\0') {
          FUN_03a8a718(PTR_DAT_0849fcb0);
          DAT_0897bb55 = '\x01';
        }
        if (lVar12 != 0) {
          if (*(int *)(lVar12 + 0x10) == 1) {
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0675524c;
              lVar15 = *(long *)(unaff_x22 + 8);
              uVar5 = FUN_065c7d98(lVar12,0,0);
              *(undefined2 *)(lVar15 + (long)(int)uVar8 * 2) = uVar5;
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
              goto LAB_06755040;
            }
          }
          FUN_065e5d60();
          goto LAB_06755040;
        }
      }
      goto LAB_06755264;
    }
LAB_0675492c:
    if ((unaff_x23 & 1) == 0) {
      if (DAT_0897af3c == '\0') {
        FUN_03a8a718(PTR_DAT_0849fcb0);
        DAT_0897af3c = '\x01';
      }
      uVar8 = *(uint *)(unaff_x22 + 0x18);
      iVar7 = *(int *)(unaff_x29 + -0x24);
      if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0675524c;
        *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
        *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = uVar2;
      }
      else {
        FUN_065e5c34();
      }
      if ((int)unaff_w24 < (int)uVar10) {
        sVar14 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2);
        if ((sVar14 == 0x2d) || (sVar14 == 0x2b)) {
          if (DAT_0897af3c == '\0') {
            FUN_03a8a718(PTR_DAT_0849fcb0);
            DAT_0897af3c = '\x01';
          }
          uVar8 = *(uint *)(unaff_x22 + 0x18);
          unaff_w24 = iVar7 + 2;
          if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0675524c;
            *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar14;
          }
          else {
            FUN_065e5c34();
          }
        }
        if ((int)unaff_w24 < (int)uVar10) {
          psVar9 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2);
          lVar12 = *(long *)(unaff_x29 + -0x68) - (long)(int)unaff_w24;
          while (*psVar9 == 0x30) {
            if (DAT_0897af3c == '\0') {
              FUN_03a8a718(PTR_DAT_0849fcb0);
              DAT_0897af3c = '\x01';
            }
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_0675524c;
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
              *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = 0x30;
            }
            else {
              FUN_065e5c34();
            }
            lVar12 = lVar12 + -1;
            unaff_w24 = unaff_w24 + 1;
            psVar9 = psVar9 + 1;
            if (lVar12 == 0) goto LAB_067550fc;
          }
          uVar10 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
        }
      }
LAB_0675503c:
      unaff_x23 = 0;
      goto LAB_06755040;
    }
    if (((int)unaff_w24 < (int)uVar10) &&
       (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2) == 0x30)) {
      uVar6 = 0;
      uVar8 = *(int *)(unaff_x29 + -0x24) + 2;
      goto LAB_06754958;
    }
    uVar8 = *(int *)(unaff_x29 + -0x24) + 2;
    if ((int)uVar8 < (int)uVar10) {
      sVar14 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w24 * 2);
      if (sVar14 == 0x2d) {
        if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2) == 0x30) {
          uVar6 = 0;
          goto LAB_06754958;
        }
      }
      else if ((sVar14 == 0x2b) &&
              (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2) == 0x30)) {
        uVar6 = 1;
LAB_06754958:
        unaff_w24 = uVar8;
        if ((int)uVar8 < (int)uVar10) {
          psVar9 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
          do {
            unaff_w24 = uVar8;
            if (*psVar9 != 0x30) break;
            uVar8 = uVar8 + 1;
            psVar9 = psVar9 + 1;
            unaff_w24 = uVar10;
          } while (uVar10 != uVar8);
        }
        if (*(int *)(*(long *)PTR_DAT_084a5b08 + 0xe4) == 0) {
          *(undefined4 *)(unaff_x29 + -0x24) = uVar6;
          thunk_FUN_03ae8be4();
        }
        FUN_0675a4e8();
        goto LAB_0675503c;
      }
    }
    if (DAT_0897af3c == '\0') {
      FUN_03a8a718(PTR_DAT_0849fcb0);
      DAT_0897af3c = '\x01';
    }
    uVar8 = *(uint *)(unaff_x22 + 0x18);
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) {
      FUN_065e5c34();
      unaff_x23 = 1;
      goto LAB_06755040;
    }
    if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_0675524c;
    lVar12 = *(long *)(unaff_x22 + 8);
    unaff_x23 = 1;
LAB_067549e8:
    *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
    *(ushort *)(lVar12 + (long)(int)uVar8 * 2) = uVar2;
  }
LAB_06755040:
  if ((int)uVar10 <= (int)unaff_w24) {
LAB_067550fc:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
LAB_0675527c:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_067546ac;
}


