/*
FUNCTION_NAME: OVRPlugin$$SetHeadPoseModifier
ENTRY_POINT: 03221a14
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin__SetHeadPoseModifier(long param_1)

{
  int iVar1;
  bool in_CY;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000008;
  
  if (in_CY) goto LAB_03221be0;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar2 = FUN_0322a924();
  if (unaff_w24 >> 4 == 0) {
LAB_03221afc:
    uVar8 = uVar2;
    if ((((uint)uVar2 >> 10 & 1) != 0) &&
       (uVar8 = uVar2 + (uVar2 >> 0xb & 1) + 0x3ff, uVar8 < uVar2)) {
      uVar8 = uVar8 >> 1 | 0x8000000000000000;
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    }
    uVar9 = in_stack_00000008._4_4_ + 0x3fe;
    if ((int)uVar9 < 1) {
      if ((uVar8 < 0x8000000000000058) || (uVar9 != 0xffffffcc)) {
        if ((int)uVar9 < -0x33) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar8 >> ((ulong)(0xe - in_stack_00000008._4_4_) & 0x3f);
        }
      }
      else {
        uVar8 = 1;
      }
    }
    else if ((int)uVar9 < 0x7ff) {
      uVar8 = uVar8 >> 0xb & 0xfffffffffffff | (ulong)uVar9 << 0x34;
    }
    else {
      uVar8 = 0x7ff0000000000000;
    }
    in_stack_00000008._4_4_ = uVar9;
    uVar4 = FUN_031c833c();
    uVar2 = uVar8 | 0x8000000000000000;
    if ((uVar4 & 1) == 0) {
      uVar2 = uVar8;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar2;
    return auVar12;
  }
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar3 = *unaff_x22;
  }
  lVar5 = *(long *)(lVar3 + 0xb8);
  lVar7 = *(long *)(lVar5 + 0x48);
  if (lVar7 != 0) {
    lVar10 = (long)(unaff_w24 >> 4) + -1;
    uVar9 = (uint)lVar10;
    if (uVar9 < *(uint *)(lVar7 + 0x18)) {
      iVar6 = (int)*(short *)(lVar7 + lVar10 * 2 + 0x20);
      iVar1 = 1 - iVar6;
      if (-1 < unaff_w23) {
        iVar1 = iVar6;
      }
      in_stack_00000008._4_4_ = iVar1 + in_stack_00000008._4_4_;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar3 = *unaff_x22;
        lVar5 = *(long *)(lVar3 + 0xb8);
      }
      lVar5 = *(long *)(lVar5 + 0x40);
      if (lVar5 == 0) goto LAB_03221bdc;
      uVar9 = uVar9 + (unaff_w23 >> 0x1f & 0x15U);
      if (uVar9 < *(uint *)(lVar5 + 0x18)) {
        uVar11 = *(undefined8 *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar2 = FUN_0322a924(uVar2,uVar11,(long)&stack0x00000008 + 4);
        goto LAB_03221afc;
      }
    }
LAB_03221be0:
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
LAB_03221bdc:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


