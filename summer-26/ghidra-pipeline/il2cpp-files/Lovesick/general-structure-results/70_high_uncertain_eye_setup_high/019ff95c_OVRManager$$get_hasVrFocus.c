/*
FUNCTION_NAME: OVRManager$$get_hasVrFocus
ENTRY_POINT: 019ff95c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_hasVrFocus
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],long param_5)

{
  *(long *)(param_5 + 0x80) = param_3._8_8_;
  *(long *)(param_5 + 0x78) = param_3._0_8_;
  *(long *)(param_5 + 0x90) = param_4._8_8_;
  *(long *)(param_5 + 0x88) = param_4._0_8_;
  *(undefined8 *)(param_5 + 0x98) = param_1;
  thunk_FUN_0268a01c();
  return;
}


