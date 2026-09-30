/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$OnColocationSessionFound
ENTRY_POINT: 05303750
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__OnColocationSessionFound(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40),1,*(undefined8 *)(param_1 + 0x28))
    ;
  }
  *(undefined1 *)(unaff_x19 + 0x31) = 0;
  return;
}


