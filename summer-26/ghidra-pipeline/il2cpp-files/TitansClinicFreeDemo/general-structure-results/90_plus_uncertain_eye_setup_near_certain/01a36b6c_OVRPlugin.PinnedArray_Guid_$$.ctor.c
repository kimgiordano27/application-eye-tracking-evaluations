/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$.ctor
ENTRY_POINT: 01a36b6c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin_PinnedArray<Guid>___ctor(long param_1)

{
  long unaff_x21;
  uint unaff_w22;
  
  if (unaff_w22 < *(uint *)(param_1 + 0x18)) {
    return *(undefined1 (*) [16])(param_1 + unaff_x21 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


