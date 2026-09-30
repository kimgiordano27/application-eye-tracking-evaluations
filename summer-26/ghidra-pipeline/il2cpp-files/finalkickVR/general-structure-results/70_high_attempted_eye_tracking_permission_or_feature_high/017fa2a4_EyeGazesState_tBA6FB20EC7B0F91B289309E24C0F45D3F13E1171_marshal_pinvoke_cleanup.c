/*
FUNCTION_NAME: EyeGazesState_tBA6FB20EC7B0F91B289309E24C0F45D3F13E1171_marshal_pinvoke_cleanup
ENTRY_POINT: 017fa2a4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void EyeGazesState_tBA6FB20EC7B0F91B289309E24C0F45D3F13E1171_marshal_pinvoke_cleanup(long *param_1)

{
  if (*param_1 != 0) {
    il2cpp_codegen_marshal_free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}


