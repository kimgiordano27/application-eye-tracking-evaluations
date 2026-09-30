/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 0908231c
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetRotation(undefined1 param_1 [16],undefined1 param_2 [16])

{
  long unaff_x19;
  long unaff_x20;
  
  *(long *)(unaff_x19 + 0xa0) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x98) = param_1._0_8_;
  *(long *)(unaff_x19 + 0xac) = param_2._8_8_;
  *(long *)(unaff_x19 + 0xa4) = param_2._0_8_;
  FUN_0a17da7c();
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x20 + 0xe8),0);
  return;
}


