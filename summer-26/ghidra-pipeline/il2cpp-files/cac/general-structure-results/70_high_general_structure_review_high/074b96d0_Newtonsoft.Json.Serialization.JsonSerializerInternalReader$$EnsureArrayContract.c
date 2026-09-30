/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 074b96d0
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract(void)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_w8;
  short *psVar7;
  int unaff_w19;
  uint uVar8;
  ushort *puVar9;
  uint unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long lVar10;
  short *unaff_x25;
  short sVar11;
  long unaff_x26;
  int iVar12;
  long lVar13;
  ulong unaff_x27;
  int iVar14;
  uint uVar15;
  ulong unaff_x28;
  long unaff_x29;
  
  do {
    if (in_w8 == 1) {
      uVar8 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_074b9714;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar8) {
LAB_074b9d08:
        if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f13634();
        }
        goto LAB_074b9d38;
      }
      lVar10 = *(long *)(unaff_x22 + 8);
      uVar4 = FUN_073213d0(unaff_x26,0,0);
      *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar4;
      *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
    }
    else {
LAB_074b9714:
      FUN_0734705c();
    }
LAB_074b9afc:
    iVar12 = (int)unaff_x27;
    if ((int)unaff_x28 <= iVar12) {
LAB_074b9bb8:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_074b9d38;
    }
    uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)iVar12 * 2);
    if ((uVar2 == 0x3b) || (*(int *)(unaff_x29 + -0x24) = iVar12, uVar2 == 0)) goto LAB_074b9bb8;
    iVar12 = *(int *)(unaff_x29 + -0x44);
    if ((iVar12 < 1) || ((0x30 < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x1400800000000U) == 0))))
    {
      lVar10 = *(long *)(unaff_x29 + -0x40);
    }
    else {
      iVar14 = iVar12 + 1;
      lVar10 = *(long *)(unaff_x29 + -0x40);
      if (0 < iVar12) {
        iVar12 = 1;
      }
      uVar8 = *(uint *)(unaff_x29 + -0x20);
      *(int *)(unaff_x29 + -0x34) = iVar12 + -1;
      do {
        sVar11 = *unaff_x25;
        sVar3 = 0x30;
        if (sVar11 != 0) {
          unaff_x25 = unaff_x25 + 1;
          sVar3 = sVar11;
        }
        if (DAT_0968d807 == '\0') {
          FUN_03f13384(PTR_DAT_09129228);
          DAT_0968d807 = '\x01';
        }
        uVar15 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_074b9d08;
          *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar3;
        }
        else {
          FUN_07346f30();
        }
        if (((uVar8 & 1) == 0 && 1 < unaff_w19) && (-1 < (int)unaff_w21)) {
          if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_074b9d08;
          if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1) {
            if (lVar10 == 0) goto LAB_074b9d20;
            lVar13 = *(long *)(lVar10 + 0x40);
            if (DAT_0968e4c0 == '\0') {
              FUN_03f13384(PTR_DAT_09129228);
              DAT_0968e4c0 = '\x01';
            }
            if (lVar13 == 0) goto LAB_074b9d20;
            if (*(int *)(lVar13 + 0x10) == 1) {
              uVar8 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_074b92f0;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_074b9d08;
              lVar10 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_073213d0(lVar13,0,0);
              *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar4;
              lVar10 = *(long *)(unaff_x29 + -0x40);
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
            }
            else {
LAB_074b92f0:
              FUN_0734705c();
            }
            uVar8 = *(uint *)(unaff_x29 + -0x20);
            unaff_w21 = unaff_w21 - 1;
          }
        }
        iVar14 = iVar14 + -1;
        unaff_w19 = unaff_w19 + -1;
      } while (1 < iVar14);
      iVar12 = *(int *)(unaff_x29 + -0x34);
    }
    unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
    *(int *)(unaff_x29 + -0x44) = iVar12;
    uVar8 = *(int *)(unaff_x29 + -0x24) + 1;
    unaff_x27 = (ulong)uVar8;
    uVar15 = (uint)unaff_x28;
    if (uVar2 < 0x46) {
      if (uVar2 < 0x27) {
        if (uVar2 < 0x24) {
          if (uVar2 == 0x22) goto LAB_074b9558;
          if (uVar2 != 0x23) goto LAB_074b93e0;
LAB_074b9544:
          if (iVar12 < 0) {
            iVar12 = iVar12 + 1;
            if (unaff_w19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_074b98c4:
              sVar11 = 0x30;
              goto LAB_074b98c8;
            }
            *(int *)(unaff_x29 + -0x44) = iVar12;
          }
          else {
            sVar11 = *unaff_x25;
            if (sVar11 == 0) {
              if (*(int *)(unaff_x29 + -0x8c) < unaff_w19) goto LAB_074b98c4;
            }
            else {
              unaff_x25 = unaff_x25 + 1;
LAB_074b98c8:
              if (DAT_0968d807 == '\0') {
                FUN_03f13384(PTR_DAT_09129228);
                DAT_0968d807 = '\x01';
              }
              uVar15 = *(uint *)(unaff_x22 + 0x18);
              uVar8 = *(uint *)(unaff_x22 + 0x10);
              *(int *)(unaff_x29 + -0x44) = iVar12;
              if ((int)uVar15 < (int)uVar8) {
                if (uVar8 <= uVar15) goto LAB_074b9d08;
                *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar11;
              }
              else {
                FUN_07346f30();
              }
              if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < unaff_w19) &&
                 (-1 < (int)unaff_w21)) {
                if (*(uint *)(unaff_x29 + -0x10) <= unaff_w21) goto LAB_074b9d08;
                if (unaff_w19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)unaff_w21 * 4) + 1)
                {
                  if (lVar10 == 0) goto LAB_074b9d20;
                  lVar10 = *(long *)(lVar10 + 0x40);
                  if (DAT_0968e4c0 == '\0') {
                    FUN_03f13384(PTR_DAT_09129228);
                    DAT_0968e4c0 = '\x01';
                  }
                  if (lVar10 == 0) goto LAB_074b9d20;
                  if (*(int *)(lVar10 + 0x10) == 1) {
                    uVar8 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_074b9a94;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_074b9d08;
                    lVar13 = *(long *)(unaff_x22 + 8);
                    uVar4 = FUN_073213d0(lVar10,0,0);
                    *(undefined2 *)(lVar13 + (long)(int)uVar8 * 2) = uVar4;
                    *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                  }
                  else {
LAB_074b9a94:
                    FUN_0734705c();
                  }
                  unaff_w21 = unaff_w21 - 1;
                }
              }
            }
          }
          unaff_w19 = unaff_w19 + -1;
          goto LAB_074b9afc;
        }
        if (uVar2 == 0x24) goto LAB_074b9460;
        if (uVar2 == 0x25) {
          if (lVar10 == 0) goto LAB_074b9d20;
          unaff_x26 = *(long *)(lVar10 + 0x90);
          goto LAB_074b96a8;
        }
        if (uVar2 != 0x26) goto LAB_074b93e0;
      }
      else {
        if (0x2d < uVar2) {
          if (uVar2 != 0x2e) {
            if (uVar2 != 0x2f) {
              if (uVar2 == 0x30) goto LAB_074b9544;
              goto LAB_074b93e0;
            }
            goto LAB_074b9460;
          }
          if ((*(uint *)(unaff_x29 + -0x74) & 1) == 0 && unaff_w19 == 0) {
            if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
               ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*unaff_x25 != 0)))) {
              if (lVar10 == 0) goto LAB_074b9d20;
              lVar10 = *(long *)(lVar10 + 0x38);
              if (DAT_0968e4c0 == '\0') {
                FUN_03f13384(PTR_DAT_09129228);
                DAT_0968e4c0 = '\x01';
              }
              if (lVar10 == 0) goto LAB_074b9d20;
              if (*(int *)(lVar10 + 0x10) == 1) {
                uVar8 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_074b9b98;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_074b9d08;
                lVar13 = *(long *)(unaff_x22 + 8);
                uVar4 = FUN_073213d0(lVar10,0,0);
                *(undefined2 *)(lVar13 + (long)(int)uVar8 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
              }
              else {
LAB_074b9b98:
                FUN_0734705c();
              }
              unaff_w19 = 0;
              *(undefined4 *)(unaff_x29 + -0x74) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x74) = 0;
              unaff_w19 = 0;
            }
          }
          goto LAB_074b9afc;
        }
        if (uVar2 == 0x27) {
LAB_074b9558:
          if ((int)uVar8 < (int)uVar15) {
            lVar10 = unaff_x27 << 0x20;
            puVar9 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
            uVar8 = ~*(uint *)(unaff_x29 + -0x24);
            while ((uVar1 = *puVar9, uVar1 != 0 && (uVar1 != uVar2))) {
              if (DAT_0968d807 == '\0') {
                FUN_03f13384(PTR_DAT_09129228);
                DAT_0968d807 = '\x01';
              }
              uVar15 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_074b9d08;
                *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar1;
              }
              else {
                FUN_07346f30();
              }
              uVar8 = uVar8 - 1;
              puVar9 = puVar9 + 1;
              lVar10 = lVar10 + 0x100000000;
              if (*(uint *)(unaff_x29 + -0x70) == uVar8) goto LAB_074b9bb8;
            }
            unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
            unaff_x27 = (ulong)((*(short *)((lVar10 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) -
                               uVar8);
          }
          goto LAB_074b9afc;
        }
        if (uVar2 == 0x2c) goto LAB_074b9afc;
        if (uVar2 != 0x2d) {
LAB_074b93e0:
          if (uVar2 == 0x45) goto LAB_074b93e8;
        }
      }
LAB_074b9460:
      if (DAT_0968d807 == '\0') {
        FUN_03f13384(PTR_DAT_09129228);
        DAT_0968d807 = '\x01';
      }
      uVar8 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_074b94b8;
      if (uVar8 < *(uint *)(unaff_x22 + 0x10)) {
        lVar10 = *(long *)(unaff_x22 + 8);
        goto LAB_074b94a4;
      }
      goto LAB_074b9d08;
    }
    if (uVar2 == 0x5c) {
      if (((int)uVar8 < (int)uVar15) &&
         (sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2), sVar11 != 0)) {
        if (DAT_0968d807 == '\0') {
          FUN_03f13384(PTR_DAT_09129228);
          DAT_0968d807 = '\x01';
        }
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        unaff_x27 = (ulong)(*(int *)(unaff_x29 + -0x24) + 2);
        if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_074b9d08;
          *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar11;
        }
        else {
LAB_074b94b8:
          FUN_07346f30();
        }
      }
      goto LAB_074b9afc;
    }
    if (uVar2 == 0x65) {
LAB_074b93e8:
      if ((unaff_x23 & 1) == 0) {
        if (DAT_0968d807 == '\0') {
          FUN_03f13384(PTR_DAT_09129228);
          DAT_0968d807 = '\x01';
        }
        uVar6 = *(uint *)(unaff_x22 + 0x18);
        iVar12 = *(int *)(unaff_x29 + -0x24);
        if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_074b9d08;
          *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = uVar2;
        }
        else {
          FUN_07346f30();
        }
        if ((int)uVar8 < (int)uVar15) {
          sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
          if ((sVar11 == 0x2d) || (sVar11 == 0x2b)) {
            if (DAT_0968d807 == '\0') {
              FUN_03f13384(PTR_DAT_09129228);
              DAT_0968d807 = '\x01';
            }
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            unaff_x27 = (ulong)(iVar12 + 2);
            if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_074b9d08;
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar11;
            }
            else {
              FUN_07346f30();
            }
          }
          iVar12 = (int)unaff_x27;
          if (iVar12 < (int)uVar15) {
            psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar12 * 2);
            lVar10 = *(long *)(unaff_x29 + -0x68) - (long)iVar12;
            while (*psVar7 == 0x30) {
              if (DAT_0968d807 == '\0') {
                FUN_03f13384(PTR_DAT_09129228);
                DAT_0968d807 = '\x01';
              }
              uVar8 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_074b9d08;
                *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = 0x30;
              }
              else {
                FUN_07346f30();
              }
              lVar10 = lVar10 + -1;
              unaff_x27 = (ulong)((int)unaff_x27 + 1);
              psVar7 = psVar7 + 1;
              if (lVar10 == 0) goto LAB_074b9bb8;
            }
            unaff_x28 = *(ulong *)(unaff_x29 + -0x50);
          }
        }
LAB_074b9af8:
        unaff_x23 = 0;
      }
      else {
        if (((int)uVar8 < (int)uVar15) &&
           (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2) == 0x30)) {
          uVar5 = 0;
          uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
          goto LAB_074b9414;
        }
        uVar6 = *(int *)(unaff_x29 + -0x24) + 2;
        if ((int)uVar6 < (int)uVar15) {
          sVar11 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar8 * 2);
          if (sVar11 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) == 0x30) {
              uVar5 = 0;
              goto LAB_074b9414;
            }
          }
          else if ((sVar11 == 0x2b) &&
                  (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2) == 0x30)) {
            uVar5 = 1;
LAB_074b9414:
            if ((int)uVar6 < (int)uVar15) {
              psVar7 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar6 * 2);
              do {
                if (*psVar7 != 0x30) goto LAB_074b988c;
                uVar6 = uVar6 + 1;
                psVar7 = psVar7 + 1;
              } while (uVar15 != uVar6);
              unaff_x27 = unaff_x28 & 0xffffffff;
            }
            else {
LAB_074b988c:
              unaff_x27 = (ulong)uVar6;
            }
            if (*(int *)(*(long *)PTR_DAT_0912f2c0 + 0xe4) == 0) {
              *(undefined4 *)(unaff_x29 + -0x24) = uVar5;
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
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_074b9d08;
          lVar10 = *(long *)(unaff_x22 + 8);
          unaff_x23 = 1;
LAB_074b94a4:
          *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
          *(ushort *)(lVar10 + (long)(int)uVar8 * 2) = uVar2;
        }
        else {
          FUN_07346f30();
          unaff_x23 = 1;
        }
      }
      goto LAB_074b9afc;
    }
    if (uVar2 != 0x2030) goto LAB_074b9460;
    if (lVar10 == 0) {
LAB_074b9d20:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
LAB_074b9d38:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    unaff_x26 = *(long *)(lVar10 + 0x98);
LAB_074b96a8:
    if (DAT_0968e4c0 == '\0') {
      FUN_03f13384(PTR_DAT_09129228);
      DAT_0968e4c0 = '\x01';
    }
    if (unaff_x26 == 0) goto LAB_074b9d20;
    in_w8 = *(int *)(unaff_x26 + 0x10);
  } while( true );
}


