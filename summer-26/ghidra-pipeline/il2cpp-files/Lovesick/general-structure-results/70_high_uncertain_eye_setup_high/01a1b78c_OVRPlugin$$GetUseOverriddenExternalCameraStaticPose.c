/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 01a1b78c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetUseOverriddenExternalCameraStaticPose(long param_1,undefined8 param_2)

{
  bool in_CY;
  long in_x9;
  long in_x10;
  
  if (in_CY) {
    if (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) != param_1) {
      param_2 = 0;
    }
  }
  else {
    param_2 = 0;
  }
  return param_2;
}


