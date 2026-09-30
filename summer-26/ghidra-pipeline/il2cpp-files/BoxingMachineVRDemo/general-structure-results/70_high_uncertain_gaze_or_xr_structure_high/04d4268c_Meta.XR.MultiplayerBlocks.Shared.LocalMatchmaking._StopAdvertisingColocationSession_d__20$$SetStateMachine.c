/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__20$$SetStateMachine
ENTRY_POINT: 04d4268c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined1  [16]
Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__20__SetStateMachine
          (long param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined1 auVar5 [16];
  
  uVar1 = *unaff_x19;
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02d9a2e0();
  }
  auVar5 = FUN_03354428(uVar1,unaff_w21,0,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xf0));
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  uVar4 = FUN_034903a8(auVar5._0_8_,auVar5._8_8_,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x100));
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0(lVar3);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x60);
  if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  if (DAT_06b7795f == '\0') {
    FUN_02d6084c(PTR_DAT_067680f8);
    DAT_06b7795f = '\x01';
  }
  lVar3 = *(long *)(lVar3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  if (*(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  iVar2 = FUN_04d41554();
  FUN_06013f40(uVar4,unaff_x19 + 1,(long)iVar2,0);
  return auVar5;
}


