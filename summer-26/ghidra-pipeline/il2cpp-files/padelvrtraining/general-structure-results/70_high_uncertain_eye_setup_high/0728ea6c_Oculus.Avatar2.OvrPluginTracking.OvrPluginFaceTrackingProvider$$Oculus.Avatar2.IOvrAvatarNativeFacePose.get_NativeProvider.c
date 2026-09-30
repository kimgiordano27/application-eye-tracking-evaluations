/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginFaceTrackingProvider$$Oculus.Avatar2.IOvrAvatarNativeFacePose.get_NativeProvider
ENTRY_POINT: 0728ea6c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrPluginTracking_OvrPluginFaceTrackingProvider__Oculus_Avatar2_IOvrAvatarNativeFacePose_get_NativeProvider
               (void)

{
  undefined1 in_w8;
  byte unaff_w19;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x10) = in_w8;
  *(byte *)(unaff_x21 + 0x12) = unaff_w19 & 1;
  return;
}


