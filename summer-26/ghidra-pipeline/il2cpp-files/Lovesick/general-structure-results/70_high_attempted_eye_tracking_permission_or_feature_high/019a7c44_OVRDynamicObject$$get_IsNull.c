/*
FUNCTION_NAME: OVRDynamicObject$$get_IsNull
ENTRY_POINT: 019a7c44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRDynamicObject__get_IsNull(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    OVREyeGaze__Start(*(long *)(param_1 + 0x20),0);
    return;
  }
  return;
}


