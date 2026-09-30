/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$get_MaxRaycastDistance
ENTRY_POINT: 08a7e78c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;weak_pose_support;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;weak_vector_component_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__get_MaxRaycastDistance(void)

{
  int in_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_05a4a634(unaff_x21 | 8,&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  FUN_08c7f818(unaff_x21 | 8,0);
  return;
}


