/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 0500a3ec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
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
  int in_w8;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  ushort *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined8 unaff_x20;
  uint uVar22;
  undefined8 unaff_x21;
  short *psVar23;
  long unaff_x22;
  short *psVar24;
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
  
  if (in_w8 != 0) {
    FUN_05015978();
  }
  *(undefined8 *)(unaff_x29 + -0x48) = unaff_x21;
  if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  iVar9 = FUN_05010150(*(undefined8 *)(unaff_x29 + -0x28));
  uVar21 = (uint)unaff_x20;
  *(undefined4 *)(unaff_x29 + -0x38) = 0;
  do {
    iVar26 = iVar9;
    lVar10 = FUN_034850a4(*(undefined8 *)(unaff_x29 + -0x28));
    if (iVar26 < (int)uVar21) {
      *(undefined4 *)(unaff_x29 + -0x1c) = 0;
      iVar31 = 0;
      bVar6 = false;
      uVar20 = 0;
      iVar9 = 0;
      iVar25 = 0x7fffffff;
      iVar15 = -1;
      iVar14 = -1;
      iVar19 = iVar26;
      do {
        uVar4 = *(ushort *)(lVar10 + (long)iVar19 * 2);
        if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
        iVar16 = iVar19 + 1;
        if (uVar4 < 0x46) {
          switch(uVar4) {
          case 0x22:
          case 0x27:
            lVar27 = (long)iVar16;
            lVar1 = lVar27;
            if ((long)iVar16 <= (long)(int)uVar21) {
              lVar1 = (long)(int)uVar21;
            }
            puVar18 = (ushort *)(lVar10 + (long)iVar16 * 2);
            do {
              if (lVar1 == lVar27) {
                iVar16 = (int)lVar1;
                goto switchD_0500a4c0_caseD_24;
              }
              uVar3 = *puVar18;
              if (uVar3 == 0) break;
              lVar27 = lVar27 + 1;
              puVar18 = puVar18 + 1;
            } while (uVar3 != uVar4);
            iVar16 = (int)lVar27;
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
            if ((iVar15 < 0) && (0 < *(int *)(unaff_x29 + -0x1c))) {
              if (iVar14 < 0) {
                *(undefined4 *)(unaff_x29 + -0x38) = 1;
                iVar14 = *(int *)(unaff_x29 + -0x1c);
              }
              else {
                iVar2 = *(int *)(unaff_x29 + -0x1c);
                uVar20 = uVar20 | iVar14 != iVar2;
                iVar19 = 1;
                if (iVar14 == iVar2) {
                  iVar19 = *(int *)(unaff_x29 + -0x38) + 1;
                }
                *(int *)(unaff_x29 + -0x38) = iVar19;
                iVar14 = iVar2;
              }
            }
            break;
          case 0x2e:
            if (iVar15 < 0) {
              iVar15 = *(int *)(unaff_x29 + -0x1c);
            }
            break;
          case 0x30:
            iVar31 = *(int *)(unaff_x29 + -0x1c) + 1;
            iVar19 = *(int *)(unaff_x29 + -0x1c);
            if (iVar25 != 0x7fffffff) {
              iVar19 = iVar25;
            }
            *(int *)(unaff_x29 + -0x1c) = iVar31;
            iVar25 = iVar19;
            break;
          default:
            if (uVar4 == 0x45) {
LAB_0500a544:
              if (((iVar16 < (int)uVar21) && (*(short *)(lVar10 + (long)iVar16 * 2) == 0x30)) ||
                 ((iVar19 + 2 < (int)uVar21 &&
                  (((sVar29 = *(short *)(lVar10 + (long)iVar16 * 2), sVar29 == 0x2d ||
                    (sVar29 == 0x2b)) && (*(short *)(lVar10 + (long)(iVar19 + 2) * 2) == 0x30))))))
              {
                do {
                  iVar16 = iVar16 + 1;
                  if ((int)uVar21 <= iVar16) {
                    bVar6 = true;
                    goto LAB_0500a66c;
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
          if (uVar4 == 0x65) goto LAB_0500a544;
          if (uVar4 == 0x2030) {
            iVar9 = iVar9 + 3;
          }
        }
switchD_0500a4c0_caseD_24:
        iVar19 = iVar16;
      } while (iVar19 < (int)uVar21);
LAB_0500a66c:
      if (iVar15 < 0) {
        iVar15 = *(int *)(unaff_x29 + -0x1c);
      }
      *(int *)(unaff_x29 + -0x34) = iVar15;
      if (-1 < iVar14) {
        if (iVar14 == iVar15) {
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
      iVar31 = 0;
      *(undefined4 *)(unaff_x29 + -0x1c) = 0;
      iVar9 = 0;
      uVar20 = 0;
      iVar25 = 0x7fffffff;
    }
    *(uint *)(unaff_x29 + -0x3c) = uVar20;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      *(int *)(unaff_x29 + -0x38) = iVar26;
      FUN_05015988();
      *(undefined4 *)(unaff_x26 + 4) = 0;
      goto LAB_0500a750;
    }
    *(int *)(unaff_x26 + 4) = *(int *)(unaff_x26 + 4) + iVar9;
    if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0500edf0();
    if (**(short **)(unaff_x29 + -0x30) != 0) break;
    if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    iVar9 = FUN_05010150(*(undefined8 *)(unaff_x29 + -0x28));
  } while (iVar9 != iVar26);
  *(int *)(unaff_x29 + -0x38) = iVar26;
LAB_0500a750:
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
    lVar10 = *(long *)(unaff_x29 + -0x48);
    uVar20 = *(uint *)(unaff_x29 + -0x3c);
    uVar17 = 1;
    *(undefined4 *)(unaff_x29 + -0x4c) = 0;
    iVar31 = iVar26;
  }
  else {
    iVar31 = *(int *)(unaff_x26 + 4);
    lVar10 = *(long *)(unaff_x29 + -0x48);
    uVar20 = *(uint *)(unaff_x29 + -0x3c);
    uVar17 = 0;
    *(int *)(unaff_x29 + -0x4c) = iVar31 - iVar26;
    if (iVar31 - iVar26 == 0 || iVar31 < iVar26) {
      iVar31 = iVar26;
    }
  }
  uVar11 = DAT_01206b58;
  puVar12 = &uStack_10;
  uStack_10 = 0;
  uStack_8 = 0;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar12;
  *(long *)(unaff_x29 + -0x70) = unaff_x26;
  *(undefined8 *)(unaff_x29 + -0x10) = uVar11;
  *(int *)(unaff_x29 + -0x78) = iVar9;
  *(undefined4 *)(unaff_x29 + -0x5c) = uVar17;
  if ((uVar20 & 1) == 0) {
LAB_0500a800:
    uVar20 = 0xffffffff;
  }
  else {
    if ((lVar10 == 0) || (*(long *)(lVar10 + 0x40) == 0)) goto LAB_0500b44c;
    if (*(int *)(*(long *)(lVar10 + 0x40) + 0x10) < 1) goto LAB_0500a800;
    lVar10 = *(long *)(lVar10 + 0x10);
    if (lVar10 == 0) goto LAB_0500b44c;
    iVar26 = *(int *)(lVar10 + 0x18);
    if (iVar26 == 0) {
      iVar25 = 0;
    }
    else {
      iVar25 = *(int *)(lVar10 + 0x20);
    }
    uVar20 = 0xffffffff;
    iVar15 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) + iVar31;
    if (iVar9 <= iVar15) {
      iVar9 = iVar15;
    }
    if ((iVar25 != 0) && (iVar25 < iVar9)) {
      uVar20 = 0;
      lVar27 = 0;
      uVar13 = 4;
      *(long *)(unaff_x29 + -0x58) = lVar10;
      iVar15 = iVar25;
      while( true ) {
        auVar32._8_8_ = uVar13;
        auVar32._0_8_ = puVar12;
        auVar7 = auVar32._0_12_;
        if ((int)uVar13 <= (int)uVar20) {
          uVar11 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675ee10,(int)uVar13 << 1);
          auVar32 = FUN_041b4c48(uVar11,*(undefined8 *)PTR_DAT_0677a100);
          FUN_041b475c(unaff_x29 + -0x18,auVar32._0_8_,auVar32._8_8_,*(undefined8 *)PTR_DAT_0677a0f0
                      );
          auVar32 = FUN_041b4c48(uVar11,*(undefined8 *)PTR_DAT_0677a100);
          auVar7 = auVar32._0_12_;
          lVar10 = *(long *)(unaff_x29 + -0x58);
          *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar32;
        }
        puVar12 = auVar7._0_8_;
        if (auVar7._8_4_ <= uVar20) goto LAB_0500b448;
        *(int *)((long)puVar12 + (long)(int)uVar20 * 4) = iVar25;
        if ((int)lVar27 < iVar26 + -1) {
          lVar27 = (long)(int)lVar27 + 1;
          if (*(uint *)(lVar10 + 0x18) <= (uint)lVar27) goto LAB_0500b448;
          iVar15 = *(int *)(lVar10 + lVar27 * 4 + 0x20);
        }
        if ((iVar15 == 0) || (iVar25 = iVar15 + iVar25, iVar9 <= iVar25)) break;
        uVar13 = (ulong)*(uint *)(unaff_x29 + -0x10);
        uVar20 = uVar20 + 1;
      }
      unaff_x26 = *(long *)(unaff_x29 + -0x70);
    }
  }
  uVar13 = FUN_05015978(unaff_x26,0);
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar13 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar10 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_06b79233 == '\0') {
        FUN_02d6084c(PTR_DAT_067714a8);
        DAT_06b79233 = '\x01';
      }
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x10) == 1) {
          uVar30 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar30) {
LAB_0500b448:
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            lVar27 = *(long *)(unaff_x22 + 8);
            uVar8 = FUN_04e87a5c(lVar10,0,0);
            *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
            *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
            goto LAB_0500a8a4;
          }
        }
        FUN_04ea5974(unaff_x22,lVar10,0);
        goto LAB_0500a8a4;
      }
    }
LAB_0500b44c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
LAB_0500a8a4:
  uVar11 = FUN_034850a4(*(undefined8 *)(unaff_x29 + -0x28),unaff_x20,*(undefined8 *)PTR_DAT_06770f70
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
      uVar30 = (uint)uVar4;
      if ((iVar9 < 1) ||
         ((0x30 < uVar4 || ((1L << ((ulong)uVar30 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar10 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar10 = *(long *)(unaff_x29 + -0x48);
        uVar28 = *(uint *)(unaff_x29 + -0x28);
        iVar26 = iVar9 + 1;
        *(int *)(unaff_x29 + -0x3c) = iVar31 - iVar9;
        do {
          sVar29 = *psVar24;
          sVar5 = 0x30;
          if (sVar29 != 0) {
            psVar24 = psVar24 + 1;
            sVar5 = sVar29;
          }
          if (DAT_06b78666 == '\0') {
            FUN_02d6084c(PTR_DAT_067714a8);
            DAT_06b78666 = '\x01';
          }
          uVar22 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_0500b448;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = sVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
          }
          else {
            FUN_04ea5848(unaff_x22,sVar5,0);
          }
          if ((-1 < (int)uVar20) && (1 < iVar31 && (uVar28 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar20) goto LAB_0500b448;
            if (iVar31 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar20 * 4) + 1) {
              if (lVar10 == 0) goto LAB_0500b44c;
              lVar27 = *(long *)(lVar10 + 0x40);
              if (DAT_06b79233 == '\0') {
                FUN_02d6084c(PTR_DAT_067714a8);
                DAT_06b79233 = '\x01';
              }
              if (lVar27 == 0) goto LAB_0500b44c;
              if (*(int *)(lVar27 + 0x10) == 1) {
                uVar28 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar28) goto LAB_0500aa78;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar28) goto LAB_0500b448;
                lVar10 = *(long *)(unaff_x22 + 8);
                uVar8 = FUN_04e87a5c(lVar27,0,0);
                *(undefined2 *)(lVar10 + (long)(int)uVar28 * 2) = uVar8;
                lVar10 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar28 + 1;
              }
              else {
LAB_0500aa78:
                FUN_04ea5974(unaff_x22,lVar27,0);
              }
              uVar28 = *(uint *)(unaff_x29 + -0x28);
              uVar20 = uVar20 - 1;
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
          if ((int)uVar28 < (int)uVar21) {
            *(int *)(unaff_x29 + -0x3c) = iVar31;
            *(int *)(unaff_x29 + -0x4c) = iVar9;
            lVar10 = (ulong)uVar28 << 0x20;
            uVar22 = ~*(uint *)(unaff_x29 + -0x38);
            puVar18 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
            lVar27 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar28;
            while( true ) {
              uVar4 = *puVar18;
              if ((uVar4 == 0) || (uVar4 == uVar30)) break;
              if (DAT_06b78666 == '\0') {
                FUN_02d6084c(PTR_DAT_067714a8);
                DAT_06b78666 = '\x01';
              }
              uVar28 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar28 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar28) goto LAB_0500b448;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar28 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar28 + 1;
              }
              else {
                FUN_04ea5848(unaff_x22,uVar4,0);
              }
              lVar10 = lVar10 + 0x100000000;
              uVar22 = uVar22 - 1;
              lVar27 = lVar27 + -1;
              puVar18 = puVar18 + 1;
              if (lVar27 == 0) goto LAB_0500b2e8;
            }
            iVar9 = *(int *)(unaff_x29 + -0x4c);
            iVar31 = *(int *)(unaff_x29 + -0x3c);
            uVar28 = (*(short *)((lVar10 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar22;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar9 < 0) {
            iVar9 = iVar9 + 1;
            if (iVar31 <= *(int *)(unaff_x29 + -0x78)) {
LAB_0500af80:
              sVar29 = 0x30;
              goto LAB_0500af84;
            }
          }
          else {
            sVar29 = *psVar24;
            if (sVar29 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < iVar31) goto LAB_0500af80;
            }
            else {
              psVar24 = psVar24 + 1;
LAB_0500af84:
              if (DAT_06b78666 == '\0') {
                FUN_02d6084c(PTR_DAT_067714a8);
                DAT_06b78666 = '\x01';
              }
              uVar22 = *(uint *)(unaff_x22 + 0x18);
              uVar30 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_0500b448;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = sVar29;
                *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
              }
              else {
                FUN_04ea5848(unaff_x22,sVar29,0);
              }
              if ((-1 < (int)uVar20) && (1 < iVar31 && (uVar30 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar20) goto LAB_0500b448;
                if (iVar31 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar20 * 4) + 1) {
                  if (lVar10 == 0) goto LAB_0500b44c;
                  lVar10 = *(long *)(lVar10 + 0x40);
                  if (DAT_06b79233 == '\0') {
                    FUN_02d6084c(PTR_DAT_067714a8);
                    DAT_06b79233 = '\x01';
                  }
                  if (lVar10 == 0) goto LAB_0500b44c;
                  if (*(int *)(lVar10 + 0x10) == 1) {
                    uVar30 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar30) goto LAB_0500b09c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar30) goto LAB_0500b448;
                    lVar27 = *(long *)(unaff_x22 + 8);
                    uVar8 = FUN_04e87a5c(lVar10,0,0);
                    *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
                    *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                  }
                  else {
LAB_0500b09c:
                    FUN_04ea5974(unaff_x22,lVar10,0);
                  }
                  uVar20 = uVar20 - 1;
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
switchD_0500aae0_caseD_24:
          if (DAT_06b78666 == '\0') {
            FUN_02d6084c(PTR_DAT_067714a8);
            DAT_06b78666 = '\x01';
          }
          uVar22 = *(uint *)(unaff_x22 + 0x18);
          uVar30 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar30 <= (int)uVar22) goto LAB_0500ac9c;
LAB_0500ad34:
          if (uVar30 <= uVar22) goto LAB_0500b448;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
          break;
        case 0x25:
          if (lVar10 == 0) goto LAB_0500b44c;
          lVar10 = *(long *)(lVar10 + 0x90);
joined_r0x0500abc8:
          if (DAT_06b79233 == '\0') {
            FUN_02d6084c(PTR_DAT_067714a8);
            DAT_06b79233 = '\x01';
          }
          if (lVar10 == 0) goto LAB_0500b44c;
          if (*(int *)(lVar10 + 0x10) == 1) {
            uVar30 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar30 < *(uint *)(unaff_x22 + 0x10)) {
                lVar27 = *(long *)(unaff_x22 + 8);
                uVar8 = FUN_04e87a5c(lVar10,0,0);
                *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
                *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                break;
              }
              goto LAB_0500b448;
            }
          }
          FUN_04ea5974(unaff_x22,lVar10,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && iVar31 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar24 != 0)))) {
              if (lVar10 == 0) goto LAB_0500b44c;
              lVar10 = *(long *)(lVar10 + 0x38);
              if (DAT_06b79233 == '\0') {
                FUN_02d6084c(PTR_DAT_067714a8);
                DAT_06b79233 = '\x01';
              }
              if (lVar10 == 0) goto LAB_0500b44c;
              if (*(int *)(lVar10 + 0x10) == 1) {
                uVar30 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar30 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar27 = *(long *)(unaff_x22 + 8);
                    uVar8 = FUN_04e87a5c(lVar10,0,0);
                    *(undefined2 *)(lVar27 + (long)(int)uVar30 * 2) = uVar8;
                    *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                    iVar31 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_0500b448;
                }
              }
              FUN_04ea5974(unaff_x22,lVar10,0);
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
          if (uVar4 != 0x45) goto switchD_0500aae0_caseD_24;
LAB_0500accc:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar26 = *(int *)(unaff_x29 + -0x38);
            if (DAT_06b78666 == '\0') {
              FUN_02d6084c(PTR_DAT_067714a8);
              DAT_06b78666 = '\x01';
            }
            uVar22 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_0500b448;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
            }
            else {
              FUN_04ea5848(unaff_x22,uVar30,0);
            }
            if ((int)uVar28 < (int)uVar21) {
              sVar29 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
              if ((sVar29 == 0x2d) || (sVar29 == 0x2b)) {
                if (DAT_06b78666 == '\0') {
                  FUN_02d6084c(PTR_DAT_067714a8);
                  DAT_06b78666 = '\x01';
                }
                uVar30 = *(uint *)(unaff_x22 + 0x18);
                uVar28 = iVar26 + 2;
                if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar30) goto LAB_0500b448;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar30 * 2) = sVar29;
                  *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                }
                else {
                  FUN_04ea5848(unaff_x22,sVar29,0);
                }
              }
              if ((int)uVar28 < (int)uVar21) {
                psVar23 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
                lVar10 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar28;
                while (*psVar23 == 0x30) {
                  if (DAT_06b78666 == '\0') {
                    FUN_02d6084c(PTR_DAT_067714a8);
                    DAT_06b78666 = '\x01';
                  }
                  uVar30 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar30) goto LAB_0500b448;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar30 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
                  }
                  else {
                    FUN_04ea5848(unaff_x22,0x30,0);
                  }
                  uVar28 = uVar28 + 1;
                  lVar10 = lVar10 + -1;
                  psVar23 = psVar23 + 1;
                  if (lVar10 == 0) goto LAB_0500b2e8;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            iVar26 = *(int *)(unaff_x29 + -0x38);
            if (((int)uVar28 < (int)uVar21) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2) == 0x30)) {
              uVar17 = 0;
              iVar25 = 1;
              goto LAB_0500b1b4;
            }
            iVar25 = iVar26 + 2;
            if ((int)uVar21 <= iVar25) {
LAB_0500b1f4:
              if (DAT_06b78666 == '\0') {
                FUN_02d6084c(PTR_DAT_067714a8);
                DAT_06b78666 = '\x01';
              }
              uVar30 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar30 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar30) goto LAB_0500b448;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar30 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar30 + 1;
              }
              else {
                FUN_04ea5848(unaff_x22,uVar4,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar29 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2);
            if (sVar29 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar25 * 2) != 0x30)
              goto LAB_0500b1f4;
              iVar25 = 0;
              uVar17 = 0;
            }
            else {
              if ((sVar29 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar25 * 2) != 0x30))
              goto LAB_0500b1f4;
              iVar25 = 0;
              uVar17 = 1;
            }
LAB_0500b1b4:
            uVar30 = iVar26 + 2;
            iVar15 = iVar25;
            uVar28 = uVar30;
            if ((int)uVar30 < (int)uVar21) {
              iVar14 = *(int *)(unaff_x29 + -0x8c) + iVar25;
              do {
                iVar15 = iVar25;
                uVar28 = uVar30;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar30 * 2) != 0x30) break;
                uVar30 = uVar30 + 1;
                iVar25 = iVar25 + 1;
                iVar15 = iVar14 - iVar26;
                uVar28 = uVar21;
              } while (uVar21 != uVar30);
            }
            if (9 < iVar15) {
              iVar15 = 10;
            }
            if (**(short **)(unaff_x29 + -0x30) == 0) {
              iVar26 = 0;
            }
            else {
              iVar26 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
            }
            if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar17;
              thunk_FUN_02dbd7b4();
              uVar17 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_0501029c(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar26,uVar4,iVar15,uVar17);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar4 != 0x5c) {
          if (uVar4 == 0x65) goto LAB_0500accc;
          if (uVar4 != 0x2030) goto switchD_0500aae0_caseD_24;
          if (lVar10 != 0) {
            lVar10 = *(long *)(lVar10 + 0x98);
            goto joined_r0x0500abc8;
          }
          goto LAB_0500b44c;
        }
        if (((int)uVar21 <= (int)uVar28) ||
           (uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar28 * 2), uVar4 == 0))
        goto switchD_0500aae0_caseD_2c;
        if (DAT_06b78666 == '\0') {
          FUN_02d6084c(PTR_DAT_067714a8);
          DAT_06b78666 = '\x01';
        }
        uVar22 = *(uint *)(unaff_x22 + 0x18);
        uVar30 = *(uint *)(unaff_x22 + 0x10);
        uVar28 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar22 < (int)uVar30) goto LAB_0500ad34;
LAB_0500ac9c:
        FUN_04ea5848(unaff_x22,uVar4,0);
      }
switchD_0500aae0_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar9;
      *(uint *)(unaff_x29 + -0x38) = uVar28;
    } while ((int)uVar28 < (int)uVar21);
  }
LAB_0500b2e8:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


