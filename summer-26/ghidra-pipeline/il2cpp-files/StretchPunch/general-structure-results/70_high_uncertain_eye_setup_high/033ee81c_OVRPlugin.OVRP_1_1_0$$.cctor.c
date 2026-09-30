/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$.cctor
ENTRY_POINT: 033ee81c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  int in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  if ((DAT_044a6b30 & 1) == 0) {
    FUN_01d7d918(StringLiteral_1209);
    DAT_044a6b30 = 1;
  }
  if (in_stack_00000008 < 0) {
    if (0 < -in_stack_00000010) goto LAB_033ee87c;
  }
  else if (in_stack_00000010 < 0) {
LAB_033ee87c:
    thunk_FUN_01dd295c(StringLiteral_1150);
    uVar1 = thunk_FUN_01de27b8();
    uVar2 = thunk_FUN_01dd295c(StringLiteral_4787);
    FUN_03390704(uVar1,uVar2,0);
    uVar2 = thunk_FUN_01dd295c(StringLiteral_9342);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar1,uVar2);
  }
  if (*(long *)(unaff_x20 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


