/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 032200ac
PROGRAM: vrfs-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_fixedFoveatedRenderingSupported(void)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint unaff_w19;
  ulong unaff_x20;
  undefined8 uVar7;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  short *psVar8;
  uint uVar9;
  long unaff_x25;
  short sVar10;
  long lVar11;
  ushort *unaff_x26;
  ushort unaff_w27;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  short *unaff_x28;
  long unaff_x29;
  
code_r0x032200ac:
  DAT_072305cf = '\x01';
LAB_032200b8:
  uVar12 = *(uint *)(unaff_x22 + 0x18);
  if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    /* try { // try from 032200cc to 0332010b has its CatchHandler @ 032200cc
                       catch() { ... } // from try @ 032200cc with catch @ 032200cc
                       catch() { ... } // from try @ 03220120 with catch @ 032200cc
                       catch() { ... } // from try @ 0322015c with catch @ 032200cc
                       catch() { ... } // from try @ 0322019c with catch @ 032200cc */
    if (*(uint *)(unaff_x22 + 0x10) <= uVar12) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = unaff_w27;
    *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
  }
  else {
    FUN_025eb570();
  }
  unaff_x25 = unaff_x25 + 0x100000000;
  unaff_w24 = unaff_w24 - 1;
  unaff_x26 = unaff_x26 + 1;
                    /* try { // try from 0322010c to 0332011f has its CatchHandler @ 0322012c */
  if (*(uint *)(unaff_x29 + -0x94) == unaff_w24) {
LAB_03220838:
    if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_03220084:
  unaff_w27 = *unaff_x26;
  if ((unaff_w27 == 0) || ((uint)unaff_w27 == (uint)unaff_x20)) {
    uVar14 = (ulong)((*(short *)((unaff_x25 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) -
                    unaff_w24);
switchD_03220064_caseD_2c:
    uVar12 = (uint)uVar14;
    if ((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar12) goto LAB_03220838;
    uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar12 * 2);
    unaff_x20 = (ulong)uVar2;
    if ((uVar2 == 0x3b) || (uVar2 == 0)) goto LAB_03220838;
    if (((unaff_w21 < 1) || (0x30 < uVar2)) || ((1L << (unaff_x20 & 0x3f) & 0x1400800000000U) == 0))
    {
      lVar11 = *(long *)(unaff_x29 + -0xa0);
    }
    else {
      lVar11 = *(long *)(unaff_x29 + -0xa0);
      uVar9 = *(uint *)(unaff_x29 + -0x78);
      iVar6 = unaff_w21;
      do {
        sVar10 = *unaff_x28;
        sVar3 = 0x30;
        if (sVar10 != 0) {
          unaff_x28 = unaff_x28 + 1;
          sVar3 = sVar10;
        }
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar5 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_03220980;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = sVar3;
          *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
        }
        else {
          FUN_025eb570();
        }
        if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar9 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
          if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1) {
            if (lVar11 == 0) goto LAB_03220984;
            lVar13 = *(long *)(lVar11 + 0x40);
            if (cRam0000000007237eb3 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              cRam0000000007237eb3 = '\x01';
            }
            if (lVar13 == 0) goto LAB_03220984;
            if (*(int *)(lVar13 + 0x10) == 1) {
              uVar9 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar9) goto LAB_03220008;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
              lVar11 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_02521d48(lVar13,0,0);
              *(undefined2 *)(lVar11 + (long)(int)uVar9 * 2) = uVar4;
              lVar11 = *(long *)(unaff_x29 + -0xa0);
              *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
            }
            else {
LAB_03220008:
              FUN_025eb69c();
            }
            uVar9 = *(uint *)(unaff_x29 + -0x78);
            unaff_w19 = unaff_w19 - 1;
          }
        }
        unaff_w21 = iVar6 + -1;
        unaff_w23 = unaff_w23 + -1;
        bVar1 = 0 < iVar6;
        iVar6 = unaff_w21;
      } while (unaff_w21 != 0 && bVar1);
    }
    uVar9 = uVar12 + 1;
    uVar14 = (ulong)uVar9;
    if (uVar2 < 0x46) {
      switch(uVar2) {
      case 0x22:
      case 0x27:
        goto switchD_03220064_caseD_22;
      case 0x23:
      case 0x30:
        if (unaff_w21 < 0) {
          unaff_w21 = unaff_w21 + 1;
          if (unaff_w23 <= *(int *)(unaff_x29 + -0xc4)) {
LAB_032204f8:
            sVar10 = 0x30;
            goto LAB_032204fc;
          }
        }
        else {
          sVar10 = *unaff_x28;
          if (sVar10 == 0) {
            if (*(int *)(unaff_x29 + -200) < unaff_w23) goto LAB_032204f8;
          }
          else {
            unaff_x28 = unaff_x28 + 1;
LAB_032204fc:
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar9 = *(uint *)(unaff_x22 + 0x18);
            uVar12 = *(uint *)(unaff_x29 + -0x78);
            if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar10;
              *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
            }
            else {
              FUN_025eb570();
            }
            if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar12 & 1) == 0)) {
              if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
              if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1
                 ) {
                if (*(long *)(unaff_x29 + -0xa0) == 0) {
LAB_03220984:
                    /* WARNING: Subroutine does not return */
                  FUN_0160eeb4();
                }
                lVar11 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
                if (cRam0000000007237eb3 == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  cRam0000000007237eb3 = '\x01';
                }
                if (lVar11 == 0) goto LAB_03220984;
                if (*(int *)(lVar11 + 0x10) == 1) {
                  uVar12 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_0322061c;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
                  lVar13 = *(long *)(unaff_x22 + 8);
                  uVar4 = FUN_02521d48(lVar11,0,0);
                  *(undefined2 *)(lVar13 + (long)(int)uVar12 * 2) = uVar4;
                  *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
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
        goto switchD_03220064_caseD_2c;
      case 0x25:
        if (lVar11 == 0) goto LAB_03220984;
        lVar11 = *(long *)(lVar11 + 0x90);
joined_r0x03220140:
        if (cRam0000000007237eb3 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          cRam0000000007237eb3 = '\x01';
        }
        if (lVar11 == 0) goto LAB_03220984;
        if (*(int *)(lVar11 + 0x10) == 1) {
          uVar12 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
            lVar13 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_02521d48(lVar11,0,0);
            *(undefined2 *)(lVar13 + (long)(int)uVar12 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
            goto switchD_03220064_caseD_2c;
          }
        }
        FUN_025eb69c();
        goto switchD_03220064_caseD_2c;
      case 0x2c:
        goto switchD_03220064_caseD_2c;
      case 0x2e:
        if ((*(uint *)(unaff_x29 + -0xb8) & 1) == 0 && unaff_w23 == 0) {
          if ((*(int *)(unaff_x29 + -200) < 0) ||
             ((*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x6c) && (*unaff_x28 != 0)))) {
            if (lVar11 == 0) goto LAB_03220984;
            lVar11 = *(long *)(lVar11 + 0x38);
            if (cRam0000000007237eb3 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              cRam0000000007237eb3 = '\x01';
            }
            if (lVar11 == 0) goto LAB_03220984;
            if (*(int *)(lVar11 + 0x10) == 1) {
              uVar12 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_032206e8;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
              lVar13 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_02521d48(lVar11,0,0);
              *(undefined2 *)(lVar13 + (long)(int)uVar12 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
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
        goto switchD_03220064_caseD_2c;
      default:
        if (uVar2 == 0x45) {
LAB_03220240:
          if ((*(uint *)(unaff_x29 + -0xb4) & 1) == 0) {
            uVar7 = *(undefined8 *)(unaff_x29 + -0xb0);
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar5 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar5 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar5) goto LAB_03220980;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = uVar2;
              *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
            }
            else {
              FUN_025eb570();
            }
            uVar5 = (uint)uVar7;
            if ((int)uVar9 < (int)uVar5) {
              sVar10 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar9 * 2);
              if ((sVar10 == 0x2d) || (sVar10 == 0x2b)) {
                uVar14 = (ulong)(uVar12 + 2);
                if (DAT_072305cf == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  DAT_072305cf = '\x01';
                }
                uVar12 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar10;
                  *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
                }
                else {
                  FUN_025eb570();
                }
              }
              if ((int)uVar14 < (int)uVar5) {
                psVar8 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2);
                do {
                  if (*psVar8 != 0x30) break;
                  if (DAT_072305cf == '\0') {
                    thunk_FUN_0159f088(PTR_DAT_06de9da0);
                    DAT_072305cf = '\x01';
                  }
                  uVar12 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
                  }
                  else {
                    FUN_025eb570();
                  }
                  uVar12 = (int)uVar14 + 1;
                  uVar14 = (ulong)uVar12;
                  psVar8 = psVar8 + 1;
                } while (uVar5 != uVar12);
              }
            }
          }
          else {
            uVar5 = (uint)*(ulong *)(unaff_x29 + -0xb0);
            if (((int)uVar9 < (int)uVar5) &&
               (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar9 * 2) == 0x30)) {
              iVar6 = 1;
              goto LAB_03220720;
            }
            iVar6 = uVar12 + 2;
            if ((int)uVar5 <= iVar6) {
LAB_03220778:
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar12 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = uVar2;
                *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
              }
              else {
                FUN_025eb570();
              }
              *(undefined4 *)(unaff_x29 + -0xb4) = 1;
              goto switchD_03220064_caseD_2c;
            }
            sVar10 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar9 * 2);
            if (sVar10 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar6 * 2) != 0x30)
              goto LAB_03220778;
              iVar6 = 0;
            }
            else {
              if ((sVar10 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar6 * 2) != 0x30))
              goto LAB_03220778;
              iVar6 = 0;
            }
LAB_03220720:
            uVar14 = (ulong)(uVar12 + 2);
            if ((int)(uVar12 + 2) < (int)uVar5) {
              do {
                if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2) != 0x30)
                goto LAB_03220750;
                uVar12 = (int)uVar14 + 1;
                uVar14 = (ulong)uVar12;
                iVar6 = iVar6 + 1;
              } while (uVar5 != uVar12);
              uVar14 = *(ulong *)(unaff_x29 + -0xb0) & 0xffffffff;
            }
LAB_03220750:
            if (9 < iVar6) {
              iVar6 = 10;
            }
            if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
              *(int *)(unaff_x29 + -0xb4) = iVar6;
              thunk_FUN_016466fc();
            }
            FUN_0322598c();
          }
          *(undefined4 *)(unaff_x29 + -0xb4) = 0;
          goto switchD_03220064_caseD_2c;
        }
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
        uVar12 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) {
LAB_032202d0:
          FUN_025eb570();
          goto switchD_03220064_caseD_2c;
        }
        if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
        *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = uVar2;
      }
    }
    else {
      if (uVar2 != 0x5c) {
        if (uVar2 == 0x65) goto LAB_03220240;
        if (uVar2 == 0x2030) {
          if (lVar11 == 0) goto LAB_03220984;
          lVar11 = *(long *)(lVar11 + 0x98);
          goto joined_r0x03220140;
        }
        goto switchD_03220064_caseD_24;
      }
      if (((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar9) ||
         (sVar10 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar9 * 2), sVar10 == 0))
      goto switchD_03220064_caseD_2c;
      uVar14 = (ulong)(uVar12 + 2);
      if (DAT_072305cf == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        DAT_072305cf = '\x01';
      }
      uVar12 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_032202d0;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar10;
    }
    *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
    goto switchD_03220064_caseD_2c;
  }
  if (DAT_072305cf != '\0') goto LAB_032200b8;
  thunk_FUN_0159f088(PTR_DAT_06de9da0);
  goto code_r0x032200ac;
switchD_03220064_caseD_22:
  if ((int)uVar9 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) goto code_r0x03220074;
  goto switchD_03220064_caseD_2c;
code_r0x03220074:
  unaff_x25 = uVar14 << 0x20;
  unaff_w24 = ~uVar12;
  unaff_x26 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar9 * 2);
  goto LAB_03220084;
}


