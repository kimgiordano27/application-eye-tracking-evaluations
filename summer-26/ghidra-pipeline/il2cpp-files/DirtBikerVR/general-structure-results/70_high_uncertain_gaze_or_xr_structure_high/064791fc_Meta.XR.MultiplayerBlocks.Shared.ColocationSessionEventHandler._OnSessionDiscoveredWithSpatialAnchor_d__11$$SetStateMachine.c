/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpatialAnchor>d__11$$SetStateMachine
ENTRY_POINT: 064791fc
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


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11__SetStateMachine
               (long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090(lVar2);
  }
  uVar1 = thunk_FUN_03ac74bc(lVar2);
  System_Collections_Generic_List<CombineClass>__Find
            (uVar1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x88));
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x10),uVar1);
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  uVar1 = thunk_FUN_03ac74bc();
  FUN_05f9f7c4(uVar1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x90));
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x18),uVar1);
  FUN_0679343c(param_1,0);
  return;
}


