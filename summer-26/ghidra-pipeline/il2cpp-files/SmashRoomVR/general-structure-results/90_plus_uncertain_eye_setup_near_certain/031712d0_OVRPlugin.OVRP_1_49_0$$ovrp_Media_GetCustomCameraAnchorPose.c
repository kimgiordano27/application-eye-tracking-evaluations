/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCustomCameraAnchorPose
ENTRY_POINT: 031712d0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose
               (long param_1,undefined8 param_2,uint param_3)

{
  long in_x9;
  undefined4 in_s4;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (param_3 < *(uint *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + in_x9 * 4 + 0x20) = in_s4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


