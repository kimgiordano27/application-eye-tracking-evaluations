/*
FUNCTION_NAME: OVRPlugin$$CreatePassthroughColorLut
ENTRY_POINT: 0321f34c
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreatePassthroughColorLut(void)

{
  uint uVar1;
  undefined2 uVar2;
  short *psVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  ushort unaff_w23;
  ulong unaff_x24;
  long lVar7;
  long unaff_x26;
  long *plVar8;
  long lVar9;
  
  plVar8 = *(long **)(unaff_x26 + 0x9a0);
  if (0x50 < unaff_w23) {
    switch(unaff_w23) {
    case 99:
      goto switchD_0321f37c_caseD_43;
    default:
      goto switchD_0321f37c_caseD_44;
    case 0x65:
      goto switchD_0321f37c_caseD_45;
    case 0x66:
      goto switchD_0321f37c_caseD_46;
    case 0x67:
      goto switchD_0321f37c_caseD_47;
    case 0x6e:
      goto switchD_0321f37c_caseD_4e;
    case 0x70:
      goto switchD_0321f37c_caseD_50;
    }
  }
  switch(unaff_w23) {
  case 0x43:
switchD_0321f37c_caseD_43:
    if ((-1 < unaff_w22) || (unaff_x19 != 0)) {
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_032244e4();
      FUN_032245e4();
      return;
    }
    break;
  default:
switchD_0321f37c_caseD_44:
    thunk_FUN_0159f088(PTR_DAT_06dbba10);
    uVar5 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    uVar6 = thunk_FUN_0159f088(PTR_DAT_06d941e8);
    FUN_028c5828(uVar5,uVar6,0);
    uVar6 = thunk_FUN_0159f088(PTR_DAT_06e45e88);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar5,uVar6);
  case 0x45:
switchD_0321f37c_caseD_45:
    if (*(int *)(*plVar8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_032244e4();
    uVar4 = FUN_031c833c();
    if ((uVar4 & 1) == 0) {
LAB_0321f67c:
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_03224fe0();
      return;
    }
    if (unaff_x19 != 0) {
      lVar7 = *(long *)(unaff_x19 + 0x30);
      if (cRam0000000007237eb3 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        cRam0000000007237eb3 = '\x01';
      }
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x10) == 1) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x10)) {
            if (*(uint *)(unaff_x21 + 0x10) <= uVar1) {
LAB_0321f870:
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            lVar9 = *(long *)(unaff_x21 + 8);
            uVar2 = FUN_02521d48(lVar7,0,0);
            *(undefined2 *)(lVar9 + (long)(int)uVar1 * 2) = uVar2;
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            goto LAB_0321f67c;
          }
        }
        FUN_025eb69c();
        goto LAB_0321f67c;
      }
    }
    break;
  case 0x46:
switchD_0321f37c_caseD_46:
    if ((unaff_w22 < 0) && (unaff_x19 == 0)) break;
    if (*(int *)(*plVar8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_032244e4();
    uVar4 = FUN_031c833c();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == 0) break;
LAB_0321f6d0:
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_0322484c();
      return;
    }
    if (unaff_x19 != 0) {
      lVar7 = *(long *)(unaff_x19 + 0x30);
      if (cRam0000000007237eb3 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        cRam0000000007237eb3 = '\x01';
      }
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x10) == 1) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x10)) {
          if (uVar1 < *(uint *)(unaff_x21 + 0x10)) {
            lVar9 = *(long *)(unaff_x21 + 8);
            uVar2 = FUN_02521d48(lVar7,0,0);
            *(undefined2 *)(lVar9 + (long)(int)uVar1 * 2) = uVar2;
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            goto LAB_0321f6d0;
          }
          goto LAB_0321f870;
        }
      }
      FUN_025eb69c();
      goto LAB_0321f6d0;
    }
    break;
  case 0x47:
switchD_0321f37c_caseD_47:
    if (((unaff_w22 < 1) && (unaff_w22 == -1)) && ((unaff_x24 & 1) != 0)) {
      psVar3 = (short *)FUN_031c8358();
      if (*psVar3 == 0) {
        FUN_031c834c();
      }
    }
    else {
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_032244e4();
    }
    uVar4 = FUN_031c833c();
    if ((uVar4 & 1) == 0) {
LAB_0321f7d8:
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_03225238();
      return;
    }
    if (unaff_x19 != 0) {
      lVar7 = *(long *)(unaff_x19 + 0x30);
      if (cRam0000000007237eb3 == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06de9da0);
        cRam0000000007237eb3 = '\x01';
      }
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x10) == 1) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if ((int)uVar1 < (int)*(uint *)(unaff_x21 + 0x10)) {
          if (uVar1 < *(uint *)(unaff_x21 + 0x10)) {
            lVar9 = *(long *)(unaff_x21 + 8);
            uVar2 = FUN_02521d48(lVar7,0,0);
            *(undefined2 *)(lVar9 + (long)(int)uVar1 * 2) = uVar2;
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            goto LAB_0321f7d8;
          }
          goto LAB_0321f870;
        }
      }
      FUN_025eb69c();
      goto LAB_0321f7d8;
    }
    break;
  case 0x4e:
switchD_0321f37c_caseD_4e:
    if ((-1 < unaff_w22) || (unaff_x19 != 0)) {
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_032244e4();
      FUN_03224d8c();
      return;
    }
    break;
  case 0x50:
switchD_0321f37c_caseD_50:
    if ((-1 < unaff_w22) || (unaff_x19 != 0)) {
      *(int *)(unaff_x20 + 4) = *(int *)(unaff_x20 + 4) + 2;
      if (*(int *)(*plVar8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_032244e4();
      FUN_032255f0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


