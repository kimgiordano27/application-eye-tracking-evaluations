/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 069281e0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRManager__SetOpenVRLocalPose
                (long *param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  float *pfVar1;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s14;
  float unaff_s15;
  
  pfVar1 = *(float **)(*param_1 + 0xb8);
  return unaff_s10 +
         *pfVar1 * ((unaff_s14 - param_4) * pfVar1[2] +
                   (unaff_s8 - unaff_s10) * *pfVar1 + (unaff_s15 - unaff_s9) * pfVar1[1]);
}


