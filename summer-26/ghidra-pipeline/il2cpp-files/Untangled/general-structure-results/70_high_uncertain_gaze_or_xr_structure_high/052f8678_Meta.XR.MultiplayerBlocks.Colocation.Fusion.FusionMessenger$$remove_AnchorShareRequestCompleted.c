/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$remove_AnchorShareRequestCompleted
ENTRY_POINT: 052f8678
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


void Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__remove_AnchorShareRequestCompleted
               (float param_1,float param_2)

{
  long unaff_x19;
  
  if (param_2 < param_1) {
    *(float *)(unaff_x19 + 0x40) = *(float *)(unaff_x19 + 0x2c) / (float)*(int *)(unaff_x19 + 0x24);
  }
  *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 100);
  *(undefined4 *)(unaff_x19 + 0x50) = *(undefined4 *)(unaff_x19 + 0x6c);
  return;
}


