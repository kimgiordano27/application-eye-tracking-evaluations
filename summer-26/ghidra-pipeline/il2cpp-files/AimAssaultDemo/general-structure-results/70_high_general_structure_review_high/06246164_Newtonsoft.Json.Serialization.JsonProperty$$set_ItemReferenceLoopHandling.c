/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$set_ItemReferenceLoopHandling
ENTRY_POINT: 06246164
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonProperty__set_ItemReferenceLoopHandling(void)

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
  short *psVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  ushort *puVar19;
  int iVar20;
  uint uVar21;
  long unaff_x19;
  uint uVar22;
  undefined8 unaff_x20;
  uint uVar23;
  undefined8 unaff_x21;
  short *psVar24;
  long unaff_x22;
  int iVar25;
  int iVar26;
  long lVar27;
  uint uVar28;
  short sVar29;
  uint uVar30;
  long unaff_x26;
  int iVar31;
  long unaff_x29;
  undefined1 auVar32 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07dae4d0);
  FUN_0373b518(PTR_DAT_07da53d0);
  FUN_0373b518(PTR_DAT_07dae4d8);
  FUN_0373b518(PTR_DAT_07dae4e0);
  *(undefined1 *)(unaff_x19 + 0x9e8) = 1;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  psVar10 = (short *)FUN_06251760();
  sVar29 = *psVar10;
  *(short **)(unaff_x29 + -0x30) = psVar10;
  if (sVar29 != 0) {
    FUN_06251744();
  }
  *(undefined8 *)(unaff_x29 + -0x48) = unaff_x21;
  if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  iVar9 = FUN_0624bf1c(*(undefined8 *)(unaff_x29 + -0x28));
  uVar22 = (uint)unaff_x20;
  *(undefined4 *)(unaff_x29 + -0x38) = 0;
  do {
    iVar26 = iVar9;
    lVar11 = FUN_04077750(*(undefined8 *)(unaff_x29 + -0x28));
    if (iVar26 < (int)uVar22) {
      *(undefined4 *)(unaff_x29 + -0x1c) = 0;
      iVar31 = 0;
      bVar6 = false;
      uVar21 = 0;
      iVar9 = 0;
      iVar25 = 0x7fffffff;
      iVar16 = -1;
      iVar15 = -1;
      iVar20 = iVar26;
      do {
        uVar4 = *(ushort *)(lVar11 + (long)iVar20 * 2);
        if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
        iVar17 = iVar20 + 1;
        if (uVar4 < 0x46) {
          switch(uVar4) {
          case 0x22:
          case 0x27:
            lVar27 = (long)iVar17;
            lVar1 = lVar27;
            if ((long)iVar17 <= (long)(int)uVar22) {
              lVar1 = (long)(int)uVar22;
            }
            puVar19 = (ushort *)(lVar11 + (long)iVar17 * 2);
            do {
              if (lVar1 == lVar27) {
                iVar17 = (int)lVar1;
                goto switchD_0624628c_caseD_24;
              }
              uVar3 = *puVar19;
              if (uVar3 == 0) break;
              lVar27 = lVar27 + 1;
              puVar19 = puVar19 + 1;
            } while (uVar3 != uVar4);
            iVar17 = (int)lVar27;
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
            if ((iVar16 < 0) && (0 < *(int *)(unaff_x29 + -0x1c))) {
              if (iVar15 < 0) {
                *(undefined4 *)(unaff_x29 + -0x38) = 1;
                iVar15 = *(int *)(unaff_x29 + -0x1c);
              }
              else {
                iVar2 = *(int *)(unaff_x29 + -0x1c);
                uVar21 = uVar21 | iVar15 != iVar2;
                iVar20 = 1;
                if (iVar15 == iVar2) {
                  iVar20 = *(int *)(unaff_x29 + -0x38) + 1;
                }
                *(int *)(unaff_x29 + -0x38) = iVar20;
                iVar15 = iVar2;
              }
            }
            break;
          case 0x2e:
            if (iVar16 < 0) {
              iVar16 = *(int *)(unaff_x29 + -0x1c);
            }
            break;
          case 0x30:
            iVar31 = *(int *)(unaff_x29 + -0x1c) + 1;
            iVar20 = *(int *)(unaff_x29 + -0x1c);
            if (iVar25 != 0x7fffffff) {
              iVar20 = iVar25;
            }
            *(int *)(unaff_x29 + -0x1c) = iVar31;
            iVar25 = iVar20;
            break;
          default:
            if (uVar4 == 0x45) {
LAB_06246310:
              if (((iVar17 < (int)uVar22) && (*(short *)(lVar11 + (long)iVar17 * 2) == 0x30)) ||
                 ((iVar20 + 2 < (int)uVar22 &&
                  (((sVar29 = *(short *)(lVar11 + (long)iVar17 * 2), sVar29 == 0x2d ||
                    (sVar29 == 0x2b)) && (*(short *)(lVar11 + (long)(iVar20 + 2) * 2) == 0x30))))))
              {
                do {
                  iVar17 = iVar17 + 1;
                  if ((int)uVar22 <= iVar17) {
                    bVar6 = true;
                    goto LAB_06246438;
                  }
                } while (*(short *)(lVar11 + (long)iVar17 * 2) == 0x30);
                bVar6 = true;
              }
            }
          }
        }
        else if (uVar4 == 0x5c) {
          if ((iVar17 < (int)uVar22) && (*(short *)(lVar11 + (long)iVar17 * 2) != 0)) {
            iVar17 = iVar20 + 2;
          }
        }
        else {
          if (uVar4 == 0x65) goto LAB_06246310;
          if (uVar4 == 0x2030) {
            iVar9 = iVar9 + 3;
          }
        }
switchD_0624628c_caseD_24:
        iVar20 = iVar17;
      } while (iVar20 < (int)uVar22);
LAB_06246438:
      if (iVar16 < 0) {
        iVar16 = *(int *)(unaff_x29 + -0x1c);
      }
      *(int *)(unaff_x29 + -0x34) = iVar16;
      if (-1 < iVar15) {
        if (iVar15 == iVar16) {
          iVar9 = *(int *)(unaff_x29 + -0x38) * -3 + iVar9;
        }
        else {
          uVar21 = 1;
        }
      }
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x34) = 0;
      bVar6 = false;
      iVar31 = 0;
      *(undefined4 *)(unaff_x29 + -0x1c) = 0;
      iVar9 = 0;
      uVar21 = 0;
      iVar25 = 0x7fffffff;
    }
    *(uint *)(unaff_x29 + -0x3c) = uVar21;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      *(int *)(unaff_x29 + -0x38) = iVar26;
      FUN_06251754();
      *(undefined4 *)(unaff_x26 + 4) = 0;
      goto LAB_0624651c;
    }
    *(int *)(unaff_x26 + 4) = *(int *)(unaff_x26 + 4) + iVar9;
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0624abbc();
    if (**(short **)(unaff_x29 + -0x30) != 0) break;
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    iVar9 = FUN_0624bf1c(*(undefined8 *)(unaff_x29 + -0x28));
  } while (iVar9 != iVar26);
  *(int *)(unaff_x29 + -0x38) = iVar26;
LAB_0624651c:
  iVar26 = *(int *)(unaff_x29 + -0x34);
  iVar9 = iVar26 - iVar25;
  if (iVar9 == 0 || iVar26 < iVar25) {
    iVar9 = 0;
  }
  iVar25 = iVar26 - iVar31;
  if (iVar31 <= iVar26) {
    iVar25 = 0;
  }
  *(int *)(unaff_x29 + -0x74) = iVar25;
  if (bVar6) {
    lVar11 = *(long *)(unaff_x29 + -0x48);
    uVar21 = *(uint *)(unaff_x29 + -0x3c);
    uVar18 = 1;
    *(undefined4 *)(unaff_x29 + -0x4c) = 0;
    iVar31 = iVar26;
  }
  else {
    iVar31 = *(int *)(unaff_x26 + 4);
    lVar11 = *(long *)(unaff_x29 + -0x48);
    uVar21 = *(uint *)(unaff_x29 + -0x3c);
    uVar18 = 0;
    *(int *)(unaff_x29 + -0x4c) = iVar31 - iVar26;
    if (iVar31 - iVar26 == 0 || iVar31 < iVar26) {
      iVar31 = iVar26;
    }
  }
  uVar12 = DAT_0158a960;
  puVar13 = &uStack_10;
  uStack_10 = 0;
  uStack_8 = 0;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar13;
  *(long *)(unaff_x29 + -0x70) = unaff_x26;
  *(undefined8 *)(unaff_x29 + -0x10) = uVar12;
  *(int *)(unaff_x29 + -0x78) = iVar9;
  *(undefined4 *)(unaff_x29 + -0x5c) = uVar18;
  if ((uVar21 & 1) == 0) {
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext:
    uVar21 = 0xffffffff;
  }
  else {
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0x40) == 0)) goto LAB_06247218;
    if (*(int *)(*(long *)(lVar11 + 0x40) + 0x10) < 1)
    goto Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext;
    lVar11 = *(long *)(lVar11 + 0x10);
    if (lVar11 == 0) goto LAB_06247218;
    iVar26 = *(int *)(lVar11 + 0x18);
    if (iVar26 == 0) {
      iVar25 = 0;
    }
    else {
      iVar25 = *(int *)(lVar11 + 0x20);
    }
    uVar21 = 0xffffffff;
    iVar16 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) + iVar31;
    if (iVar9 <= iVar16) {
      iVar9 = iVar16;
    }
    if ((iVar25 != 0) && (iVar25 < iVar9)) {
      uVar21 = 0;
      lVar27 = 0;
      uVar14 = 4;
      *(long *)(unaff_x29 + -0x58) = lVar11;
      iVar16 = iVar25;
      while( true ) {
        auVar32._8_8_ = uVar14;
        auVar32._0_8_ = puVar13;
        auVar7 = auVar32._0_12_;
        if ((int)uVar14 <= (int)uVar21) {
          uVar12 = RootMotion_FinalIK_Finger___ctor
                             (*(undefined8 *)PTR_DAT_07d87068,(int)uVar14 << 1);
          auVar32 = FUN_0531f3bc(uVar12,*(undefined8 *)PTR_DAT_07dae4e0);
          FUN_0531eed0(unaff_x29 + -0x18,auVar32._0_8_,auVar32._8_8_,*(undefined8 *)PTR_DAT_07dae4d0
                      );
          auVar32 = FUN_0531f3bc(uVar12,*(undefined8 *)PTR_DAT_07dae4e0);
          auVar7 = auVar32._0_12_;
          lVar11 = *(long *)(unaff_x29 + -0x58);
          *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar32;
        }
        puVar13 = auVar7._0_8_;
        if (auVar7._8_4_ <= uVar21) goto LAB_06247214;
        *(int *)((long)puVar13 + (long)(int)uVar21 * 4) = iVar25;
        if ((int)lVar27 < iVar26 + -1) {
          lVar27 = (long)(int)lVar27 + 1;
          if (*(uint *)(lVar11 + 0x18) <= (uint)lVar27) goto LAB_06247214;
          iVar16 = *(int *)(lVar11 + lVar27 * 4 + 0x20);
        }
        if ((iVar16 == 0) || (iVar25 = iVar16 + iVar25, iVar9 <= iVar25)) break;
        uVar14 = (ulong)*(uint *)(unaff_x29 + -0x10);
        uVar21 = uVar21 + 1;
      }
      unaff_x26 = *(long *)(unaff_x29 + -0x70);
    }
  }
  uVar14 = FUN_06251744(unaff_x26,0);
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar14 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar11 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_0825ba12 == '\0') {
        FUN_0373b518(PTR_DAT_07da5848);
        DAT_0825ba12 = '\x01';
      }
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x10) == 1) {
          uVar30 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar30) {
LAB_06247214:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            lVar27 = *(long *)(unaff_x22 + 8);
            uVar8 = FUN_060bb390(lVar11,0,0);
            *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
            *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
            goto LAB_06246670;
          }
        }
        FUN_060dc110(unaff_x22,lVar11,0);
        goto LAB_06246670;
      }
    }
LAB_06247218:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
LAB_06246670:
  uVar12 = FUN_04077750(*(undefined8 *)(unaff_x29 + -0x28),unaff_x20,*(undefined8 *)PTR_DAT_07da5228
                       );
  *(undefined8 *)(unaff_x29 + -0x58) = uVar12;
  if (*(int *)(unaff_x29 + -0x38) < (int)uVar22) {
    psVar10 = *(short **)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
    *(uint *)(unaff_x29 + -0x8c) = uVar22 - 2;
    *(long *)(unaff_x29 + -0x88) = (long)(int)uVar22;
    do {
      uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
      iVar9 = *(int *)(unaff_x29 + -0x4c);
      uVar30 = (uint)uVar4;
      if ((iVar9 < 1) ||
         ((0x30 < uVar4 || ((1L << ((ulong)uVar30 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar11 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar11 = *(long *)(unaff_x29 + -0x48);
        uVar28 = *(uint *)(unaff_x29 + -0x28);
        iVar26 = iVar9 + 1;
        *(int *)(unaff_x29 + -0x3c) = iVar31 - iVar9;
        do {
          sVar29 = *psVar10;
          sVar5 = 0x30;
          if (sVar29 != 0) {
            psVar10 = psVar10 + 1;
            sVar5 = sVar29;
          }
          if (DAT_0825aded == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825aded = '\x01';
          }
          uVar23 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_06247214;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = sVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
          }
          else {
            FUN_060dbfe4(unaff_x22,sVar5,0);
          }
          if ((-1 < (int)uVar21) && (1 < iVar31 && (uVar28 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar21) goto LAB_06247214;
            if (iVar31 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar21 * 4) + 1) {
              if (lVar11 == 0) goto LAB_06247218;
              lVar27 = *(long *)(lVar11 + 0x40);
              if (DAT_0825ba12 == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825ba12 = '\x01';
              }
              if (lVar27 == 0) goto LAB_06247218;
              if (*(int *)(lVar27 + 0x10) == 1) {
                uVar28 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar28) goto LAB_06246844;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar28) goto LAB_06247214;
                lVar11 = *(long *)(unaff_x22 + 8);
                uVar8 = FUN_060bb390(lVar27,0,0);
                *(undefined2 *)(lVar11 + (long)(int)uVar28 * 2) = uVar8;
                lVar11 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar28 + 1;
              }
              else {
LAB_06246844:
                FUN_060dc110(unaff_x22,lVar27,0);
              }
              uVar28 = *(uint *)(unaff_x29 + -0x28);
              uVar21 = uVar21 - 1;
            }
          }
          iVar26 = iVar26 + -1;
          iVar31 = iVar31 + -1;
        } while (1 < iVar26);
        iVar31 = *(int *)(unaff_x29 + -0x3c);
        iVar9 = 0;
      }
      uVar28 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar30 < 0x46) {
        switch(uVar4) {
        case 0x22:
        case 0x27:
          if ((int)uVar28 < (int)uVar22) {
            *(int *)(unaff_x29 + -0x3c) = iVar31;
            *(int *)(unaff_x29 + -0x4c) = iVar9;
            lVar11 = (ulong)uVar28 << 0x20;
            uVar23 = ~*(uint *)(unaff_x29 + -0x38);
            puVar19 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
            lVar27 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar28;
            while( true ) {
              uVar4 = *puVar19;
              if ((uVar4 == 0) || (uVar4 == uVar30)) break;
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
              lVar11 = lVar11 + 0x100000000;
              uVar23 = uVar23 - 1;
              lVar27 = lVar27 + -1;
              puVar19 = puVar19 + 1;
              if (lVar27 == 0) goto LAB_062470b4;
            }
            iVar9 = *(int *)(unaff_x29 + -0x4c);
            iVar31 = *(int *)(unaff_x29 + -0x3c);
            uVar28 = (*(short *)((lVar11 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar23;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar9 < 0) {
            iVar9 = iVar9 + 1;
            if (iVar31 <= *(int *)(unaff_x29 + -0x78)) {
LAB_06246d4c:
              sVar29 = 0x30;
              goto LAB_06246d50;
            }
          }
          else {
            sVar29 = *psVar10;
            if (sVar29 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < iVar31) goto LAB_06246d4c;
            }
            else {
              psVar10 = psVar10 + 1;
LAB_06246d50:
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar23 = *(uint *)(unaff_x22 + 0x18);
              uVar30 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_06247214;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = sVar29;
                *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
              }
              else {
                FUN_060dbfe4(unaff_x22,sVar29,0);
              }
              if ((-1 < (int)uVar21) && (1 < iVar31 && (uVar30 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar21) goto LAB_06247214;
                if (iVar31 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar21 * 4) + 1) {
                  if (lVar11 == 0) goto LAB_06247218;
                  lVar11 = *(long *)(lVar11 + 0x40);
                  if (DAT_0825ba12 == '\0') {
                    FUN_0373b518(PTR_DAT_07da5848);
                    DAT_0825ba12 = '\x01';
                  }
                  if (lVar11 == 0) goto LAB_06247218;
                  if (*(int *)(lVar11 + 0x10) == 1) {
                    uVar30 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar30) goto LAB_06246e68;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar30) goto LAB_06247214;
                    lVar27 = *(long *)(unaff_x22 + 8);
                    uVar8 = FUN_060bb390(lVar11,0,0);
                    *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
                    *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                  }
                  else {
LAB_06246e68:
                    FUN_060dc110(unaff_x22,lVar11,0);
                  }
                  uVar21 = uVar21 - 1;
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
          uVar23 = *(uint *)(unaff_x22 + 0x18);
          uVar30 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar30 <= (int)uVar23) goto LAB_06246a68;
LAB_06246b00:
          if (uVar30 <= uVar23) goto LAB_06247214;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
          break;
        case 0x25:
          if (lVar11 == 0) goto LAB_06247218;
          lVar11 = *(long *)(lVar11 + 0x90);
joined_r0x06246994:
          if (DAT_0825ba12 == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825ba12 = '\x01';
          }
          if (lVar11 == 0) goto LAB_06247218;
          if (*(int *)(lVar11 + 0x10) == 1) {
            uVar30 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar30 < *(uint *)(unaff_x22 + 0x10)) {
                lVar27 = *(long *)(unaff_x22 + 8);
                uVar8 = FUN_060bb390(lVar11,0,0);
                *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
                *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                break;
              }
              goto LAB_06247214;
            }
          }
          FUN_060dc110(unaff_x22,lVar11,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && iVar31 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar10 != 0)))) {
              if (lVar11 == 0) goto LAB_06247218;
              lVar11 = *(long *)(lVar11 + 0x38);
              if (DAT_0825ba12 == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825ba12 = '\x01';
              }
              if (lVar11 == 0) goto LAB_06247218;
              if (*(int *)(lVar11 + 0x10) == 1) {
                uVar30 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar30 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar27 = *(long *)(unaff_x22 + 8);
                    uVar8 = FUN_060bb390(lVar11,0,0);
                    *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
                    *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                    iVar31 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_06247214;
                }
              }
              FUN_060dc110(unaff_x22,lVar11,0);
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
            uVar23 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_06247214;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
            }
            else {
              FUN_060dbfe4(unaff_x22,uVar30,0);
            }
            if ((int)uVar28 < (int)uVar22) {
              sVar29 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
              if ((sVar29 == 0x2d) || (sVar29 == 0x2b)) {
                if (DAT_0825aded == '\0') {
                  FUN_0373b518(PTR_DAT_07da5848);
                  DAT_0825aded = '\x01';
                }
                uVar30 = *(uint *)(unaff_x22 + 0x18);
                uVar28 = iVar26 + 2;
                if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar30) goto LAB_06247214;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar30 * 2) = sVar29;
                  *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                }
                else {
                  FUN_060dbfe4(unaff_x22,sVar29,0);
                }
              }
              if ((int)uVar28 < (int)uVar22) {
                psVar24 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
                lVar11 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar28;
                while (*psVar24 == 0x30) {
                  if (DAT_0825aded == '\0') {
                    FUN_0373b518(PTR_DAT_07da5848);
                    DAT_0825aded = '\x01';
                  }
                  uVar30 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar30) goto LAB_06247214;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar30 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                  }
                  else {
                    FUN_060dbfe4(unaff_x22,0x30,0);
                  }
                  uVar28 = uVar28 + 1;
                  lVar11 = lVar11 + -1;
                  psVar24 = psVar24 + 1;
                  if (lVar11 == 0) goto LAB_062470b4;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            iVar26 = *(int *)(unaff_x29 + -0x38);
            if (((int)uVar28 < (int)uVar22) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2) == 0x30)) {
              uVar18 = 0;
              iVar25 = 1;
              goto LAB_06246f80;
            }
            iVar25 = iVar26 + 2;
            if ((int)uVar22 <= iVar25) {
LAB_06246fc0:
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar30 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar30) goto LAB_06247214;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar30 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
              }
              else {
                FUN_060dbfe4(unaff_x22,uVar4,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar29 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
            if (sVar29 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar25 * 2) != 0x30)
              goto LAB_06246fc0;
              iVar25 = 0;
              uVar18 = 0;
            }
            else {
              if ((sVar29 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar25 * 2) != 0x30))
              goto LAB_06246fc0;
              iVar25 = 0;
              uVar18 = 1;
            }
LAB_06246f80:
            uVar30 = iVar26 + 2;
            iVar16 = iVar25;
            uVar28 = uVar30;
            if ((int)uVar30 < (int)uVar22) {
              iVar15 = *(int *)(unaff_x29 + -0x8c) + iVar25;
              do {
                iVar16 = iVar25;
                uVar28 = uVar30;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar30 * 2) != 0x30) break;
                uVar30 = uVar30 + 1;
                iVar25 = iVar25 + 1;
                iVar16 = iVar15 - iVar26;
                uVar28 = uVar22;
              } while (uVar22 != uVar30);
            }
            if (9 < iVar16) {
              iVar16 = 10;
            }
            if (**(short **)(unaff_x29 + -0x30) == 0) {
              iVar26 = 0;
            }
            else {
              iVar26 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
            }
            if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar18;
              thunk_FUN_03798b70();
              uVar18 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_0624c068(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar26,uVar4,iVar16,uVar18);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar4 != 0x5c) {
          if (uVar4 == 0x65) goto LAB_06246a98;
          if (uVar4 != 0x2030) goto switchD_062468ac_caseD_24;
          if (lVar11 != 0) {
            lVar11 = *(long *)(lVar11 + 0x98);
            goto joined_r0x06246994;
          }
          goto LAB_06247218;
        }
        if (((int)uVar22 <= (int)uVar28) ||
           (uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2), uVar4 == 0))
        goto switchD_062468ac_caseD_2c;
        if (DAT_0825aded == '\0') {
          FUN_0373b518(PTR_DAT_07da5848);
          DAT_0825aded = '\x01';
        }
        uVar23 = *(uint *)(unaff_x22 + 0x18);
        uVar30 = *(uint *)(unaff_x22 + 0x10);
        uVar28 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar23 < (int)uVar30) goto LAB_06246b00;
LAB_06246a68:
        FUN_060dbfe4(unaff_x22,uVar4,0);
      }
switchD_062468ac_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar9;
      *(uint *)(unaff_x29 + -0x38) = uVar28;
    } while ((int)uVar28 < (int)uVar22);
  }
LAB_062470b4:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


