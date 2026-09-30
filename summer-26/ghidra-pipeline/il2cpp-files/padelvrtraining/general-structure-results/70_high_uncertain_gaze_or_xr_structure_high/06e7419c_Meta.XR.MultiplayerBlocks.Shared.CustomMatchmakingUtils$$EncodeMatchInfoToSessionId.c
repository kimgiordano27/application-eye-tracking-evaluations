/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmakingUtils$$EncodeMatchInfoToSessionId
ENTRY_POINT: 06e7419c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Shared_CustomMatchmakingUtils__EncodeMatchInfoToSessionId(void)

{
  undefined4 in_w8;
  long unaff_x19;
  uint unaff_w23;
  uint unaff_w24;
  
  *(undefined4 *)(unaff_x19 + 0xc) = in_w8;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  return unaff_w24 < unaff_w23;
}


