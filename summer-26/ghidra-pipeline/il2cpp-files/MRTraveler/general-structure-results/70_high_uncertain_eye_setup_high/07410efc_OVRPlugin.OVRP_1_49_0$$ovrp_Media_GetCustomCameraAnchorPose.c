/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCustomCameraAnchorPose
ENTRY_POINT: 07410efc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  if (DAT_0941ebb0 == (code *)0x0) {
    DAT_0941ebb0 = (code *)thunk_FUN_03cf54f0();
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x20;
  }
  (*DAT_0941ebb0)(param_1,lVar1,param_3);
  return;
}


