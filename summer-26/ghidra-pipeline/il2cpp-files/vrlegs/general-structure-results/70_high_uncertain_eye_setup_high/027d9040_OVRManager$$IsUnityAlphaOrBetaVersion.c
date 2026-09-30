/*
FUNCTION_NAME: OVRManager$$IsUnityAlphaOrBetaVersion
ENTRY_POINT: 027d9040
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRManager__IsUnityAlphaOrBetaVersion(void)

{
  long unaff_x19;
  undefined8 in_stack_00000010;
  
  __cxa_end_catch();
  if (in_stack_00000010._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x19 == 0) {
    FUN_027d9a54(&stack0x00000018);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


