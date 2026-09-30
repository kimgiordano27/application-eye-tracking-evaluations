/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 03217660
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_rotation(void)

{
  long unaff_x26;
  long unaff_x29;
  
  FUN_0321f874();
  FUN_025eb0d0(unaff_x29 + -0x120,0);
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


