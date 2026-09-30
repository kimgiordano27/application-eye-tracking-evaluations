/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 02908214
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose
               (ulong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long unaff_x24;
  long *unaff_x25;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06ddaad8);
    *(undefined1 *)(unaff_x24 + 0xcbb) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_02908274(param_2,param_3,param_4);
  return;
}


