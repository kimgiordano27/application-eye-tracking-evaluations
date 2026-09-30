/*
FUNCTION_NAME: OVREyeGaze$$CalculateEyeRotation
ENTRY_POINT: 05129100
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__CalculateEyeRotation
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  *(undefined4 *)(param_5 + 0x18) = param_1;
  *(undefined4 *)(param_5 + 0x1c) = param_2;
  *(undefined4 *)(param_5 + 0x20) = param_3;
  *(undefined4 *)(param_5 + 0x24) = param_4;
  return;
}


