/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 07404f2c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose
               (long param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
               float param_6,long param_7)

{
  int in_w9;
  float fVar1;
  
  param_4 = param_4 / ((param_4 / param_3) / param_6 + param_4);
  if (in_w9 == 0) {
    fVar1 = *(float *)(param_1 + 0x18);
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 0;
    fVar1 = param_2;
  }
  fVar1 = param_4 * param_2 + (1.0 - param_4) * fVar1;
  *(float *)(param_1 + 0x14) = fVar1;
  *(float *)(param_1 + 0x18) = fVar1;
  *(float *)(param_7 + 0x10) = fVar1;
  return;
}


