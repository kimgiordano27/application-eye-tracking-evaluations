/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
ENTRY_POINT: 074e820c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
               (long param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  undefined1 auVar6 [12];
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  ushort *puVar20;
  short *psVar21;
  uint uVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  long lVar28;
  int iVar29;
  short *psVar30;
  short sVar31;
  int iVar32;
  int iVar33;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar34 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
code_r0x074e820c:
  iVar29 = 0;
  iVar26 = 0;
  uVar24 = 0;
  uVar25 = 0;
  iVar15 = 0;
  iVar32 = 0x7fffffff;
  iVar18 = -1;
  iVar23 = -1;
  uVar27 = unaff_w23;
  do {
    uVar2 = *(ushort *)(param_1 + (long)(int)uVar27 * 2);
    iVar33 = (int)unaff_x27;
    iVar16 = iVar23;
    if ((uVar2 == 0x3b) || (uVar2 == 0)) break;
    uVar19 = uVar27 + 1;
    uVar22 = (uint)uVar2;
    iVar8 = iVar29;
    iVar9 = iVar32;
    if (uVar2 < 0x46) {
      if (uVar2 < 0x27) {
        if (uVar2 < 0x24) {
          if (uVar22 == 0x22) goto LAB_074e8320;
          if (uVar22 == 0x23) {
            iVar8 = iVar29 + 1;
          }
          else {
LAB_074e83a4:
            if (uVar22 == 0x45) goto LAB_074e83ac;
          }
        }
        else if (uVar22 != 0x24) {
          if (uVar2 == 0x25) {
            iVar15 = iVar15 + 2;
          }
          else if (uVar2 != 0x26) goto LAB_074e83a4;
        }
      }
      else if (uVar2 < 0x2e) {
        if (uVar22 == 0x27) {
LAB_074e8320:
          lVar17 = (long)(int)uVar19;
          puVar20 = (ushort *)(param_1 + (long)(int)uVar19 * 2);
          lVar28 = lVar17;
          if (lVar17 <= *(long *)(unaff_x29 + -0x68)) {
            lVar28 = *(long *)(unaff_x29 + -0x68);
          }
          do {
            if (lVar28 == lVar17) goto LAB_074e844c;
            uVar2 = *puVar20;
            if (uVar2 == 0) break;
            lVar17 = lVar17 + 1;
            puVar20 = puVar20 + 1;
          } while (uVar2 != uVar22);
          uVar19 = (uint)lVar17;
        }
        else if (uVar2 == 0x2c) {
          if ((0 < iVar29) && (iVar23 < 0)) {
            if (iVar18 < 0) {
              *(undefined4 *)(unaff_x29 + -0x44) = 1;
              iVar18 = iVar29;
            }
            else {
              uVar25 = iVar18 != iVar29 | uVar25;
              iVar23 = 1;
              if (iVar18 == iVar29) {
                iVar23 = *(int *)(unaff_x29 + -0x44) + 1;
              }
              *(int *)(unaff_x29 + -0x44) = iVar23;
              iVar18 = iVar29;
            }
          }
        }
        else if (uVar2 != 0x2d) goto LAB_074e83a4;
      }
      else if (uVar2 == 0x2e) {
        iVar16 = iVar29;
        if (-1 < iVar23) {
          iVar16 = iVar23;
        }
      }
      else if (uVar2 != 0x2f) {
        if (uVar22 != 0x30) goto LAB_074e83a4;
        iVar26 = iVar29 + 1;
        iVar8 = iVar26;
        iVar9 = iVar29;
        if (iVar32 != 0x7fffffff) {
          iVar9 = iVar32;
        }
      }
    }
    else if (uVar2 == 0x5c) {
      if (((int)uVar19 < iVar33) && (*(short *)(param_1 + (long)(int)uVar19 * 2) != 0)) {
        uVar19 = uVar27 + 2;
      }
    }
    else if (uVar2 == 0x65) {
LAB_074e83ac:
      if (((int)uVar19 < iVar33) && (*(short *)(param_1 + (long)(int)uVar19 * 2) == 0x30))
      goto LAB_074e83ec;
      if (((int)(uVar27 + 2) < iVar33) &&
         ((sVar31 = *(short *)(param_1 + (long)(int)uVar19 * 2), sVar31 == 0x2d || (sVar31 == 0x2b))
         )) {
        sVar31 = *(short *)(param_1 + (long)(int)(uVar27 + 2) * 2);
        while (sVar31 == 0x30) {
LAB_074e83ec:
          uVar19 = uVar19 + 1;
          if (iVar33 <= (int)uVar19) {
            uVar24 = 1;
            goto LAB_074e844c;
          }
          uVar24 = 1;
          sVar31 = *(short *)(param_1 + (long)(int)uVar19 * 2);
        }
      }
    }
    else if (uVar22 == unaff_w21) {
      iVar15 = iVar15 + 3;
    }
    iVar32 = iVar9;
    iVar29 = iVar8;
    iVar23 = iVar16;
    uVar27 = uVar19;
  } while ((int)uVar19 < iVar33);
LAB_074e844c:
  *(undefined4 *)(unaff_x29 + -0x24) = uVar24;
  iVar23 = iVar29;
  if (-1 < iVar16) {
    iVar23 = iVar16;
  }
  uVar27 = unaff_w23;
  if (-1 < iVar18) {
    if (iVar18 == iVar23) {
      iVar15 = *(int *)(unaff_x29 + -0x44) * -3 + iVar15;
    }
    else {
      uVar25 = 1;
    }
  }
  do {
    *(uint *)(unaff_x29 + -0x34) = uVar25;
    puVar7 = PTR_DAT_08f9f500;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      FUN_074f3a14();
      *(undefined4 *)(unaff_x28 + 4) = 0;
LAB_074e8534:
      iVar15 = iVar23 - iVar32;
      *(undefined4 *)(unaff_x29 + -0x44) = 0;
      if (iVar15 == 0 || iVar23 < iVar32) {
        iVar15 = 0;
      }
      iVar18 = iVar23 - iVar26;
      if (iVar26 <= iVar23) {
        iVar18 = 0;
      }
      *(int *)(unaff_x29 + -0x8c) = iVar18;
      iVar26 = iVar23;
      if ((*(uint *)(unaff_x29 + -0x24) & 1) == 0) {
        iVar18 = *(int *)(unaff_x28 + 4);
        iVar26 = iVar18;
        if (iVar18 - iVar23 == 0 || iVar18 < iVar23) {
          iVar26 = iVar23;
        }
        *(int *)(unaff_x29 + -0x44) = iVar18 - iVar23;
      }
      uVar13 = DAT_01a349c8;
      puVar14 = &uStack_10;
      uStack_10 = 0;
      uStack_8 = 0;
      lVar17 = *(long *)(unaff_x29 + -0x40);
      *(undefined8 **)(unaff_x29 + -0x18) = puVar14;
      *(undefined8 *)(unaff_x29 + -0x50) = unaff_x27;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar13;
      *(long *)(unaff_x29 + -0x80) = unaff_x28;
      *(int *)(unaff_x29 + -0x90) = iVar15;
      if ((*(uint *)(unaff_x29 + -0x34) & 1) != 0) {
        if ((lVar17 == 0) || (*(long *)(lVar17 + 0x40) == 0)) goto LAB_074e9288;
        if (0 < *(int *)(*(long *)(lVar17 + 0x40) + 0x10)) {
          lVar17 = *(long *)(lVar17 + 0x10);
          if (lVar17 == 0) goto LAB_074e9288;
          iVar18 = *(int *)(lVar17 + 0x18);
          if (iVar18 == 0) {
            iVar32 = 0;
          }
          else {
            iVar32 = *(int *)(lVar17 + 0x20);
          }
          uVar25 = 0xffffffff;
          iVar16 = (*(uint *)(unaff_x29 + -0x44) & (int)*(uint *)(unaff_x29 + -0x44) >> 0x1f) +
                   iVar26;
          if (iVar15 <= iVar16) {
            iVar15 = iVar16;
          }
          if ((iVar32 == 0) || (iVar15 <= iVar32)) goto LAB_074e85d4;
          lVar28 = 0;
          *(long *)(unaff_x29 + -0x70) = lVar17;
          *(int *)(unaff_x29 + -0x74) = iVar15;
          iVar16 = iVar32;
          break;
        }
      }
      uVar25 = 0xffffffff;
      goto LAB_074e85d4;
    }
    *(int *)(unaff_x28 + 4) = *(int *)(unaff_x28 + 4) + iVar15;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    FUN_074ed038();
    if (**(short **)(unaff_x29 + -0x30) != 0) goto LAB_074e8534;
    if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    unaff_w23 = FUN_074ee3c8(*(undefined8 *)(unaff_x29 + -0x20));
    if (unaff_w23 == uVar27) goto LAB_074e8534;
    param_1 = FUN_04bf989c(*(undefined8 *)(unaff_x29 + -0x20));
    if ((int)unaff_w23 < iVar33) goto code_r0x074e820c;
    iVar23 = 0;
    *(undefined4 *)(unaff_x29 + -0x24) = 0;
    iVar26 = 0;
    iVar29 = 0;
    iVar15 = 0;
    uVar25 = 0;
    iVar32 = 0x7fffffff;
    uVar27 = unaff_w23;
  } while( true );
  while ((iVar16 != 0 && (iVar32 = iVar16 + iVar32, iVar32 < iVar15))) {
    puVar7 = PTR_DAT_08f68538;
    iVar33 = *(int *)(unaff_x29 + -0x10);
    auVar6._8_4_ = iVar33;
    auVar6._0_8_ = puVar14;
    uVar25 = uVar25 + 1;
    if (iVar33 <= (int)uVar25) {
      *(uint *)(unaff_x29 + -0x58) = uVar25;
      uVar13 = FUN_040316d0(*(undefined8 *)puVar7,iVar33 << 1);
      auVar34 = FUN_060267d4(uVar13,*(undefined8 *)PTR_DAT_08fa2c00);
      FUN_060262c0(unaff_x29 + -0x18,auVar34._0_8_,auVar34._8_8_,*(undefined8 *)PTR_DAT_08fa2bf8);
      auVar34 = FUN_060267d4(uVar13,*(undefined8 *)PTR_DAT_08fa2c00);
      auVar6 = auVar34._0_12_;
      iVar15 = *(int *)(unaff_x29 + -0x74);
      lVar17 = *(long *)(unaff_x29 + -0x70);
      uVar25 = *(uint *)(unaff_x29 + -0x58);
      *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar34;
    }
    puVar14 = auVar6._0_8_;
    if (auVar6._8_4_ <= uVar25) goto LAB_074e9270;
    *(int *)((long)puVar14 + (long)(int)uVar25 * 4) = iVar32;
    if ((int)lVar28 < iVar18 + -1) {
      lVar28 = (long)(int)lVar28 + 1;
      if (*(uint *)(lVar17 + 0x18) <= (uint)lVar28) goto LAB_074e9270;
      iVar16 = *(int *)(lVar17 + lVar28 * 4 + 0x20);
    }
  }
LAB_074e85d4:
  *(int *)(unaff_x29 + -0x5c) = iVar23;
  *(int *)(unaff_x29 + -0x94) = iVar29;
  uVar11 = FUN_074f3a04(*(undefined8 *)(unaff_x29 + -0x80),0);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x50);
  if (((uVar11 & 1) == 0) || (uVar27 != 0)) {
LAB_074e8684:
    uVar12 = FUN_04bf989c(*(undefined8 *)(unaff_x29 + -0x20),uVar13,*(undefined8 *)PTR_DAT_08f992c8)
    ;
    uVar19 = *(uint *)(unaff_x29 + -0x24);
    *(undefined8 *)(unaff_x29 + -0x58) = uVar12;
    if ((int)uVar27 < (int)uVar13) {
      psVar30 = *(short **)(unaff_x29 + -0x30);
      *(uint *)(unaff_x29 + -0x20) = *(uint *)(unaff_x29 + -0x34) ^ 1;
      iVar15 = (int)*(undefined8 *)(unaff_x29 + -0x50);
      *(int *)(unaff_x29 + -0x98) = iVar15 + -2;
      *(undefined4 *)(unaff_x29 + -0x74) = 0;
      *(int *)(unaff_x29 + -0x70) = -iVar15;
LAB_074e86d0:
      uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2);
      if ((uVar2 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = uVar27, uVar2 == 0)) goto LAB_074e9120;
      iVar15 = *(int *)(unaff_x29 + -0x44);
      if ((iVar15 < 1) ||
         ((0x30 < uVar2 || ((1L << ((ulong)uVar2 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar17 = *(long *)(unaff_x29 + -0x40);
      }
      else {
        iVar18 = iVar15 + 1;
        lVar17 = *(long *)(unaff_x29 + -0x40);
        if (0 < iVar15) {
          iVar15 = 1;
        }
        uVar27 = *(uint *)(unaff_x29 + -0x20);
        *(int *)(unaff_x29 + -0x34) = iVar15 + -1;
        do {
          sVar31 = *psVar30;
          sVar5 = 0x30;
          if (sVar31 != 0) {
            psVar30 = psVar30 + 1;
            sVar5 = sVar31;
          }
          if (DAT_095462cd == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca68);
            DAT_095462cd = '\x01';
          }
          uVar22 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_074e9270;
            *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = sVar5;
          }
          else {
            FUN_073869c4();
          }
          if (((uVar27 & 1) == 0 && 1 < iVar26) && (-1 < (int)uVar25)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar25) goto LAB_074e9270;
            if (iVar26 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar25 * 4) + 1) {
              if (lVar17 == 0) goto LAB_074e9288;
              lVar28 = *(long *)(lVar17 + 0x40);
              if (DAT_09546f42 == '\0') {
                FUN_0403162c(PTR_DAT_08f8ca68);
                DAT_09546f42 = '\x01';
              }
              if (lVar28 == 0) goto LAB_074e9288;
              if (*(int *)(lVar28 + 0x10) == 1) {
                uVar27 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar27) goto LAB_074e8858;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar27) goto LAB_074e9270;
                lVar17 = *(long *)(unaff_x22 + 8);
                uVar10 = FUN_07363804(lVar28,0,0);
                *(undefined2 *)(lVar17 + (long)(int)uVar27 * 2) = uVar10;
                lVar17 = *(long *)(unaff_x29 + -0x40);
                *(uint *)(unaff_x22 + 0x18) = uVar27 + 1;
              }
              else {
LAB_074e8858:
                FUN_07386af0();
              }
              uVar27 = *(uint *)(unaff_x29 + -0x20);
              uVar25 = uVar25 - 1;
            }
          }
          iVar18 = iVar18 + -1;
          iVar26 = iVar26 + -1;
        } while (1 < iVar18);
        iVar15 = *(int *)(unaff_x29 + -0x34);
      }
      *(int *)(unaff_x29 + -0x44) = iVar15;
      uVar27 = *(int *)(unaff_x29 + -0x24) + 1;
      uVar22 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
      if (uVar2 < 0x46) {
        if (uVar2 < 0x27) {
          if (uVar2 < 0x24) {
            if (uVar2 == 0x22) goto LAB_074e8ac0;
            if (uVar2 != 0x23) goto LAB_074e8948;
LAB_074e8aac:
            if (iVar15 < 0) {
              iVar15 = iVar15 + 1;
              if (iVar26 <= *(int *)(unaff_x29 + -0x90)) {
LAB_074e8e2c:
                sVar31 = 0x30;
                goto LAB_074e8e30;
              }
              *(int *)(unaff_x29 + -0x44) = iVar15;
            }
            else {
              sVar31 = *psVar30;
              if (sVar31 == 0) {
                if (*(int *)(unaff_x29 + -0x8c) < iVar26) goto LAB_074e8e2c;
              }
              else {
                psVar30 = psVar30 + 1;
LAB_074e8e30:
                if (DAT_095462cd == '\0') {
                  FUN_0403162c(PTR_DAT_08f8ca68);
                  DAT_095462cd = '\x01';
                }
                uVar3 = *(uint *)(unaff_x22 + 0x18);
                uVar4 = *(uint *)(unaff_x22 + 0x10);
                *(int *)(unaff_x29 + -0x44) = iVar15;
                if ((int)uVar3 < (int)uVar4) {
                  if (uVar4 <= uVar3) goto LAB_074e9270;
                  *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar3 * 2) = sVar31;
                }
                else {
                  FUN_073869c4();
                }
                if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < iVar26) && (-1 < (int)uVar25)) {
                  if (*(uint *)(unaff_x29 + -0x10) <= uVar25) goto LAB_074e9270;
                  if (iVar26 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar25 * 4) + 1) {
                    if (lVar17 == 0) goto LAB_074e9288;
                    lVar17 = *(long *)(lVar17 + 0x40);
                    if (DAT_09546f42 == '\0') {
                      FUN_0403162c(PTR_DAT_08f8ca68);
                      DAT_09546f42 = '\x01';
                    }
                    if (lVar17 == 0) goto LAB_074e9288;
                    if (*(int *)(lVar17 + 0x10) == 1) {
                      uVar4 = *(uint *)(unaff_x22 + 0x18);
                      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar4) goto LAB_074e8ffc;
                      if (*(uint *)(unaff_x22 + 0x10) <= uVar4) goto LAB_074e9270;
                      lVar28 = *(long *)(unaff_x22 + 8);
                      uVar10 = FUN_07363804(lVar17,0,0);
                      *(undefined2 *)(lVar28 + (long)(int)uVar4 * 2) = uVar10;
                      *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
                    }
                    else {
LAB_074e8ffc:
                      FUN_07386af0();
                    }
                    uVar25 = uVar25 - 1;
                  }
                }
              }
            }
            iVar26 = iVar26 + -1;
            goto LAB_074e9064;
          }
          if (uVar2 == 0x24) goto LAB_074e89c8;
          if (uVar2 == 0x25) {
            if (lVar17 != 0) {
              lVar17 = *(long *)(lVar17 + 0x90);
              goto LAB_074e8c10;
            }
            goto LAB_074e9288;
          }
          if (uVar2 != 0x26) goto LAB_074e8948;
        }
        else if (uVar2 < 0x2e) {
          if (uVar2 == 0x27) {
LAB_074e8ac0:
            if ((int)uVar27 < (int)uVar22) {
              lVar17 = (ulong)uVar27 << 0x20;
              puVar20 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2);
              uVar27 = ~*(uint *)(unaff_x29 + -0x24);
              while ((uVar1 = *puVar20, uVar1 != 0 && (uVar1 != uVar2))) {
                if (DAT_095462cd == '\0') {
                  FUN_0403162c(PTR_DAT_08f8ca68);
                  DAT_095462cd = '\x01';
                }
                uVar22 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_074e9270;
                  *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                  *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = uVar1;
                }
                else {
                  FUN_073869c4();
                }
                uVar27 = uVar27 - 1;
                puVar20 = puVar20 + 1;
                lVar17 = lVar17 + 0x100000000;
                if (*(uint *)(unaff_x29 + -0x70) == uVar27) goto LAB_074e9120;
              }
              uVar22 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
              uVar27 = (*(short *)((lVar17 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar27;
            }
            goto LAB_074e9064;
          }
          if (uVar2 == 0x2c) goto LAB_074e9064;
          if (uVar2 != 0x2d) goto LAB_074e8948;
        }
        else {
          if (uVar2 == 0x2e) {
            if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || iVar26 != 0) goto LAB_074e9064;
            if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
               ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*psVar30 != 0)))) {
              if (lVar17 == 0) goto LAB_074e9288;
              lVar17 = *(long *)(lVar17 + 0x38);
              if (DAT_09546f42 == '\0') {
                FUN_0403162c(PTR_DAT_08f8ca68);
                DAT_09546f42 = '\x01';
              }
              if (lVar17 == 0) goto LAB_074e9288;
              if (*(int *)(lVar17 + 0x10) == 1) {
                uVar4 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar4) goto LAB_074e9100;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar4) goto LAB_074e9270;
                lVar28 = *(long *)(unaff_x22 + 8);
                uVar10 = FUN_07363804(lVar17,0,0);
                *(undefined2 *)(lVar28 + (long)(int)uVar4 * 2) = uVar10;
                *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
              }
              else {
LAB_074e9100:
                FUN_07386af0();
              }
              iVar26 = 0;
              *(undefined4 *)(unaff_x29 + -0x74) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x74) = 0;
              iVar26 = 0;
            }
            goto LAB_074e9064;
          }
          if (uVar2 != 0x2f) {
            if (uVar2 == 0x30) goto LAB_074e8aac;
LAB_074e8948:
            if (uVar2 == 0x45) goto LAB_074e8950;
          }
        }
LAB_074e89c8:
        if (DAT_095462cd == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca68);
          DAT_095462cd = '\x01';
        }
        uVar4 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar4 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar4) goto LAB_074e9270;
          lVar17 = *(long *)(unaff_x22 + 8);
LAB_074e8a0c:
          *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
          *(ushort *)(lVar17 + (long)(int)uVar4 * 2) = uVar2;
        }
        else {
LAB_074e8a20:
          FUN_073869c4();
        }
      }
      else if (uVar2 == 0x5c) {
        if (((int)uVar27 < (int)uVar22) &&
           (sVar31 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2), sVar31 != 0))
        {
          if (DAT_095462cd == '\0') {
            FUN_0403162c(PTR_DAT_08f8ca68);
            DAT_095462cd = '\x01';
          }
          uVar4 = *(uint *)(unaff_x22 + 0x18);
          uVar27 = *(int *)(unaff_x29 + -0x24) + 2;
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar4) goto LAB_074e8a20;
          if (*(uint *)(unaff_x22 + 0x10) <= uVar4) goto LAB_074e9270;
          *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar4 * 2) = sVar31;
        }
      }
      else if (uVar2 == 0x65) {
LAB_074e8950:
        if ((uVar19 & 1) != 0) {
          if (((int)uVar27 < (int)uVar22) &&
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2) == 0x30)) {
            uVar24 = 0;
            uVar19 = *(int *)(unaff_x29 + -0x24) + 2;
            goto LAB_074e897c;
          }
          uVar19 = *(int *)(unaff_x29 + -0x24) + 2;
          if ((int)uVar19 < (int)uVar22) {
            sVar31 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2);
            if (sVar31 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2) == 0x30) {
                uVar24 = 0;
                goto LAB_074e897c;
              }
            }
            else if ((sVar31 == 0x2b) &&
                    (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2) == 0x30)) {
              uVar24 = 1;
LAB_074e897c:
              uVar27 = uVar19;
              if ((int)uVar19 < (int)uVar22) {
                psVar21 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar19 * 2);
                do {
                  uVar27 = uVar19;
                  if (*psVar21 != 0x30) break;
                  uVar19 = uVar19 + 1;
                  psVar21 = psVar21 + 1;
                  uVar27 = uVar22;
                } while (uVar22 != uVar19);
              }
              if (*(int *)(*(long *)PTR_DAT_08f9f500 + 0xe4) == 0) {
                *(undefined4 *)(unaff_x29 + -0x24) = uVar24;
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
          uVar4 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar4) {
            FUN_073869c4();
            uVar19 = 1;
            goto LAB_074e9064;
          }
          if (uVar4 < *(uint *)(unaff_x22 + 0x10)) {
            lVar17 = *(long *)(unaff_x22 + 8);
            uVar19 = 1;
            goto LAB_074e8a0c;
          }
          goto LAB_074e9270;
        }
        if (DAT_095462cd == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca68);
          DAT_095462cd = '\x01';
        }
        uVar19 = *(uint *)(unaff_x22 + 0x18);
        iVar15 = *(int *)(unaff_x29 + -0x24);
        if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_074e9270;
          *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar19 * 2) = uVar2;
        }
        else {
          FUN_073869c4();
        }
        if ((int)uVar27 < (int)uVar22) {
          sVar31 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2);
          if ((sVar31 == 0x2d) || (sVar31 == 0x2b)) {
            if (DAT_095462cd == '\0') {
              FUN_0403162c(PTR_DAT_08f8ca68);
              DAT_095462cd = '\x01';
            }
            uVar19 = *(uint *)(unaff_x22 + 0x18);
            uVar27 = iVar15 + 2;
            if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_074e9270;
              *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar19 * 2) = sVar31;
            }
            else {
              FUN_073869c4();
            }
          }
          if ((int)uVar27 < (int)uVar22) {
            psVar21 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2);
            lVar17 = *(long *)(unaff_x29 + -0x68) - (long)(int)uVar27;
            while (*psVar21 == 0x30) {
              if (DAT_095462cd == '\0') {
                FUN_0403162c(PTR_DAT_08f8ca68);
                DAT_095462cd = '\x01';
              }
              uVar19 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_074e9270;
                *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar19 * 2) = 0x30;
              }
              else {
                FUN_073869c4();
              }
              lVar17 = lVar17 + -1;
              uVar27 = uVar27 + 1;
              psVar21 = psVar21 + 1;
              if (lVar17 == 0) goto LAB_074e9120;
            }
            uVar22 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
          }
        }
LAB_074e9060:
        uVar19 = 0;
      }
      else {
        if (uVar2 != 0x2030) goto LAB_074e89c8;
        if (lVar17 == 0) goto LAB_074e9288;
        lVar17 = *(long *)(lVar17 + 0x98);
LAB_074e8c10:
        if (DAT_09546f42 == '\0') {
          FUN_0403162c(PTR_DAT_08f8ca68);
          DAT_09546f42 = '\x01';
        }
        if (lVar17 == 0) goto LAB_074e9288;
        if (*(int *)(lVar17 + 0x10) == 1) {
          uVar4 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar4 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar4 < *(uint *)(unaff_x22 + 0x10)) {
              lVar28 = *(long *)(unaff_x22 + 8);
              uVar10 = FUN_07363804(lVar17,0,0);
              *(undefined2 *)(lVar28 + (long)(int)uVar4 * 2) = uVar10;
              *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
              goto LAB_074e9064;
            }
            goto LAB_074e9270;
          }
        }
        FUN_07386af0();
      }
LAB_074e9064:
      if ((int)uVar22 <= (int)uVar27) goto LAB_074e9120;
      goto LAB_074e86d0;
    }
LAB_074e9120:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else {
    if (*(long *)(unaff_x29 + -0x40) != 0) {
      lVar17 = *(long *)(*(long *)(unaff_x29 + -0x40) + 0x30);
      if (DAT_09546f42 == '\0') {
        FUN_0403162c(PTR_DAT_08f8ca68);
        DAT_09546f42 = '\x01';
      }
      if (lVar17 != 0) {
        if (*(int *)(lVar17 + 0x10) == 1) {
          uVar19 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar19) {
LAB_074e9270:
              if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_04031894();
              }
              goto LAB_074e92a0;
            }
            lVar28 = *(long *)(unaff_x22 + 8);
            uVar10 = FUN_07363804(lVar17,0,0);
            *(undefined2 *)(lVar28 + (long)(int)uVar19 * 2) = uVar10;
            *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
            goto LAB_074e8684;
          }
        }
        FUN_07386af0();
        goto LAB_074e8684;
      }
    }
LAB_074e9288:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  }
LAB_074e92a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


