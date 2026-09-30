/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 06abeb78
PROGRAM: Waifu-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetUseOverriddenExternalCameraStaticPose(void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_06abebac();
  lVar1 = *(long *)(unaff_x19 + 0x78);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06abeb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


