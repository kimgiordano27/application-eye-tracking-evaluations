/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 06ab93b0
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerPose(ulong param_1)

{
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083dfd88,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x20 + 0x1bf) = 1;
  }
  FUN_05bb5c94();
  return;
}


