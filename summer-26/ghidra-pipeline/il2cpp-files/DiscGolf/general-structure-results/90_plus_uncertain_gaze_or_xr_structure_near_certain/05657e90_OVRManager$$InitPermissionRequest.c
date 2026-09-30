/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 05657e90
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  long unaff_x19;
  
  *(long *)(unaff_x19 + 0x28) = param_1._8_8_;
  *(long *)(unaff_x19 + 0x20) = param_1._0_8_;
  *(long *)(unaff_x19 + 0x38) = param_3._8_8_;
  *(long *)(unaff_x19 + 0x30) = param_3._0_8_;
  return;
}


