/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpatialAnchor>d__11$$MoveNext
ENTRY_POINT: 051c557c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined4
Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11__MoveNext
          (long param_1)

{
  long lVar1;
  undefined4 unaff_w19;
  long unaff_x21;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  FUN_051c4e48();
  return unaff_w19;
}


