/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_reset_focus_t$$Dispose
ENTRY_POINT: 0850e8d0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_vx_req_sessiongroup_reset_focus_t__Dispose(undefined1 param_1 [16])

{
  long unaff_x20;
  
  *(long *)(unaff_x20 + 0x18) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x10) = param_1._0_8_;
  thunk_FUN_03d1023c(unaff_x20 + 0x10,0);
  return;
}


