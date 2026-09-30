/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$add_AnchorShareRequestReceived
ENTRY_POINT: 052f8468
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


void Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__add_AnchorShareRequestReceived
               (void)

{
  long lVar1;
  long lVar2;
  long *unaff_x23;
  
  lVar2 = **(long **)(*unaff_x23 + 0xb8);
  lVar1 = FUN_066c67b0();
  if ((lVar1 != 0) && (FUN_066d48c0(lVar1,0), lVar2 != 0)) {
    FUN_052a04c0(lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


