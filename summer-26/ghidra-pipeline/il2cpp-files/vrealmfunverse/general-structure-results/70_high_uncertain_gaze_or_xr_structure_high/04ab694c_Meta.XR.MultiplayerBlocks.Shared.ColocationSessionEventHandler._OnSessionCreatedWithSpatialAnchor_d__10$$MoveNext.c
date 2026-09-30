/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionCreatedWithSpatialAnchor>d__10$$MoveNext
ENTRY_POINT: 04ab694c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionCreatedWithSpatialAnchor>d__10__MoveNext
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_04d9e334(param_1,param_2,param_1,0,param_5,0);
  if (*unaff_x20 != 0) {
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    FUN_030a2c1c();
    *unaff_x19 = *unaff_x19 + -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


