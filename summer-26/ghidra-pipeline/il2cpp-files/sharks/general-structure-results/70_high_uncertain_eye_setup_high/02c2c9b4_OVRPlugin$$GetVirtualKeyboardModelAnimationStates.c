/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 02c2c9b4
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetVirtualKeyboardModelAnimationStates(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
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
  ulong uVar11;
  undefined8 in_stack_00000000;
  undefined4 uStack000000000000000c;
  long in_stack_00000010;
  long in_stack_00000018;
  
                    /* catch() { ... } // from try @ 02c2c998 with catch @ 02c2c9b8 */
  iVar5 = *(int *)(param_1 + 0xe0);
  uVar11 = (ulong)unaff_x20[1] * (ulong)unaff_x19[2];
  uVar10 = uVar11 + unaff_x22;
                    /* try { // try from 02c2c9cc to 02d2c9d7 has its CatchHandler @ 02c2c9ec */
  if (iVar5 == 0) {
    thunk_FUN_01843fdc();
                    /* try { // try from 02c2c9d8 to 02d2c9e3 has its CatchHandler @ 02c2c890 */
    iVar5 = *(int *)(*unaff_x24 + 0xe0);
  }
                    /* try { // try from 02c2c9e4 to 02d2c9eb has its CatchHandler @ 02c2c9ec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02c2c9cc with catch @ 02c2c9ec
                       catch(type#2 @ 00000000) { ... } // from try @ 02c2c9e4 with catch @ 02c2c9ec
                        */
  uVar3 = 1;
  if (uVar10 < uVar11) {
    uVar3 = 2;
  }
  uVar1 = (ulong)unaff_x20[2] * (ulong)unaff_x19[1] + uVar10;
  if (!CARRY8((ulong)unaff_x20[2] * (ulong)unaff_x19[1],uVar10)) {
    uVar3 = (ulong)CARRY8(uVar11,unaff_x22);
  }
  uVar10 = uVar1 >> 0x20 | uVar3 << 0x20;
  if (iVar5 == 0) {
    thunk_FUN_01843fdc();
    iVar5 = *(int *)(*unaff_x24 + 0xe0);
  }
  uVar9 = unaff_x19[3];
  uVar4 = unaff_x20[1];
  uVar11 = (ulong)uVar4 * (ulong)uVar9 + uVar10;
  if (iVar5 == 0) {
    thunk_FUN_01843fdc();
    iVar5 = *(int *)(*unaff_x24 + 0xe0);
  }
  uVar7 = (ulong)unaff_x19[1];
  uVar3 = 1;
  if (uVar11 < uVar10) {
    uVar3 = 2;
  }
  uVar2 = unaff_x20[3] * uVar7 + uVar11;
  if (!CARRY8(unaff_x20[3] * uVar7,uVar11)) {
    uVar3 = (ulong)CARRY8((ulong)uVar4 * (ulong)uVar9,uVar10);
  }
  uStack000000000000000c = (undefined4)uVar2;
  if (iVar5 == 0) {
    thunk_FUN_01843fdc();
    uVar7 = (ulong)unaff_x19[1];
  }
  in_stack_00000010 = (uVar2 >> 0x20 | uVar3 << 0x20) + uVar7 * unaff_x20[1];
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
        goto LAB_02c2cbe4;
      }
      lVar6 = lVar6 + -1;
    } while (*piVar8 == 0);
    uVar9 = (uint)lVar6;
  }
  if ((0x1c < unaff_w21) || (2 < uVar9)) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    unaff_w21 = FUN_02c2e76c();
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  *(undefined8 *)(unaff_x19 + 2) = in_stack_00000000;
  unaff_x19[1] = (uint)uVar1;
  *unaff_x19 = (*unaff_x19 ^ *unaff_x20) & 0x80000000 | unaff_w21 << 0x10;
LAB_02c2cbe4:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


