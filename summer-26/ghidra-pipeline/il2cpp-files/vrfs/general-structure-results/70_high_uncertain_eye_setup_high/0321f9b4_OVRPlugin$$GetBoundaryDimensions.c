/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryDimensions
ENTRY_POINT: 0321f9b4
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

void OVRPlugin__GetBoundaryDimensions(undefined8 param_1)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined1 auVar5 [12];
  undefined2 uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  undefined8 unaff_x20;
  long unaff_x22;
  int iVar18;
  long unaff_x23;
  int iVar19;
  ulong unaff_x24;
  short *psVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  short sVar24;
  int iVar25;
  long unaff_x26;
  ushort *puVar26;
  undefined4 uVar27;
  long lVar28;
  short *psVar29;
  long unaff_x29;
  undefined1 auVar30 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  do {
    lVar7 = FUN_018cc790(param_1);
    iVar11 = (int)unaff_x20;
    iVar19 = (int)unaff_x24;
    if (iVar19 < iVar11) {
      bVar1 = false;
      iVar18 = 0;
      uVar14 = unaff_x24 & 0xffffffff;
      *(undefined4 *)(unaff_x29 + -0x6c) = 0;
      do {
        iVar13 = (int)uVar14;
        uVar3 = *(ushort *)(lVar7 + (long)iVar13 * 2);
        if ((uVar3 == 0x3b) || (uVar3 == 0)) break;
        uVar9 = iVar13 + 1;
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
            if ((((int)uVar9 < iVar11) && (*(short *)(lVar7 + (long)(int)uVar9 * 2) == 0x30)) ||
               ((iVar13 + 2 < iVar11 &&
                (((sVar24 = *(short *)(lVar7 + (long)(int)uVar9 * 2), sVar24 == 0x2d ||
                  (sVar24 == 0x2b)) && (*(short *)(lVar7 + (long)(iVar13 + 2) * 2) == 0x30)))))) {
              uVar16 = iVar13 + 2;
              do {
                uVar9 = uVar16;
                if (iVar11 <= (int)uVar9) break;
                uVar16 = uVar9 + 1;
              } while (*(short *)(lVar7 + (long)(int)uVar9 * 2) == 0x30);
              bVar1 = true;
            }
          }
        }
        else if (uVar3 == 0x5c) {
          if (((int)uVar9 < iVar11) && (*(short *)(lVar7 + (long)(int)uVar9 * 2) != 0)) {
            uVar9 = iVar13 + 2;
          }
        }
        else {
          if (uVar3 == 0x65) goto LAB_0321fa9c;
          if (uVar16 == 0x2030) {
            iVar18 = iVar18 + 3;
          }
        }
        uVar14 = (ulong)uVar9;
      } while ((int)uVar9 < iVar11);
      lVar7 = *(long *)(unaff_x29 + -0x90);
      *(undefined4 *)(unaff_x29 + -0x84) = *(undefined4 *)(unaff_x29 + -0x6c);
    }
    else {
      lVar7 = *(long *)(unaff_x29 + -0x90);
      *(undefined4 *)(unaff_x29 + -0x84) = 0;
      bVar1 = false;
      *(undefined4 *)(unaff_x29 + -0x6c) = 0;
      iVar18 = 0;
    }
    *(undefined4 *)(unaff_x29 + -0x94) = 0;
    if (**(short **)(unaff_x29 + -0x80) == 0) {
      FUN_031c834c(lVar7,0,0);
      iVar13 = *(int *)(unaff_x29 + -0x84);
      lVar7 = *(long *)(unaff_x29 + -0x90);
      iVar18 = iVar13 + -0x7fffffff;
      if (iVar18 == 0 || iVar13 < 0x7fffffff) {
        iVar18 = 0;
      }
      *(int *)(unaff_x29 + -0xc4) = iVar18;
      iVar18 = iVar13;
      if (-1 < iVar13) {
        iVar18 = 0;
      }
      *(undefined4 *)(lVar7 + 4) = 0;
      *(int *)(unaff_x29 + -200) = iVar18;
      if (!bVar1) goto LAB_0321fd08;
      goto LAB_0321fcf4;
    }
    iVar18 = *(int *)(lVar7 + 4) + iVar18;
    *(int *)(lVar7 + 4) = iVar18;
    iVar13 = *(int *)(unaff_x29 + -0x6c);
    if (!bVar1) {
      iVar13 = (*(int *)(unaff_x29 + -0x6c) - *(int *)(unaff_x29 + -0x84)) + iVar18;
    }
    if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar7 = *(long *)(unaff_x29 + -0x90);
    }
    FUN_032244e4(lVar7,iVar13);
    if (**(short **)(unaff_x29 + -0x80) != 0) break;
    if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar14 = FUN_03225858(*(undefined8 *)(unaff_x29 + -0x78));
    if ((int)uVar14 == iVar19) break;
    unaff_x24 = uVar14 & 0xffffffff;
    param_1 = *(undefined8 *)(unaff_x29 + -0x78);
  } while( true );
  iVar13 = *(int *)(unaff_x29 + -0x84);
  iVar18 = iVar13 + -0x7fffffff;
  if (iVar18 == 0 || iVar13 < 0x7fffffff) {
    iVar18 = 0;
  }
  *(int *)(unaff_x29 + -0xc4) = iVar18;
  iVar18 = iVar13;
  if (-1 < iVar13) {
    iVar18 = 0;
  }
  *(int *)(unaff_x29 + -200) = iVar18;
  if (bVar1) {
    lVar7 = *(long *)(unaff_x29 + -0x90);
LAB_0321fcf4:
    uVar9 = 0;
    uVar27 = 1;
    uVar16 = *(uint *)(unaff_x29 + -0x94);
    iVar18 = iVar13;
  }
  else {
    lVar7 = *(long *)(unaff_x29 + -0x90);
LAB_0321fd08:
    iVar18 = *(int *)(lVar7 + 4);
    uVar16 = *(uint *)(unaff_x29 + -0x94);
    uVar27 = 0;
    uVar9 = iVar18 - iVar13;
    if (uVar9 == 0 || iVar18 < iVar13) {
      iVar18 = iVar13;
    }
  }
  puVar23 = &uStack_10;
  uStack_10 = 0;
  uStack_8 = 0;
  if (cRam000000000722cedc == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    uVar16 = *(uint *)(unaff_x29 + -0x94);
    lVar7 = *(long *)(unaff_x29 + -0x90);
    cRam000000000722cedc = '\x01';
  }
  uVar8 = _UNK_053e1e50;
  *(undefined8 **)(unaff_x29 + -0x68) = puVar23;
  *(long *)(unaff_x29 + -0xa0) = unaff_x26;
  *(undefined4 *)(unaff_x29 + -0xb4) = uVar27;
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
      iVar13 = 0;
    }
    else {
      iVar13 = *(int *)(lVar15 + 0x20);
    }
    iVar25 = (uVar9 & (int)uVar9 >> 0x1f) + iVar18;
    uVar16 = 0xffffffff;
    iVar12 = *(int *)(unaff_x29 + -0xc4);
    if (*(int *)(unaff_x29 + -0xc4) <= iVar25) {
      iVar12 = iVar25;
    }
    if ((iVar13 != 0) && (iVar13 < iVar12)) {
      uVar16 = 0;
      lVar28 = 0;
      iVar17 = *(int *)(lVar15 + 0x18) + -1;
      uVar14 = 4;
      *(long *)(unaff_x29 + -0xa8) = lVar15;
      *(int *)(unaff_x29 + -0xb0) = iVar12;
      *(int *)(unaff_x29 + -0xb8) = iVar17;
      iVar25 = iVar13;
      while( true ) {
        auVar30._8_8_ = uVar14;
        auVar30._0_8_ = puVar23;
        auVar5 = auVar30._0_12_;
        if ((int)uVar14 <= (int)uVar16) {
          uVar8 = FUN_0160edfc(*(undefined8 *)PTR_DAT_06dd9ff0,(int)uVar14 << 1);
          auVar30 = FUN_026d09ec(uVar8,*(undefined8 *)PTR_DAT_06dd1ae8);
          FUN_026d03fc(unaff_x29 + -0x68,auVar30._0_8_,auVar30._8_8_,*(undefined8 *)PTR_DAT_06e24900
                      );
          auVar30 = FUN_026d09ec(uVar8,*(undefined8 *)PTR_DAT_06dd1ae8);
          auVar5 = auVar30._0_12_;
          iVar17 = *(int *)(unaff_x29 + -0xb8);
          iVar12 = *(int *)(unaff_x29 + -0xb0);
          lVar15 = *(long *)(unaff_x29 + -0xa8);
          lVar7 = *(long *)(unaff_x29 + -0x90);
          *(undefined1 (*) [16])(unaff_x29 + -0x68) = auVar30;
        }
        puVar23 = auVar5._0_8_;
        if (auVar5._8_4_ <= uVar16) goto LAB_03220980;
        *(int *)((long)puVar23 + (long)(int)uVar16 * 4) = iVar13;
        if ((int)lVar28 < iVar17) {
          lVar28 = (long)(int)lVar28 + 1;
          if (*(uint *)(lVar15 + 0x18) <= (uint)lVar28) goto LAB_03220980;
          iVar25 = *(int *)(lVar15 + lVar28 * 4 + 0x20);
        }
        if ((iVar25 == 0) || (iVar13 = iVar25 + iVar13, iVar12 <= iVar13)) break;
        uVar14 = (ulong)*(uint *)(unaff_x29 + -0x60);
        uVar16 = uVar16 + 1;
      }
    }
  }
  uVar14 = FUN_031c833c(lVar7,0);
  if ((iVar19 == 0) && ((uVar14 & 1) != 0)) {
    if (*(long *)(unaff_x29 + -0xa0) != 0) {
      lVar7 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x30);
      if (cRam0000000007237eb3 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        cRam0000000007237eb3 = '\x01';
      }
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x10) == 1) {
          uVar21 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar21) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            lVar15 = *(long *)(unaff_x22 + 8);
            uVar6 = FUN_02521d48(lVar7,0,0);
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
LAB_0321fe4c:
  uVar14 = unaff_x24 & 0xffffffff;
  uVar8 = FUN_018cc790(*(undefined8 *)(unaff_x29 + -0x78));
  *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar8;
  if (iVar19 < iVar11) {
    psVar29 = *(short **)(unaff_x29 + -0x80);
    *(undefined4 *)(unaff_x29 + -0xb8) = 0;
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x94) ^ 1;
    *(int *)(unaff_x29 + -0x94) = -(int)*(undefined8 *)(unaff_x29 + -0xb0);
    do {
      uVar21 = (uint)uVar14;
      uVar3 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar21 * 2);
      if ((uVar3 == 0x3b) || (uVar3 == 0)) break;
      if (((int)uVar9 < 1) ||
         ((0x30 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar7 = *(long *)(unaff_x29 + -0xa0);
      }
      else {
        lVar7 = *(long *)(unaff_x29 + -0xa0);
        uVar22 = *(uint *)(unaff_x29 + -0x78);
        uVar10 = uVar9;
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
          uVar9 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
          }
          else {
            FUN_025eb570();
          }
          if ((-1 < (int)uVar16) && (1 < iVar18 && (uVar22 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x60) <= uVar16) goto LAB_03220980;
            if (iVar18 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)uVar16 * 4) + 1) {
              if (lVar7 == 0) goto LAB_03220984;
              lVar15 = *(long *)(lVar7 + 0x40);
              if (cRam0000000007237eb3 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                cRam0000000007237eb3 = '\x01';
              }
              if (lVar15 == 0) goto LAB_03220984;
              if (*(int *)(lVar15 + 0x10) == 1) {
                uVar9 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar9) goto LAB_03220008;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
                lVar7 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_02521d48(lVar15,0,0);
                *(undefined2 *)(lVar7 + (long)(int)uVar9 * 2) = uVar6;
                lVar7 = *(long *)(unaff_x29 + -0xa0);
                *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
              }
              else {
LAB_03220008:
                FUN_025eb69c();
              }
              uVar22 = *(uint *)(unaff_x29 + -0x78);
              uVar16 = uVar16 - 1;
            }
          }
          uVar9 = uVar10 - 1;
          iVar18 = iVar18 + -1;
          bVar1 = 0 < (int)uVar10;
          uVar10 = uVar9;
        } while (uVar9 != 0 && bVar1);
      }
      uVar22 = uVar21 + 1;
      uVar14 = (ulong)uVar22;
      if (uVar3 < 0x46) {
        switch(uVar3) {
        case 0x22:
        case 0x27:
          if ((int)uVar22 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
            lVar7 = uVar14 << 0x20;
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
              lVar7 = lVar7 + 0x100000000;
              uVar21 = uVar21 - 1;
              puVar26 = puVar26 + 1;
              if (*(uint *)(unaff_x29 + -0x94) == uVar21) goto LAB_03220838;
            }
            uVar14 = (ulong)((*(short *)((lVar7 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) -
                            uVar21);
          }
          break;
        case 0x23:
        case 0x30:
          if ((int)uVar9 < 0) {
            uVar9 = uVar9 + 1;
            if (iVar18 <= *(int *)(unaff_x29 + -0xc4)) {
LAB_032204f8:
              sVar24 = 0x30;
              goto LAB_032204fc;
            }
          }
          else {
            sVar24 = *psVar29;
            if (sVar24 == 0) {
              if (*(int *)(unaff_x29 + -200) < iVar18) goto LAB_032204f8;
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
              if ((-1 < (int)uVar16) && (1 < iVar18 && (uVar21 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x60) <= uVar16) goto LAB_03220980;
                if (iVar18 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)uVar16 * 4) + 1) {
                  if (*(long *)(unaff_x29 + -0xa0) == 0) goto LAB_03220984;
                  lVar7 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
                  if (cRam0000000007237eb3 == '\0') {
                    thunk_FUN_0159f088(PTR_DAT_06de9da0);
                    cRam0000000007237eb3 = '\x01';
                  }
                  if (lVar7 == 0) goto LAB_03220984;
                  if (*(int *)(lVar7 + 0x10) == 1) {
                    uVar21 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar21) goto LAB_0322061c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03220980;
                    lVar15 = *(long *)(unaff_x22 + 8);
                    uVar6 = FUN_02521d48(lVar7,0,0);
                    *(undefined2 *)(lVar15 + (long)(int)uVar21 * 2) = uVar6;
                    *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
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
          if (lVar7 == 0) goto LAB_03220984;
          lVar7 = *(long *)(lVar7 + 0x90);
joined_r0x03220140:
          if (cRam0000000007237eb3 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            cRam0000000007237eb3 = '\x01';
          }
          if (lVar7 == 0) goto LAB_03220984;
          if (*(int *)(lVar7 + 0x10) == 1) {
            uVar21 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar21 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar21 < *(uint *)(unaff_x22 + 0x10)) {
                lVar15 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_02521d48(lVar7,0,0);
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
          if ((*(uint *)(unaff_x29 + -0xb8) & 1) == 0 && iVar18 == 0) {
            if ((*(int *)(unaff_x29 + -200) < 0) ||
               ((*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x6c) && (*psVar29 != 0)))) {
              if (lVar7 == 0) goto LAB_03220984;
              lVar7 = *(long *)(lVar7 + 0x38);
              if (cRam0000000007237eb3 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                cRam0000000007237eb3 = '\x01';
              }
              if (lVar7 == 0) goto LAB_03220984;
              if (*(int *)(lVar7 + 0x10) == 1) {
                uVar21 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar21) goto LAB_032206e8;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar21) goto LAB_03220980;
                lVar15 = *(long *)(unaff_x22 + 8);
                uVar6 = FUN_02521d48(lVar7,0,0);
                *(undefined2 *)(lVar15 + (long)(int)uVar21 * 2) = uVar6;
                *(uint *)(unaff_x22 + 0x18) = uVar21 + 1;
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
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar3;
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
            }
            else {
              FUN_025eb570();
            }
            uVar10 = (uint)uVar8;
            if ((int)uVar22 < (int)uVar10) {
              sVar24 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar22 * 2);
              if ((sVar24 == 0x2d) || (sVar24 == 0x2b)) {
                uVar14 = (ulong)(uVar21 + 2);
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
              if ((int)uVar14 < (int)uVar10) {
                psVar20 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2);
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
                  uVar21 = (int)uVar14 + 1;
                  uVar14 = (ulong)uVar21;
                  psVar20 = psVar20 + 1;
                } while (uVar10 != uVar21);
              }
            }
          }
          else {
            uVar10 = (uint)*(ulong *)(unaff_x29 + -0xb0);
            if (((int)uVar22 < (int)uVar10) &&
               (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar22 * 2) == 0x30)) {
              iVar11 = 1;
              goto LAB_03220720;
            }
            iVar11 = uVar21 + 2;
            if ((int)uVar10 <= iVar11) {
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
              if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar11 * 2) != 0x30)
              goto LAB_03220778;
              iVar11 = 0;
            }
            else {
              if ((sVar24 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar11 * 2) != 0x30))
              goto LAB_03220778;
              iVar11 = 0;
            }
LAB_03220720:
            uVar14 = (ulong)(uVar21 + 2);
            if ((int)(uVar21 + 2) < (int)uVar10) {
              do {
                if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2) != 0x30)
                goto LAB_03220750;
                uVar21 = (int)uVar14 + 1;
                uVar14 = (ulong)uVar21;
                iVar11 = iVar11 + 1;
              } while (uVar10 != uVar21);
              uVar14 = *(ulong *)(unaff_x29 + -0xb0) & 0xffffffff;
            }
LAB_03220750:
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
          if (lVar7 != 0) {
            lVar7 = *(long *)(lVar7 + 0x98);
            goto joined_r0x03220140;
          }
          goto LAB_03220984;
        }
        if (((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar22) ||
           (sVar24 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar22 * 2), sVar24 == 0))
        goto switchD_03220064_caseD_2c;
        uVar14 = (ulong)(uVar21 + 2);
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
    } while ((int)uVar14 < (int)*(undefined8 *)(unaff_x29 + -0xb0));
  }
LAB_03220838:
  if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


