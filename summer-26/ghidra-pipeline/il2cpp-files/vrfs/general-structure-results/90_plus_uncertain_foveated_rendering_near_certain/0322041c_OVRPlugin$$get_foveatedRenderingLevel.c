/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 0322041c
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


void OVRPlugin__get_foveatedRenderingLevel(long param_1,undefined8 param_2)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint unaff_w19;
  undefined8 uVar8;
  int unaff_w21;
  long unaff_x22;
  int iVar9;
  long unaff_x24;
  short *psVar10;
  uint uVar11;
  long unaff_x25;
  short sVar12;
  long lVar13;
  ushort *puVar14;
  uint uVar15;
  long lVar16;
  ulong unaff_x27;
  short *unaff_x28;
  long unaff_x29;
  
code_r0x0322041c:
  uVar5 = FUN_02521d48(param_1,param_2,0);
  *(undefined2 *)(unaff_x25 + unaff_x24 * 2) = uVar5;
  *(int *)(unaff_x22 + 0x18) = (int)unaff_x24 + 1;
LAB_032206fc:
  iVar9 = 0;
  *(undefined4 *)(unaff_x29 + -0xb8) = 1;
switchD_03220064_caseD_2c:
  uVar15 = (uint)unaff_x27;
  if ((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar15) {
LAB_03220838:
    if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar3 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar15 * 2);
  if ((uVar3 == 0x3b) || (uVar3 == 0)) goto LAB_03220838;
  if ((unaff_w21 < 1) || ((0x30 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x1400800000000U) == 0)))
     ) {
    lVar13 = *(long *)(unaff_x29 + -0xa0);
  }
  else {
    lVar13 = *(long *)(unaff_x29 + -0xa0);
    uVar11 = *(uint *)(unaff_x29 + -0x78);
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
      if ((-1 < (int)unaff_w19) && (1 < iVar9 && (uVar11 & 1) == 0)) {
        if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
        if (iVar9 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1) {
          if (lVar13 == 0) goto LAB_03220984;
          lVar16 = *(long *)(lVar13 + 0x40);
          if (cRam0000000007237eb3 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            cRam0000000007237eb3 = '\x01';
          }
          if (lVar16 == 0) goto LAB_03220984;
          if (*(int *)(lVar16 + 0x10) == 1) {
            uVar11 = *(uint *)(unaff_x22 + 0x18);
            if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_03220008;
            if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
            lVar13 = *(long *)(unaff_x22 + 8);
            uVar5 = FUN_02521d48(lVar16,0,0);
            *(undefined2 *)(lVar13 + (long)(int)uVar11 * 2) = uVar5;
            lVar13 = *(long *)(unaff_x29 + -0xa0);
            *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
          }
          else {
LAB_03220008:
            FUN_025eb69c();
          }
          uVar11 = *(uint *)(unaff_x29 + -0x78);
          unaff_w19 = unaff_w19 - 1;
        }
      }
      unaff_w21 = iVar7 + -1;
      iVar9 = iVar9 + -1;
      bVar1 = 0 < iVar7;
      iVar7 = unaff_w21;
    } while (unaff_w21 != 0 && bVar1);
  }
  uVar11 = uVar15 + 1;
  unaff_x27 = (ulong)uVar11;
  if (0x45 < uVar3) {
    if (uVar3 == 0x5c) goto LAB_032201bc;
    if (uVar3 == 0x65) goto LAB_03220240;
    if (uVar3 != 0x2030) goto switchD_03220064_caseD_24;
    if (lVar13 != 0) {
      lVar13 = *(long *)(lVar13 + 0x98);
      goto joined_r0x03220140;
    }
    goto LAB_03220984;
  }
  switch(uVar3) {
  case 0x22:
  case 0x27:
    if ((int)uVar11 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
      lVar13 = unaff_x27 << 0x20;
      uVar15 = ~uVar15;
      puVar14 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2);
      while ((uVar2 = *puVar14, uVar2 != 0 && (uVar2 != uVar3))) {
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = uVar2;
          *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
        }
        else {
          FUN_025eb570();
        }
        lVar13 = lVar13 + 0x100000000;
        uVar15 = uVar15 - 1;
        puVar14 = puVar14 + 1;
        if (*(uint *)(unaff_x29 + -0x94) == uVar15) goto LAB_03220838;
      }
      unaff_x27 = (ulong)((*(short *)((lVar13 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) -
                         uVar15);
    }
    goto switchD_03220064_caseD_2c;
  case 0x23:
  case 0x30:
    if (unaff_w21 < 0) {
      unaff_w21 = unaff_w21 + 1;
      if (iVar9 <= *(int *)(unaff_x29 + -0xc4)) {
LAB_032204f8:
        sVar12 = 0x30;
        goto LAB_032204fc;
      }
    }
    else {
      sVar12 = *unaff_x28;
      if (sVar12 == 0) {
        if (*(int *)(unaff_x29 + -200) < iVar9) goto LAB_032204f8;
      }
      else {
        unaff_x28 = unaff_x28 + 1;
LAB_032204fc:
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar11 = *(uint *)(unaff_x22 + 0x18);
        uVar15 = *(uint *)(unaff_x29 + -0x78);
        if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = sVar12;
          *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
        }
        else {
          FUN_025eb570();
        }
        if ((-1 < (int)unaff_w19) && (1 < iVar9 && (uVar15 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
          if (iVar9 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1) {
            if (*(long *)(unaff_x29 + -0xa0) == 0) goto LAB_03220984;
            lVar13 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
            if (cRam0000000007237eb3 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              cRam0000000007237eb3 = '\x01';
            }
            if (lVar13 == 0) goto LAB_03220984;
            if (*(int *)(lVar13 + 0x10) == 1) {
              uVar15 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar15) goto LAB_0322061c;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_03220980;
              lVar16 = *(long *)(unaff_x22 + 8);
              uVar5 = FUN_02521d48(lVar13,0,0);
              *(undefined2 *)(lVar16 + (long)(int)uVar15 * 2) = uVar5;
              *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
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
    iVar9 = iVar9 + -1;
    goto switchD_03220064_caseD_2c;
  case 0x25:
    if (lVar13 == 0) goto LAB_03220984;
    lVar13 = *(long *)(lVar13 + 0x90);
joined_r0x03220140:
    if (cRam0000000007237eb3 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06de9da0);
      cRam0000000007237eb3 = '\x01';
    }
    if (lVar13 == 0) goto LAB_03220984;
    if (*(int *)(lVar13 + 0x10) == 1) {
      uVar15 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_03220980;
        lVar16 = *(long *)(unaff_x22 + 8);
        uVar5 = FUN_02521d48(lVar13,0,0);
        *(undefined2 *)(lVar16 + (long)(int)uVar15 * 2) = uVar5;
        *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
        goto switchD_03220064_caseD_2c;
      }
    }
    FUN_025eb69c();
    goto switchD_03220064_caseD_2c;
  case 0x2c:
    goto switchD_03220064_caseD_2c;
  case 0x2e:
    if ((*(uint *)(unaff_x29 + -0xb8) & 1) == 0 && iVar9 == 0) {
      if ((*(int *)(unaff_x29 + -200) < 0) ||
         ((*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x6c) && (*unaff_x28 != 0))))
      goto LAB_032203bc;
      *(undefined4 *)(unaff_x29 + -0xb8) = 0;
      iVar9 = 0;
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
        if ((int)uVar11 < (int)uVar6) {
          sVar12 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2);
          if ((sVar12 == 0x2d) || (sVar12 == 0x2b)) {
            unaff_x27 = (ulong)(uVar15 + 2);
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar15 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_03220980;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar12;
              *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
            }
            else {
              FUN_025eb570();
            }
          }
          if ((int)unaff_x27 < (int)uVar6) {
            psVar10 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x27 * 2);
            do {
              if (*psVar10 != 0x30) break;
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar15 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_03220980;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = 0x30;
                *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
              }
              else {
                FUN_025eb570();
              }
              uVar15 = (int)unaff_x27 + 1;
              unaff_x27 = (ulong)uVar15;
              psVar10 = psVar10 + 1;
            } while (uVar6 != uVar15);
          }
        }
      }
      else {
        uVar6 = (uint)*(ulong *)(unaff_x29 + -0xb0);
        if (((int)uVar11 < (int)uVar6) &&
           (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2) == 0x30)) {
          iVar7 = 1;
          goto LAB_03220720;
        }
        iVar7 = uVar15 + 2;
        if ((int)uVar6 <= iVar7) {
LAB_03220778:
          if (DAT_072305cf == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            DAT_072305cf = '\x01';
          }
          uVar15 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_03220980;
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar3;
            *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
          }
          else {
            FUN_025eb570();
          }
          *(undefined4 *)(unaff_x29 + -0xb4) = 1;
          goto switchD_03220064_caseD_2c;
        }
        sVar12 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2);
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
        unaff_x27 = (ulong)(uVar15 + 2);
        if ((int)(uVar15 + 2) < (int)uVar6) {
          do {
            if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x27 * 2) != 0x30)
            goto LAB_03220750;
            uVar15 = (int)unaff_x27 + 1;
            unaff_x27 = (ulong)uVar15;
            iVar7 = iVar7 + 1;
          } while (uVar6 != uVar15);
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
    uVar15 = *(uint *)(unaff_x22 + 0x18);
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar15) goto LAB_032202d0;
    if (uVar15 < *(uint *)(unaff_x22 + 0x10)) {
      *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar3;
      goto LAB_032202c0;
    }
    goto LAB_03220980;
  }
LAB_032201bc:
  if (((int)uVar11 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) &&
     (sVar12 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2), sVar12 != 0)) {
    unaff_x27 = (ulong)(uVar15 + 2);
    if (DAT_072305cf == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06de9da0);
      DAT_072305cf = '\x01';
    }
    uVar15 = *(uint *)(unaff_x22 + 0x18);
    if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_03220980;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar12;
LAB_032202c0:
      *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
    }
    else {
LAB_032202d0:
      FUN_025eb570();
    }
  }
  goto switchD_03220064_caseD_2c;
code_r0x03220408:
  if (*(uint *)(unaff_x22 + 0x10) <= uVar15) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  unaff_x25 = *(long *)(unaff_x22 + 8);
  param_2 = 0;
  goto code_r0x0322041c;
LAB_032203bc:
  if (lVar13 != 0) {
    param_1 = *(long *)(lVar13 + 0x38);
    if (cRam0000000007237eb3 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06de9da0);
      cRam0000000007237eb3 = '\x01';
    }
    if (param_1 != 0) {
      if (*(int *)(param_1 + 0x10) == 1) {
        uVar15 = *(uint *)(unaff_x22 + 0x18);
        unaff_x24 = (long)(int)uVar15;
        if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) goto code_r0x03220408;
      }
      FUN_025eb69c();
      goto LAB_032206fc;
    }
  }
LAB_03220984:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


