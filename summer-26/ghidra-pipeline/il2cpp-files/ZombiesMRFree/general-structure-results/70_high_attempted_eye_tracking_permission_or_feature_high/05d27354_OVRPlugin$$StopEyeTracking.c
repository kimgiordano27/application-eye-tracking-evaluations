/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 05d27354
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


bool OVRPlugin__StopEyeTracking(void)

{
  undefined1 in_w8;
  long unaff_x19;
  int unaff_w20;
  
  *(undefined1 *)(unaff_x19 + 0x60) = in_w8;
  return unaff_w20 == 0;
}


