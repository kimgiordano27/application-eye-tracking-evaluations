/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$SendAnchorShareRequest
ENTRY_POINT: 06e60694
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


bool Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__SendAnchorShareRequest(void)

{
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  
  *(uint *)(unaff_x19 + 8) = unaff_w20 + 1;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
                    /* try { // try from 06e606a8 to 06f606ab has its CatchHandler @ 06e60c74 */
  return unaff_w21 < unaff_w20;
}


