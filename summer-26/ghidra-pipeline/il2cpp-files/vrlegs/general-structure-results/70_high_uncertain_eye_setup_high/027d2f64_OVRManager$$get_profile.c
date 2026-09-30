/*
FUNCTION_NAME: OVRManager$$get_profile
ENTRY_POINT: 027d2f64
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_profile(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x20;
  int in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_01a58e78();
  }
  if ((DAT_04124fb8 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc5358);
    DAT_04124fb8 = 1;
  }
  if (in_stack_00000008 < 0) {
    if (0 < -in_stack_00000010) goto LAB_027d2fcc;
  }
  else if (in_stack_00000010 < 0) {
LAB_027d2fcc:
    thunk_FUN_01a6ca08(PTR_DAT_03cd7398);
    uVar1 = thunk_FUN_01a89e68();
    uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cfa078);
    FUN_0277bb94(uVar1,uVar2,0);
    uVar2 = thunk_FUN_01a6ca08(PTR_DAT_03cfcad0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar1,uVar2);
  }
  if (*(long *)(unaff_x20 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


