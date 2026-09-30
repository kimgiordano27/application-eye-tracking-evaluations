/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 04ac26c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
               (undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  void *__s;
  long unaff_x20;
  
  lVar2 = FUN_02b76218(param_1);
  uVar1 = *(uint *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0xfc);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218(*(long *)(unaff_x20 + 0x20));
  }
  FUN_02766590();
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  __s = (void *)thunk_FUN_02b9b29c();
  memset(__s,0,(ulong)uVar1);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  FUN_02761d30();
  return;
}


