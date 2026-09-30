/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 0567c830
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StartEyeTracking(undefined4 param_1)

{
  undefined4 in_w8;
  long in_x9;
  
  *(undefined4 *)(in_x9 + 0x10) = param_1;
  *(undefined4 *)(in_x9 + 0x14) = in_w8;
  return;
}


