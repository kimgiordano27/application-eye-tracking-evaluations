/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionDiscovery
ENTRY_POINT: 02c33e58
PROGRAM: sharks-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StopColocationSessionDiscovery
               (undefined8 param_1,undefined1 param_2 [16],undefined8 param_3)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x68) = param_1;
  *(long *)(unaff_x19 + 0x60) = param_2._8_8_;
  *(long *)(unaff_x19 + 0x58) = param_2._0_8_;
  thunk_FUN_0188fd20(param_3,0);
  return;
}


