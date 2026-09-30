/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 04380e10
PROGRAM: vrfs-libil2cpp.so
SCORE: 76
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking(undefined8 param_1)

{
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x23;
  
  FUN_031dd848(param_1,unaff_w20,*(undefined8 *)(unaff_x23 + 0x10),0,unaff_w19,0);
  *(undefined4 *)(unaff_x23 + 0x18) = unaff_w19;
  return;
}


