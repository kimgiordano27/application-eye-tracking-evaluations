/*
FUNCTION_NAME: EyeGazeState_get_IsValid_m2419A451805FF10115548C6C9130F902C9220757
ENTRY_POINT: 02dcc6d8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


bool EyeGazeState_get_IsValid_m2419A451805FF10115548C6C9130F902C9220757(long param_1)

{
  return *(int *)(param_1 + 0x20) == 1;
}


