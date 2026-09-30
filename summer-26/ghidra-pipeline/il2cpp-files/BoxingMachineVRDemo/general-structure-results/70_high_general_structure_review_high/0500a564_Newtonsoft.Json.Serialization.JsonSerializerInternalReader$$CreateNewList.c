/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 0500a564
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList(long param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  undefined1 auVar4 [12];
  undefined2 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int in_w8;
  int in_w9;
  int in_w10;
  int iVar10;
  int in_w11;
  undefined4 uVar11;
  uint uVar12;
  int in_w12;
  long lVar13;
  undefined4 in_w16;
  byte *in_x17;
  uint unaff_w19;
  uint uVar14;
  undefined8 unaff_x20;
  int unaff_w21;
  uint uVar15;
  short *psVar16;
  long unaff_x22;
  short *psVar17;
  int unaff_w24;
  int iVar18;
  long lVar19;
  uint uVar20;
  short sVar21;
  uint uVar22;
  long unaff_x26;
  int iVar23;
  int unaff_w28;
  int iVar24;
  ushort *puVar25;
  long unaff_x29;
  undefined1 auVar26 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
code_r0x0500a564:
  sVar21 = *(short *)(param_1 + (long)in_w11 * 2);
  uVar14 = (uint)unaff_x20;
  if ((sVar21 != 0x2d) && (sVar21 != 0x2b)) goto switchD_0500a4c0_caseD_24;
  if (*(short *)(param_1 + (long)in_w12 * 2) != 0x30) goto switchD_0500a4c0_caseD_24;
LAB_0500a584:
  do {
    in_w11 = in_w11 + 1;
    if ((int)uVar14 <= in_w11) {
      unaff_w19 = 1;
      goto LAB_0500a66c;
    }
  } while (*(short *)(param_1 + (long)in_w11 * 2) == 0x30);
  unaff_w19 = 1;
switchD_0500a4c0_caseD_24:
  iVar6 = in_w11;
  if (iVar6 < (int)uVar14) goto LAB_0500a48c;
LAB_0500a66c:
  if (in_w9 < 0) {
    in_w9 = *(int *)(unaff_x29 + -0x1c);
  }
  *(int *)(unaff_x29 + -0x34) = in_w9;
  if (-1 < in_w10) {
    if (in_w10 == in_w9) {
      in_w8 = *(int *)(unaff_x29 + -0x38) * -3 + in_w8;
    }
    else {
      in_w16 = 1;
    }
  }
  do {
    *(undefined4 *)(unaff_x29 + -0x3c) = in_w16;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      *(int *)(unaff_x29 + -0x38) = unaff_w21;
      FUN_05015988();
      *(undefined4 *)(unaff_x26 + 4) = 0;
LAB_0500a750:
      iVar18 = *(int *)(unaff_x29 + -0x34);
      iVar6 = iVar18 - unaff_w24;
      if (iVar6 == 0 || iVar18 < unaff_w24) {
        iVar6 = 0;
      }
      iVar24 = iVar18 - unaff_w28;
      if (unaff_w28 <= iVar18) {
        iVar24 = 0;
      }
      *(int *)(unaff_x29 + -0x74) = iVar24;
      if ((unaff_w19 & 1) == 0) {
        iVar24 = *(int *)(unaff_x26 + 4);
        lVar13 = *(long *)(unaff_x29 + -0x48);
        uVar12 = *(uint *)(unaff_x29 + -0x3c);
        uVar11 = 0;
        *(int *)(unaff_x29 + -0x4c) = iVar24 - iVar18;
        if (iVar24 - iVar18 == 0 || iVar24 < iVar18) {
          iVar24 = iVar18;
        }
      }
      else {
        lVar13 = *(long *)(unaff_x29 + -0x48);
        uVar12 = *(uint *)(unaff_x29 + -0x3c);
        uVar11 = 1;
        *(undefined4 *)(unaff_x29 + -0x4c) = 0;
        iVar24 = iVar18;
      }
      uVar7 = DAT_01206b58;
      puVar8 = &uStack_10;
      uStack_10 = 0;
      uStack_8 = 0;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      *(long *)(unaff_x29 + -0x70) = unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar7;
      *(int *)(unaff_x29 + -0x78) = iVar6;
      *(undefined4 *)(unaff_x29 + -0x5c) = uVar11;
      if ((uVar12 & 1) != 0) {
        if ((lVar13 == 0) || (*(long *)(lVar13 + 0x40) == 0)) goto LAB_0500b44c;
        if (0 < *(int *)(*(long *)(lVar13 + 0x40) + 0x10)) {
          lVar13 = *(long *)(lVar13 + 0x10);
          if (lVar13 == 0) goto LAB_0500b44c;
          iVar18 = *(int *)(lVar13 + 0x18);
          if (iVar18 == 0) {
            iVar23 = 0;
          }
          else {
            iVar23 = *(int *)(lVar13 + 0x20);
          }
          uVar12 = 0xffffffff;
          iVar10 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) +
                   iVar24;
          if (iVar6 <= iVar10) {
            iVar6 = iVar10;
          }
          if ((iVar23 == 0) || (iVar6 <= iVar23)) goto LAB_0500a804;
          uVar12 = 0;
          lVar19 = 0;
          uVar9 = 4;
          *(long *)(unaff_x29 + -0x58) = lVar13;
          iVar10 = iVar23;
          break;
        }
      }
      uVar12 = 0xffffffff;
      goto LAB_0500a804;
    }
    *(int *)(unaff_x26 + 4) = *(int *)(unaff_x26 + 4) + in_w8;
    if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_0500edf0();
    if (**(short **)(unaff_x29 + -0x30) != 0) {
LAB_0500a730:
      *(int *)(unaff_x29 + -0x38) = unaff_w21;
      goto LAB_0500a750;
    }
    if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    iVar6 = FUN_05010150(*(undefined8 *)(unaff_x29 + -0x28));
    if (iVar6 == unaff_w21) goto LAB_0500a730;
    param_1 = FUN_034850a4(*(undefined8 *)(unaff_x29 + -0x28));
    unaff_w21 = iVar6;
    if (iVar6 < (int)uVar14) goto code_r0x0500a460;
    *(undefined4 *)(unaff_x29 + -0x34) = 0;
    unaff_w19 = 0;
    unaff_w28 = 0;
    *(undefined4 *)(unaff_x29 + -0x1c) = 0;
    in_w8 = 0;
    in_w16 = 0;
    unaff_w24 = 0x7fffffff;
  } while( true );
LAB_0500b35c:
  auVar26._8_8_ = uVar9;
  auVar26._0_8_ = puVar8;
  auVar4 = auVar26._0_12_;
  if ((int)uVar9 <= (int)uVar12) {
    uVar7 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675ee10,(int)uVar9 << 1);
    auVar26 = FUN_041b4c48(uVar7,*(undefined8 *)PTR_DAT_0677a100);
    FUN_041b475c(unaff_x29 + -0x18,auVar26._0_8_,auVar26._8_8_,*(undefined8 *)PTR_DAT_0677a0f0);
    auVar26 = FUN_041b4c48(uVar7,*(undefined8 *)PTR_DAT_0677a100);
    auVar4 = auVar26._0_12_;
    lVar13 = *(long *)(unaff_x29 + -0x58);
    *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar26;
  }
  puVar8 = auVar4._0_8_;
  if (auVar4._8_4_ <= uVar12) goto LAB_0500b448;
  *(int *)((long)puVar8 + (long)(int)uVar12 * 4) = iVar23;
  if ((int)lVar19 < iVar18 + -1) {
    lVar19 = (long)(int)lVar19 + 1;
    if (*(uint *)(lVar13 + 0x18) <= (uint)lVar19) goto LAB_0500b448;
    iVar10 = *(int *)(lVar13 + lVar19 * 4 + 0x20);
  }
  if ((iVar10 == 0) || (iVar23 = iVar10 + iVar23, iVar6 <= iVar23)) goto LAB_0500b440;
  uVar9 = (ulong)*(uint *)(unaff_x29 + -0x10);
  uVar12 = uVar12 + 1;
  goto LAB_0500b35c;
code_r0x0500a460:
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  unaff_w28 = 0;
  unaff_w19 = 0;
  in_w16 = 0;
  in_w8 = 0;
  unaff_w24 = 0x7fffffff;
  in_w9 = -1;
  in_w10 = -1;
  in_x17 = &switchD_0500a4c0::switchdataD_012fda1c;
LAB_0500a48c:
  uVar2 = *(ushort *)(param_1 + (long)iVar6 * 2);
  if ((uVar2 == 0x3b) || (uVar2 == 0)) goto LAB_0500a66c;
  in_w11 = iVar6 + 1;
  uVar12 = (uint)uVar2;
  if (uVar2 < 0x46) {
    if (uVar12 - 0x22 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x0500a4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)in_x17[uVar12 - 0x22] * 4 + 0x500a4c4))();
      return;
    }
    if (uVar12 != 0x45) goto switchD_0500a4c0_caseD_24;
  }
  else {
    if (uVar2 == 0x5c) {
      if ((in_w11 < (int)uVar14) && (*(short *)(param_1 + (long)in_w11 * 2) != 0)) {
        in_w11 = iVar6 + 2;
      }
      goto switchD_0500a4c0_caseD_24;
    }
    if (uVar2 != 0x65) {
      if (uVar12 == 0x2030) {
        in_w8 = in_w8 + 3;
      }
      goto switchD_0500a4c0_caseD_24;
    }
  }
  if (((int)uVar14 <= in_w11) || (*(short *)(param_1 + (long)in_w11 * 2) != 0x30)) {
    in_w12 = iVar6 + 2;
    if (in_w12 < (int)uVar14) goto code_r0x0500a564;
    goto switchD_0500a4c0_caseD_24;
  }
  goto LAB_0500a584;
LAB_0500b440:
  unaff_x26 = *(long *)(unaff_x29 + -0x70);
LAB_0500a804:
  uVar9 = FUN_05015978(unaff_x26,0);
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar9 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar13 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_06b79233 == '\0') {
        FUN_02d6084c(PTR_DAT_067714a8);
        DAT_06b79233 = '\x01';
      }
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x10) == 1) {
          uVar22 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar22) {
LAB_0500b448:
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
            lVar19 = *(long *)(unaff_x22 + 8);
            uVar5 = FUN_04e87a5c(lVar13,0,0);
            *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
            goto LAB_0500a8a4;
          }
        }
        FUN_04ea5974(unaff_x22,lVar13,0);
        goto LAB_0500a8a4;
      }
    }
LAB_0500b44c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
LAB_0500a8a4:
  uVar7 = FUN_034850a4(*(undefined8 *)(unaff_x29 + -0x28),unaff_x20,*(undefined8 *)PTR_DAT_06770f70)
  ;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar7;
  if (*(int *)(unaff_x29 + -0x38) < (int)uVar14) {
    psVar17 = *(short **)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
    *(uint *)(unaff_x29 + -0x8c) = uVar14 - 2;
    *(long *)(unaff_x29 + -0x88) = (long)(int)uVar14;
    do {
      uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      if ((uVar2 == 0x3b) || (uVar2 == 0)) break;
      iVar6 = *(int *)(unaff_x29 + -0x4c);
      uVar22 = (uint)uVar2;
      if ((iVar6 < 1) ||
         ((0x30 < uVar2 || ((1L << ((ulong)uVar22 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar13 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar13 = *(long *)(unaff_x29 + -0x48);
        uVar20 = *(uint *)(unaff_x29 + -0x28);
        iVar18 = iVar6 + 1;
        *(int *)(unaff_x29 + -0x3c) = iVar24 - iVar6;
        do {
          sVar21 = *psVar17;
          sVar3 = 0x30;
          if (sVar21 != 0) {
            psVar17 = psVar17 + 1;
            sVar3 = sVar21;
          }
          if (DAT_06b78666 == '\0') {
            FUN_02d6084c(PTR_DAT_067714a8);
            DAT_06b78666 = '\x01';
          }
          uVar15 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_0500b448;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar3;
            *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
          }
          else {
            FUN_04ea5848(unaff_x22,sVar3,0);
          }
          if ((-1 < (int)uVar12) && (1 < iVar24 && (uVar20 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar12) goto LAB_0500b448;
            if (iVar24 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar12 * 4) + 1) {
              if (lVar13 == 0) goto LAB_0500b44c;
              lVar19 = *(long *)(lVar13 + 0x40);
              if (DAT_06b79233 == '\0') {
                FUN_02d6084c(PTR_DAT_067714a8);
                DAT_06b79233 = '\x01';
              }
              if (lVar19 == 0) goto LAB_0500b44c;
              if (*(int *)(lVar19 + 0x10) == 1) {
                uVar20 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_0500aa78;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_0500b448;
                lVar13 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_04e87a5c(lVar19,0,0);
                *(undefined2 *)(lVar13 + (long)(int)uVar20 * 2) = uVar5;
                lVar13 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
              }
              else {
LAB_0500aa78:
                FUN_04ea5974(unaff_x22,lVar19,0);
              }
              uVar20 = *(uint *)(unaff_x29 + -0x28);
              uVar12 = uVar12 - 1;
            }
          }
          iVar18 = iVar18 + -1;
          iVar24 = iVar24 + -1;
        } while (1 < iVar18);
        iVar24 = *(int *)(unaff_x29 + -0x3c);
        iVar6 = 0;
      }
      uVar20 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar22 < 0x46) {
        switch(uVar2) {
        case 0x22:
        case 0x27:
          if ((int)uVar20 < (int)uVar14) {
            *(int *)(unaff_x29 + -0x3c) = iVar24;
            *(int *)(unaff_x29 + -0x4c) = iVar6;
            lVar13 = (ulong)uVar20 << 0x20;
            uVar15 = ~*(uint *)(unaff_x29 + -0x38);
            puVar25 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
            lVar19 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar20;
            while( true ) {
              uVar2 = *puVar25;
              if ((uVar2 == 0) || (uVar2 == uVar22)) break;
              if (DAT_06b78666 == '\0') {
                FUN_02d6084c(PTR_DAT_067714a8);
                DAT_06b78666 = '\x01';
              }
              uVar20 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_0500b448;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
              }
              else {
                FUN_04ea5848(unaff_x22,uVar2,0);
              }
              lVar13 = lVar13 + 0x100000000;
              uVar15 = uVar15 - 1;
              lVar19 = lVar19 + -1;
              puVar25 = puVar25 + 1;
              if (lVar19 == 0) goto LAB_0500b2e8;
            }
            iVar6 = *(int *)(unaff_x29 + -0x4c);
            iVar24 = *(int *)(unaff_x29 + -0x3c);
            uVar20 = (*(short *)((lVar13 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar15;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
            if (iVar24 <= *(int *)(unaff_x29 + -0x78)) {
LAB_0500af80:
              sVar21 = 0x30;
              goto LAB_0500af84;
            }
          }
          else {
            sVar21 = *psVar17;
            if (sVar21 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < iVar24) goto LAB_0500af80;
            }
            else {
              psVar17 = psVar17 + 1;
LAB_0500af84:
              if (DAT_06b78666 == '\0') {
                FUN_02d6084c(PTR_DAT_067714a8);
                DAT_06b78666 = '\x01';
              }
              uVar15 = *(uint *)(unaff_x22 + 0x18);
              uVar22 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_0500b448;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar21;
                *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
              }
              else {
                FUN_04ea5848(unaff_x22,sVar21,0);
              }
              if ((-1 < (int)uVar12) && (1 < iVar24 && (uVar22 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar12) goto LAB_0500b448;
                if (iVar24 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar12 * 4) + 1) {
                  if (lVar13 == 0) goto LAB_0500b44c;
                  lVar13 = *(long *)(lVar13 + 0x40);
                  if (DAT_06b79233 == '\0') {
                    FUN_02d6084c(PTR_DAT_067714a8);
                    DAT_06b79233 = '\x01';
                  }
                  if (lVar13 == 0) goto LAB_0500b44c;
                  if (*(int *)(lVar13 + 0x10) == 1) {
                    uVar22 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar22) goto LAB_0500b09c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_0500b448;
                    lVar19 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_04e87a5c(lVar13,0,0);
                    *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                  }
                  else {
LAB_0500b09c:
                    FUN_04ea5974(unaff_x22,lVar13,0);
                  }
                  uVar12 = uVar12 - 1;
                }
              }
            }
          }
          iVar24 = iVar24 + -1;
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
          uVar15 = *(uint *)(unaff_x22 + 0x18);
          uVar22 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar22 <= (int)uVar15) goto LAB_0500ac9c;
LAB_0500ad34:
          if (uVar22 <= uVar15) goto LAB_0500b448;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
          break;
        case 0x25:
          if (lVar13 == 0) goto LAB_0500b44c;
          lVar13 = *(long *)(lVar13 + 0x90);
joined_r0x0500abc8:
          if (DAT_06b79233 == '\0') {
            FUN_02d6084c(PTR_DAT_067714a8);
            DAT_06b79233 = '\x01';
          }
          if (lVar13 == 0) goto LAB_0500b44c;
          if (*(int *)(lVar13 + 0x10) == 1) {
            uVar22 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar22 < *(uint *)(unaff_x22 + 0x10)) {
                lVar19 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_04e87a5c(lVar13,0,0);
                *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
                *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                break;
              }
              goto LAB_0500b448;
            }
          }
          FUN_04ea5974(unaff_x22,lVar13,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && iVar24 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar17 != 0)))) {
              if (lVar13 == 0) goto LAB_0500b44c;
              lVar13 = *(long *)(lVar13 + 0x38);
              if (DAT_06b79233 == '\0') {
                FUN_02d6084c(PTR_DAT_067714a8);
                DAT_06b79233 = '\x01';
              }
              if (lVar13 == 0) goto LAB_0500b44c;
              if (*(int *)(lVar13 + 0x10) == 1) {
                uVar22 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar22 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar19 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_04e87a5c(lVar13,0,0);
                    *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                    iVar24 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_0500b448;
                }
              }
              FUN_04ea5974(unaff_x22,lVar13,0);
              iVar24 = 0;
              *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x7c) = 0;
              iVar24 = 0;
            }
          }
          break;
        default:
          if (uVar2 != 0x45) goto switchD_0500aae0_caseD_24;
LAB_0500accc:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar18 = *(int *)(unaff_x29 + -0x38);
            if (DAT_06b78666 == '\0') {
              FUN_02d6084c(PTR_DAT_067714a8);
              DAT_06b78666 = '\x01';
            }
            uVar15 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_0500b448;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar2;
              *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
            }
            else {
              FUN_04ea5848(unaff_x22,uVar22,0);
            }
            if ((int)uVar20 < (int)uVar14) {
              sVar21 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
              if ((sVar21 == 0x2d) || (sVar21 == 0x2b)) {
                if (DAT_06b78666 == '\0') {
                  FUN_02d6084c(PTR_DAT_067714a8);
                  DAT_06b78666 = '\x01';
                }
                uVar22 = *(uint *)(unaff_x22 + 0x18);
                uVar20 = iVar18 + 2;
                if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_0500b448;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = sVar21;
                  *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                }
                else {
                  FUN_04ea5848(unaff_x22,sVar21,0);
                }
              }
              if ((int)uVar20 < (int)uVar14) {
                psVar16 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
                lVar13 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar20;
                while (*psVar16 == 0x30) {
                  if (DAT_06b78666 == '\0') {
                    FUN_02d6084c(PTR_DAT_067714a8);
                    DAT_06b78666 = '\x01';
                  }
                  uVar22 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_0500b448;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                  }
                  else {
                    FUN_04ea5848(unaff_x22,0x30,0);
                  }
                  uVar20 = uVar20 + 1;
                  lVar13 = lVar13 + -1;
                  psVar16 = psVar16 + 1;
                  if (lVar13 == 0) goto LAB_0500b2e8;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            iVar18 = *(int *)(unaff_x29 + -0x38);
            if (((int)uVar20 < (int)uVar14) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2) == 0x30)) {
              uVar11 = 0;
              iVar23 = 1;
              goto LAB_0500b1b4;
            }
            iVar23 = iVar18 + 2;
            if ((int)uVar14 <= iVar23) {
LAB_0500b1f4:
              if (DAT_06b78666 == '\0') {
                FUN_02d6084c(PTR_DAT_067714a8);
                DAT_06b78666 = '\x01';
              }
              uVar22 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_0500b448;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
              }
              else {
                FUN_04ea5848(unaff_x22,uVar2,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar21 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
            if (sVar21 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar23 * 2) != 0x30)
              goto LAB_0500b1f4;
              iVar23 = 0;
              uVar11 = 0;
            }
            else {
              if ((sVar21 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar23 * 2) != 0x30))
              goto LAB_0500b1f4;
              iVar23 = 0;
              uVar11 = 1;
            }
LAB_0500b1b4:
            uVar22 = iVar18 + 2;
            iVar10 = iVar23;
            uVar20 = uVar22;
            if ((int)uVar22 < (int)uVar14) {
              iVar1 = *(int *)(unaff_x29 + -0x8c) + iVar23;
              do {
                iVar10 = iVar23;
                uVar20 = uVar22;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar22 * 2) != 0x30) break;
                uVar22 = uVar22 + 1;
                iVar23 = iVar23 + 1;
                iVar10 = iVar1 - iVar18;
                uVar20 = uVar14;
              } while (uVar14 != uVar22);
            }
            if (9 < iVar10) {
              iVar10 = 10;
            }
            if (**(short **)(unaff_x29 + -0x30) == 0) {
              iVar18 = 0;
            }
            else {
              iVar18 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
            }
            if (*(int *)(*(long *)PTR_DAT_06777060 + 0xe4) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar11;
              thunk_FUN_02dbd7b4();
              uVar11 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_0501029c(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar18,uVar2,iVar10,uVar11);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar2 != 0x5c) {
          if (uVar2 == 0x65) goto LAB_0500accc;
          if (uVar2 != 0x2030) goto switchD_0500aae0_caseD_24;
          if (lVar13 != 0) {
            lVar13 = *(long *)(lVar13 + 0x98);
            goto joined_r0x0500abc8;
          }
          goto LAB_0500b44c;
        }
        if (((int)uVar14 <= (int)uVar20) ||
           (uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2), uVar2 == 0))
        goto switchD_0500aae0_caseD_2c;
        if (DAT_06b78666 == '\0') {
          FUN_02d6084c(PTR_DAT_067714a8);
          DAT_06b78666 = '\x01';
        }
        uVar15 = *(uint *)(unaff_x22 + 0x18);
        uVar22 = *(uint *)(unaff_x22 + 0x10);
        uVar20 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar15 < (int)uVar22) goto LAB_0500ad34;
LAB_0500ac9c:
        FUN_04ea5848(unaff_x22,uVar2,0);
      }
switchD_0500aae0_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar6;
      *(uint *)(unaff_x29 + -0x38) = uVar20;
    } while ((int)uVar20 < (int)uVar14);
  }
LAB_0500b2e8:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


