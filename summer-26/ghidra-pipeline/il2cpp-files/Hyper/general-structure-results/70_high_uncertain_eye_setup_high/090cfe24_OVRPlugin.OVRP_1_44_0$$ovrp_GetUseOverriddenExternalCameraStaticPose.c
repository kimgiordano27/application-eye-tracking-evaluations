/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 090cfe24
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetUseOverriddenExternalCameraStaticPose(void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_0a17ba14();
  lVar1 = FUN_0a178414();
                    /* try { // try from 090cfe34 to 091cfe3b has its CatchHandler @ 090cff68 */
  if (lVar1 != 0) {
    FUN_0a17b958(lVar1,*(undefined4 *)(unaff_x19 + 0x4c),0);
                    /* try { // try from 090cfe48 to 091cfe4f has its CatchHandler @ 090cff64 */
                    /* try { // try from 090cfe50 to 091cfe57 has its CatchHandler @ 090cff60 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


