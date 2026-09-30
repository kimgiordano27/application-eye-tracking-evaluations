/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 056823dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1 OVRPlugin__RequestBoundaryVisibility(void)

{
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = thunk_FUN_02df77f0();
  if (lVar1 != 0) {
    puVar2 = (undefined1 *)thunk_FUN_02dd328c();
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


