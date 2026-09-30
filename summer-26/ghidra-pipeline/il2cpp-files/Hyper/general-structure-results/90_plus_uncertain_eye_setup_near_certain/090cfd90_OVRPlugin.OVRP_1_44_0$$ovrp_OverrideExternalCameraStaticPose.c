/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraStaticPose
ENTRY_POINT: 090cfd90
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraStaticPose(void)

{
  long lVar1;
  long unaff_x19;
  
                    /* try { // try from 090cfd90 to 091cfdb7 has its CatchHandler @ 090cff80 */
  FUN_0a1f931c();
  FUN_0a1f961c();
  FUN_0a1f94a4();
  FUN_0a1f96e0();
  lVar1 = FUN_0a17834c();
  if (lVar1 != 0) {
    FUN_0a18ac70();
    FUN_0a17834c();
                    /* try { // try from 090cfdf4 to 091cfe1b has its CatchHandler @ 090cff7c */
    FUN_0903b848();
    FUN_0a1f9f88();
    lVar1 = FUN_0a178414();
    if (lVar1 != 0) {
      FUN_0a17ba14(lVar1,0,0);
      lVar1 = FUN_0a178414();
      if (lVar1 != 0) {
        FUN_0a17b958(lVar1,*(undefined4 *)(unaff_x19 + 0x4c),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


