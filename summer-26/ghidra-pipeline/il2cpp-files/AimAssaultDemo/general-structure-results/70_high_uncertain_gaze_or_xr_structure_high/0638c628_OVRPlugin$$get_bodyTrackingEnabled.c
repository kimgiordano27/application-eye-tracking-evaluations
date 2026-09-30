/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 0638c628
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(void)

{
  long *unaff_x21;
  long unaff_x22;
  undefined1 auVar1 [16];
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  if (DAT_0825c65c == '\0') {
    FUN_0373b518(PTR_DAT_07d91f30);
    DAT_0825c65c = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_062a24d4();
  _in_stack_00000038 = FUN_062a2b1c();
  if (DAT_0825c65d == '\0') {
    FUN_0373b518(PTR_DAT_07d91f30);
    DAT_0825c65d = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  auVar1 = FUN_0629ec90(&stack0x00000038,0);
  FUN_0629f674(&stack0x00000020,auVar1._0_8_,auVar1._8_8_,0);
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


