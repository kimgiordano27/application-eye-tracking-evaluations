/*
FUNCTION_NAME: OVRManager$$remove_InputFocusAcquired
ENTRY_POINT: 06365014
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_InputFocusAcquired(void)

{
  undefined8 *puVar1;
  long unaff_x23;
  
  puVar1 = (undefined8 *)FUN_0377596c();
  (*(code *)*puVar1)();
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0381d6e4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7ac();
}


