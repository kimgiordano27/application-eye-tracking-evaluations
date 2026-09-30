/*
FUNCTION_NAME: OVRPlugin$$GetSystemHeadsetType
ENTRY_POINT: 0321fc1c
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


/* WARNING: Removing unreachable block (ram,0x0321fbdc) */
/* WARNING: Removing unreachable block (ram,0x0321fbf4) */
/* WARNING: Removing unreachable block (ram,0x0321fbe4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin__GetSystemHeadsetType(void)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined1 auVar5 [12];
  undefined1 in_ZR;
  undefined2 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int in_w8;
  undefined **in_x9;
  long lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long in_x11;
  int iVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  int unaff_w19;
  undefined8 unaff_x20;
  long unaff_x22;
  int iVar18;
  long unaff_x23;
  ulong unaff_x24;
  short *psVar19;
  uint uVar20;
  uint uVar21;
  undefined8 *puVar22;
  short sVar23;
  int iVar24;
  long unaff_x26;
  ushort *puVar25;
  int unaff_w27;
  undefined4 uVar26;
  long lVar27;
  uint unaff_w28;
  short *psVar28;
  long unaff_x29;
  undefined1 auVar29 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  do {
    iVar12 = *(int *)(unaff_x29 + -0x6c);
    if ((bool)in_ZR) {
      iVar12 = (*(int *)(unaff_x29 + -0x6c) - *(int *)(unaff_x29 + -0x84)) + in_w8;
    }
    if (*(int *)(*(long *)in_x9[0x134] + 0xe0) == 0) {
      thunk_FUN_016466fc();
      in_x11 = *(long *)(unaff_x29 + -0x90);
    }
    FUN_032244e4(in_x11,iVar12);
    iVar12 = (int)unaff_x20;
    if (**(short **)(unaff_x29 + -0x80) != 0) {
LAB_0321fc94:
      iVar14 = *(int *)(unaff_x29 + -0x84);
      iVar18 = iVar14 - unaff_w27;
      if (iVar18 == 0 || iVar14 < unaff_w27) {
        iVar18 = 0;
      }
      *(int *)(unaff_x29 + -0xc4) = iVar18;
      iVar18 = iVar14 - unaff_w19;
      if (unaff_w19 <= iVar14) {
        iVar18 = 0;
      }
      *(int *)(unaff_x29 + -200) = iVar18;
      if ((unaff_w28 & 1) == 0) {
        lVar9 = *(long *)(unaff_x29 + -0x90);
        goto LAB_0321fd08;
      }
      lVar9 = *(long *)(unaff_x29 + -0x90);
      goto LAB_0321fcf4;
    }
                    /* try { // try from 0321fc60 to 0331fc6f has its CatchHandler @ 0321fc70 */
                    /* catch() { ... } // from try @ 0321fbec with catch @ 0321fc70
                       catch() { ... } // from try @ 0321fc60 with catch @ 0321fc70 */
                    /* try { // try from 0321fc74 to 0331fc77 has its CatchHandler @ 0321fc80 */
    if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
                    /* try { // try from 0321fc78 to 0331fc83 has its CatchHandler @ 0321faf0 */
      thunk_FUN_016466fc();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0321fc74 with catch @ 0321fc80
                        */
    uVar7 = FUN_03225858(*(undefined8 *)(unaff_x29 + -0x78));
    if ((int)uVar7 == (int)unaff_x24) goto LAB_0321fc94;
    unaff_x24 = uVar7 & 0xffffffff;
    lVar9 = FUN_018cc790(*(undefined8 *)(unaff_x29 + -0x78));
    if ((int)uVar7 < iVar12) {
      unaff_w28 = 0;
      iVar18 = 0;
      *(undefined4 *)(unaff_x29 + -0x6c) = 0;
      uVar7 = unaff_x24;
      do {
        iVar14 = (int)uVar7;
        uVar3 = *(ushort *)(lVar9 + (long)iVar14 * 2);
        if ((uVar3 == 0x3b) || (uVar3 == 0)) break;
        uVar10 = iVar14 + 1;
        uVar16 = (uint)uVar3;
        if (uVar3 < 0x46) {
          if (uVar16 - 0x22 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x0321fa24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)*(byte *)(unaff_x23 + (ulong)(uVar16 - 0x22)) * 4 + 0x321fa28))();
            return;
          }
          if (uVar16 == 0x45) {
LAB_0321fa9c:
            if ((((int)uVar10 < iVar12) && (*(short *)(lVar9 + (long)(int)uVar10 * 2) == 0x30)) ||
               ((iVar14 + 2 < iVar12 &&
                (((sVar23 = *(short *)(lVar9 + (long)(int)uVar10 * 2), sVar23 == 0x2d ||
                  (sVar23 == 0x2b)) && (*(short *)(lVar9 + (long)(iVar14 + 2) * 2) == 0x30)))))) {
              uVar16 = iVar14 + 2;
              do {
                uVar10 = uVar16;
                if (iVar12 <= (int)uVar10) break;
                uVar16 = uVar10 + 1;
              } while (*(short *)(lVar9 + (long)(int)uVar10 * 2) == 0x30);
              unaff_w28 = 1;
            }
          }
        }
        else if (uVar3 == 0x5c) {
          if (((int)uVar10 < iVar12) && (*(short *)(lVar9 + (long)(int)uVar10 * 2) != 0)) {
            uVar10 = iVar14 + 2;
          }
        }
        else {
          if (uVar3 == 0x65) goto LAB_0321fa9c;
          if (uVar16 == 0x2030) {
            iVar18 = iVar18 + 3;
          }
        }
        uVar7 = (ulong)uVar10;
      } while ((int)uVar10 < iVar12);
      in_x11 = *(long *)(unaff_x29 + -0x90);
      *(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(unaff_x29 + -0x6c);
    }
    else {
      in_x11 = *(long *)(unaff_x29 + -0x90);
      *(undefined4 *)(unaff_x29 + -0x84) = 0;
      unaff_w28 = 0;
      *(undefined4 *)(unaff_x29 + -0x6c) = 0;
      iVar18 = 0;
    }
    unaff_w19 = 0;
    unaff_w27 = 0x7fffffff;
    *(undefined4 *)(unaff_x29 + -0x94) = 0;
    if (**(short **)(unaff_x29 + -0x80) == 0) break;
    in_ZR = unaff_w28 == 0;
    in_w8 = *(int *)(in_x11 + 4) + iVar18;
    *(int *)(in_x11 + 4) = in_w8;
    in_x9 = &PTR_DAT_06e3f000;
  } while( true );
  FUN_031c834c(in_x11,0,0);
  iVar14 = *(int *)(unaff_x29 + -0x84);
  lVar9 = *(long *)(unaff_x29 + -0x90);
  iVar18 = iVar14 + -0x7fffffff;
  if (iVar18 == 0 || iVar14 < 0x7fffffff) {
    iVar18 = 0;
  }
  *(int *)(unaff_x29 + -0xc4) = iVar18;
  iVar18 = iVar14;
  if (-1 < iVar14) {
    iVar18 = 0;
  }
  *(undefined4 *)(lVar9 + 4) = 0;
  *(int *)(unaff_x29 + -200) = iVar18;
  if (unaff_w28 == 0) {
LAB_0321fd08:
    iVar18 = *(int *)(lVar9 + 4);
    uVar16 = *(uint *)(unaff_x29 + -0x94);
    uVar26 = 0;
    uVar10 = iVar18 - iVar14;
    if (uVar10 == 0 || iVar18 < iVar14) {
      iVar18 = iVar14;
    }
  }
  else {
LAB_0321fcf4:
    uVar10 = 0;
    uVar26 = 1;
    uVar16 = *(uint *)(unaff_x29 + -0x94);
    iVar18 = iVar14;
  }
  puVar22 = &uStack_10;
  uStack_10 = 0;
  uStack_8 = 0;
  if (cRam000000000722cedc == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    uVar16 = *(uint *)(unaff_x29 + -0x94);
    lVar9 = *(long *)(unaff_x29 + -0x90);
    cRam000000000722cedc = '\x01';
  }
  uVar8 = _UNK_053e1e50;
  *(undefined8 **)(unaff_x29 + -0x68) = puVar22;
  *(long *)(unaff_x29 + -0xa0) = unaff_x26;
  *(undefined4 *)(unaff_x29 + -0xb4) = uVar26;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar8;
  if ((uVar16 & 1) == 0) {
LAB_0321fda0:
    uVar16 = 0xffffffff;
  }
  else {
    if ((unaff_x26 == 0) || (*(long *)(unaff_x26 + 0x40) == 0)) goto LAB_03220984;
    if (*(int *)(*(long *)(unaff_x26 + 0x40) + 0x10) < 1) goto LAB_0321fda0;
    lVar15 = *(long *)(unaff_x26 + 0x10);
    if (lVar15 == 0) goto LAB_03220984;
    if (*(int *)(lVar15 + 0x18) == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = *(int *)(lVar15 + 0x20);
    }
    iVar24 = (uVar10 & (int)uVar10 >> 0x1f) + iVar18;
    uVar16 = 0xffffffff;
    iVar13 = *(int *)(unaff_x29 + -0xc4);
    if (*(int *)(unaff_x29 + -0xc4) <= iVar24) {
      iVar13 = iVar24;
    }
    if ((iVar14 != 0) && (iVar14 < iVar13)) {
      uVar16 = 0;
      lVar27 = 0;
      iVar17 = *(int *)(lVar15 + 0x18) + -1;
      uVar7 = 4;
      *(long *)(unaff_x29 + -0xa8) = lVar15;
      *(int *)(unaff_x29 + -0xb0) = iVar13;
      *(int *)(unaff_x29 + -0xb8) = iVar17;
      iVar24 = iVar14;
      while( true ) {
        auVar29._8_8_ = uVar7;
        auVar29._0_8_ = puVar22;
        auVar5 = auVar29._0_12_;
        if ((int)uVar7 <= (int)uVar16) {
          uVar8 = FUN_0160edfc(*(undefined8 *)PTR_DAT_06dd9ff0,(int)uVar7 << 1);
          auVar29 = FUN_026d09ec(uVar8,*(undefined8 *)PTR_DAT_06dd1ae8);
          FUN_026d03fc(unaff_x29 + -0x68,auVar29._0_8_,auVar29._8_8_,*(undefined8 *)PTR_DAT_06e24900
                      );
          auVar29 = FUN_026d09ec(uVar8,*(undefined8 *)PTR_DAT_06dd1ae8);
          auVar5 = auVar29._0_12_;
          iVar17 = *(int *)(unaff_x29 + -0xb8);
          iVar13 = *(int *)(unaff_x29 + -0xb0);
          lVar15 = *(long *)(unaff_x29 + -0xa8);
          lVar9 = *(long *)(unaff_x29 + -0x90);
          *(undefined1 (*) [16])(unaff_x29 + -0x68) = auVar29;
        }
        puVar22 = auVar5._0_8_;
        if (auVar5._8_4_ <= uVar16) goto LAB_03220980;
        *(int *)((long)puVar22 + (long)(int)uVar16 * 4) = iVar14;
        if ((int)lVar27 < iVar17) {
          lVar27 = (long)(int)lVar27 + 1;
          if (*(uint *)(lVar15 + 0x18) <= (uint)lVar27) goto LAB_03220980;
          iVar24 = *(int *)(lVar15 + lVar27 * 4 + 0x20);
        }
        if ((iVar24 == 0) || (iVar14 = iVar24 + iVar14, iVar13 <= iVar14)) break;
        uVar7 = (ulong)*(uint *)(unaff_x29 + -0x60);
        uVar16 = uVar16 + 1;
      }
    }
  }
  uVar7 = FUN_031c833c(lVar9,0);
  if (((int)unaff_x24 == 0) && ((uVar7 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0xa0) != 0) {
      lVar9 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x30);
      if (cRam0000000007237eb3 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        cRam0000000007237eb3 = '\x01';
      }
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x10) == 1) {
          uVar20 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar20) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            lVar15 = *(long *)(unaff_x22 + 8);
            uVar6 = FUN_02521d48(lVar9,0,0);
            *(undefined2 *)(lVar15 + (long)(int)uVar20 * 2) = uVar6;
            *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
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
  uVar7 = unaff_x24 & 0xffffffff;
  uVar8 = FUN_018cc790(*(undefined8 *)(unaff_x29 + -0x78));
  *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar8;
  if ((int)unaff_x24 < iVar12) {
    psVar28 = *(short **)(unaff_x29 + -0x80);
    *(undefined4 *)(unaff_x29 + -0xb8) = 0;
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x94) ^ 1;
    *(int *)(unaff_x29 + -0x94) = -(int)*(undefined8 *)(unaff_x29 + -0xb0);
    do {
      uVar20 = (uint)uVar7;
      uVar3 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar20 * 2);
      if ((uVar3 == 0x3b) || (uVar3 == 0)) break;
      if (((int)uVar10 < 1) ||
         ((0x30 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar9 = *(long *)(unaff_x29 + -0xa0);
      }
      else {
        lVar9 = *(long *)(unaff_x29 + -0xa0);
        uVar21 = *(uint *)(unaff_x29 + -0x78);
        uVar11 = uVar10;
        do {
          sVar23 = *psVar28;
          sVar4 = 0x30;
          if (sVar23 != 0) {
            psVar28 = psVar28 + 1;
            sVar4 = sVar23;
          }
          if (DAT_072305cf == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            DAT_072305cf = '\x01';
          }
          uVar10 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = sVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
          }
          else {
            FUN_025eb570();
          }
          if ((-1 < (int)uVar16) && (1 < iVar18 && (uVar21 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x60) <= uVar16) goto LAB_03220980;
            if (iVar18 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)uVar16 * 4) + 1) {
              if (lVar9 == 0) goto LAB_03220984;
              lVar15 = *(long *)(lVar9 + 0x40);
              if (cRam0000000007237eb3 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                cRam0000000007237eb3 = '\x01';
              }
              if (lVar15 == 0) goto LAB_03220984;
              if (*(int *)(lVar15 + 0x10) == 1) {
                uVar10 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_03220008;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
                lVar9 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_02521d48(lVar15,0,0);
                *(undefined2 *)(lVar9 + (long)(int)uVar10 * 2) = uVar6;
                lVar9 = *(long *)(unaff_x29 + -0xa0);
                *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
              }
              else {
LAB_03220008:
                FUN_025eb69c();
              }
              uVar21 = *(uint *)(unaff_x29 + -0x78);
              uVar16 = uVar16 - 1;
            }
          }
          uVar10 = uVar11 - 1;
          iVar18 = iVar18 + -1;
          bVar1 = 0 < (int)uVar11;
          uVar11 = uVar10;
        } while (uVar10 != 0 && bVar1);
      }
      uVar21 = uVar20 + 1;
      uVar7 = (ulong)uVar21;
      if (uVar3 < 0x46) {
        switch(uVar3) {
        case 0x22:
        case 0x27:
          if ((int)uVar21 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
            lVar9 = uVar7 << 0x20;
            uVar20 = ~uVar20;
            puVar25 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar21 * 2);
            while ((uVar2 = *puVar25, uVar2 != 0 && (uVar2 != uVar3))) {
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar21 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03220980;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
              }
              else {
                FUN_025eb570();
              }
              lVar9 = lVar9 + 0x100000000;
              uVar20 = uVar20 - 1;
              puVar25 = puVar25 + 1;
              if (*(uint *)(unaff_x29 + -0x94) == uVar20) goto LAB_03220838;
            }
            uVar7 = (ulong)((*(short *)((lVar9 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) -
                           uVar20);
          }
          break;
        case 0x23:
        case 0x30:
          if ((int)uVar10 < 0) {
            uVar10 = uVar10 + 1;
            if (iVar18 <= *(int *)(unaff_x29 + -0xc4)) {
LAB_032204f8:
              sVar23 = 0x30;
              goto LAB_032204fc;
            }
          }
          else {
            sVar23 = *psVar28;
            if (sVar23 == 0) {
              if (*(int *)(unaff_x29 + -200) < iVar18) goto LAB_032204f8;
            }
            else {
              psVar28 = psVar28 + 1;
LAB_032204fc:
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar21 = *(uint *)(unaff_x22 + 0x18);
              uVar20 = *(uint *)(unaff_x29 + -0x78);
              if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03220980;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar21 * 2) = sVar23;
                *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
              }
              else {
                FUN_025eb570();
              }
              if ((-1 < (int)uVar16) && (1 < iVar18 && (uVar20 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x60) <= uVar16) goto LAB_03220980;
                if (iVar18 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)uVar16 * 4) + 1) {
                  if (*(long *)(unaff_x29 + -0xa0) == 0) goto LAB_03220984;
                  lVar9 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
                  if (cRam0000000007237eb3 == '\0') {
                    thunk_FUN_0159f088(PTR_DAT_06de9da0);
                    cRam0000000007237eb3 = '\x01';
                  }
                  if (lVar9 == 0) goto LAB_03220984;
                  if (*(int *)(lVar9 + 0x10) == 1) {
                    uVar20 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_0322061c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_03220980;
                    lVar15 = *(long *)(unaff_x22 + 8);
                    uVar6 = FUN_02521d48(lVar9,0,0);
                    *(undefined2 *)(lVar15 + (long)(int)uVar20 * 2) = uVar6;
                    *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
                  }
                  else {
LAB_0322061c:
                    FUN_025eb69c();
                  }
                  uVar16 = uVar16 - 1;
                }
              }
            }
          }
          iVar18 = iVar18 + -1;
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
          uVar20 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar20 < *(uint *)(unaff_x22 + 0x10)) {
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = uVar3;
              goto LAB_032202c0;
            }
            goto LAB_03220980;
          }
LAB_032202d0:
          FUN_025eb570();
          break;
        case 0x25:
          if (lVar9 == 0) goto LAB_03220984;
          lVar9 = *(long *)(lVar9 + 0x90);
joined_r0x03220140:
          if (cRam0000000007237eb3 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            cRam0000000007237eb3 = '\x01';
          }
          if (lVar9 == 0) goto LAB_03220984;
          if (*(int *)(lVar9 + 0x10) == 1) {
            uVar20 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar20 < *(uint *)(unaff_x22 + 0x10)) {
                lVar15 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_02521d48(lVar9,0,0);
                *(undefined2 *)(lVar15 + (long)(int)uVar20 * 2) = uVar6;
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
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
          if ((*(uint *)(unaff_x29 + -0xb8) & 1) == 0 && iVar18 == 0) {
            if ((*(int *)(unaff_x29 + -200) < 0) ||
               ((*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x6c) && (*psVar28 != 0)))) {
              if (lVar9 == 0) goto LAB_03220984;
              lVar9 = *(long *)(lVar9 + 0x38);
              if (cRam0000000007237eb3 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                cRam0000000007237eb3 = '\x01';
              }
              if (lVar9 == 0) goto LAB_03220984;
              if (*(int *)(lVar9 + 0x10) == 1) {
                uVar20 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_032206e8;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_03220980;
                lVar15 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_02521d48(lVar9,0,0);
                *(undefined2 *)(lVar15 + (long)(int)uVar20 * 2) = uVar6;
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
              }
              else {
LAB_032206e8:
                FUN_025eb69c();
              }
              iVar18 = 0;
              *(undefined4 *)(unaff_x29 + -0xb8) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0xb8) = 0;
              iVar18 = 0;
            }
          }
          break;
        default:
          if (uVar3 != 0x45) goto switchD_03220064_caseD_24;
LAB_03220240:
          if ((*(uint *)(unaff_x29 + -0xb4) & 1) == 0) {
            uVar8 = *(undefined8 *)(unaff_x29 + -0xb0);
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
            uVar11 = (uint)uVar8;
            if ((int)uVar21 < (int)uVar11) {
              sVar23 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar21 * 2);
              if ((sVar23 == 0x2d) || (sVar23 == 0x2b)) {
                uVar7 = (ulong)(uVar20 + 2);
                if (DAT_072305cf == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  DAT_072305cf = '\x01';
                }
                uVar20 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_03220980;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = sVar23;
                  *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
                }
                else {
                  FUN_025eb570();
                }
              }
              if ((int)uVar7 < (int)uVar11) {
                psVar19 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar7 * 2);
                do {
                  if (*psVar19 != 0x30) break;
                  if (DAT_072305cf == '\0') {
                    thunk_FUN_0159f088(PTR_DAT_06de9da0);
                    DAT_072305cf = '\x01';
                  }
                  uVar20 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_03220980;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
                  }
                  else {
                    FUN_025eb570();
                  }
                  uVar20 = (int)uVar7 + 1;
                  uVar7 = (ulong)uVar20;
                  psVar19 = psVar19 + 1;
                } while (uVar11 != uVar20);
              }
            }
          }
          else {
            uVar11 = (uint)*(ulong *)(unaff_x29 + -0xb0);
            if (((int)uVar21 < (int)uVar11) &&
               (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar21 * 2) == 0x30)) {
              iVar12 = 1;
              goto LAB_03220720;
            }
            iVar12 = uVar20 + 2;
            if ((int)uVar11 <= iVar12) {
LAB_03220778:
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar20 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_03220980;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
              }
              else {
                FUN_025eb570();
              }
              *(undefined4 *)(unaff_x29 + -0xb4) = 1;
              break;
            }
            sVar23 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar21 * 2);
            if (sVar23 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar12 * 2) != 0x30)
              goto LAB_03220778;
              iVar12 = 0;
            }
            else {
              if ((sVar23 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar12 * 2) != 0x30))
              goto LAB_03220778;
              iVar12 = 0;
            }
LAB_03220720:
            uVar7 = (ulong)(uVar20 + 2);
            if ((int)(uVar20 + 2) < (int)uVar11) {
              do {
                if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar7 * 2) != 0x30)
                goto LAB_03220750;
                uVar20 = (int)uVar7 + 1;
                uVar7 = (ulong)uVar20;
                iVar12 = iVar12 + 1;
              } while (uVar11 != uVar20);
              uVar7 = *(ulong *)(unaff_x29 + -0xb0) & 0xffffffff;
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
          if (lVar9 != 0) {
            lVar9 = *(long *)(lVar9 + 0x98);
            goto joined_r0x03220140;
          }
          goto LAB_03220984;
        }
        if (((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar21) ||
           (sVar23 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar21 * 2), sVar23 == 0))
        goto switchD_03220064_caseD_2c;
        uVar7 = (ulong)(uVar20 + 2);
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar20 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_032202d0;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_03220980;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = sVar23;
LAB_032202c0:
        *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
      }
switchD_03220064_caseD_2c:
    } while ((int)uVar7 < (int)*(undefined8 *)(unaff_x29 + -0xb0));
  }
LAB_03220838:
  if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


