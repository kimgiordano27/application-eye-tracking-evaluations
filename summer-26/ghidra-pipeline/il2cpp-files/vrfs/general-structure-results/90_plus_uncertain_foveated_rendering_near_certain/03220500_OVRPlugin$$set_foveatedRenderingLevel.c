/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 03220500
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


void OVRPlugin__set_foveatedRenderingLevel(long param_1)

{
  bool bVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  uint unaff_w19;
  undefined8 uVar9;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  short *psVar10;
  uint uVar11;
  long lVar12;
  short unaff_w26;
  ushort *puVar13;
  long lVar14;
  uint uVar15;
  ulong unaff_x27;
  short *unaff_x28;
  long unaff_x29;
  
code_r0x03220500:
  if (*(char *)(param_1 + 0x5cf) == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06de9da0);
    DAT_072305cf = '\x01';
  }
  uVar11 = *(uint *)(unaff_x22 + 0x18);
  uVar15 = *(uint *)(unaff_x29 + -0x78);
  if ((int)uVar11 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar11 * 2) = unaff_w26;
    *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
  }
  else {
    FUN_025eb570();
  }
  if (((int)unaff_w19 < 0) || (unaff_w23 < 2 || (uVar15 & 1) != 0)) goto LAB_03220630;
  if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
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
    uVar15 = *(uint *)(unaff_x22 + 0x18);
    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar15) goto LAB_0322061c;
    if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_03220980;
    lVar12 = *(long *)(unaff_x22 + 8);
    uVar6 = FUN_02521d48(lVar14,0,0);
    *(undefined2 *)(lVar12 + (long)(int)uVar15 * 2) = uVar6;
    *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
  }
  else {
LAB_0322061c:
    FUN_025eb69c();
  }
  unaff_w19 = unaff_w19 - 1;
LAB_03220630:
  unaff_w23 = unaff_w23 + -1;
switchD_03220064_caseD_2c:
  do {
    uVar15 = (uint)unaff_x27;
    if ((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar15) {
LAB_03220838:
      if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar4 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar15 * 2);
    if ((uVar4 == 0x3b) || (uVar4 == 0)) goto LAB_03220838;
    if ((unaff_w21 < 1) ||
       ((0x30 < uVar4 || ((1L << ((ulong)uVar4 & 0x3f) & 0x1400800000000U) == 0)))) {
      lVar14 = *(long *)(unaff_x29 + -0xa0);
    }
    else {
      lVar14 = *(long *)(unaff_x29 + -0xa0);
      uVar11 = *(uint *)(unaff_x29 + -0x78);
      iVar8 = unaff_w21;
      do {
        sVar3 = *unaff_x28;
        sVar5 = 0x30;
        if (sVar3 != 0) {
          unaff_x28 = unaff_x28 + 1;
          sVar5 = sVar3;
        }
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar7 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_03220980;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar5;
          *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
        }
        else {
          FUN_025eb570();
        }
        if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar11 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
          if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1) {
            if (lVar14 == 0) goto LAB_03220984;
            lVar12 = *(long *)(lVar14 + 0x40);
            if (cRam0000000007237eb3 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              cRam0000000007237eb3 = '\x01';
            }
            if (lVar12 == 0) goto LAB_03220984;
            if (*(int *)(lVar12 + 0x10) == 1) {
              uVar11 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_03220008;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
              lVar14 = *(long *)(unaff_x22 + 8);
              uVar6 = FUN_02521d48(lVar12,0,0);
              *(undefined2 *)(lVar14 + (long)(int)uVar11 * 2) = uVar6;
              lVar14 = *(long *)(unaff_x29 + -0xa0);
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
        unaff_w21 = iVar8 + -1;
        unaff_w23 = unaff_w23 + -1;
        bVar1 = 0 < iVar8;
        iVar8 = unaff_w21;
      } while (unaff_w21 != 0 && bVar1);
    }
    uVar11 = uVar15 + 1;
    unaff_x27 = (ulong)uVar11;
    if (uVar4 < 0x46) break;
    if (uVar4 != 0x5c) {
      if (uVar4 == 0x65) goto LAB_03220240;
      if (uVar4 != 0x2030) goto switchD_03220064_caseD_24;
      if (lVar14 != 0) {
        lVar14 = *(long *)(lVar14 + 0x98);
        goto joined_r0x03220380;
      }
      goto LAB_03220984;
    }
    if (((int)uVar11 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) &&
       (sVar3 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2), sVar3 != 0)) {
      unaff_x27 = (ulong)(uVar15 + 2);
      if (DAT_072305cf == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        DAT_072305cf = '\x01';
      }
      uVar15 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar15) goto LAB_032202d0;
      if (uVar15 < *(uint *)(unaff_x22 + 0x10)) {
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar3;
        goto LAB_032202c0;
      }
      goto LAB_03220980;
    }
  } while( true );
  switch(uVar4) {
  case 0x22:
  case 0x27:
    if ((int)uVar11 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
      lVar14 = unaff_x27 << 0x20;
      uVar15 = ~uVar15;
      puVar13 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2);
      while ((uVar2 = *puVar13, uVar2 != 0 && (uVar2 != uVar4))) {
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
        lVar14 = lVar14 + 0x100000000;
        uVar15 = uVar15 - 1;
        puVar13 = puVar13 + 1;
        if (*(uint *)(unaff_x29 + -0x94) == uVar15) goto LAB_03220838;
      }
      unaff_x27 = (ulong)((*(short *)((lVar14 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) -
                         uVar15);
    }
    goto switchD_03220064_caseD_2c;
  case 0x23:
  case 0x30:
    goto switchD_03220064_caseD_23;
  case 0x25:
    if (lVar14 == 0) goto LAB_03220984;
    lVar14 = *(long *)(lVar14 + 0x90);
joined_r0x03220380:
    if (cRam0000000007237eb3 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06de9da0);
      cRam0000000007237eb3 = '\x01';
    }
    if (lVar14 == 0) goto LAB_03220984;
    if (*(int *)(lVar14 + 0x10) == 1) {
      uVar15 = *(uint *)(unaff_x22 + 0x18);
      if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
        if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_03220980;
        lVar12 = *(long *)(unaff_x22 + 8);
        uVar6 = FUN_02521d48(lVar14,0,0);
        *(undefined2 *)(lVar12 + (long)(int)uVar15 * 2) = uVar6;
        *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
        goto switchD_03220064_caseD_2c;
      }
    }
    FUN_025eb69c();
    goto switchD_03220064_caseD_2c;
  case 0x2c:
    goto switchD_03220064_caseD_2c;
  case 0x2e:
    break;
  default:
    if (uVar4 == 0x45) {
LAB_03220240:
      if ((*(uint *)(unaff_x29 + -0xb4) & 1) == 0) {
        uVar9 = *(undefined8 *)(unaff_x29 + -0xb0);
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar7 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_03220980;
          *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = uVar4;
          *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
        }
        else {
          FUN_025eb570();
        }
        uVar7 = (uint)uVar9;
        if ((int)uVar11 < (int)uVar7) {
          sVar3 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2);
          if ((sVar3 == 0x2d) || (sVar3 == 0x2b)) {
            unaff_x27 = (ulong)(uVar15 + 2);
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar15 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_03220980;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = sVar3;
              *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
            }
            else {
              FUN_025eb570();
            }
          }
          if ((int)unaff_x27 < (int)uVar7) {
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
            } while (uVar7 != uVar15);
          }
        }
      }
      else {
        uVar7 = (uint)*(ulong *)(unaff_x29 + -0xb0);
        if (((int)uVar11 < (int)uVar7) &&
           (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2) == 0x30)) {
          iVar8 = 1;
        }
        else {
          iVar8 = uVar15 + 2;
          if ((int)uVar7 <= iVar8) {
LAB_03220778:
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
            *(undefined4 *)(unaff_x29 + -0xb4) = 1;
            goto switchD_03220064_caseD_2c;
          }
          sVar3 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2);
          if (sVar3 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar8 * 2) != 0x30)
            goto LAB_03220778;
            iVar8 = 0;
          }
          else {
            if ((sVar3 != 0x2b) ||
               (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar8 * 2) != 0x30))
            goto LAB_03220778;
            iVar8 = 0;
          }
        }
        unaff_x27 = (ulong)(uVar15 + 2);
        if ((int)(uVar15 + 2) < (int)uVar7) {
          do {
            if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x27 * 2) != 0x30)
            goto LAB_03220750;
            uVar15 = (int)unaff_x27 + 1;
            unaff_x27 = (ulong)uVar15;
            iVar8 = iVar8 + 1;
          } while (uVar7 != uVar15);
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
    if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_03220980;
      *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar15 * 2) = uVar4;
LAB_032202c0:
      *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
    }
    else {
LAB_032202d0:
      FUN_025eb570();
    }
    goto switchD_03220064_caseD_2c;
  }
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
    uVar15 = *(uint *)(unaff_x22 + 0x18);
    if ((int)uVar15 < (int)*(uint *)(unaff_x22 + 0x10)) {
      if (*(uint *)(unaff_x22 + 0x10) <= uVar15) goto LAB_03220980;
      lVar12 = *(long *)(unaff_x22 + 8);
      uVar6 = FUN_02521d48(lVar14,0,0);
      *(undefined2 *)(lVar12 + (long)(int)uVar15 * 2) = uVar6;
      *(uint *)(unaff_x22 + 0x18) = uVar15 + 1;
      goto LAB_032206fc;
    }
  }
  FUN_025eb69c();
LAB_032206fc:
  unaff_w23 = 0;
  *(undefined4 *)(unaff_x29 + -0xb8) = 1;
  goto switchD_03220064_caseD_2c;
switchD_03220064_caseD_23:
  if (unaff_w21 < 0) {
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w23 <= *(int *)(unaff_x29 + -0xc4)) goto LAB_032204f8;
    goto LAB_03220630;
  }
  unaff_w26 = *unaff_x28;
  if (unaff_w26 != 0) {
    unaff_x28 = unaff_x28 + 1;
    goto LAB_032204fc;
  }
  if (*(int *)(unaff_x29 + -200) < unaff_w23) goto LAB_032204f8;
  goto LAB_03220630;
LAB_032204f8:
  unaff_w26 = 0x30;
LAB_032204fc:
  param_1 = 0x7230000;
  goto code_r0x03220500;
}


