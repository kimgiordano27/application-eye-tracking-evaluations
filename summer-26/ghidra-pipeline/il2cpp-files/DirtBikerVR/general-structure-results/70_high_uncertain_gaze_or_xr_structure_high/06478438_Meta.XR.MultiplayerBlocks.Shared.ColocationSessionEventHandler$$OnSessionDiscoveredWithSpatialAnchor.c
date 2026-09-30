/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionDiscoveredWithSpatialAnchor
ENTRY_POINT: 06478438
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionDiscoveredWithSpatialAnchor
               (void)

{
  long lVar1;
  long unaff_x21;
  
  lVar1 = FUN_03ac4090();
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0647846c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x50))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


