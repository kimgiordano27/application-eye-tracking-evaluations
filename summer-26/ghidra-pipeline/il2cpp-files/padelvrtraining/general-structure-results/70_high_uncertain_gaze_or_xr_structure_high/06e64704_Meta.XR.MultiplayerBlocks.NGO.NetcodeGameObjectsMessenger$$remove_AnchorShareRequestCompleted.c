/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.NetcodeGameObjectsMessenger$$remove_AnchorShareRequestCompleted
ENTRY_POINT: 06e64704
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


void Meta_XR_MultiplayerBlocks_NGO_NetcodeGameObjectsMessenger__remove_AnchorShareRequestCompleted
               (void)

{
  ushort uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_03d8f26c();
    lVar2 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar2 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_03d8f26c();
  }
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x30));
  return;
}


