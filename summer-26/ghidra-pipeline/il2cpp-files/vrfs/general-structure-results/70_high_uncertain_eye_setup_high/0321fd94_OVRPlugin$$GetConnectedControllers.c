/*
FUNCTION_NAME: OVRPlugin$$GetConnectedControllers
ENTRY_POINT: 0321fd94
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetConnectedControllers(void)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined1 auVar5 [12];
  undefined2 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int in_w8;
  uint uVar9;
  undefined8 in_x10;
  uint uVar10;
  int iVar11;
  int iVar12;
  long in_x12;
  int iVar13;
  uint uVar14;
  undefined8 unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  short *psVar15;
  uint uVar16;
  long unaff_x25;
  short sVar17;
  int iVar18;
  ushort *puVar19;
  long lVar20;
  long lVar21;
  short *psVar22;
  long unaff_x29;
  undefined1 auVar23 [16];
  
  if (in_w8 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(in_x12 + 0x20);
  }
  iVar18 = (unaff_w21 & (int)unaff_w21 >> 0x1f) + unaff_w23;
  uVar14 = 0xffffffff;
  iVar12 = *(int *)(unaff_x29 + -0xc4);
  if (*(int *)(unaff_x29 + -0xc4) <= iVar18) {
    iVar12 = iVar18;
  }
  if ((iVar11 != 0) && (iVar11 < iVar12)) {
    uVar14 = 0;
    lVar21 = 0;
    iVar13 = in_w8 + -1;
    uVar8 = 4;
    *(long *)(unaff_x29 + -0xa8) = in_x12;
    *(int *)(unaff_x29 + -0xb0) = iVar12;
    *(int *)(unaff_x29 + -0xb8) = iVar13;
    iVar18 = iVar11;
    while( true ) {
      auVar23._8_8_ = uVar8;
      auVar23._0_8_ = unaff_x25;
      auVar5 = auVar23._0_12_;
      if ((int)uVar8 <= (int)uVar14) {
        uVar7 = FUN_0160edfc(*(undefined8 *)PTR_DAT_06dd9ff0,(int)uVar8 << 1);
        auVar23 = FUN_026d09ec(uVar7,*(undefined8 *)PTR_DAT_06dd1ae8);
        FUN_026d03fc(unaff_x29 + -0x68,auVar23._0_8_,auVar23._8_8_,*(undefined8 *)PTR_DAT_06e24900);
        auVar23 = FUN_026d09ec(uVar7,*(undefined8 *)PTR_DAT_06dd1ae8);
        auVar5 = auVar23._0_12_;
        iVar13 = *(int *)(unaff_x29 + -0xb8);
        iVar12 = *(int *)(unaff_x29 + -0xb0);
        in_x12 = *(long *)(unaff_x29 + -0xa8);
        in_x10 = *(undefined8 *)(unaff_x29 + -0x90);
        *(undefined1 (*) [16])(unaff_x29 + -0x68) = auVar23;
      }
      unaff_x25 = auVar5._0_8_;
      if (auVar5._8_4_ <= uVar14) goto LAB_03220980;
      *(int *)(unaff_x25 + (long)(int)uVar14 * 4) = iVar11;
      if ((int)lVar21 < iVar13) {
        lVar21 = (long)(int)lVar21 + 1;
        if (*(uint *)(in_x12 + 0x18) <= (uint)lVar21) goto LAB_03220980;
        iVar18 = *(int *)(in_x12 + lVar21 * 4 + 0x20);
      }
      if ((iVar18 == 0) || (iVar11 = iVar18 + iVar11, iVar12 <= iVar11)) break;
      uVar8 = (ulong)*(uint *)(unaff_x29 + -0x60);
      uVar14 = uVar14 + 1;
    }
  }
  uVar8 = FUN_031c833c(in_x10,0);
  if ((unaff_w24 == 0) && ((uVar8 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0xa0) != 0) {
      lVar21 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x30);
      if (cRam0000000007237eb3 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        cRam0000000007237eb3 = '\x01';
      }
      if (lVar21 != 0) {
        if (*(int *)(lVar21 + 0x10) == 1) {
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar16) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            lVar20 = *(long *)(unaff_x22 + 8);
            uVar6 = FUN_02521d48(lVar21,0,0);
            *(undefined2 *)(lVar20 + (long)(int)uVar16 * 2) = uVar6;
            *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
            goto LAB_0321fe4c;
          }
        }
        FUN_025eb69c();
        goto LAB_0321fe4c;
      }
    }
LAB_03220984:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
LAB_0321fe4c:
  uVar7 = FUN_018cc790(*(undefined8 *)(unaff_x29 + -0x78));
  *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar7;
  if ((int)unaff_w24 < (int)unaff_x20) {
    psVar22 = *(short **)(unaff_x29 + -0x80);
    *(undefined4 *)(unaff_x29 + -0xb8) = 0;
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x94) ^ 1;
    *(int *)(unaff_x29 + -0x94) = -(int)*(undefined8 *)(unaff_x29 + -0xb0);
    do {
      uVar3 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_w24 * 2);
      if ((uVar3 == 0x3b) || (uVar3 == 0)) break;
      if (((int)unaff_w21 < 1) ||
         ((0x30 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar21 = *(long *)(unaff_x29 + -0xa0);
      }
      else {
        lVar21 = *(long *)(unaff_x29 + -0xa0);
        uVar16 = *(uint *)(unaff_x29 + -0x78);
        uVar10 = unaff_w21;
        do {
          sVar17 = *psVar22;
          sVar4 = 0x30;
          if (sVar17 != 0) {
            psVar22 = psVar22 + 1;
            sVar4 = sVar17;
          }
          if (DAT_072305cf == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            DAT_072305cf = '\x01';
          }
          uVar9 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
          }
          else {
            FUN_025eb570();
          }
          if ((-1 < (int)uVar14) && (1 < unaff_w23 && (uVar16 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x60) <= uVar14) goto LAB_03220980;
            if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)uVar14 * 4) + 1) {
              if (lVar21 == 0) goto LAB_03220984;
              lVar20 = *(long *)(lVar21 + 0x40);
              if (cRam0000000007237eb3 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                cRam0000000007237eb3 = '\x01';
              }
              if (lVar20 == 0) goto LAB_03220984;
              if (*(int *)(lVar20 + 0x10) == 1) {
                uVar16 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar16) goto LAB_03220008;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_03220980;
                lVar21 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_02521d48(lVar20,0,0);
                *(undefined2 *)(lVar21 + (long)(int)uVar16 * 2) = uVar6;
                lVar21 = *(long *)(unaff_x29 + -0xa0);
                *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
              }
              else {
LAB_03220008:
                FUN_025eb69c();
              }
              uVar16 = *(uint *)(unaff_x29 + -0x78);
              uVar14 = uVar14 - 1;
            }
          }
          unaff_w21 = uVar10 - 1;
          unaff_w23 = unaff_w23 + -1;
          bVar1 = 0 < (int)uVar10;
          uVar10 = unaff_w21;
        } while (unaff_w21 != 0 && bVar1);
      }
      uVar16 = unaff_w24 + 1;
      if (uVar3 < 0x46) {
        switch(uVar3) {
        case 0x22:
        case 0x27:
          if ((int)uVar16 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
            lVar21 = (ulong)uVar16 << 0x20;
            uVar10 = ~unaff_w24;
            puVar19 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar16 * 2);
            while ((uVar2 = *puVar19, uVar2 != 0 && (uVar2 != uVar3))) {
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar16 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_03220980;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
              }
              else {
                FUN_025eb570();
              }
              lVar21 = lVar21 + 0x100000000;
              uVar10 = uVar10 - 1;
              puVar19 = puVar19 + 1;
              if (*(uint *)(unaff_x29 + -0x94) == uVar10) goto LAB_03220838;
            }
            uVar16 = (*(short *)((lVar21 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) - uVar10;
          }
          break;
        case 0x23:
        case 0x30:
          if ((int)unaff_w21 < 0) {
            unaff_w21 = unaff_w21 + 1;
            if (unaff_w23 <= *(int *)(unaff_x29 + -0xc4)) {
LAB_032204f8:
              sVar17 = 0x30;
              goto LAB_032204fc;
            }
          }
          else {
            sVar17 = *psVar22;
            if (sVar17 == 0) {
              if (*(int *)(unaff_x29 + -200) < unaff_w23) goto LAB_032204f8;
            }
            else {
              psVar22 = psVar22 + 1;
LAB_032204fc:
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar9 = *(uint *)(unaff_x22 + 0x18);
              uVar10 = *(uint *)(unaff_x29 + -0x78);
              if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar17;
                *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
              }
              else {
                FUN_025eb570();
              }
              if ((-1 < (int)uVar14) && (1 < unaff_w23 && (uVar10 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x60) <= uVar14) goto LAB_03220980;
                if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)uVar14 * 4) + 1)
                {
                  if (*(long *)(unaff_x29 + -0xa0) == 0) goto LAB_03220984;
                  lVar21 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
                  if (cRam0000000007237eb3 == '\0') {
                    thunk_FUN_0159f088(PTR_DAT_06de9da0);
                    cRam0000000007237eb3 = '\x01';
                  }
                  if (lVar21 == 0) goto LAB_03220984;
                  if (*(int *)(lVar21 + 0x10) == 1) {
                    uVar10 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_0322061c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
                    lVar20 = *(long *)(unaff_x22 + 8);
                    uVar6 = FUN_02521d48(lVar21,0,0);
                    *(undefined2 *)(lVar20 + (long)(int)uVar10 * 2) = uVar6;
                    *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
                  }
                  else {
LAB_0322061c:
                    FUN_025eb69c();
                  }
                  uVar14 = uVar14 - 1;
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
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar3;
              goto LAB_032202c0;
            }
            goto LAB_03220980;
          }
LAB_032202d0:
          FUN_025eb570();
          break;
        case 0x25:
          if (lVar21 == 0) goto LAB_03220984;
          lVar21 = *(long *)(lVar21 + 0x90);
joined_r0x03220140:
          if (cRam0000000007237eb3 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            cRam0000000007237eb3 = '\x01';
          }
          if (lVar21 == 0) goto LAB_03220984;
          if (*(int *)(lVar21 + 0x10) == 1) {
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar10 < *(uint *)(unaff_x22 + 0x10)) {
                lVar20 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_02521d48(lVar21,0,0);
                *(undefined2 *)(lVar20 + (long)(int)uVar10 * 2) = uVar6;
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
               ((*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x6c) && (*psVar22 != 0)))) {
              if (lVar21 == 0) goto LAB_03220984;
              lVar21 = *(long *)(lVar21 + 0x38);
              if (cRam0000000007237eb3 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                cRam0000000007237eb3 = '\x01';
              }
              if (lVar21 == 0) goto LAB_03220984;
              if (*(int *)(lVar21 + 0x10) == 1) {
                uVar10 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_032206e8;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
                lVar20 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_02521d48(lVar21,0,0);
                *(undefined2 *)(lVar20 + (long)(int)uVar10 * 2) = uVar6;
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
          if (uVar3 != 0x45) goto switchD_03220064_caseD_24;
LAB_03220240:
          if ((*(uint *)(unaff_x29 + -0xb4) & 1) == 0) {
            uVar7 = *(undefined8 *)(unaff_x29 + -0xb0);
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar3;
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
            }
            else {
              FUN_025eb570();
            }
            uVar10 = (uint)uVar7;
            if ((int)uVar16 < (int)uVar10) {
              sVar17 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar16 * 2);
              if ((sVar17 == 0x2d) || (sVar17 == 0x2b)) {
                uVar16 = unaff_w24 + 2;
                if (DAT_072305cf == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  DAT_072305cf = '\x01';
                }
                uVar9 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar17;
                  *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
                }
                else {
                  FUN_025eb570();
                }
              }
              if ((int)uVar16 < (int)uVar10) {
                psVar15 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar16 * 2);
                do {
                  if (*psVar15 != 0x30) break;
                  if (DAT_072305cf == '\0') {
                    thunk_FUN_0159f088(PTR_DAT_06de9da0);
                    DAT_072305cf = '\x01';
                  }
                  uVar9 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
                  }
                  else {
                    FUN_025eb570();
                  }
                  uVar16 = uVar16 + 1;
                  psVar15 = psVar15 + 1;
                } while (uVar10 != uVar16);
              }
            }
          }
          else {
            uVar10 = (uint)*(undefined8 *)(unaff_x29 + -0xb0);
            if (((int)uVar16 < (int)uVar10) &&
               (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar16 * 2) == 0x30)) {
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
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
              }
              else {
                FUN_025eb570();
              }
              *(undefined4 *)(unaff_x29 + -0xb4) = 1;
              break;
            }
            sVar17 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar16 * 2);
            if (sVar17 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar11 * 2) != 0x30)
              goto LAB_03220778;
              iVar11 = 0;
            }
            else {
              if ((sVar17 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar11 * 2) != 0x30))
              goto LAB_03220778;
              iVar11 = 0;
            }
LAB_03220720:
            uVar9 = unaff_w24 + 2;
            uVar16 = uVar9;
            if ((int)uVar9 < (int)uVar10) {
              do {
                uVar16 = uVar9;
                if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar9 * 2) != 0x30) break;
                uVar9 = uVar9 + 1;
                iVar11 = iVar11 + 1;
                uVar16 = uVar10;
              } while (uVar10 != uVar9);
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
        if (uVar3 != 0x5c) {
          if (uVar3 == 0x65) goto LAB_03220240;
          if (uVar3 != 0x2030) goto switchD_03220064_caseD_24;
          if (lVar21 != 0) {
            lVar21 = *(long *)(lVar21 + 0x98);
            goto joined_r0x03220140;
          }
          goto LAB_03220984;
        }
        if (((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar16) ||
           (sVar17 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar16 * 2), sVar17 == 0))
        goto switchD_03220064_caseD_2c;
        uVar16 = unaff_w24 + 2;
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar10 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_032202d0;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = sVar17;
LAB_032202c0:
        *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
      }
switchD_03220064_caseD_2c:
      unaff_w24 = uVar16;
    } while ((int)unaff_w24 < (int)*(undefined8 *)(unaff_x29 + -0xb0));
  }
LAB_03220838:
  if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


