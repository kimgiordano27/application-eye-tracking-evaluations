/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_IsControllerDrivenHandPosesEnabled
ENTRY_POINT: 05bf6c60
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_IsControllerDrivenHandPosesEnabled(void)

{
  undefined8 uVar1;
  uint unaff_w19;
  long unaff_x20;
  long lVar2;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (*(int *)(*(long *)PTR_DAT_070f13a0 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar1 = FUN_069e53e4(&stack0x00000010,0);
  if (lVar2 != 0) {
    if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)unaff_w19 * 0x1c;
      *(undefined4 *)(lVar2 + 0x38) = in_stack_00000028;
      *(undefined8 *)(lVar2 + 0x30) = in_stack_00000020;
      *(undefined8 *)(lVar2 + 0x28) = in_stack_00000018;
      *(undefined8 *)(lVar2 + 0x20) = in_stack_00000010;
      FUN_05bf6f84(uVar1,unaff_w19,*(undefined8 *)(unaff_x20 + 0x40));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


