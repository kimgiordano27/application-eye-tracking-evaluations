/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 0322017c
PROGRAM: vrfs-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingSupported(void)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  uint in_w8;
  uint uVar6;
  int iVar7;
  uint unaff_w19;
  undefined8 uVar8;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  short *psVar9;
  uint uVar10;
  long lVar11;
  short sVar12;
  ushort *puVar13;
  long unaff_x26;
  uint uVar14;
  long lVar15;
  ulong unaff_x27;
  short *unaff_x28;
  long unaff_x29;
  
code_r0x0322017c:
  if (in_w8 <= (uint)unaff_x24) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
                    /* try { // try from 03220184 to 03320193 has its CatchHandler @ 03220194 */
  lVar11 = *(long *)(unaff_x22 + 8);
                    /* catch() { ... } // from try @ 03220144 with catch @ 03220194
                       catch() { ... } // from try @ 03220184 with catch @ 03220194 */
  uVar5 = FUN_02521d48(unaff_x26,0,0);
                    /* try { // try from 03220198 to 0332019b has its CatchHandler @ 032201a4 */
                    /* try { // try from 0322019c to 033201a7 has its CatchHandler @ 032200cc */
  *(undefined2 *)(lVar11 + unaff_x24 * 2) = uVar5;
  *(uint *)(unaff_x22 + 0x18) = (uint)unaff_x24 + 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03220198 with catch @ 032201a4
                        */
switchD_03220064_caseD_2c:
  uVar14 = (uint)unaff_x27;
  if ((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar14) {
LAB_03220838:
    if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar3 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar14 * 2);
  if ((uVar3 == 0x3b) || (uVar3 == 0)) goto LAB_03220838;
  if ((unaff_w21 < 1) || ((0x30 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x1400800000000U) == 0)))
     ) {
    lVar11 = *(long *)(unaff_x29 + -0xa0);
  }
  else {
    lVar11 = *(long *)(unaff_x29 + -0xa0);
    uVar10 = *(uint *)(unaff_x29 + -0x78);
    iVar7 = unaff_w21;
    do {
      sVar12 = *unaff_x28;
      sVar4 = 0x30;
      if (sVar12 != 0) {
        unaff_x28 = unaff_x28 + 1;
        sVar4 = sVar12;
      }
      if (DAT_072305cf == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        DAT_072305cf = '\x01';
      }
      uVar6 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_03220980;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = sVar4;
        *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
      }
      else {
        FUN_025eb570();
      }
      if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar10 & 1) == 0)) {
        if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
        if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1) {
          if (lVar11 == 0) goto LAB_03220984;
          lVar15 = *(long *)(lVar11 + 0x40);
          if (cRam0000000007237eb3 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            cRam0000000007237eb3 = '\x01';
          }
          if (lVar15 == 0) goto LAB_03220984;
          if (*(int *)(lVar15 + 0x10) == 1) {
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_03220008;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
            lVar11 = *(long *)(unaff_x22 + 8);
            uVar5 = FUN_02521d48(lVar15,0,0);
            *(undefined2 *)(lVar11 + (long)(int)uVar10 * 2) = uVar5;
            lVar11 = *(long *)(unaff_x29 + -0xa0);
            *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
          }
          else {
LAB_03220008:
            FUN_025eb69c();
          }
          uVar10 = *(uint *)(unaff_x29 + -0x78);
          unaff_w19 = unaff_w19 - 1;
        }
      }
      unaff_w21 = iVar7 + -1;
      unaff_w23 = unaff_w23 + -1;
      bVar1 = 0 < iVar7;
      iVar7 = unaff_w21;
    } while (unaff_w21 != 0 && bVar1);
  }
  uVar10 = uVar14 + 1;
  unaff_x27 = (ulong)uVar10;
  if (0x45 < uVar3) {
    if (uVar3 != 0x5c) {
      if (uVar3 == 0x65) goto LAB_03220240;
      if (uVar3 == 0x2030) {
        if (lVar11 == 0) goto LAB_03220984;
        unaff_x26 = *(long *)(lVar11 + 0x98);
        goto joined_r0x03220140;
      }
      goto switchD_03220064_caseD_24;
    }
    if (((int)uVar10 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) &&
       (sVar12 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar10 * 2), sVar12 != 0)) {
      unaff_x27 = (ulong)(uVar14 + 2);
      if (DAT_072305cf == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        DAT_072305cf = '\x01';
      }
      uVar14 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_03220980;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = sVar12;
LAB_032202c0:
        *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
      }
      else {
LAB_032202d0:
        FUN_025eb570();
      }
    }
    goto switchD_03220064_caseD_2c;
  }
  switch(uVar3) {
  case 0x22:
  case 0x27:
    if ((int)uVar10 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
      lVar11 = unaff_x27 << 0x20;
      uVar14 = ~uVar14;
      puVar13 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar10 * 2);
      while ((uVar2 = *puVar13, uVar2 != 0 && (uVar2 != uVar3))) {
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar10 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
        }
        else {
          FUN_025eb570();
        }
        lVar11 = lVar11 + 0x100000000;
        uVar14 = uVar14 - 1;
        puVar13 = puVar13 + 1;
        if (*(uint *)(unaff_x29 + -0x94) == uVar14) goto LAB_03220838;
      }
      unaff_x27 = (ulong)((*(short *)((lVar11 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) -
                         uVar14);
    }
    goto switchD_03220064_caseD_2c;
  case 0x23:
  case 0x30:
    if (unaff_w21 < 0) {
      unaff_w21 = unaff_w21 + 1;
      if (unaff_w23 <= *(int *)(unaff_x29 + -0xc4)) {
LAB_032204f8:
        sVar12 = 0x30;
        goto LAB_032204fc;
      }
    }
    else {
      sVar12 = *unaff_x28;
      if (sVar12 == 0) {
        if (*(int *)(unaff_x29 + -200) < unaff_w23) goto LAB_032204f8;
      }
      else {
        unaff_x28 = unaff_x28 + 1;
LAB_032204fc:
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar10 = *(uint *)(unaff_x22 + 0x18);
        uVar14 = *(uint *)(unaff_x29 + -0x78);
        if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = sVar12;
          *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
        }
        else {
          FUN_025eb570();
        }
        if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar14 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
          if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1) {
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
              uVar14 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar14) goto LAB_0322061c;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_03220980;
              lVar15 = *(long *)(unaff_x22 + 8);
              uVar5 = FUN_02521d48(lVar11,0,0);
              *(undefined2 *)(lVar15 + (long)(int)uVar14 * 2) = uVar5;
              *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
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
    break;
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
          uVar14 = *(uint *)(unaff_x22 + 0x18);
          if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar14) goto LAB_032206e8;
          if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_03220980;
          lVar15 = *(long *)(unaff_x22 + 8);
          uVar5 = FUN_02521d48(lVar11,0,0);
          *(undefined2 *)(lVar15 + (long)(int)uVar14 * 2) = uVar5;
          *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
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
    if (uVar3 == 0x45) {
LAB_03220240:
      if ((*(uint *)(unaff_x29 + -0xb4) & 1) == 0) {
        uVar8 = *(undefined8 *)(unaff_x29 + -0xb0);
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar6 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar6 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar6) goto LAB_03220980;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar6 * 2) = uVar3;
          *(uint *)(unaff_x22 + 0x18) = uVar6 + 1;
        }
        else {
          FUN_025eb570();
        }
        uVar6 = (uint)uVar8;
        if ((int)uVar10 < (int)uVar6) {
          sVar12 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar10 * 2);
          if ((sVar12 == 0x2d) || (sVar12 == 0x2b)) {
            unaff_x27 = (ulong)(uVar14 + 2);
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar14 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_03220980;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = sVar12;
              *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
            }
            else {
              FUN_025eb570();
            }
          }
          if ((int)unaff_x27 < (int)uVar6) {
            psVar9 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x27 * 2);
            do {
              if (*psVar9 != 0x30) break;
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar14 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar14 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar14) goto LAB_03220980;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = 0x30;
                *(uint *)(unaff_x22 + 0x18) = uVar14 + 1;
              }
              else {
                FUN_025eb570();
              }
              uVar14 = (int)unaff_x27 + 1;
              unaff_x27 = (ulong)uVar14;
              psVar9 = psVar9 + 1;
            } while (uVar6 != uVar14);
          }
        }
      }
      else {
        uVar6 = (uint)*(ulong *)(unaff_x29 + -0xb0);
        if (((int)uVar10 < (int)uVar6) &&
           (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar10 * 2) == 0x30)) {
          iVar7 = 1;
          goto LAB_03220720;
        }
        iVar7 = uVar14 + 2;
        if ((int)uVar6 <= iVar7) {
LAB_03220778:
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
          *(undefined4 *)(unaff_x29 + -0xb4) = 1;
          goto switchD_03220064_caseD_2c;
        }
        sVar12 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar10 * 2);
        if (sVar12 == 0x2d) {
          if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar7 * 2) != 0x30) goto LAB_03220778;
          iVar7 = 0;
        }
        else {
          if ((sVar12 != 0x2b) ||
             (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar7 * 2) != 0x30))
          goto LAB_03220778;
          iVar7 = 0;
        }
LAB_03220720:
        unaff_x27 = (ulong)(uVar14 + 2);
        if ((int)(uVar14 + 2) < (int)uVar6) {
          do {
            if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x27 * 2) != 0x30)
            goto LAB_03220750;
            uVar14 = (int)unaff_x27 + 1;
            unaff_x27 = (ulong)uVar14;
            iVar7 = iVar7 + 1;
          } while (uVar6 != uVar14);
          unaff_x27 = *(ulong *)(unaff_x29 + -0xb0) & 0xffffffff;
        }
LAB_03220750:
        if (9 < iVar7) {
          iVar7 = 10;
        }
        if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
          *(int *)(unaff_x29 + -0xb4) = iVar7;
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
    uVar14 = *(uint *)(unaff_x22 + 0x18);
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar14) goto LAB_032202d0;
    if (uVar14 < *(uint *)(unaff_x22 + 0x10)) {
      *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar14 * 2) = uVar3;
      goto LAB_032202c0;
    }
    goto LAB_03220980;
  }
  if (lVar11 == 0) goto LAB_03220984;
  unaff_x26 = *(long *)(lVar11 + 0x90);
joined_r0x03220140:
  if (cRam0000000007237eb3 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06de9da0);
    cRam0000000007237eb3 = '\x01';
  }
  if (unaff_x26 == 0) goto LAB_03220984;
  if (*(int *)(unaff_x26 + 0x10) == 1) {
    unaff_x24 = (long)*(int *)(unaff_x22 + 0x18);
    in_w8 = *(uint *)(unaff_x22 + 0x10);
    if (*(int *)(unaff_x22 + 0x18) < (int)in_w8) goto code_r0x0322017c;
  }
  FUN_025eb69c();
  goto switchD_03220064_caseD_2c;
}


