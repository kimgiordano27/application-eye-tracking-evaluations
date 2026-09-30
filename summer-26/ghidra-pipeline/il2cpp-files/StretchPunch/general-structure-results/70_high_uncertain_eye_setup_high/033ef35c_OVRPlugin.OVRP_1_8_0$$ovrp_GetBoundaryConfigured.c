/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryConfigured
ENTRY_POINT: 033ef35c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryConfigured(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  bool in_CY;
  int iVar5;
  ulong in_x9;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  ulong in_x10;
  undefined4 in_w12;
  uint *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  ulong uVar9;
  long unaff_x23;
  long *unaff_x24;
  ulong uVar10;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  long in_stack_00000010;
  long in_stack_00000018;
  
  uStack0000000000000004 = (int)in_x10;
  uVar9 = in_x10 >> 0x20 | 0x100000000;
  if (!in_CY) {
    uVar9 = in_x10 >> 0x20;
  }
  uStack0000000000000000 = in_w12;
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    in_x9 = (ulong)unaff_x19[3];
    param_1 = (ulong)unaff_x20[3];
  }
  uVar8 = unaff_x20[1];
  uVar9 = uVar9 + param_1 * in_x9;
  if (uVar8 == 0 && unaff_x19[1] == 0) {
    if (uVar9 == 0) {
      uVar9 = 1;
    }
    else {
      _uStack0000000000000008 = uVar9;
      uVar9 = 3;
    }
  }
  else {
    iVar5 = *(int *)(*unaff_x24 + 0xe0);
    if (iVar5 == 0) {
      thunk_FUN_01dc4f30();
      uVar8 = unaff_x20[1];
      iVar5 = *(int *)(*unaff_x24 + 0xe0);
    }
    uVar10 = (ulong)uVar8 * (ulong)unaff_x19[2];
    uVar1 = uVar10 + uVar9;
    if (iVar5 == 0) {
      thunk_FUN_01dc4f30();
      iVar5 = *(int *)(*unaff_x24 + 0xe0);
    }
    uVar6 = 1;
    if (uVar1 < uVar10) {
      uVar6 = 2;
    }
    uVar2 = (ulong)unaff_x20[2] * (ulong)unaff_x19[1] + uVar1;
    if (!CARRY8((ulong)unaff_x20[2] * (ulong)unaff_x19[1],uVar1)) {
      uVar6 = (ulong)CARRY8(uVar10,uVar9);
    }
    uVar9 = uVar2 >> 0x20 | uVar6 << 0x20;
    _uStack0000000000000008 = CONCAT44(uStack000000000000000c,(int)uVar2);
    if (iVar5 == 0) {
      thunk_FUN_01dc4f30();
      iVar5 = *(int *)(*unaff_x24 + 0xe0);
    }
    uVar8 = unaff_x19[3];
    uVar3 = unaff_x20[1];
    uVar1 = (ulong)uVar3 * (ulong)uVar8 + uVar9;
    if (iVar5 == 0) {
      thunk_FUN_01dc4f30();
      iVar5 = *(int *)(*unaff_x24 + 0xe0);
    }
    uVar6 = (ulong)unaff_x19[1];
    uVar10 = 1;
    if (uVar1 < uVar9) {
      uVar10 = 2;
    }
    uVar2 = unaff_x20[3] * uVar6 + uVar1;
    if (!CARRY8(unaff_x20[3] * uVar6,uVar1)) {
      uVar10 = (ulong)CARRY8((ulong)uVar3 * (ulong)uVar8,uVar9);
    }
    _uStack0000000000000008 = CONCAT44((int)uVar2,uStack0000000000000008);
    if (iVar5 == 0) {
      thunk_FUN_01dc4f30();
      uVar6 = (ulong)unaff_x19[1];
    }
    in_stack_00000010 = (uVar2 >> 0x20 | uVar10 << 0x20) + uVar6 * unaff_x20[1];
    uVar9 = 5;
  }
  if (*(int *)((long)&stack0x00000000 + uVar9 * 4) == 0) {
    piVar7 = (int *)((long)&stack0x00000000 + uVar9 * 4);
    do {
      piVar7 = piVar7 + -1;
      if (uVar9 == 0) {
        unaff_x19[0] = 0;
        unaff_x19[1] = 0;
        unaff_x19[2] = 0;
        unaff_x19[3] = 0;
        goto LAB_033ef5e0;
      }
      uVar9 = uVar9 - 1;
    } while (*piVar7 == 0);
    uVar9 = uVar9 & 0xffffffff;
  }
  if ((0x1c < unaff_w21) || (2 < (uint)uVar9)) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    unaff_w21 = FUN_033f1594();
  }
  uVar4 = CONCAT44(uStack0000000000000004,uStack0000000000000000);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  *(undefined8 *)(unaff_x19 + 2) = uVar4;
  unaff_x19[1] = uStack0000000000000008;
  *unaff_x19 = (*unaff_x19 ^ *unaff_x20) & 0x80000000 | unaff_w21 << 0x10;
LAB_033ef5e0:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


