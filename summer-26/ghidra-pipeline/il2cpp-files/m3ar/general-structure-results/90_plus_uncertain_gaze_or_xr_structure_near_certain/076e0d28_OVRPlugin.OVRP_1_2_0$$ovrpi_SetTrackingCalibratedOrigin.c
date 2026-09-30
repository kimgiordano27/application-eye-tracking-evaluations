/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 076e0d28
PROGRAM: m3ar-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin
                (float param_1,float param_2,float param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((param_4 & 1) != 0) {
    return INFINITY;
  }
  param_1 = (param_2 + param_3) * 0.5 - param_1;
  param_1 = param_1 + (float)(int)(param_1 / 360.0) * -360.0;
  fVar2 = 360.0;
  if (param_1 <= 360.0) {
    fVar2 = param_1;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = fVar2;
  }
  fVar2 = fVar1 + -360.0;
  if (fVar1 <= 180.0) {
    fVar2 = fVar1;
  }
  fVar2 = fVar2 + (float)(int)(fVar2 / 360.0) * -360.0;
  fVar1 = 360.0;
  if (fVar2 <= 360.0) {
    fVar1 = fVar2;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar1;
  }
  return fVar3;
}


