/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_TestBoundaryPoint
ENTRY_POINT: 033ef458
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryPoint(void)

{
  int in_w8;
  long lVar1;
  ulong in_x9;
  int *piVar2;
  ulong in_x10;
  long in_x11;
  uint *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  uint uVar3;
  long unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000000;
  uint in_stack_00000008;
  undefined4 uStack000000000000000c;
  long in_stack_00000010;
  long in_stack_00000018;
  
  uStack000000000000000c = (undefined4)in_x10;
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
    in_x9 = (ulong)unaff_x19[1];
  }
  in_stack_00000010 = (in_x10 >> 0x20 | in_x11 << 0x20) + in_x9 * unaff_x20[1];
  lVar1 = in_stack_00000010;
  uVar3 = 5;
  in_stack_00000010._4_4_ = (int)((ulong)in_stack_00000010 >> 0x20);
  in_stack_00000010 = lVar1;
  if (in_stack_00000010._4_4_ == 0) {
    piVar2 = (int *)((long)&stack0x00000010 + 4);
    lVar1 = 5;
    do {
      piVar2 = piVar2 + -1;
      if (lVar1 == 0) {
        unaff_x19[0] = 0;
        unaff_x19[1] = 0;
        unaff_x19[2] = 0;
        unaff_x19[3] = 0;
        goto LAB_033ef5e0;
      }
      lVar1 = lVar1 + -1;
    } while (*piVar2 == 0);
    uVar3 = (uint)lVar1;
  }
  if ((0x1c < unaff_w21) || (2 < uVar3)) {
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    unaff_w21 = FUN_033f1594();
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  *(undefined8 *)(unaff_x19 + 2) = in_stack_00000000;
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = (*unaff_x19 ^ *unaff_x20) & 0x80000000 | unaff_w21 << 0x10;
LAB_033ef5e0:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


