/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 07a687a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose
               (float param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5,
               float param_6)

{
  float in_w9;
  float fVar1;
  
  if (param_2 <= param_1) {
    param_5 = param_1 - param_2;
  }
  fVar1 = (float)NEON_fminnm(param_3 * param_5,param_6);
  FUN_0899be20((param_6 / param_2) * fVar1 * in_w9);
  return;
}


