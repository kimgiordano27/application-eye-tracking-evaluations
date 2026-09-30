/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 032206d4
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


void OVRPlugin__get_useDynamicFoveatedRendering(void)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined1 in_ZR;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint unaff_w19;
  undefined8 unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  short *unaff_x24;
  uint uVar8;
  short sVar9;
  long lVar10;
  ushort *puVar11;
  uint uVar12;
  long lVar13;
  ulong unaff_x27;
  short *unaff_x28;
  long unaff_x29;
  
code_r0x032206d4:
  if (!(bool)in_ZR) goto LAB_03220658;
LAB_03220824:
  *(undefined4 *)(unaff_x29 + -0xb4) = 0;
switchD_03220064_caseD_2c:
  do {
    uVar12 = (uint)unaff_x27;
    if ((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar12) {
LAB_03220838:
      if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar3 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar12 * 2);
    if ((uVar3 == 0x3b) || (uVar3 == 0)) goto LAB_03220838;
    if ((unaff_w21 < 1) ||
       ((0x30 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x1400800000000U) == 0)))) {
      lVar10 = *(long *)(unaff_x29 + -0xa0);
    }
    else {
      lVar10 = *(long *)(unaff_x29 + -0xa0);
      uVar8 = *(uint *)(unaff_x29 + -0x78);
      iVar7 = unaff_w21;
      do {
        sVar9 = *unaff_x28;
        sVar4 = 0x30;
        if (sVar9 != 0) {
          unaff_x28 = unaff_x28 + 1;
          sVar4 = sVar9;
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
        if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar8 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
          if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1) {
            if (lVar10 == 0) goto LAB_03220984;
            lVar13 = *(long *)(lVar10 + 0x40);
            if (cRam0000000007237eb3 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              cRam0000000007237eb3 = '\x01';
            }
            if (lVar13 == 0) goto LAB_03220984;
            if (*(int *)(lVar13 + 0x10) == 1) {
              uVar8 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_03220008;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
              lVar10 = *(long *)(unaff_x22 + 8);
              uVar5 = FUN_02521d48(lVar13,0,0);
              *(undefined2 *)(lVar10 + (long)(int)uVar8 * 2) = uVar5;
              lVar10 = *(long *)(unaff_x29 + -0xa0);
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
            }
            else {
LAB_03220008:
              FUN_025eb69c();
            }
            uVar8 = *(uint *)(unaff_x29 + -0x78);
            unaff_w19 = unaff_w19 - 1;
          }
        }
        unaff_w21 = iVar7 + -1;
        unaff_w23 = unaff_w23 + -1;
        bVar1 = 0 < iVar7;
        iVar7 = unaff_w21;
      } while (unaff_w21 != 0 && bVar1);
    }
    uVar8 = uVar12 + 1;
    unaff_x27 = (ulong)uVar8;
    if (uVar3 < 0x46) goto code_r0x03220050;
    if (uVar3 != 0x5c) {
      if (uVar3 != 0x65) {
        if (uVar3 == 0x2030) {
          if (lVar10 == 0) goto LAB_03220984;
          lVar10 = *(long *)(lVar10 + 0x98);
          goto joined_r0x03220380;
        }
        goto switchD_03220064_caseD_24;
      }
      goto LAB_03220240;
    }
  } while (((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar8) ||
          (sVar9 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar8 * 2), sVar9 == 0));
  unaff_x27 = (ulong)(uVar12 + 2);
  if (DAT_072305cf == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06de9da0);
    DAT_072305cf = '\x01';
  }
  uVar12 = *(uint *)(unaff_x22 + 0x18);
  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_032202d0;
  if (uVar12 < *(uint *)(unaff_x22 + 0x10)) {
    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar9;
    goto LAB_032202c0;
  }
  goto LAB_03220980;
code_r0x03220050:
  switch(uVar3) {
  case 0x22:
  case 0x27:
    if ((int)uVar8 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
      lVar10 = unaff_x27 << 0x20;
      uVar12 = ~uVar12;
      puVar11 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar8 * 2);
      while ((uVar2 = *puVar11, uVar2 != 0 && (uVar2 != uVar3))) {
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = uVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
        }
        else {
          FUN_025eb570();
        }
        lVar10 = lVar10 + 0x100000000;
        uVar12 = uVar12 - 1;
        puVar11 = puVar11 + 1;
        if (*(uint *)(unaff_x29 + -0x94) == uVar12) goto LAB_03220838;
      }
      unaff_x27 = (ulong)((*(short *)((lVar10 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) -
                         uVar12);
    }
    goto switchD_03220064_caseD_2c;
  case 0x23:
  case 0x30:
    break;
  case 0x25:
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + 0x90);
joined_r0x03220380:
      if (cRam0000000007237eb3 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        cRam0000000007237eb3 = '\x01';
      }
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x10) == 1) {
          uVar12 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
            lVar13 = *(long *)(unaff_x22 + 8);
            uVar5 = FUN_02521d48(lVar10,0,0);
            *(undefined2 *)(lVar13 + (long)(int)uVar12 * 2) = uVar5;
            *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
            goto switchD_03220064_caseD_2c;
          }
        }
        FUN_025eb69c();
        goto switchD_03220064_caseD_2c;
      }
    }
    goto LAB_03220984;
  case 0x2c:
    goto switchD_03220064_caseD_2c;
  case 0x2e:
    if ((*(uint *)(unaff_x29 + -0xb8) & 1) != 0 || unaff_w23 != 0) goto switchD_03220064_caseD_2c;
    if ((-1 < *(int *)(unaff_x29 + -200)) &&
       ((*(int *)(unaff_x29 + -0x6c) <= *(int *)(unaff_x29 + -0x84) || (*unaff_x28 == 0)))) {
      *(undefined4 *)(unaff_x29 + -0xb8) = 0;
      unaff_w23 = 0;
      goto switchD_03220064_caseD_2c;
    }
    if (lVar10 == 0) goto LAB_03220984;
    lVar10 = *(long *)(lVar10 + 0x38);
    if (cRam0000000007237eb3 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06de9da0);
      cRam0000000007237eb3 = '\x01';
    }
    if (lVar10 == 0) goto LAB_03220984;
    if (*(int *)(lVar10 + 0x10) == 1) {
      uVar12 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
        lVar13 = *(long *)(unaff_x22 + 8);
        uVar5 = FUN_02521d48(lVar10,0,0);
        *(undefined2 *)(lVar13 + (long)(int)uVar12 * 2) = uVar5;
        *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
        goto LAB_032206fc;
      }
    }
    FUN_025eb69c();
LAB_032206fc:
    unaff_w23 = 0;
    *(undefined4 *)(unaff_x29 + -0xb8) = 1;
    goto switchD_03220064_caseD_2c;
  default:
    if (uVar3 == 0x45) {
LAB_03220240:
      if ((*(uint *)(unaff_x29 + -0xb4) & 1) != 0) {
        uVar6 = (uint)*(ulong *)(unaff_x29 + -0xb0);
        if (((int)uVar8 < (int)uVar6) &&
           (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar8 * 2) == 0x30)) {
          iVar7 = 1;
          goto LAB_03220720;
        }
        iVar7 = uVar12 + 2;
        if (iVar7 < (int)uVar6) {
          sVar9 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar8 * 2);
          if (sVar9 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar7 * 2) == 0x30) {
              iVar7 = 0;
              goto LAB_03220720;
            }
          }
          else if ((sVar9 == 0x2b) &&
                  (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar7 * 2) == 0x30))
          goto code_r0x03220364;
        }
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar12 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = uVar3;
          *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
        }
        else {
          FUN_025eb570();
        }
        *(undefined4 *)(unaff_x29 + -0xb4) = 1;
        goto switchD_03220064_caseD_2c;
      }
      unaff_x20 = *(undefined8 *)(unaff_x29 + -0xb0);
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
      if ((int)unaff_x20 <= (int)uVar8) goto LAB_03220824;
      sVar9 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar8 * 2);
      if ((sVar9 == 0x2d) || (sVar9 == 0x2b)) {
        unaff_x27 = (ulong)(uVar12 + 2);
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar12 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar9;
          *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
        }
        else {
          FUN_025eb570();
        }
      }
      if ((int)unaff_x20 <= (int)unaff_x27) goto LAB_03220824;
      unaff_x24 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x27 * 2);
LAB_03220658:
      if (*unaff_x24 == 0x30) goto code_r0x03220664;
      goto LAB_03220824;
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
    if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
      *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = uVar3;
LAB_032202c0:
      *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
    }
    else {
LAB_032202d0:
      FUN_025eb570();
    }
    goto switchD_03220064_caseD_2c;
  }
  if (unaff_w21 < 0) {
    unaff_w21 = unaff_w21 + 1;
    if (*(int *)(unaff_x29 + -0xc4) < unaff_w23) goto LAB_03220630;
LAB_032204f8:
    sVar9 = 0x30;
  }
  else {
    sVar9 = *unaff_x28;
    if (sVar9 == 0) {
      if (unaff_w23 <= *(int *)(unaff_x29 + -200)) goto LAB_03220630;
      goto LAB_032204f8;
    }
    unaff_x28 = unaff_x28 + 1;
  }
  if (DAT_072305cf == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06de9da0);
    DAT_072305cf = '\x01';
  }
  uVar8 = *(uint *)(unaff_x22 + 0x18);
  uVar12 = *(uint *)(unaff_x29 + -0x78);
  if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar9;
    *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
  }
  else {
    FUN_025eb570();
  }
  if (((int)unaff_w19 < 0) || (unaff_w23 < 2 || (uVar12 & 1) != 0)) goto LAB_03220630;
  if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
  if (unaff_w23 != *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1)
  goto LAB_03220630;
  if (*(long *)(unaff_x29 + -0xa0) == 0) {
LAB_03220984:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar10 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
  if (cRam0000000007237eb3 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06de9da0);
    cRam0000000007237eb3 = '\x01';
  }
  if (lVar10 == 0) goto LAB_03220984;
  if (*(int *)(lVar10 + 0x10) == 1) {
    uVar12 = *(uint *)(unaff_x22 + 0x18);
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_0322061c;
    if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
    lVar13 = *(long *)(unaff_x22 + 8);
    uVar5 = FUN_02521d48(lVar10,0,0);
    *(undefined2 *)(lVar13 + (long)(int)uVar12 * 2) = uVar5;
    *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
  }
  else {
LAB_0322061c:
    FUN_025eb69c();
  }
  unaff_w19 = unaff_w19 - 1;
LAB_03220630:
  unaff_w23 = unaff_w23 + -1;
  goto switchD_03220064_caseD_2c;
code_r0x03220364:
  iVar7 = 0;
LAB_03220720:
  unaff_x27 = (ulong)(uVar12 + 2);
  if ((int)(uVar12 + 2) < (int)uVar6) {
    do {
      if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x27 * 2) != 0x30)
      goto LAB_03220750;
      uVar12 = (int)unaff_x27 + 1;
      unaff_x27 = (ulong)uVar12;
      iVar7 = iVar7 + 1;
    } while (uVar6 != uVar12);
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
  goto LAB_03220824;
code_r0x03220664:
  if (DAT_072305cf == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06de9da0);
    DAT_072305cf = '\x01';
  }
  uVar12 = *(uint *)(unaff_x22 + 0x18);
  if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar12) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = 0x30;
    *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
  }
  else {
    FUN_025eb570();
  }
  uVar12 = (int)unaff_x27 + 1;
  unaff_x27 = (ulong)uVar12;
  in_ZR = (uint)unaff_x20 == uVar12;
  unaff_x24 = unaff_x24 + 1;
  goto code_r0x032206d4;
}


