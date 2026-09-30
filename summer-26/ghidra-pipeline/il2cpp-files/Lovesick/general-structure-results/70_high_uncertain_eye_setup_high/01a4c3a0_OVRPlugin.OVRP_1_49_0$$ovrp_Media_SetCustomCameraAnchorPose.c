/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 01a4c3a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose
               (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,uint param_5)

{
  long lVar1;
  
  if (DAT_0377b2e0 == (code *)0x0) {
    DAT_0377b2e0 = (code *)thunk_FUN_00d625b4();
  }
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = param_3 + 0x20;
  }
  (*DAT_0377b2e0)(param_1,param_2,lVar1,param_4,param_5 & 1);
  return;
}


