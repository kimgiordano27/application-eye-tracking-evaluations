/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
ENTRY_POINT: 06754d04
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType(undefined2 param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long lVar11;
  long unaff_x24;
  short *unaff_x25;
  short sVar12;
  int iVar13;
  long lVar14;
  ulong unaff_x27;
  int iVar15;
  uint uVar16;
  ulong unaff_x28;
  long unaff_x29;
  
code_r0x06754d04:
  *(undefined2 *)(unaff_x24 + unaff_x20 * 2) = param_1;
  *(int *)(unaff_x22 + 0x18) = (int)unaff_x20 + 1;
LAB_067550f0:
  iVar8 = 0;
  *(undefined4 *)(unaff_x29 + -0x74) = 1;
LAB_06755040:
  iVar13 = (int)unaff_x27;
  if ((int)unaff_x28 <= iVar13) {
LAB_067550fc:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
    goto LAB_0675527c;
  }
  uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2);
  if ((uVar2 == 0x3b) || (*(int *)(unaff_x29 + -0x24) = iVar13, uVar2 == 0)) goto LAB_067550fc;
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
    uVar9 = *(uint *)(unaff_x29 + -0x20);
    *(int *)(unaff_x29 + -0x34) = iVar13 + -1;
    do {
      sVar12 = *unaff_x25;
      sVar3 = 0x30;
      if (sVar12 != 0) {
        unaff_x25 = unaff_x25 + 1;
        sVar3 = sVar12;
      }
      if (DAT_0897af3c == '\0') {
        FUN_03a8a718(PTR_DAT_0849fcb0);
        DAT_0897af3c = '\x01';
      }
      uVar16 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_0675524c;
        *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar3;
      }
      else {
        FUN_065e5c34();
      }
      if (((uVar9 & 1) == 0 && 1 < iVar8) && (-1 < (int)unaff_w21)) {
        if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0675524c;
        if (iVar8 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
          if (lVar11 == 0) goto LAB_06755264;
          lVar14 = *(long *)(lVar11 + 0x40);
          if (DAT_0897bb55 == '\0') {
            FUN_03a8a718(PTR_DAT_0849fcb0);
            DAT_0897bb55 = '\x01';
          }
          if (lVar14 == 0) goto LAB_06755264;
          if (*(int *)(lVar14 + 0x10) == 1) {
            uVar9 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar9) goto LAB_06754834;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_0675524c;
            lVar11 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_065c7d98(lVar14,0,0);
            *(undefined2 *)(lVar11 + (long)(int)uVar9 * 2) = uVar4;
            lVar11 = *(long *)(unaff_x29 + -0x40);
            *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
          }
          else {
LAB_06754834:
            FUN_065e5d60();
          }
          uVar9 = *(uint *)(unaff_x29 + -0x20);
          unaff_w21 = unaff_w21 - 1;
        }
      }
      iVar15 = iVar15 + -1;
      iVar8 = iVar8 + -1;
    } while (1 < iVar15);
    iVar13 = *(int *)(unaff_x29 + -0x34);
  }
  unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
  *(int *)(unaff_x29 + -0x44) = iVar13;
  uVar9 = *(int *)(unaff_x29 + -0x24) + 1;
  unaff_x27 = (ulong)uVar9;
  uVar16 = (uint)unaff_x28;
  if (0x45 < uVar2) {
    if (uVar2 == 0x5c) {
      if (((int)uVar9 < (int)uVar16) &&
         (sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2), sVar12 != 0)) {
        if (DAT_0897af3c == '\0') {
          FUN_03a8a718(PTR_DAT_0849fcb0);
          DAT_0897af3c = '\x01';
        }
        uVar9 = *(uint *)(unaff_x22 + 0x18);
        unaff_x27 = (ulong)(*(int *)(unaff_x29 + -0x24) + 2);
        if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_0675524c;
          *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar12;
        }
        else {
LAB_067549fc:
          FUN_065e5c34();
        }
      }
    }
    else {
      if (uVar2 != 0x65) {
        if (uVar2 != 0x2030) goto LAB_067549a4;
        if (lVar11 == 0) goto LAB_06755264;
        lVar11 = *(long *)(lVar11 + 0x98);
LAB_06754bec:
        if (DAT_0897bb55 == '\0') {
          FUN_03a8a718(PTR_DAT_0849fcb0);
          DAT_0897bb55 = '\x01';
        }
        if (lVar11 == 0) goto LAB_06755264;
        if (*(int *)(lVar11 + 0x10) == 1) {
          uVar9 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_0675524c;
            lVar14 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_065c7d98(lVar11,0,0);
            *(undefined2 *)(lVar14 + (long)(int)uVar9 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
            goto LAB_06755040;
          }
        }
        FUN_065e5d60();
        goto LAB_06755040;
      }
LAB_0675492c:
      if ((unaff_x23 & 1) == 0) {
        if (DAT_0897af3c == '\0') {
          FUN_03a8a718(PTR_DAT_0849fcb0);
          DAT_0897af3c = '\x01';
        }
        uVar6 = *(uint *)(unaff_x22 + 0x18);
        iVar13 = *(int *)(unaff_x29 + -0x24);
        if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_0675524c;
          *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = uVar2;
        }
        else {
          FUN_065e5c34();
        }
        if ((int)uVar9 < (int)uVar16) {
          sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2);
          if ((sVar12 == 0x2d) || (sVar12 == 0x2b)) {
            if (DAT_0897af3c == '\0') {
              FUN_03a8a718(PTR_DAT_0849fcb0);
              DAT_0897af3c = '\x01';
            }
            uVar9 = *(uint *)(unaff_x22 + 0x18);
            unaff_x27 = (ulong)(iVar13 + 2);
            if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_0675524c;
              *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar12;
            }
            else {
              FUN_065e5c34();
            }
          }
          iVar13 = (int)unaff_x27;
          if (iVar13 < (int)uVar16) {
            psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2);
            lVar11 = *(long *)(unaff_x29 + -0x68) - (long)iVar13;
            while (*psVar7 == 0x30) {
              if (DAT_0897af3c == '\0') {
                FUN_03a8a718(PTR_DAT_0849fcb0);
                DAT_0897af3c = '\x01';
              }
              uVar9 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_0675524c;
                *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = 0x30;
              }
              else {
                FUN_065e5c34();
              }
              lVar11 = lVar11 + -1;
              unaff_x27 = (ulong)((int)unaff_x27 + 1);
              psVar7 = psVar7 + 1;
              if (lVar11 == 0) goto LAB_067550fc;
            }
            unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
          }
        }
LAB_0675503c:
        unaff_x23 = 0;
      }
      else {
        if (((int)uVar9 < (int)uVar16) &&
           (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2) == 0x30)) {
          uVar5 = 0;
          uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
          goto LAB_06754958;
        }
        uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
        if ((int)uVar6 < (int)uVar16) {
          sVar12 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2);
          if (sVar12 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) == 0x30) {
              uVar5 = 0;
              goto LAB_06754958;
            }
          }
          else if ((sVar12 == 0x2b) &&
                  (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) == 0x30)) {
            uVar5 = 1;
LAB_06754958:
            if ((int)uVar6 < (int)uVar16) {
              psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2);
              do {
                if (*psVar7 != 0x30) goto LAB_06754dd0;
                uVar6 = uVar6 + 1;
                psVar7 = psVar7 + 1;
              } while (uVar16 != uVar6);
              unaff_x27 = unaff_x28 & 0xffffffff;
            }
            else {
LAB_06754dd0:
              unaff_x27 = (ulong)uVar6;
            }
            if (*(int *)(*(long *)PTR_DAT_084a5b08 + 0xe4) == 0) {
              *(undefined4 *)(unaff_x29 + -0x24) = uVar5;
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
        uVar9 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_0675524c;
          lVar11 = *(long *)(unaff_x22 + 8);
          unaff_x23 = 1;
LAB_067549e8:
          *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
          *(ushort *)(lVar11 + (long)(int)uVar9 * 2) = uVar2;
        }
        else {
          FUN_065e5c34();
          unaff_x23 = 1;
        }
      }
    }
    goto LAB_06755040;
  }
  if (uVar2 < 0x27) {
    if (uVar2 < 0x24) {
      if (uVar2 == 0x22) goto LAB_06754a9c;
      if (uVar2 != 0x23) goto LAB_06754924;
LAB_06754a88:
      if (iVar13 < 0) {
        iVar13 = iVar13 + 1;
        if (iVar8 <= *(int *)(unaff_x29 + -0x90)) {
LAB_06754e08:
          sVar12 = 0x30;
          goto LAB_06754e0c;
        }
        *(int *)(unaff_x29 + -0x44) = iVar13;
      }
      else {
        sVar12 = *unaff_x25;
        if (sVar12 == 0) {
          if (*(int *)(unaff_x29 + -0x8c) < iVar8) goto LAB_06754e08;
        }
        else {
          unaff_x25 = unaff_x25 + 1;
LAB_06754e0c:
          if (DAT_0897af3c == '\0') {
            FUN_03a8a718(PTR_DAT_0849fcb0);
            DAT_0897af3c = '\x01';
          }
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          uVar9 = *(uint *)(unaff_x22 + 0x10);
          *(int *)(unaff_x29 + -0x44) = iVar13;
          if ((int)uVar16 < (int)uVar9) {
            if (uVar9 <= uVar16) goto LAB_0675524c;
            *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar12;
          }
          else {
            FUN_065e5c34();
          }
          if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < iVar8) && (-1 < (int)unaff_w21)) {
            if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_0675524c;
            if (iVar8 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
              if (lVar11 == 0) goto LAB_06755264;
              lVar11 = *(long *)(lVar11 + 0x40);
              if (DAT_0897bb55 == '\0') {
                FUN_03a8a718(PTR_DAT_0849fcb0);
                DAT_0897bb55 = '\x01';
              }
              if (lVar11 == 0) goto LAB_06755264;
              if (*(int *)(lVar11 + 0x10) == 1) {
                uVar9 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar9) goto LAB_06754fd8;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_0675524c;
                lVar14 = *(long *)(unaff_x22 + 8);
                uVar4 = FUN_065c7d98(lVar11,0,0);
                *(undefined2 *)(lVar14 + (long)(int)uVar9 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
              }
              else {
LAB_06754fd8:
                FUN_065e5d60();
              }
              unaff_w21 = unaff_w21 - 1;
            }
          }
        }
      }
      iVar8 = iVar8 + -1;
      goto LAB_06755040;
    }
    if (uVar2 == 0x24) goto LAB_067549a4;
    if (uVar2 == 0x25) {
      if (lVar11 != 0) {
        lVar11 = *(long *)(lVar11 + 0x90);
        goto LAB_06754bec;
      }
      goto LAB_06755264;
    }
    if (uVar2 != 0x26) goto LAB_06754924;
  }
  else {
    if (0x2d < uVar2) {
      if (uVar2 != 0x2e) {
        if (uVar2 != 0x2f) {
          if (uVar2 == 0x30) goto LAB_06754a88;
          goto LAB_06754924;
        }
        goto LAB_067549a4;
      }
      if ((*(uint *)(unaff_x29 + -0x74) & 1) == 0 && iVar8 == 0) {
        if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
           ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*unaff_x25 != 0))))
        goto LAB_06754c9c;
        *(undefined4 *)(unaff_x29 + -0x74) = 0;
        iVar8 = 0;
      }
      goto LAB_06755040;
    }
    if (uVar2 == 0x27) {
LAB_06754a9c:
      if ((int)uVar9 < (int)uVar16) {
        lVar11 = unaff_x27 << 0x20;
        puVar10 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar9 * 2);
        uVar9 = ~*(uint *)(unaff_x29 + -0x24);
        while ((uVar1 = *puVar10, uVar1 != 0 && (uVar1 != uVar2))) {
          if (DAT_0897af3c == '\0') {
            FUN_03a8a718(PTR_DAT_0849fcb0);
            DAT_0897af3c = '\x01';
          }
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_0675524c;
            *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = uVar1;
          }
          else {
            FUN_065e5c34();
          }
          uVar9 = uVar9 - 1;
          puVar10 = puVar10 + 1;
          lVar11 = lVar11 + 0x100000000;
          if (*(uint *)(unaff_x29 + -0x70) == uVar9) goto LAB_067550fc;
        }
        unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
        unaff_x27 = (ulong)((*(short *)((lVar11 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) -
                           uVar9);
      }
      goto LAB_06755040;
    }
    if (uVar2 == 0x2c) goto LAB_06755040;
    if (uVar2 != 0x2d) {
LAB_06754924:
      if (uVar2 == 0x45) goto LAB_0675492c;
    }
  }
LAB_067549a4:
  if (DAT_0897af3c == '\0') {
    FUN_03a8a718(PTR_DAT_0849fcb0);
    DAT_0897af3c = '\x01';
  }
  uVar9 = *(uint *)(unaff_x22 + 0x18);
  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar9) goto LAB_067549fc;
  if (uVar9 < *(uint *)(unaff_x22 + 0x10)) {
    lVar11 = *(long *)(unaff_x22 + 8);
    goto LAB_067549e8;
  }
  goto LAB_0675524c;
LAB_06754c9c:
  if (lVar11 != 0) {
    lVar11 = *(long *)(lVar11 + 0x38);
    if (DAT_0897bb55 == '\0') {
      FUN_03a8a718(PTR_DAT_0849fcb0);
      DAT_0897bb55 = '\x01';
    }
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x10) == 1) {
        uVar9 = *(uint *)(unaff_x22 + 0x18);
        unaff_x20 = (long)(int)uVar9;
        if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) goto code_r0x06754ce8;
      }
      FUN_065e5d60();
      goto LAB_067550f0;
    }
  }
LAB_06755264:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  goto LAB_0675527c;
code_r0x06754ce8:
  if (*(uint *)(unaff_x22 + 0x10) <= uVar9) {
LAB_0675524c:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
LAB_0675527c:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  unaff_x24 = *(long *)(unaff_x22 + 8);
  param_1 = FUN_065c7d98(lVar11,0,0);
  goto code_r0x06754d04;
}


