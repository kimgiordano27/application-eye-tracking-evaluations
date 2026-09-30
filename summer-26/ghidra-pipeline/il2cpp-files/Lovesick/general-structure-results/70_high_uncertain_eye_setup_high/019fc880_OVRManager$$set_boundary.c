/*
FUNCTION_NAME: OVRManager$$set_boundary
ENTRY_POINT: 019fc880
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_boundary(void)

{
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_00d48444(System_EmptyArray<Type>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x891) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01300658();
  return;
}


