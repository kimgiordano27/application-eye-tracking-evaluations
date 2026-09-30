/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$GetErrorContext
ENTRY_POINT: 062464d4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__GetErrorContext(long *param_1)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  undefined1 auVar6 [12];
  undefined2 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  ushort *puVar17;
  long lVar18;
  uint uVar19;
  uint unaff_w19;
  uint uVar20;
  undefined8 unaff_x20;
  int unaff_w21;
  uint uVar21;
  short *psVar22;
  long unaff_x22;
  short *psVar23;
  int unaff_w24;
  int iVar24;
  long lVar25;
  uint uVar26;
  short sVar27;
  uint uVar28;
  long unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  undefined1 auVar29 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  do {
    if (*(int *)(*param_1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    iVar8 = FUN_0624bf1c(*(undefined8 *)(unaff_x29 + -0x28));
    uVar20 = (uint)unaff_x20;
    if (iVar8 == unaff_w21) break;
    lVar18 = FUN_04077750(*(undefined8 *)(unaff_x29 + -0x28));
    if (iVar8 < (int)uVar20) {
      *(undefined4 *)(unaff_x29 + -0x1c) = 0;
      unaff_w28 = 0;
      unaff_w19 = 0;
      uVar19 = 0;
      iVar24 = 0;
      unaff_w24 = 0x7fffffff;
      iVar12 = -1;
      iVar13 = -1;
      iVar14 = iVar8;
      do {
        uVar4 = *(ushort *)(lVar18 + (long)iVar14 * 2);
        if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
        iVar15 = iVar14 + 1;
        if (uVar4 < 0x46) {
          switch(uVar4) {
          case 0x22:
          case 0x27:
            lVar25 = (long)iVar15;
            lVar1 = lVar25;
            if (iVar15 <= unaff_x27) {
              lVar1 = unaff_x27;
            }
            puVar17 = (ushort *)(lVar18 + (long)iVar15 * 2);
            do {
              if (lVar1 == lVar25) {
                iVar15 = (int)lVar1;
                goto switchD_0624628c_caseD_24;
              }
              uVar3 = *puVar17;
              if (uVar3 == 0) break;
              lVar25 = lVar25 + 1;
              puVar17 = puVar17 + 1;
            } while (uVar3 != uVar4);
            iVar15 = (int)lVar25;
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
            iVar24 = iVar24 + 2;
            break;
          case 0x2c:
            if ((iVar12 < 0) && (0 < *(int *)(unaff_x29 + -0x1c))) {
              if (iVar13 < 0) {
                *(undefined4 *)(unaff_x29 + -0x38) = 1;
                iVar13 = *(int *)(unaff_x29 + -0x1c);
              }
              else {
                iVar2 = *(int *)(unaff_x29 + -0x1c);
                uVar19 = uVar19 | iVar13 != iVar2;
                iVar14 = 1;
                if (iVar13 == iVar2) {
                  iVar14 = *(int *)(unaff_x29 + -0x38) + 1;
                }
                *(int *)(unaff_x29 + -0x38) = iVar14;
                iVar13 = iVar2;
              }
            }
            break;
          case 0x2e:
            if (iVar12 < 0) {
              iVar12 = *(int *)(unaff_x29 + -0x1c);
            }
            break;
          case 0x30:
            unaff_w28 = *(int *)(unaff_x29 + -0x1c) + 1;
            iVar14 = *(int *)(unaff_x29 + -0x1c);
            if (unaff_w24 != 0x7fffffff) {
              iVar14 = unaff_w24;
            }
            *(int *)(unaff_x29 + -0x1c) = unaff_w28;
            unaff_w24 = iVar14;
            break;
          default:
            if (uVar4 == 0x45) {
LAB_06246310:
              if (((iVar15 < (int)uVar20) && (*(short *)(lVar18 + (long)iVar15 * 2) == 0x30)) ||
                 ((iVar14 + 2 < (int)uVar20 &&
                  (((sVar27 = *(short *)(lVar18 + (long)iVar15 * 2), sVar27 == 0x2d ||
                    (sVar27 == 0x2b)) && (*(short *)(lVar18 + (long)(iVar14 + 2) * 2) == 0x30))))))
              {
                do {
                  iVar15 = iVar15 + 1;
                  if ((int)uVar20 <= iVar15) {
                    unaff_w19 = 1;
                    goto LAB_06246438;
                  }
                } while (*(short *)(lVar18 + (long)iVar15 * 2) == 0x30);
                unaff_w19 = 1;
              }
            }
          }
        }
        else if (uVar4 == 0x5c) {
          if ((iVar15 < (int)uVar20) && (*(short *)(lVar18 + (long)iVar15 * 2) != 0)) {
            iVar15 = iVar14 + 2;
          }
        }
        else {
          if (uVar4 == 0x65) goto LAB_06246310;
          if (uVar4 == 0x2030) {
            iVar24 = iVar24 + 3;
          }
        }
switchD_0624628c_caseD_24:
        iVar14 = iVar15;
      } while (iVar15 < (int)uVar20);
LAB_06246438:
      if (iVar12 < 0) {
        iVar12 = *(int *)(unaff_x29 + -0x1c);
      }
      *(int *)(unaff_x29 + -0x34) = iVar12;
      if (-1 < iVar13) {
        if (iVar13 == iVar12) {
          iVar24 = *(int *)(unaff_x29 + -0x38) * -3 + iVar24;
        }
        else {
          uVar19 = 1;
        }
      }
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x34) = 0;
      unaff_w19 = 0;
      unaff_w28 = 0;
      *(undefined4 *)(unaff_x29 + -0x1c) = 0;
      iVar24 = 0;
      uVar19 = 0;
      unaff_w24 = 0x7fffffff;
    }
    *(uint *)(unaff_x29 + -0x3c) = uVar19;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      *(int *)(unaff_x29 + -0x38) = iVar8;
      FUN_06251754();
      *(undefined4 *)(unaff_x26 + 4) = 0;
      goto LAB_0624651c;
    }
    *(int *)(unaff_x26 + 4) = *(int *)(unaff_x26 + 4) + iVar24;
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0624abbc();
    param_1 = (long *)PTR_DAT_07daae20;
    unaff_w21 = iVar8;
  } while (**(short **)(unaff_x29 + -0x30) == 0);
  *(int *)(unaff_x29 + -0x38) = unaff_w21;
LAB_0624651c:
  iVar24 = *(int *)(unaff_x29 + -0x34);
  iVar8 = iVar24 - unaff_w24;
  if (iVar8 == 0 || iVar24 < unaff_w24) {
    iVar8 = 0;
  }
  iVar12 = iVar24 - unaff_w28;
  if (unaff_w28 <= iVar24) {
    iVar12 = 0;
  }
  *(int *)(unaff_x29 + -0x74) = iVar12;
  if ((unaff_w19 & 1) == 0) {
    iVar12 = *(int *)(unaff_x26 + 4);
    lVar18 = *(long *)(unaff_x29 + -0x48);
    uVar19 = *(uint *)(unaff_x29 + -0x3c);
    uVar16 = 0;
    *(int *)(unaff_x29 + -0x4c) = iVar12 - iVar24;
    if (iVar12 - iVar24 == 0 || iVar12 < iVar24) {
      iVar12 = iVar24;
    }
  }
  else {
    lVar18 = *(long *)(unaff_x29 + -0x48);
    uVar19 = *(uint *)(unaff_x29 + -0x3c);
    uVar16 = 1;
    *(undefined4 *)(unaff_x29 + -0x4c) = 0;
    iVar12 = iVar24;
  }
  uVar9 = DAT_0158a960;
  puVar10 = &uStack_10;
  uStack_10 = 0;
  uStack_8 = 0;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
  *(long *)(unaff_x29 + -0x70) = unaff_x26;
  *(undefined8 *)(unaff_x29 + -0x10) = uVar9;
  *(int *)(unaff_x29 + -0x78) = iVar8;
  *(undefined4 *)(unaff_x29 + -0x5c) = uVar16;
  if ((uVar19 & 1) == 0) {
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext:
    uVar19 = 0xffffffff;
  }
  else {
    if ((lVar18 == 0) || (*(long *)(lVar18 + 0x40) == 0)) goto LAB_06247218;
    if (*(int *)(*(long *)(lVar18 + 0x40) + 0x10) < 1)
    goto Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext;
    lVar18 = *(long *)(lVar18 + 0x10);
    if (lVar18 == 0) goto LAB_06247218;
    iVar24 = *(int *)(lVar18 + 0x18);
    if (iVar24 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(lVar18 + 0x20);
    }
    uVar19 = 0xffffffff;
    iVar14 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) + iVar12;
    if (iVar8 <= iVar14) {
      iVar8 = iVar14;
    }
    if ((iVar13 != 0) && (iVar13 < iVar8)) {
      uVar19 = 0;
      lVar25 = 0;
      uVar11 = 4;
      *(long *)(unaff_x29 + -0x58) = lVar18;
      iVar14 = iVar13;
      while( true ) {
        auVar29._8_8_ = uVar11;
        auVar29._0_8_ = puVar10;
        auVar6 = auVar29._0_12_;
        if ((int)uVar11 <= (int)uVar19) {
          uVar9 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d87068,(int)uVar11 << 1)
          ;
          auVar29 = FUN_0531f3bc(uVar9,*(undefined8 *)PTR_DAT_07dae4e0);
          FUN_0531eed0(unaff_x29 + -0x18,auVar29._0_8_,auVar29._8_8_,*(undefined8 *)PTR_DAT_07dae4d0
                      );
          auVar29 = FUN_0531f3bc(uVar9,*(undefined8 *)PTR_DAT_07dae4e0);
          auVar6 = auVar29._0_12_;
          lVar18 = *(long *)(unaff_x29 + -0x58);
          *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar29;
        }
        puVar10 = auVar6._0_8_;
        if (auVar6._8_4_ <= uVar19) goto LAB_06247214;
        *(int *)((long)puVar10 + (long)(int)uVar19 * 4) = iVar13;
        if ((int)lVar25 < iVar24 + -1) {
          lVar25 = (long)(int)lVar25 + 1;
          if (*(uint *)(lVar18 + 0x18) <= (uint)lVar25) goto LAB_06247214;
          iVar14 = *(int *)(lVar18 + lVar25 * 4 + 0x20);
        }
        if ((iVar14 == 0) || (iVar13 = iVar14 + iVar13, iVar8 <= iVar13)) break;
        uVar11 = (ulong)*(uint *)(unaff_x29 + -0x10);
        uVar19 = uVar19 + 1;
      }
      unaff_x26 = *(long *)(unaff_x29 + -0x70);
    }
  }
  uVar11 = FUN_06251744(unaff_x26,0);
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar11 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar18 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_0825ba12 == '\0') {
        FUN_0373b518(PTR_DAT_07da5848);
        DAT_0825ba12 = '\x01';
      }
      if (lVar18 != 0) {
        if (*(int *)(lVar18 + 0x10) == 1) {
          uVar28 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar28 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar28) {
LAB_06247214:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            lVar25 = *(long *)(unaff_x22 + 8);
            uVar7 = FUN_060bb390(lVar18,0,0);
            *(undefined2 *)(lVar25 + (long)(int)uVar28 * 2) = uVar7;
            *(uint *)(unaff_x22 + 0x18) = uVar28 + 1;
            goto LAB_06246670;
          }
        }
        FUN_060dc110(unaff_x22,lVar18,0);
        goto LAB_06246670;
      }
    }
LAB_06247218:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
LAB_06246670:
  uVar9 = FUN_04077750(*(undefined8 *)(unaff_x29 + -0x28),unaff_x20,*(undefined8 *)PTR_DAT_07da5228)
  ;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar9;
  if (*(int *)(unaff_x29 + -0x38) < (int)uVar20) {
    psVar23 = *(short **)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
    *(uint *)(unaff_x29 + -0x8c) = uVar20 - 2;
    *(long *)(unaff_x29 + -0x88) = (long)(int)uVar20;
    do {
      uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
      iVar8 = *(int *)(unaff_x29 + -0x4c);
      uVar28 = (uint)uVar4;
      if ((iVar8 < 1) ||
         ((0x30 < uVar4 || ((1L << ((ulong)uVar28 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar18 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar18 = *(long *)(unaff_x29 + -0x48);
        uVar26 = *(uint *)(unaff_x29 + -0x28);
        iVar24 = iVar8 + 1;
        *(int *)(unaff_x29 + -0x3c) = iVar12 - iVar8;
        do {
          sVar27 = *psVar23;
          sVar5 = 0x30;
          if (sVar27 != 0) {
            psVar23 = psVar23 + 1;
            sVar5 = sVar27;
          }
          if (DAT_0825aded == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825aded = '\x01';
          }
          uVar21 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_06247214;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = sVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
          }
          else {
            FUN_060dbfe4(unaff_x22,sVar5,0);
          }
          if ((-1 < (int)uVar19) && (1 < iVar12 && (uVar26 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar19) goto LAB_06247214;
            if (iVar12 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar19 * 4) + 1) {
              if (lVar18 == 0) goto LAB_06247218;
              lVar25 = *(long *)(lVar18 + 0x40);
              if (DAT_0825ba12 == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825ba12 = '\x01';
              }
              if (lVar25 == 0) goto LAB_06247218;
              if (*(int *)(lVar25 + 0x10) == 1) {
                uVar26 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar26) goto LAB_06246844;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar26) goto LAB_06247214;
                lVar18 = *(long *)(unaff_x22 + 8);
                uVar7 = FUN_060bb390(lVar25,0,0);
                *(undefined2 *)(lVar18 + (long)(int)uVar26 * 2) = uVar7;
                lVar18 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar26 + 1;
              }
              else {
LAB_06246844:
                FUN_060dc110(unaff_x22,lVar25,0);
              }
              uVar26 = *(uint *)(unaff_x29 + -0x28);
              uVar19 = uVar19 - 1;
            }
          }
          iVar24 = iVar24 + -1;
          iVar12 = iVar12 + -1;
        } while (1 < iVar24);
        iVar12 = *(int *)(unaff_x29 + -0x3c);
        iVar8 = 0;
      }
      uVar26 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar28 < 0x46) {
        switch(uVar4) {
        case 0x22:
        case 0x27:
          if ((int)uVar26 < (int)uVar20) {
            *(int *)(unaff_x29 + -0x3c) = iVar12;
            *(int *)(unaff_x29 + -0x4c) = iVar8;
            lVar18 = (ulong)uVar26 << 0x20;
            uVar21 = ~*(uint *)(unaff_x29 + -0x38);
            puVar17 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar26 * 2);
            lVar25 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar26;
            while( true ) {
              uVar4 = *puVar17;
              if ((uVar4 == 0) || (uVar4 == uVar28)) break;
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar26 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar26 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar26) goto LAB_06247214;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar26 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar26 + 1;
              }
              else {
                FUN_060dbfe4(unaff_x22,uVar4,0);
              }
              lVar18 = lVar18 + 0x100000000;
              uVar21 = uVar21 - 1;
              lVar25 = lVar25 + -1;
              puVar17 = puVar17 + 1;
              if (lVar25 == 0) goto LAB_062470b4;
            }
            iVar8 = *(int *)(unaff_x29 + -0x4c);
            iVar12 = *(int *)(unaff_x29 + -0x3c);
            uVar26 = (*(short *)((lVar18 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar21;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar8 < 0) {
            iVar8 = iVar8 + 1;
            if (iVar12 <= *(int *)(unaff_x29 + -0x78)) {
LAB_06246d4c:
              sVar27 = 0x30;
              goto LAB_06246d50;
            }
          }
          else {
            sVar27 = *psVar23;
            if (sVar27 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < iVar12) goto LAB_06246d4c;
            }
            else {
              psVar23 = psVar23 + 1;
LAB_06246d50:
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar21 = *(uint *)(unaff_x22 + 0x18);
              uVar28 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_06247214;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = sVar27;
                *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
              }
              else {
                FUN_060dbfe4(unaff_x22,sVar27,0);
              }
              if ((-1 < (int)uVar19) && (1 < iVar12 && (uVar28 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar19) goto LAB_06247214;
                if (iVar12 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar19 * 4) + 1) {
                  if (lVar18 == 0) goto LAB_06247218;
                  lVar18 = *(long *)(lVar18 + 0x40);
                  if (DAT_0825ba12 == '\0') {
                    FUN_0373b518(PTR_DAT_07da5848);
                    DAT_0825ba12 = '\x01';
                  }
                  if (lVar18 == 0) goto LAB_06247218;
                  if (*(int *)(lVar18 + 0x10) == 1) {
                    uVar28 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar28) goto LAB_06246e68;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar28) goto LAB_06247214;
                    lVar25 = *(long *)(unaff_x22 + 8);
                    uVar7 = FUN_060bb390(lVar18,0,0);
                    *(undefined2 *)(lVar25 + (long)(int)uVar28 * 2) = uVar7;
                    *(uint *)(unaff_x22 + 0x18) = uVar28 + 1;
                  }
                  else {
LAB_06246e68:
                    FUN_060dc110(unaff_x22,lVar18,0);
                  }
                  uVar19 = uVar19 - 1;
                }
              }
            }
          }
          iVar12 = iVar12 + -1;
          break;
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2f:
switchD_062468ac_caseD_24:
          if (DAT_0825aded == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825aded = '\x01';
          }
          uVar21 = *(uint *)(unaff_x22 + 0x18);
          uVar28 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar28 <= (int)uVar21) goto LAB_06246a68;
LAB_06246b00:
          if (uVar28 <= uVar21) goto LAB_06247214;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
          break;
        case 0x25:
          if (lVar18 == 0) goto LAB_06247218;
          lVar18 = *(long *)(lVar18 + 0x90);
joined_r0x06246994:
          if (DAT_0825ba12 == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825ba12 = '\x01';
          }
          if (lVar18 == 0) goto LAB_06247218;
          if (*(int *)(lVar18 + 0x10) == 1) {
            uVar28 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar28 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar28 < *(uint *)(unaff_x22 + 0x10)) {
                lVar25 = *(long *)(unaff_x22 + 8);
                uVar7 = FUN_060bb390(lVar18,0,0);
                *(undefined2 *)(lVar25 + (long)(int)uVar28 * 2) = uVar7;
                *(uint *)(unaff_x22 + 0x18) = uVar28 + 1;
                break;
              }
              goto LAB_06247214;
            }
          }
          FUN_060dc110(unaff_x22,lVar18,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && iVar12 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar23 != 0)))) {
              if (lVar18 == 0) goto LAB_06247218;
              lVar18 = *(long *)(lVar18 + 0x38);
              if (DAT_0825ba12 == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825ba12 = '\x01';
              }
              if (lVar18 == 0) goto LAB_06247218;
              if (*(int *)(lVar18 + 0x10) == 1) {
                uVar28 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar28 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar28 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar25 = *(long *)(unaff_x22 + 8);
                    uVar7 = FUN_060bb390(lVar18,0,0);
                    *(undefined2 *)(lVar25 + (long)(int)uVar28 * 2) = uVar7;
                    *(uint *)(unaff_x22 + 0x18) = uVar28 + 1;
                    iVar12 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_06247214;
                }
              }
              FUN_060dc110(unaff_x22,lVar18,0);
              iVar12 = 0;
              *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x7c) = 0;
              iVar12 = 0;
            }
          }
          break;
        default:
          if (uVar4 != 0x45) goto switchD_062468ac_caseD_24;
LAB_06246a98:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar24 = *(int *)(unaff_x29 + -0x38);
            if (DAT_0825aded == '\0') {
              FUN_0373b518(PTR_DAT_07da5848);
              DAT_0825aded = '\x01';
            }
            uVar21 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_06247214;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
            }
            else {
              FUN_060dbfe4(unaff_x22,uVar28,0);
            }
            if ((int)uVar26 < (int)uVar20) {
              sVar27 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar26 * 2);
              if ((sVar27 == 0x2d) || (sVar27 == 0x2b)) {
                if (DAT_0825aded == '\0') {
                  FUN_0373b518(PTR_DAT_07da5848);
                  DAT_0825aded = '\x01';
                }
                uVar28 = *(uint *)(unaff_x22 + 0x18);
                uVar26 = iVar24 + 2;
                if ((int)uVar28 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar28) goto LAB_06247214;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar28 * 2) = sVar27;
                  *(uint *)(unaff_x22 + 0x18) = uVar28 + 1;
                }
                else {
                  FUN_060dbfe4(unaff_x22,sVar27,0);
                }
              }
              if ((int)uVar26 < (int)uVar20) {
                psVar22 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar26 * 2);
                lVar18 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar26;
                while (*psVar22 == 0x30) {
                  if (DAT_0825aded == '\0') {
                    FUN_0373b518(PTR_DAT_07da5848);
                    DAT_0825aded = '\x01';
                  }
                  uVar28 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar28 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar28) goto LAB_06247214;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar28 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar28 + 1;
                  }
                  else {
                    FUN_060dbfe4(unaff_x22,0x30,0);
                  }
                  uVar26 = uVar26 + 1;
                  lVar18 = lVar18 + -1;
                  psVar22 = psVar22 + 1;
                  if (lVar18 == 0) goto LAB_062470b4;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            iVar24 = *(int *)(unaff_x29 + -0x38);
            if (((int)uVar26 < (int)uVar20) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar26 * 2) == 0x30)) {
              uVar16 = 0;
              iVar13 = 1;
              goto LAB_06246f80;
            }
            iVar13 = iVar24 + 2;
            if ((int)uVar20 <= iVar13) {
LAB_06246fc0:
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar28 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar28 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar28) goto LAB_06247214;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar28 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar28 + 1;
              }
              else {
                FUN_060dbfe4(unaff_x22,uVar4,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar27 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar26 * 2);
            if (sVar27 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2) != 0x30)
              goto LAB_06246fc0;
              iVar13 = 0;
              uVar16 = 0;
            }
            else {
              if ((sVar27 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar13 * 2) != 0x30))
              goto LAB_06246fc0;
              iVar13 = 0;
              uVar16 = 1;
            }
LAB_06246f80:
            uVar28 = iVar24 + 2;
            iVar14 = iVar13;
            uVar26 = uVar28;
            if ((int)uVar28 < (int)uVar20) {
              iVar15 = *(int *)(unaff_x29 + -0x8c) + iVar13;
              do {
                iVar14 = iVar13;
                uVar26 = uVar28;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2) != 0x30) break;
                uVar28 = uVar28 + 1;
                iVar13 = iVar13 + 1;
                iVar14 = iVar15 - iVar24;
                uVar26 = uVar20;
              } while (uVar20 != uVar28);
            }
            if (9 < iVar14) {
              iVar14 = 10;
            }
            if (**(short **)(unaff_x29 + -0x30) == 0) {
              iVar24 = 0;
            }
            else {
              iVar24 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
            }
            if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar16;
              thunk_FUN_03798b70();
              uVar16 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_0624c068(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar24,uVar4,iVar14,uVar16);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar4 != 0x5c) {
          if (uVar4 == 0x65) goto LAB_06246a98;
          if (uVar4 != 0x2030) goto switchD_062468ac_caseD_24;
          if (lVar18 != 0) {
            lVar18 = *(long *)(lVar18 + 0x98);
            goto joined_r0x06246994;
          }
          goto LAB_06247218;
        }
        if (((int)uVar20 <= (int)uVar26) ||
           (uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar26 * 2), uVar4 == 0))
        goto switchD_062468ac_caseD_2c;
        if (DAT_0825aded == '\0') {
          FUN_0373b518(PTR_DAT_07da5848);
          DAT_0825aded = '\x01';
        }
        uVar21 = *(uint *)(unaff_x22 + 0x18);
        uVar28 = *(uint *)(unaff_x22 + 0x10);
        uVar26 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar21 < (int)uVar28) goto LAB_06246b00;
LAB_06246a68:
        FUN_060dbfe4(unaff_x22,uVar4,0);
      }
switchD_062468ac_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar8;
      *(uint *)(unaff_x29 + -0x38) = uVar26;
    } while ((int)uVar26 < (int)uVar20);
  }
LAB_062470b4:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


