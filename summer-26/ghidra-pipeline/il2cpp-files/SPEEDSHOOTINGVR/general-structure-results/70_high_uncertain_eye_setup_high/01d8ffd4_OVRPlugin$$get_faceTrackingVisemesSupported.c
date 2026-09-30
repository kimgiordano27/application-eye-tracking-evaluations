/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingVisemesSupported
ENTRY_POINT: 01d8ffd4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_faceTrackingVisemesSupported(long param_1)

{
  long unaff_x19;
  
  if ((param_1 != 0) && (*(long *)(unaff_x19 + 0x68) != 0)) {
    thunk_FUN_01c50bfc(*(undefined8 *)(param_1 + 0x18),
                       *(undefined8 *)(*(long *)(unaff_x19 + 0x68) + 0x18),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


