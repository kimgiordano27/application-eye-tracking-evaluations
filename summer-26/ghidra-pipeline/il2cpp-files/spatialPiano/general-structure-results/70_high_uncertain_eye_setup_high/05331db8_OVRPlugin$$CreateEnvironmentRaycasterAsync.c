/*
FUNCTION_NAME: OVRPlugin$$CreateEnvironmentRaycasterAsync
ENTRY_POINT: 05331db8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateEnvironmentRaycasterAsync(void)

{
  if (DAT_06bbb328 == (code *)0x0) {
    DAT_06bbb328 = (code *)thunk_FUN_02f454a0();
  }
  (*DAT_06bbb328)();
  return;
}


