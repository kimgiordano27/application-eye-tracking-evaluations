/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 07406ba8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionStateChange
               (undefined4 param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  *(undefined4 *)(param_2 + 0xc) = param_4[4];
  *(undefined4 *)(param_2 + 0x10) = param_4[5];
  *(undefined4 *)(param_2 + 0x14) = param_4[6];
  *(undefined4 *)(param_2 + 0x18) = *param_4;
  *(undefined4 *)(param_2 + 0x1c) = param_4[1];
  *(undefined4 *)(param_2 + 0x20) = param_4[2];
  return;
}


