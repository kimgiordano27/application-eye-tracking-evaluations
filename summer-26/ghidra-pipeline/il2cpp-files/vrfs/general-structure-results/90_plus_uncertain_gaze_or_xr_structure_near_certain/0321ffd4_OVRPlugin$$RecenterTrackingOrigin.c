/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 0321ffd4
PROGRAM: vrfs-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__RecenterTrackingOrigin(void)

{
  ushort uVar1;
  short sVar2;
  char in_NG;
  char in_OV;
  undefined2 uVar3;
  uint in_w8;
  uint uVar4;
  int iVar5;
  uint unaff_w19;
  ulong unaff_x20;
  undefined8 uVar6;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  uint uVar7;
  ulong unaff_x24;
  short *psVar8;
  uint uVar9;
  long unaff_x25;
  long lVar10;
  short sVar11;
  long unaff_x26;
  long lVar12;
  ushort *puVar13;
  long unaff_x27;
  short *unaff_x28;
  long unaff_x29;
  
code_r0x0321ffd4:
  if (in_NG == in_OV) goto LAB_03220008;
  if (in_w8 <= (uint)unaff_x25) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
  lVar12 = *(long *)(unaff_x22 + 8);
  uVar3 = FUN_02521d48(unaff_x27,0,0);
  *(undefined2 *)(lVar12 + unaff_x25 * 2) = uVar3;
  unaff_x26 = *(long *)(unaff_x29 + -0xa0);
  *(uint *)(unaff_x22 + 0x18) = (uint)unaff_x25 + 1;
LAB_03220018:
  uVar9 = *(uint *)(unaff_x29 + -0x78);
  unaff_w19 = unaff_w19 - 1;
  iVar5 = unaff_w21;
LAB_03220020:
  unaff_w21 = iVar5 + -1;
  unaff_w23 = unaff_w23 + -1;
  if (unaff_w21 == 0 || iVar5 < 1) {
    do {
      uVar4 = (uint)unaff_x20;
      uVar7 = (uint)unaff_x24;
      uVar9 = uVar7 + 1;
      unaff_x24 = (ulong)uVar9;
      uVar3 = (undefined2)unaff_x20;
      if (uVar4 < 0x46) {
        switch(uVar4) {
        case 0x22:
        case 0x27:
          if ((int)uVar9 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
            lVar12 = unaff_x24 << 0x20;
            uVar7 = ~uVar7;
            puVar13 = (ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar9 * 2);
            while( true ) {
              uVar1 = *puVar13;
              if ((uVar1 == 0) || (uVar1 == uVar4)) break;
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar9 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = uVar1;
                *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
              }
              else {
                FUN_025eb570();
              }
              lVar12 = lVar12 + 0x100000000;
              uVar7 = uVar7 - 1;
              puVar13 = puVar13 + 1;
              if (*(uint *)(unaff_x29 + -0x94) == uVar7) goto LAB_03220838;
            }
            unaff_x24 = (ulong)((*(short *)((lVar12 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) -
                               uVar7);
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
              uVar7 = *(uint *)(unaff_x22 + 0x18);
              uVar9 = *(uint *)(unaff_x29 + -0x78);
              if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_03220980;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar11;
                *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
              }
              else {
                FUN_025eb570();
              }
              if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar9 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
                if (unaff_w23 ==
                    *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1) {
                  if (*(long *)(unaff_x29 + -0xa0) == 0) goto LAB_03220984;
                  lVar12 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
                  if (cRam0000000007237eb3 == '\0') {
                    thunk_FUN_0159f088(PTR_DAT_06de9da0);
                    cRam0000000007237eb3 = '\x01';
                  }
                  if (lVar12 == 0) goto LAB_03220984;
                  if (*(int *)(lVar12 + 0x10) == 1) {
                    uVar9 = *(uint *)(unaff_x22 + 0x18);
                    if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar9) goto LAB_0322061c;
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
                    lVar10 = *(long *)(unaff_x22 + 8);
                    uVar3 = FUN_02521d48(lVar12,0,0);
                    *(undefined2 *)(lVar10 + (long)(int)uVar9 * 2) = uVar3;
                    *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
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
          uVar9 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (uVar9 < *(uint *)(unaff_x22 + 0x10)) {
              *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = uVar3;
              goto LAB_032202c0;
            }
            goto LAB_03220980;
          }
LAB_032202d0:
          FUN_025eb570();
          break;
        case 0x25:
          if (unaff_x26 == 0) goto LAB_03220984;
          lVar12 = *(long *)(unaff_x26 + 0x90);
joined_r0x03220140:
          if (cRam0000000007237eb3 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            cRam0000000007237eb3 = '\x01';
          }
          if (lVar12 == 0) goto LAB_03220984;
          if (*(int *)(lVar12 + 0x10) == 1) {
            uVar9 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (uVar9 < *(uint *)(unaff_x22 + 0x10)) {
                lVar10 = *(long *)(unaff_x22 + 8);
                uVar3 = FUN_02521d48(lVar12,0,0);
                *(undefined2 *)(lVar10 + (long)(int)uVar9 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
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
          if ((*(uint *)(unaff_x29 + -0xb8) & 1) == 0 && unaff_w23 == 0) {
            if ((*(int *)(unaff_x29 + -200) < 0) ||
               ((*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x6c) && (*unaff_x28 != 0)))) {
              if (unaff_x26 == 0) goto LAB_03220984;
              lVar12 = *(long *)(unaff_x26 + 0x38);
              if (cRam0000000007237eb3 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                cRam0000000007237eb3 = '\x01';
              }
              if (lVar12 == 0) goto LAB_03220984;
              if (*(int *)(lVar12 + 0x10) == 1) {
                uVar9 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar9) goto LAB_032206e8;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
                lVar10 = *(long *)(unaff_x22 + 8);
                uVar3 = FUN_02521d48(lVar12,0,0);
                *(undefined2 *)(lVar10 + (long)(int)uVar9 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
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
          if (uVar4 != 0x45) goto switchD_03220064_caseD_24;
LAB_03220240:
          if ((*(uint *)(unaff_x29 + -0xb4) & 1) == 0) {
            uVar6 = *(undefined8 *)(unaff_x29 + -0xb0);
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar4 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar4 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar4) goto LAB_03220980;
              *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar4 * 2) = uVar3;
              *(uint *)(unaff_x22 + 0x18) = uVar4 + 1;
            }
            else {
              FUN_025eb570();
            }
            uVar4 = (uint)uVar6;
            if ((int)uVar9 < (int)uVar4) {
              sVar11 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar9 * 2);
              if ((sVar11 == 0x2d) || (sVar11 == 0x2b)) {
                unaff_x24 = (ulong)(uVar7 + 2);
                if (DAT_072305cf == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  DAT_072305cf = '\x01';
                }
                uVar9 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar11;
                  *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
                }
                else {
                  FUN_025eb570();
                }
              }
              if ((int)unaff_x24 < (int)uVar4) {
                psVar8 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x24 * 2);
                do {
                  if (*psVar8 != 0x30) break;
                  if (DAT_072305cf == '\0') {
                    thunk_FUN_0159f088(PTR_DAT_06de9da0);
                    DAT_072305cf = '\x01';
                  }
                  uVar9 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
                    if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
                    *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = 0x30;
                    *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
                  }
                  else {
                    FUN_025eb570();
                  }
                  uVar9 = (int)unaff_x24 + 1;
                  unaff_x24 = (ulong)uVar9;
                  psVar8 = psVar8 + 1;
                } while (uVar4 != uVar9);
              }
            }
          }
          else {
            uVar4 = (uint)*(ulong *)(unaff_x29 + -0xb0);
            if (((int)uVar9 < (int)uVar4) &&
               (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar9 * 2) == 0x30)) {
              iVar5 = 1;
              goto LAB_03220720;
            }
            iVar5 = uVar7 + 2;
            if ((int)uVar4 <= iVar5) {
LAB_03220778:
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar9 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar9 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
                *(undefined2 *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
              }
              else {
                FUN_025eb570();
              }
              *(undefined4 *)(unaff_x29 + -0xb4) = 1;
              break;
            }
            sVar11 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar9 * 2);
            if (sVar11 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar5 * 2) != 0x30)
              goto LAB_03220778;
              iVar5 = 0;
            }
            else {
              if ((sVar11 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar5 * 2) != 0x30))
              goto LAB_03220778;
              iVar5 = 0;
            }
LAB_03220720:
            unaff_x24 = (ulong)(uVar7 + 2);
            if ((int)(uVar7 + 2) < (int)uVar4) {
              do {
                if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x24 * 2) != 0x30)
                goto LAB_03220750;
                uVar9 = (int)unaff_x24 + 1;
                unaff_x24 = (ulong)uVar9;
                iVar5 = iVar5 + 1;
              } while (uVar4 != uVar9);
              unaff_x24 = *(ulong *)(unaff_x29 + -0xb0) & 0xffffffff;
            }
LAB_03220750:
            if (9 < iVar5) {
              iVar5 = 10;
            }
            if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
              *(int *)(unaff_x29 + -0xb4) = iVar5;
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
          if (unaff_x26 != 0) {
            lVar12 = *(long *)(unaff_x26 + 0x98);
            goto joined_r0x03220140;
          }
          goto LAB_03220984;
        }
        if (((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar9) ||
           (sVar11 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar9 * 2), sVar11 == 0))
        goto switchD_03220064_caseD_2c;
        unaff_x24 = (ulong)(uVar7 + 2);
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar9 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar9) goto LAB_032202d0;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar9) goto LAB_03220980;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar9 * 2) = sVar11;
LAB_032202c0:
        *(uint *)(unaff_x22 + 0x18) = uVar9 + 1;
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
      uVar1 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_x24 * 2);
      unaff_x20 = (ulong)uVar1;
      if ((uVar1 == 0x3b) || (uVar1 == 0)) goto LAB_03220838;
      if (((0 < unaff_w21) && (uVar1 < 0x31)) &&
         ((1L << (unaff_x20 & 0x3f) & 0x1400800000000U) != 0)) goto code_r0x0321fed8;
      unaff_x26 = *(long *)(unaff_x29 + -0xa0);
    } while( true );
  }
  goto LAB_0321fee0;
code_r0x0321ffc8:
  iVar5 = *(int *)(unaff_x22 + 0x18);
  unaff_x25 = (long)iVar5;
  in_w8 = *(uint *)(unaff_x22 + 0x10);
  in_OV = SBORROW4(iVar5,in_w8);
  in_NG = (int)(iVar5 - in_w8) < 0;
  goto code_r0x0321ffd4;
code_r0x0321fed8:
  unaff_x26 = *(long *)(unaff_x29 + -0xa0);
  uVar9 = *(uint *)(unaff_x29 + -0x78);
LAB_0321fee0:
  sVar11 = *unaff_x28;
  sVar2 = 0x30;
  if (sVar11 != 0) {
    unaff_x28 = unaff_x28 + 1;
    sVar2 = sVar11;
  }
  if (DAT_072305cf == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06de9da0);
    DAT_072305cf = '\x01';
  }
  uVar7 = *(uint *)(unaff_x22 + 0x18);
  if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
    if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_03220980;
    *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar2;
    *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
  }
  else {
    FUN_025eb570();
  }
  iVar5 = unaff_w21;
  if (((int)unaff_w19 < 0) || (unaff_w23 < 2 || (uVar9 & 1) != 0)) goto LAB_03220020;
  if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
  if (unaff_w23 != *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1)
  goto LAB_03220020;
  if (unaff_x26 != 0) {
    unaff_x27 = *(long *)(unaff_x26 + 0x40);
    if (cRam0000000007237eb3 == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06de9da0);
      cRam0000000007237eb3 = '\x01';
    }
    if (unaff_x27 != 0) {
      if (*(int *)(unaff_x27 + 0x10) == 1) goto code_r0x0321ffc8;
LAB_03220008:
      FUN_025eb69c();
      goto LAB_03220018;
    }
  }
LAB_03220984:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


