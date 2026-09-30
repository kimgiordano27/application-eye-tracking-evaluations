/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EndProcessProperty
ENTRY_POINT: 074e8880
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty(void)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  short *psVar6;
  int unaff_w19;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long lVar10;
  long unaff_x24;
  short *unaff_x25;
  short sVar11;
  uint uVar12;
  ulong unaff_x26;
  long lVar13;
  int iVar14;
  uint uVar15;
  long unaff_x29;
  
code_r0x074e8880:
  iVar8 = *(int *)(unaff_x29 + -0x34);
LAB_074e888c:
  uVar12 = (uint)unaff_x26;
  *(int *)(unaff_x29 + -0x44) = iVar8;
  uVar7 = *(int *)(unaff_x29 + -0x24) + 1;
  uVar15 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
  if (uVar12 < 0x46) {
    if ((int)uVar12 < 0x27) {
      if ((int)uVar12 < 0x24) {
        if (uVar12 == 0x22) goto LAB_074e8ac0;
        if (uVar12 != 0x23) goto LAB_074e8948;
LAB_074e8aac:
        if (iVar8 < 0) {
          iVar8 = iVar8 + 1;
          if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_074e8e2c:
            sVar11 = 0x30;
            goto LAB_074e8e30;
          }
          *(int *)(unaff_x29 + -0x44) = iVar8;
        }
        else {
          sVar11 = *unaff_x25;
          if (sVar11 == 0) {
            if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_074e8e2c;
          }
          else {
            unaff_x25 = unaff_x25 + 1;
LAB_074e8e30:
            if (DAT_095462cd == '\0') {
              FUN_0403162c(PTR_DAT_08f8ca68);
              DAT_095462cd = '\x01';
            }
            uVar2 = *(uint *)(unaff_x22 + 0x18);
            uVar12 = *(uint *)(unaff_x22 + 0x10);
            *(int *)(unaff_x29 + -0x44) = iVar8;
            if ((int)uVar2 < (int)uVar12) {
              if (uVar12 <= uVar2) goto LAB_074e9270;
              *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar2 * 2) = sVar11;
            }
            else {
              FUN_073869c4();
            }
            if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21))
            {
              if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_074e9270;
              if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
                if (unaff_x24 == 0) goto LAB_074e9288;
                lVar13 = *(long *)(unaff_x24 + 0x40);
                if (DAT_09546f42 == '\0') {
                  FUN_0403162c(PTR_DAT_08f8ca68);
                  DAT_09546f42 = '\x01';
                }
                if (lVar13 == 0) goto LAB_074e9288;
                if (*(int *)(lVar13 + 0x10) == 1) {
                  uVar12 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_074e8ffc;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_074e9270;
                  lVar10 = *(long *)(unaff_x22 + 8);
                  uVar4 = FUN_07363804(lVar13,0,0);
                  *(undefined2 *)(lVar10 + (long)(int)uVar12 * 2) = uVar4;
                  *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
                }
                else {
LAB_074e8ffc:
                  FUN_07386af0();
                }
                unaff_w21 = unaff_w21 - 1;
              }
            }
          }
        }
        unaff_w19 = unaff_w19 + -1;
        goto LAB_074e9064;
      }
      if (uVar12 == 0x24) goto LAB_074e89c8;
      if (uVar12 == 0x25) {
        if (unaff_x24 != 0) {
          lVar13 = *(long *)(unaff_x24 + 0x90);
          goto LAB_074e8c10;
        }
        goto LAB_074e9288;
      }
      if (uVar12 != 0x26) goto LAB_074e8948;
    }
    else if ((int)uVar12 < 0x2e) {
      if (uVar12 == 0x27) {
LAB_074e8ac0:
        if ((int)uVar7 < (int)uVar15) {
          lVar13 = (ulong)uVar7 << 0x20;
          puVar9 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
          uVar7 = ~*(uint *)(unaff_x29 + -0x24);
          while( true ) {
            uVar1 = *puVar9;
            if ((uVar1 == 0) || (uVar1 == uVar12)) break;
            if (DAT_095462cd == '\0') {
              FUN_0403162c(PTR_DAT_08f8ca68);
              DAT_095462cd = '\x01';
            }
            uVar15 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_074e9270;
              *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar1;
            }
            else {
              FUN_073869c4();
            }
            uVar7 = uVar7 - 1;
            puVar9 = puVar9 + 1;
            lVar13 = lVar13 + 0x100000000;
            if (*(uint *)(unaff_x29 + -0x70) == uVar7) goto LAB_074e9120;
          }
          uVar15 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
          uVar7 = (*(short *)((lVar13 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar7;
        }
        goto LAB_074e9064;
      }
      if (uVar12 == 0x2c) goto LAB_074e9064;
      if (uVar12 != 0x2d) goto LAB_074e8948;
    }
    else {
      if (uVar12 == 0x2e) {
        if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w19 != 0) goto LAB_074e9064;
        if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
           ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*unaff_x25 != 0)))) {
          if (unaff_x24 == 0) goto LAB_074e9288;
          lVar13 = *(long *)(unaff_x24 + 0x38);
          if (DAT_09546f42 == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca68);
            DAT_09546f42 = '\x01';
          }
          if (lVar13 == 0) goto LAB_074e9288;
          if (*(int *)(lVar13 + 0x10) == 1) {
            uVar12 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_074e9100;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_074e9270;
            lVar10 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_07363804(lVar13,0,0);
            *(undefined2 *)(lVar10 + (long)(int)uVar12 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
          }
          else {
LAB_074e9100:
            FUN_07386af0();
          }
          unaff_w19 = 0;
          *(undefined4 *)(unaff_x29 + -0x74) = 1;
        }
        else {
          *(undefined4 *)(unaff_x29 + -0x74) = 0;
          unaff_w19 = 0;
        }
        goto LAB_074e9064;
      }
      if (uVar12 != 0x2f) {
        if (uVar12 == 0x30) goto LAB_074e8aac;
LAB_074e8948:
        if (uVar12 == 0x45) goto LAB_074e8950;
      }
    }
LAB_074e89c8:
    if (DAT_095462cd == '\0') {
      FUN_0403162c(PTR_DAT_08f8ca68);
      DAT_095462cd = '\x01';
    }
    uVar12 = *(uint *)(unaff_x22 + 0x18);
    if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_074e9270;
      lVar13 = *(long *)(unaff_x22 + 8);
LAB_074e8a0c:
      *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
      *(short *)(lVar13 + (long)(int)uVar12 * 2) = (short)unaff_x26;
    }
    else {
LAB_074e8a20:
      FUN_073869c4();
    }
  }
  else if (uVar12 == 0x5c) {
    if (((int)uVar7 < (int)uVar15) &&
       (sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2), sVar11 != 0)) {
      if (DAT_095462cd == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca68);
        DAT_095462cd = '\x01';
      }
      uVar12 = *(uint *)(unaff_x22 + 0x18);
      uVar7 = *(int *)(unaff_x29 + -0x24) + 2;
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_074e8a20;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_074e9270;
      *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar11;
    }
  }
  else if (uVar12 == 0x65) {
LAB_074e8950:
    if ((unaff_x23 & 1) != 0) {
      if (((int)uVar7 < (int)uVar15) &&
         (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2) == 0x30)) {
        uVar5 = 0;
        uVar12 = *(int *)(unaff_x29 + -0x24) + 2;
        goto LAB_074e897c;
      }
      uVar12 = *(int *)(unaff_x29 + -0x24) + 2;
      if ((int)uVar12 < (int)uVar15) {
        sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
        if (sVar11 == 0x2d) {
          if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2) == 0x30) {
            uVar5 = 0;
            goto LAB_074e897c;
          }
        }
        else if ((sVar11 == 0x2b) &&
                (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2) == 0x30)) {
          uVar5 = 1;
LAB_074e897c:
          uVar7 = uVar12;
          if ((int)uVar12 < (int)uVar15) {
            psVar6 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar12 * 2);
            do {
              uVar7 = uVar12;
              if (*psVar6 != 0x30) break;
              uVar12 = uVar12 + 1;
              psVar6 = psVar6 + 1;
              uVar7 = uVar15;
            } while (uVar15 != uVar12);
          }
          if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
            *(undefined4 *)(unaff_x29 + -0x24) = uVar5;
            thunk_FUN_0408f364();
          }
          FUN_074ee50c();
          goto LAB_074e9060;
        }
      }
      if (DAT_095462cd == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca68);
        DAT_095462cd = '\x01';
      }
      uVar12 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) {
        FUN_073869c4();
        unaff_x23 = 1;
        goto LAB_074e9064;
      }
      if (uVar12 < *(uint *)(unaff_x22 + 0x10)) {
        lVar13 = *(long *)(unaff_x22 + 8);
        unaff_x23 = 1;
        goto LAB_074e8a0c;
      }
      goto LAB_074e9270;
    }
    if (DAT_095462cd == '\0') {
      FUN_0403162c(PTR_DAT_08f8ca68);
      DAT_095462cd = '\x01';
    }
    uVar12 = *(uint *)(unaff_x22 + 0x18);
    iVar8 = *(int *)(unaff_x29 + -0x24);
    if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_074e9270;
      *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = (short)unaff_x26;
    }
    else {
      FUN_073869c4();
    }
    if ((int)uVar7 < (int)uVar15) {
      sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
      if ((sVar11 == 0x2d) || (sVar11 == 0x2b)) {
        if (DAT_095462cd == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca68);
          DAT_095462cd = '\x01';
        }
        uVar12 = *(uint *)(unaff_x22 + 0x18);
        uVar7 = iVar8 + 2;
        if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_074e9270;
          *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar11;
        }
        else {
          FUN_073869c4();
        }
      }
      if ((int)uVar7 < (int)uVar15) {
        psVar6 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
        lVar13 = *(long *)(unaff_x29 + -0x68) - (long)(int)uVar7;
        while (*psVar6 == 0x30) {
          if (DAT_095462cd == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca68);
            DAT_095462cd = '\x01';
          }
          uVar12 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_074e9270;
            *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
            *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = 0x30;
          }
          else {
            FUN_073869c4();
          }
          lVar13 = lVar13 + -1;
          uVar7 = uVar7 + 1;
          psVar6 = psVar6 + 1;
          if (lVar13 == 0) goto LAB_074e9120;
        }
        uVar15 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
      }
    }
LAB_074e9060:
    unaff_x23 = 0;
  }
  else {
    if (uVar12 != 0x2030) goto LAB_074e89c8;
    if (unaff_x24 == 0) goto LAB_074e9288;
    lVar13 = *(long *)(unaff_x24 + 0x98);
LAB_074e8c10:
    if (DAT_09546f42 == '\0') {
      FUN_0403162c(PTR_DAT_08f8ca68);
      DAT_09546f42 = '\x01';
    }
    if (lVar13 == 0) goto LAB_074e9288;
    if (*(int *)(lVar13 + 0x10) == 1) {
      uVar12 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (uVar12 < *(uint *)(unaff_x22 + 0x10)) {
          lVar10 = *(long *)(unaff_x22 + 8);
          uVar4 = FUN_07363804(lVar13,0,0);
          *(undefined2 *)(lVar10 + (long)(int)uVar12 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
          goto LAB_074e9064;
        }
        goto LAB_074e9270;
      }
    }
    FUN_07386af0();
  }
LAB_074e9064:
  if ((int)uVar15 <= (int)uVar7) {
LAB_074e9120:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
    goto LAB_074e92a0;
  }
  uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
  unaff_x26 = (ulong)uVar1;
  if ((uVar1 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = uVar7, uVar1 == 0)) goto LAB_074e9120;
  iVar8 = *(int *)(unaff_x29 + -0x44);
  if (((0 < iVar8) && (uVar1 < 0x31)) && ((1L << (unaff_x26 & 0x3f) & 0x1400800000000U) != 0))
  goto code_r0x074e8714;
  unaff_x24 = *(long *)(unaff_x29 + -0x40);
  goto LAB_074e888c;
code_r0x074e8714:
  iVar14 = iVar8 + 1;
  unaff_x24 = *(long *)(unaff_x29 + -0x40);
  if (0 < iVar8) {
    iVar8 = 1;
  }
  uVar7 = *(uint *)(unaff_x29 + -0x20);
  *(int *)(unaff_x29 + -0x34) = iVar8 + -1;
  do {
    sVar11 = *unaff_x25;
    sVar3 = 0x30;
    if (sVar11 != 0) {
      unaff_x25 = unaff_x25 + 1;
      sVar3 = sVar11;
    }
    if (DAT_095462cd == '\0') {
      FUN_0403162c(PTR_DAT_08f8ca68);
      DAT_095462cd = '\x01';
    }
    uVar12 = *(uint *)(unaff_x22 + 0x18);
    if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_074e9270;
      *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar3;
    }
    else {
      FUN_073869c4();
    }
    if (((uVar7 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
      if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_074e9270;
      if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
        if (unaff_x24 == 0) goto LAB_074e9288;
        lVar13 = *(long *)(unaff_x24 + 0x40);
        if (DAT_09546f42 == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca68);
          DAT_09546f42 = '\x01';
        }
        if (lVar13 == 0) goto LAB_074e9288;
        if (*(int *)(lVar13 + 0x10) == 1) {
          uVar7 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_074e8858;
          if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_074e9270;
          lVar10 = *(long *)(unaff_x22 + 8);
          uVar4 = FUN_07363804(lVar13,0,0);
          *(undefined2 *)(lVar10 + (long)(int)uVar7 * 2) = uVar4;
          unaff_x24 = *(long *)(unaff_x29 + -0x40);
          *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
        }
        else {
LAB_074e8858:
          FUN_07386af0();
        }
        uVar7 = *(uint *)(unaff_x29 + -0x20);
        unaff_w21 = unaff_w21 - 1;
      }
    }
    iVar14 = iVar14 + -1;
    unaff_w19 = unaff_w19 + -1;
  } while (1 < iVar14);
  goto code_r0x074e8880;
LAB_074e9288:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  goto LAB_074e92a0;
LAB_074e9270:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
LAB_074e92a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


