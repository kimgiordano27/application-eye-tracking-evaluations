/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$add_OnSessionListUpdated
ENTRY_POINT: 052f09f0
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__add_OnSessionListUpdated(void)

{
  long unaff_x19;
  long unaff_x20;
  
  thunk_FUN_02ef1808();
  FUN_04754a8c();
  if (unaff_x20 != 0) {
    FUN_0475e530();
    *(undefined4 *)(unaff_x19 + 0x74) = 0;
    *(undefined4 *)(unaff_x19 + 0x98) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


