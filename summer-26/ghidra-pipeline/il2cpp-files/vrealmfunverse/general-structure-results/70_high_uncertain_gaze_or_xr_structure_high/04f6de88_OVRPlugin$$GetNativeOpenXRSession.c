/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRSession
ENTRY_POINT: 04f6de88
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin__GetNativeOpenXRSession(void)

{
  long unaff_x21;
  float fVar1;
  float unaff_s8;
  float fVar2;
  
  FUN_02b3c81c(PTR_DAT_06312438);
  *(undefined1 *)(unaff_x21 + 0xd97) = 1;
  fVar2 = **(float **)(*(long *)PTR_DAT_06312438 + 0xb8);
  fVar1 = (float)FUN_04f6d5f8();
  return unaff_s8 + fVar2 * fVar1;
}


