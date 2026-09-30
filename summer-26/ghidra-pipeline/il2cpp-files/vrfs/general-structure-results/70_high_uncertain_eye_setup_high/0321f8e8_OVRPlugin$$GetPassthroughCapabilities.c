/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilities
ENTRY_POINT: 0321f8e8
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

void OVRPlugin__GetPassthroughCapabilities(void)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  undefined1 auVar6 [12];
  undefined2 uVar7;
  short *psVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ushort *puVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x22;
  int iVar22;
  int iVar23;
  short *psVar24;
  uint uVar25;
  uint uVar26;
  undefined8 *puVar27;
  short sVar28;
  long unaff_x26;
  int iVar29;
  undefined4 uVar30;
  ulong uVar31;
  long lVar32;
  long unaff_x29;
  undefined1 auVar33 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  thunk_FUN_0159f088();
                    /* try { // try from 0321f8ec to 0331f903 has its CatchHandler @ 0321f970 */
  thunk_FUN_0159f088(PTR_DAT_06d9bc98);
  thunk_FUN_0159f088(PTR_DAT_06e24900);
                    /* try { // try from 0321f904 to 0331f95f has its CatchHandler @ 0321f804 */
  thunk_FUN_0159f088(PTR_DAT_06e3f408);
  thunk_FUN_0159f088(PTR_DAT_06d89bf0);
  thunk_FUN_0159f088(PTR_DAT_06dd1ae8);
  uVar12 = *(undefined8 *)(unaff_x29 + -0x90);
  *(undefined1 *)(unaff_x19 + 0xe88) = 1;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  psVar8 = (short *)FUN_031c8358(uVar12,0);
  sVar28 = *psVar8;
  *(short **)(unaff_x29 + -0x80) = psVar8;
  if (sVar28 != 0) {
    FUN_031c833c(uVar12,0);
                    /* try { // try from 0321f960 to 0331f96f has its CatchHandler @ 0321f970 */
  }
                    /* catch() { ... } // from try @ 0321f8ec with catch @ 0321f970
                       catch() { ... } // from try @ 0321f960 with catch @ 0321f970 */
                    /* try { // try from 0321f974 to 0331f977 has its CatchHandler @ 0321f980 */
                    /* try { // try from 0321f978 to 0331f983 has its CatchHandler @ 0321f804 */
  if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0321f974 with catch @ 0321f980
                        */
    thunk_FUN_016466fc();
  }
  uVar9 = FUN_03225858(*(undefined8 *)(unaff_x29 + -0x78));
  iVar16 = (int)unaff_x20;
  *(undefined4 *)(unaff_x29 + -0xa0) = 0;
  do {
    uVar31 = uVar9;
    lVar10 = FUN_018cc790(*(undefined8 *)(unaff_x29 + -0x78));
    iVar23 = (int)uVar31;
    if (iVar23 < iVar16) {
      iVar21 = 0;
      bVar1 = false;
      uVar20 = 0;
      iVar22 = 0;
      iVar29 = 0x7fffffff;
      iVar11 = -1;
      iVar13 = -1;
      uVar9 = uVar31 & 0xffffffff;
      *(undefined4 *)(unaff_x29 + -0x6c) = 0;
      do {
        iVar18 = (int)uVar9;
        uVar4 = *(ushort *)(lVar10 + (long)iVar18 * 2);
        if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
        uVar14 = iVar18 + 1;
        if (uVar4 < 0x46) {
          switch(uVar4) {
          case 0x22:
          case 0x27:
            lVar19 = (long)(int)uVar14;
            puVar17 = (ushort *)(lVar10 + (long)(int)uVar14 * 2);
            do {
              if ((iVar16 <= lVar19) || (uVar3 = *puVar17, uVar3 == 0)) break;
              lVar19 = lVar19 + 1;
              puVar17 = puVar17 + 1;
            } while (uVar3 != uVar4);
            uVar14 = (uint)lVar19;
            break;
          case 0x23:
            *(int *)(unaff_x29 + -0x6c) = *(int *)(unaff_x29 + -0x6c) + 1;
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
            iVar22 = iVar22 + 2;
            break;
          case 0x2c:
            if ((iVar11 < 0) && (0 < *(int *)(unaff_x29 + -0x6c))) {
              if (iVar13 < 0) {
                *(undefined4 *)(unaff_x29 + -0xa0) = 1;
                iVar13 = *(int *)(unaff_x29 + -0x6c);
              }
              else {
                iVar2 = *(int *)(unaff_x29 + -0x6c);
                uVar20 = uVar20 | iVar13 != iVar2;
                iVar18 = 1;
                if (iVar13 == iVar2) {
                  iVar18 = *(int *)(unaff_x29 + -0xa0) + 1;
                }
                *(int *)(unaff_x29 + -0xa0) = iVar18;
                iVar13 = iVar2;
              }
            }
            break;
          case 0x2e:
            if (iVar11 < 0) {
              iVar11 = *(int *)(unaff_x29 + -0x6c);
            }
            break;
          case 0x30:
            iVar21 = *(int *)(unaff_x29 + -0x6c) + 1;
            iVar18 = *(int *)(unaff_x29 + -0x6c);
            if (iVar29 != 0x7fffffff) {
              iVar18 = iVar29;
            }
            *(int *)(unaff_x29 + -0x6c) = iVar21;
            iVar29 = iVar18;
            break;
          default:
            if (uVar4 == 0x45) {
LAB_0321fa9c:
              if ((((int)uVar14 < iVar16) && (*(short *)(lVar10 + (long)(int)uVar14 * 2) == 0x30))
                 || ((iVar18 + 2 < iVar16 &&
                     (((sVar28 = *(short *)(lVar10 + (long)(int)uVar14 * 2), sVar28 == 0x2d ||
                       (sVar28 == 0x2b)) && (*(short *)(lVar10 + (long)(iVar18 + 2) * 2) == 0x30))))
                    )) {
                uVar25 = iVar18 + 2;
                do {
                  uVar14 = uVar25;
                  if (iVar16 <= (int)uVar14) break;
                  uVar25 = uVar14 + 1;
                } while (*(short *)(lVar10 + (long)(int)uVar14 * 2) == 0x30);
                bVar1 = true;
              }
            }
          }
        }
        else if (uVar4 == 0x5c) {
          if (((int)uVar14 < iVar16) && (*(short *)(lVar10 + (long)(int)uVar14 * 2) != 0)) {
            uVar14 = iVar18 + 2;
          }
        }
        else {
          if (uVar4 == 0x65) goto LAB_0321fa9c;
          if (uVar4 == 0x2030) {
            iVar22 = iVar22 + 3;
          }
        }
        uVar9 = (ulong)uVar14;
      } while ((int)uVar14 < iVar16);
      if (iVar11 < 0) {
        iVar11 = *(int *)(unaff_x29 + -0x6c);
      }
      lVar10 = *(long *)(unaff_x29 + -0x90);
      *(int *)(unaff_x29 + -0x84) = iVar11;
      if (-1 < iVar13) {
        if (iVar13 == iVar11) {
          iVar22 = *(int *)(unaff_x29 + -0xa0) * -3 + iVar22;
        }
        else {
          uVar20 = 1;
        }
      }
    }
    else {
      lVar10 = *(long *)(unaff_x29 + -0x90);
      *(undefined4 *)(unaff_x29 + -0x84) = 0;
      bVar1 = false;
      iVar21 = 0;
      *(undefined4 *)(unaff_x29 + -0x6c) = 0;
      iVar22 = 0;
      uVar20 = 0;
      iVar29 = 0x7fffffff;
    }
    *(uint *)(unaff_x29 + -0x94) = uVar20;
    if (**(short **)(unaff_x29 + -0x80) == 0) {
      FUN_031c834c(lVar10,0,0);
      iVar11 = *(int *)(unaff_x29 + -0x84);
      lVar10 = *(long *)(unaff_x29 + -0x90);
      iVar22 = iVar11 - iVar29;
      if (iVar22 == 0 || iVar11 < iVar29) {
        iVar22 = 0;
      }
      *(int *)(unaff_x29 + -0xc4) = iVar22;
      iVar22 = iVar11 - iVar21;
      if (iVar21 <= iVar11) {
        iVar22 = 0;
      }
      *(undefined4 *)(lVar10 + 4) = 0;
      *(int *)(unaff_x29 + -200) = iVar22;
      if (!bVar1) goto LAB_0321fd08;
      goto LAB_0321fcf4;
    }
    iVar22 = *(int *)(lVar10 + 4) + iVar22;
    *(int *)(lVar10 + 4) = iVar22;
    iVar11 = *(int *)(unaff_x29 + -0x6c);
    if (!bVar1) {
      iVar11 = (*(int *)(unaff_x29 + -0x6c) - *(int *)(unaff_x29 + -0x84)) + iVar22;
    }
    if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar10 = *(long *)(unaff_x29 + -0x90);
    }
    FUN_032244e4(lVar10,iVar11);
    if (**(short **)(unaff_x29 + -0x80) != 0) break;
    if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar9 = FUN_03225858(*(undefined8 *)(unaff_x29 + -0x78));
  } while ((int)uVar9 != iVar23);
  iVar11 = *(int *)(unaff_x29 + -0x84);
  iVar22 = iVar11 - iVar29;
  if (iVar22 == 0 || iVar11 < iVar29) {
    iVar22 = 0;
  }
  *(int *)(unaff_x29 + -0xc4) = iVar22;
  iVar22 = iVar11 - iVar21;
  if (iVar21 <= iVar11) {
    iVar22 = 0;
  }
  *(int *)(unaff_x29 + -200) = iVar22;
  if (bVar1) {
    lVar10 = *(long *)(unaff_x29 + -0x90);
LAB_0321fcf4:
    uVar20 = 0;
    uVar30 = 1;
    uVar14 = *(uint *)(unaff_x29 + -0x94);
    iVar22 = iVar11;
  }
  else {
    lVar10 = *(long *)(unaff_x29 + -0x90);
LAB_0321fd08:
    iVar22 = *(int *)(lVar10 + 4);
    uVar14 = *(uint *)(unaff_x29 + -0x94);
    uVar30 = 0;
    uVar20 = iVar22 - iVar11;
    if (uVar20 == 0 || iVar22 < iVar11) {
      iVar22 = iVar11;
    }
  }
  puVar27 = &uStack_10;
  uStack_10 = 0;
  uStack_8 = 0;
  if (cRam000000000722cedc == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    uVar14 = *(uint *)(unaff_x29 + -0x94);
    lVar10 = *(long *)(unaff_x29 + -0x90);
    cRam000000000722cedc = '\x01';
  }
  uVar12 = _UNK_053e1e50;
  *(undefined8 **)(unaff_x29 + -0x68) = puVar27;
  *(long *)(unaff_x29 + -0xa0) = unaff_x26;
  *(undefined4 *)(unaff_x29 + -0xb4) = uVar30;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar12;
  if ((uVar14 & 1) == 0) {
LAB_0321fda0:
    uVar14 = 0xffffffff;
  }
  else {
    if ((unaff_x26 == 0) || (*(long *)(unaff_x26 + 0x40) == 0)) goto LAB_03220984;
    if (*(int *)(*(long *)(unaff_x26 + 0x40) + 0x10) < 1) goto LAB_0321fda0;
    lVar19 = *(long *)(unaff_x26 + 0x10);
    if (lVar19 == 0) goto LAB_03220984;
    if (*(int *)(lVar19 + 0x18) == 0) {
      iVar21 = 0;
    }
    else {
      iVar21 = *(int *)(lVar19 + 0x20);
    }
    iVar29 = (uVar20 & (int)uVar20 >> 0x1f) + iVar22;
    uVar14 = 0xffffffff;
    iVar11 = *(int *)(unaff_x29 + -0xc4);
    if (*(int *)(unaff_x29 + -0xc4) <= iVar29) {
      iVar11 = iVar29;
    }
    if ((iVar21 != 0) && (iVar21 < iVar11)) {
      uVar14 = 0;
      lVar32 = 0;
      iVar13 = *(int *)(lVar19 + 0x18) + -1;
      uVar9 = 4;
      *(long *)(unaff_x29 + -0xa8) = lVar19;
      *(int *)(unaff_x29 + -0xb0) = iVar11;
      *(int *)(unaff_x29 + -0xb8) = iVar13;
      iVar29 = iVar21;
      while( true ) {
        auVar33._8_8_ = uVar9;
        auVar33._0_8_ = puVar27;
        auVar6 = auVar33._0_12_;
        if ((int)uVar9 <= (int)uVar14) {
          uVar12 = FUN_0160edfc(*(undefined8 *)PTR_DAT_06dd9ff0,(int)uVar9 << 1);
          auVar33 = FUN_026d09ec(uVar12,*(undefined8 *)PTR_DAT_06dd1ae8);
          FUN_026d03fc(unaff_x29 + -0x68,auVar33._0_8_,auVar33._8_8_,*(undefined8 *)PTR_DAT_06e24900
                      );
          auVar33 = FUN_026d09ec(uVar12,*(undefined8 *)PTR_DAT_06dd1ae8);
          auVar6 = auVar33._0_12_;
          iVar13 = *(int *)(unaff_x29 + -0xb8);
          iVar11 = *(int *)(unaff_x29 + -0xb0);
          lVar19 = *(long *)(unaff_x29 + -0xa8);
          lVar10 = *(long *)(unaff_x29 + -0x90);
          *(undefined1 (*) [16])(unaff_x29 + -0x68) = auVar33;
        }
        puVar27 = auVar6._0_8_;
        if (auVar6._8_4_ <= uVar14) goto LAB_03220980;
        *(int *)((long)puVar27 + (long)(int)uVar14 * 4) = iVar21;
        if ((int)lVar32 < iVar13) {
          lVar32 = (long)(int)lVar32 + 1;
          if (*(uint *)(lVar19 + 0x18) <= (uint)lVar32) goto LAB_03220980;
          iVar29 = *(int *)(lVar19 + lVar32 * 4 + 0x20);
        }
        if ((iVar29 == 0) || (iVar21 = iVar29 + iVar21, iVar11 <= iVar21)) break;
        uVar9 = (ulong)*(uint *)(unaff_x29 + -0x60);
        uVar14 = uVar14 + 1;
      }
    }
  }
  uVar9 = FUN_031c833c(lVar10,0);
  if ((iVar23 == 0) && ((uVar9 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0xa0) != 0) {
      lVar10 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x30);
      if (cRam0000000007237eb3 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        cRam0000000007237eb3 = '\x01';
      }
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x10) == 1) {
          uVar25 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar25) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            lVar19 = *(long *)(unaff_x22 + 8);
            uVar7 = FUN_02521d48(lVar10,0,0);
            *(undefined2 *)(lVar19 + (long)(int)uVar25 * 2) = uVar7;
            *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
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
  uVar31 = uVar31 & 0xffffffff;
  uVar12 = FUN_018cc790(*(undefined8 *)(unaff_x29 + -0x78));
  *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar12;
  if (iVar23 < iVar16) {
    psVar8 = *(short **)(unaff_x29 + -0x80);
    *(undefined4 *)(unaff_x29 + -0xb8) = 0;
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x94) ^ 1;
    *(int *)(unaff_x29 + -0x94) = -(int)*(undefined8 *)(unaff_x29 + -0xb0);
    do {
      uVar25 = (uint)uVar31;
      uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar25 * 2);
      if ((uVar4 == 0x3b) || (uVar4 == 0)) break;
      if (((int)uVar20 < 1) ||
         ((0x30 < uVar4 || ((1L << ((ulong)uVar4 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar10 = *(long *)(unaff_x29 + -0xa0);
      }
      else {
        lVar10 = *(long *)(unaff_x29 + -0xa0);
        uVar26 = *(uint *)(unaff_x29 + -0x78);
        uVar15 = uVar20;
        do {
          sVar28 = *psVar8;
          sVar5 = 0x30;
          if (sVar28 != 0) {
            psVar8 = psVar8 + 1;
            sVar5 = sVar28;
          }
          if (DAT_072305cf == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            DAT_072305cf = '\x01';
          }
          uVar20 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar20 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_03220980;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar20 * 2) = sVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
          }
          else {
            FUN_025eb570();
          }
          if ((-1 < (int)uVar14) && (1 < iVar22 && (uVar26 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x60) <= uVar14) goto LAB_03220980;
            if (iVar22 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)uVar14 * 4) + 1) {
              if (lVar10 == 0) goto LAB_03220984;
              lVar19 = *(long *)(lVar10 + 0x40);
              if (cRam0000000007237eb3 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                cRam0000000007237eb3 = '\x01';
              }
              if (lVar19 == 0) goto LAB_03220984;
              if (*(int *)(lVar19 + 0x10) == 1) {
                uVar20 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar20) goto LAB_03220008;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar20) goto LAB_03220980;
                lVar10 = *(long *)(unaff_x22 + 8);
                uVar7 = FUN_02521d48(lVar19,0,0);
                *(undefined2 *)(lVar10 + (long)(int)uVar20 * 2) = uVar7;
                lVar10 = *(long *)(unaff_x29 + -0xa0);
                *(uint *)(unaff_x22 + 0x18) = uVar20 + 1;
              }
              else {
LAB_03220008:
                FUN_025eb69c();
              }
              uVar26 = *(uint *)(unaff_x29 + -0x78);
              uVar14 = uVar14 - 1;
            }
          }
          uVar20 = uVar15 - 1;
          iVar22 = iVar22 + -1;
          bVar1 = 0 < (int)uVar15;
          uVar15 = uVar20;
        } while (uVar20 != 0 && bVar1);
      }
      uVar26 = uVar25 + 1;
      uVar31 = (ulong)uVar26;
      if (uVar4 < 0x46) {
        switch(uVar4) {
        case 0x22:
        case 0x27:
          if ((int)uVar26 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
            lVar10 = uVar31 << 0x20;
            uVar25 = ~uVar25;
            puVar17 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar26 * 2);
            while ((uVar3 = *puVar17, uVar3 != 0 && (uVar3 != uVar4))) {
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar26 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar26 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar26) goto LAB_03220980;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar26 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar26 + 1;
              }
              else {
                FUN_025eb570();
              }
              lVar10 = lVar10 + 0x100000000;
              uVar25 = uVar25 - 1;
              puVar17 = puVar17 + 1;
              if (*(uint *)(unaff_x29 + -0x94) == uVar25) goto LAB_03220838;
            }
            uVar31 = (ulong)((*(short *)((lVar10 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) -
                            uVar25);
          }
          break;
        case 0x23:
        case 0x30:
          if ((int)uVar20 < 0) {
            uVar20 = uVar20 + 1;
            if (iVar22 <= *(int *)(unaff_x29 + -0xc4)) {
LAB_032204f8:
              sVar28 = 0x30;
              goto LAB_032204fc;
            }
          }
          else {
            sVar28 = *psVar8;
            if (sVar28 == 0) {
              if (*(int *)(unaff_x29 + -200) < iVar22) goto LAB_032204f8;
            }
            else {
              psVar8 = psVar8 + 1;
LAB_032204fc:
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar26 = *(uint *)(unaff_x22 + 0x18);
              uVar25 = *(uint *)(unaff_x29 + -0x78);
              if ((int)uVar26 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar26) goto LAB_03220980;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar26 * 2) = sVar28;
                *(uint *)(unaff_x22 + 0x18) = uVar26 + 1;
              }
              else {
                FUN_025eb570();
              }
              if ((-1 < (int)uVar14) && (1 < iVar22 && (uVar25 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x60) <= uVar14) goto LAB_03220980;
                if (iVar22 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)uVar14 * 4) + 1) {
                  if (*(long *)(unaff_x29 + -0xa0) == 0) goto LAB_03220984;
                  lVar10 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
                  if (cRam0000000007237eb3 == '\0') {
                    thunk_FUN_0159f088(PTR_DAT_06de9da0);
                    cRam0000000007237eb3 = '\x01';
                  }
                  if (lVar10 == 0) goto LAB_03220984;
                  if (*(int *)(lVar10 + 0x10) == 1) {
                    uVar25 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar25) goto LAB_0322061c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar25) goto LAB_03220980;
                    lVar19 = *(long *)(unaff_x22 + 8);
                    uVar7 = FUN_02521d48(lVar10,0,0);
                    *(undefined2 *)(lVar19 + (long)(int)uVar25 * 2) = uVar7;
                    *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
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
          iVar22 = iVar22 + -1;
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
          uVar25 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar25 < *(uint *)(unaff_x22 + 0x10)) {
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar25 * 2) = uVar4;
              goto LAB_032202c0;
            }
            goto LAB_03220980;
          }
LAB_032202d0:
          FUN_025eb570();
          break;
        case 0x25:
          if (lVar10 == 0) goto LAB_03220984;
          lVar10 = *(long *)(lVar10 + 0x90);
joined_r0x03220140:
          if (cRam0000000007237eb3 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            cRam0000000007237eb3 = '\x01';
          }
          if (lVar10 == 0) goto LAB_03220984;
          if (*(int *)(lVar10 + 0x10) == 1) {
            uVar25 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar25 < *(uint *)(unaff_x22 + 0x10)) {
                lVar19 = *(long *)(unaff_x22 + 8);
                uVar7 = FUN_02521d48(lVar10,0,0);
                *(undefined2 *)(lVar19 + (long)(int)uVar25 * 2) = uVar7;
                *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
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
          if ((*(uint *)(unaff_x29 + -0xb8) & 1) == 0 && iVar22 == 0) {
            if ((*(int *)(unaff_x29 + -200) < 0) ||
               ((*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x6c) && (*psVar8 != 0)))) {
              if (lVar10 == 0) goto LAB_03220984;
              lVar10 = *(long *)(lVar10 + 0x38);
              if (cRam0000000007237eb3 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                cRam0000000007237eb3 = '\x01';
              }
              if (lVar10 == 0) goto LAB_03220984;
              if (*(int *)(lVar10 + 0x10) == 1) {
                uVar25 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar25) goto LAB_032206e8;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar25) goto LAB_03220980;
                lVar19 = *(long *)(unaff_x22 + 8);
                uVar7 = FUN_02521d48(lVar10,0,0);
                *(undefined2 *)(lVar19 + (long)(int)uVar25 * 2) = uVar7;
                *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
              }
              else {
LAB_032206e8:
                FUN_025eb69c();
              }
              iVar22 = 0;
              *(undefined4 *)(unaff_x29 + -0xb8) = 1;
            }
            else {
              *(undefined4 *)(unaff_x29 + -0xb8) = 0;
              iVar22 = 0;
            }
          }
          break;
        default:
          if (uVar4 != 0x45) goto switchD_03220064_caseD_24;
LAB_03220240:
          if ((*(uint *)(unaff_x29 + -0xb4) & 1) == 0) {
            uVar12 = *(undefined8 *)(unaff_x29 + -0xb0);
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar15 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_03220980;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
            }
            else {
              FUN_025eb570();
            }
            uVar15 = (uint)uVar12;
            if ((int)uVar26 < (int)uVar15) {
              sVar28 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar26 * 2);
              if ((sVar28 == 0x2d) || (sVar28 == 0x2b)) {
                uVar31 = (ulong)(uVar25 + 2);
                if (DAT_072305cf == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  DAT_072305cf = '\x01';
                }
                uVar25 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar25) goto LAB_03220980;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar25 * 2) = sVar28;
                  *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
                }
                else {
                  FUN_025eb570();
                }
              }
              if ((int)uVar31 < (int)uVar15) {
                psVar24 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar31 * 2);
                do {
                  if (*psVar24 != 0x30) break;
                  if (DAT_072305cf == '\0') {
                    thunk_FUN_0159f088(PTR_DAT_06de9da0);
                    DAT_072305cf = '\x01';
                  }
                  uVar25 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar25) goto LAB_03220980;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar25 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
                  }
                  else {
                    FUN_025eb570();
                  }
                  uVar25 = (int)uVar31 + 1;
                  uVar31 = (ulong)uVar25;
                  psVar24 = psVar24 + 1;
                } while (uVar15 != uVar25);
              }
            }
          }
          else {
            uVar15 = (uint)*(ulong *)(unaff_x29 + -0xb0);
            if (((int)uVar26 < (int)uVar15) &&
               (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar26 * 2) == 0x30)) {
              iVar16 = 1;
              goto LAB_03220720;
            }
            iVar16 = uVar25 + 2;
            if ((int)uVar15 <= iVar16) {
LAB_03220778:
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar25 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar25 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar25) goto LAB_03220980;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar25 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
              }
              else {
                FUN_025eb570();
              }
              *(undefined4 *)(unaff_x29 + -0xb4) = 1;
              break;
            }
            sVar28 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar26 * 2);
            if (sVar28 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar16 * 2) != 0x30)
              goto LAB_03220778;
              iVar16 = 0;
            }
            else {
              if ((sVar28 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar16 * 2) != 0x30))
              goto LAB_03220778;
              iVar16 = 0;
            }
LAB_03220720:
            uVar31 = (ulong)(uVar25 + 2);
            if ((int)(uVar25 + 2) < (int)uVar15) {
              do {
                if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar31 * 2) != 0x30)
                goto LAB_03220750;
                uVar25 = (int)uVar31 + 1;
                uVar31 = (ulong)uVar25;
                iVar16 = iVar16 + 1;
              } while (uVar15 != uVar25);
              uVar31 = *(ulong *)(unaff_x29 + -0xb0) & 0xffffffff;
            }
LAB_03220750:
            if (9 < iVar16) {
              iVar16 = 10;
            }
            if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
              *(int *)(unaff_x29 + -0xb4) = iVar16;
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
          if (lVar10 != 0) {
            lVar10 = *(long *)(lVar10 + 0x98);
            goto joined_r0x03220140;
          }
          goto LAB_03220984;
        }
        if (((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar26) ||
           (sVar28 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar26 * 2), sVar28 == 0))
        goto switchD_03220064_caseD_2c;
        uVar31 = (ulong)(uVar25 + 2);
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar25 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar25) goto LAB_032202d0;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar25) goto LAB_03220980;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar25 * 2) = sVar28;
LAB_032202c0:
        *(uint *)(unaff_x22 + 0x18) = uVar25 + 1;
      }
switchD_03220064_caseD_2c:
    } while ((int)uVar31 < (int)*(undefined8 *)(unaff_x29 + -0xb0));
  }
LAB_03220838:
  if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


