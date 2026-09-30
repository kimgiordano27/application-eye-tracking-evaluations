/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetExtensionData
ENTRY_POINT: 074e8d9c
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetExtensionData(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint in_w9;
  short *psVar8;
  int unaff_w19;
  ushort *puVar9;
  uint unaff_w21;
  long unaff_x22;
  bool bVar10;
  long lVar11;
  short *unaff_x25;
  short unaff_w26;
  short sVar12;
  int iVar13;
  long lVar14;
  ulong unaff_x27;
  int iVar15;
  uint uVar16;
  ulong unaff_x28;
  long unaff_x29;
  
code_r0x074e8d9c:
  uVar7 = (uint)param_1;
  if ((int)uVar7 < (int)in_w9) {
    if (in_w9 <= uVar7) {
LAB_074e9270:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
LAB_074e92a0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
    *(short *)(*(long *)(unaff_x22 + 8) + param_1 * 2) = unaff_w26;
  }
  else {
    FUN_073869c4();
  }
LAB_074e8f60:
  iVar13 = (int)unaff_x27;
  if (iVar13 < (int)unaff_x28) {
    psVar8 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2);
    lVar11 = *(long *)(unaff_x29 + -0x68) - (long)iVar13;
    while (*psVar8 == 0x30) {
      if (DAT_095462cd == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca68);
        DAT_095462cd = '\x01';
      }
      uVar7 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_074e9270;
        *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
        *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = 0x30;
      }
      else {
        FUN_073869c4();
      }
      lVar11 = lVar11 + -1;
      unaff_x27 = (ulong)((int)unaff_x27 + 1);
      psVar8 = psVar8 + 1;
      if (lVar11 == 0) goto LAB_074e9120;
    }
    unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
  }
LAB_074e9060:
  bVar10 = false;
LAB_074e9064:
  iVar13 = (int)unaff_x27;
  if ((int)unaff_x28 <= iVar13) goto LAB_074e9120;
  uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2);
  if ((uVar2 == 0x3b) || (*(int *)(unaff_x29 + -0x24) = iVar13, uVar2 == 0)) goto LAB_074e9120;
  iVar13 = *(int *)(unaff_x29 + -0x44);
  if ((iVar13 < 1) || ((0x30 < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x1400800000000U) == 0)))) {
    lVar11 = *(long *)(unaff_x29 + -0x40);
  }
  else {
    iVar15 = iVar13 + 1;
    lVar11 = *(long *)(unaff_x29 + -0x40);
    if (0 < iVar13) {
      iVar13 = 1;
    }
    uVar7 = *(uint *)(unaff_x29 + -0x20);
    *(int *)(unaff_x29 + -0x34) = iVar13 + -1;
    do {
      sVar12 = *unaff_x25;
      sVar3 = 0x30;
      if (sVar12 != 0) {
        unaff_x25 = unaff_x25 + 1;
        sVar3 = sVar12;
      }
      if (DAT_095462cd == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca68);
        DAT_095462cd = '\x01';
      }
      uVar16 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_074e9270;
        *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar3;
      }
      else {
        FUN_073869c4();
      }
      if (((uVar7 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_074e9270;
        if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
          if (lVar11 == 0) goto LAB_074e9288;
          lVar14 = *(long *)(lVar11 + 0x40);
          if (DAT_09546f42 == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca68);
            DAT_09546f42 = '\x01';
          }
          if (lVar14 == 0) goto LAB_074e9288;
          if (*(int *)(lVar14 + 0x10) == 1) {
            uVar7 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_074e8858;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_074e9270;
            lVar11 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_07363804(lVar14,0,0);
            *(undefined2 *)(lVar11 + (long)(int)uVar7 * 2) = uVar4;
            lVar11 = *(long *)(unaff_x29 + -0x40);
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
      iVar15 = iVar15 + -1;
      unaff_w19 = unaff_w19 + -1;
    } while (1 < iVar15);
    iVar13 = *(int *)(unaff_x29 + -0x34);
  }
  unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
  *(int *)(unaff_x29 + -0x44) = iVar13;
  uVar7 = *(int *)(unaff_x29 + -0x24) + 1;
  unaff_x27 = (ulong)uVar7;
  uVar16 = (uint)unaff_x28;
  if (uVar2 < 0x46) {
    if (uVar2 < 0x27) {
      if (0x23 < uVar2) {
        if (uVar2 != 0x24) {
          if (uVar2 == 0x25) {
            if (lVar11 != 0) {
              lVar11 = *(long *)(lVar11 + 0x90);
              goto LAB_074e8c10;
            }
            goto LAB_074e9288;
          }
          if (uVar2 != 0x26) goto LAB_074e8948;
        }
        goto LAB_074e89c8;
      }
      if (uVar2 == 0x22) goto LAB_074e8ac0;
      if (uVar2 != 0x23) goto LAB_074e8948;
LAB_074e8aac:
      if (iVar13 < 0) {
        iVar13 = iVar13 + 1;
        if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_074e8e2c:
          sVar12 = 0x30;
          goto LAB_074e8e30;
        }
        *(int *)(unaff_x29 + -0x44) = iVar13;
      }
      else {
        sVar12 = *unaff_x25;
        if (sVar12 == 0) {
          if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_074e8e2c;
        }
        else {
          unaff_x25 = unaff_x25 + 1;
LAB_074e8e30:
          if (DAT_095462cd == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca68);
            DAT_095462cd = '\x01';
          }
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          uVar7 = *(uint *)(unaff_x22 + 0x10);
          *(int *)(unaff_x29 + -0x44) = iVar13;
          if ((int)uVar16 < (int)uVar7) {
            if (uVar7 <= uVar16) goto LAB_074e9270;
            *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar12;
          }
          else {
            FUN_073869c4();
          }
          if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_074e9270;
            if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
              if (lVar11 == 0) goto LAB_074e9288;
              lVar11 = *(long *)(lVar11 + 0x40);
              if (DAT_09546f42 == '\0') {
                FUN_0403162c(PTR_DAT_08f8ca68);
                DAT_09546f42 = '\x01';
              }
              if (lVar11 != 0) {
                if (*(int *)(lVar11 + 0x10) == 1) {
                  uVar7 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_074e8ffc;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_074e9270;
                  lVar14 = *(long *)(unaff_x22 + 8);
                  uVar4 = FUN_07363804(lVar11,0,0);
                  *(undefined2 *)(lVar14 + (long)(int)uVar7 * 2) = uVar4;
                  *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
                }
                else {
LAB_074e8ffc:
                  FUN_07386af0();
                }
                unaff_w21 = unaff_w21 - 1;
                goto LAB_074e9010;
              }
              goto LAB_074e9288;
            }
          }
        }
      }
LAB_074e9010:
      unaff_w19 = unaff_w19 + -1;
      goto LAB_074e9064;
    }
    if (uVar2 < 0x2e) {
      if (uVar2 == 0x27) {
LAB_074e8ac0:
        if ((int)uVar7 < (int)uVar16) {
          lVar11 = unaff_x27 << 0x20;
          puVar9 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
          uVar7 = ~*(uint *)(unaff_x29 + -0x24);
          while ((uVar1 = *puVar9, uVar1 != 0 && (uVar1 != uVar2))) {
            if (DAT_095462cd == '\0') {
              FUN_0403162c(PTR_DAT_08f8ca68);
              DAT_095462cd = '\x01';
            }
            uVar16 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_074e9270;
              *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = uVar1;
            }
            else {
              FUN_073869c4();
            }
            uVar7 = uVar7 - 1;
            puVar9 = puVar9 + 1;
            lVar11 = lVar11 + 0x100000000;
            if (*(uint *)(unaff_x29 + -0x70) == uVar7) goto LAB_074e9120;
          }
          unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
          unaff_x27 = (ulong)((*(short *)((lVar11 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) -
                             uVar7);
        }
        goto LAB_074e9064;
      }
      if (uVar2 == 0x2c) goto LAB_074e9064;
      if (uVar2 != 0x2d) goto LAB_074e8948;
LAB_074e89c8:
      if (DAT_095462cd == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca68);
        DAT_095462cd = '\x01';
      }
      uVar7 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_074e8a20;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_074e9270;
      lVar11 = *(long *)(unaff_x22 + 8);
LAB_074e8a0c:
      *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
      *(ushort *)(lVar11 + (long)(int)uVar7 * 2) = uVar2;
      goto LAB_074e9064;
    }
    if (uVar2 != 0x2e) {
      if (uVar2 != 0x2f) {
        if (uVar2 == 0x30) goto LAB_074e8aac;
LAB_074e8948:
        if (uVar2 == 0x45) goto LAB_074e8950;
      }
      goto LAB_074e89c8;
    }
    if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || unaff_w19 != 0) goto LAB_074e9064;
    if ((-1 < *(int *)(unaff_x29 + -0x8c)) &&
       ((*(int *)(unaff_x29 + -0x94) <= *(int *)(unaff_x29 + -0x5c) || (*unaff_x25 == 0)))) {
      *(undefined4 *)(unaff_x29 + -0x74) = 0;
      unaff_w19 = 0;
      goto LAB_074e9064;
    }
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x38);
      if (DAT_09546f42 == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca68);
        DAT_09546f42 = '\x01';
      }
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x10) == 1) {
          uVar7 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_074e9100;
          if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_074e9270;
          lVar14 = *(long *)(unaff_x22 + 8);
          uVar4 = FUN_07363804(lVar11,0,0);
          *(undefined2 *)(lVar14 + (long)(int)uVar7 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
        }
        else {
LAB_074e9100:
          FUN_07386af0();
        }
        unaff_w19 = 0;
        *(undefined4 *)(unaff_x29 + -0x74) = 1;
        goto LAB_074e9064;
      }
    }
  }
  else {
    if (uVar2 == 0x5c) goto LAB_074e8a2c;
    if (uVar2 == 0x65) {
LAB_074e8950:
      if (!bVar10) {
        if (DAT_095462cd == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca68);
          DAT_095462cd = '\x01';
        }
        uVar6 = *(uint *)(unaff_x22 + 0x18);
        iVar13 = *(int *)(unaff_x29 + -0x24);
        if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_074e9270;
          *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = uVar2;
        }
        else {
          FUN_073869c4();
        }
        if ((int)uVar16 <= (int)uVar7) goto LAB_074e9060;
        unaff_w26 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
        if ((unaff_w26 != 0x2d) && (unaff_w26 != 0x2b)) goto LAB_074e8f60;
        if (DAT_095462cd == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca68);
          DAT_095462cd = '\x01';
        }
        param_1 = (long)*(int *)(unaff_x22 + 0x18);
        in_w9 = *(uint *)(unaff_x22 + 0x10);
        unaff_x27 = (ulong)(iVar13 + 2);
        goto code_r0x074e8d9c;
      }
      if (((int)uVar7 < (int)uVar16) &&
         (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2) == 0x30)) {
        uVar5 = 0;
        uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
        goto LAB_074e897c;
      }
      uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
      if ((int)uVar6 < (int)uVar16) {
        sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2);
        if (sVar12 == 0x2d) {
          if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) == 0x30) {
            uVar5 = 0;
            goto LAB_074e897c;
          }
        }
        else if ((sVar12 == 0x2b) &&
                (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) == 0x30))
        goto code_r0x074e8bf8;
      }
      if (DAT_095462cd == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca68);
        DAT_095462cd = '\x01';
      }
      uVar7 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (uVar7 < *(uint *)(unaff_x22 + 0x10)) {
          lVar11 = *(long *)(unaff_x22 + 8);
          bVar10 = true;
          goto LAB_074e8a0c;
        }
        goto LAB_074e9270;
      }
      FUN_073869c4();
      bVar10 = true;
      goto LAB_074e9064;
    }
    if (uVar2 != 0x2030) goto LAB_074e89c8;
    if (lVar11 == 0) goto LAB_074e9288;
    lVar11 = *(long *)(lVar11 + 0x98);
LAB_074e8c10:
    if (DAT_09546f42 == '\0') {
      FUN_0403162c(PTR_DAT_08f8ca68);
      DAT_09546f42 = '\x01';
    }
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x10) == 1) {
        uVar7 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_074e9270;
          lVar14 = *(long *)(unaff_x22 + 8);
          uVar4 = FUN_07363804(lVar11,0,0);
          *(undefined2 *)(lVar14 + (long)(int)uVar7 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
          goto LAB_074e9064;
        }
      }
      FUN_07386af0();
      goto LAB_074e9064;
    }
  }
LAB_074e9288:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  goto LAB_074e92a0;
LAB_074e8a2c:
  if (((int)uVar7 < (int)uVar16) &&
     (sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar7 * 2), sVar12 != 0)) {
    if (DAT_095462cd == '\0') {
      FUN_0403162c(PTR_DAT_08f8ca68);
      DAT_095462cd = '\x01';
    }
    uVar7 = *(uint *)(unaff_x22 + 0x18);
    unaff_x27 = (ulong)(*(int *)(unaff_x29 + -0x24) + 2);
    if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_074e9270;
      *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar12;
    }
    else {
LAB_074e8a20:
      FUN_073869c4();
    }
  }
  goto LAB_074e9064;
LAB_074e9120:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
  goto LAB_074e92a0;
code_r0x074e8bf8:
  uVar5 = 1;
LAB_074e897c:
  if ((int)uVar6 < (int)uVar16) {
    psVar8 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2);
    do {
      if (*psVar8 != 0x30) goto LAB_074e8df4;
      uVar6 = uVar6 + 1;
      psVar8 = psVar8 + 1;
    } while (uVar16 != uVar6);
    unaff_x27 = unaff_x28 & 0xffffffff;
  }
  else {
LAB_074e8df4:
    unaff_x27 = (ulong)uVar6;
  }
  if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
    *(undefined4 *)(unaff_x29 + -0x24) = uVar5;
    thunk_FUN_0408f364();
  }
  FUN_074ee50c();
  goto LAB_074e9060;
}


