/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 051dfec8
PROGRAM: hellodot-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionCreate
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long param_4)

{
  *(long *)(param_4 + 0x30) = param_2._8_8_;
  *(long *)(param_4 + 0x28) = param_2._0_8_;
  *(undefined8 *)(param_4 + 0x38) = param_3;
  FUN_05ef8078();
  return;
}


