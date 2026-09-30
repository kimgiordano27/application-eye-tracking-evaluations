/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 0767cad0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_5;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties(void)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  undefined1 auVar7 [12];
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  uint uVar12;
  short *psVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  ushort *puVar23;
  short *psVar24;
  int iVar25;
  undefined4 uVar26;
  int iVar27;
  long unaff_x19;
  uint uVar28;
  long unaff_x22;
  uint uVar29;
  long lVar30;
  int iVar31;
  short sVar32;
  int iVar33;
  undefined8 unaff_x27;
  int iVar34;
  long unaff_x28;
  long unaff_x29;
  undefined1 auVar35 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092d9d00);
  FUN_04077588(PTR_DAT_092c95d8);
  FUN_04077588(PTR_DAT_092c95e8);
  FUN_04077588(PTR_DAT_092d9d08);
  *(undefined1 *)(unaff_x19 + 0x245) = 1;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  psVar13 = (short *)FUN_07688678();
  sVar32 = *psVar13;
  *(short **)(unaff_x29 + -0x30) = psVar13;
  if (sVar32 != 0) {
    FUN_0768865c();
  }
  if (*(int *)(*(long *)PTR_DAT_092d6630 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar12 = FUN_07682d58(*(undefined8 *)(unaff_x29 + -0x20));
  iVar19 = (int)unaff_x27;
  *(undefined4 *)(unaff_x29 + -0x44) = 0;
  *(long *)(unaff_x29 + -0x68) = (long)iVar19;
  do {
    uVar28 = uVar12;
    lVar14 = FUN_050aefd8(*(undefined8 *)(unaff_x29 + -0x20));
    if ((int)uVar28 < iVar19) {
      iVar31 = 0;
      iVar27 = 0;
      uVar26 = 0;
      uVar12 = 0;
      iVar34 = 0;
      iVar33 = 0x7fffffff;
      iVar21 = -1;
      uVar29 = uVar28;
      iVar25 = -1;
      do {
        uVar3 = *(ushort *)(lVar14 + (long)(int)uVar29 * 2);
        iVar20 = iVar25;
        if ((uVar3 == 0x3b) || (uVar3 == 0)) break;
        uVar22 = uVar29 + 1;
        iVar9 = iVar31;
        iVar10 = iVar33;
        if (uVar3 < 0x46) {
          if (uVar3 < 0x27) {
            if (uVar3 < 0x24) {
              if (uVar3 == 0x22) goto LAB_0767ccb0;
              if (uVar3 == 0x23) {
                iVar9 = iVar31 + 1;
              }
              else {
LAB_0767cd34:
                if (uVar3 == 0x45) goto LAB_0767cd3c;
              }
            }
            else if (uVar3 != 0x24) {
              if (uVar3 == 0x25) {
                iVar34 = iVar34 + 2;
              }
              else if (uVar3 != 0x26) goto LAB_0767cd34;
            }
          }
          else if (uVar3 < 0x2e) {
            if (uVar3 == 0x27) {
LAB_0767ccb0:
              lVar30 = (long)(int)uVar22;
              puVar23 = (ushort *)(lVar14 + (long)(int)uVar22 * 2);
              lVar1 = lVar30;
              if (lVar30 <= *(long *)(unaff_x29 + -0x68)) {
                lVar1 = *(long *)(unaff_x29 + -0x68);
              }
              do {
                if (lVar1 == lVar30) goto LAB_0767cddc;
                uVar2 = *puVar23;
                if (uVar2 == 0) break;
                lVar30 = lVar30 + 1;
                puVar23 = puVar23 + 1;
              } while (uVar2 != uVar3);
              uVar22 = (uint)lVar30;
            }
            else if (uVar3 == 0x2c) {
              if ((0 < iVar31) && (iVar25 < 0)) {
                if (iVar21 < 0) {
                  *(undefined4 *)(unaff_x29 + -0x44) = 1;
                  iVar21 = iVar31;
                }
                else {
                  uVar12 = iVar21 != iVar31 | uVar12;
                  iVar25 = 1;
                  if (iVar21 == iVar31) {
                    iVar25 = *(int *)(unaff_x29 + -0x44) + 1;
                  }
                  *(int *)(unaff_x29 + -0x44) = iVar25;
                  iVar21 = iVar31;
                }
              }
            }
            else if (uVar3 != 0x2d) goto LAB_0767cd34;
          }
          else if (uVar3 == 0x2e) {
            iVar20 = iVar31;
            if (-1 < iVar25) {
              iVar20 = iVar25;
            }
          }
          else if (uVar3 != 0x2f) {
            if (uVar3 != 0x30) goto LAB_0767cd34;
            iVar27 = iVar31 + 1;
            iVar9 = iVar27;
            iVar10 = iVar31;
            if (iVar33 != 0x7fffffff) {
              iVar10 = iVar33;
            }
          }
        }
        else if (uVar3 == 0x5c) {
          if (((int)uVar22 < iVar19) && (*(short *)(lVar14 + (long)(int)uVar22 * 2) != 0)) {
            uVar22 = uVar29 + 2;
          }
        }
        else if (uVar3 == 0x65) {
LAB_0767cd3c:
          if (((int)uVar22 < iVar19) && (*(short *)(lVar14 + (long)(int)uVar22 * 2) == 0x30))
          goto LAB_0767cd7c;
          if (((int)(uVar29 + 2) < iVar19) &&
             ((sVar32 = *(short *)(lVar14 + (long)(int)uVar22 * 2), sVar32 == 0x2d ||
              (sVar32 == 0x2b)))) {
            sVar32 = *(short *)(lVar14 + (long)(int)(uVar29 + 2) * 2);
            while (sVar32 == 0x30) {
LAB_0767cd7c:
              uVar22 = uVar22 + 1;
              if (iVar19 <= (int)uVar22) {
                uVar26 = 1;
                goto LAB_0767cddc;
              }
              uVar26 = 1;
              sVar32 = *(short *)(lVar14 + (long)(int)uVar22 * 2);
            }
          }
        }
        else if (uVar3 == 0x2030) {
          iVar34 = iVar34 + 3;
        }
        iVar33 = iVar10;
        uVar29 = uVar22;
        iVar31 = iVar9;
        iVar25 = iVar20;
      } while ((int)uVar29 < iVar19);
LAB_0767cddc:
      *(undefined4 *)(unaff_x29 + -0x24) = uVar26;
      iVar25 = iVar31;
      if (-1 < iVar20) {
        iVar25 = iVar20;
      }
      if (-1 < iVar21) {
        if (iVar21 == iVar25) {
          iVar34 = *(int *)(unaff_x29 + -0x44) * -3 + iVar34;
        }
        else {
          uVar12 = 1;
        }
      }
    }
    else {
      iVar25 = 0;
      *(undefined4 *)(unaff_x29 + -0x24) = 0;
      iVar27 = 0;
      iVar31 = 0;
      iVar34 = 0;
      uVar12 = 0;
      iVar33 = 0x7fffffff;
    }
    *(uint *)(unaff_x29 + -0x34) = uVar12;
    puVar8 = PTR_DAT_092d6630;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      FUN_0768866c();
      *(undefined4 *)(unaff_x28 + 4) = 0;
      break;
    }
    *(int *)(unaff_x28 + 4) = *(int *)(unaff_x28 + 4) + iVar34;
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_076819c8();
    if (**(short **)(unaff_x29 + -0x30) != 0) break;
    if (*(int *)(*(long *)PTR_DAT_092d6630 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar12 = FUN_07682d58(*(undefined8 *)(unaff_x29 + -0x20));
  } while (uVar12 != uVar28);
  iVar19 = iVar25 - iVar33;
  *(undefined4 *)(unaff_x29 + -0x44) = 0;
  if (iVar19 == 0 || iVar25 < iVar33) {
    iVar19 = 0;
  }
  iVar34 = iVar25 - iVar27;
  if (iVar27 <= iVar25) {
    iVar34 = 0;
  }
  *(int *)(unaff_x29 + -0x8c) = iVar34;
  iVar27 = iVar25;
  if ((*(uint *)(unaff_x29 + -0x24) & 1) == 0) {
    iVar34 = *(int *)(unaff_x28 + 4);
    iVar27 = iVar34;
    if (iVar34 - iVar25 == 0 || iVar34 < iVar25) {
      iVar27 = iVar25;
    }
    *(int *)(unaff_x29 + -0x44) = iVar34 - iVar25;
  }
  uVar17 = DAT_01aee930;
  puVar18 = &uStack_10;
  uStack_10 = 0;
  uStack_8 = 0;
  lVar14 = *(long *)(unaff_x29 + -0x40);
  *(undefined8 **)(unaff_x29 + -0x18) = puVar18;
  *(undefined8 *)(unaff_x29 + -0x50) = unaff_x27;
  *(undefined8 *)(unaff_x29 + -0x10) = uVar17;
  *(long *)(unaff_x29 + -0x80) = unaff_x28;
  *(int *)(unaff_x29 + -0x90) = iVar19;
  if ((*(uint *)(unaff_x29 + -0x34) & 1) == 0) {
LAB_0767cf60:
    uVar12 = 0xffffffff;
LAB_0767cf64:
    *(int *)(unaff_x29 + -0x5c) = iVar25;
    *(int *)(unaff_x29 + -0x94) = iVar31;
    uVar15 = FUN_0768865c(*(undefined8 *)(unaff_x29 + -0x80),0);
    uVar17 = *(undefined8 *)(unaff_x29 + -0x50);
    if (((uVar15 & 1) == 0) || (uVar28 != 0)) {
LAB_0767d014:
      uVar16 = FUN_050aefd8(*(undefined8 *)(unaff_x29 + -0x20),uVar17,
                            *(undefined8 *)PTR_DAT_092d0100);
      uVar29 = *(uint *)(unaff_x29 + -0x24);
      *(undefined8 *)(unaff_x29 + -0x58) = uVar16;
      if ((int)uVar28 < (int)uVar17) {
        psVar13 = *(short **)(unaff_x29 + -0x30);
        *(uint *)(unaff_x29 + -0x20) = *(uint *)(unaff_x29 + -0x34) ^ 1;
        iVar19 = (int)*(undefined8 *)(unaff_x29 + -0x50);
        *(int *)(unaff_x29 + -0x98) = iVar19 + -2;
        *(undefined4 *)(unaff_x29 + -0x74) = 0;
        *(int *)(unaff_x29 + -0x70) = -iVar19;
LAB_0767d060:
        uVar3 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
        if ((uVar3 == 0x3b) || (*(uint *)(unaff_x29 + -0x24) = uVar28, uVar3 == 0))
        goto LAB_0767dab0;
        iVar19 = *(int *)(unaff_x29 + -0x44);
        if ((iVar19 < 1) ||
           ((0x30 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x1400800000000U) == 0)))) {
          lVar14 = *(long *)(unaff_x29 + -0x40);
        }
        else {
          iVar34 = iVar19 + 1;
          lVar14 = *(long *)(unaff_x29 + -0x40);
          if (0 < iVar19) {
            iVar19 = 1;
          }
          uVar28 = *(uint *)(unaff_x29 + -0x20);
          *(int *)(unaff_x29 + -0x34) = iVar19 + -1;
          do {
            sVar32 = *psVar13;
            sVar6 = 0x30;
            if (sVar32 != 0) {
              psVar13 = psVar13 + 1;
              sVar6 = sVar32;
            }
            if (DAT_09891578 == '\0') {
              FUN_04077588(PTR_DAT_092d03e8);
              DAT_09891578 = '\x01';
            }
            uVar22 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_0767dc00;
              *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = sVar6;
            }
            else {
              FUN_07503cf0();
            }
            if (((uVar28 & 1) == 0 && 1 < iVar27) && (-1 < (int)uVar12)) {
              if (*(uint *)(unaff_x29 + -0x10) <= uVar12) goto LAB_0767dc00;
              if (iVar27 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar12 * 4) + 1) {
                if (lVar14 == 0) goto LAB_0767dc18;
                lVar30 = *(long *)(lVar14 + 0x40);
                if (DAT_0989226f == '\0') {
                  FUN_04077588(PTR_DAT_092d03e8);
                  DAT_0989226f = '\x01';
                }
                if (lVar30 == 0) goto LAB_0767dc18;
                if (*(int *)(lVar30 + 0x10) == 1) {
                  uVar28 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar28) goto LAB_0767d1e8;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar28) goto LAB_0767dc00;
                  lVar14 = *(long *)(unaff_x22 + 8);
                  uVar11 = FUN_074e0328(lVar30,0,0);
                  *(undefined2 *)(lVar14 + (long)(int)uVar28 * 2) = uVar11;
                  lVar14 = *(long *)(unaff_x29 + -0x40);
                  *(uint *)(unaff_x22 + 0x18) = uVar28 + 1;
                }
                else {
LAB_0767d1e8:
                  FUN_07503e1c();
                }
                uVar28 = *(uint *)(unaff_x29 + -0x20);
                uVar12 = uVar12 - 1;
              }
            }
            iVar34 = iVar34 + -1;
            iVar27 = iVar27 + -1;
          } while (1 < iVar34);
          iVar19 = *(int *)(unaff_x29 + -0x34);
        }
        *(int *)(unaff_x29 + -0x44) = iVar19;
        uVar28 = *(int *)(unaff_x29 + -0x24) + 1;
        uVar22 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
        if (uVar3 < 0x46) {
          if (uVar3 < 0x27) {
            if (uVar3 < 0x24) {
              if (uVar3 == 0x22) goto LAB_0767d450;
              if (uVar3 != 0x23) goto LAB_0767d2d8;
LAB_0767d43c:
              if (iVar19 < 0) {
                iVar19 = iVar19 + 1;
                if (iVar27 <= *(int *)(unaff_x29 + -0x90)) {
LAB_0767d7bc:
                  sVar32 = 0x30;
                  goto LAB_0767d7c0;
                }
                *(int *)(unaff_x29 + -0x44) = iVar19;
              }
              else {
                sVar32 = *psVar13;
                if (sVar32 == 0) {
                  if (*(int *)(unaff_x29 + -0x8c) < iVar27) goto LAB_0767d7bc;
                }
                else {
                  psVar13 = psVar13 + 1;
LAB_0767d7c0:
                  if (DAT_09891578 == '\0') {
                    FUN_04077588(PTR_DAT_092d03e8);
                    DAT_09891578 = '\x01';
                  }
                  uVar4 = *(uint *)(unaff_x22 + 0x18);
                  uVar5 = *(uint *)(unaff_x22 + 0x10);
                  *(int *)(unaff_x29 + -0x44) = iVar19;
                  if ((int)uVar4 < (int)uVar5) {
                    if (uVar5 <= uVar4) goto LAB_0767dc00;
                    *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
                    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar4 * 2) = sVar32;
                  }
                  else {
                    FUN_07503cf0();
                  }
                  if (((*(uint *)(unaff_x29 + -0x20) & 1) == 0 && 1 < iVar27) && (-1 < (int)uVar12))
                  {
                    if (*(uint *)(unaff_x29 + -0x10) <= uVar12) goto LAB_0767dc00;
                    if (iVar27 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar12 * 4) + 1) {
                      if (lVar14 == 0) goto LAB_0767dc18;
                      lVar14 = *(long *)(lVar14 + 0x40);
                      if (DAT_0989226f == '\0') {
                        FUN_04077588(PTR_DAT_092d03e8);
                        DAT_0989226f = '\x01';
                      }
                      if (lVar14 == 0) goto LAB_0767dc18;
                      if (*(int *)(lVar14 + 0x10) == 1) {
                        uVar5 = *(uint *)(unaff_x22 + 0x18);
                        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar5) goto LAB_0767d98c;
                        if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_0767dc00;
                        lVar30 = *(long *)(unaff_x22 + 8);
                        uVar11 = FUN_074e0328(lVar14,0,0);
                        *(undefined2 *)(lVar30 + (long)(int)uVar5 * 2) = uVar11;
                        *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                      }
                      else {
LAB_0767d98c:
                        FUN_07503e1c();
                      }
                      uVar12 = uVar12 - 1;
                    }
                  }
                }
              }
              iVar27 = iVar27 + -1;
              goto LAB_0767d9f4;
            }
            if (uVar3 == 0x24) goto LAB_0767d358;
            if (uVar3 == 0x25) {
              if (lVar14 != 0) {
                lVar14 = *(long *)(lVar14 + 0x90);
                goto LAB_0767d5a0;
              }
              goto LAB_0767dc18;
            }
            if (uVar3 != 0x26) goto LAB_0767d2d8;
          }
          else if (uVar3 < 0x2e) {
            if (uVar3 == 0x27) {
LAB_0767d450:
              if ((int)uVar28 < (int)uVar22) {
                lVar14 = (ulong)uVar28 << 0x20;
                puVar23 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
                uVar28 = ~*(uint *)(unaff_x29 + -0x24);
                while ((uVar2 = *puVar23, uVar2 != 0 && (uVar2 != uVar3))) {
                  if (DAT_09891578 == '\0') {
                    FUN_04077588(PTR_DAT_092d03e8);
                    DAT_09891578 = '\x01';
                  }
                  uVar22 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_0767dc00;
                    *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                    *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = uVar2;
                  }
                  else {
                    FUN_07503cf0();
                  }
                  uVar28 = uVar28 - 1;
                  puVar23 = puVar23 + 1;
                  lVar14 = lVar14 + 0x100000000;
                  if (*(uint *)(unaff_x29 + -0x70) == uVar28) goto LAB_0767dab0;
                }
                uVar22 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
                uVar28 = (*(short *)((lVar14 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar28
                ;
              }
              goto LAB_0767d9f4;
            }
            if (uVar3 == 0x2c) goto LAB_0767d9f4;
            if (uVar3 != 0x2d) goto LAB_0767d2d8;
          }
          else {
            if (uVar3 == 0x2e) {
              if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0 || iVar27 != 0) goto LAB_0767d9f4;
              if ((*(int *)(unaff_x29 + -0x8c) < 0) ||
                 ((*(int *)(unaff_x29 + -0x5c) < *(int *)(unaff_x29 + -0x94) && (*psVar13 != 0)))) {
                if (lVar14 == 0) goto LAB_0767dc18;
                lVar14 = *(long *)(lVar14 + 0x38);
                if (DAT_0989226f == '\0') {
                  FUN_04077588(PTR_DAT_092d03e8);
                  DAT_0989226f = '\x01';
                }
                if (lVar14 == 0) goto LAB_0767dc18;
                if (*(int *)(lVar14 + 0x10) == 1) {
                  uVar5 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar5) goto LAB_0767da90;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_0767dc00;
                  lVar30 = *(long *)(unaff_x22 + 8);
                  uVar11 = FUN_074e0328(lVar14,0,0);
                  *(undefined2 *)(lVar30 + (long)(int)uVar5 * 2) = uVar11;
                  *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                }
                else {
LAB_0767da90:
                  FUN_07503e1c();
                }
                iVar27 = 0;
                *(undefined4 *)(unaff_x29 + -0x74) = 1;
              }
              else {
                *(undefined4 *)(unaff_x29 + -0x74) = 0;
                iVar27 = 0;
              }
              goto LAB_0767d9f4;
            }
            if (uVar3 != 0x2f) {
              if (uVar3 == 0x30) goto LAB_0767d43c;
LAB_0767d2d8:
              if (uVar3 == 0x45) goto LAB_0767d2e0;
            }
          }
LAB_0767d358:
          if (DAT_09891578 == '\0') {
            FUN_04077588(PTR_DAT_092d03e8);
            DAT_09891578 = '\x01';
          }
          uVar5 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_0767dc00;
            lVar14 = *(long *)(unaff_x22 + 8);
LAB_0767d39c:
            *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
            *(ushort *)(lVar14 + (long)(int)uVar5 * 2) = uVar3;
          }
          else {
LAB_0767d3b0:
            FUN_07503cf0();
          }
        }
        else if (uVar3 == 0x5c) {
          if (((int)uVar28 < (int)uVar22) &&
             (sVar32 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2), sVar32 != 0
             )) {
            if (DAT_09891578 == '\0') {
              FUN_04077588(PTR_DAT_092d03e8);
              DAT_09891578 = '\x01';
            }
            uVar5 = *(uint *)(unaff_x22 + 0x18);
            uVar28 = *(int *)(unaff_x29 + -0x24) + 2;
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar5) goto LAB_0767d3b0;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_0767dc00;
            *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = sVar32;
          }
        }
        else if (uVar3 == 0x65) {
LAB_0767d2e0:
          if ((uVar29 & 1) != 0) {
            if (((int)uVar28 < (int)uVar22) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2) == 0x30)) {
              uVar26 = 0;
              uVar29 = *(int *)(unaff_x29 + -0x24) + 2;
              goto LAB_0767d30c;
            }
            uVar29 = *(int *)(unaff_x29 + -0x24) + 2;
            if ((int)uVar29 < (int)uVar22) {
              sVar32 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
              if (sVar32 == 0x2d) {
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar29 * 2) == 0x30) {
                  uVar26 = 0;
                  goto LAB_0767d30c;
                }
              }
              else if ((sVar32 == 0x2b) &&
                      (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar29 * 2) == 0x30)) {
                uVar26 = 1;
LAB_0767d30c:
                uVar28 = uVar29;
                if ((int)uVar29 < (int)uVar22) {
                  psVar24 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar29 * 2);
                  do {
                    uVar28 = uVar29;
                    if (*psVar24 != 0x30) break;
                    uVar29 = uVar29 + 1;
                    psVar24 = psVar24 + 1;
                    uVar28 = uVar22;
                  } while (uVar22 != uVar29);
                }
                if (*(int *)(*(long *)PTR_DAT_092d6630 + 0xe4) == 0) {
                  *(undefined4 *)(unaff_x29 + -0x24) = uVar26;
                  thunk_FUN_040d65a8();
                }
                FUN_07682e9c();
                goto LAB_0767d9f0;
              }
            }
            if (DAT_09891578 == '\0') {
              FUN_04077588(PTR_DAT_092d03e8);
              DAT_09891578 = '\x01';
            }
            uVar5 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar5) {
              FUN_07503cf0();
              uVar29 = 1;
              goto LAB_0767d9f4;
            }
            if (uVar5 < *(uint *)(unaff_x22 + 0x10)) {
              lVar14 = *(long *)(unaff_x22 + 8);
              uVar29 = 1;
              goto LAB_0767d39c;
            }
            goto LAB_0767dc00;
          }
          if (DAT_09891578 == '\0') {
            FUN_04077588(PTR_DAT_092d03e8);
            DAT_09891578 = '\x01';
          }
          uVar29 = *(uint *)(unaff_x22 + 0x18);
          iVar19 = *(int *)(unaff_x29 + -0x24);
          if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar29) goto LAB_0767dc00;
            *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar29 * 2) = uVar3;
          }
          else {
            FUN_07503cf0();
          }
          if ((int)uVar28 < (int)uVar22) {
            sVar32 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
            if ((sVar32 == 0x2d) || (sVar32 == 0x2b)) {
              if (DAT_09891578 == '\0') {
                FUN_04077588(PTR_DAT_092d03e8);
                DAT_09891578 = '\x01';
              }
              uVar29 = *(uint *)(unaff_x22 + 0x18);
              uVar28 = iVar19 + 2;
              if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar29) goto LAB_0767dc00;
                *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar29 * 2) = sVar32;
              }
              else {
                FUN_07503cf0();
              }
            }
            if ((int)uVar28 < (int)uVar22) {
              psVar24 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
              lVar14 = *(long *)(unaff_x29 + -0x68) - (long)(int)uVar28;
              while (*psVar24 == 0x30) {
                if (DAT_09891578 == '\0') {
                  FUN_04077588(PTR_DAT_092d03e8);
                  DAT_09891578 = '\x01';
                }
                uVar29 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar29) goto LAB_0767dc00;
                  *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
                  *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar29 * 2) = 0x30;
                }
                else {
                  FUN_07503cf0();
                }
                lVar14 = lVar14 + -1;
                uVar28 = uVar28 + 1;
                psVar24 = psVar24 + 1;
                if (lVar14 == 0) goto LAB_0767dab0;
              }
              uVar22 = (uint)*(undefined8 *)(unaff_x29 + -0x50);
            }
          }
LAB_0767d9f0:
          uVar29 = 0;
        }
        else {
          if (uVar3 != 0x2030) goto LAB_0767d358;
          if (lVar14 == 0) goto LAB_0767dc18;
          lVar14 = *(long *)(lVar14 + 0x98);
LAB_0767d5a0:
          if (DAT_0989226f == '\0') {
            FUN_04077588(PTR_DAT_092d03e8);
            DAT_0989226f = '\x01';
          }
          if (lVar14 == 0) goto LAB_0767dc18;
          if (*(int *)(lVar14 + 0x10) == 1) {
            uVar5 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar5 < *(uint *)(unaff_x22 + 0x10)) {
                lVar30 = *(long *)(unaff_x22 + 8);
                uVar11 = FUN_074e0328(lVar14,0,0);
                *(undefined2 *)(lVar30 + (long)(int)uVar5 * 2) = uVar11;
                *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
                goto LAB_0767d9f4;
              }
              goto LAB_0767dc00;
            }
          }
          FUN_07503e1c();
        }
LAB_0767d9f4:
        if ((int)uVar22 <= (int)uVar28) goto LAB_0767dab0;
        goto LAB_0767d060;
      }
LAB_0767dab0:
      if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable;
    }
    if (*(long *)(unaff_x29 + -0x40) != 0) {
      lVar14 = *(long *)(*(long *)(unaff_x29 + -0x40) + 0x30);
      if (DAT_0989226f == '\0') {
        FUN_04077588(PTR_DAT_092d03e8);
        DAT_0989226f = '\x01';
      }
      if (lVar14 != 0) {
        if (*(int *)(lVar14 + 0x10) == 1) {
          uVar29 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar29) {
LAB_0767dc00:
              if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              goto Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable;
            }
            lVar30 = *(long *)(unaff_x22 + 8);
            uVar11 = FUN_074e0328(lVar14,0,0);
            *(undefined2 *)(lVar30 + (long)(int)uVar29 * 2) = uVar11;
            *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
            goto LAB_0767d014;
          }
        }
        FUN_07503e1c();
        goto LAB_0767d014;
      }
    }
  }
  else if ((lVar14 != 0) && (*(long *)(lVar14 + 0x40) != 0)) {
    if (*(int *)(*(long *)(lVar14 + 0x40) + 0x10) < 1) goto LAB_0767cf60;
    lVar14 = *(long *)(lVar14 + 0x10);
    if (lVar14 == 0) goto LAB_0767dc18;
    iVar34 = *(int *)(lVar14 + 0x18);
    if (iVar34 == 0) {
      iVar33 = 0;
    }
    else {
      iVar33 = *(int *)(lVar14 + 0x20);
    }
    uVar12 = 0xffffffff;
    iVar21 = (*(uint *)(unaff_x29 + -0x44) & (int)*(uint *)(unaff_x29 + -0x44) >> 0x1f) + iVar27;
    if (iVar19 <= iVar21) {
      iVar19 = iVar21;
    }
    if ((iVar33 != 0) && (iVar33 < iVar19)) {
      lVar30 = 0;
      *(long *)(unaff_x29 + -0x70) = lVar14;
      *(int *)(unaff_x29 + -0x74) = iVar19;
      iVar21 = iVar33;
      do {
        puVar8 = PTR_DAT_092869a0;
        iVar20 = *(int *)(unaff_x29 + -0x10);
        auVar7._8_4_ = iVar20;
        auVar7._0_8_ = puVar18;
        uVar12 = uVar12 + 1;
        if (iVar20 <= (int)uVar12) {
          *(uint *)(unaff_x29 + -0x58) = uVar12;
          uVar17 = FUN_04077674(*(undefined8 *)puVar8,iVar20 << 1);
          auVar35 = FUN_0656ccdc(uVar17,*(undefined8 *)PTR_DAT_092d9d08);
          FUN_0656c7c8(unaff_x29 + -0x18,auVar35._0_8_,auVar35._8_8_,*(undefined8 *)PTR_DAT_092d9d00
                      );
          auVar35 = FUN_0656ccdc(uVar17,*(undefined8 *)PTR_DAT_092d9d08);
          auVar7 = auVar35._0_12_;
          iVar19 = *(int *)(unaff_x29 + -0x74);
          lVar14 = *(long *)(unaff_x29 + -0x70);
          uVar12 = *(uint *)(unaff_x29 + -0x58);
          *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar35;
        }
        puVar18 = auVar7._0_8_;
        if (auVar7._8_4_ <= uVar12) goto LAB_0767dc00;
        *(int *)((long)puVar18 + (long)(int)uVar12 * 4) = iVar33;
        if ((int)lVar30 < iVar34 + -1) {
          lVar30 = (long)(int)lVar30 + 1;
          if (*(uint *)(lVar14 + 0x18) <= (uint)lVar30) goto LAB_0767dc00;
          iVar21 = *(int *)(lVar14 + lVar30 * 4 + 0x20);
        }
      } while ((iVar21 != 0) && (iVar33 = iVar21 + iVar33, iVar33 < iVar19));
    }
    goto LAB_0767cf64;
  }
LAB_0767dc18:
  if (*(long *)(*(long *)(unaff_x29 + -0x88) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


