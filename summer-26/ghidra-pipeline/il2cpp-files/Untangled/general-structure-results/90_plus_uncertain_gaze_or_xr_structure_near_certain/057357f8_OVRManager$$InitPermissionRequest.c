/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 057357f8
PROGRAM: Untangled-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRManager__InitPermissionRequest(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  *unaff_x19 = param_2;
  thunk_FUN_02f411dc();
  return unaff_x20 != 0;
}


