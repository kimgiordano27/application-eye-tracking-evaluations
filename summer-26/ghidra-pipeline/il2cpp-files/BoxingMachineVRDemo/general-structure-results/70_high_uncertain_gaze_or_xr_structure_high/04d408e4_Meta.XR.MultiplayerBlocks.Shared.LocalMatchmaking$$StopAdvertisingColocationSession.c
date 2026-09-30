/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopAdvertisingColocationSession
ENTRY_POINT: 04d408e4
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


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopAdvertisingColocationSession
               (undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  
  lVar2 = FUN_02d9a2e0(param_1);
  pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x268);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0(*(long *)(unaff_x20 + 0x20));
  }
  uVar1 = (*pcVar3)();
  FUN_05004840(&stack0x0000000c,uVar1,0);
  return;
}


