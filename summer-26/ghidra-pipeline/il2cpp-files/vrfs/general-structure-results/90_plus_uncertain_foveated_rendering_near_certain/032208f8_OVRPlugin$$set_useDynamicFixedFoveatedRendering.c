/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 032208f8
PROGRAM: vrfs-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFixedFoveatedRendering
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  undefined2 uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  uint unaff_w19;
  undefined8 unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  short *psVar13;
  uint uVar14;
  undefined8 unaff_x25;
  short sVar15;
  int unaff_w26;
  ushort *puVar16;
  long lVar17;
  long unaff_x27;
  int unaff_w28;
  short *psVar18;
  long unaff_x29;
  undefined1 auVar19 [16];
  
  auVar19._8_8_ = param_6;
  auVar19._0_8_ = param_4;
  do {
    FUN_026d03fc(param_2,auVar19._0_8_,auVar19._8_8_,*param_1);
    auVar19 = FUN_026d09ec(unaff_x25,*(undefined8 *)PTR_DAT_06dd1ae8);
    uVar7 = auVar19._8_8_;
    iVar11 = *(int *)(unaff_x29 + -0xb8);
    iVar2 = *(int *)(unaff_x29 + -0xb0);
    lVar12 = *(long *)(unaff_x29 + -0xa8);
    uVar9 = *(undefined8 *)(unaff_x29 + -0x90);
    *(undefined1 (*) [16])(unaff_x29 + -0x68) = auVar19;
    do {
      if ((uint)uVar7 <= unaff_w19) goto LAB_03220980;
      *(int *)(auVar19._0_8_ + (long)(int)unaff_w19 * 4) = unaff_w28;
      if ((int)unaff_x27 < iVar11) {
        unaff_x27 = (long)(int)unaff_x27 + 1;
        if (*(uint *)(lVar12 + 0x18) <= (uint)unaff_x27) goto LAB_03220980;
        unaff_w26 = *(int *)(lVar12 + unaff_x27 * 4 + 0x20);
      }
      if ((unaff_w26 == 0) || (unaff_w28 = unaff_w26 + unaff_w28, iVar2 <= unaff_w28)) {
        uVar7 = FUN_031c833c(uVar9,0);
        if ((unaff_w24 == 0) && ((uVar7 & 1) != 0)) {
          if (*(long *)(unaff_x29 + -0xa0) == 0) goto LAB_03220984;
          lVar12 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x30);
          if (cRam0000000007237eb3 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            cRam0000000007237eb3 = '\x01';
          }
          if (lVar12 == 0) goto LAB_03220984;
          if (*(int *)(lVar12 + 0x10) == 1) {
            uVar14 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar14 < *(uint *)(unaff_x22 + 0x10)) {
                lVar17 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_02521d48(lVar12,0,0);
                *(undefined2 *)(lVar17 + (long)(int)uVar14 * 2) = uVar6;
                *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
                goto LAB_0321fe4c;
              }
              goto LAB_03220980;
            }
          }
          FUN_025eb69c();
        }
LAB_0321fe4c:
        uVar9 = FUN_018cc790(*(undefined8 *)(unaff_x29 + -0x78));
        *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x20;
        *(undefined8 *)(unaff_x29 + -0xa8) = uVar9;
        if ((int)unaff_x20 <= (int)unaff_w24) goto LAB_03220838;
        psVar18 = *(short **)(unaff_x29 + -0x80);
        *(undefined4 *)(unaff_x29 + -0xb8) = 0;
        *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x94) ^ 1;
        *(int *)(unaff_x29 + -0x94) = -(int)*(undefined8 *)(unaff_x29 + -0xb0);
        goto LAB_0321fe90;
      }
      uVar14 = *(uint *)(unaff_x29 + -0x60);
      uVar7 = (ulong)uVar14;
      unaff_w19 = unaff_w19 + 1;
    } while ((int)unaff_w19 < (int)uVar14);
    unaff_x25 = FUN_0160edfc(*(undefined8 *)PTR_DAT_06dd9ff0,uVar14 << 1);
    auVar19 = FUN_026d09ec(unaff_x25,*(undefined8 *)PTR_DAT_06dd1ae8);
    param_2 = unaff_x29 + -0x68;
    param_1 = (undefined8 *)PTR_DAT_06e24900;
  } while( true );
LAB_0321fe90:
  do {
    uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_w24 * 2);
    if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
    if ((unaff_w21 < 1) ||
       ((0x30 < uVar4 || ((1L << ((ulong)uVar4 & 0x3f) & 0x1400800000000U) == 0)))) {
      lVar12 = *(long *)(unaff_x29 + -0xa0);
    }
    else {
      lVar12 = *(long *)(unaff_x29 + -0xa0);
      uVar14 = *(uint *)(unaff_x29 + -0x78);
      iVar11 = unaff_w21;
      do {
        sVar15 = *psVar18;
        sVar5 = 0x30;
        if (sVar15 != 0) {
          psVar18 = psVar18 + 1;
          sVar5 = sVar15;
        }
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar10 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = sVar5;
          *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
        }
        else {
          FUN_025eb570();
        }
        if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar14 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
          if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1) {
            if (lVar12 == 0) goto LAB_03220984;
            lVar17 = *(long *)(lVar12 + 0x40);
            if (cRam0000000007237eb3 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              cRam0000000007237eb3 = '\x01';
            }
            if (lVar17 == 0) goto LAB_03220984;
            if (*(int *)(lVar17 + 0x10) == 1) {
              uVar14 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar14) goto LAB_03220008;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_03220980;
              lVar12 = *(long *)(unaff_x22 + 8);
              uVar6 = FUN_02521d48(lVar17,0,0);
              *(undefined2 *)(lVar12 + (long)(int)uVar14 * 2) = uVar6;
              lVar12 = *(long *)(unaff_x29 + -0xa0);
              *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
            }
            else {
LAB_03220008:
              FUN_025eb69c();
            }
            uVar14 = *(uint *)(unaff_x29 + -0x78);
            unaff_w19 = unaff_w19 - 1;
          }
        }
        unaff_w21 = iVar11 + -1;
        unaff_w23 = unaff_w23 + -1;
        bVar1 = 0 < iVar11;
        iVar11 = unaff_w21;
      } while (unaff_w21 != 0 && bVar1);
    }
    uVar14 = unaff_w24 + 1;
    if (uVar4 < 0x46) {
      switch(uVar4) {
      case 0x22:
      case 0x27:
        if ((int)uVar14 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
          lVar12 = (ulong)uVar14 << 0x20;
          uVar10 = ~unaff_w24;
          puVar16 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2);
          while ((uVar3 = *puVar16, uVar3 != 0 && (uVar3 != uVar4))) {
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar14 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_03220980;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = uVar3;
              *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
            }
            else {
              FUN_025eb570();
            }
            lVar12 = lVar12 + 0x100000000;
            uVar10 = uVar10 - 1;
            puVar16 = puVar16 + 1;
            if (*(uint *)(unaff_x29 + -0x94) == uVar10) goto LAB_03220838;
          }
          uVar14 = (*(short *)((lVar12 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) - uVar10;
        }
        break;
      case 0x23:
      case 0x30:
        if (unaff_w21 < 0) {
          unaff_w21 = unaff_w21 + 1;
          if (unaff_w23 <= *(int *)(unaff_x29 + -0xc4)) {
LAB_032204f8:
            sVar15 = 0x30;
            goto LAB_032204fc;
          }
        }
        else {
          sVar15 = *psVar18;
          if (sVar15 == 0) {
            if (*(int *)(unaff_x29 + -200) < unaff_w23) goto LAB_032204f8;
          }
          else {
            psVar18 = psVar18 + 1;
LAB_032204fc:
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            uVar10 = *(uint *)(unaff_x29 + -0x78);
            if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar15;
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
            }
            else {
              FUN_025eb570();
            }
            if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar10 & 1) == 0)) {
              if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
              if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1
                 ) {
                if (*(long *)(unaff_x29 + -0xa0) == 0) {
LAB_03220984:
                    /* WARNING: Subroutine does not return */
                  FUN_0160eeb4();
                }
                lVar12 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
                if (cRam0000000007237eb3 == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  cRam0000000007237eb3 = '\x01';
                }
                if (lVar12 == 0) goto LAB_03220984;
                if (*(int *)(lVar12 + 0x10) == 1) {
                  uVar10 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_0322061c;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar10) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
                    FUN_0160eebc();
                  }
                  lVar17 = *(long *)(unaff_x22 + 8);
                  uVar6 = FUN_02521d48(lVar12,0,0);
                  *(undefined2 *)(lVar17 + (long)(int)uVar10 * 2) = uVar6;
                  *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
                }
                else {
LAB_0322061c:
                  FUN_025eb69c();
                }
                unaff_w19 = unaff_w19 - 1;
              }
            }
          }
        }
        unaff_w23 = unaff_w23 + -1;
        break;
      case 0x24:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2d:
      case 0x2f:
switchD_03220064_caseD_24:
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar10 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (uVar10 < *(uint *)(unaff_x22 + 0x10)) {
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar4;
            goto LAB_032202c0;
          }
          goto LAB_03220980;
        }
LAB_032202d0:
        FUN_025eb570();
        break;
      case 0x25:
        if (lVar12 == 0) goto LAB_03220984;
        lVar12 = *(long *)(lVar12 + 0x90);
joined_r0x03220140:
        if (cRam0000000007237eb3 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          cRam0000000007237eb3 = '\x01';
        }
        if (lVar12 == 0) goto LAB_03220984;
        if (*(int *)(lVar12 + 0x10) == 1) {
          uVar10 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar10 < *(uint *)(unaff_x22 + 0x10)) {
              lVar17 = *(long *)(unaff_x22 + 8);
              uVar6 = FUN_02521d48(lVar12,0,0);
              *(undefined2 *)(lVar17 + (long)(int)uVar10 * 2) = uVar6;
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
              break;
            }
            goto LAB_03220980;
          }
        }
        FUN_025eb69c();
        break;
      case 0x2c:
        break;
      case 0x2e:
        if ((*(uint *)(unaff_x29 + -0xb8) & 1) == 0 && unaff_w23 == 0) {
          if ((*(int *)(unaff_x29 + -200) < 0) ||
             ((*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x6c) && (*psVar18 != 0)))) {
            if (lVar12 == 0) goto LAB_03220984;
            lVar12 = *(long *)(lVar12 + 0x38);
            if (cRam0000000007237eb3 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              cRam0000000007237eb3 = '\x01';
            }
            if (lVar12 == 0) goto LAB_03220984;
            if (*(int *)(lVar12 + 0x10) == 1) {
              uVar10 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_032206e8;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
              lVar17 = *(long *)(unaff_x22 + 8);
              uVar6 = FUN_02521d48(lVar12,0,0);
              *(undefined2 *)(lVar17 + (long)(int)uVar10 * 2) = uVar6;
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
            }
            else {
LAB_032206e8:
              FUN_025eb69c();
            }
            unaff_w23 = 0;
            *(undefined4 *)(unaff_x29 + -0xb8) = 1;
          }
          else {
            *(undefined4 *)(unaff_x29 + -0xb8) = 0;
            unaff_w23 = 0;
          }
        }
        break;
      default:
        if (uVar4 != 0x45) goto switchD_03220064_caseD_24;
LAB_03220240:
        if ((*(uint *)(unaff_x29 + -0xb4) & 1) == 0) {
          uVar9 = *(undefined8 *)(unaff_x29 + -0xb0);
          if (DAT_072305cf == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            DAT_072305cf = '\x01';
          }
          uVar10 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
          }
          else {
            FUN_025eb570();
          }
          uVar10 = (uint)uVar9;
          if ((int)uVar14 < (int)uVar10) {
            sVar15 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2);
            if ((sVar15 == 0x2d) || (sVar15 == 0x2b)) {
              uVar14 = unaff_w24 + 2;
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar8 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar15;
                *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
              }
              else {
                FUN_025eb570();
              }
            }
            if ((int)uVar14 < (int)uVar10) {
              psVar13 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2);
              do {
                if (*psVar13 != 0x30) break;
                if (DAT_072305cf == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  DAT_072305cf = '\x01';
                }
                uVar8 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
                  *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = 0x30;
                  *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
                }
                else {
                  FUN_025eb570();
                }
                uVar14 = uVar14 + 1;
                psVar13 = psVar13 + 1;
              } while (uVar10 != uVar14);
            }
          }
        }
        else {
          uVar10 = (uint)*(undefined8 *)(unaff_x29 + -0xb0);
          if (((int)uVar14 < (int)uVar10) &&
             (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2) == 0x30)) {
            iVar11 = 1;
            goto LAB_03220720;
          }
          iVar11 = unaff_w24 + 2;
          if ((int)uVar10 <= iVar11) {
LAB_03220778:
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
            }
            else {
              FUN_025eb570();
            }
            *(undefined4 *)(unaff_x29 + -0xb4) = 1;
            break;
          }
          sVar15 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2);
          if (sVar15 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar11 * 2) != 0x30)
            goto LAB_03220778;
            iVar11 = 0;
          }
          else {
            if ((sVar15 != 0x2b) ||
               (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar11 * 2) != 0x30))
            goto LAB_03220778;
            iVar11 = 0;
          }
LAB_03220720:
          uVar8 = unaff_w24 + 2;
          uVar14 = uVar8;
          if ((int)uVar8 < (int)uVar10) {
            do {
              uVar14 = uVar8;
              if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar8 * 2) != 0x30) break;
              uVar8 = uVar8 + 1;
              iVar11 = iVar11 + 1;
              uVar14 = uVar10;
            } while (uVar10 != uVar8);
          }
          if (9 < iVar11) {
            iVar11 = 10;
          }
          if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
            *(int *)(unaff_x29 + -0xb4) = iVar11;
            thunk_FUN_016466fc();
          }
          FUN_0322598c();
        }
        *(undefined4 *)(unaff_x29 + -0xb4) = 0;
      }
    }
    else {
      if (uVar4 != 0x5c) {
        if (uVar4 == 0x65) goto LAB_03220240;
        if (uVar4 != 0x2030) goto switchD_03220064_caseD_24;
        if (lVar12 != 0) {
          lVar12 = *(long *)(lVar12 + 0x98);
          goto joined_r0x03220140;
        }
        goto LAB_03220984;
      }
      if (((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar14) ||
         (sVar15 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2), sVar15 == 0))
      goto switchD_03220064_caseD_2c;
      uVar14 = unaff_w24 + 2;
      if (DAT_072305cf == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        DAT_072305cf = '\x01';
      }
      uVar10 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_032202d0;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = sVar15;
LAB_032202c0:
      *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
    }
switchD_03220064_caseD_2c:
    unaff_w24 = uVar14;
  } while ((int)unaff_w24 < (int)*(undefined8 *)(unaff_x29 + -0xb0));
LAB_03220838:
  if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


