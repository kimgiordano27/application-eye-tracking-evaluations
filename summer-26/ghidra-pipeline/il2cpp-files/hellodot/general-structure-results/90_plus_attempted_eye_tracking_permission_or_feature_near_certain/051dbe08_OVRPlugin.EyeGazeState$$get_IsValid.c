/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 051dbe08
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_EyeGazeState__get_IsValid(long param_1)

{
  int in_w9;
  
                    /* WARNING: Could not recover jumptable at 0x051dbe28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (long)(in_w9 + 0xb) * 0x10 + 0x138))();
  return;
}


