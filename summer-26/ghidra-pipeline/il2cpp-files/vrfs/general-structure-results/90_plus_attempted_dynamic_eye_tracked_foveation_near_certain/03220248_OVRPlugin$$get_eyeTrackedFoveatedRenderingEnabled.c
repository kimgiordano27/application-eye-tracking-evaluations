/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 03220248
PROGRAM: vrfs-libil2cpp.so
SCORE: 153
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin__get_eyeTrackedFoveatedRenderingEnabled(void)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  uint unaff_w19;
  uint uVar9;
  undefined8 uVar10;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  short *psVar11;
  uint uVar12;
  ulong unaff_x25;
  short sVar13;
  long lVar14;
  ushort *puVar15;
  long lVar16;
  ulong unaff_x27;
  short *unaff_x28;
  long unaff_x29;
  
  do {
    uVar7 = (uint)*(ulong *)(unaff_x29 + -0xb0);
    iVar8 = (int)unaff_x27;
    if ((iVar8 < (int)uVar7) && (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar8 * 2) == 0x30)
       ) {
      iVar8 = 1;
    }
    else {
      iVar2 = (int)unaff_x24 + 2;
      if ((int)uVar7 <= iVar2) {
LAB_03220778:
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar7 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar7) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = (short)unaff_x25;
          *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
        }
        else {
          FUN_025eb570();
        }
        *(undefined4 *)(unaff_x29 + -0xb4) = 1;
        goto switchD_03220064_caseD_2c;
      }
      sVar13 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar8 * 2);
      if (sVar13 == 0x2d) {
        if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar2 * 2) != 0x30) goto LAB_03220778;
        iVar8 = 0;
      }
      else {
        if ((sVar13 != 0x2b) || (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar2 * 2) != 0x30)
           ) goto LAB_03220778;
        iVar8 = 0;
      }
    }
    uVar12 = (int)unaff_x24 + 2;
    unaff_x27 = (ulong)uVar12;
    if ((int)uVar12 < (int)uVar7) {
      do {
        if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x27 * 2) != 0x30)
        goto LAB_03220750;
        uVar12 = (int)unaff_x27 + 1;
        unaff_x27 = (ulong)uVar12;
        iVar8 = iVar8 + 1;
      } while (uVar7 != uVar12);
      unaff_x27 = *(ulong *)(unaff_x29 + -0xb0) & 0xffffffff;
    }
LAB_03220750:
    if (9 < iVar8) {
      iVar8 = 10;
    }
    if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
      *(int *)(unaff_x29 + -0xb4) = iVar8;
      thunk_FUN_016466fc();
    }
    FUN_0322598c();
LAB_03220824:
    *(undefined4 *)(unaff_x29 + -0xb4) = 0;
switchD_03220064_caseD_2c:
    uVar7 = (uint)unaff_x27;
    if ((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar7) {
LAB_03220838:
      if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar7 * 2);
    unaff_x25 = (ulong)uVar4;
    if ((uVar4 == 0x3b) || (uVar4 == 0)) goto LAB_03220838;
    unaff_x24 = unaff_x27 & 0xffffffff;
    if ((unaff_w21 < 1) || ((0x30 < uVar4 || ((1L << (unaff_x25 & 0x3f) & 0x1400800000000U) == 0))))
    {
      lVar14 = *(long *)(unaff_x29 + -0xa0);
    }
    else {
      lVar14 = *(long *)(unaff_x29 + -0xa0);
      uVar12 = *(uint *)(unaff_x29 + -0x78);
      iVar8 = unaff_w21;
      do {
        sVar13 = *unaff_x28;
        sVar5 = 0x30;
        if (sVar13 != 0) {
          unaff_x28 = unaff_x28 + 1;
          sVar5 = sVar13;
        }
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar9 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar5;
          *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
        }
        else {
          FUN_025eb570();
        }
        if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar12 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
          if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1) {
            if (lVar14 == 0) goto LAB_03220984;
            lVar16 = *(long *)(lVar14 + 0x40);
            if (cRam0000000007237eb3 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              cRam0000000007237eb3 = '\x01';
            }
            if (lVar16 == 0) goto LAB_03220984;
            if (*(int *)(lVar16 + 0x10) == 1) {
              uVar12 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar12) goto LAB_03220008;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
              lVar14 = *(long *)(unaff_x22 + 8);
              uVar6 = FUN_02521d48(lVar16,0,0);
              *(undefined2 *)(lVar14 + (long)(int)uVar12 * 2) = uVar6;
              lVar14 = *(long *)(unaff_x29 + -0xa0);
              *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
            }
            else {
LAB_03220008:
              FUN_025eb69c();
            }
            uVar12 = *(uint *)(unaff_x29 + -0x78);
            unaff_w19 = unaff_w19 - 1;
          }
        }
        unaff_w21 = iVar8 + -1;
        unaff_w23 = unaff_w23 + -1;
        bVar1 = 0 < iVar8;
        iVar8 = unaff_w21;
      } while (unaff_w21 != 0 && bVar1);
    }
    uVar12 = uVar7 + 1;
    unaff_x27 = (ulong)uVar12;
    if (uVar4 < 0x46) break;
    if (uVar4 == 0x5c) {
      if (((int)uVar12 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) &&
         (sVar13 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar12 * 2), sVar13 != 0)) {
        unaff_x27 = (ulong)(uVar7 + 2);
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar7 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_032202d0;
        if (uVar7 < *(uint *)(unaff_x22 + 0x10)) {
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar13;
          goto LAB_032202c0;
        }
        goto LAB_03220980;
      }
      goto switchD_03220064_caseD_2c;
    }
    if (uVar4 != 0x65) {
      if (uVar4 != 0x2030) goto switchD_03220064_caseD_24;
      if (lVar14 == 0) goto LAB_03220984;
      lVar14 = *(long *)(lVar14 + 0x98);
      goto joined_r0x03220380;
    }
LAB_03220240:
    if ((*(uint *)(unaff_x29 + -0xb4) & 1) == 0) {
      uVar10 = *(undefined8 *)(unaff_x29 + -0xb0);
      if (DAT_072305cf == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        DAT_072305cf = '\x01';
      }
      uVar9 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
        *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = uVar4;
        *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
      }
      else {
        FUN_025eb570();
      }
      uVar9 = (uint)uVar10;
      if ((int)uVar12 < (int)uVar9) {
        sVar13 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar12 * 2);
        if ((sVar13 == 0x2d) || (sVar13 == 0x2b)) {
          unaff_x27 = (ulong)(uVar7 + 2);
          if (DAT_072305cf == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            DAT_072305cf = '\x01';
          }
          uVar7 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_03220980;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar13;
            *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
          }
          else {
            FUN_025eb570();
          }
        }
        if ((int)unaff_x27 < (int)uVar9) {
          psVar11 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x27 * 2);
          do {
            if (*psVar11 != 0x30) break;
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar7 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_03220980;
              *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = 0x30;
              *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
            }
            else {
              FUN_025eb570();
            }
            uVar7 = (int)unaff_x27 + 1;
            unaff_x27 = (ulong)uVar7;
            psVar11 = psVar11 + 1;
          } while (uVar9 != uVar7);
        }
      }
      goto LAB_03220824;
    }
  } while( true );
  switch(uVar4) {
  case 0x22:
  case 0x27:
    if ((int)uVar12 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
      lVar14 = unaff_x27 << 0x20;
      uVar7 = ~uVar7;
      puVar15 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar12 * 2);
      while ((uVar3 = *puVar15, uVar3 != 0 && (uVar3 != uVar4))) {
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
        lVar14 = lVar14 + 0x100000000;
        uVar7 = uVar7 - 1;
        puVar15 = puVar15 + 1;
        if (*(uint *)(unaff_x29 + -0x94) == uVar7) goto LAB_03220838;
      }
      unaff_x27 = (ulong)((*(short *)((lVar14 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) - uVar7
                         );
    }
    goto switchD_03220064_caseD_2c;
  case 0x23:
  case 0x30:
    break;
  case 0x25:
    if (lVar14 != 0) {
      lVar14 = *(long *)(lVar14 + 0x90);
joined_r0x03220380:
      if (cRam0000000007237eb3 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        cRam0000000007237eb3 = '\x01';
      }
      if (lVar14 != 0) {
        if (*(int *)(lVar14 + 0x10) == 1) {
          uVar7 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_03220980;
            lVar16 = *(long *)(unaff_x22 + 8);
            uVar6 = FUN_02521d48(lVar14,0,0);
            *(undefined2 *)(lVar16 + (long)(int)uVar7 * 2) = uVar6;
            *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
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
    if (lVar14 == 0) goto LAB_03220984;
    lVar14 = *(long *)(lVar14 + 0x38);
    if (cRam0000000007237eb3 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06de9da0);
      cRam0000000007237eb3 = '\x01';
    }
    if (lVar14 == 0) goto LAB_03220984;
    if (*(int *)(lVar14 + 0x10) == 1) {
      uVar7 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_03220980;
        lVar16 = *(long *)(unaff_x22 + 8);
        uVar6 = FUN_02521d48(lVar14,0,0);
        *(undefined2 *)(lVar16 + (long)(int)uVar7 * 2) = uVar6;
        *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
        goto LAB_032206fc;
      }
    }
    FUN_025eb69c();
LAB_032206fc:
    unaff_w23 = 0;
    *(undefined4 *)(unaff_x29 + -0xb8) = 1;
    goto switchD_03220064_caseD_2c;
  default:
    if (uVar4 == 0x45) goto LAB_03220240;
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
    uVar7 = *(uint *)(unaff_x22 + 0x18);
    if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_03220980;
      *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = uVar4;
LAB_032202c0:
      *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
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
    sVar13 = 0x30;
  }
  else {
    sVar13 = *unaff_x28;
    if (sVar13 == 0) {
      if (unaff_w23 <= *(int *)(unaff_x29 + -200)) goto LAB_03220630;
      goto LAB_032204f8;
    }
    unaff_x28 = unaff_x28 + 1;
  }
  if (DAT_072305cf == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06de9da0);
    DAT_072305cf = '\x01';
  }
  uVar12 = *(uint *)(unaff_x22 + 0x18);
  uVar7 = *(uint *)(unaff_x29 + -0x78);
  if ((int)uVar12 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar12) goto LAB_03220980;
    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar12 * 2) = sVar13;
    *(uint *)(unaff_x22 + 0x18) = uVar12 + 1;
  }
  else {
    FUN_025eb570();
  }
  if (((int)unaff_w19 < 0) || (unaff_w23 < 2 || (uVar7 & 1) != 0)) goto LAB_03220630;
  if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
  if (unaff_w23 != *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1)
  goto LAB_03220630;
  if (*(long *)(unaff_x29 + -0xa0) == 0) {
LAB_03220984:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar14 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
  if (cRam0000000007237eb3 == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06de9da0);
    cRam0000000007237eb3 = '\x01';
  }
  if (lVar14 == 0) goto LAB_03220984;
  if (*(int *)(lVar14 + 0x10) == 1) {
    uVar7 = *(uint *)(unaff_x22 + 0x18);
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar7) goto LAB_0322061c;
    if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_03220980;
    lVar16 = *(long *)(unaff_x22 + 8);
    uVar6 = FUN_02521d48(lVar14,0,0);
    *(undefined2 *)(lVar16 + (long)(int)uVar7 * 2) = uVar6;
    *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
  }
  else {
LAB_0322061c:
    FUN_025eb69c();
  }
  unaff_w19 = unaff_w19 - 1;
LAB_03220630:
  unaff_w23 = unaff_w23 + -1;
  goto switchD_03220064_caseD_2c;
}


