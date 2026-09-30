/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 060ce3b4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerPose
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  float fVar1;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
  
  param_4 = param_4 + param_2 + param_3;
  fVar1 = (param_7 - param_8) * unaff_s15 + param_5 * unaff_s14 + param_6 * unaff_s12;
  FUN_071aed50(unaff_s9 - (unaff_s14 * param_4) / param_1,unaff_s8 - (unaff_s12 * param_4) / param_1
               ,unaff_s10 - (unaff_s15 * param_4) / param_1,param_5 - (unaff_s14 * fVar1) / param_1,
               param_6 - (unaff_s12 * fVar1) / param_1,
               (param_7 - param_8) - (unaff_s15 * fVar1) / param_1,0);
  return;
}


