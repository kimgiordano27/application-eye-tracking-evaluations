/*
FUNCTION_NAME: OVRManager$$set_isUserPresent
ENTRY_POINT: 027d8a98
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x027d8b10) */

void OVRManager__set_isUserPresent(void)

{
  long unaff_x20;
  long lVar1;
  undefined8 in_stack_00000008;
  
  FUN_027e0bd8();
  lVar1 = *(long *)(unaff_x20 + 0x18);
  thunk_FUN_01a4b338();
  if (lVar1 != 0) {
    lVar1 = *(long *)(unaff_x20 + 0x18);
    thunk_FUN_01a4b338();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027de940(lVar1,0);
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


