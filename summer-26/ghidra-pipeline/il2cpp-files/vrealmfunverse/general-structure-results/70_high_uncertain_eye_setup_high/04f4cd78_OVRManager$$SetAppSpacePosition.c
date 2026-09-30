/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 04f4cd78
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__SetAppSpacePosition(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x21 + 0x20);
  *(long *)(unaff_x20 + 0x40) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x38) = param_1._0_8_;
  *(long *)(unaff_x20 + 0x30) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x28) = param_2._0_8_;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x19;
  thunk_FUN_02bb0e9c();
  return 1;
}


