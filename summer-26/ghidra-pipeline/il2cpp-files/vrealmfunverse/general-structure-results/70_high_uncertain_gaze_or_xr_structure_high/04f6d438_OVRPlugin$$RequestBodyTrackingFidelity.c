/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 04f6d438
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBodyTrackingFidelity(undefined8 *param_1)

{
  long unaff_x19;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 1);
  *(undefined8 *)(unaff_x19 + 0x10) = *param_1;
  *(undefined4 *)(unaff_x19 + 0x18) = uVar1;
  FUN_04dbdb8c();
  return;
}


