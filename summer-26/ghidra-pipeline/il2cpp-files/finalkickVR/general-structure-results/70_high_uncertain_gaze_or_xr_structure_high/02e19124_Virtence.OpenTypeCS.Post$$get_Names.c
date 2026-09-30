/*
FUNCTION_NAME: Virtence.OpenTypeCS.Post$$get_Names
ENTRY_POINT: 02e19124
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


byte Virtence_OpenTypeCS_Post__get_Names(void)

{
  byte bVar1;
  long unaff_x29;
  
  bVar1 = OVRPlugin_get_positionSupported_m0AD37A0C6351F659E5079BF3F99214A25425A10F();
  *(byte *)(unaff_x29 + -1) = bVar1 & 1;
  return *(byte *)(unaff_x29 + -1) & 1;
}


