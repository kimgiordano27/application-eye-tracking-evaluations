/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 02fcfc68
PROGRAM: vrfs-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpacePosition(long param_1)

{
  thunk_FUN_0159f088(*(undefined8 *)(param_1 + 0x68));
  FUN_0321bdf8();
  thunk_FUN_0159f088(PTR_DAT_06d94c70);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c();
}


