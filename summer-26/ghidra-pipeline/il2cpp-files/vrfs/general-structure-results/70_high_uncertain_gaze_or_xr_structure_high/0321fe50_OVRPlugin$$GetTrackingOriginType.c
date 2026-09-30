/*
FUNCTION_NAME: OVRPlugin$$GetTrackingOriginType
ENTRY_POINT: 0321fe50
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingOriginType(void)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint unaff_w19;
  undefined8 unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  short *psVar10;
  uint unaff_w25;
  uint uVar11;
  short sVar12;
  long lVar13;
  ushort *puVar14;
  long lVar15;
  short *psVar16;
  long unaff_x29;
  
  uVar6 = FUN_018cc790(*(undefined8 *)(unaff_x29 + -0x78));
  *(undefined8 *)(unaff_x29 + -0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar6;
  if ((int)unaff_w25 < (int)unaff_x20) {
    psVar16 = *(short **)(unaff_x29 + -0x80);
    *(undefined4 *)(unaff_x29 + -0xb8) = 0;
    *(uint *)(unaff_x29 + -0x78) = *(uint *)(unaff_x29 + -0x94) ^ 1;
    *(int *)(unaff_x29 + -0x94) = -(int)*(undefined8 *)(unaff_x29 + -0xb0);
    do {
      uVar3 = *(ushort *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)unaff_w25 * 2);
      if ((uVar3 == 0x3b) || (uVar3 == 0)) break;
      if ((unaff_w21 < 1) ||
         ((0x30 < uVar3 || ((1L << ((ulong)uVar3 & 0x3f) & 0x1400800000000U) == 0)))) {
        lVar13 = *(long *)(unaff_x29 + -0xa0);
      }
      else {
        lVar13 = *(long *)(unaff_x29 + -0xa0);
        uVar11 = *(uint *)(unaff_x29 + -0x78);
        iVar9 = unaff_w21;
        do {
          sVar12 = *psVar16;
          sVar4 = 0x30;
          if (sVar12 != 0) {
            psVar16 = psVar16 + 1;
            sVar4 = sVar12;
          }
          if (DAT_072305cf == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06de9da0);
            DAT_072305cf = '\x01';
          }
          uVar8 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
            *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar4;
            *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
          }
          else {
            FUN_025eb570();
          }
          if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar11 & 1) == 0)) {
            if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
            if (unaff_w23 == *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1)
            {
              if (lVar13 == 0) goto LAB_03220984;
              lVar15 = *(long *)(lVar13 + 0x40);
              if (cRam0000000007237eb3 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                cRam0000000007237eb3 = '\x01';
              }
              if (lVar15 == 0) goto LAB_03220984;
              if (*(int *)(lVar15 + 0x10) == 1) {
                uVar11 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar11) goto LAB_03220008;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar11) goto LAB_03220980;
                lVar13 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_02521d48(lVar15,0,0);
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
          unaff_w21 = iVar9 + -1;
          unaff_w23 = unaff_w23 + -1;
          bVar1 = 0 < iVar9;
          iVar9 = unaff_w21;
        } while (unaff_w21 != 0 && bVar1);
      }
      uVar11 = unaff_w25 + 1;
      if (uVar3 < 0x46) {
        switch(uVar3) {
        case 0x22:
        case 0x27:
          if ((int)uVar11 < (int)*(undefined8 *)(unaff_x29 + -0xb0)) {
            lVar13 = (ulong)uVar11 << 0x20;
            uVar8 = ~unaff_w25;
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
              uVar8 = uVar8 - 1;
              puVar14 = puVar14 + 1;
              if (*(uint *)(unaff_x29 + -0x94) == uVar8) goto LAB_03220838;
            }
            uVar11 = (*(short *)((lVar13 >> 0x1f) + *(long *)(unaff_x29 + -0xa8)) != 0) - uVar8;
          }
          break;
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
            sVar12 = *psVar16;
            if (sVar12 == 0) {
              if (*(int *)(unaff_x29 + -200) < unaff_w23) goto LAB_032204f8;
            }
            else {
              psVar16 = psVar16 + 1;
LAB_032204fc:
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar7 = *(uint *)(unaff_x22 + 0x18);
              uVar8 = *(uint *)(unaff_x29 + -0x78);
              if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_03220980;
                *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar12;
                *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
              }
              else {
                FUN_025eb570();
              }
              if ((-1 < (int)unaff_w19) && (1 < unaff_w23 && (uVar8 & 1) == 0)) {
                if (*(uint *)(unaff_x29 + -0x60) <= unaff_w19) goto LAB_03220980;
                if (unaff_w23 !=
                    *(int *)(*(long *)(unaff_x29 + -0x68) + (long)(int)unaff_w19 * 4) + 1)
                goto LAB_03220630;
                if (*(long *)(unaff_x29 + -0xa0) == 0) {
LAB_03220984:
                    /* WARNING: Subroutine does not return */
                  FUN_0160eeb4();
                }
                lVar13 = *(long *)(*(long *)(unaff_x29 + -0xa0) + 0x40);
                if (cRam0000000007237eb3 == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  cRam0000000007237eb3 = '\x01';
                }
                if (lVar13 == 0) goto LAB_03220984;
                if (*(int *)(lVar13 + 0x10) == 1) {
                  uVar8 = *(uint *)(unaff_x22 + 0x18);
                  if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_0322061c;
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
                  lVar15 = *(long *)(unaff_x22 + 8);
                  uVar5 = FUN_02521d48(lVar13,0,0);
                  *(undefined2 *)(lVar15 + (long)(int)uVar8 * 2) = uVar5;
                  *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
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
          uVar8 = *(uint *)(unaff_x22 + 0x18);
          if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
            if (*(uint *)(unaff_x22 + 0x10) <= uVar8) {
LAB_03220980:
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = uVar3;
            goto LAB_032202c0;
          }
LAB_032202d0:
          FUN_025eb570();
          break;
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
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
              lVar15 = *(long *)(unaff_x22 + 8);
              uVar5 = FUN_02521d48(lVar13,0,0);
              *(undefined2 *)(lVar15 + (long)(int)uVar8 * 2) = uVar5;
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
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
               ((*(int *)(unaff_x29 + -0x84) < *(int *)(unaff_x29 + -0x6c) && (*psVar16 != 0)))) {
              if (lVar13 == 0) goto LAB_03220984;
              lVar13 = *(long *)(lVar13 + 0x38);
              if (cRam0000000007237eb3 == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                cRam0000000007237eb3 = '\x01';
              }
              if (lVar13 == 0) goto LAB_03220984;
              if (*(int *)(lVar13 + 0x10) == 1) {
                uVar8 = *(uint *)(unaff_x22 + 0x18);
                if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_032206e8;
                if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
                lVar15 = *(long *)(unaff_x22 + 8);
                uVar5 = FUN_02521d48(lVar13,0,0);
                *(undefined2 *)(lVar15 + (long)(int)uVar8 * 2) = uVar5;
                *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
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
          if (uVar3 != 0x45) goto switchD_03220064_caseD_24;
LAB_03220240:
          if ((*(uint *)(unaff_x29 + -0xb4) & 1) == 0) {
            uVar6 = *(undefined8 *)(unaff_x29 + -0xb0);
            if (DAT_072305cf == '\0') {
              thunk_FUN_0159f088(PTR_DAT_06de9da0);
              DAT_072305cf = '\x01';
            }
            uVar8 = *(uint *)(unaff_x22 + 0x18);
            if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
              if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
              *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = uVar3;
              *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
            }
            else {
              FUN_025eb570();
            }
            uVar8 = (uint)uVar6;
            if ((int)uVar11 < (int)uVar8) {
              sVar12 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2);
              if ((sVar12 == 0x2d) || (sVar12 == 0x2b)) {
                uVar11 = unaff_w25 + 2;
                if (DAT_072305cf == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06de9da0);
                  DAT_072305cf = '\x01';
                }
                uVar7 = *(uint *)(unaff_x22 + 0x18);
                if ((int)uVar7 < (int)*(uint *)(unaff_x22 + 0x10)) {
                  if (*(uint *)(unaff_x22 + 0x10) <= uVar7) goto LAB_03220980;
                  *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar7 * 2) = sVar12;
                  *(uint *)(unaff_x22 + 0x18) = uVar7 + 1;
                }
                else {
                  FUN_025eb570();
                }
              }
              if ((int)uVar11 < (int)uVar8) {
                psVar10 = (short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2);
                do {
                  if (*psVar10 != 0x30) break;
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
                  uVar11 = uVar11 + 1;
                  psVar10 = psVar10 + 1;
                } while (uVar8 != uVar11);
              }
            }
          }
          else {
            uVar8 = (uint)*(undefined8 *)(unaff_x29 + -0xb0);
            if (((int)uVar11 < (int)uVar8) &&
               (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2) == 0x30)) {
              iVar9 = 1;
              goto LAB_03220720;
            }
            iVar9 = unaff_w25 + 2;
            if ((int)uVar8 <= iVar9) {
LAB_03220778:
              if (DAT_072305cf == '\0') {
                thunk_FUN_0159f088(PTR_DAT_06de9da0);
                DAT_072305cf = '\x01';
              }
              uVar8 = *(uint *)(unaff_x22 + 0x18);
              if ((int)uVar8 < (int)*(uint *)(unaff_x22 + 0x10)) {
                if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
                *(ushort *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = uVar3;
                *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
              }
              else {
                FUN_025eb570();
              }
              *(undefined4 *)(unaff_x29 + -0xb4) = 1;
              break;
            }
            sVar12 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2);
            if (sVar12 == 0x2d) {
              if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar9 * 2) != 0x30)
              goto LAB_03220778;
              iVar9 = 0;
            }
            else {
              if ((sVar12 != 0x2b) ||
                 (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)iVar9 * 2) != 0x30))
              goto LAB_03220778;
              iVar9 = 0;
            }
LAB_03220720:
            uVar7 = unaff_w25 + 2;
            uVar11 = uVar7;
            if ((int)uVar7 < (int)uVar8) {
              do {
                uVar11 = uVar7;
                if (*(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar7 * 2) != 0x30) break;
                uVar7 = uVar7 + 1;
                iVar9 = iVar9 + 1;
                uVar11 = uVar8;
              } while (uVar8 != uVar7);
            }
            if (9 < iVar9) {
              iVar9 = 10;
            }
            if (*(int *)(*(long *)PTR_DAT_06e3f9a0 + 0xe0) == 0) {
              *(int *)(unaff_x29 + -0xb4) = iVar9;
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
          if (uVar3 == 0x2030) {
            if (lVar13 == 0) goto LAB_03220984;
            lVar13 = *(long *)(lVar13 + 0x98);
            goto joined_r0x03220140;
          }
          goto switchD_03220064_caseD_24;
        }
        if (((int)*(undefined8 *)(unaff_x29 + -0xb0) <= (int)uVar11) ||
           (sVar12 = *(short *)(*(long *)(unaff_x29 + -0xa8) + (long)(int)uVar11 * 2), sVar12 == 0))
        goto switchD_03220064_caseD_2c;
        uVar11 = unaff_w25 + 2;
        if (DAT_072305cf == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06de9da0);
          DAT_072305cf = '\x01';
        }
        uVar8 = *(uint *)(unaff_x22 + 0x18);
        if ((int)*(uint *)(unaff_x22 + 0x10) <= (int)uVar8) goto LAB_032202d0;
        if (*(uint *)(unaff_x22 + 0x10) <= uVar8) goto LAB_03220980;
        *(short *)(*(long *)(unaff_x22 + 8) + (long)(int)uVar8 * 2) = sVar12;
LAB_032202c0:
        *(uint *)(unaff_x22 + 0x18) = uVar8 + 1;
      }
switchD_03220064_caseD_2c:
      unaff_w25 = uVar11;
    } while ((int)unaff_w25 < (int)*(undefined8 *)(unaff_x29 + -0xb0));
  }
LAB_03220838:
  if (*(long *)(*(long *)(unaff_x29 + -0xc0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


