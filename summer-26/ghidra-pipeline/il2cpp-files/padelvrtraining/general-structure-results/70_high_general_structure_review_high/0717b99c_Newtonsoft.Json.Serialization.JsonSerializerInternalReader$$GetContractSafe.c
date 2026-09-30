/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContractSafe
ENTRY_POINT: 0717b99c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe(long param_1)

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
  uint in_w12;
  long lVar12;
  uint uVar13;
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
  
code_r0x0717b99c:
  if (in_w12 == 0x2030) {
    in_w8 = in_w8 + 3;
  }
switchD_0717b950_caseD_24:
  iVar6 = in_w11;
  uVar14 = (uint)unaff_x20;
  if (iVar6 < (int)uVar14) goto LAB_0717b91c;
LAB_0717bafc:
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
      FUN_07186bd8();
      *(undefined4 *)(unaff_x26 + 4) = 0;
LAB_0717bbe0:
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
        lVar12 = *(long *)(unaff_x29 + -0x48);
        uVar13 = *(uint *)(unaff_x29 + -0x3c);
        uVar11 = 0;
        *(int *)(unaff_x29 + -0x4c) = iVar24 - iVar18;
        if (iVar24 - iVar18 == 0 || iVar24 < iVar18) {
          iVar24 = iVar18;
        }
      }
      else {
        lVar12 = *(long *)(unaff_x29 + -0x48);
        uVar13 = *(uint *)(unaff_x29 + -0x3c);
        uVar11 = 1;
        *(undefined4 *)(unaff_x29 + -0x4c) = 0;
        iVar24 = iVar18;
      }
      uVar7 = DAT_01910a88;
      puVar8 = &uStack_10;
      uStack_10 = 0;
      uStack_8 = 0;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      *(long *)(unaff_x29 + -0x70) = unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar7;
      *(int *)(unaff_x29 + -0x78) = iVar6;
      *(undefined4 *)(unaff_x29 + -0x5c) = uVar11;
      if ((uVar13 & 1) != 0) {
        if ((lVar12 == 0) || (*(long *)(lVar12 + 0x40) == 0)) goto LAB_0717c8dc;
        if (0 < *(int *)(*(long *)(lVar12 + 0x40) + 0x10)) {
          lVar12 = *(long *)(lVar12 + 0x10);
          if (lVar12 == 0) goto LAB_0717c8dc;
          iVar18 = *(int *)(lVar12 + 0x18);
          if (iVar18 == 0) {
            iVar23 = 0;
          }
          else {
            iVar23 = *(int *)(lVar12 + 0x20);
          }
          uVar13 = 0xffffffff;
          iVar10 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) +
                   iVar24;
          if (iVar6 <= iVar10) {
            iVar6 = iVar10;
          }
          if ((iVar23 == 0) || (iVar6 <= iVar23)) goto LAB_0717bc94;
          uVar13 = 0;
          lVar19 = 0;
          uVar9 = 4;
          *(long *)(unaff_x29 + -0x58) = lVar12;
          iVar10 = iVar23;
          break;
        }
      }
      uVar13 = 0xffffffff;
      goto LAB_0717bc94;
    }
    *(int *)(unaff_x26 + 4) = *(int *)(unaff_x26 + 4) + in_w8;
    if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_07180274();
    if (**(short **)(unaff_x29 + -0x30) != 0) {
LAB_0717bbc0:
      *(int *)(unaff_x29 + -0x38) = unaff_w21;
      goto LAB_0717bbe0;
    }
    if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    iVar6 = FUN_071815d4(*(undefined8 *)(unaff_x29 + -0x28));
    if (iVar6 == unaff_w21) goto LAB_0717bbc0;
    param_1 = FUN_0502844c(*(undefined8 *)(unaff_x29 + -0x28));
    unaff_w21 = iVar6;
    if (iVar6 < (int)uVar14) goto code_r0x0717b8f0;
    *(undefined4 *)(unaff_x29 + -0x34) = 0;
    unaff_w19 = 0;
    unaff_w28 = 0;
    *(undefined4 *)(unaff_x29 + -0x1c) = 0;
    in_w8 = 0;
    in_w16 = 0;
    unaff_w24 = 0x7fffffff;
  } while( true );
LAB_0717c7ec:
  auVar26._8_8_ = uVar9;
  auVar26._0_8_ = puVar8;
  auVar4 = auVar26._0_12_;
  if ((int)uVar9 <= (int)uVar13) {
    uVar7 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a0fc8,(int)uVar9 << 1);
    auVar26 = FUN_062beef0(uVar7,*(undefined8 *)PTR_DAT_091db0a0);
    FUN_062be9b4(unaff_x29 + -0x18,auVar26._0_8_,auVar26._8_8_,*(undefined8 *)PTR_DAT_0920fbf8);
    auVar26 = FUN_062beef0(uVar7,*(undefined8 *)PTR_DAT_091db0a0);
    auVar4 = auVar26._0_12_;
    lVar12 = *(long *)(unaff_x29 + -0x58);
    *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar26;
  }
  puVar8 = auVar4._0_8_;
  if (auVar4._8_4_ <= uVar13) goto LAB_0717c8d8;
  *(int *)((long)puVar8 + (long)(int)uVar13 * 4) = iVar23;
  if ((int)lVar19 < iVar18 + -1) {
    lVar19 = (long)(int)lVar19 + 1;
    if (*(uint *)(lVar12 + 0x18) <= (uint)lVar19) goto LAB_0717c8d8;
    iVar10 = *(int *)(lVar12 + lVar19 * 4 + 0x20);
  }
  if ((iVar10 == 0) || (iVar23 = iVar10 + iVar23, iVar6 <= iVar23)) goto LAB_0717c8d0;
  uVar9 = (ulong)*(uint *)(unaff_x29 + -0x10);
  uVar13 = uVar13 + 1;
  goto LAB_0717c7ec;
code_r0x0717b8f0:
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  unaff_w28 = 0;
  unaff_w19 = 0;
  in_w16 = 0;
  in_w8 = 0;
  unaff_w24 = 0x7fffffff;
  in_w9 = -1;
  in_w10 = -1;
  in_x17 = &switchD_0717b950::switchdataD_01ac8afc;
LAB_0717b91c:
  uVar2 = *(ushort *)(param_1 + (long)iVar6 * 2);
  in_w12 = (uint)uVar2;
  if ((uVar2 != 0x3b) && (uVar2 != 0)) {
    in_w11 = iVar6 + 1;
    if (uVar2 < 0x46) {
      uVar13 = uVar2 - 0x22;
      if (uVar13 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x0717b950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)in_x17[uVar13] * 4 + 0x717b954))();
        return;
      }
      if (uVar2 != 0x45) goto switchD_0717b950_caseD_24;
    }
    else {
      if (uVar2 == 0x5c) {
        if ((in_w11 < (int)uVar14) && (*(short *)(param_1 + (long)in_w11 * 2) != 0)) {
          in_w11 = iVar6 + 2;
        }
        goto switchD_0717b950_caseD_24;
      }
      if (uVar2 != 0x65) goto code_r0x0717b99c;
    }
    if ((((int)uVar14 <= in_w11) || (*(short *)(param_1 + (long)in_w11 * 2) != 0x30)) &&
       (((int)uVar14 <= iVar6 + 2 ||
        (((sVar21 = *(short *)(param_1 + (long)in_w11 * 2), sVar21 != 0x2d && (sVar21 != 0x2b)) ||
         (*(short *)(param_1 + (long)(iVar6 + 2) * 2) != 0x30)))))) goto switchD_0717b950_caseD_24;
    while (in_w11 = in_w11 + 1, in_w11 < (int)uVar14) {
      if (*(short *)(param_1 + (long)in_w11 * 2) != 0x30) {
        unaff_w19 = 1;
        goto switchD_0717b950_caseD_24;
      }
    }
    unaff_w19 = 1;
  }
  goto LAB_0717bafc;
LAB_0717c8d0:
  unaff_x26 = *(long *)(unaff_x29 + -0x70);
LAB_0717bc94:
  uVar9 = FUN_07186bc8(unaff_x26,0);
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar9 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar12 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_09843015 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091fa408);
        DAT_09843015 = '\x01';
      }
      if (lVar12 != 0) {
        if (*(int *)(lVar12 + 0x10) == 1) {
          uVar22 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar22) {
LAB_0717c8d8:
                    /* WARNING: Subroutine does not return */
              FUN_03d2d550();
            }
            lVar19 = *(long *)(unaff_x22 + 8);
            uVar5 = FUN_06fcd2c8(lVar12,0,0);
            *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
            goto LAB_0717bd34;
          }
        }
        FUN_06ff1720(unaff_x22,lVar12,0);
        goto LAB_0717bd34;
      }
    }
LAB_0717c8dc:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
LAB_0717bd34:
  uVar7 = FUN_0502844c(*(undefined8 *)(unaff_x29 + -0x28),unaff_x20,*(undefined8 *)PTR_DAT_09208b68)
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
        lVar12 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar12 = *(long *)(unaff_x29 + -0x48);
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
          if (DAT_09842200 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091fa408);
            DAT_09842200 = '\x01';
          }
          uVar15 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_0717c8d8;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar3;
            *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
          }
          else {
            FUN_06ff15f4(unaff_x22,sVar3,0);
          }
          if ((-1 < (int)uVar13) && (1 < iVar24 && (uVar20 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar13) goto LAB_0717c8d8;
            if (iVar24 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar13 * 4) + 1) {
              if (lVar12 == 0) goto LAB_0717c8dc;
              lVar19 = *(long *)(lVar12 + 0x40);
              if (DAT_09843015 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09843015 = '\x01';
              }
              if (lVar19 == 0) goto LAB_0717c8dc;
              if (*(int *)(lVar19 + 0x10) == 1) {
                uVar20 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_0717bf08;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_0717c8d8;
                lVar12 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_06fcd2c8(lVar19,0,0);
                *(undefined2 *)(lVar12 + (long)(int)uVar20 * 2) = uVar5;
                lVar12 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
              }
              else {
LAB_0717bf08:
                FUN_06ff1720(unaff_x22,lVar19,0);
              }
              uVar20 = *(uint *)(unaff_x29 + -0x28);
              uVar13 = uVar13 - 1;
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
            lVar12 = (ulong)uVar20 << 0x20;
            uVar15 = ~*(uint *)(unaff_x29 + -0x38);
            puVar25 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
            lVar19 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar20;
            while( true ) {
              uVar2 = *puVar25;
              if ((uVar2 == 0) || (uVar2 == uVar22)) break;
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar20 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_0717c8d8;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
              }
              else {
                FUN_06ff15f4(unaff_x22,uVar2,0);
              }
              lVar12 = lVar12 + 0x100000000;
              uVar15 = uVar15 - 1;
              lVar19 = lVar19 + -1;
              puVar25 = puVar25 + 1;
              if (lVar19 == 0) goto LAB_0717c778;
            }
            iVar6 = *(int *)(unaff_x29 + -0x4c);
            iVar24 = *(int *)(unaff_x29 + -0x3c);
            uVar20 = (*(short *)((lVar12 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar15;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar6 < 0) {
            iVar6 = iVar6 + 1;
            if (iVar24 <= *(int *)(unaff_x29 + -0x78)) {
LAB_0717c410:
              sVar21 = 0x30;
              goto LAB_0717c414;
            }
          }
          else {
            sVar21 = *psVar17;
            if (sVar21 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < iVar24) goto LAB_0717c410;
            }
            else {
              psVar17 = psVar17 + 1;
LAB_0717c414:
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar15 = *(uint *)(unaff_x22 + 0x18);
              uVar22 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_0717c8d8;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar21;
                *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
              }
              else {
                FUN_06ff15f4(unaff_x22,sVar21,0);
              }
              if ((-1 < (int)uVar13) && (1 < iVar24 && (uVar22 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar13) goto LAB_0717c8d8;
                if (iVar24 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar13 * 4) + 1) {
                  if (lVar12 == 0) goto LAB_0717c8dc;
                  lVar12 = *(long *)(lVar12 + 0x40);
                  if (DAT_09843015 == '\0') {
                    FUN_03d2d2b0(PTR_DAT_091fa408);
                    DAT_09843015 = '\x01';
                  }
                  if (lVar12 == 0) goto LAB_0717c8dc;
                  if (*(int *)(lVar12 + 0x10) == 1) {
                    uVar22 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar22) goto LAB_0717c52c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_0717c8d8;
                    lVar19 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_06fcd2c8(lVar12,0,0);
                    *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                  }
                  else {
LAB_0717c52c:
                    FUN_06ff1720(unaff_x22,lVar12,0);
                  }
                  uVar13 = uVar13 - 1;
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
switchD_0717bf70_caseD_24:
          if (DAT_09842200 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091fa408);
            DAT_09842200 = '\x01';
          }
          uVar15 = *(uint *)(unaff_x22 + 0x18);
          uVar22 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar22 <= (int)uVar15) goto LAB_0717c12c;
LAB_0717c1c4:
          if (uVar22 <= uVar15) goto LAB_0717c8d8;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
          break;
        case 0x25:
          if (lVar12 == 0) goto LAB_0717c8dc;
          lVar12 = *(long *)(lVar12 + 0x90);
joined_r0x0717c058:
          if (DAT_09843015 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091fa408);
            DAT_09843015 = '\x01';
          }
          if (lVar12 == 0) goto LAB_0717c8dc;
          if (*(int *)(lVar12 + 0x10) == 1) {
            uVar22 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar22 < *(uint *)(unaff_x22 + 0x10)) {
                lVar19 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_06fcd2c8(lVar12,0,0);
                *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
                *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                break;
              }
              goto LAB_0717c8d8;
            }
          }
          FUN_06ff1720(unaff_x22,lVar12,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && iVar24 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar17 != 0)))) {
              if (lVar12 == 0) goto LAB_0717c8dc;
              lVar12 = *(long *)(lVar12 + 0x38);
              if (DAT_09843015 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09843015 = '\x01';
              }
              if (lVar12 == 0) goto LAB_0717c8dc;
              if (*(int *)(lVar12 + 0x10) == 1) {
                uVar22 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar22 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar19 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_06fcd2c8(lVar12,0,0);
                    *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                    iVar24 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_0717c8d8;
                }
              }
              FUN_06ff1720(unaff_x22,lVar12,0);
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
          if (uVar2 != 0x45) goto switchD_0717bf70_caseD_24;
LAB_0717c15c:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar18 = *(int *)(unaff_x29 + -0x38);
            if (DAT_09842200 == '\0') {
              FUN_03d2d2b0(PTR_DAT_091fa408);
              DAT_09842200 = '\x01';
            }
            uVar15 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_0717c8d8;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar2;
              *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
            }
            else {
              FUN_06ff15f4(unaff_x22,uVar22,0);
            }
            if ((int)uVar20 < (int)uVar14) {
              sVar21 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
              if ((sVar21 == 0x2d) || (sVar21 == 0x2b)) {
                if (DAT_09842200 == '\0') {
                  FUN_03d2d2b0(PTR_DAT_091fa408);
                  DAT_09842200 = '\x01';
                }
                uVar22 = *(uint *)(unaff_x22 + 0x18);
                uVar20 = iVar18 + 2;
                if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_0717c8d8;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = sVar21;
                  *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                }
                else {
                  FUN_06ff15f4(unaff_x22,sVar21,0);
                }
              }
              if ((int)uVar20 < (int)uVar14) {
                psVar16 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
                lVar12 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar20;
                while (*psVar16 == 0x30) {
                  if (DAT_09842200 == '\0') {
                    FUN_03d2d2b0(PTR_DAT_091fa408);
                    DAT_09842200 = '\x01';
                  }
                  uVar22 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_0717c8d8;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                  }
                  else {
                    FUN_06ff15f4(unaff_x22,0x30,0);
                  }
                  uVar20 = uVar20 + 1;
                  lVar12 = lVar12 + -1;
                  psVar16 = psVar16 + 1;
                  if (lVar12 == 0) goto LAB_0717c778;
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
              goto LAB_0717c644;
            }
            iVar23 = iVar18 + 2;
            if ((int)uVar14 <= iVar23) {
LAB_0717c684:
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar22 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_0717c8d8;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
              }
              else {
                FUN_06ff15f4(unaff_x22,uVar2,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar21 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
            if (sVar21 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar23 * 2) != 0x30)
              goto LAB_0717c684;
              iVar23 = 0;
              uVar11 = 0;
            }
            else {
              if ((sVar21 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar23 * 2) != 0x30))
              goto LAB_0717c684;
              iVar23 = 0;
              uVar11 = 1;
            }
LAB_0717c644:
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
            if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar11;
              thunk_FUN_03db619c();
              uVar11 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_07181720(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar18,uVar2,iVar10,uVar11);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar2 != 0x5c) {
          if (uVar2 == 0x65) goto LAB_0717c15c;
          if (uVar2 != 0x2030) goto switchD_0717bf70_caseD_24;
          if (lVar12 != 0) {
            lVar12 = *(long *)(lVar12 + 0x98);
            goto joined_r0x0717c058;
          }
          goto LAB_0717c8dc;
        }
        if (((int)uVar14 <= (int)uVar20) ||
           (uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2), uVar2 == 0))
        goto switchD_0717bf70_caseD_2c;
        if (DAT_09842200 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091fa408);
          DAT_09842200 = '\x01';
        }
        uVar15 = *(uint *)(unaff_x22 + 0x18);
        uVar22 = *(uint *)(unaff_x22 + 0x10);
        uVar20 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar15 < (int)uVar22) goto LAB_0717c1c4;
LAB_0717c12c:
        FUN_06ff15f4(unaff_x22,uVar2,0);
      }
switchD_0717bf70_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar6;
      *(uint *)(unaff_x29 + -0x38) = uVar20;
    } while ((int)uVar20 < (int)uVar14);
  }
LAB_0717c778:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


