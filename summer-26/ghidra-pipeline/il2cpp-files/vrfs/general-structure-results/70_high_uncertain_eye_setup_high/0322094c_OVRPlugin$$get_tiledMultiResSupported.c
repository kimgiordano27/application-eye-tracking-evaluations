/*
FUNCTION_NAME: OVRPlugin$$get_tiledMultiResSupported
ENTRY_POINT: 0322094c
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_tiledMultiResSupported(void)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  undefined1 auVar6 [12];
  undefined2 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint in_w8;
  uint uVar10;
  undefined8 in_x10;
  uint uVar11;
  int iVar12;
  int in_w11;
  long in_x12;
  int in_w13;
  uint unaff_w19;
  undefined8 unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  short *psVar13;
  uint uVar14;
  long lVar15;
  long unaff_x25;
  short sVar16;
  ushort *puVar17;
  long lVar18;
  long unaff_x27;
  int unaff_w28;
  short *psVar19;
  long unaff_x29;
  undefined1 auVar20 [16];
  
  while( true ) {
    unaff_x27 = (long)(int)unaff_x27 + 1;
    if (in_w8 <= (uint)unaff_x27) break;
    iVar12 = *(int *)(in_x12 + unaff_x27 * 4 + 0x20);
    do {
      if ((iVar12 == 0) || (unaff_w28 = iVar12 + unaff_w28, in_w11 <= unaff_w28)) {
        uVar8 = FUN_031c833c(in_x10,0);
        if ((unaff_w24 == 0) && ((uVar8 & 1) != 0)) {
          if (*(long *)(unaff_x29 + -0xa0) == 0) goto LAB_03220984;
          lVar15 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x30);
          if (cRam0000000007237eb3 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            cRam0000000007237eb3 = '\x01';
          }
          if (lVar15 == 0) goto LAB_03220984;
          if (*(int *)(lVar15 + 0x10) == 1) {
            uVar14 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar14 < *(uint *)(unaff_x22 + 0x10)) {
                lVar18 = *(long *)(unaff_x22 + 8);
                uVar7 = FUN_02521d48(lVar15,0,0);
                *(undefined2 *)(lVar18 + (long)(int)uVar14 * 2) = uVar7;
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
        psVar19 = *(short **)(unaff_x29 + -0x80);
        *(undefined4 *)(unaff_x29 + -0xb8) = 0;
        *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x94) ^ 1;
        *(int *)(unaff_x29 + -0x94) = -(int)*(undefined8 *)(unaff_x29 + -0xb0);
        goto LAB_0321fe90;
      }
      iVar2 = *(int *)(unaff_x29 + -0x60);
      auVar6._8_4_ = iVar2;
      auVar6._0_8_ = unaff_x25;
      unaff_w19 = unaff_w19 + 1;
      if (iVar2 <= (int)unaff_w19) {
        uVar9 = FUN_0160edfc(*(undefined8 *)PTR_DAT_06dd9ff0,iVar2 << 1);
        auVar20 = FUN_026d09ec(uVar9,*(undefined8 *)PTR_DAT_06dd1ae8);
        FUN_026d03fc(unaff_x29 + -0x68,auVar20._0_8_,auVar20._8_8_,*(undefined8 *)PTR_DAT_06e24900);
        auVar20 = FUN_026d09ec(uVar9,*(undefined8 *)PTR_DAT_06dd1ae8);
        auVar6 = auVar20._0_12_;
        in_w13 = *(int *)(unaff_x29 + -0xb8);
        in_w11 = *(int *)(unaff_x29 + -0xb0);
        in_x12 = *(long *)(unaff_x29 + -0xa8);
        in_x10 = *(undefined8 *)(unaff_x29 + -0x90);
        *(undefined1 (*) [16])(unaff_x29 + -0x68) = auVar20;
      }
      unaff_x25 = auVar6._0_8_;
      if (auVar6._8_4_ <= unaff_w19) goto LAB_03220980;
      *(int *)(unaff_x25 + (long)(int)unaff_w19 * 4) = unaff_w28;
    } while (in_w13 <= (int)(uint)unaff_x27);
    in_w8 = *(uint *)(in_x12 + 0x18);
  }
LAB_03220980:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
LAB_0321fe90:
  do {
    uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_w24 * 2);
    if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
    if ((unaff_w21 < 1) ||
       ((0x30 < uVar4 || ((1L << ((ulong)uVar4 & 0x3f) & 0x1400800000000U) == 0)))) {
      lVar15 = *(long *)(unaff_x29 + -0xa0);
    }
    else {
      lVar15 = *(long *)(unaff_x29 + -0xa0);
      uVar14 = *(uint *)(unaff_x29 + -0x78);
      iVar12 = unaff_w21;
      do {
        sVar16 = *psVar19;
        sVar5 = 0x30;
        if (sVar16 != 0) {
          psVar19 = psVar19 + 1;
          sVar5 = sVar16;
        }
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = sVar5;
          *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
        }
        else {
          FUN_025eb570();
        }
        if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar14 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
          if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1) {
            if (lVar15 == 0) goto LAB_03220984;
            lVar18 = *(long *)(lVar15 + 0x40);
            if (cRam0000000007237eb3 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              cRam0000000007237eb3 = '\x01';
            }
            if (lVar18 == 0) goto LAB_03220984;
            if (*(int *)(lVar18 + 0x10) == 1) {
              uVar14 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar14) goto LAB_03220008;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_03220980;
              lVar15 = *(long *)(unaff_x22 + 8);
              uVar7 = FUN_02521d48(lVar18,0,0);
              *(undefined2 *)(lVar15 + (long)(int)uVar14 * 2) = uVar7;
              lVar15 = *(long *)(unaff_x29 + -0xa0);
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
        unaff_w21 = iVar12 + -1;
        unaff_w23 = unaff_w23 + -1;
        bVar1 = 0 < iVar12;
        iVar12 = unaff_w21;
      } while (unaff_w21 != 0 && bVar1);
    }
    uVar14 = unaff_w24 + 1;
    if (uVar4 < 0x46) {
      switch(uVar4) {
      case 0x22:
      case 0x27:
        if ((int)uVar14 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
          lVar15 = (ulong)uVar14 << 0x20;
          uVar11 = ~unaff_w24;
          puVar17 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2);
          while ((uVar3 = *puVar17, uVar3 != 0 && (uVar3 != uVar4))) {
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
            lVar15 = lVar15 + 0x100000000;
            uVar11 = uVar11 - 1;
            puVar17 = puVar17 + 1;
            if (*(uint *)(unaff_x29 + -0x94) == uVar11) goto LAB_03220838;
          }
          uVar14 = (*(short *)((lVar15 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) - uVar11;
        }
        break;
      case 0x23:
      case 0x30:
        if (unaff_w21 < 0) {
          unaff_w21 = unaff_w21 + 1;
          if (unaff_w23 <= *(int *)(unaff_x29 + -0xc4)) {
LAB_032204f8:
            sVar16 = 0x30;
            goto LAB_032204fc;
          }
        }
        else {
          sVar16 = *psVar19;
          if (sVar16 == 0) {
            if (*(int *)(unaff_x29 + -200) < unaff_w23) goto LAB_032204f8;
          }
          else {
            psVar19 = psVar19 + 1;
LAB_032204fc:
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            uVar11 = *(uint *)(unaff_x29 + -0x78);
            if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = sVar16;
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
            }
            else {
              FUN_025eb570();
            }
            if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar11 & 1) == 0)) {
              if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
              if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1
                 ) {
                if (*(long *)(unaff_x29 + -0xa0) == 0) {
LAB_03220984:
                    /* WARNING: Subroutine does not return */
                  FUN_0160eeb4();
                }
                lVar15 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
                if (cRam0000000007237eb3 == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  cRam0000000007237eb3 = '\x01';
                }
                if (lVar15 == 0) goto LAB_03220984;
                if (*(int *)(lVar15 + 0x10) == 1) {
                  uVar11 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_0322061c;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
                  lVar18 = *(long *)(unaff_x22 + 8);
                  uVar7 = FUN_02521d48(lVar15,0,0);
                  *(undefined2 *)(lVar18 + (long)(int)uVar11 * 2) = uVar7;
                  *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
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
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (uVar11 < *(uint *)(unaff_x22 + 0x10)) {
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar4;
            goto LAB_032202c0;
          }
          goto LAB_03220980;
        }
LAB_032202d0:
        FUN_025eb570();
        break;
      case 0x25:
        if (lVar15 == 0) goto LAB_03220984;
        lVar15 = *(long *)(lVar15 + 0x90);
joined_r0x03220140:
        if (cRam0000000007237eb3 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          cRam0000000007237eb3 = '\x01';
        }
        if (lVar15 == 0) goto LAB_03220984;
        if (*(int *)(lVar15 + 0x10) == 1) {
          uVar11 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar11 < *(uint *)(unaff_x22 + 0x10)) {
              lVar18 = *(long *)(unaff_x22 + 8);
              uVar7 = FUN_02521d48(lVar15,0,0);
              *(undefined2 *)(lVar18 + (long)(int)uVar11 * 2) = uVar7;
              *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
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
             ((*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x6c) && (*psVar19 != 0)))) {
            if (lVar15 == 0) goto LAB_03220984;
            lVar15 = *(long *)(lVar15 + 0x38);
            if (cRam0000000007237eb3 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              cRam0000000007237eb3 = '\x01';
            }
            if (lVar15 == 0) goto LAB_03220984;
            if (*(int *)(lVar15 + 0x10) == 1) {
              uVar11 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_032206e8;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
              lVar18 = *(long *)(unaff_x22 + 8);
              uVar7 = FUN_02521d48(lVar15,0,0);
              *(undefined2 *)(lVar18 + (long)(int)uVar11 * 2) = uVar7;
              *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
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
          uVar11 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
          }
          else {
            FUN_025eb570();
          }
          uVar11 = (uint)uVar9;
          if ((int)uVar14 < (int)uVar11) {
            sVar16 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2);
            if ((sVar16 == 0x2d) || (sVar16 == 0x2b)) {
              uVar14 = unaff_w24 + 2;
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar10 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = sVar16;
                *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
              }
              else {
                FUN_025eb570();
              }
            }
            if ((int)uVar14 < (int)uVar11) {
              psVar13 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2);
              do {
                if (*psVar13 != 0x30) break;
                if (DAT_072305cf == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  DAT_072305cf = '\x01';
                }
                uVar10 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
                  *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = 0x30;
                  *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
                }
                else {
                  FUN_025eb570();
                }
                uVar14 = uVar14 + 1;
                psVar13 = psVar13 + 1;
              } while (uVar11 != uVar14);
            }
          }
        }
        else {
          uVar11 = (uint)*(undefined8 *)(unaff_x29 + -0xb0);
          if (((int)uVar14 < (int)uVar11) &&
             (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2) == 0x30)) {
            iVar12 = 1;
            goto LAB_03220720;
          }
          iVar12 = unaff_w24 + 2;
          if ((int)uVar11 <= iVar12) {
LAB_03220778:
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            }
            else {
              FUN_025eb570();
            }
            *(undefined4 *)(unaff_x29 + -0xb4) = 1;
            break;
          }
          sVar16 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2);
          if (sVar16 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar12 * 2) != 0x30)
            goto LAB_03220778;
            iVar12 = 0;
          }
          else {
            if ((sVar16 != 0x2b) ||
               (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar12 * 2) != 0x30))
            goto LAB_03220778;
            iVar12 = 0;
          }
LAB_03220720:
          uVar10 = unaff_w24 + 2;
          uVar14 = uVar10;
          if ((int)uVar10 < (int)uVar11) {
            do {
              uVar14 = uVar10;
              if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar10 * 2) != 0x30) break;
              uVar10 = uVar10 + 1;
              iVar12 = iVar12 + 1;
              uVar14 = uVar11;
            } while (uVar11 != uVar10);
          }
          if (9 < iVar12) {
            iVar12 = 10;
          }
          if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
            *(int *)(unaff_x29 + -0xb4) = iVar12;
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
        if (lVar15 != 0) {
          lVar15 = *(long *)(lVar15 + 0x98);
          goto joined_r0x03220140;
        }
        goto LAB_03220984;
      }
      if (((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar14) ||
         (sVar16 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2), sVar16 == 0))
      goto switchD_03220064_caseD_2c;
      uVar14 = unaff_w24 + 2;
      if (DAT_072305cf == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        DAT_072305cf = '\x01';
      }
      uVar11 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_032202d0;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = sVar16;
LAB_032202c0:
      *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
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


