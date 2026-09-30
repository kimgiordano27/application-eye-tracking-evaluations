/*
FUNCTION_NAME: OVRPlugin$$get_hasInputFocus
ENTRY_POINT: 0693da0c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_hasInputFocus(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0xf0), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0xe8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


