/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 07c9e9a0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose(long param_1)

{
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xba8));
  *(undefined1 *)(unaff_x21 + 0x9be) = 1;
  if (*(long *)(unaff_x20 + 0x60) != 0) {
                    /* try { // try from 07c9e9cc to 07d9e9f7 has its CatchHandler @ 07c9eae8 */
    FUN_05badb74(*(long *)(unaff_x20 + 0x60),unaff_w19,*(undefined8 *)PTR_DAT_09f1eba8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


