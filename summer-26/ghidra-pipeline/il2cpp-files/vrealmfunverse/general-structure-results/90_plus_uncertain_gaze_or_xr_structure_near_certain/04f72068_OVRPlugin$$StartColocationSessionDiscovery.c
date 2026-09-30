/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 04f72068
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionDiscovery(ulong param_1)

{
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_UIElements_EventCallback<FocusEvent,_RuntimePanel>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0xb8b) = 1;
  }
  FUN_04aefb18();
  return;
}


