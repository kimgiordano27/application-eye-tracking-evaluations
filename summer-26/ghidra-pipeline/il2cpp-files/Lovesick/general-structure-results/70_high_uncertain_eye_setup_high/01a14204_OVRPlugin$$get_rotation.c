/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 01a14204
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_rotation(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 *unaff_x19;
  
  unaff_x19[1] = param_1._8_8_;
  *unaff_x19 = param_1._0_8_;
  *(long *)((long)unaff_x19 + 0x14) = param_2._8_8_;
  *(long *)((long)unaff_x19 + 0xc) = param_2._0_8_;
  return;
}


