/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$.ctor
ENTRY_POINT: 062463a8
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase___ctor(long param_1)

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
  int iVar11;
  int in_w11;
  undefined4 uVar12;
  uint uVar13;
  long lVar14;
  uint in_w16;
  byte *in_x17;
  uint unaff_w19;
  uint uVar15;
  undefined8 unaff_x20;
  int unaff_w21;
  uint uVar16;
  short *psVar17;
  long unaff_x22;
  short *psVar18;
  int unaff_w24;
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
  
  iVar10 = in_w10;
  if (0 < *(int *)(unaff_x29 + -0x1c)) {
    if (in_w10 < 0) {
      *(undefined4 *)(unaff_x29 + -0x38) = 1;
      iVar10 = *(int *)(unaff_x29 + -0x1c);
    }
    else {
      iVar10 = *(int *)(unaff_x29 + -0x1c);
      in_w16 = in_w16 | in_w10 != iVar10;
      iVar6 = 1;
      if (in_w10 == iVar10) {
        iVar6 = *(int *)(unaff_x29 + -0x38) + 1;
      }
      *(int *)(unaff_x29 + -0x38) = iVar6;
    }
  }
switchD_0624628c_caseD_24:
  iVar6 = in_w11;
  uVar15 = (uint)unaff_x20;
  if (iVar6 < (int)uVar15) goto LAB_06246258;
LAB_06246438:
  if (in_w9 < 0) {
    in_w9 = *(int *)(unaff_x29 + -0x1c);
  }
  *(int *)(unaff_x29 + -0x34) = in_w9;
  if (-1 < iVar10) {
    if (iVar10 == in_w9) {
      in_w8 = *(int *)(unaff_x29 + -0x38) * -3 + in_w8;
    }
    else {
      in_w16 = 1;
    }
  }
  do {
    *(uint *)(unaff_x29 + -0x3c) = in_w16;
    if (**(short **)(unaff_x29 + -0x30) == 0) {
      *(int *)(unaff_x29 + -0x38) = unaff_w21;
      FUN_06251754();
      *(undefined4 *)(unaff_x26 + 4) = 0;
LAB_0624651c:
      iVar6 = *(int *)(unaff_x29 + -0x34);
      iVar10 = iVar6 - unaff_w24;
      if (iVar10 == 0 || iVar6 < unaff_w24) {
        iVar10 = 0;
      }
      iVar24 = iVar6 - unaff_w28;
      if (unaff_w28 <= iVar6) {
        iVar24 = 0;
      }
      *(int *)(unaff_x29 + -0x74) = iVar24;
      if ((unaff_w19 & 1) == 0) {
        iVar24 = *(int *)(unaff_x26 + 4);
        lVar14 = *(long *)(unaff_x29 + -0x48);
        uVar13 = *(uint *)(unaff_x29 + -0x3c);
        uVar12 = 0;
        *(int *)(unaff_x29 + -0x4c) = iVar24 - iVar6;
        if (iVar24 - iVar6 == 0 || iVar24 < iVar6) {
          iVar24 = iVar6;
        }
      }
      else {
        lVar14 = *(long *)(unaff_x29 + -0x48);
        uVar13 = *(uint *)(unaff_x29 + -0x3c);
        uVar12 = 1;
        *(undefined4 *)(unaff_x29 + -0x4c) = 0;
        iVar24 = iVar6;
      }
      uVar7 = DAT_0158a960;
      puVar8 = &uStack_10;
      uStack_10 = 0;
      uStack_8 = 0;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      *(long *)(unaff_x29 + -0x70) = unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x10) = uVar7;
      *(int *)(unaff_x29 + -0x78) = iVar10;
      *(undefined4 *)(unaff_x29 + -0x5c) = uVar12;
      if ((uVar13 & 1) != 0) {
        if ((lVar14 == 0) || (*(long *)(lVar14 + 0x40) == 0)) goto LAB_06247218;
        if (0 < *(int *)(*(long *)(lVar14 + 0x40) + 0x10)) {
          lVar14 = *(long *)(lVar14 + 0x10);
          if (lVar14 == 0) goto LAB_06247218;
          iVar6 = *(int *)(lVar14 + 0x18);
          if (iVar6 == 0) {
            iVar23 = 0;
          }
          else {
            iVar23 = *(int *)(lVar14 + 0x20);
          }
          uVar13 = 0xffffffff;
          iVar11 = (*(uint *)(unaff_x29 + -0x4c) & (int)*(uint *)(unaff_x29 + -0x4c) >> 0x1f) +
                   iVar24;
          if (iVar10 <= iVar11) {
            iVar10 = iVar11;
          }
          if ((iVar23 == 0) || (iVar10 <= iVar23)) goto LAB_062465d0;
          uVar13 = 0;
          lVar19 = 0;
          uVar9 = 4;
          *(long *)(unaff_x29 + -0x58) = lVar14;
          iVar11 = iVar23;
          break;
        }
      }
      uVar13 = 0xffffffff;
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
    iVar6 = FUN_0624bf1c(*(undefined8 *)(unaff_x29 + -0x28));
    if (iVar6 == unaff_w21) goto LAB_062464fc;
    param_1 = FUN_04077750(*(undefined8 *)(unaff_x29 + -0x28));
    unaff_w21 = iVar6;
    if (iVar6 < (int)uVar15) goto code_r0x0624622c;
    *(undefined4 *)(unaff_x29 + -0x34) = 0;
    unaff_w19 = 0;
    unaff_w28 = 0;
    *(undefined4 *)(unaff_x29 + -0x1c) = 0;
    in_w8 = 0;
    in_w16 = 0;
    unaff_w24 = 0x7fffffff;
  } while( true );
LAB_06247128:
  auVar26._8_8_ = uVar9;
  auVar26._0_8_ = puVar8;
  auVar4 = auVar26._0_12_;
  if ((int)uVar9 <= (int)uVar13) {
    uVar7 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d87068,(int)uVar9 << 1);
    auVar26 = FUN_0531f3bc(uVar7,*(undefined8 *)PTR_DAT_07dae4e0);
    FUN_0531eed0(unaff_x29 + -0x18,auVar26._0_8_,auVar26._8_8_,*(undefined8 *)PTR_DAT_07dae4d0);
    auVar26 = FUN_0531f3bc(uVar7,*(undefined8 *)PTR_DAT_07dae4e0);
    auVar4 = auVar26._0_12_;
    lVar14 = *(long *)(unaff_x29 + -0x58);
    *(undefined1 (*) [16])(unaff_x29 + -0x18) = auVar26;
  }
  puVar8 = auVar4._0_8_;
  if (auVar4._8_4_ <= uVar13) goto LAB_06247214;
  *(int *)((long)puVar8 + (long)(int)uVar13 * 4) = iVar23;
  if ((int)lVar19 < iVar6 + -1) {
    lVar19 = (long)(int)lVar19 + 1;
    if (*(uint *)(lVar14 + 0x18) <= (uint)lVar19) goto LAB_06247214;
    iVar11 = *(int *)(lVar14 + lVar19 * 4 + 0x20);
  }
  if ((iVar11 == 0) || (iVar23 = iVar11 + iVar23, iVar10 <= iVar23)) goto LAB_0624720c;
  uVar9 = (ulong)*(uint *)(unaff_x29 + -0x10);
  uVar13 = uVar13 + 1;
  goto LAB_06247128;
code_r0x0624622c:
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  unaff_w28 = 0;
  unaff_w19 = 0;
  in_w16 = 0;
  in_w8 = 0;
  unaff_w24 = 0x7fffffff;
  in_w9 = -1;
  iVar10 = -1;
  in_x17 = &switchD_0624628c::switchdataD_016ab092;
LAB_06246258:
  uVar2 = *(ushort *)(param_1 + (long)iVar6 * 2);
  if ((uVar2 != 0x3b) && (uVar2 != 0)) {
    in_w11 = iVar6 + 1;
    uVar13 = (uint)uVar2;
    if (uVar2 < 0x46) {
      if (uVar13 - 0x22 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x0624628c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)in_x17[uVar13 - 0x22] * 4 + 0x6246290))();
        return;
      }
      if (uVar13 != 0x45) goto switchD_0624628c_caseD_24;
    }
    else {
      if (uVar2 == 0x5c) {
        if ((in_w11 < (int)uVar15) && (*(short *)(param_1 + (long)in_w11 * 2) != 0)) {
          in_w11 = iVar6 + 2;
        }
        goto switchD_0624628c_caseD_24;
      }
      if (uVar2 != 0x65) {
        if (uVar13 == 0x2030) {
          in_w8 = in_w8 + 3;
        }
        goto switchD_0624628c_caseD_24;
      }
    }
    if ((((int)uVar15 <= in_w11) || (*(short *)(param_1 + (long)in_w11 * 2) != 0x30)) &&
       (((int)uVar15 <= iVar6 + 2 ||
        (((sVar21 = *(short *)(param_1 + (long)in_w11 * 2), sVar21 != 0x2d && (sVar21 != 0x2b)) ||
         (*(short *)(param_1 + (long)(iVar6 + 2) * 2) != 0x30)))))) goto switchD_0624628c_caseD_24;
    while (in_w11 = in_w11 + 1, in_w11 < (int)uVar15) {
      if (*(short *)(param_1 + (long)in_w11 * 2) != 0x30) {
        unaff_w19 = 1;
        goto switchD_0624628c_caseD_24;
      }
    }
    unaff_w19 = 1;
  }
  goto LAB_06246438;
LAB_0624720c:
  unaff_x26 = *(long *)(unaff_x29 + -0x70);
LAB_062465d0:
  uVar9 = FUN_06251744(unaff_x26,0);
  if ((*(int *)(unaff_x29 + -0x38) == 0) && ((uVar9 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0x48) != 0) {
      lVar14 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x30);
      if (DAT_0825ba12 == '\0') {
        FUN_0373b518(PTR_DAT_07da5848);
        DAT_0825ba12 = '\x01';
      }
      if (lVar14 != 0) {
        if (*(int *)(lVar14 + 0x10) == 1) {
          uVar22 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar22) {
LAB_06247214:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            lVar19 = *(long *)(unaff_x22 + 8);
            uVar5 = FUN_060bb390(lVar14,0,0);
            *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
            goto LAB_06246670;
          }
        }
        FUN_060dc110(unaff_x22,lVar14,0);
        goto LAB_06246670;
      }
    }
LAB_06247218:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
LAB_06246670:
  uVar7 = FUN_04077750(*(undefined8 *)(unaff_x29 + -0x28),unaff_x20,*(undefined8 *)PTR_DAT_07da5228)
  ;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar7;
  if (*(int *)(unaff_x29 + -0x38) < (int)uVar15) {
    psVar18 = *(short **)(unaff_x29 + -0x30);
    *(undefined4 *)(unaff_x29 + -0x7c) = 0;
    *(uint *)(unaff_x29 + -0x28) = *(uint *)(unaff_x29 + -0x3c) ^ 1;
    *(uint *)(unaff_x29 + -0x8c) = uVar15 - 2;
    *(long *)(unaff_x29 + -0x88) = (long)(int)uVar15;
    do {
      uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)*(int *)(unaff_x29 + -0x38) * 2);
      if ((uVar2 == 0x3b) || (uVar2 == 0)) break;
      iVar10 = *(int *)(unaff_x29 + -0x4c);
      uVar22 = (uint)uVar2;
      if ((iVar10 < 1) ||
         ((0x30 < uVar2 || ((1L << ((ulong)uVar22 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar14 = *(long *)(unaff_x29 + -0x48);
      }
      else {
        lVar14 = *(long *)(unaff_x29 + -0x48);
        uVar20 = *(uint *)(unaff_x29 + -0x28);
        iVar6 = iVar10 + 1;
        *(int *)(unaff_x29 + -0x3c) = iVar24 - iVar10;
        do {
          sVar21 = *psVar18;
          sVar3 = 0x30;
          if (sVar21 != 0) {
            psVar18 = psVar18 + 1;
            sVar3 = sVar21;
          }
          if (DAT_0825aded == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825aded = '\x01';
          }
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_06247214;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar3;
            *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
          }
          else {
            FUN_060dbfe4(unaff_x22,sVar3,0);
          }
          if ((-1 < (int)uVar13) && (1 < iVar24 && (uVar20 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x10) <= uVar13) goto LAB_06247214;
            if (iVar24 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar13 * 4) + 1) {
              if (lVar14 == 0) goto LAB_06247218;
              lVar19 = *(long *)(lVar14 + 0x40);
              if (DAT_0825ba12 == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825ba12 = '\x01';
              }
              if (lVar19 == 0) goto LAB_06247218;
              if (*(int *)(lVar19 + 0x10) == 1) {
                uVar20 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_06246844;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_06247214;
                lVar14 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_060bb390(lVar19,0,0);
                *(undefined2 *)(lVar14 + (long)(int)uVar20 * 2) = uVar5;
                lVar14 = *(long *)(unaff_x29 + -0x48);
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
              }
              else {
LAB_06246844:
                FUN_060dc110(unaff_x22,lVar19,0);
              }
              uVar20 = *(uint *)(unaff_x29 + -0x28);
              uVar13 = uVar13 - 1;
            }
          }
          iVar6 = iVar6 + -1;
          iVar24 = iVar24 + -1;
        } while (1 < iVar6);
        iVar24 = *(int *)(unaff_x29 + -0x3c);
        iVar10 = 0;
      }
      uVar20 = *(int *)(unaff_x29 + -0x38) + 1;
      if (uVar22 < 0x46) {
        switch(uVar2) {
        case 0x22:
        case 0x27:
          if ((int)uVar20 < (int)uVar15) {
            *(int *)(unaff_x29 + -0x3c) = iVar24;
            *(int *)(unaff_x29 + -0x4c) = iVar10;
            lVar14 = (ulong)uVar20 << 0x20;
            uVar16 = ~*(uint *)(unaff_x29 + -0x38);
            puVar25 = (ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
            lVar19 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar20;
            while( true ) {
              uVar2 = *puVar25;
              if ((uVar2 == 0) || (uVar2 == uVar22)) break;
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar20 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_06247214;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
              }
              else {
                FUN_060dbfe4(unaff_x22,uVar2,0);
              }
              lVar14 = lVar14 + 0x100000000;
              uVar16 = uVar16 - 1;
              lVar19 = lVar19 + -1;
              puVar25 = puVar25 + 1;
              if (lVar19 == 0) goto LAB_062470b4;
            }
            iVar10 = *(int *)(unaff_x29 + -0x4c);
            iVar24 = *(int *)(unaff_x29 + -0x3c);
            uVar20 = (*(short *)((lVar14 >> 0x1f) + *(long *)(unaff_x29 + -0x58)) != 0) - uVar16;
          }
          break;
        case 0x23:
        case 0x30:
          if (iVar10 < 0) {
            iVar10 = iVar10 + 1;
            if (iVar24 <= *(int *)(unaff_x29 + -0x78)) {
LAB_06246d4c:
              sVar21 = 0x30;
              goto LAB_06246d50;
            }
          }
          else {
            sVar21 = *psVar18;
            if (sVar21 == 0) {
              if (*(int *)(unaff_x29 + -0x74) < iVar24) goto LAB_06246d4c;
            }
            else {
              psVar18 = psVar18 + 1;
LAB_06246d50:
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar16 = *(uint *)(unaff_x22 + 0x18);
              uVar22 = *(uint *)(unaff_x29 + -0x28);
              if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_06247214;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar21;
                *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
              }
              else {
                FUN_060dbfe4(unaff_x22,sVar21,0);
              }
              if ((-1 < (int)uVar13) && (1 < iVar24 && (uVar22 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x10) <= uVar13) goto LAB_06247214;
                if (iVar24 == *(int *)(*(long *)(unaff_x29 + -0x18) + (ulong)uVar13 * 4) + 1) {
                  if (lVar14 == 0) goto LAB_06247218;
                  lVar14 = *(long *)(lVar14 + 0x40);
                  if (DAT_0825ba12 == '\0') {
                    FUN_0373b518(PTR_DAT_07da5848);
                    DAT_0825ba12 = '\x01';
                  }
                  if (lVar14 == 0) goto LAB_06247218;
                  if (*(int *)(lVar14 + 0x10) == 1) {
                    uVar22 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar22) goto LAB_06246e68;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_06247214;
                    lVar19 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_060bb390(lVar14,0,0);
                    *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                  }
                  else {
LAB_06246e68:
                    FUN_060dc110(unaff_x22,lVar14,0);
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
switchD_062468ac_caseD_24:
          if (DAT_0825aded == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825aded = '\x01';
          }
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          uVar22 = *(uint *)(unaff_x22 + 0x10);
          if ((int)uVar22 <= (int)uVar16) goto LAB_06246a68;
LAB_06246b00:
          if (uVar22 <= uVar16) goto LAB_06247214;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = uVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
          break;
        case 0x25:
          if (lVar14 == 0) goto LAB_06247218;
          lVar14 = *(long *)(lVar14 + 0x90);
joined_r0x06246994:
          if (DAT_0825ba12 == '\0') {
            FUN_0373b518(PTR_DAT_07da5848);
            DAT_0825ba12 = '\x01';
          }
          if (lVar14 == 0) goto LAB_06247218;
          if (*(int *)(lVar14 + 0x10) == 1) {
            uVar22 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar22 < *(uint *)(unaff_x22 + 0x10)) {
                lVar19 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_060bb390(lVar14,0,0);
                *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
                *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                break;
              }
              goto LAB_06247214;
            }
          }
          FUN_060dc110(unaff_x22,lVar14,0);
          break;
        case 0x2c:
          break;
        case 0x2e:
          if ((*(uint *)(unaff_x29 + -0x7c) & 1) == 0 && iVar24 == 0) {
            if ((*(int *)(unaff_x29 + -0x74) < 0) ||
               ((*(int *)(unaff_x29 + -0x34) < *(int *)(unaff_x29 + -0x1c) && (*psVar18 != 0)))) {
              if (lVar14 == 0) goto LAB_06247218;
              lVar14 = *(long *)(lVar14 + 0x38);
              if (DAT_0825ba12 == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825ba12 = '\x01';
              }
              if (lVar14 == 0) goto LAB_06247218;
              if (*(int *)(lVar14 + 0x10) == 1) {
                uVar22 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (uVar22 < *(uint *)(unaff_x22 + 0x10)) {
                    lVar19 = *(long *)(unaff_x22 + 8);
                    uVar5 = FUN_060bb390(lVar14,0,0);
                    *(undefined2 *)(lVar19 + (long)(int)uVar22 * 2) = uVar5;
                    *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                    iVar24 = 0;
                    *(undefined4 *)(unaff_x29 + -0x7c) = 1;
                    break;
                  }
                  goto LAB_06247214;
                }
              }
              FUN_060dc110(unaff_x22,lVar14,0);
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
          if (uVar2 != 0x45) goto switchD_062468ac_caseD_24;
LAB_06246a98:
          if ((*(uint *)(unaff_x29 + -0x5c) & 1) == 0) {
            iVar6 = *(int *)(unaff_x29 + -0x38);
            if (DAT_0825aded == '\0') {
              FUN_0373b518(PTR_DAT_07da5848);
              DAT_0825aded = '\x01';
            }
            uVar16 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_06247214;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = uVar2;
              *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
            }
            else {
              FUN_060dbfe4(unaff_x22,uVar22,0);
            }
            if ((int)uVar20 < (int)uVar15) {
              sVar21 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
              if ((sVar21 == 0x2d) || (sVar21 == 0x2b)) {
                if (DAT_0825aded == '\0') {
                  FUN_0373b518(PTR_DAT_07da5848);
                  DAT_0825aded = '\x01';
                }
                uVar22 = *(uint *)(unaff_x22 + 0x18);
                uVar20 = iVar6 + 2;
                if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_06247214;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = sVar21;
                  *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                }
                else {
                  FUN_060dbfe4(unaff_x22,sVar21,0);
                }
              }
              if ((int)uVar20 < (int)uVar15) {
                psVar17 = (short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
                lVar14 = *(long *)(unaff_x29 + -0x88) - (long)(int)uVar20;
                while (*psVar17 == 0x30) {
                  if (DAT_0825aded == '\0') {
                    FUN_0373b518(PTR_DAT_07da5848);
                    DAT_0825aded = '\x01';
                  }
                  uVar22 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_06247214;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                  }
                  else {
                    FUN_060dbfe4(unaff_x22,0x30,0);
                  }
                  uVar20 = uVar20 + 1;
                  lVar14 = lVar14 + -1;
                  psVar17 = psVar17 + 1;
                  if (lVar14 == 0) goto LAB_062470b4;
                }
                *(undefined4 *)(unaff_x29 + -0x5c) = 0;
                break;
              }
            }
          }
          else {
            iVar6 = *(int *)(unaff_x29 + -0x38);
            if (((int)uVar20 < (int)uVar15) &&
               (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2) == 0x30)) {
              uVar12 = 0;
              iVar23 = 1;
              goto LAB_06246f80;
            }
            iVar23 = iVar6 + 2;
            if ((int)uVar15 <= iVar23) {
LAB_06246fc0:
              if (DAT_0825aded == '\0') {
                FUN_0373b518(PTR_DAT_07da5848);
                DAT_0825aded = '\x01';
              }
              uVar22 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_06247214;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
              }
              else {
                FUN_060dbfe4(unaff_x22,uVar2,0);
              }
              *(undefined4 *)(unaff_x29 + -0x5c) = 1;
              break;
            }
            sVar21 = *(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2);
            if (sVar21 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar23 * 2) != 0x30)
              goto LAB_06246fc0;
              iVar23 = 0;
              uVar12 = 0;
            }
            else {
              if ((sVar21 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)iVar23 * 2) != 0x30))
              goto LAB_06246fc0;
              iVar23 = 0;
              uVar12 = 1;
            }
LAB_06246f80:
            uVar22 = iVar6 + 2;
            iVar11 = iVar23;
            uVar20 = uVar22;
            if ((int)uVar22 < (int)uVar15) {
              iVar1 = *(int *)(unaff_x29 + -0x8c) + iVar23;
              do {
                iVar11 = iVar23;
                uVar20 = uVar22;
                if (*(short *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar22 * 2) != 0x30) break;
                uVar22 = uVar22 + 1;
                iVar23 = iVar23 + 1;
                iVar11 = iVar1 - iVar6;
                uVar20 = uVar15;
              } while (uVar15 != uVar22);
            }
            if (9 < iVar11) {
              iVar11 = 10;
            }
            if (**(short **)(unaff_x29 + -0x30) == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(long *)(unaff_x29 + -0x70) + 4) - *(int *)(unaff_x29 + -0x34);
            }
            if (*(int *)(*(long *)PTR_DAT_07daae20 + 0xe4) == 0) {
              *(undefined4 *)(unaff_x29 + -0x38) = uVar12;
              thunk_FUN_03798b70();
              uVar12 = *(undefined4 *)(unaff_x29 + -0x38);
            }
            FUN_0624c068(unaff_x22,*(undefined8 *)(unaff_x29 + -0x48),iVar6,uVar2,iVar11,uVar12);
          }
          *(undefined4 *)(unaff_x29 + -0x5c) = 0;
        }
      }
      else {
        if (uVar2 != 0x5c) {
          if (uVar2 == 0x65) goto LAB_06246a98;
          if (uVar2 != 0x2030) goto switchD_062468ac_caseD_24;
          if (lVar14 != 0) {
            lVar14 = *(long *)(lVar14 + 0x98);
            goto joined_r0x06246994;
          }
          goto LAB_06247218;
        }
        if (((int)uVar15 <= (int)uVar20) ||
           (uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0x58) + (long)(int)uVar20 * 2), uVar2 == 0))
        goto switchD_062468ac_caseD_2c;
        if (DAT_0825aded == '\0') {
          FUN_0373b518(PTR_DAT_07da5848);
          DAT_0825aded = '\x01';
        }
        uVar16 = *(uint *)(unaff_x22 + 0x18);
        uVar22 = *(uint *)(unaff_x22 + 0x10);
        uVar20 = *(int *)(unaff_x29 + -0x38) + 2;
        if ((int)uVar16 < (int)uVar22) goto LAB_06246b00;
LAB_06246a68:
        FUN_060dbfe4(unaff_x22,uVar2,0);
      }
switchD_062468ac_caseD_2c:
      *(int *)(unaff_x29 + -0x4c) = iVar10;
      *(uint *)(unaff_x29 + -0x38) = uVar20;
    } while ((int)uVar20 < (int)uVar15);
  }
LAB_062470b4:
  if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


