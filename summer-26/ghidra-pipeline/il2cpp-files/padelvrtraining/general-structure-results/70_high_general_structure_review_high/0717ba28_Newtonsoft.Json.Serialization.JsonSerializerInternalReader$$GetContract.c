/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContract
ENTRY_POINT: 0717ba28
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract(long param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  bool bVar4;
  undefined1 auVar5 [12];
  undefined1 in_ZR;
  undefined2 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int in_w8;
  int in_w9;
  int in_w10;
  int iVar11;
  int in_w11;
  undefined4 uVar12;
  uint uVar13;
  long lVar14;
  undefined4 in_w16;
  byte *in_x17;
  uint uVar15;
  undefined8 unaff_x20;
  int unaff_w21;
  uint uVar16;
  short *psVar17;
  long unaff_x22;
  short *psVar18;
  int unaff_w24;
  int iVar19;
  long lVar20;
  uint uVar21;
  short sVar22;
  uint uVar23;
  long unaff_x26;
  int iVar24;
  int unaff_w28;
  int iVar25;
  ushort *puVar26;
  long unaff_x29;
  undefined1 auVar27 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
code_r0x0717ba28:
  uVar15 = (uint)unaff_x20;
  if ((bool)in_ZR) goto LAB_0717ba14;
  bVar4 = true;
switchD_0717b950_caseD_24:
  iVar7 = in_w11;
  if (iVar7 < (int)uVar15) goto LAB_0717b91c;
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
      iVar19 = *(int *)(unaff_x29 + -0x34);
      iVar7 = iVar19 - unaff_w24;
      if (iVar7 == 0 || iVar19 < unaff_w24) {
        iVar7 = 0;
      }
      iVar25 = iVar19 - unaff_w28;
      if (unaff_w28 <= iVar19) {
        iVar25 = 0;
      }
      *(int *)(unaff_x29 + -0x74) = iVar25;
      if (bVar4) {
        lVar14 = *(long *)(unaff_x29 + -0x48);
        uVar13 = *(uint *)(unaff_x29 + -0x3c);
        uVar12 = 1;
        *(undefined4 *)(unaff_x29 + -0x4c) = 0;
        iVar25 = iVar19;
      }
      else {
        iVar25 = *(int *)(unaff_x26 + 4);
        lVar14 = *(long *)(unaff_x29 + -0x48);
        uVar13 = *(uint *)(unaff_x29 + -0x3c);
        uVar12 = 0;
        *(int *)(unaff_x29 + -0x4c) = iVar25 - iVar19;
        if (iVar25 - iVar19 == 0 || iVar25 < iVar19) {
          iVar25 = iVar19;
        }
      }
      uVar8 = DAT_01910a88;
      puVar9 = &uStack_10;
      uStack_10 = 0;
      uStack_8 = 0;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      *(long *)(unaff_x29 + -0x70) = unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar8;
      *(int *)(unaff_x29 + -0x78) = iVar7;
      *(undefined4 *)(unaff_x29 + -0x5c) = uVar12;
      if ((uVar13 & 1) != 0) {
        if ((lVar14 == 0) || (*(long *)(lVar14 + 0x40) == 0)) goto LAB_0717c8dc;
        if (0 < *(int *)(*(long *)(lVar14 + 0x40) + 0x10)) {
          lVar14 = *(long *)(lVar14 + 0x10);
          if (lVar14 == 0) goto LAB_0717c8dc;
          iVar19 = *(int *)(lVar14 + 0x18);
          if (iVar19 == 0) {
            iVar24 = 0;
          }
          else {
            iVar24 = *(int *)(lVar14 + 0x20);
          }
          uVar13 = 0xffffffff;
          iVar11 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) +
                   iVar25;
          if (iVar7 <= iVar11) {
            iVar7 = iVar11;
          }
          if ((iVar24 == 0) || (iVar7 <= iVar24)) goto LAB_0717bc94;
          uVar13 = 0;
          lVar20 = 0;
          uVar10 = 4;
          *(long *)(unaff_x29 + -0x58) = lVar14;
          iVar11 = iVar24;
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
    iVar7 = FUN_071815d4(*(undefined8 *)(unaff_x29 + -0x28));
    if (iVar7 == unaff_w21) goto LAB_0717bbc0;
    param_1 = FUN_0502844c(*(undefined8 *)(unaff_x29 + -0x28));
    unaff_w21 = iVar7;
    if (iVar7 < (int)uVar15) goto code_r0x0717b8f0;
    *(undefined4 *)(unaff_x29 + -0x34) = 0;
    bVar4 = false;
    unaff_w28 = 0;
    *(undefined4 *)(unaff_x29 + -0x1c) = 0;
    in_w8 = 0;
    in_w16 = 0;
    unaff_w24 = 0x7fffffff;
  } while( true );
LAB_0717c7ec:
  auVar27._8_8_ = uVar10;
  auVar27._0_8_ = puVar9;
  auVar5 = auVar27._0_12_;
  if ((int)uVar10 <= (int)uVar13) {
    uVar8 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a0fc8,(int)uVar10 << 1);
    auVar27 = FUN_062beef0(uVar8,*(undefined8 *)PTR_DAT_091db0a0);
    FUN_062be9b4(unaff_x29 + -0x18,auVar27._0_8_,auVar27._8_8_,*(undefined8 *)PTR_DAT_0920fbf8);
    auVar27 = FUN_062beef0(uVar8,*(undefined8 *)PTR_DAT_091db0a0);
    auVar5 = auVar27._0_12_;
    lVar14 = *(long *)(unaff_x29 + -0x58);
    *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar27;
  }
  puVar9 = auVar5._0_8_;
  if (auVar5._8_4_ <= uVar13) goto LAB_0717c8d8;
  *(int *)((long)puVar9 + (long)(int)uVar13 * 4) = iVar24;
  if ((int)lVar20 < iVar19 + -1) {
    lVar20 = (long)(int)lVar20 + 1;
    if (*(uint *)(lVar14 + 0x18) <= (uint)lVar20) goto LAB_0717c8d8;
    iVar11 = *(int *)(lVar14 + lVar20 * 4 + 0x20);
  }
  if ((iVar11 == 0) || (iVar24 = iVar11 + iVar24, iVar7 <= iVar24)) goto LAB_0717c8d0;
  uVar10 = (ulong)*(uint *)(unaff_x29 + -0x10);
  uVar13 = uVar13 + 1;
  goto LAB_0717c7ec;
code_r0x0717b8f0:
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  unaff_w28 = 0;
  bVar4 = false;
  in_w16 = 0;
  in_w8 = 0;
  unaff_w24 = 0x7fffffff;
  in_w9 = -1;
  in_w10 = -1;
  in_x17 = &switchD_0717b950::switchdataD_01ac8afc;
LAB_0717b91c:
  uVar2 = *(ushort *)(param_1 + (long)iVar7 * 2);
  if ((uVar2 != 0x3b) && (uVar2 != 0)) {
    in_w11 = iVar7 + 1;
    uVar13 = (uint)uVar2;
    if (uVar2 < 0x46) {
      if (uVar13 - 0x22 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x0717b950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)in_x17[uVar13 - 0x22] * 4 + 0x717b954))();
        return;
      }
      if (uVar13 != 0x45) goto switchD_0717b950_caseD_24;
    }
    else {
      if (uVar2 == 0x5c) {
        if ((in_w11 < (int)uVar15) && (*(short *)(param_1 + (long)in_w11 * 2) != 0)) {
          in_w11 = iVar7 + 2;
        }
        goto switchD_0717b950_caseD_24;
      }
      if (uVar2 != 0x65) {
        if (uVar13 == 0x2030) {
          in_w8 = in_w8 + 3;
        }
        goto switchD_0717b950_caseD_24;
      }
    }
    if ((((int)uVar15 <= in_w11) || (*(short *)(param_1 + (long)in_w11 * 2) != 0x30)) &&
       (((int)uVar15 <= iVar7 + 2 ||
        (((sVar22 = *(short *)(param_1 + (long)in_w11 * 2), sVar22 != 0x2d && (sVar22 != 0x2b)) ||
         (*(short *)(param_1 + (long)(iVar7 + 2) * 2) != 0x30)))))) goto switchD_0717b950_caseD_24;
LAB_0717ba14:
    in_w11 = in_w11 + 1;
    if (in_w11 < (int)uVar15) {
      in_ZR = *(short *)(param_1 + (long)in_w11 * 2) == 0x30;
      goto code_r0x0717ba28;
    }
    bVar4 = true;
  }
  goto LAB_0717bafc;
LAB_0717c8d0:
  unaff_x26 = *(long *)(unaff_x29 + -0x70);
LAB_0717bc94:
  uVar10 = FUN_07186bc8(unaff_x26,0);
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar10 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar14 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_09843015 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091fa408);
        DAT_09843015 = '\x01';
      }
      if (lVar14 != 0) {
        if (*(int *)(lVar14 + 0x10) == 1) {
          uVar23 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar23) {
LAB_0717c8d8:
                    /* WARNING: Subroutine does not return */
              FUN_03d2d550();
            }
            lVar20 = *(long *)(unaff_x22 + 8);
            uVar6 = FUN_06fcd2c8(lVar14,0,0);
            *(undefined2 *)(lVar20 + (long)(int)uVar23 * 2) = uVar6;
            *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
            goto LAB_0717bd34;
          }
        }
        FUN_06ff1720(unaff_x22,lVar14,0);
        goto LAB_0717bd34;
      }
    }
LAB_0717c8dc:
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
LAB_0717bd34:
  uVar8 = FUN_0502844c(*(undefined8 *)(unaff_x29 + -0x28),unaff_x20,*(undefined8 *)PTR_DAT_09208b68)
  ;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar8;
  if (*(int *)(unaff_x29 + -0x38) < (int)uVar15) {
    psVar18 = *(short **)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
    *(uint *)(unaff_x29 + -0x8c) = uVar15 - 2;
    *(long *)(unaff_x29 + -0x88) = (long)(int)uVar15;
    do {
      uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      if ((uVar2 == 0x3b) || (uVar2 == 0)) break;
      iVar7 = *(int *)(unaff_x29 + -0x4c);
      uVar23 = (uint)uVar2;
      if ((iVar7 < 1) ||
         ((0x30 < uVar2 || ((1L << ((ulong)uVar23 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar14 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar14 = *(long *)(unaff_x29 + -0x48);
        uVar21 = *(uint *)(unaff_x29 + -0x28);
        iVar19 = iVar7 + 1;
        *(int *)(unaff_x29 + -0x3c) = iVar25 - iVar7;
        do {
          sVar22 = *psVar18;
          sVar3 = 0x30;
          if (sVar22 != 0) {
            psVar18 = psVar18 + 1;
            sVar3 = sVar22;
          }
          if (DAT_09842200 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091fa408);
            DAT_09842200 = '\x01';
          }
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_0717c8d8;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar3;
            *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
          }
          else {
            FUN_06ff15f4(unaff_x22,sVar3,0);
          }
          if ((-1 < (int)uVar13) && (1 < iVar25 && (uVar21 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar13) goto LAB_0717c8d8;
            if (iVar25 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar13 * 4) + 1) {
              if (lVar14 == 0) goto LAB_0717c8dc;
              lVar20 = *(long *)(lVar14 + 0x40);
              if (DAT_09843015 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09843015 = '\x01';
              }
              if (lVar20 == 0) goto LAB_0717c8dc;
              if (*(int *)(lVar20 + 0x10) == 1) {
                uVar21 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar21) goto LAB_0717bf08;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_0717c8d8;
                lVar14 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_06fcd2c8(lVar20,0,0);
                *(undefined2 *)(lVar14 + (long)(int)uVar21 * 2) = uVar6;
                lVar14 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
              }
              else {
LAB_0717bf08:
                FUN_06ff1720(unaff_x22,lVar20,0);
              }
              uVar21 = *(uint *)(unaff_x29 + -0x28);
              uVar13 = uVar13 - 1;
            }
          }
          iVar19 = iVar19 + -1;
          iVar25 = iVar25 + -1;
        } while (1 < iVar19);
        iVar25 = *(int *)(unaff_x29 + -0x3c);
        iVar7 = 0;
      }
      uVar21 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar23 < 0x46) {
        switch(uVar2) {
        case 0x22:
        case 0x27:
          if ((int)uVar21 < (int)uVar15) {
            *(int *)(unaff_x29 + -0x3c) = iVar25;
            *(int *)(unaff_x29 + -0x4c) = iVar7;
            lVar14 = (ulong)uVar21 << 0x20;
            uVar16 = ~*(uint *)(unaff_x29 + -0x38);
            puVar26 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar21 * 2);
            lVar20 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar21;
            while( true ) {
              uVar2 = *puVar26;
              if ((uVar2 == 0) || (uVar2 == uVar23)) break;
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar21 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_0717c8d8;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
              }
              else {
                FUN_06ff15f4(unaff_x22,uVar2,0);
              }
              lVar14 = lVar14 + 0x100000000;
              uVar16 = uVar16 - 1;
              lVar20 = lVar20 + -1;
              puVar26 = puVar26 + 1;
              if (lVar20 == 0) goto LAB_0717c778;
            }
            iVar7 = *(int *)(unaff_x29 + -0x4c);
            iVar25 = *(int *)(unaff_x29 + -0x3c);
            uVar21 = (*(short *)((lVar14 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar16;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar7 < 0) {
            iVar7 = iVar7 + 1;
            if (iVar25 <= *(int *)(unaff_x29 + -0x78)) {
LAB_0717c410:
              sVar22 = 0x30;
              goto LAB_0717c414;
            }
          }
          else {
            sVar22 = *psVar18;
            if (sVar22 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < iVar25) goto LAB_0717c410;
            }
            else {
              psVar18 = psVar18 + 1;
LAB_0717c414:
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar16 = *(uint *)(unaff_x22 + 0x18);
              uVar23 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_0717c8d8;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar22;
                *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
              }
              else {
                FUN_06ff15f4(unaff_x22,sVar22,0);
              }
              if ((-1 < (int)uVar13) && (1 < iVar25 && (uVar23 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar13) goto LAB_0717c8d8;
                if (iVar25 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar13 * 4) + 1) {
                  if (lVar14 == 0) goto LAB_0717c8dc;
                  lVar14 = *(long *)(lVar14 + 0x40);
                  if (DAT_09843015 == '\0') {
                    FUN_03d2d2b0(PTR_DAT_091fa408);
                    DAT_09843015 = '\x01';
                  }
                  if (lVar14 == 0) goto LAB_0717c8dc;
                  if (*(int *)(lVar14 + 0x10) == 1) {
                    uVar23 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar23) goto LAB_0717c52c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_0717c8d8;
                    lVar20 = *(long *)(unaff_x22 + 8);
                    uVar6 = FUN_06fcd2c8(lVar14,0,0);
                    *(undefined2 *)(lVar20 + (long)(int)uVar23 * 2) = uVar6;
                    *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
                  }
                  else {
LAB_0717c52c:
                    FUN_06ff1720(unaff_x22,lVar14,0);
                  }
                  uVar13 = uVar13 - 1;
                }
              }
            }
          }
          iVar25 = iVar25 + -1;
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
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          uVar23 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar23 <= (int)uVar16) goto LAB_0717c12c;
LAB_0717c1c4:
          if (uVar23 <= uVar16) goto LAB_0717c8d8;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = uVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
          break;
        case 0x25:
          if (lVar14 == 0) goto LAB_0717c8dc;
          lVar14 = *(long *)(lVar14 + 0x90);
joined_r0x0717c058:
          if (DAT_09843015 == '\0') {
            FUN_03d2d2b0(PTR_DAT_091fa408);
            DAT_09843015 = '\x01';
          }
          if (lVar14 == 0) goto LAB_0717c8dc;
          if (*(int *)(lVar14 + 0x10) == 1) {
            uVar23 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar23 < *(uint *)(unaff_x22 + 0x10)) {
                lVar20 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_06fcd2c8(lVar14,0,0);
                *(undefined2 *)(lVar20 + (long)(int)uVar23 * 2) = uVar6;
                *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
                break;
              }
              goto LAB_0717c8d8;
            }
          }
          FUN_06ff1720(unaff_x22,lVar14,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && iVar25 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar18 != 0)))) {
              if (lVar14 == 0) goto LAB_0717c8dc;
              lVar14 = *(long *)(lVar14 + 0x38);
              if (DAT_09843015 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09843015 = '\x01';
              }
              if (lVar14 == 0) goto LAB_0717c8dc;
              if (*(int *)(lVar14 + 0x10) == 1) {
                uVar23 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar23 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar20 = *(long *)(unaff_x22 + 8);
                    uVar6 = FUN_06fcd2c8(lVar14,0,0);
                    *(undefined2 *)(lVar20 + (long)(int)uVar23 * 2) = uVar6;
                    *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
                    iVar25 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_0717c8d8;
                }
              }
              FUN_06ff1720(unaff_x22,lVar14,0);
              iVar25 = 0;
              *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x7c) = 0;
              iVar25 = 0;
            }
          }
          break;
        default:
          if (uVar2 != 0x45) goto switchD_0717bf70_caseD_24;
LAB_0717c15c:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar19 = *(int *)(unaff_x29 + -0x38);
            if (DAT_09842200 == '\0') {
              FUN_03d2d2b0(PTR_DAT_091fa408);
              DAT_09842200 = '\x01';
            }
            uVar16 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_0717c8d8;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = uVar2;
              *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
            }
            else {
              FUN_06ff15f4(unaff_x22,uVar23,0);
            }
            if ((int)uVar21 < (int)uVar15) {
              sVar22 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar21 * 2);
              if ((sVar22 == 0x2d) || (sVar22 == 0x2b)) {
                if (DAT_09842200 == '\0') {
                  FUN_03d2d2b0(PTR_DAT_091fa408);
                  DAT_09842200 = '\x01';
                }
                uVar23 = *(uint *)(unaff_x22 + 0x18);
                uVar21 = iVar19 + 2;
                if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_0717c8d8;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = sVar22;
                  *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
                }
                else {
                  FUN_06ff15f4(unaff_x22,sVar22,0);
                }
              }
              if ((int)uVar21 < (int)uVar15) {
                psVar17 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar21 * 2);
                lVar14 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar21;
                while (*psVar17 == 0x30) {
                  if (DAT_09842200 == '\0') {
                    FUN_03d2d2b0(PTR_DAT_091fa408);
                    DAT_09842200 = '\x01';
                  }
                  uVar23 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_0717c8d8;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
                  }
                  else {
                    FUN_06ff15f4(unaff_x22,0x30,0);
                  }
                  uVar21 = uVar21 + 1;
                  lVar14 = lVar14 + -1;
                  psVar17 = psVar17 + 1;
                  if (lVar14 == 0) goto LAB_0717c778;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            iVar19 = *(int *)(unaff_x29 + -0x38);
            if (((int)uVar21 < (int)uVar15) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar21 * 2) == 0x30)) {
              uVar12 = 0;
              iVar24 = 1;
              goto LAB_0717c644;
            }
            iVar24 = iVar19 + 2;
            if ((int)uVar15 <= iVar24) {
LAB_0717c684:
              if (DAT_09842200 == '\0') {
                FUN_03d2d2b0(PTR_DAT_091fa408);
                DAT_09842200 = '\x01';
              }
              uVar23 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar23 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_0717c8d8;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar23 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
              }
              else {
                FUN_06ff15f4(unaff_x22,uVar2,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar22 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar21 * 2);
            if (sVar22 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar24 * 2) != 0x30)
              goto LAB_0717c684;
              iVar24 = 0;
              uVar12 = 0;
            }
            else {
              if ((sVar22 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar24 * 2) != 0x30))
              goto LAB_0717c684;
              iVar24 = 0;
              uVar12 = 1;
            }
LAB_0717c644:
            uVar23 = iVar19 + 2;
            iVar11 = iVar24;
            uVar21 = uVar23;
            if ((int)uVar23 < (int)uVar15) {
              iVar1 = *(int *)(unaff_x29 + -0x8c) + iVar24;
              do {
                iVar11 = iVar24;
                uVar21 = uVar23;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar23 * 2) != 0x30) break;
                uVar23 = uVar23 + 1;
                iVar24 = iVar24 + 1;
                iVar11 = iVar1 - iVar19;
                uVar21 = uVar15;
              } while (uVar15 != uVar23);
            }
            if (9 < iVar11) {
              iVar11 = 10;
            }
            if (**(short **)(unaff_x29 + -0x30) == 0) {
              iVar19 = 0;
            }
            else {
              iVar19 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
            }
            if (*(int *)(*(long *)PTR_DAT_0920eb10 + 0xe0) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar12;
              thunk_FUN_03db619c();
              uVar12 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_07181720(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar19,uVar2,iVar11,uVar12);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar2 != 0x5c) {
          if (uVar2 == 0x65) goto LAB_0717c15c;
          if (uVar2 != 0x2030) goto switchD_0717bf70_caseD_24;
          if (lVar14 != 0) {
            lVar14 = *(long *)(lVar14 + 0x98);
            goto joined_r0x0717c058;
          }
          goto LAB_0717c8dc;
        }
        if (((int)uVar15 <= (int)uVar21) ||
           (uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar21 * 2), uVar2 == 0))
        goto switchD_0717bf70_caseD_2c;
        if (DAT_09842200 == '\0') {
          FUN_03d2d2b0(PTR_DAT_091fa408);
          DAT_09842200 = '\x01';
        }
        uVar16 = *(uint *)(unaff_x22 + 0x18);
        uVar23 = *(uint *)(unaff_x22 + 0x10);
        uVar21 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar16 < (int)uVar23) goto LAB_0717c1c4;
LAB_0717c12c:
        FUN_06ff15f4(unaff_x22,uVar2,0);
      }
switchD_0717bf70_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar7;
      *(uint *)(unaff_x29 + -0x38) = uVar21;
    } while ((int)uVar21 < (int)uVar15);
  }
LAB_0717c778:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


