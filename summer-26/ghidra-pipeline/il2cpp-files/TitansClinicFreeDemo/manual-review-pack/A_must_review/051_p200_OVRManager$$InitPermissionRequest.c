/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 01f63238
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


int OVRManager__InitPermissionRequest(void)

{
  int iVar1;
  bool in_ZR;
  bool in_CY;
  int in_w8;
  
  iVar1 = -in_w8;
  if (in_CY && !in_ZR) {
    iVar1 = in_w8;
  }
  return iVar1;
}


