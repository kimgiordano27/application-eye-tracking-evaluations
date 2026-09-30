/*
FUNCTION_NAME: OVRManager$$InitPermissionRequest
ENTRY_POINT: 02fcb590
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__InitPermissionRequest(ulong param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_015c2790();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_015c2790();
  }
  thunk_FUN_01656ef8(*(undefined8 *)(lVar1 + 0xb8));
  return;
}


