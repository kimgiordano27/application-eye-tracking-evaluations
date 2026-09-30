/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_TestBoundaryNode
ENTRY_POINT: 033ef3c4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryNode(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int in_w8;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  uint uVar9;
  ulong unaff_x22;
  ulong uVar10;
  long unaff_x23;
  long *unaff_x24;
  ulong unaff_x26;
  undefined8 in_stack_00000000;
  undefined4 uStack000000000000000c;
  long in_stack_00000010;
  long in_stack_00000018;
  
  uVar10 = unaff_x26 + unaff_x22;
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
    in_w8 = *(int *)(*unaff_x24 + 0xe0);
  }
  uVar3 = 1;
  if (uVar10 < unaff_x26) {
    uVar3 = 2;
  }
  uVar1 = (ulong)unaff_x20[2] * (ulong)unaff_x19[1] + uVar10;
  if (!CARRY8((ulong)unaff_x20[2] * (ulong)unaff_x19[1],uVar10)) {
    uVar3 = (ulong)CARRY8(unaff_x26,unaff_x22);
  }
  uVar10 = uVar1 >> 0x20 | uVar3 << 0x20;
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
    in_w8 = *(int *)(*unaff_x24 + 0xe0);
  }
  uVar9 = unaff_x19[3];
  uVar5 = unaff_x20[1];
  uVar3 = (ulong)uVar5 * (ulong)uVar9 + uVar10;
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
    in_w8 = *(int *)(*unaff_x24 + 0xe0);
  }
  uVar7 = (ulong)unaff_x19[1];
  uVar4 = 1;
  if (uVar3 < uVar10) {
    uVar4 = 2;
  }
  uVar2 = unaff_x20[3] * uVar7 + uVar3;
  if (!CARRY8(unaff_x20[3] * uVar7,uVar3)) {
    uVar4 = (ulong)CARRY8((ulong)uVar5 * (ulong)uVar9,uVar10);
  }
  uStack000000000000000c = (undefined4)uVar2;
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
    uVar7 = (ulong)unaff_x19[1];
  }
  in_stack_00000010 = (uVar2 >> 0x20 | uVar4 << 0x20) + uVar7 * unaff_x20[1];
  lVar6 = in_stack_00000010;
  uVar9 = 5;
  in_stack_00000010._4_4_ = (int)((ulong)in_stack_00000010 >> 0x20);
  in_stack_00000010 = lVar6;
  if (in_stack_00000010._4_4_ == 0) {
    piVar8 = (int *)((long)&stack0x00000010 + 4);
    lVar6 = 5;
    do {
      piVar8 = piVar8 + -1;
      if (lVar6 == 0) {
        unaff_x19[0] = 0;
        unaff_x19[1] = 0;
        unaff_x19[2] = 0;
        unaff_x19[3] = 0;
        goto LAB_033ef5e0;
      }
      lVar6 = lVar6 + -1;
    } while (*piVar8 == 0);
    uVar9 = (uint)lVar6;
  }
  if ((0x1c < unaff_w21) || (2 < uVar9)) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    unaff_w21 = FUN_033f1594();
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  *(undefined8 *)(unaff_x19 + 2) = in_stack_00000000;
  unaff_x19[1] = (uint)uVar1;
  *unaff_x19 = (*unaff_x19 ^ *unaff_x20) & 0x80000000 | unaff_w21 << 0x10;
LAB_033ef5e0:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


