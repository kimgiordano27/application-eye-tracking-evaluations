/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 031379c4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetOpenVRLocalPose
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  long unaff_x19;
  undefined4 unaff_s10;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float in_s21;
  
  *(undefined4 *)(unaff_x19 + 8) = unaff_s10;
  *(float *)(unaff_x19 + 0xc) = (in_s18 + in_s16 + in_s17) - in_s19;
  *(float *)(unaff_x19 + 0x10) = (param_3 * param_5 + in_s20 + in_s21) - param_1 * param_7;
  *(float *)(unaff_x19 + 0x14) =
       (param_1 * param_6 + param_4 * param_7 + param_3 * param_8) - param_2 * param_5;
  *(float *)(unaff_x19 + 0x18) =
       ((param_4 * param_8 - param_1 * param_5) - param_2 * param_6) - param_3 * param_7;
  return;
}


