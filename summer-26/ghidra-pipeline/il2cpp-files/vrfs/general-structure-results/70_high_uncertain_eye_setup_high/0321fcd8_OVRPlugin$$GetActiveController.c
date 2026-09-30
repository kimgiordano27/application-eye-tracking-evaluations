/*
FUNCTION_NAME: OVRPlugin$$GetActiveController
ENTRY_POINT: 0321fcd8
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin__GetActiveController(void)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined1 auVar5 [12];
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined2 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 in_w8;
  uint uVar9;
  long in_x10;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  int unaff_w19;
  undefined8 unaff_x20;
  uint uVar16;
  long unaff_x22;
  int unaff_w23;
  int iVar17;
  uint unaff_w24;
  short *psVar18;
  uint uVar19;
  undefined8 *puVar20;
  short sVar21;
  int iVar22;
  long unaff_x26;
  ushort *puVar23;
  undefined4 uVar24;
  long lVar25;
  ulong unaff_x28;
  short *psVar26;
  long unaff_x29;
  undefined1 auVar27 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_ZR || in_NG != in_OV) {
    in_w8 = 0;
  }
  *(undefined4 *)(unaff_x29 + -0xc4) = in_w8;
  iVar17 = unaff_w23 - unaff_w19;
  if (unaff_w19 <= unaff_w23) {
    iVar17 = 0;
  }
  *(undefined4 *)(in_x10 + 4) = 0;
  *(int *)(unaff_x29 + -200) = iVar17;
  if ((unaff_x28 & 1) == 0) {
    iVar17 = *(int *)(in_x10 + 4);
    uVar10 = *(uint *)(unaff_x29 + -0x94);
    uVar24 = 0;
    uVar16 = iVar17 - unaff_w23;
    if (uVar16 == 0 || iVar17 < unaff_w23) {
      iVar17 = unaff_w23;
    }
  }
  else {
    uVar16 = 0;
    uVar24 = 1;
    uVar10 = *(uint *)(unaff_x29 + -0x94);
    iVar17 = unaff_w23;
  }
  puVar20 = &uStack_10;
  uStack_10 = 0;
  uStack_8 = 0;
  if (cRam000000000722cedc == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    uVar10 = *(uint *)(unaff_x29 + -0x94);
    in_x10 = *(long *)(unaff_x29 + -0x90);
    cRam000000000722cedc = '\x01';
  }
  uVar7 = _UNK_053e1e50;
  *(undefined8 **)(unaff_x29 + -0x68) = puVar20;
  *(long *)(unaff_x29 + -0xa0) = unaff_x26;
  *(undefined4 *)(unaff_x29 + -0xb4) = uVar24;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar7;
  if ((uVar10 & 1) == 0) {
LAB_0321fda0:
    uVar10 = 0xffffffff;
  }
  else {
    if ((unaff_x26 == 0) || (*(long *)(unaff_x26 + 0x40) == 0)) goto LAB_03220984;
    if (*(int *)(*(long *)(unaff_x26 + 0x40) + 0x10) < 1) goto LAB_0321fda0;
    lVar14 = *(long *)(unaff_x26 + 0x10);
    if (lVar14 == 0) goto LAB_03220984;
    if (*(int *)(lVar14 + 0x18) == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(lVar14 + 0x20);
    }
    iVar22 = (uVar16 & (int)uVar16 >> 0x1f) + iVar17;
    uVar10 = 0xffffffff;
    iVar13 = *(int *)(unaff_x29 + -0xc4);
    if (*(int *)(unaff_x29 + -0xc4) <= iVar22) {
      iVar13 = iVar22;
    }
    if ((iVar12 != 0) && (iVar12 < iVar13)) {
      uVar10 = 0;
      lVar25 = 0;
      iVar15 = *(int *)(lVar14 + 0x18) + -1;
      uVar8 = 4;
      *(long *)(unaff_x29 + -0xa8) = lVar14;
      *(int *)(unaff_x29 + -0xb0) = iVar13;
      *(int *)(unaff_x29 + -0xb8) = iVar15;
      iVar22 = iVar12;
      while( true ) {
        auVar27._8_8_ = uVar8;
        auVar27._0_8_ = puVar20;
        auVar5 = auVar27._0_12_;
        if ((int)uVar8 <= (int)uVar10) {
          uVar7 = FUN_0160edfc(*(undefined8 *)PTR_DAT_06dd9ff0,(int)uVar8 << 1);
          auVar27 = FUN_026d09ec(uVar7,*(undefined8 *)PTR_DAT_06dd1ae8);
          FUN_026d03fc(unaff_x29 + -0x68,auVar27._0_8_,auVar27._8_8_,*(undefined8 *)PTR_DAT_06e24900
                      );
          auVar27 = FUN_026d09ec(uVar7,*(undefined8 *)PTR_DAT_06dd1ae8);
          auVar5 = auVar27._0_12_;
          iVar15 = *(int *)(unaff_x29 + -0xb8);
          iVar13 = *(int *)(unaff_x29 + -0xb0);
          lVar14 = *(long *)(unaff_x29 + -0xa8);
          in_x10 = *(long *)(unaff_x29 + -0x90);
          *(undefined1 (*) [16])(unaff_x29 + -0x68) = auVar27;
        }
        puVar20 = auVar5._0_8_;
        if (auVar5._8_4_ <= uVar10) goto LAB_03220980;
        *(int *)((long)puVar20 + (long)(int)uVar10 * 4) = iVar12;
        if ((int)lVar25 < iVar15) {
          lVar25 = (long)(int)lVar25 + 1;
          if (*(uint *)(lVar14 + 0x18) <= (uint)lVar25) goto LAB_03220980;
          iVar22 = *(int *)(lVar14 + lVar25 * 4 + 0x20);
        }
        if ((iVar22 == 0) || (iVar12 = iVar22 + iVar12, iVar13 <= iVar12)) break;
        uVar8 = (ulong)*(uint *)(unaff_x29 + -0x60);
        uVar10 = uVar10 + 1;
      }
    }
  }
  uVar8 = FUN_031c833c(in_x10,0);
  if ((unaff_w24 == 0) && ((uVar8 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0xa0) != 0) {
      lVar14 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x30);
      if (cRam0000000007237eb3 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        cRam0000000007237eb3 = '\x01';
      }
      if (lVar14 != 0) {
        if (*(int *)(lVar14 + 0x10) == 1) {
          uVar19 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar19) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            lVar25 = *(long *)(unaff_x22 + 8);
            uVar6 = FUN_02521d48(lVar14,0,0);
            *(undefined2 *)(lVar25 + (long)(int)uVar19 * 2) = uVar6;
            *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
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
    psVar26 = *(short **)(unaff_x29 + -0x80);
    *(undefined4 *)(unaff_x29 + -0xb8) = 0;
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x94) ^ 1;
    *(int *)(unaff_x29 + -0x94) = -(int)*(undefined8 *)(unaff_x29 + -0xb0);
    do {
      uVar3 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_w24 * 2);
      if ((uVar3 == 0x3b) || (uVar3 == 0)) break;
      if (((int)uVar16 < 1) ||
         ((0x30 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar14 = *(long *)(unaff_x29 + -0xa0);
      }
      else {
        lVar14 = *(long *)(unaff_x29 + -0xa0);
        uVar19 = *(uint *)(unaff_x29 + -0x78);
        uVar11 = uVar16;
        do {
          sVar21 = *psVar26;
          sVar4 = 0x30;
          if (sVar21 != 0) {
            psVar26 = psVar26 + 1;
            sVar4 = sVar21;
          }
          if (DAT_072305cf == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            DAT_072305cf = '\x01';
          }
          uVar16 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar16 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_03220980;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar16 * 2) = sVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
          }
          else {
            FUN_025eb570();
          }
          if ((-1 < (int)uVar10) && (1 < iVar17 && (uVar19 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x60) <= uVar10) goto LAB_03220980;
            if (iVar17 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)uVar10 * 4) + 1) {
              if (lVar14 == 0) goto LAB_03220984;
              lVar25 = *(long *)(lVar14 + 0x40);
              if (cRam0000000007237eb3 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                cRam0000000007237eb3 = '\x01';
              }
              if (lVar25 == 0) goto LAB_03220984;
              if (*(int *)(lVar25 + 0x10) == 1) {
                uVar16 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar16) goto LAB_03220008;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_03220980;
                lVar14 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_02521d48(lVar25,0,0);
                *(undefined2 *)(lVar14 + (long)(int)uVar16 * 2) = uVar6;
                lVar14 = *(long *)(unaff_x29 + -0xa0);
                *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
              }
              else {
LAB_03220008:
                FUN_025eb69c();
              }
              uVar19 = *(uint *)(unaff_x29 + -0x78);
              uVar10 = uVar10 - 1;
            }
          }
          uVar16 = uVar11 - 1;
          iVar17 = iVar17 + -1;
          bVar1 = 0 < (int)uVar11;
          uVar11 = uVar16;
        } while (uVar16 != 0 && bVar1);
      }
      uVar19 = unaff_w24 + 1;
      if (uVar3 < 0x46) {
        switch(uVar3) {
        case 0x22:
        case 0x27:
          if ((int)uVar19 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
            lVar14 = (ulong)uVar19 << 0x20;
            uVar11 = ~unaff_w24;
            puVar23 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar19 * 2);
            while ((uVar2 = *puVar23, uVar2 != 0 && (uVar2 != uVar3))) {
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar19 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar19 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar19) goto LAB_03220980;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar19 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar19 + 1;
              }
              else {
                FUN_025eb570();
              }
              lVar14 = lVar14 + 0x100000000;
              uVar11 = uVar11 - 1;
              puVar23 = puVar23 + 1;
              if (*(uint *)(unaff_x29 + -0x94) == uVar11) goto LAB_03220838;
            }
            uVar19 = (*(short *)((lVar14 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) - uVar11;
          }
          break;
        case 0x23:
        case 0x30:
          if ((int)uVar16 < 0) {
            uVar16 = uVar16 + 1;
            if (iVar17 <= *(int *)(unaff_x29 + -0xc4)) {
LAB_032204f8:
              sVar21 = 0x30;
              goto LAB_032204fc;
            }
          }
          else {
            sVar21 = *psVar26;
            if (sVar21 == 0) {
              if (*(int *)(unaff_x29 + -200) < iVar17) goto LAB_032204f8;
            }
            else {
              psVar26 = psVar26 + 1;
LAB_032204fc:
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar9 = *(uint *)(unaff_x22 + 0x18);
              uVar11 = *(uint *)(unaff_x29 + -0x78);
              if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar21;
                *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
              }
              else {
                FUN_025eb570();
              }
              if ((-1 < (int)uVar10) && (1 < iVar17 && (uVar11 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x60) <= uVar10) goto LAB_03220980;
                if (iVar17 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)uVar10 * 4) + 1) {
                  if (*(long *)(unaff_x29 + -0xa0) == 0) goto LAB_03220984;
                  lVar14 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
                  if (cRam0000000007237eb3 == '\0') {
                    thunk_FUN_0159f088(PTR_DAT_06de9da0);
                    cRam0000000007237eb3 = '\x01';
                  }
                  if (lVar14 == 0) goto LAB_03220984;
                  if (*(int *)(lVar14 + 0x10) == 1) {
                    uVar11 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_0322061c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
                    lVar25 = *(long *)(unaff_x22 + 8);
                    uVar6 = FUN_02521d48(lVar14,0,0);
                    *(undefined2 *)(lVar25 + (long)(int)uVar11 * 2) = uVar6;
                    *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
                  }
                  else {
LAB_0322061c:
                    FUN_025eb69c();
                  }
                  uVar10 = uVar10 - 1;
                }
              }
            }
          }
          iVar17 = iVar17 + -1;
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
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar3;
              goto LAB_032202c0;
            }
            goto LAB_03220980;
          }
LAB_032202d0:
          FUN_025eb570();
          break;
        case 0x25:
          if (lVar14 == 0) goto LAB_03220984;
          lVar14 = *(long *)(lVar14 + 0x90);
joined_r0x03220140:
          if (cRam0000000007237eb3 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            cRam0000000007237eb3 = '\x01';
          }
          if (lVar14 == 0) goto LAB_03220984;
          if (*(int *)(lVar14 + 0x10) == 1) {
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar11 < *(uint *)(unaff_x22 + 0x10)) {
                lVar25 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_02521d48(lVar14,0,0);
                *(undefined2 *)(lVar25 + (long)(int)uVar11 * 2) = uVar6;
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
          if ((*(uint *)(unaff_x29 + -0xb8) & 1) == 0 && iVar17 == 0) {
            if ((*(int *)(unaff_x29 + -200) < 0) ||
               ((*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x6c) && (*psVar26 != 0)))) {
              if (lVar14 == 0) goto LAB_03220984;
              lVar14 = *(long *)(lVar14 + 0x38);
              if (cRam0000000007237eb3 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                cRam0000000007237eb3 = '\x01';
              }
              if (lVar14 == 0) goto LAB_03220984;
              if (*(int *)(lVar14 + 0x10) == 1) {
                uVar11 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_032206e8;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
                lVar25 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_02521d48(lVar14,0,0);
                *(undefined2 *)(lVar25 + (long)(int)uVar11 * 2) = uVar6;
                *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
              }
              else {
LAB_032206e8:
                FUN_025eb69c();
              }
              iVar17 = 0;
              *(undefined4 *)(unaff_x29 + -0xb8) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0xb8) = 0;
              iVar17 = 0;
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
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar3;
              *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            }
            else {
              FUN_025eb570();
            }
            uVar11 = (uint)uVar7;
            if ((int)uVar19 < (int)uVar11) {
              sVar21 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar19 * 2);
              if ((sVar21 == 0x2d) || (sVar21 == 0x2b)) {
                uVar19 = unaff_w24 + 2;
                if (DAT_072305cf == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  DAT_072305cf = '\x01';
                }
                uVar9 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar21;
                  *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
                }
                else {
                  FUN_025eb570();
                }
              }
              if ((int)uVar19 < (int)uVar11) {
                psVar18 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar19 * 2);
                do {
                  if (*psVar18 != 0x30) break;
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
                  uVar19 = uVar19 + 1;
                  psVar18 = psVar18 + 1;
                } while (uVar11 != uVar19);
              }
            }
          }
          else {
            uVar11 = (uint)*(undefined8 *)(unaff_x29 + -0xb0);
            if (((int)uVar19 < (int)uVar11) &&
               (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar19 * 2) == 0x30)) {
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
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
              }
              else {
                FUN_025eb570();
              }
              *(undefined4 *)(unaff_x29 + -0xb4) = 1;
              break;
            }
            sVar21 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar19 * 2);
            if (sVar21 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar12 * 2) != 0x30)
              goto LAB_03220778;
              iVar12 = 0;
            }
            else {
              if ((sVar21 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar12 * 2) != 0x30))
              goto LAB_03220778;
              iVar12 = 0;
            }
LAB_03220720:
            uVar9 = unaff_w24 + 2;
            uVar19 = uVar9;
            if ((int)uVar9 < (int)uVar11) {
              do {
                uVar19 = uVar9;
                if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar9 * 2) != 0x30) break;
                uVar9 = uVar9 + 1;
                iVar12 = iVar12 + 1;
                uVar19 = uVar11;
              } while (uVar11 != uVar9);
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
        if (uVar3 != 0x5c) {
          if (uVar3 == 0x65) goto LAB_03220240;
          if (uVar3 != 0x2030) goto switchD_03220064_caseD_24;
          if (lVar14 != 0) {
            lVar14 = *(long *)(lVar14 + 0x98);
            goto joined_r0x03220140;
          }
          goto LAB_03220984;
        }
        if (((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar19) ||
           (sVar21 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar19 * 2), sVar21 == 0))
        goto switchD_03220064_caseD_2c;
        uVar19 = unaff_w24 + 2;
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_032202d0;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = sVar21;
LAB_032202c0:
        *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
      }
switchD_03220064_caseD_2c:
      unaff_w24 = uVar19;
    } while ((int)unaff_w24 < (int)*(undefined8 *)(unaff_x29 + -0xb0));
  }
LAB_03220838:
  if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


