/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
ENTRY_POINT: 071044bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken
               (undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  bool bVar6;
  undefined1 auVar7 [12];
  undefined2 uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  ushort *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined8 unaff_x20;
  int unaff_w21;
  uint uVar22;
  short *psVar23;
  long unaff_x22;
  short *psVar24;
  int iVar25;
  long lVar26;
  uint uVar27;
  short sVar28;
  uint uVar29;
  long unaff_x26;
  long unaff_x27;
  int iVar30;
  long unaff_x29;
  undefined1 auVar31 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  do {
    lVar10 = FUN_0470d55c(param_1);
    uVar21 = (uint)unaff_x20;
    if (unaff_w21 < (int)uVar21) {
      *(undefined4 *)(unaff_x29 + -0x1c) = 0;
      iVar30 = 0;
      bVar6 = false;
      uVar20 = 0;
      iVar9 = 0;
      iVar25 = 0x7fffffff;
      iVar14 = -1;
      iVar15 = -1;
      iVar19 = unaff_w21;
      do {
        uVar4 = *(ushort *)(lVar10 + (long)iVar19 * 2);
        if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
        iVar16 = iVar19 + 1;
        if (uVar4 < 0x46) {
          switch(uVar4) {
          case 0x22:
          case 0x27:
            lVar26 = (long)iVar16;
            lVar1 = lVar26;
            if (iVar16 <= unaff_x27) {
              lVar1 = unaff_x27;
            }
            puVar18 = (ushort *)(lVar10 + (long)iVar16 * 2);
            do {
              if (lVar1 == lVar26) {
                iVar16 = (int)lVar1;
                goto switchD_07104530_caseD_24;
              }
              uVar3 = *puVar18;
              if (uVar3 == 0) break;
              lVar26 = lVar26 + 1;
              puVar18 = puVar18 + 1;
            } while (uVar3 != uVar4);
            iVar16 = (int)lVar26;
            break;
          case 0x23:
            *(int *)(unaff_x29 + -0x1c) = *(int *)(unaff_x29 + -0x1c) + 1;
            break;
          case 0x24:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2d:
          case 0x2f:
            break;
          case 0x25:
            iVar9 = iVar9 + 2;
            break;
          case 0x2c:
            if ((iVar14 < 0) && (0 < *(int *)(unaff_x29 + -0x1c))) {
              if (iVar15 < 0) {
                *(undefined4 *)(unaff_x29 + -0x38) = 1;
                iVar15 = *(int *)(unaff_x29 + -0x1c);
              }
              else {
                iVar2 = *(int *)(unaff_x29 + -0x1c);
                uVar20 = uVar20 | iVar15 != iVar2;
                iVar19 = 1;
                if (iVar15 == iVar2) {
                  iVar19 = *(int *)(unaff_x29 + -0x38) + 1;
                }
                *(int *)(unaff_x29 + -0x38) = iVar19;
                iVar15 = iVar2;
              }
            }
            break;
          case 0x2e:
            if (iVar14 < 0) {
              iVar14 = *(int *)(unaff_x29 + -0x1c);
            }
            break;
          case 0x30:
            iVar30 = *(int *)(unaff_x29 + -0x1c) + 1;
            iVar19 = *(int *)(unaff_x29 + -0x1c);
            if (iVar25 != 0x7fffffff) {
              iVar19 = iVar25;
            }
            *(int *)(unaff_x29 + -0x1c) = iVar30;
            iVar25 = iVar19;
            break;
          default:
            if (uVar4 == 0x45) {
LAB_071045b4:
              if (((iVar16 < (int)uVar21) && (*(short *)(lVar10 + (long)iVar16 * 2) == 0x30)) ||
                 ((iVar19 + 2 < (int)uVar21 &&
                  (((sVar28 = *(short *)(lVar10 + (long)iVar16 * 2), sVar28 == 0x2d ||
                    (sVar28 == 0x2b)) && (*(short *)(lVar10 + (long)(iVar19 + 2) * 2) == 0x30))))))
              {
                do {
                  iVar16 = iVar16 + 1;
                  if ((int)uVar21 <= iVar16) {
                    bVar6 = true;
                    goto LAB_071046dc;
                  }
                } while (*(short *)(lVar10 + (long)iVar16 * 2) == 0x30);
                bVar6 = true;
              }
            }
          }
        }
        else if (uVar4 == 0x5c) {
          if ((iVar16 < (int)uVar21) && (*(short *)(lVar10 + (long)iVar16 * 2) != 0)) {
            iVar16 = iVar19 + 2;
          }
        }
        else {
          if (uVar4 == 0x65) goto LAB_071045b4;
          if (uVar4 == 0x2030) {
            iVar9 = iVar9 + 3;
          }
        }
switchD_07104530_caseD_24:
        iVar19 = iVar16;
      } while (iVar16 < (int)uVar21);
LAB_071046dc:
      if (iVar14 < 0) {
        iVar14 = *(int *)(unaff_x29 + -0x1c);
      }
      *(int *)(unaff_x29 + -0x34) = iVar14;
      if (-1 < iVar15) {
        if (iVar15 == iVar14) {
          iVar9 = *(int *)(unaff_x29 + -0x38) * -3 + iVar9;
        }
        else {
          uVar20 = 1;
        }
      }
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x34) = 0;
      bVar6 = false;
      iVar30 = 0;
      *(undefined4 *)(unaff_x29 + -0x1c) = 0;
      iVar9 = 0;
      uVar20 = 0;
      iVar25 = 0x7fffffff;
    }
    *(uint *)(unaff_x29 + -0x3c) = uVar20;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      *(int *)(unaff_x29 + -0x38) = unaff_w21;
      FUN_0710f9d4();
      *(undefined4 *)(unaff_x26 + 4) = 0;
      goto LAB_071047c0;
    }
    *(int *)(unaff_x26 + 4) = *(int *)(unaff_x26 + 4) + iVar9;
    if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_07108e54();
    if (**(short **)(unaff_x29 + -0x30) != 0) break;
    if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    iVar9 = FUN_0710a1b4(*(undefined8 *)(unaff_x29 + -0x28));
    if (iVar9 == unaff_w21) break;
    param_1 = *(undefined8 *)(unaff_x29 + -0x28);
    unaff_w21 = iVar9;
  } while( true );
  *(int *)(unaff_x29 + -0x38) = unaff_w21;
LAB_071047c0:
  iVar14 = *(int *)(unaff_x29 + -0x34);
  iVar9 = iVar14 - iVar25;
  if (iVar9 == 0 || iVar14 < iVar25) {
    iVar9 = 0;
  }
  iVar25 = iVar14 - iVar30;
  if (iVar30 <= iVar14) {
    iVar25 = 0;
  }
  *(int *)(unaff_x29 + -0x74) = iVar25;
  if (bVar6) {
    lVar10 = *(long *)(unaff_x29 + -0x48);
    uVar20 = *(uint *)(unaff_x29 + -0x3c);
    uVar17 = 1;
    *(undefined4 *)(unaff_x29 + -0x4c) = 0;
    iVar30 = iVar14;
  }
  else {
    iVar30 = *(int *)(unaff_x26 + 4);
    lVar10 = *(long *)(unaff_x29 + -0x48);
    uVar20 = *(uint *)(unaff_x29 + -0x3c);
    uVar17 = 0;
    *(int *)(unaff_x29 + -0x4c) = iVar30 - iVar14;
    if (iVar30 - iVar14 == 0 || iVar30 < iVar14) {
      iVar30 = iVar14;
    }
  }
  uVar11 = DAT_018ae258;
  puVar12 = &uStack_10;
  uStack_10 = 0;
  uStack_8 = 0;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar12;
  *(long *)(unaff_x29 + -0x70) = unaff_x26;
  *(undefined8 *)(unaff_x29 + -0x10) = uVar11;
  *(int *)(unaff_x29 + -0x78) = iVar9;
  *(undefined4 *)(unaff_x29 + -0x5c) = uVar17;
  if ((uVar20 & 1) == 0) {
LAB_07104870:
    uVar20 = 0xffffffff;
  }
  else {
    if ((lVar10 == 0) || (*(long *)(lVar10 + 0x40) == 0)) goto LAB_071054bc;
    if (*(int *)(*(long *)(lVar10 + 0x40) + 0x10) < 1) goto LAB_07104870;
    lVar10 = *(long *)(lVar10 + 0x10);
    if (lVar10 == 0) goto LAB_071054bc;
    iVar25 = *(int *)(lVar10 + 0x18);
    if (iVar25 == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = *(int *)(lVar10 + 0x20);
    }
    uVar20 = 0xffffffff;
    iVar15 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) + iVar30;
    if (iVar9 <= iVar15) {
      iVar9 = iVar15;
    }
    if ((iVar14 != 0) && (iVar14 < iVar9)) {
      uVar20 = 0;
      lVar26 = 0;
      uVar13 = 4;
      *(long *)(unaff_x29 + -0x58) = lVar10;
      iVar15 = iVar14;
      while( true ) {
        auVar31._8_8_ = uVar13;
        auVar31._0_8_ = puVar12;
        auVar7 = auVar31._0_12_;
        if ((int)uVar13 <= (int)uVar20) {
          uVar11 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e6baa0,(int)uVar13 << 1);
          auVar31 = FUN_05a7f6a4(uVar11,*(undefined8 *)PTR_DAT_08ea27e0);
          FUN_05a7f178(unaff_x29 + -0x18,auVar31._0_8_,auVar31._8_8_,*(undefined8 *)PTR_DAT_08ea27d8
                      );
          auVar31 = FUN_05a7f6a4(uVar11,*(undefined8 *)PTR_DAT_08ea27e0);
          auVar7 = auVar31._0_12_;
          lVar10 = *(long *)(unaff_x29 + -0x58);
          *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar31;
        }
        puVar12 = auVar7._0_8_;
        if (auVar7._8_4_ <= uVar20) goto LAB_071054b8;
        *(int *)((long)puVar12 + (long)(int)uVar20 * 4) = iVar14;
        if ((int)lVar26 < iVar25 + -1) {
          lVar26 = (long)(int)lVar26 + 1;
          if (*(uint *)(lVar10 + 0x18) <= (uint)lVar26) goto LAB_071054b8;
          iVar15 = *(int *)(lVar10 + lVar26 * 4 + 0x20);
        }
        if ((iVar15 == 0) || (iVar14 = iVar15 + iVar14, iVar9 <= iVar14)) break;
        uVar13 = (ulong)*(uint *)(unaff_x29 + -0x10);
        uVar20 = uVar20 + 1;
      }
      unaff_x26 = *(long *)(unaff_x29 + -0x70);
    }
  }
  uVar13 = FUN_0710f9c4(unaff_x26,0);
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar13 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar10 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_0941c223 == '\0') {
        FUN_03c8f898(PTR_DAT_08e9c268);
        DAT_0941c223 = '\x01';
      }
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x10) == 1) {
          uVar29 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar29) {
LAB_071054b8:
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            lVar26 = *(long *)(unaff_x22 + 8);
            uVar8 = FUN_06f6fafc(lVar10,0,0);
            *(undefined2 *)(lVar26 + (long)(int)uVar29 * 2) = uVar8;
            *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
            goto LAB_07104914;
          }
        }
        FUN_06f92598(unaff_x22,lVar10,0);
        goto LAB_07104914;
      }
    }
LAB_071054bc:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
LAB_07104914:
  uVar11 = FUN_0470d55c(*(undefined8 *)(unaff_x29 + -0x28),unaff_x20,*(undefined8 *)PTR_DAT_08e9bbb0
                       );
  *(undefined8 *)(unaff_x29 + -0x58) = uVar11;
  if (*(int *)(unaff_x29 + -0x38) < (int)uVar21) {
    psVar24 = *(short **)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
    *(uint *)(unaff_x29 + -0x8c) = uVar21 - 2;
    *(long *)(unaff_x29 + -0x88) = (long)(int)uVar21;
    do {
      uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
      iVar9 = *(int *)(unaff_x29 + -0x4c);
      uVar29 = (uint)uVar4;
      if ((iVar9 < 1) ||
         ((0x30 < uVar4 || ((1L << ((ulong)uVar29 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar10 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar10 = *(long *)(unaff_x29 + -0x48);
        uVar27 = *(uint *)(unaff_x29 + -0x28);
        iVar25 = iVar9 + 1;
        *(int *)(unaff_x29 + -0x3c) = iVar30 - iVar9;
        do {
          sVar28 = *psVar24;
          sVar5 = 0x30;
          if (sVar28 != 0) {
            psVar24 = psVar24 + 1;
            sVar5 = sVar28;
          }
          if (DAT_0941b532 == '\0') {
            FUN_03c8f898(PTR_DAT_08e9c268);
            DAT_0941b532 = '\x01';
          }
          uVar22 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_071054b8;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = sVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
          }
          else {
            FUN_06f9246c(unaff_x22,sVar5,0);
          }
          if ((-1 < (int)uVar20) && (1 < iVar30 && (uVar27 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar20) goto LAB_071054b8;
            if (iVar30 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar20 * 4) + 1) {
              if (lVar10 == 0) goto LAB_071054bc;
              lVar26 = *(long *)(lVar10 + 0x40);
              if (DAT_0941c223 == '\0') {
                FUN_03c8f898(PTR_DAT_08e9c268);
                DAT_0941c223 = '\x01';
              }
              if (lVar26 == 0) goto LAB_071054bc;
              if (*(int *)(lVar26 + 0x10) == 1) {
                uVar27 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar27) goto LAB_07104ae8;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar27) goto LAB_071054b8;
                lVar10 = *(long *)(unaff_x22 + 8);
                uVar8 = FUN_06f6fafc(lVar26,0,0);
                *(undefined2 *)(lVar10 + (long)(int)uVar27 * 2) = uVar8;
                lVar10 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar27 + 1;
              }
              else {
LAB_07104ae8:
                FUN_06f92598(unaff_x22,lVar26,0);
              }
              uVar27 = *(uint *)(unaff_x29 + -0x28);
              uVar20 = uVar20 - 1;
            }
          }
          iVar25 = iVar25 + -1;
          iVar30 = iVar30 + -1;
        } while (1 < iVar25);
        iVar30 = *(int *)(unaff_x29 + -0x3c);
        iVar9 = 0;
      }
      uVar27 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar29 < 0x46) {
        switch(uVar4) {
        case 0x22:
        case 0x27:
          if ((int)uVar27 < (int)uVar21) {
            *(int *)(unaff_x29 + -0x3c) = iVar30;
            *(int *)(unaff_x29 + -0x4c) = iVar9;
            lVar10 = (ulong)uVar27 << 0x20;
            uVar22 = ~*(uint *)(unaff_x29 + -0x38);
            puVar18 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2);
            lVar26 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar27;
            while( true ) {
              uVar4 = *puVar18;
              if ((uVar4 == 0) || (uVar4 == uVar29)) break;
              if (DAT_0941b532 == '\0') {
                FUN_03c8f898(PTR_DAT_08e9c268);
                DAT_0941b532 = '\x01';
              }
              uVar27 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar27 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar27) goto LAB_071054b8;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar27 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar27 + 1;
              }
              else {
                FUN_06f9246c(unaff_x22,uVar4,0);
              }
              lVar10 = lVar10 + 0x100000000;
              uVar22 = uVar22 - 1;
              lVar26 = lVar26 + -1;
              puVar18 = puVar18 + 1;
              if (lVar26 == 0) goto LAB_07105358;
            }
            iVar9 = *(int *)(unaff_x29 + -0x4c);
            iVar30 = *(int *)(unaff_x29 + -0x3c);
            uVar27 = (*(short *)((lVar10 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar22;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar9 < 0) {
            iVar9 = iVar9 + 1;
            if (iVar30 <= *(int *)(unaff_x29 + -0x78)) {
LAB_07104ff0:
              sVar28 = 0x30;
              goto LAB_07104ff4;
            }
          }
          else {
            sVar28 = *psVar24;
            if (sVar28 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < iVar30) goto LAB_07104ff0;
            }
            else {
              psVar24 = psVar24 + 1;
LAB_07104ff4:
              if (DAT_0941b532 == '\0') {
                FUN_03c8f898(PTR_DAT_08e9c268);
                DAT_0941b532 = '\x01';
              }
              uVar22 = *(uint *)(unaff_x22 + 0x18);
              uVar29 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_071054b8;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = sVar28;
                *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
              }
              else {
                FUN_06f9246c(unaff_x22,sVar28,0);
              }
              if ((-1 < (int)uVar20) && (1 < iVar30 && (uVar29 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar20) goto LAB_071054b8;
                if (iVar30 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar20 * 4) + 1) {
                  if (lVar10 == 0) goto LAB_071054bc;
                  lVar10 = *(long *)(lVar10 + 0x40);
                  if (DAT_0941c223 == '\0') {
                    FUN_03c8f898(PTR_DAT_08e9c268);
                    DAT_0941c223 = '\x01';
                  }
                  if (lVar10 == 0) goto LAB_071054bc;
                  if (*(int *)(lVar10 + 0x10) == 1) {
                    uVar29 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar29) goto LAB_0710510c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar29) goto LAB_071054b8;
                    lVar26 = *(long *)(unaff_x22 + 8);
                    uVar8 = FUN_06f6fafc(lVar10,0,0);
                    *(undefined2 *)(lVar26 + (long)(int)uVar29 * 2) = uVar8;
                    *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
                  }
                  else {
LAB_0710510c:
                    FUN_06f92598(unaff_x22,lVar10,0);
                  }
                  uVar20 = uVar20 - 1;
                }
              }
            }
          }
          iVar30 = iVar30 + -1;
          break;
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2f:
switchD_07104b50_caseD_24:
          if (DAT_0941b532 == '\0') {
            FUN_03c8f898(PTR_DAT_08e9c268);
            DAT_0941b532 = '\x01';
          }
          uVar22 = *(uint *)(unaff_x22 + 0x18);
          uVar29 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar29 <= (int)uVar22) goto LAB_07104d0c;
LAB_07104da4:
          if (uVar29 <= uVar22) goto LAB_071054b8;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
          break;
        case 0x25:
          if (lVar10 == 0) goto LAB_071054bc;
          lVar10 = *(long *)(lVar10 + 0x90);
joined_r0x07104c38:
          if (DAT_0941c223 == '\0') {
            FUN_03c8f898(PTR_DAT_08e9c268);
            DAT_0941c223 = '\x01';
          }
          if (lVar10 == 0) goto LAB_071054bc;
          if (*(int *)(lVar10 + 0x10) == 1) {
            uVar29 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar29 < *(uint *)(unaff_x22 + 0x10)) {
                lVar26 = *(long *)(unaff_x22 + 8);
                uVar8 = FUN_06f6fafc(lVar10,0,0);
                *(undefined2 *)(lVar26 + (long)(int)uVar29 * 2) = uVar8;
                *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
                break;
              }
              goto LAB_071054b8;
            }
          }
          FUN_06f92598(unaff_x22,lVar10,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && iVar30 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar24 != 0)))) {
              if (lVar10 == 0) goto LAB_071054bc;
              lVar10 = *(long *)(lVar10 + 0x38);
              if (DAT_0941c223 == '\0') {
                FUN_03c8f898(PTR_DAT_08e9c268);
                DAT_0941c223 = '\x01';
              }
              if (lVar10 == 0) goto LAB_071054bc;
              if (*(int *)(lVar10 + 0x10) == 1) {
                uVar29 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar29 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar26 = *(long *)(unaff_x22 + 8);
                    uVar8 = FUN_06f6fafc(lVar10,0,0);
                    *(undefined2 *)(lVar26 + (long)(int)uVar29 * 2) = uVar8;
                    *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
                    iVar30 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_071054b8;
                }
              }
              FUN_06f92598(unaff_x22,lVar10,0);
              iVar30 = 0;
              *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x7c) = 0;
              iVar30 = 0;
            }
          }
          break;
        default:
          if (uVar4 != 0x45) goto switchD_07104b50_caseD_24;
LAB_07104d3c:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar25 = *(int *)(unaff_x29 + -0x38);
            if (DAT_0941b532 == '\0') {
              FUN_03c8f898(PTR_DAT_08e9c268);
              DAT_0941b532 = '\x01';
            }
            uVar22 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_071054b8;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
            }
            else {
              FUN_06f9246c(unaff_x22,uVar29,0);
            }
            if ((int)uVar27 < (int)uVar21) {
              sVar28 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2);
              if ((sVar28 == 0x2d) || (sVar28 == 0x2b)) {
                if (DAT_0941b532 == '\0') {
                  FUN_03c8f898(PTR_DAT_08e9c268);
                  DAT_0941b532 = '\x01';
                }
                uVar29 = *(uint *)(unaff_x22 + 0x18);
                uVar27 = iVar25 + 2;
                if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar29) goto LAB_071054b8;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar29 * 2) = sVar28;
                  *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
                }
                else {
                  FUN_06f9246c(unaff_x22,sVar28,0);
                }
              }
              if ((int)uVar27 < (int)uVar21) {
                psVar23 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2);
                lVar10 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar27;
                while (*psVar23 == 0x30) {
                  if (DAT_0941b532 == '\0') {
                    FUN_03c8f898(PTR_DAT_08e9c268);
                    DAT_0941b532 = '\x01';
                  }
                  uVar29 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar29) goto LAB_071054b8;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar29 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
                  }
                  else {
                    FUN_06f9246c(unaff_x22,0x30,0);
                  }
                  uVar27 = uVar27 + 1;
                  lVar10 = lVar10 + -1;
                  psVar23 = psVar23 + 1;
                  if (lVar10 == 0) goto LAB_07105358;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            iVar25 = *(int *)(unaff_x29 + -0x38);
            if (((int)uVar27 < (int)uVar21) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2) == 0x30)) {
              uVar17 = 0;
              iVar14 = 1;
              goto LAB_07105224;
            }
            iVar14 = iVar25 + 2;
            if ((int)uVar21 <= iVar14) {
LAB_07105264:
              if (DAT_0941b532 == '\0') {
                FUN_03c8f898(PTR_DAT_08e9c268);
                DAT_0941b532 = '\x01';
              }
              uVar29 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar29 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar29) goto LAB_071054b8;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar29 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar29 + 1;
              }
              else {
                FUN_06f9246c(unaff_x22,uVar4,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar28 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2);
            if (sVar28 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar14 * 2) != 0x30)
              goto LAB_07105264;
              iVar14 = 0;
              uVar17 = 0;
            }
            else {
              if ((sVar28 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar14 * 2) != 0x30))
              goto LAB_07105264;
              iVar14 = 0;
              uVar17 = 1;
            }
LAB_07105224:
            uVar29 = iVar25 + 2;
            iVar15 = iVar14;
            uVar27 = uVar29;
            if ((int)uVar29 < (int)uVar21) {
              iVar19 = *(int *)(unaff_x29 + -0x8c) + iVar14;
              do {
                iVar15 = iVar14;
                uVar27 = uVar29;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar29 * 2) != 0x30) break;
                uVar29 = uVar29 + 1;
                iVar14 = iVar14 + 1;
                iVar15 = iVar19 - iVar25;
                uVar27 = uVar21;
              } while (uVar21 != uVar29);
            }
            if (9 < iVar15) {
              iVar15 = 10;
            }
            if (**(short **)(unaff_x29 + -0x30) == 0) {
              iVar25 = 0;
            }
            else {
              iVar25 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
            }
            if (*(int *)(*(long *)PTR_DAT_08ea1b30 + 0xe0) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar17;
              thunk_FUN_03cd7500();
              uVar17 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_0710a300(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar25,uVar4,iVar15,uVar17);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar4 != 0x5c) {
          if (uVar4 == 0x65) goto LAB_07104d3c;
          if (uVar4 != 0x2030) goto switchD_07104b50_caseD_24;
          if (lVar10 != 0) {
            lVar10 = *(long *)(lVar10 + 0x98);
            goto joined_r0x07104c38;
          }
          goto LAB_071054bc;
        }
        if (((int)uVar21 <= (int)uVar27) ||
           (uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar27 * 2), uVar4 == 0))
        goto switchD_07104b50_caseD_2c;
        if (DAT_0941b532 == '\0') {
          FUN_03c8f898(PTR_DAT_08e9c268);
          DAT_0941b532 = '\x01';
        }
        uVar22 = *(uint *)(unaff_x22 + 0x18);
        uVar29 = *(uint *)(unaff_x22 + 0x10);
        uVar27 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar22 < (int)uVar29) goto LAB_07104da4;
LAB_07104d0c:
        FUN_06f9246c(unaff_x22,uVar4,0);
      }
switchD_07104b50_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar9;
      *(uint *)(unaff_x29 + -0x38) = uVar27;
    } while ((int)uVar27 < (int)uVar21);
  }
LAB_07105358:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


