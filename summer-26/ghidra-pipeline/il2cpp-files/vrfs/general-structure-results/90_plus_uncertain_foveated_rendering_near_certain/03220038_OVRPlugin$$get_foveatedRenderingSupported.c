/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 03220038
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


void OVRPlugin__get_foveatedRenderingSupported(void)

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
  uint uVar8;
  ulong unaff_x24;
  short *psVar9;
  uint uVar10;
  ulong unaff_x25;
  short sVar11;
  long lVar12;
  long unaff_x26;
  ushort *puVar13;
  long lVar14;
  short *unaff_x28;
  long unaff_x29;
  
  do {
    uVar5 = (uint)unaff_x25;
    uVar8 = (uint)unaff_x24;
    uVar10 = uVar8 + 1;
    unaff_x24 = (ulong)uVar10;
    uVar4 = (undefined2)unaff_x25;
    if (uVar5 < 0x46) {
      switch(uVar5) {
      case 0x22:
      case 0x27:
        if ((int)uVar10 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
          lVar14 = unaff_x24 << 0x20;
          uVar8 = ~uVar8;
          puVar13 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar10 * 2);
          while( true ) {
            uVar2 = *puVar13;
            if ((uVar2 == 0) || ((uint)uVar2 == (uint)unaff_x20)) break;
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
            lVar14 = lVar14 + 0x100000000;
            uVar8 = uVar8 - 1;
            puVar13 = puVar13 + 1;
            if (*(uint *)(unaff_x29 + -0x94) == uVar8) goto LAB_03220838;
          }
          unaff_x24 = (ulong)((*(short *)((lVar14 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) -
                             uVar8);
        }
        break;
      case 0x23:
      case 0x30:
        if (unaff_w21 < 0) {
          unaff_w21 = unaff_w21 + 1;
          if (unaff_w23 <= *(int *)(unaff_x29 + -0xc4)) {
LAB_032204f8:
            sVar11 = 0x30;
            goto LAB_032204fc;
          }
        }
        else {
          sVar11 = *unaff_x28;
          if (sVar11 == 0) {
            if (*(int *)(unaff_x29 + -200) < unaff_w23) goto LAB_032204f8;
          }
          else {
            unaff_x28 = unaff_x28 + 1;
LAB_032204fc:
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            uVar10 = *(uint *)(unaff_x29 + -0x78);
            if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
              *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar11;
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
            }
            else {
              FUN_025eb570();
            }
            if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar10 & 1) == 0)) {
              if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
              if (unaff_w23 != *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1
                 ) goto LAB_03220630;
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
                uVar10 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_0322061c;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
                lVar12 = *(long *)(unaff_x22 + 8);
                uVar4 = FUN_02521d48(lVar14,0,0);
                *(undefined2 *)(lVar12 + (long)(int)uVar10 * 2) = uVar4;
                *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
              }
              else {
LAB_0322061c:
                FUN_025eb69c();
              }
              unaff_w19 = unaff_w19 - 1;
            }
          }
        }
LAB_03220630:
        unaff_w23 = unaff_w23 + -1;
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
        uVar10 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar10) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar4;
          goto LAB_032202c0;
        }
LAB_032202d0:
        FUN_025eb570();
        break;
      case 0x25:
        if (unaff_x26 == 0) goto LAB_03220984;
        lVar14 = *(long *)(unaff_x26 + 0x90);
joined_r0x03220140:
        if (cRam0000000007237eb3 == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          cRam0000000007237eb3 = '\x01';
        }
        if (lVar14 == 0) goto LAB_03220984;
        if (*(int *)(lVar14 + 0x10) == 1) {
          uVar10 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
            lVar12 = *(long *)(unaff_x22 + 8);
            uVar4 = FUN_02521d48(lVar14,0,0);
            *(undefined2 *)(lVar12 + (long)(int)uVar10 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
            break;
          }
        }
        FUN_025eb69c();
        break;
      case 0x2c:
        break;
      case 0x2e:
        if ((*(uint *)(unaff_x29 + -0xb8) & 1) == 0 && unaff_w23 == 0) {
          if ((*(int *)(unaff_x29 + -200) < 0) ||
             ((*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x6c) && (*unaff_x28 != 0)))) {
            if (unaff_x26 == 0) goto LAB_03220984;
            lVar14 = *(long *)(unaff_x26 + 0x38);
            if (cRam0000000007237eb3 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              cRam0000000007237eb3 = '\x01';
            }
            if (lVar14 == 0) goto LAB_03220984;
            if (*(int *)(lVar14 + 0x10) == 1) {
              uVar10 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_032206e8;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
              lVar12 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_02521d48(lVar14,0,0);
              *(undefined2 *)(lVar12 + (long)(int)uVar10 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
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
        break;
      default:
        if (uVar5 != 0x45) goto switchD_03220064_caseD_24;
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
            *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar5 * 2) = uVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar5 + 1;
          }
          else {
            FUN_025eb570();
          }
          uVar5 = (uint)uVar7;
          if ((int)uVar10 < (int)uVar5) {
            sVar11 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar10 * 2);
            if ((sVar11 == 0x2d) || (sVar11 == 0x2b)) {
              unaff_x24 = (ulong)(uVar8 + 2);
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar10 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = sVar11;
                *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
              }
              else {
                FUN_025eb570();
              }
            }
            if ((int)unaff_x24 < (int)uVar5) {
              psVar9 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x24 * 2);
              do {
                if (*psVar9 != 0x30) break;
                if (DAT_072305cf == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  DAT_072305cf = '\x01';
                }
                uVar10 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
                  *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = 0x30;
                  *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
                }
                else {
                  FUN_025eb570();
                }
                uVar10 = (int)unaff_x24 + 1;
                unaff_x24 = (ulong)uVar10;
                psVar9 = psVar9 + 1;
              } while (uVar5 != uVar10);
            }
          }
        }
        else {
          uVar5 = (uint)*(ulong *)(unaff_x29 + -0xb0);
          if (((int)uVar10 < (int)uVar5) &&
             (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar10 * 2) == 0x30)) {
            iVar6 = 1;
            goto LAB_03220720;
          }
          iVar6 = uVar8 + 2;
          if ((int)uVar5 <= iVar6) {
LAB_03220778:
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar10 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar10 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
              *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = uVar4;
              *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
            }
            else {
              FUN_025eb570();
            }
            *(undefined4 *)(unaff_x29 + -0xb4) = 1;
            break;
          }
          sVar11 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar10 * 2);
          if (sVar11 == 0x2d) {
            if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar6 * 2) != 0x30)
            goto LAB_03220778;
            iVar6 = 0;
          }
          else {
            if ((sVar11 != 0x2b) ||
               (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar6 * 2) != 0x30))
            goto LAB_03220778;
            iVar6 = 0;
          }
LAB_03220720:
          unaff_x24 = (ulong)(uVar8 + 2);
          if ((int)(uVar8 + 2) < (int)uVar5) {
            do {
              if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x24 * 2) != 0x30)
              goto LAB_03220750;
              uVar10 = (int)unaff_x24 + 1;
              unaff_x24 = (ulong)uVar10;
              iVar6 = iVar6 + 1;
            } while (uVar5 != uVar10);
            unaff_x24 = *(ulong *)(unaff_x29 + -0xb0) & 0xffffffff;
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
      }
    }
    else {
      if (uVar5 != 0x5c) {
        if (uVar5 == 0x65) goto LAB_03220240;
        if (uVar5 == 0x2030) {
          if (unaff_x26 == 0) goto LAB_03220984;
          lVar14 = *(long *)(unaff_x26 + 0x98);
          goto joined_r0x03220140;
        }
        goto switchD_03220064_caseD_24;
      }
      if (((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar10) ||
         (sVar11 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar10 * 2), sVar11 == 0))
      goto switchD_03220064_caseD_2c;
      unaff_x24 = (ulong)(uVar8 + 2);
      if (DAT_072305cf == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        DAT_072305cf = '\x01';
      }
      uVar10 = *(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_032202d0;
      if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
      *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar10 * 2) = sVar11;
LAB_032202c0:
      *(uint *)(unaff_x22 + 0x18) = uVar10 + 1;
    }
switchD_03220064_caseD_2c:
    if ((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)unaff_x24) {
LAB_03220838:
      if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar2 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x24 * 2);
    unaff_x20 = (ulong)uVar2;
    if ((uVar2 == 0x3b) || (uVar2 == 0)) goto LAB_03220838;
    unaff_x25 = unaff_x20;
    if (((unaff_w21 < 1) || (0x30 < uVar2)) || ((1L << (unaff_x20 & 0x3f) & 0x1400800000000U) == 0))
    {
      unaff_x26 = *(long *)(unaff_x29 + -0xa0);
    }
    else {
      unaff_x26 = *(long *)(unaff_x29 + -0xa0);
      uVar10 = *(uint *)(unaff_x29 + -0x78);
      iVar6 = unaff_w21;
      do {
        sVar11 = *unaff_x28;
        sVar3 = 0x30;
        if (sVar11 != 0) {
          unaff_x28 = unaff_x28 + 1;
          sVar3 = sVar11;
        }
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
          if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
          *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar3;
          *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
        }
        else {
          FUN_025eb570();
        }
        if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar10 & 1) == 0)) {
          if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
          if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1) {
            if (unaff_x26 == 0) goto LAB_03220984;
            lVar14 = *(long *)(unaff_x26 + 0x40);
            if (cRam0000000007237eb3 == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              cRam0000000007237eb3 = '\x01';
            }
            if (lVar14 == 0) goto LAB_03220984;
            if (*(int *)(lVar14 + 0x10) == 1) {
              uVar10 = *(uint *)(unaff_x22 + 0x18);
              if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar10) goto LAB_03220008;
              if (*(uint *)(unaff_x22 + 0x10) <= uVar10) goto LAB_03220980;
              lVar12 = *(long *)(unaff_x22 + 8);
              uVar4 = FUN_02521d48(lVar14,0,0);
              *(undefined2 *)(lVar12 + (long)(int)uVar10 * 2) = uVar4;
              unaff_x26 = *(long *)(unaff_x29 + -0xa0);
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
        unaff_w21 = iVar6 + -1;
        unaff_w23 = unaff_w23 + -1;
        bVar1 = 0 < iVar6;
        iVar6 = unaff_w21;
      } while (unaff_w21 != 0 && bVar1);
    }
  } while( true );
}


