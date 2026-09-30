/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$ToString
ENTRY_POINT: 06246108
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonProperty__ToString
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  bool bVar6;
  undefined1 auVar7 [12];
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  ushort *puVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  short *psVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  uint uVar28;
  short sVar29;
  uint uVar30;
  int iVar31;
  long unaff_x29;
  undefined1 auVar32 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  *(undefined8 *)(unaff_x29 + -0x28) = param_3;
  lVar12 = tpidr_el0;
  *(long *)(unaff_x29 + -0x68) = lVar12;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar12 + 0x28);
  if ((DAT_0825b9e8 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d87068);
    FUN_0373b518(PTR_DAT_07da5228);
    FUN_0373b518(PTR_DAT_07daae20);
    FUN_0373b518(PTR_DAT_07da5230);
    FUN_0373b518(PTR_DAT_07dae4d0);
    FUN_0373b518(PTR_DAT_07da53d0);
    FUN_0373b518(PTR_DAT_07dae4d8);
    FUN_0373b518(PTR_DAT_07dae4e0);
    DAT_0825b9e8 = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  psVar11 = (short *)FUN_06251760(param_2,0);
  sVar29 = *psVar11;
  *(short **)(unaff_x29 + -0x30) = psVar11;
  if (sVar29 == 0) {
    uVar9 = 2;
  }
  else {
    uVar9 = FUN_06251744(param_2,0);
    uVar9 = uVar9 & 1;
  }
  *(undefined8 *)(unaff_x29 + -0x48) = param_5;
  if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  iVar10 = FUN_0624bf1c(*(undefined8 *)(unaff_x29 + -0x28),param_4,uVar9);
  uVar9 = (uint)param_4;
  *(undefined4 *)(unaff_x29 + -0x38) = 0;
  do {
    iVar26 = iVar10;
    lVar12 = FUN_04077750(*(undefined8 *)(unaff_x29 + -0x28),param_4,*(undefined8 *)PTR_DAT_07da5228
                         );
    if (iVar26 < (int)uVar9) {
      *(undefined4 *)(unaff_x29 + -0x1c) = 0;
      iVar31 = 0;
      bVar6 = false;
      uVar22 = 0;
      iVar10 = 0;
      iVar25 = 0x7fffffff;
      iVar17 = -1;
      iVar16 = -1;
      iVar21 = iVar26;
      do {
        uVar4 = *(ushort *)(lVar12 + (long)iVar21 * 2);
        if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
        iVar18 = iVar21 + 1;
        if (uVar4 < 0x46) {
          switch(uVar4) {
          case 0x22:
          case 0x27:
            lVar27 = (long)iVar18;
            lVar1 = lVar27;
            if ((long)iVar18 <= (long)(int)uVar9) {
              lVar1 = (long)(int)uVar9;
            }
            puVar20 = (ushort *)(lVar12 + (long)iVar18 * 2);
            do {
              if (lVar1 == lVar27) {
                iVar18 = (int)lVar1;
                goto switchD_0624628c_caseD_24;
              }
              uVar3 = *puVar20;
              if (uVar3 == 0) break;
              lVar27 = lVar27 + 1;
              puVar20 = puVar20 + 1;
            } while (uVar3 != uVar4);
            iVar18 = (int)lVar27;
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
            iVar10 = iVar10 + 2;
            break;
          case 0x2c:
            if ((iVar17 < 0) && (0 < *(int *)(unaff_x29 + -0x1c))) {
              if (iVar16 < 0) {
                *(undefined4 *)(unaff_x29 + -0x38) = 1;
                iVar16 = *(int *)(unaff_x29 + -0x1c);
              }
              else {
                iVar2 = *(int *)(unaff_x29 + -0x1c);
                uVar22 = uVar22 | iVar16 != iVar2;
                iVar21 = 1;
                if (iVar16 == iVar2) {
                  iVar21 = *(int *)(unaff_x29 + -0x38) + 1;
                }
                *(int *)(unaff_x29 + -0x38) = iVar21;
                iVar16 = iVar2;
              }
            }
            break;
          case 0x2e:
            if (iVar17 < 0) {
              iVar17 = *(int *)(unaff_x29 + -0x1c);
            }
            break;
          case 0x30:
            iVar31 = *(int *)(unaff_x29 + -0x1c) + 1;
            iVar21 = *(int *)(unaff_x29 + -0x1c);
            if (iVar25 != 0x7fffffff) {
              iVar21 = iVar25;
            }
            *(int *)(unaff_x29 + -0x1c) = iVar31;
            iVar25 = iVar21;
            break;
          default:
            if (uVar4 == 0x45) {
LAB_06246310:
              if (((iVar18 < (int)uVar9) && (*(short *)(lVar12 + (long)iVar18 * 2) == 0x30)) ||
                 ((iVar21 + 2 < (int)uVar9 &&
                  (((sVar29 = *(short *)(lVar12 + (long)iVar18 * 2), sVar29 == 0x2d ||
                    (sVar29 == 0x2b)) && (*(short *)(lVar12 + (long)(iVar21 + 2) * 2) == 0x30))))))
              {
                do {
                  iVar18 = iVar18 + 1;
                  if ((int)uVar9 <= iVar18) {
                    bVar6 = true;
                    goto LAB_06246438;
                  }
                } while (*(short *)(lVar12 + (long)iVar18 * 2) == 0x30);
                bVar6 = true;
              }
            }
          }
        }
        else if (uVar4 == 0x5c) {
          if ((iVar18 < (int)uVar9) && (*(short *)(lVar12 + (long)iVar18 * 2) != 0)) {
            iVar18 = iVar21 + 2;
          }
        }
        else {
          if (uVar4 == 0x65) goto LAB_06246310;
          if (uVar4 == 0x2030) {
            iVar10 = iVar10 + 3;
          }
        }
switchD_0624628c_caseD_24:
        iVar21 = iVar18;
      } while (iVar21 < (int)uVar9);
LAB_06246438:
      if (iVar17 < 0) {
        iVar17 = *(int *)(unaff_x29 + -0x1c);
      }
      *(int *)(unaff_x29 + -0x34) = iVar17;
      if (-1 < iVar16) {
        if (iVar16 == iVar17) {
          iVar10 = *(int *)(unaff_x29 + -0x38) * -3 + iVar10;
        }
        else {
          uVar22 = 1;
        }
      }
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x34) = 0;
      bVar6 = false;
      iVar31 = 0;
      *(undefined4 *)(unaff_x29 + -0x1c) = 0;
      iVar10 = 0;
      uVar22 = 0;
      iVar25 = 0x7fffffff;
    }
    *(uint *)(unaff_x29 + -0x3c) = uVar22;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      *(int *)(unaff_x29 + -0x38) = iVar26;
      FUN_06251754(param_2,0,0);
      *(undefined4 *)(param_2 + 4) = 0;
      goto LAB_0624651c;
    }
    iVar10 = *(int *)(param_2 + 4) + iVar10;
    *(int *)(param_2 + 4) = iVar10;
    iVar17 = *(int *)(unaff_x29 + -0x1c);
    if (!bVar6) {
      iVar17 = (*(int *)(unaff_x29 + -0x1c) - *(int *)(unaff_x29 + -0x34)) + iVar10;
    }
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0624abbc(param_2,iVar17);
    if (**(short **)(unaff_x29 + -0x30) != 0) break;
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    iVar10 = FUN_0624bf1c(*(undefined8 *)(unaff_x29 + -0x28),param_4,2);
  } while (iVar10 != iVar26);
  *(int *)(unaff_x29 + -0x38) = iVar26;
LAB_0624651c:
  iVar26 = *(int *)(unaff_x29 + -0x34);
  iVar10 = iVar26 - iVar25;
  if (iVar10 == 0 || iVar26 < iVar25) {
    iVar10 = 0;
  }
  iVar25 = iVar26 - iVar31;
  if (iVar31 <= iVar26) {
    iVar25 = 0;
  }
  *(int *)(unaff_x29 + -0x74) = iVar25;
  if (bVar6) {
    lVar12 = *(long *)(unaff_x29 + -0x48);
    uVar22 = *(uint *)(unaff_x29 + -0x3c);
    uVar19 = 1;
    *(undefined4 *)(unaff_x29 + -0x4c) = 0;
    iVar31 = iVar26;
  }
  else {
    iVar31 = *(int *)(param_2 + 4);
    lVar12 = *(long *)(unaff_x29 + -0x48);
    uVar22 = *(uint *)(unaff_x29 + -0x3c);
    uVar19 = 0;
    *(int *)(unaff_x29 + -0x4c) = iVar31 - iVar26;
    if (iVar31 - iVar26 == 0 || iVar31 < iVar26) {
      iVar31 = iVar26;
    }
  }
  uVar13 = DAT_0158a960;
  puVar14 = &uStack_10;
  uStack_10 = 0;
  uStack_8 = 0;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar14;
  *(long *)(unaff_x29 + -0x70) = param_2;
  *(undefined8 *)(unaff_x29 + -0x10) = uVar13;
  *(int *)(unaff_x29 + -0x78) = iVar10;
  *(undefined4 *)(unaff_x29 + -0x5c) = uVar19;
  if ((uVar22 & 1) == 0) {
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext:
    uVar22 = 0xffffffff;
  }
  else {
    if ((lVar12 == 0) || (*(long *)(lVar12 + 0x40) == 0)) goto LAB_06247218;
    if (*(int *)(*(long *)(lVar12 + 0x40) + 0x10) < 1)
    goto Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext;
    lVar12 = *(long *)(lVar12 + 0x10);
    if (lVar12 == 0) goto LAB_06247218;
    iVar26 = *(int *)(lVar12 + 0x18);
    if (iVar26 == 0) {
      iVar25 = 0;
    }
    else {
      iVar25 = *(int *)(lVar12 + 0x20);
    }
    uVar22 = 0xffffffff;
    iVar17 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) + iVar31;
    if (iVar10 <= iVar17) {
      iVar10 = iVar17;
    }
    if ((iVar25 != 0) && (iVar25 < iVar10)) {
      uVar22 = 0;
      lVar27 = 0;
      uVar15 = 4;
      *(long *)(unaff_x29 + -0x58) = lVar12;
      iVar17 = iVar25;
      while( true ) {
        auVar32._8_8_ = uVar15;
        auVar32._0_8_ = puVar14;
        auVar7 = auVar32._0_12_;
        if ((int)uVar15 <= (int)uVar22) {
          uVar13 = RootMotion_FinalIK_Finger___ctor
                             (*(undefined8 *)PTR_DAT_07d87068,(int)uVar15 << 1);
          auVar32 = FUN_0531f3bc(uVar13,*(undefined8 *)PTR_DAT_07dae4e0);
          FUN_0531eed0(unaff_x29 + -0x18,auVar32._0_8_,auVar32._8_8_,*(undefined8 *)PTR_DAT_07dae4d0
                      );
          auVar32 = FUN_0531f3bc(uVar13,*(undefined8 *)PTR_DAT_07dae4e0);
          auVar7 = auVar32._0_12_;
          lVar12 = *(long *)(unaff_x29 + -0x58);
          *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar32;
        }
        puVar14 = auVar7._0_8_;
        if (auVar7._8_4_ <= uVar22) goto LAB_06247214;
        *(int *)((long)puVar14 + (long)(int)uVar22 * 4) = iVar25;
        if ((int)lVar27 < iVar26 + -1) {
          lVar27 = (long)(int)lVar27 + 1;
          if (*(uint *)(lVar12 + 0x18) <= (uint)lVar27) goto LAB_06247214;
          iVar17 = *(int *)(lVar12 + lVar27 * 4 + 0x20);
        }
        if ((iVar17 == 0) || (iVar25 = iVar17 + iVar25, iVar10 <= iVar25)) break;
        uVar15 = (ulong)*(uint *)(unaff_x29 + -0x10);
        uVar22 = uVar22 + 1;
      }
      param_2 = *(long *)(unaff_x29 + -0x70);
    }
  }
  uVar15 = FUN_06251744(param_2,0);
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar15 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar12 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_0825ba12 == '\0') {
        FUN_0373b518(PTR_DAT_07da5848);
        DAT_0825ba12 = '\x01';
      }
      if (lVar12 != 0) {
        if (*(int *)(lVar12 + 0x10) == 1) {
          uVar30 = *(uint *)(param_1 + 0x18);
          if ((int)uVar30 < (int)*(uint *)(param_1 + 0x10)) {
            if (*(uint *)(param_1 + 0x10) <= uVar30) {
LAB_06247214:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            lVar27 = *(long *)(param_1 + 8);
            uVar8 = FUN_060bb390(lVar12,0,0);
            *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
            *(uint *)(param_1 + 0x18) = uVar30 + 1;
            goto LAB_06246670;
          }
        }
        FUN_060dc110(param_1,lVar12,0);
        goto LAB_06246670;
      }
    }
LAB_06247218:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
LAB_06246670:
  uVar13 = FUN_04077750(*(undefined8 *)(unaff_x29 + -0x28),param_4,*(undefined8 *)PTR_DAT_07da5228);
  *(undefined8 *)(unaff_x29 + -0x58) = uVar13;
  if (*(int *)(unaff_x29 + -0x38) < (int)uVar9) {
    psVar11 = *(short **)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
    *(uint *)(unaff_x29 + -0x8c) = uVar9 - 2;
    *(long *)(unaff_x29 + -0x88) = (long)(int)uVar9;
    do {
      uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
      iVar10 = *(int *)(unaff_x29 + -0x4c);
      uVar30 = (uint)uVar4;
      if ((iVar10 < 1) ||
         ((0x30 < uVar4 || ((1L << ((ulong)uVar30 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar12 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar12 = *(long *)(unaff_x29 + -0x48);
        uVar28 = *(uint *)(unaff_x29 + -0x28);
        iVar26 = iVar10 + 1;
        *(int *)(unaff_x29 + -0x3c) = iVar31 - iVar10;
        do {
          sVar29 = *psVar11;
          sVar5 = 0x30;
          if (sVar29 != 0) {
            psVar11 = psVar11 + 1;
            sVar5 = sVar29;
          }
          if (DAT_0825aded == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825aded = '\x01';
          }
          uVar23 = *(uint *)(param_1 + 0x18);
          if ((int)uVar23 < (int)*(uint *)(param_1 + 0x10)) {
            if (*(uint *)(param_1 + 0x10) <= uVar23) goto LAB_06247214;
            *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar23 * 2) = sVar5;
            *(uint *)(param_1 + 0x18) = uVar23 + 1;
          }
          else {
            FUN_060dbfe4(param_1,sVar5,0);
          }
          if ((-1 < (int)uVar22) && (1 < iVar31 && (uVar28 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar22) goto LAB_06247214;
            if (iVar31 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar22 * 4) + 1) {
              if (lVar12 == 0) goto LAB_06247218;
              lVar27 = *(long *)(lVar12 + 0x40);
              if (DAT_0825ba12 == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825ba12 = '\x01';
              }
              if (lVar27 == 0) goto LAB_06247218;
              if (*(int *)(lVar27 + 0x10) == 1) {
                uVar28 = *(uint *)(param_1 + 0x18);
                if ((int)*(uint *)(param_1 + 0x10) <= (int)uVar28) goto LAB_06246844;
                if (*(uint *)(param_1 + 0x10) <= uVar28) goto LAB_06247214;
                lVar12 = *(long *)(param_1 + 8);
                uVar8 = FUN_060bb390(lVar27,0,0);
                *(undefined2 *)(lVar12 + (long)(int)uVar28 * 2) = uVar8;
                lVar12 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(param_1 + 0x18) = uVar28 + 1;
              }
              else {
LAB_06246844:
                FUN_060dc110(param_1,lVar27,0);
              }
              uVar28 = *(uint *)(unaff_x29 + -0x28);
              uVar22 = uVar22 - 1;
            }
          }
          iVar26 = iVar26 + -1;
          iVar31 = iVar31 + -1;
        } while (1 < iVar26);
        iVar31 = *(int *)(unaff_x29 + -0x3c);
        iVar10 = 0;
      }
      uVar28 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar30 < 0x46) {
        switch(uVar4) {
        case 0x22:
        case 0x27:
          if ((int)uVar28 < (int)uVar9) {
            *(int *)(unaff_x29 + -0x3c) = iVar31;
            *(int *)(unaff_x29 + -0x4c) = iVar10;
            lVar12 = (ulong)uVar28 << 0x20;
            uVar23 = ~*(uint *)(unaff_x29 + -0x38);
            puVar20 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
            lVar27 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar28;
            while( true ) {
              uVar4 = *puVar20;
              if ((uVar4 == 0) || (uVar4 == uVar30)) break;
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar28 = *(uint *)(param_1 + 0x18);
              if ((int)uVar28 < (int)*(uint *)(param_1 + 0x10)) {
                if (*(uint *)(param_1 + 0x10) <= uVar28) goto LAB_06247214;
                *(ushort *)(*(long *)(param_1 + 8) + (long)(int)uVar28 * 2) = uVar4;
                *(uint *)(param_1 + 0x18) = uVar28 + 1;
              }
              else {
                FUN_060dbfe4(param_1,uVar4,0);
              }
              lVar12 = lVar12 + 0x100000000;
              uVar23 = uVar23 - 1;
              lVar27 = lVar27 + -1;
              puVar20 = puVar20 + 1;
              if (lVar27 == 0) goto LAB_062470b4;
            }
            iVar10 = *(int *)(unaff_x29 + -0x4c);
            iVar31 = *(int *)(unaff_x29 + -0x3c);
            uVar28 = (*(short *)((lVar12 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar23;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar10 < 0) {
            iVar10 = iVar10 + 1;
            if (iVar31 <= *(int *)(unaff_x29 + -0x78)) {
LAB_06246d4c:
              sVar29 = 0x30;
              goto LAB_06246d50;
            }
          }
          else {
            sVar29 = *psVar11;
            if (sVar29 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < iVar31) goto LAB_06246d4c;
            }
            else {
              psVar11 = psVar11 + 1;
LAB_06246d50:
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar23 = *(uint *)(param_1 + 0x18);
              uVar30 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar23 < (int)*(uint *)(param_1 + 0x10)) {
                if (*(uint *)(param_1 + 0x10) <= uVar23) goto LAB_06247214;
                *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar23 * 2) = sVar29;
                *(uint *)(param_1 + 0x18) = uVar23 + 1;
              }
              else {
                FUN_060dbfe4(param_1,sVar29,0);
              }
              if ((-1 < (int)uVar22) && (1 < iVar31 && (uVar30 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar22) goto LAB_06247214;
                if (iVar31 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar22 * 4) + 1) {
                  if (lVar12 == 0) goto LAB_06247218;
                  lVar12 = *(long *)(lVar12 + 0x40);
                  if (DAT_0825ba12 == '\0') {
                    FUN_0373b518(PTR_DAT_07da5848);
                    DAT_0825ba12 = '\x01';
                  }
                  if (lVar12 == 0) goto LAB_06247218;
                  if (*(int *)(lVar12 + 0x10) == 1) {
                    uVar30 = *(uint *)(param_1 + 0x18);
                    if ((int)*(uint *)(param_1 + 0x10) <= (int)uVar30) goto LAB_06246e68;
                    if (*(uint *)(param_1 + 0x10) <= uVar30) goto LAB_06247214;
                    lVar27 = *(long *)(param_1 + 8);
                    uVar8 = FUN_060bb390(lVar12,0,0);
                    *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
                    *(uint *)(param_1 + 0x18) = uVar30 + 1;
                  }
                  else {
LAB_06246e68:
                    FUN_060dc110(param_1,lVar12,0);
                  }
                  uVar22 = uVar22 - 1;
                }
              }
            }
          }
          iVar31 = iVar31 + -1;
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
          uVar23 = *(uint *)(param_1 + 0x18);
          uVar30 = *(uint *)(param_1 + 0x10);
          if ((int)uVar30 <= (int)uVar23) goto LAB_06246a68;
LAB_06246b00:
          if (uVar30 <= uVar23) goto LAB_06247214;
          *(ushort *)(*(long *)(param_1 + 8) + (long)(int)uVar23 * 2) = uVar4;
          *(uint *)(param_1 + 0x18) = uVar23 + 1;
          break;
        case 0x25:
          if (lVar12 == 0) goto LAB_06247218;
          lVar12 = *(long *)(lVar12 + 0x90);
joined_r0x06246994:
          if (DAT_0825ba12 == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825ba12 = '\x01';
          }
          if (lVar12 == 0) goto LAB_06247218;
          if (*(int *)(lVar12 + 0x10) == 1) {
            uVar30 = *(uint *)(param_1 + 0x18);
            if ((int)uVar30 < (int)*(uint *)(param_1 + 0x10)) {
              if (uVar30 < *(uint *)(param_1 + 0x10)) {
                lVar27 = *(long *)(param_1 + 8);
                uVar8 = FUN_060bb390(lVar12,0,0);
                *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
                *(uint *)(param_1 + 0x18) = uVar30 + 1;
                break;
              }
              goto LAB_06247214;
            }
          }
          FUN_060dc110(param_1,lVar12,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && iVar31 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar11 != 0)))) {
              if (lVar12 == 0) goto LAB_06247218;
              lVar12 = *(long *)(lVar12 + 0x38);
              if (DAT_0825ba12 == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825ba12 = '\x01';
              }
              if (lVar12 == 0) goto LAB_06247218;
              if (*(int *)(lVar12 + 0x10) == 1) {
                uVar30 = *(uint *)(param_1 + 0x18);
                if ((int)uVar30 < (int)*(uint *)(param_1 + 0x10)) {
                  if (uVar30 < *(uint *)(param_1 + 0x10)) {
                    lVar27 = *(long *)(param_1 + 8);
                    uVar8 = FUN_060bb390(lVar12,0,0);
                    *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
                    *(uint *)(param_1 + 0x18) = uVar30 + 1;
                    iVar31 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_06247214;
                }
              }
              FUN_060dc110(param_1,lVar12,0);
              iVar31 = 0;
              *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x7c) = 0;
              iVar31 = 0;
            }
          }
          break;
        default:
          if (uVar4 != 0x45) goto switchD_062468ac_caseD_24;
LAB_06246a98:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar26 = *(int *)(unaff_x29 + -0x38);
            if (DAT_0825aded == '\0') {
              FUN_0373b518(PTR_DAT_07da5848);
              DAT_0825aded = '\x01';
            }
            uVar23 = *(uint *)(param_1 + 0x18);
            if ((int)uVar23 < (int)*(uint *)(param_1 + 0x10)) {
              if (*(uint *)(param_1 + 0x10) <= uVar23) goto LAB_06247214;
              *(ushort *)(*(long *)(param_1 + 8) + (long)(int)uVar23 * 2) = uVar4;
              *(uint *)(param_1 + 0x18) = uVar23 + 1;
            }
            else {
              FUN_060dbfe4(param_1,uVar30,0);
            }
            if ((int)uVar28 < (int)uVar9) {
              sVar29 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
              if ((sVar29 == 0x2d) || (sVar29 == 0x2b)) {
                if (DAT_0825aded == '\0') {
                  FUN_0373b518(PTR_DAT_07da5848);
                  DAT_0825aded = '\x01';
                }
                uVar30 = *(uint *)(param_1 + 0x18);
                uVar28 = iVar26 + 2;
                if ((int)uVar30 < (int)*(uint *)(param_1 + 0x10)) {
                  if (*(uint *)(param_1 + 0x10) <= uVar30) goto LAB_06247214;
                  *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar30 * 2) = sVar29;
                  *(uint *)(param_1 + 0x18) = uVar30 + 1;
                }
                else {
                  FUN_060dbfe4(param_1,sVar29,0);
                }
              }
              if ((int)uVar28 < (int)uVar9) {
                psVar24 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
                lVar12 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar28;
                while (*psVar24 == 0x30) {
                  if (DAT_0825aded == '\0') {
                    FUN_0373b518(PTR_DAT_07da5848);
                    DAT_0825aded = '\x01';
                  }
                  uVar30 = *(uint *)(param_1 + 0x18);
                  if ((int)uVar30 < (int)*(uint *)(param_1 + 0x10)) {
                    if (*(uint *)(param_1 + 0x10) <= uVar30) goto LAB_06247214;
                    *(undefined2 *)(*(long *)(param_1 + 8) + (long)(int)uVar30 * 2) = 0x30;
                    *(uint *)(param_1 + 0x18) = uVar30 + 1;
                  }
                  else {
                    FUN_060dbfe4(param_1,0x30,0);
                  }
                  uVar28 = uVar28 + 1;
                  lVar12 = lVar12 + -1;
                  psVar24 = psVar24 + 1;
                  if (lVar12 == 0) goto LAB_062470b4;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            iVar26 = *(int *)(unaff_x29 + -0x38);
            if (((int)uVar28 < (int)uVar9) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2) == 0x30)) {
              uVar19 = 0;
              iVar25 = 1;
              goto LAB_06246f80;
            }
            iVar25 = iVar26 + 2;
            if ((int)uVar9 <= iVar25) {
LAB_06246fc0:
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar30 = *(uint *)(param_1 + 0x18);
              if ((int)uVar30 < (int)*(uint *)(param_1 + 0x10)) {
                if (*(uint *)(param_1 + 0x10) <= uVar30) goto LAB_06247214;
                *(ushort *)(*(long *)(param_1 + 8) + (long)(int)uVar30 * 2) = uVar4;
                *(uint *)(param_1 + 0x18) = uVar30 + 1;
              }
              else {
                FUN_060dbfe4(param_1,uVar4,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar29 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
            if (sVar29 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar25 * 2) != 0x30)
              goto LAB_06246fc0;
              iVar25 = 0;
              uVar19 = 0;
            }
            else {
              if ((sVar29 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar25 * 2) != 0x30))
              goto LAB_06246fc0;
              iVar25 = 0;
              uVar19 = 1;
            }
LAB_06246f80:
            uVar30 = iVar26 + 2;
            iVar17 = iVar25;
            uVar28 = uVar30;
            if ((int)uVar30 < (int)uVar9) {
              iVar16 = *(int *)(unaff_x29 + -0x8c) + iVar25;
              do {
                iVar17 = iVar25;
                uVar28 = uVar30;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar30 * 2) != 0x30) break;
                uVar30 = uVar30 + 1;
                iVar25 = iVar25 + 1;
                iVar17 = iVar16 - iVar26;
                uVar28 = uVar9;
              } while (uVar9 != uVar30);
            }
            if (9 < iVar17) {
              iVar17 = 10;
            }
            if (**(short **)(unaff_x29 + -0x30) == 0) {
              iVar26 = 0;
            }
            else {
              iVar26 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
            }
            if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar19;
              thunk_FUN_03798b70();
              uVar19 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_0624c068(param_1,*(undefined8 *)(unaff_x29 + -0x48),iVar26,uVar4,iVar17,uVar19);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar4 != 0x5c) {
          if (uVar4 == 0x65) goto LAB_06246a98;
          if (uVar4 != 0x2030) goto switchD_062468ac_caseD_24;
          if (lVar12 != 0) {
            lVar12 = *(long *)(lVar12 + 0x98);
            goto joined_r0x06246994;
          }
          goto LAB_06247218;
        }
        if (((int)uVar9 <= (int)uVar28) ||
           (uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2), uVar4 == 0))
        goto switchD_062468ac_caseD_2c;
        if (DAT_0825aded == '\0') {
          FUN_0373b518(PTR_DAT_07da5848);
          DAT_0825aded = '\x01';
        }
        uVar23 = *(uint *)(param_1 + 0x18);
        uVar30 = *(uint *)(param_1 + 0x10);
        uVar28 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar23 < (int)uVar30) goto LAB_06246b00;
LAB_06246a68:
        FUN_060dbfe4(param_1,uVar4,0);
      }
switchD_062468ac_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar10;
      *(uint *)(unaff_x29 + -0x38) = uVar28;
    } while ((int)uVar28 < (int)uVar9);
  }
LAB_062470b4:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


