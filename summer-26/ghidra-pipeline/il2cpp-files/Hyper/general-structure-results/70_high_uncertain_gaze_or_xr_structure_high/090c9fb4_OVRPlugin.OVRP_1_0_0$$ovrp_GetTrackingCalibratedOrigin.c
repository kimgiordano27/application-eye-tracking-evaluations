/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 090c9fb4
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5,uint param_6)

{
  int in_w9;
  
  *(undefined4 *)(param_5 + 0xfc) = param_3;
  *(undefined4 *)(param_5 + 0x100) = param_4;
  if (in_w9 != 0) {
    return;
  }
  *(undefined1 *)(param_5 + 0x105) = 1;
  FUN_090c9d0c(param_5 + 0x90,param_5 + 0x98,1,param_6 & 1);
  *(undefined8 *)(param_5 + 0x11c) = *(undefined8 *)(param_5 + 0x138);
  *(undefined8 *)(param_5 + 0x114) = *(undefined8 *)(param_5 + 0x130);
  return;
}


