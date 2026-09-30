/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails
ENTRY_POINT: 05006444
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CalculatePropertyDetails
               (long param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  undefined1 auVar6 [12];
  undefined *puVar7;
  int iVar8;
  undefined2 uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  ushort *puVar21;
  short *psVar22;
  uint uVar23;
  int iVar24;
  undefined4 in_w16;
  int unaff_w19;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  uint uVar25;
  long lVar26;
  int unaff_w25;
  short *psVar27;
  short sVar28;
  int iVar29;
  int iVar30;
  undefined8 unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar31 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
code_r0x05006444:
  uVar10 = 0;
  iVar16 = 0;
  iVar29 = 0x7fffffff;
  iVar19 = -1;
  iVar24 = -1;
  uVar25 = unaff_w23;
  do {
    uVar3 = *(ushort *)(param_1 + (long)(int)uVar25 * 2);
    iVar30 = (int)unaff_x27;
    iVar17 = iVar24;
    if ((uVar3 == 0x3b) || (uVar3 == 0)) break;
    uVar20 = uVar25 + 1;
    uVar23 = (uint)uVar3;
    iVar1 = unaff_w25;
    iVar8 = iVar29;
    if (uVar3 < 0x46) {
      if (uVar3 < 0x27) {
        if (uVar3 < 0x24) {
          if (uVar23 == 0x22) goto LAB_0500654c;
          if (uVar23 == 0x23) {
            iVar1 = unaff_w25 + 1;
          }
          else {
LAB_050065d0:
            if (uVar23 == 0x45) goto LAB_050065d8;
          }
        }
        else if (uVar23 != 0x24) {
          if (uVar3 == 0x25) {
            iVar16 = iVar16 + 2;
          }
          else if (uVar3 != 0x26) goto LAB_050065d0;
        }
      }
      else if (uVar3 < 0x2e) {
        if (uVar23 == 0x27) {
LAB_0500654c:
          lVar18 = (long)(int)uVar20;
          puVar21 = (ushort *)(param_1 + (long)(int)uVar20 * 2);
          lVar26 = lVar18;
          if (lVar18 <= *(long *)(unaff_x29 + -0x68)) {
            lVar26 = *(long *)(unaff_x29 + -0x68);
          }
          do {
            if (lVar26 == lVar18) goto LAB_05006678;
            uVar3 = *puVar21;
            if (uVar3 == 0) break;
            lVar18 = lVar18 + 1;
            puVar21 = puVar21 + 1;
          } while (uVar3 != uVar23);
          uVar20 = (uint)lVar18;
        }
        else if (uVar3 == 0x2c) {
          if ((0 < unaff_w25) && (iVar24 < 0)) {
            if (iVar19 < 0) {
              *(undefined4 *)(unaff_x29 + -0x44) = 1;
              iVar19 = unaff_w25;
            }
            else {
              uVar10 = iVar19 != unaff_w25 | uVar10;
              iVar24 = 1;
              if (iVar19 == unaff_w25) {
                iVar24 = *(int *)(unaff_x29 + -0x44) + 1;
              }
              *(int *)(unaff_x29 + -0x44) = iVar24;
              iVar19 = unaff_w25;
            }
          }
        }
        else if (uVar3 != 0x2d) goto LAB_050065d0;
      }
      else if (uVar3 == 0x2e) {
        iVar17 = unaff_w25;
        if (-1 < iVar24) {
          iVar17 = iVar24;
        }
      }
      else if (uVar3 != 0x2f) {
        if (uVar23 != 0x30) goto LAB_050065d0;
        unaff_w19 = unaff_w25 + 1;
        iVar1 = unaff_w19;
        iVar8 = unaff_w25;
        if (iVar29 != 0x7fffffff) {
          iVar8 = iVar29;
        }
      }
    }
    else if (uVar3 == 0x5c) {
      if (((int)uVar20 < iVar30) && (*(short *)(param_1 + (long)(int)uVar20 * 2) != 0)) {
        uVar20 = uVar25 + 2;
      }
    }
    else if (uVar3 == 0x65) {
LAB_050065d8:
      if (((int)uVar20 < iVar30) && (*(short *)(param_1 + (long)(int)uVar20 * 2) == 0x30))
      goto LAB_05006618;
      if (((int)(uVar25 + 2) < iVar30) &&
         ((sVar28 = *(short *)(param_1 + (long)(int)uVar20 * 2), sVar28 == 0x2d || (sVar28 == 0x2b))
         )) {
        sVar28 = *(short *)(param_1 + (long)(int)(uVar25 + 2) * 2);
        while (sVar28 == 0x30) {
LAB_05006618:
          uVar20 = uVar20 + 1;
          if (iVar30 <= (int)uVar20) {
            in_w16 = 1;
            goto LAB_05006678;
          }
          in_w16 = 1;
          sVar28 = *(short *)(param_1 + (long)(int)uVar20 * 2);
        }
      }
    }
    else if (uVar23 == unaff_w21) {
      iVar16 = iVar16 + 3;
    }
    iVar29 = iVar8;
    unaff_w25 = iVar1;
    iVar24 = iVar17;
    uVar25 = uVar20;
  } while ((int)uVar20 < iVar30);
LAB_05006678:
  *(undefined4 *)(unaff_x29 + -0x24) = in_w16;
  iVar24 = unaff_w25;
  if (-1 < iVar17) {
    iVar24 = iVar17;
  }
  if (-1 < iVar19) {
    if (iVar19 == iVar24) {
      iVar16 = *(int *)(unaff_x29 + -0x44) * -3 + iVar16;
    }
    else {
      uVar10 = 1;
    }
  }
  do {
    *(uint *)(unaff_x29 + -0x34) = uVar10;
    puVar7 = PTR_DAT_06656a10;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      FUN_05011f08();
      *(undefined4 *)(unaff_x28 + 4) = 0;
LAB_05006760:
      iVar16 = iVar24 - iVar29;
      *(undefined4 *)(unaff_x29 + -0x44) = 0;
      if (iVar16 == 0 || iVar24 < iVar29) {
        iVar16 = 0;
      }
      iVar19 = iVar24 - unaff_w19;
      if (unaff_w19 <= iVar24) {
        iVar19 = 0;
      }
      *(int *)(unaff_x29 + -0x8c) = iVar19;
      iVar19 = iVar24;
      if ((*(uint *)(unaff_x29 + -0x24) & 1) == 0) {
        iVar29 = *(int *)(unaff_x28 + 4);
        iVar19 = iVar29;
        if (iVar29 - iVar24 == 0 || iVar29 < iVar24) {
          iVar19 = iVar24;
        }
        *(int *)(unaff_x29 + -0x44) = iVar29 - iVar24;
      }
      uVar13 = DAT_01274d18;
      puVar14 = &uStack_10;
      uStack_10 = 0;
      uStack_8 = 0;
      lVar18 = *(long *)(unaff_x29 + -0x40);
      *(undefined8 **)(unaff_x29 + -0x18) = puVar14;
      *(undefined8 *)(unaff_x29 + -0x50) = unaff_x27;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar13;
      *(long *)(unaff_x29 + -0x80) = unaff_x28;
      *(int *)(unaff_x29 + -0x90) = iVar16;
      if ((*(uint *)(unaff_x29 + -0x34) & 1) != 0) {
        if ((lVar18 == 0) || (*(long *)(lVar18 + 0x40) == 0)) goto LAB_050074b4;
        if (0 < *(int *)(*(long *)(lVar18 + 0x40) + 0x10)) {
          lVar18 = *(long *)(lVar18 + 0x10);
          if (lVar18 == 0) goto LAB_050074b4;
          iVar29 = *(int *)(lVar18 + 0x18);
          if (iVar29 == 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = *(int *)(lVar18 + 0x20);
          }
          uVar10 = 0xffffffff;
          iVar30 = (*(uint *)(unaff_x29 + -0x44) & (int)*(uint *)(unaff_x29 + -0x44) >> 0x1f) +
                   iVar19;
          if (iVar16 <= iVar30) {
            iVar16 = iVar30;
          }
          if ((iVar17 == 0) || (iVar16 <= iVar17)) goto LAB_05006800;
          lVar26 = 0;
          *(long *)(unaff_x29 + -0x70) = lVar18;
          *(int *)(unaff_x29 + -0x74) = iVar16;
          iVar30 = iVar17;
          goto LAB_050073bc;
        }
      }
      uVar10 = 0xffffffff;
      goto LAB_05006800;
    }
    *(int *)(unaff_x28 + 4) = *(int *)(unaff_x28 + 4) + iVar16;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_0500b264();
    if (**(short **)(unaff_x29 + -0x30) != 0) goto LAB_05006760;
    if (*(int *)(*(long *)PTR_DAT_06656a10 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar10 = FUN_0500c5f4(*(undefined8 *)(unaff_x29 + -0x20));
    if (uVar10 == unaff_w23) goto LAB_05006760;
    param_1 = FUN_0329f284(*(undefined8 *)(unaff_x29 + -0x20));
    unaff_w23 = uVar10;
    if ((int)uVar10 < iVar30) break;
    iVar24 = 0;
    *(undefined4 *)(unaff_x29 + -0x24) = 0;
    unaff_w19 = 0;
    unaff_w25 = 0;
    iVar16 = 0;
    uVar10 = 0;
    iVar29 = 0x7fffffff;
  } while( true );
  unaff_w25 = 0;
  unaff_w19 = 0;
  in_w16 = 0;
  goto code_r0x05006444;
  while ((iVar30 != 0 && (iVar17 = iVar30 + iVar17, iVar17 < iVar16))) {
LAB_050073bc:
    puVar7 = PTR_DAT_06646fe8;
    iVar1 = *(int *)(unaff_x29 + -0x10);
    auVar6._8_4_ = iVar1;
    auVar6._0_8_ = puVar14;
    uVar10 = uVar10 + 1;
    if (iVar1 <= (int)uVar10) {
      *(uint *)(unaff_x29 + -0x58) = uVar10;
      uVar13 = FUN_02d4dd2c(*(undefined8 *)puVar7,iVar1 << 1);
      auVar31 = FUN_03c46940(uVar13,*(undefined8 *)PTR_DAT_0665a030);
      FUN_03c4642c(unaff_x29 + -0x18,auVar31._0_8_,auVar31._8_8_,*(undefined8 *)PTR_DAT_0665a020);
      auVar31 = FUN_03c46940(uVar13,*(undefined8 *)PTR_DAT_0665a030);
      auVar6 = auVar31._0_12_;
      iVar16 = *(int *)(unaff_x29 + -0x74);
      lVar18 = *(long *)(unaff_x29 + -0x70);
      uVar10 = *(uint *)(unaff_x29 + -0x58);
      *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar31;
    }
    puVar14 = auVar6._0_8_;
    if (auVar6._8_4_ <= uVar10) goto LAB_0500749c;
    *(int *)((long)puVar14 + (long)(int)uVar10 * 4) = iVar17;
    if ((int)lVar26 < iVar29 + -1) {
      lVar26 = (long)(int)lVar26 + 1;
      if (*(uint *)(lVar18 + 0x18) <= (uint)lVar26) goto LAB_0500749c;
      iVar30 = *(int *)(lVar18 + lVar26 * 4 + 0x20);
    }
  }
LAB_05006800:
  *(int *)(unaff_x29 + -0x5c) = iVar24;
  *(int *)(unaff_x29 + -0x94) = unaff_w25;
  uVar11 = FUN_05011ef8(*(undefined8 *)(unaff_x29 + -0x80),0);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x50);
  if (((uVar11 & 1) == 0) || (unaff_w23 != 0)) {
LAB_050068b0:
    uVar12 = FUN_0329f284(*(undefined8 *)(unaff_x29 + -0x20),uVar13,*(undefined8 *)PTR_DAT_06650828)
    ;
    uVar25 = *(uint *)(unaff_x29 + -0x24);
    *(undefined8 *)(unaff_x29 + -0x58) = uVar12;
    if ((int)unaff_w23 < (int)uVar13) {
      psVar27 = *(short **)(unaff_x29 + -0x30);
      *(uint *)(unaff_x29 + -0x20) = *(uint *)(unaff_x29 + -0x34) ^ 1;
      iVar16 = (int)*(undefined8 *)(unaff_x29 + -0x50);
      *(int *)(unaff_x29 + -0x98) = iVar16 + -2;
      *(undefined4 *)(unaff_x29 + -0x74) = 0;
      *(int *)(unaff_x29 + -0x70) = -iVar16;
LAB_050068fc:
      uVar3 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
      if ((uVar3 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = unaff_w23, uVar3 == 0))
      goto LAB_0500734c;
      iVar16 = *(int *)(unaff_x29 + -0x44);
      if ((iVar16 < 1) ||
         ((0x30 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar18 = *(long *)(unaff_x29 + -0x40);
      }
      else {
        iVar24 = iVar16 + 1;
        lVar18 = *(long *)(unaff_x29 + -0x40);
        if (0 < iVar16) {
          iVar16 = 1;
        }
        uVar20 = *(uint *)(unaff_x29 + -0x20);
        *(int *)(unaff_x29 + -0x34) = iVar16 + -1;
        do {
          sVar28 = *psVar27;
          sVar5 = 0x30;
          if (sVar28 != 0) {
            psVar27 = psVar27 + 1;
            sVar5 = sVar28;
          }
          if (DAT_06a4e421 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4e421 = '\x01';
          }
          uVar23 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_0500749c;
            *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = sVar5;
          }
          else {
            FUN_04e984dc();
          }
          if (((uVar20 & 1) == 0 && 1 < iVar19) && (-1 < (int)uVar10)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar10) goto LAB_0500749c;
            if (iVar19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar10 * 4) + 1) {
              if (lVar18 == 0) goto LAB_050074b4;
              lVar26 = *(long *)(lVar18 + 0x40);
              if (DAT_06a4f0a5 == '\0') {
                FUN_02d4dc40(PTR_DAT_06650d78);
                DAT_06a4f0a5 = '\x01';
              }
              if (lVar26 == 0) goto LAB_050074b4;
              if (*(int *)(lVar26 + 0x10) == 1) {
                uVar20 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_05006a84;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_0500749c;
                lVar18 = *(long *)(unaff_x22 + 8);
                uVar9 = FUN_04e7a3d8(lVar26,0,0);
                *(undefined2 *)(lVar18 + (long)(int)uVar20 * 2) = uVar9;
                lVar18 = *(long *)(unaff_x29 + -0x40);
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
              }
              else {
LAB_05006a84:
                FUN_04e98608();
              }
              uVar20 = *(uint *)(unaff_x29 + -0x20);
              uVar10 = uVar10 - 1;
            }
          }
          iVar24 = iVar24 + -1;
          iVar19 = iVar19 + -1;
        } while (1 < iVar24);
        iVar16 = *(int *)(unaff_x29 + -0x34);
      }
      *(int *)(unaff_x29 + -0x44) = iVar16;
      unaff_w23 = *(int *)(unaff_x29 + -0x24) + 1;
      uVar20 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
      if (uVar3 < 0x46) {
        if (uVar3 < 0x27) {
          if (uVar3 < 0x24) {
            if (uVar3 == 0x22) goto LAB_05006cec;
            if (uVar3 != 0x23) goto LAB_05006b74;
LAB_05006cd8:
            if (iVar16 < 0) {
              iVar16 = iVar16 + 1;
              if (iVar19 <= *(int *)(unaff_x29 + -0x90)) {
LAB_05007058:
                sVar28 = 0x30;
                goto LAB_0500705c;
              }
              *(int *)(unaff_x29 + -0x44) = iVar16;
            }
            else {
              sVar28 = *psVar27;
              if (sVar28 == 0) {
                if (*(int *)(unaff_x29 + -0x8c) < iVar19) goto LAB_05007058;
              }
              else {
                psVar27 = psVar27 + 1;
LAB_0500705c:
                if (DAT_06a4e421 == '\0') {
                  FUN_02d4dc40(PTR_DAT_06650d78);
                  DAT_06a4e421 = '\x01';
                }
                uVar4 = *(uint *)(unaff_x22 + 0x18);
                uVar23 = *(uint *)(unaff_x22 + 0x10);
                *(int *)(unaff_x29 + -0x44) = iVar16;
                if ((int)uVar4 < (int)uVar23) {
                  if (uVar23 <= uVar4) goto LAB_0500749c;
                  *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar4 * 2) = sVar28;
                }
                else {
                  FUN_04e984dc();
                }
                if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < iVar19) && (-1 < (int)uVar10)) {
                  if (*(uint *)(unaff_x29 + -0x10) <= uVar10) goto LAB_0500749c;
                  if (iVar19 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar10 * 4) + 1) {
                    if (lVar18 == 0) goto LAB_050074b4;
                    lVar18 = *(long *)(lVar18 + 0x40);
                    if (DAT_06a4f0a5 == '\0') {
                      FUN_02d4dc40(PTR_DAT_06650d78);
                      DAT_06a4f0a5 = '\x01';
                    }
                    if (lVar18 == 0) goto LAB_050074b4;
                    if (*(int *)(lVar18 + 0x10) == 1) {
                      uVar23 = *(uint *)(unaff_x22 + 0x18);
                      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar23) goto LAB_05007228;
                      if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_0500749c;
                      lVar26 = *(long *)(unaff_x22 + 8);
                      uVar9 = FUN_04e7a3d8(lVar18,0,0);
                      *(undefined2 *)(lVar26 + (long)(int)uVar23 * 2) = uVar9;
                      *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
                    }
                    else {
LAB_05007228:
                      FUN_04e98608();
                    }
                    uVar10 = uVar10 - 1;
                  }
                }
              }
            }
            iVar19 = iVar19 + -1;
            goto LAB_05007290;
          }
          if (uVar3 == 0x24) goto LAB_05006bf4;
          if (uVar3 == 0x25) {
            if (lVar18 != 0) {
              lVar18 = *(long *)(lVar18 + 0x90);
              goto LAB_05006e3c;
            }
            goto LAB_050074b4;
          }
          if (uVar3 != 0x26) goto LAB_05006b74;
        }
        else if (uVar3 < 0x2e) {
          if (uVar3 == 0x27) {
LAB_05006cec:
            if ((int)unaff_w23 < (int)uVar20) {
              lVar18 = (ulong)unaff_w23 << 0x20;
              puVar21 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
              uVar23 = ~*(uint *)(unaff_x29 + -0x24);
              while ((uVar2 = *puVar21, uVar2 != 0 && (uVar2 != uVar3))) {
                if (DAT_06a4e421 == '\0') {
                  FUN_02d4dc40(PTR_DAT_06650d78);
                  DAT_06a4e421 = '\x01';
                }
                uVar20 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_0500749c;
                  *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
                  *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = uVar2;
                }
                else {
                  FUN_04e984dc();
                }
                uVar23 = uVar23 - 1;
                puVar21 = puVar21 + 1;
                lVar18 = lVar18 + 0x100000000;
                if (*(uint *)(unaff_x29 + -0x70) == uVar23) goto LAB_0500734c;
              }
              uVar20 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
              unaff_w23 = (*(short *)((lVar18 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) -
                          uVar23;
            }
            goto LAB_05007290;
          }
          if (uVar3 == 0x2c) goto LAB_05007290;
          if (uVar3 != 0x2d) goto LAB_05006b74;
        }
        else {
          if (uVar3 == 0x2e) {
            if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || iVar19 != 0) goto LAB_05007290;
            if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
               ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*psVar27 != 0)))) {
              if (lVar18 == 0) goto LAB_050074b4;
              lVar18 = *(long *)(lVar18 + 0x38);
              if (DAT_06a4f0a5 == '\0') {
                FUN_02d4dc40(PTR_DAT_06650d78);
                DAT_06a4f0a5 = '\x01';
              }
              if (lVar18 == 0) goto LAB_050074b4;
              if (*(int *)(lVar18 + 0x10) == 1) {
                uVar23 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar23) goto LAB_0500732c;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_0500749c;
                lVar26 = *(long *)(unaff_x22 + 8);
                uVar9 = FUN_04e7a3d8(lVar18,0,0);
                *(undefined2 *)(lVar26 + (long)(int)uVar23 * 2) = uVar9;
                *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
              }
              else {
LAB_0500732c:
                FUN_04e98608();
              }
              iVar19 = 0;
              *(undefined4 *)(unaff_x29 + -0x74) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x74) = 0;
              iVar19 = 0;
            }
            goto LAB_05007290;
          }
          if (uVar3 != 0x2f) {
            if (uVar3 == 0x30) goto LAB_05006cd8;
LAB_05006b74:
            if (uVar3 == 0x45) goto LAB_05006b7c;
          }
        }
LAB_05006bf4:
        if (DAT_06a4e421 == '\0') {
          FUN_02d4dc40(PTR_DAT_06650d78);
          DAT_06a4e421 = '\x01';
        }
        uVar23 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_0500749c;
          lVar18 = *(long *)(unaff_x22 + 8);
LAB_05006c38:
          *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
          *(ushort *)(lVar18 + (long)(int)uVar23 * 2) = uVar3;
        }
        else {
LAB_05006c4c:
          FUN_04e984dc();
        }
      }
      else if (uVar3 == 0x5c) {
        if (((int)unaff_w23 < (int)uVar20) &&
           (sVar28 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2),
           sVar28 != 0)) {
          if (DAT_06a4e421 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4e421 = '\x01';
          }
          uVar23 = *(uint *)(unaff_x22 + 0x18);
          unaff_w23 = *(int *)(unaff_x29 + -0x24) + 2;
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar23) goto LAB_05006c4c;
          if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_0500749c;
          *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = sVar28;
        }
      }
      else if (uVar3 == 0x65) {
LAB_05006b7c:
        if ((uVar25 & 1) != 0) {
          if (((int)unaff_w23 < (int)uVar20) &&
             (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2) == 0x30)) {
            uVar15 = 0;
            uVar25 = *(int *)(unaff_x29 + -0x24) + 2;
            goto LAB_05006ba8;
          }
          uVar25 = *(int *)(unaff_x29 + -0x24) + 2;
          if ((int)uVar25 < (int)uVar20) {
            sVar28 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
            if (sVar28 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar25 * 2) == 0x30) {
                uVar15 = 0;
                goto LAB_05006ba8;
              }
            }
            else if ((sVar28 == 0x2b) &&
                    (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar25 * 2) == 0x30)) {
              uVar15 = 1;
LAB_05006ba8:
              unaff_w23 = uVar25;
              if ((int)uVar25 < (int)uVar20) {
                psVar22 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar25 * 2);
                do {
                  unaff_w23 = uVar25;
                  if (*psVar22 != 0x30) break;
                  uVar25 = uVar25 + 1;
                  psVar22 = psVar22 + 1;
                  unaff_w23 = uVar20;
                } while (uVar20 != uVar25);
              }
              if (*(int *)(*(long *)PTR_DAT_06656a10 + 0xe4) == 0) {
                *(undefined4 *)(unaff_x29 + -0x24) = uVar15;
                thunk_FUN_02dabd98();
              }
              FUN_0500c738();
              goto LAB_0500728c;
            }
          }
          if (DAT_06a4e421 == '\0') {
            FUN_02d4dc40(PTR_DAT_06650d78);
            DAT_06a4e421 = '\x01';
          }
          uVar23 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar23) {
            FUN_04e984dc();
            uVar25 = 1;
            goto LAB_05007290;
          }
          if (uVar23 < *(uint *)(unaff_x22 + 0x10)) {
            lVar18 = *(long *)(unaff_x22 + 8);
            uVar25 = 1;
            goto LAB_05006c38;
          }
          goto LAB_0500749c;
        }
        if (DAT_06a4e421 == '\0') {
          FUN_02d4dc40(PTR_DAT_06650d78);
          DAT_06a4e421 = '\x01';
        }
        uVar25 = *(uint *)(unaff_x22 + 0x18);
        iVar16 = *(int *)(unaff_x29 + -0x24);
        if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar25) goto LAB_0500749c;
          *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar25 * 2) = uVar3;
        }
        else {
          FUN_04e984dc();
        }
        if ((int)unaff_w23 < (int)uVar20) {
          sVar28 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
          if ((sVar28 == 0x2d) || (sVar28 == 0x2b)) {
            if (DAT_06a4e421 == '\0') {
              FUN_02d4dc40(PTR_DAT_06650d78);
              DAT_06a4e421 = '\x01';
            }
            uVar25 = *(uint *)(unaff_x22 + 0x18);
            unaff_w23 = iVar16 + 2;
            if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar25) goto LAB_0500749c;
              *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar25 * 2) = sVar28;
            }
            else {
              FUN_04e984dc();
            }
          }
          if ((int)unaff_w23 < (int)uVar20) {
            psVar22 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)unaff_w23 * 2);
            lVar18 = *(long *)(unaff_x29 + -0x68) - (long)(int)unaff_w23;
            while (*psVar22 == 0x30) {
              if (DAT_06a4e421 == '\0') {
                FUN_02d4dc40(PTR_DAT_06650d78);
                DAT_06a4e421 = '\x01';
              }
              uVar25 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar25) goto LAB_0500749c;
                *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar25 * 2) = 0x30;
              }
              else {
                FUN_04e984dc();
              }
              lVar18 = lVar18 + -1;
              unaff_w23 = unaff_w23 + 1;
              psVar22 = psVar22 + 1;
              if (lVar18 == 0) goto LAB_0500734c;
            }
            uVar20 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
          }
        }
LAB_0500728c:
        uVar25 = 0;
      }
      else {
        if (uVar3 != 0x2030) goto LAB_05006bf4;
        if (lVar18 == 0) goto LAB_050074b4;
        lVar18 = *(long *)(lVar18 + 0x98);
LAB_05006e3c:
        if (DAT_06a4f0a5 == '\0') {
          FUN_02d4dc40(PTR_DAT_06650d78);
          DAT_06a4f0a5 = '\x01';
        }
        if (lVar18 == 0) goto LAB_050074b4;
        if (*(int *)(lVar18 + 0x10) == 1) {
          uVar23 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar23 < *(uint *)(unaff_x22 + 0x10)) {
              lVar26 = *(long *)(unaff_x22 + 8);
              uVar9 = FUN_04e7a3d8(lVar18,0,0);
              *(undefined2 *)(lVar26 + (long)(int)uVar23 * 2) = uVar9;
              *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
              goto LAB_05007290;
            }
            goto LAB_0500749c;
          }
        }
        FUN_04e98608();
      }
LAB_05007290:
      if ((int)uVar20 <= (int)unaff_w23) goto LAB_0500734c;
      goto LAB_050068fc;
    }
LAB_0500734c:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else {
    if (*(long *)(unaff_x29 + -0x40) != 0) {
      lVar18 = *(long *)(*(long *)(unaff_x29 + -0x40) + 0x30);
      if (DAT_06a4f0a5 == '\0') {
        FUN_02d4dc40(PTR_DAT_06650d78);
        DAT_06a4f0a5 = '\x01';
      }
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0x10) == 1) {
          uVar25 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar25) {
LAB_0500749c:
              if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4def0();
              }
              goto LAB_050074cc;
            }
            lVar26 = *(long *)(unaff_x22 + 8);
            uVar9 = FUN_04e7a3d8(lVar18,0,0);
            *(undefined2 *)(lVar26 + (long)(int)uVar25 * 2) = uVar9;
            *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
            goto LAB_050068b0;
          }
        }
        FUN_04e98608();
        goto LAB_050068b0;
      }
    }
LAB_050074b4:
    if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
  }
LAB_050074cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


