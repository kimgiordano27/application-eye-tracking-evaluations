/*
FUNCTION_NAME: OVRPlugin$$SetExternalLayerDynresEnabled
ENTRY_POINT: 05bd5538
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


bool OVRPlugin__SetExternalLayerDynresEnabled(long param_1)

{
  int unaff_w20;
  
  if (unaff_w20 == 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_05be9d90(*(long *)(param_1 + 0x48),0);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  return unaff_w20 == 0;
}


