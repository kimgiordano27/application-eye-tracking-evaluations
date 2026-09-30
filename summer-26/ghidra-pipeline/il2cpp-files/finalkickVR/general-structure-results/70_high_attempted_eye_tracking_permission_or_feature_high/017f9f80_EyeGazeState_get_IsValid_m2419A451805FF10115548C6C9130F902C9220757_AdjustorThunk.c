/*
FUNCTION_NAME: EyeGazeState_get_IsValid_m2419A451805FF10115548C6C9130F902C9220757_AdjustorThunk
ENTRY_POINT: 017f9f80
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


byte EyeGazeState_get_IsValid_m2419A451805FF10115548C6C9130F902C9220757_AdjustorThunk
               (long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = EyeGazeState_get_IsValid_m2419A451805FF10115548C6C9130F902C9220757(param_1 + 0x10,param_2)
  ;
  return bVar1 & 1;
}


