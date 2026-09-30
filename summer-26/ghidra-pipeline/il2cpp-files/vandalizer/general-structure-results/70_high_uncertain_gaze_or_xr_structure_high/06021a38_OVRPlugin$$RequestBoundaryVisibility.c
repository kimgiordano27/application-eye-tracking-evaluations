/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 06021a38
PROGRAM: vandalizer-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin__RequestBoundaryVisibility(void)

{
  undefined8 *puVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s11;
  
  puVar1 = (undefined8 *)FUN_0322c1e8();
  fVar2 = (float)(*(code *)*puVar1)();
  return unaff_s11 + unaff_s8 * fVar2;
}


