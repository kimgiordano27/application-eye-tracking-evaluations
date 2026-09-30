/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$add_AnchorShareRequestCompleted
ENTRY_POINT: 06e5fc74
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


bool Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__add_AnchorShareRequestCompleted
               (long param_1)

{
  long in_x9;
  long in_x10;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  
                    /* try { // try from 06e5fc7c to 06f5fc7f has its CatchHandler @ 06e60058 */
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(in_x10 + param_1 * in_x9 + 0x40);
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x10));
                    /* try { // try from 06e5fca0 to 06f5fcaf has its CatchHandler @ 06e6003c */
  return unaff_w21 < unaff_w20;
}


