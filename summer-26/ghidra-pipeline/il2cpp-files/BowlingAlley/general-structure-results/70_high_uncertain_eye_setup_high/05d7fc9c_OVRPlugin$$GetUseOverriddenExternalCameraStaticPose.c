/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 05d7fc9c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetUseOverriddenExternalCameraStaticPose
                (float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
                float param_5,undefined1 param_6 [16],float param_7)

{
  float in_s17;
  float in_s22;
  float in_s24;
  
  return (in_s17 * param_7 + param_3 + in_s22 * param_5) - in_s24 * param_1;
}


