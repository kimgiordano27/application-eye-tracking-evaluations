/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StartAdvertisingColocationSession
ENTRY_POINT: 058252fc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StartAdvertisingColocationSession(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  
  uVar1 = thunk_FUN_0301080c();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4(lVar2);
  }
  FUN_0491f4f4(uVar1,0,0,1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x48));
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  **(undefined8 **)(lVar2 + 0xb8) = uVar1;
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  thunk_FUN_03048534(*(undefined8 *)(lVar2 + 0xb8),uVar1);
  return;
}


