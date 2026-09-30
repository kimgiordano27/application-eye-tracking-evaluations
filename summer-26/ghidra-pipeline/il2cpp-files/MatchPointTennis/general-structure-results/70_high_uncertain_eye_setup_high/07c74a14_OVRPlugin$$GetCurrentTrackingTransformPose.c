/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 07c74a14
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__GetCurrentTrackingTransformPose(long param_1)

{
  long unaff_x19;
  long unaff_x21;
  undefined4 uVar1;
  
                    /* try { // try from 07c74a1c to 07d74a2f has its CatchHandler @ 07c74b10 */
  uVar1 = (**(code **)(param_1 + 0x138))();
  if (unaff_x21 != 0) {
    *(undefined4 *)(unaff_x21 + 0xf0) = uVar1;
                    /* try { // try from 07c74a34 to 07d74a43 has its CatchHandler @ 07c74b0c */
    return *(undefined4 *)(unaff_x19 + 0xf0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


