/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 03647de0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__PrepareHeadDirection(undefined8 param_1)

{
  long unaff_x19;
  
  FUN_036680bc();
  *(undefined8 *)(unaff_x19 + 0x30) = param_1;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x30),param_1);
  thunk_FUN_0406f928();
  return;
}


