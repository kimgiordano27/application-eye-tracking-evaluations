/*
FUNCTION_NAME: OVRPlugin$$StartEyeTracking
ENTRY_POINT: 060e1760
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StartEyeTracking(code *param_1,undefined8 param_2)

{
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 3000) = param_2;
  (*param_1)(unaff_w21,unaff_w20);
  return;
}


