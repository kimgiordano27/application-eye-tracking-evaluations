/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$.ctor
ENTRY_POINT: 06246440
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer___ctor
               (void)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  undefined1 auVar6 [12];
  char in_NG;
  char in_OV;
  undefined2 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int in_w8;
  int in_w9;
  int in_w10;
  int iVar12;
  int iVar13;
  int in_w11;
  undefined4 uVar14;
  ushort *puVar15;
  long lVar16;
  uint uVar17;
  uint in_w16;
  uint unaff_w19;
  uint uVar18;
  undefined8 unaff_x20;
  int unaff_w21;
  uint uVar19;
  short *psVar20;
  long unaff_x22;
  short *psVar21;
  int unaff_w24;
  long lVar22;
  uint uVar23;
  short sVar24;
  uint uVar25;
  long unaff_x26;
  int iVar26;
  long unaff_x27;
  int unaff_w28;
  int iVar27;
  long unaff_x29;
  undefined1 auVar28 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
code_r0x06246440:
  if (in_NG != in_OV) {
    in_w9 = in_w11;
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
    *(uint *)(unaff_x29 + -0x3c) = in_w16;
    uVar18 = (uint)unaff_x20;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      *(int *)(unaff_x29 + -0x38) = unaff_w21;
      FUN_06251754();
      *(undefined4 *)(unaff_x26 + 4) = 0;
LAB_0624651c:
      iVar13 = *(int *)(unaff_x29 + -0x34);
      iVar8 = iVar13 - unaff_w24;
      if (iVar8 == 0 || iVar13 < unaff_w24) {
        iVar8 = 0;
      }
      iVar27 = iVar13 - unaff_w28;
      if (unaff_w28 <= iVar13) {
        iVar27 = 0;
      }
      *(int *)(unaff_x29 + -0x74) = iVar27;
      if ((unaff_w19 & 1) == 0) {
        iVar27 = *(int *)(unaff_x26 + 4);
        lVar16 = *(long *)(unaff_x29 + -0x48);
        uVar17 = *(uint *)(unaff_x29 + -0x3c);
        uVar14 = 0;
        *(int *)(unaff_x29 + -0x4c) = iVar27 - iVar13;
        if (iVar27 - iVar13 == 0 || iVar27 < iVar13) {
          iVar27 = iVar13;
        }
      }
      else {
        lVar16 = *(long *)(unaff_x29 + -0x48);
        uVar17 = *(uint *)(unaff_x29 + -0x3c);
        uVar14 = 1;
        *(undefined4 *)(unaff_x29 + -0x4c) = 0;
        iVar27 = iVar13;
      }
      uVar9 = DAT_0158a960;
      puVar10 = &uStack_10;
      uStack_10 = 0;
      uStack_8 = 0;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      *(long *)(unaff_x29 + -0x70) = unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar9;
      *(int *)(unaff_x29 + -0x78) = iVar8;
      *(undefined4 *)(unaff_x29 + -0x5c) = uVar14;
      if ((uVar17 & 1) != 0) {
        if ((lVar16 == 0) || (*(long *)(lVar16 + 0x40) == 0)) goto LAB_06247218;
        if (0 < *(int *)(*(long *)(lVar16 + 0x40) + 0x10)) {
          lVar16 = *(long *)(lVar16 + 0x10);
          if (lVar16 == 0) goto LAB_06247218;
          iVar13 = *(int *)(lVar16 + 0x18);
          if (iVar13 == 0) {
            iVar26 = 0;
          }
          else {
            iVar26 = *(int *)(lVar16 + 0x20);
          }
          uVar17 = 0xffffffff;
          iVar12 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) +
                   iVar27;
          if (iVar8 <= iVar12) {
            iVar8 = iVar12;
          }
          if ((iVar26 == 0) || (iVar8 <= iVar26)) goto LAB_062465d0;
          uVar17 = 0;
          lVar22 = 0;
          uVar11 = 4;
          *(long *)(unaff_x29 + -0x58) = lVar16;
          iVar12 = iVar26;
          break;
        }
      }
      uVar17 = 0xffffffff;
      goto LAB_062465d0;
    }
    *(int *)(unaff_x26 + 4) = *(int *)(unaff_x26 + 4) + in_w8;
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0624abbc();
    if (**(short **)(unaff_x29 + -0x30) != 0) {
LAB_062464fc:
      *(int *)(unaff_x29 + -0x38) = unaff_w21;
      goto LAB_0624651c;
    }
    if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    iVar8 = FUN_0624bf1c(*(undefined8 *)(unaff_x29 + -0x28));
    if (iVar8 == unaff_w21) goto LAB_062464fc;
    lVar16 = FUN_04077750(*(undefined8 *)(unaff_x29 + -0x28));
    unaff_w21 = iVar8;
    if (iVar8 < (int)uVar18) goto code_r0x0624622c;
    *(undefined4 *)(unaff_x29 + -0x34) = 0;
    unaff_w19 = 0;
    unaff_w28 = 0;
    *(undefined4 *)(unaff_x29 + -0x1c) = 0;
    in_w8 = 0;
    in_w16 = 0;
    unaff_w24 = 0x7fffffff;
  } while( true );
LAB_06247128:
  auVar28._8_8_ = uVar11;
  auVar28._0_8_ = puVar10;
  auVar6 = auVar28._0_12_;
  if ((int)uVar11 <= (int)uVar17) {
    uVar9 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d87068,(int)uVar11 << 1);
    auVar28 = FUN_0531f3bc(uVar9,*(undefined8 *)PTR_DAT_07dae4e0);
    FUN_0531eed0(unaff_x29 + -0x18,auVar28._0_8_,auVar28._8_8_,*(undefined8 *)PTR_DAT_07dae4d0);
    auVar28 = FUN_0531f3bc(uVar9,*(undefined8 *)PTR_DAT_07dae4e0);
    auVar6 = auVar28._0_12_;
    lVar16 = *(long *)(unaff_x29 + -0x58);
    *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar28;
  }
  puVar10 = auVar6._0_8_;
  if (auVar6._8_4_ <= uVar17) goto LAB_06247214;
  *(int *)((long)puVar10 + (long)(int)uVar17 * 4) = iVar26;
  if ((int)lVar22 < iVar13 + -1) {
    lVar22 = (long)(int)lVar22 + 1;
    if (*(uint *)(lVar16 + 0x18) <= (uint)lVar22) goto LAB_06247214;
    iVar12 = *(int *)(lVar16 + lVar22 * 4 + 0x20);
  }
  if ((iVar12 == 0) || (iVar26 = iVar12 + iVar26, iVar8 <= iVar26)) goto LAB_0624720c;
  uVar11 = (ulong)*(uint *)(unaff_x29 + -0x10);
  uVar17 = uVar17 + 1;
  goto LAB_06247128;
code_r0x0624622c:
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  unaff_w28 = 0;
  unaff_w19 = 0;
  in_w16 = 0;
  in_w8 = 0;
  unaff_w24 = 0x7fffffff;
  in_w9 = -1;
  in_w10 = -1;
  do {
    uVar4 = *(ushort *)(lVar16 + (long)iVar8 * 2);
    if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
    iVar13 = iVar8 + 1;
    if (uVar4 < 0x46) {
      switch(uVar4) {
      case 0x22:
      case 0x27:
        lVar22 = (long)iVar13;
        lVar2 = lVar22;
        if (iVar13 <= unaff_x27) {
          lVar2 = unaff_x27;
        }
        puVar15 = (ushort *)(lVar16 + (long)iVar13 * 2);
        do {
          if (lVar2 == lVar22) {
            iVar13 = (int)lVar2;
            goto switchD_0624628c_caseD_24;
          }
          uVar3 = *puVar15;
          if (uVar3 == 0) break;
          lVar22 = lVar22 + 1;
          puVar15 = puVar15 + 1;
        } while (uVar3 != uVar4);
        iVar13 = (int)lVar22;
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
        in_w8 = in_w8 + 2;
        break;
      case 0x2c:
        if ((in_w9 < 0) && (0 < *(int *)(unaff_x29 + -0x1c))) {
          if (in_w10 < 0) {
            *(undefined4 *)(unaff_x29 + -0x38) = 1;
            in_w10 = *(int *)(unaff_x29 + -0x1c);
          }
          else {
            iVar27 = *(int *)(unaff_x29 + -0x1c);
            in_w16 = in_w16 | in_w10 != iVar27;
            iVar8 = 1;
            if (in_w10 == iVar27) {
              iVar8 = *(int *)(unaff_x29 + -0x38) + 1;
            }
            *(int *)(unaff_x29 + -0x38) = iVar8;
            in_w10 = iVar27;
          }
        }
        break;
      case 0x2e:
        if (in_w9 < 0) {
          in_w9 = *(int *)(unaff_x29 + -0x1c);
        }
        break;
      case 0x30:
        unaff_w28 = *(int *)(unaff_x29 + -0x1c) + 1;
        iVar8 = *(int *)(unaff_x29 + -0x1c);
        if (unaff_w24 != 0x7fffffff) {
          iVar8 = unaff_w24;
        }
        *(int *)(unaff_x29 + -0x1c) = unaff_w28;
        unaff_w24 = iVar8;
        break;
      default:
        if (uVar4 == 0x45) {
LAB_06246310:
          if (((iVar13 < (int)uVar18) && (*(short *)(lVar16 + (long)iVar13 * 2) == 0x30)) ||
             ((iVar8 + 2 < (int)uVar18 &&
              (((sVar24 = *(short *)(lVar16 + (long)iVar13 * 2), sVar24 == 0x2d || (sVar24 == 0x2b))
               && (*(short *)(lVar16 + (long)(iVar8 + 2) * 2) == 0x30)))))) {
            do {
              iVar13 = iVar13 + 1;
              if ((int)uVar18 <= iVar13) {
                unaff_w19 = 1;
                goto LAB_06246438;
              }
            } while (*(short *)(lVar16 + (long)iVar13 * 2) == 0x30);
            unaff_w19 = 1;
          }
        }
      }
    }
    else if (uVar4 == 0x5c) {
      if ((iVar13 < (int)uVar18) && (*(short *)(lVar16 + (long)iVar13 * 2) != 0)) {
        iVar13 = iVar8 + 2;
      }
    }
    else {
      if (uVar4 == 0x65) goto LAB_06246310;
      if (uVar4 == 0x2030) {
        in_w8 = in_w8 + 3;
      }
    }
switchD_0624628c_caseD_24:
    iVar8 = iVar13;
  } while (iVar13 < (int)uVar18);
LAB_06246438:
  in_w11 = *(int *)(unaff_x29 + -0x1c);
  in_NG = in_w9 < 0;
  in_OV = '\0';
  goto code_r0x06246440;
LAB_0624720c:
  unaff_x26 = *(long *)(unaff_x29 + -0x70);
LAB_062465d0:
  uVar11 = FUN_06251744(unaff_x26,0);
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar11 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar16 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_0825ba12 == '\0') {
        FUN_0373b518(PTR_DAT_07da5848);
        DAT_0825ba12 = '\x01';
      }
      if (lVar16 != 0) {
        if (*(int *)(lVar16 + 0x10) == 1) {
          uVar25 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar25) {
LAB_06247214:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            lVar22 = *(long *)(unaff_x22 + 8);
            uVar7 = FUN_060bb390(lVar16,0,0);
            *(undefined2 *)(lVar22 + (long)(int)uVar25 * 2) = uVar7;
            *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
            goto LAB_06246670;
          }
        }
        FUN_060dc110(unaff_x22,lVar16,0);
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
  if (*(int *)(unaff_x29 + -0x38) < (int)uVar18) {
    psVar21 = *(short **)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
    *(uint *)(unaff_x29 + -0x8c) = uVar18 - 2;
    *(long *)(unaff_x29 + -0x88) = (long)(int)uVar18;
    do {
      uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
      iVar8 = *(int *)(unaff_x29 + -0x4c);
      uVar25 = (uint)uVar4;
      if ((iVar8 < 1) ||
         ((0x30 < uVar4 || ((1L << ((ulong)uVar25 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar16 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar16 = *(long *)(unaff_x29 + -0x48);
        uVar23 = *(uint *)(unaff_x29 + -0x28);
        iVar13 = iVar8 + 1;
        *(int *)(unaff_x29 + -0x3c) = iVar27 - iVar8;
        do {
          sVar24 = *psVar21;
          sVar5 = 0x30;
          if (sVar24 != 0) {
            psVar21 = psVar21 + 1;
            sVar5 = sVar24;
          }
          if (DAT_0825aded == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825aded = '\x01';
          }
          uVar19 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_06247214;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar19 * 2) = sVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
          }
          else {
            FUN_060dbfe4(unaff_x22,sVar5,0);
          }
          if ((-1 < (int)uVar17) && (1 < iVar27 && (uVar23 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar17) goto LAB_06247214;
            if (iVar27 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar17 * 4) + 1) {
              if (lVar16 == 0) goto LAB_06247218;
              lVar22 = *(long *)(lVar16 + 0x40);
              if (DAT_0825ba12 == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825ba12 = '\x01';
              }
              if (lVar22 == 0) goto LAB_06247218;
              if (*(int *)(lVar22 + 0x10) == 1) {
                uVar23 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar23) goto LAB_06246844;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar23) goto LAB_06247214;
                lVar16 = *(long *)(unaff_x22 + 8);
                uVar7 = FUN_060bb390(lVar22,0,0);
                *(undefined2 *)(lVar16 + (long)(int)uVar23 * 2) = uVar7;
                lVar16 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar23 + 1;
              }
              else {
LAB_06246844:
                FUN_060dc110(unaff_x22,lVar22,0);
              }
              uVar23 = *(uint *)(unaff_x29 + -0x28);
              uVar17 = uVar17 - 1;
            }
          }
          iVar13 = iVar13 + -1;
          iVar27 = iVar27 + -1;
        } while (1 < iVar13);
        iVar27 = *(int *)(unaff_x29 + -0x3c);
        iVar8 = 0;
      }
      uVar23 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar25 < 0x46) {
        switch(uVar4) {
        case 0x22:
        case 0x27:
          if ((int)uVar23 < (int)uVar18) {
            *(int *)(unaff_x29 + -0x3c) = iVar27;
            *(int *)(unaff_x29 + -0x4c) = iVar8;
            lVar16 = (ulong)uVar23 << 0x20;
            uVar19 = ~*(uint *)(unaff_x29 + -0x38);
            puVar15 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar23 * 2);
            lVar22 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar23;
            while( true ) {
              uVar4 = *puVar15;
              if ((uVar4 == 0) || (uVar4 == uVar25)) break;
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
                FUN_060dbfe4(unaff_x22,uVar4,0);
              }
              lVar16 = lVar16 + 0x100000000;
              uVar19 = uVar19 - 1;
              lVar22 = lVar22 + -1;
              puVar15 = puVar15 + 1;
              if (lVar22 == 0) goto LAB_062470b4;
            }
            iVar8 = *(int *)(unaff_x29 + -0x4c);
            iVar27 = *(int *)(unaff_x29 + -0x3c);
            uVar23 = (*(short *)((lVar16 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar19;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar8 < 0) {
            iVar8 = iVar8 + 1;
            if (iVar27 <= *(int *)(unaff_x29 + -0x78)) {
LAB_06246d4c:
              sVar24 = 0x30;
              goto LAB_06246d50;
            }
          }
          else {
            sVar24 = *psVar21;
            if (sVar24 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < iVar27) goto LAB_06246d4c;
            }
            else {
              psVar21 = psVar21 + 1;
LAB_06246d50:
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar19 = *(uint *)(unaff_x22 + 0x18);
              uVar25 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_06247214;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar19 * 2) = sVar24;
                *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
              }
              else {
                FUN_060dbfe4(unaff_x22,sVar24,0);
              }
              if ((-1 < (int)uVar17) && (1 < iVar27 && (uVar25 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar17) goto LAB_06247214;
                if (iVar27 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar17 * 4) + 1) {
                  if (lVar16 == 0) goto LAB_06247218;
                  lVar16 = *(long *)(lVar16 + 0x40);
                  if (DAT_0825ba12 == '\0') {
                    FUN_0373b518(PTR_DAT_07da5848);
                    DAT_0825ba12 = '\x01';
                  }
                  if (lVar16 == 0) goto LAB_06247218;
                  if (*(int *)(lVar16 + 0x10) == 1) {
                    uVar25 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar25) goto LAB_06246e68;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar25) goto LAB_06247214;
                    lVar22 = *(long *)(unaff_x22 + 8);
                    uVar7 = FUN_060bb390(lVar16,0,0);
                    *(undefined2 *)(lVar22 + (long)(int)uVar25 * 2) = uVar7;
                    *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
                  }
                  else {
LAB_06246e68:
                    FUN_060dc110(unaff_x22,lVar16,0);
                  }
                  uVar17 = uVar17 - 1;
                }
              }
            }
          }
          iVar27 = iVar27 + -1;
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
          uVar19 = *(uint *)(unaff_x22 + 0x18);
          uVar25 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar25 <= (int)uVar19) goto LAB_06246a68;
LAB_06246b00:
          if (uVar25 <= uVar19) goto LAB_06247214;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar19 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
          break;
        case 0x25:
          if (lVar16 == 0) goto LAB_06247218;
          lVar16 = *(long *)(lVar16 + 0x90);
joined_r0x06246994:
          if (DAT_0825ba12 == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825ba12 = '\x01';
          }
          if (lVar16 == 0) goto LAB_06247218;
          if (*(int *)(lVar16 + 0x10) == 1) {
            uVar25 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar25 < *(uint *)(unaff_x22 + 0x10)) {
                lVar22 = *(long *)(unaff_x22 + 8);
                uVar7 = FUN_060bb390(lVar16,0,0);
                *(undefined2 *)(lVar22 + (long)(int)uVar25 * 2) = uVar7;
                *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
                break;
              }
              goto LAB_06247214;
            }
          }
          FUN_060dc110(unaff_x22,lVar16,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && iVar27 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar21 != 0)))) {
              if (lVar16 == 0) goto LAB_06247218;
              lVar16 = *(long *)(lVar16 + 0x38);
              if (DAT_0825ba12 == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825ba12 = '\x01';
              }
              if (lVar16 == 0) goto LAB_06247218;
              if (*(int *)(lVar16 + 0x10) == 1) {
                uVar25 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar25 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar22 = *(long *)(unaff_x22 + 8);
                    uVar7 = FUN_060bb390(lVar16,0,0);
                    *(undefined2 *)(lVar22 + (long)(int)uVar25 * 2) = uVar7;
                    *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
                    iVar27 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_06247214;
                }
              }
              FUN_060dc110(unaff_x22,lVar16,0);
              iVar27 = 0;
              *(undefined4 *)(unaff_x29 + -0x7c) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0x7c) = 0;
              iVar27 = 0;
            }
          }
          break;
        default:
          if (uVar4 != 0x45) goto switchD_062468ac_caseD_24;
LAB_06246a98:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar13 = *(int *)(unaff_x29 + -0x38);
            if (DAT_0825aded == '\0') {
              FUN_0373b518(PTR_DAT_07da5848);
              DAT_0825aded = '\x01';
            }
            uVar19 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_06247214;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar19 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
            }
            else {
              FUN_060dbfe4(unaff_x22,uVar25,0);
            }
            if ((int)uVar23 < (int)uVar18) {
              sVar24 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar23 * 2);
              if ((sVar24 == 0x2d) || (sVar24 == 0x2b)) {
                if (DAT_0825aded == '\0') {
                  FUN_0373b518(PTR_DAT_07da5848);
                  DAT_0825aded = '\x01';
                }
                uVar25 = *(uint *)(unaff_x22 + 0x18);
                uVar23 = iVar13 + 2;
                if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar25) goto LAB_06247214;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar25 * 2) = sVar24;
                  *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
                }
                else {
                  FUN_060dbfe4(unaff_x22,sVar24,0);
                }
              }
              if ((int)uVar23 < (int)uVar18) {
                psVar20 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar23 * 2);
                lVar16 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar23;
                while (*psVar20 == 0x30) {
                  if (DAT_0825aded == '\0') {
                    FUN_0373b518(PTR_DAT_07da5848);
                    DAT_0825aded = '\x01';
                  }
                  uVar25 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar25) goto LAB_06247214;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar25 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
                  }
                  else {
                    FUN_060dbfe4(unaff_x22,0x30,0);
                  }
                  uVar23 = uVar23 + 1;
                  lVar16 = lVar16 + -1;
                  psVar20 = psVar20 + 1;
                  if (lVar16 == 0) goto LAB_062470b4;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            iVar13 = *(int *)(unaff_x29 + -0x38);
            if (((int)uVar23 < (int)uVar18) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar23 * 2) == 0x30)) {
              uVar14 = 0;
              iVar26 = 1;
              goto LAB_06246f80;
            }
            iVar26 = iVar13 + 2;
            if ((int)uVar18 <= iVar26) {
LAB_06246fc0:
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar25 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar25) goto LAB_06247214;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar25 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
              }
              else {
                FUN_060dbfe4(unaff_x22,uVar4,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar24 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar23 * 2);
            if (sVar24 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar26 * 2) != 0x30)
              goto LAB_06246fc0;
              iVar26 = 0;
              uVar14 = 0;
            }
            else {
              if ((sVar24 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar26 * 2) != 0x30))
              goto LAB_06246fc0;
              iVar26 = 0;
              uVar14 = 1;
            }
LAB_06246f80:
            uVar25 = iVar13 + 2;
            iVar12 = iVar26;
            uVar23 = uVar25;
            if ((int)uVar25 < (int)uVar18) {
              iVar1 = *(int *)(unaff_x29 + -0x8c) + iVar26;
              do {
                iVar12 = iVar26;
                uVar23 = uVar25;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar25 * 2) != 0x30) break;
                uVar25 = uVar25 + 1;
                iVar26 = iVar26 + 1;
                iVar12 = iVar1 - iVar13;
                uVar23 = uVar18;
              } while (uVar18 != uVar25);
            }
            if (9 < iVar12) {
              iVar12 = 10;
            }
            if (**(short **)(unaff_x29 + -0x30) == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
            }
            if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar14;
              thunk_FUN_03798b70();
              uVar14 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_0624c068(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar13,uVar4,iVar12,uVar14);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar4 != 0x5c) {
          if (uVar4 == 0x65) goto LAB_06246a98;
          if (uVar4 != 0x2030) goto switchD_062468ac_caseD_24;
          if (lVar16 != 0) {
            lVar16 = *(long *)(lVar16 + 0x98);
            goto joined_r0x06246994;
          }
          goto LAB_06247218;
        }
        if (((int)uVar18 <= (int)uVar23) ||
           (uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar23 * 2), uVar4 == 0))
        goto switchD_062468ac_caseD_2c;
        if (DAT_0825aded == '\0') {
          FUN_0373b518(PTR_DAT_07da5848);
          DAT_0825aded = '\x01';
        }
        uVar19 = *(uint *)(unaff_x22 + 0x18);
        uVar25 = *(uint *)(unaff_x22 + 0x10);
        uVar23 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar19 < (int)uVar25) goto LAB_06246b00;
LAB_06246a68:
        FUN_060dbfe4(unaff_x22,uVar4,0);
      }
switchD_062468ac_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar8;
      *(uint *)(unaff_x29 + -0x38) = uVar23;
    } while ((int)uVar23 < (int)uVar18);
  }
LAB_062470b4:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


