/*
FUNCTION_NAME: OVRManager$$GetCurrentInputSubsystem
ENTRY_POINT: 090852d4
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__GetCurrentInputSubsystem(undefined8 param_1)

{
  long unaff_x19;
  
  OVRManager__add_HMDAcquired(param_1,0);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


