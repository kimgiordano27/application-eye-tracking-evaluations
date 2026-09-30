/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$OnColocationSessionFound
ENTRY_POINT: 028ffd54
PROGRAM: sharks-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__OnColocationSessionFound
               (long param_1,long param_2)

{
  long in_x9;
  
  return *(long *)(param_1 + in_x9 * 8 + -8) == param_2;
}


