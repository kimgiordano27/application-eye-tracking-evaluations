/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 05da5498
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose(void)

{
  long unaff_x20;
  long *unaff_x21;
  
  thunk_FUN_032e1da0(PTR_DAT_072b1a48);
  *(undefined1 *)(unaff_x20 + 0xb90) = 1;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_05da54d0();
  FUN_05d926b8();
  return;
}


