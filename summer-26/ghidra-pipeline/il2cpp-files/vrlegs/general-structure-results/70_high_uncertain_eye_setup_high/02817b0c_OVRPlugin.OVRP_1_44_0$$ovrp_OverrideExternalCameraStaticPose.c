/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraStaticPose
ENTRY_POINT: 02817b0c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraStaticPose(long param_1)

{
  long unaff_x22;
  long in_stack_000000b8;
  
  (**(code **)(param_1 + 0x408))();
  if (*(long *)(unaff_x22 + 0x28) == in_stack_000000b8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


