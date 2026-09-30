/*
FUNCTION_NAME: OVRPlugin$$SetBoundaryVisible
ENTRY_POINT: 0321fb38
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin__SetBoundaryVisible(long param_1)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined1 auVar5 [12];
  undefined2 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  int in_w8;
  int in_w9;
  int in_w10;
  int in_w11;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  uint in_w16;
  uint in_w17;
  int unaff_w19;
  int iVar18;
  undefined8 unaff_x20;
  long unaff_x22;
  int iVar19;
  long unaff_x23;
  ulong unaff_x24;
  short *psVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  short sVar24;
  int iVar25;
  long unaff_x26;
  ushort *puVar26;
  int unaff_w27;
  undefined4 uVar27;
  long lVar28;
  uint unaff_w28;
  short *psVar29;
  long unaff_x29;
  undefined1 auVar30 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  iVar12 = in_w10;
                    /* try { // try from 0321fb44 to 0331fb73 has its CatchHandler @ 0321fbd4 */
  if ((in_w9 < 0) && (0 < *(int *)(unaff_x29 + -0x6c))) {
    if (in_w10 < 0) {
      *(undefined4 *)(unaff_x29 + -0xa0) = 1;
                    /* try { // try from 0321fb98 to 0331fbc7 has its CatchHandler @ 0321faf0 */
      iVar12 = *(int *)(unaff_x29 + -0x6c);
    }
    else {
      iVar12 = *(int *)(unaff_x29 + -0x6c);
      in_w16 = in_w16 | in_w10 != iVar12;
      iVar7 = 1;
      if (in_w10 == iVar12) {
        iVar7 = *(int *)(unaff_x29 + -0xa0) + 1;
      }
      *(int *)(unaff_x29 + -0xa0) = iVar7;
    }
  }
switchD_0321fa24_caseD_24:
  iVar7 = in_w11;
  iVar18 = (int)unaff_x20;
  if (iVar7 < iVar18) goto LAB_0321f9f0;
LAB_0321fbc4:
                    /* try { // try from 0321fbc8 to 0331fbd3 has its CatchHandler @ 0321fbd4 */
  if (in_w9 < 0) {
    in_w9 = *(int *)(unaff_x29 + -0x6c);
  }
  lVar14 = *(long *)(unaff_x29 + -0x90);
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 0321fb44 with catch @ 0321fbd4
                       catch(type#1 @ 06a5a440) { ... } // from try @ 0321fb8c with catch @ 0321fbd4
                       catch(type#1 @ 06a5a440) { ... } // from try @ 0321fbc8 with catch @ 0321fbd4
                       try { // try from 0321fbd4 to 0331fbeb has its CatchHandler @ 0321faf0 */
  *(int *)(unaff_x29 + -0x84) = in_w9;
  if (-1 < iVar12) {
    if (iVar12 == in_w9) {
                    /* try { // try from 0321fbec to 0331fc03 has its CatchHandler @ 0321fc70 */
      in_w8 = *(int *)(unaff_x29 + -0xa0) * -3 + in_w8;
    }
    else {
      in_w16 = 1;
    }
  }
  do {
    *(uint *)(unaff_x29 + -0x94) = in_w16;
                    /* try { // try from 0321fc04 to 0331fc5f has its CatchHandler @ 0321faf0 */
    iVar12 = (int)unaff_x24;
    if (**(short **)(unaff_x29 + -0x80) == 0) {
      FUN_031c834c(lVar14,0,0);
      iVar19 = *(int *)(unaff_x29 + -0x84);
      lVar14 = *(long *)(unaff_x29 + -0x90);
      iVar7 = iVar19 - unaff_w27;
      if (iVar7 == 0 || iVar19 < unaff_w27) {
        iVar7 = 0;
      }
      *(int *)(unaff_x29 + -0xc4) = iVar7;
      iVar7 = iVar19 - unaff_w19;
      if (unaff_w19 <= iVar19) {
        iVar7 = 0;
      }
      *(undefined4 *)(lVar14 + 4) = 0;
      *(int *)(unaff_x29 + -200) = iVar7;
      if ((unaff_w28 & 1) != 0) goto LAB_0321fcf4;
LAB_0321fd08:
      iVar7 = *(int *)(lVar14 + 4);
      uVar10 = *(uint *)(unaff_x29 + -0x94);
      uVar27 = 0;
      uVar16 = iVar7 - iVar19;
      if (uVar16 == 0 || iVar7 < iVar19) {
        iVar7 = iVar19;
      }
LAB_0321fd1c:
      puVar23 = &uStack_10;
      uStack_10 = 0;
      uStack_8 = 0;
      if (cRam000000000722cedc == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06dc26f0);
        uVar10 = *(uint *)(unaff_x29 + -0x94);
        lVar14 = *(long *)(unaff_x29 + -0x90);
        cRam000000000722cedc = '\x01';
      }
      uVar9 = _UNK_053e1e50;
      *(undefined8 **)(unaff_x29 + -0x68) = puVar23;
      *(long *)(unaff_x29 + -0xa0) = unaff_x26;
      *(undefined4 *)(unaff_x29 + -0xb4) = uVar27;
      *(undefined8 *)(unaff_x29 + -0x60) = uVar9;
      if ((uVar10 & 1) != 0) {
        if ((unaff_x26 == 0) || (*(long *)(unaff_x26 + 0x40) == 0)) goto LAB_03220984;
        if (0 < *(int *)(*(long *)(unaff_x26 + 0x40) + 0x10)) {
          lVar15 = *(long *)(unaff_x26 + 0x10);
          if (lVar15 == 0) goto LAB_03220984;
          if (*(int *)(lVar15 + 0x18) == 0) {
            iVar19 = 0;
          }
          else {
            iVar19 = *(int *)(lVar15 + 0x20);
          }
          iVar25 = (uVar16 & (int)uVar16 >> 0x1f) + iVar7;
          uVar10 = 0xffffffff;
          iVar13 = *(int *)(unaff_x29 + -0xc4);
          if (*(int *)(unaff_x29 + -0xc4) <= iVar25) {
            iVar13 = iVar25;
          }
          if ((iVar19 == 0) || (iVar13 <= iVar19)) goto LAB_0321fda4;
          uVar10 = 0;
          lVar28 = 0;
          iVar17 = *(int *)(lVar15 + 0x18) + -1;
          uVar8 = 4;
          *(long *)(unaff_x29 + -0xa8) = lVar15;
          *(int *)(unaff_x29 + -0xb0) = iVar13;
          *(int *)(unaff_x29 + -0xb8) = iVar17;
          iVar25 = iVar19;
          break;
        }
      }
      uVar10 = 0xffffffff;
      goto LAB_0321fda4;
    }
    iVar7 = *(int *)(lVar14 + 4) + in_w8;
    *(int *)(lVar14 + 4) = iVar7;
    iVar19 = *(int *)(unaff_x29 + -0x6c);
    if ((unaff_w28 & 1) == 0) {
      iVar19 = (*(int *)(unaff_x29 + -0x6c) - *(int *)(unaff_x29 + -0x84)) + iVar7;
    }
    if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar14 = *(long *)(unaff_x29 + -0x90);
    }
    FUN_032244e4(lVar14,iVar19);
    if (**(short **)(unaff_x29 + -0x80) != 0) {
LAB_0321fc94:
      iVar19 = *(int *)(unaff_x29 + -0x84);
      iVar7 = iVar19 - unaff_w27;
      if (iVar7 == 0 || iVar19 < unaff_w27) {
        iVar7 = 0;
      }
      *(int *)(unaff_x29 + -0xc4) = iVar7;
      iVar7 = iVar19 - unaff_w19;
      if (unaff_w19 <= iVar19) {
        iVar7 = 0;
      }
      *(int *)(unaff_x29 + -200) = iVar7;
      if ((unaff_w28 & 1) == 0) {
        lVar14 = *(long *)(unaff_x29 + -0x90);
        goto LAB_0321fd08;
      }
      lVar14 = *(long *)(unaff_x29 + -0x90);
LAB_0321fcf4:
      uVar16 = 0;
      uVar27 = 1;
      uVar10 = *(uint *)(unaff_x29 + -0x94);
      iVar7 = iVar19;
      goto LAB_0321fd1c;
    }
    if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar8 = FUN_03225858(*(undefined8 *)(unaff_x29 + -0x78));
    iVar7 = (int)uVar8;
    if (iVar7 == iVar12) goto LAB_0321fc94;
    unaff_x24 = uVar8 & 0xffffffff;
    param_1 = FUN_018cc790(*(undefined8 *)(unaff_x29 + -0x78));
    if (iVar7 < iVar18) goto code_r0x0321f9c8;
    lVar14 = *(long *)(unaff_x29 + -0x90);
    *(undefined4 *)(unaff_x29 + -0x84) = 0;
    unaff_w28 = 0;
    unaff_w19 = 0;
    *(undefined4 *)(unaff_x29 + -0x6c) = 0;
    in_w8 = 0;
    in_w16 = 0;
    unaff_w27 = 0x7fffffff;
  } while( true );
LAB_032208b4:
  auVar30._8_8_ = uVar8;
  auVar30._0_8_ = puVar23;
  auVar5 = auVar30._0_12_;
  if ((int)uVar8 <= (int)uVar10) {
    uVar9 = FUN_0160edfc(*(undefined8 *)PTR_DAT_06dd9ff0,(int)uVar8 << 1);
    auVar30 = FUN_026d09ec(uVar9,*(undefined8 *)PTR_DAT_06dd1ae8);
    FUN_026d03fc(unaff_x29 + -0x68,auVar30._0_8_,auVar30._8_8_,*(undefined8 *)PTR_DAT_06e24900);
    auVar30 = FUN_026d09ec(uVar9,*(undefined8 *)PTR_DAT_06dd1ae8);
    auVar5 = auVar30._0_12_;
    iVar17 = *(int *)(unaff_x29 + -0xb8);
    iVar13 = *(int *)(unaff_x29 + -0xb0);
    lVar15 = *(long *)(unaff_x29 + -0xa8);
    lVar14 = *(long *)(unaff_x29 + -0x90);
    *(undefined1 (*) [16])(unaff_x29 + -0x68) = auVar30;
  }
  puVar23 = auVar5._0_8_;
  if (auVar5._8_4_ <= uVar10) goto LAB_03220980;
  *(int *)((long)puVar23 + (long)(int)uVar10 * 4) = iVar19;
  if ((int)lVar28 < iVar17) {
    lVar28 = (long)(int)lVar28 + 1;
    if (*(uint *)(lVar15 + 0x18) <= (uint)lVar28) goto LAB_03220980;
    iVar25 = *(int *)(lVar15 + lVar28 * 4 + 0x20);
  }
  if ((iVar25 == 0) || (iVar19 = iVar25 + iVar19, iVar13 <= iVar19)) goto LAB_0321fda4;
  uVar8 = (ulong)*(uint *)(unaff_x29 + -0x60);
  uVar10 = uVar10 + 1;
  goto LAB_032208b4;
code_r0x0321f9c8:
  unaff_w19 = 0;
  unaff_w28 = 0;
  in_w16 = 0;
  in_w8 = 0;
  unaff_w27 = 0x7fffffff;
  in_w9 = -1;
  iVar12 = -1;
  in_w17 = 0x2030;
  *(undefined4 *)(unaff_x29 + -0x6c) = 0;
LAB_0321f9f0:
  uVar3 = *(ushort *)(param_1 + (long)iVar7 * 2);
  if ((uVar3 == 0x3b) || (uVar3 == 0)) goto LAB_0321fbc4;
  in_w11 = iVar7 + 1;
  uVar16 = (uint)uVar3;
  if (uVar3 < 0x46) {
    if (uVar16 - 0x22 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x0321fa24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(byte *)(unaff_x23 + (ulong)(uVar16 - 0x22)) * 4 + 0x321fa28))();
      return;
    }
    if (uVar16 != 0x45) goto switchD_0321fa24_caseD_24;
  }
  else {
    if (uVar3 == 0x5c) {
      if ((in_w11 < iVar18) && (*(short *)(param_1 + (long)in_w11 * 2) != 0)) {
        in_w11 = iVar7 + 2;
      }
      goto switchD_0321fa24_caseD_24;
    }
    if (uVar3 != 0x65) {
      if (uVar16 == in_w17) {
        in_w8 = in_w8 + 3;
      }
      goto switchD_0321fa24_caseD_24;
    }
  }
  if (((in_w11 < iVar18) && (*(short *)(param_1 + (long)in_w11 * 2) == 0x30)) ||
     ((iVar7 + 2 < iVar18 &&
      (((sVar24 = *(short *)(param_1 + (long)in_w11 * 2), sVar24 == 0x2d || (sVar24 == 0x2b)) &&
       (*(short *)(param_1 + (long)(iVar7 + 2) * 2) == 0x30)))))) {
    iVar7 = iVar7 + 2;
    do {
      in_w11 = iVar7;
      if (iVar18 <= in_w11) break;
      iVar7 = in_w11 + 1;
    } while (*(short *)(param_1 + (long)in_w11 * 2) == 0x30);
    unaff_w28 = 1;
  }
  goto switchD_0321fa24_caseD_24;
LAB_0321fda4:
  uVar8 = FUN_031c833c(lVar14,0);
  if ((iVar12 != 0) || ((uVar8 & 1) == 0)) {
LAB_0321fe4c:
    uVar8 = unaff_x24 & 0xffffffff;
    uVar9 = FUN_018cc790(*(undefined8 *)(unaff_x29 + -0x78));
    *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x20;
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar9;
    if (iVar12 < iVar18) {
      psVar29 = *(short **)(unaff_x29 + -0x80);
      *(undefined4 *)(unaff_x29 + -0xb8) = 0;
      *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x94) ^ 1;
      *(int *)(unaff_x29 + -0x94) = -(int)*(undefined8 *)(unaff_x29 + -0xb0);
      do {
        uVar21 = (uint)uVar8;
        uVar3 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar21 * 2);
        if ((uVar3 == 0x3b) || (uVar3 == 0)) break;
        if (((int)uVar16 < 1) ||
           ((0x30 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x1400800000000U) == 0)))) {
          lVar14 = *(long *)(unaff_x29 + -0xa0);
        }
        else {
          lVar14 = *(long *)(unaff_x29 + -0xa0);
          uVar22 = *(uint *)(unaff_x29 + -0x78);
          uVar11 = uVar16;
          do {
            sVar24 = *psVar29;
            sVar4 = 0x30;
            if (sVar24 != 0) {
              psVar29 = psVar29 + 1;
              sVar4 = sVar24;
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
            if ((-1 < (int)uVar10) && (1 < iVar7 && (uVar22 & 1) == 0)) {
              if (*(uint *)(unaff_x29 + -0x60) <= uVar10) goto LAB_03220980;
              if (iVar7 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)uVar10 * 4) + 1) {
                if (lVar14 == 0) goto LAB_03220984;
                lVar15 = *(long *)(lVar14 + 0x40);
                if (cRam0000000007237eb3 == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  cRam0000000007237eb3 = '\x01';
                }
                if (lVar15 == 0) goto LAB_03220984;
                if (*(int *)(lVar15 + 0x10) == 1) {
                  uVar16 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar16) goto LAB_03220008;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar16) goto LAB_03220980;
                  lVar14 = *(long *)(unaff_x22 + 8);
                  uVar6 = FUN_02521d48(lVar15,0,0);
                  *(undefined2 *)(lVar14 + (long)(int)uVar16 * 2) = uVar6;
                  lVar14 = *(long *)(unaff_x29 + -0xa0);
                  *(uint *)(unaff_x22 + 0x18) = uVar16 + 1;
                }
                else {
LAB_03220008:
                  FUN_025eb69c();
                }
                uVar22 = *(uint *)(unaff_x29 + -0x78);
                uVar10 = uVar10 - 1;
              }
            }
            uVar16 = uVar11 - 1;
            iVar7 = iVar7 + -1;
            bVar1 = 0 < (int)uVar11;
            uVar11 = uVar16;
          } while (uVar16 != 0 && bVar1);
        }
        uVar22 = uVar21 + 1;
        uVar8 = (ulong)uVar22;
        if (uVar3 < 0x46) {
          switch(uVar3) {
          case 0x22:
          case 0x27:
            if ((int)uVar22 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
              lVar14 = uVar8 << 0x20;
              uVar21 = ~uVar21;
              puVar26 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar22 * 2);
              while ((uVar2 = *puVar26, uVar2 != 0 && (uVar2 != uVar3))) {
                if (DAT_072305cf == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  DAT_072305cf = '\x01';
                }
                uVar22 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_03220980;
                  *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = uVar2;
                  *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                }
                else {
                  FUN_025eb570();
                }
                lVar14 = lVar14 + 0x100000000;
                uVar21 = uVar21 - 1;
                puVar26 = puVar26 + 1;
                if (*(uint *)(unaff_x29 + -0x94) == uVar21) goto LAB_03220838;
              }
              uVar8 = (ulong)((*(short *)((lVar14 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) -
                             uVar21);
            }
            break;
          case 0x23:
          case 0x30:
            if ((int)uVar16 < 0) {
              uVar16 = uVar16 + 1;
              if (iVar7 <= *(int *)(unaff_x29 + -0xc4)) {
LAB_032204f8:
                sVar24 = 0x30;
                goto LAB_032204fc;
              }
            }
            else {
              sVar24 = *psVar29;
              if (sVar24 == 0) {
                if (*(int *)(unaff_x29 + -200) < iVar7) goto LAB_032204f8;
              }
              else {
                psVar29 = psVar29 + 1;
LAB_032204fc:
                if (DAT_072305cf == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  DAT_072305cf = '\x01';
                }
                uVar22 = *(uint *)(unaff_x22 + 0x18);
                uVar21 = *(uint *)(unaff_x29 + -0x78);
                if ((int)uVar22 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar22) goto LAB_03220980;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar22 * 2) = sVar24;
                  *(uint *)(unaff_x22 + 0x18) = uVar22 + 1;
                }
                else {
                  FUN_025eb570();
                }
                if ((-1 < (int)uVar10) && (1 < iVar7 && (uVar21 & 1) == 0)) {
                  if (*(uint *)(unaff_x29 + -0x60) <= uVar10) goto LAB_03220980;
                  if (iVar7 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)uVar10 * 4) + 1) {
                    if (*(long *)(unaff_x29 + -0xa0) == 0) goto LAB_03220984;
                    lVar14 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
                    if (cRam0000000007237eb3 == '\0') {
                      thunk_FUN_0159f088(PTR_DAT_06de9da0);
                      cRam0000000007237eb3 = '\x01';
                    }
                    if (lVar14 == 0) goto LAB_03220984;
                    if (*(int *)(lVar14 + 0x10) == 1) {
                      uVar21 = *(uint *)(unaff_x22 + 0x18);
                      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar21) goto LAB_0322061c;
                      if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03220980;
                      lVar15 = *(long *)(unaff_x22 + 8);
                      uVar6 = FUN_02521d48(lVar14,0,0);
                      *(undefined2 *)(lVar15 + (long)(int)uVar21 * 2) = uVar6;
                      *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
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
            iVar7 = iVar7 + -1;
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
            uVar21 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar21 < *(uint *)(unaff_x22 + 0x10)) {
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = uVar3;
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
              uVar21 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (uVar21 < *(uint *)(unaff_x22 + 0x10)) {
                  lVar15 = *(long *)(unaff_x22 + 8);
                  uVar6 = FUN_02521d48(lVar14,0,0);
                  *(undefined2 *)(lVar15 + (long)(int)uVar21 * 2) = uVar6;
                  *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
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
            if ((*(uint *)(unaff_x29 + -0xb8) & 1) == 0 && iVar7 == 0) {
              if ((*(int *)(unaff_x29 + -200) < 0) ||
                 ((*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x6c) && (*psVar29 != 0)))) {
                if (lVar14 == 0) goto LAB_03220984;
                lVar14 = *(long *)(lVar14 + 0x38);
                if (cRam0000000007237eb3 == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  cRam0000000007237eb3 = '\x01';
                }
                if (lVar14 == 0) goto LAB_03220984;
                if (*(int *)(lVar14 + 0x10) == 1) {
                  uVar21 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar21) goto LAB_032206e8;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03220980;
                  lVar15 = *(long *)(unaff_x22 + 8);
                  uVar6 = FUN_02521d48(lVar14,0,0);
                  *(undefined2 *)(lVar15 + (long)(int)uVar21 * 2) = uVar6;
                  *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                }
                else {
LAB_032206e8:
                  FUN_025eb69c();
                }
                iVar7 = 0;
                *(undefined4 *)(unaff_x29 + -0xb8) = 1;
              }
              else {
                *(undefined4 *)(unaff_x29 + -0xb8) = 0;
                iVar7 = 0;
              }
            }
            break;
          default:
            if (uVar3 != 0x45) goto switchD_03220064_caseD_24;
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
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
              }
              else {
                FUN_025eb570();
              }
              uVar11 = (uint)uVar9;
              if ((int)uVar22 < (int)uVar11) {
                sVar24 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar22 * 2);
                if ((sVar24 == 0x2d) || (sVar24 == 0x2b)) {
                  uVar8 = (ulong)(uVar21 + 2);
                  if (DAT_072305cf == '\0') {
                    thunk_FUN_0159f088(PTR_DAT_06de9da0);
                    DAT_072305cf = '\x01';
                  }
                  uVar21 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03220980;
                    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = sVar24;
                    *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                  }
                  else {
                    FUN_025eb570();
                  }
                }
                if ((int)uVar8 < (int)uVar11) {
                  psVar20 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar8 * 2);
                  do {
                    if (*psVar20 != 0x30) break;
                    if (DAT_072305cf == '\0') {
                      thunk_FUN_0159f088(PTR_DAT_06de9da0);
                      DAT_072305cf = '\x01';
                    }
                    uVar21 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                      if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03220980;
                      *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = 0x30;
                      *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                    }
                    else {
                      FUN_025eb570();
                    }
                    uVar21 = (int)uVar8 + 1;
                    uVar8 = (ulong)uVar21;
                    psVar20 = psVar20 + 1;
                  } while (uVar11 != uVar21);
                }
              }
            }
            else {
              uVar11 = (uint)*(ulong *)(unaff_x29 + -0xb0);
              if (((int)uVar22 < (int)uVar11) &&
                 (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar22 * 2) == 0x30)) {
                iVar12 = 1;
                goto LAB_03220720;
              }
              iVar12 = uVar21 + 2;
              if ((int)uVar11 <= iVar12) {
LAB_03220778:
                if (DAT_072305cf == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  DAT_072305cf = '\x01';
                }
                uVar21 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03220980;
                  *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = uVar3;
                  *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
                }
                else {
                  FUN_025eb570();
                }
                *(undefined4 *)(unaff_x29 + -0xb4) = 1;
                break;
              }
              sVar24 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar22 * 2);
              if (sVar24 == 0x2d) {
                if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar12 * 2) != 0x30)
                goto LAB_03220778;
                iVar12 = 0;
              }
              else {
                if ((sVar24 != 0x2b) ||
                   (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar12 * 2) != 0x30))
                goto LAB_03220778;
                iVar12 = 0;
              }
LAB_03220720:
              uVar8 = (ulong)(uVar21 + 2);
              if ((int)(uVar21 + 2) < (int)uVar11) {
                do {
                  if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar8 * 2) != 0x30)
                  goto LAB_03220750;
                  uVar21 = (int)uVar8 + 1;
                  uVar8 = (ulong)uVar21;
                  iVar12 = iVar12 + 1;
                } while (uVar11 != uVar21);
                uVar8 = *(ulong *)(unaff_x29 + -0xb0) & 0xffffffff;
              }
LAB_03220750:
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
          if (((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar22) ||
             (sVar24 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar22 * 2), sVar24 == 0
             )) goto switchD_03220064_caseD_2c;
          uVar8 = (ulong)(uVar21 + 2);
          if (DAT_072305cf == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            DAT_072305cf = '\x01';
          }
          uVar21 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar21) goto LAB_032202d0;
          if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03220980;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = sVar24;
LAB_032202c0:
          *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
        }
switchD_03220064_caseD_2c:
      } while ((int)uVar8 < (int)*(undefined8 *)(unaff_x29 + -0xb0));
    }
LAB_03220838:
    if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(long *)(unaff_x29 + -0xa0) != 0) {
    lVar14 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x30);
    if (cRam0000000007237eb3 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06de9da0);
      cRam0000000007237eb3 = '\x01';
    }
    if (lVar14 != 0) {
      if (*(int *)(lVar14 + 0x10) == 1) {
        uVar21 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar21) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          lVar15 = *(long *)(unaff_x22 + 8);
          uVar6 = FUN_02521d48(lVar14,0,0);
          *(undefined2 *)(lVar15 + (long)(int)uVar21 * 2) = uVar6;
          *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
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


