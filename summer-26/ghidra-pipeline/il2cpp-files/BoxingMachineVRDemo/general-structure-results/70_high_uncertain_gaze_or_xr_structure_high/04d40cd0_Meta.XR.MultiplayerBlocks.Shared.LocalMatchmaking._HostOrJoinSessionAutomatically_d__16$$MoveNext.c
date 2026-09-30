/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<HostOrJoinSessionAutomatically>d__16$$MoveNext
ENTRY_POINT: 04d40cd0
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


undefined8
Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<HostOrJoinSessionAutomatically>d__16__MoveNext
          (undefined8 param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ushort *in_x9;
  long unaff_x20;
  code *pcVar4;
  
  pcVar4 = (code *)**(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x248);
  if ((*in_x9 & 1) == 0) {
    FUN_02d9a2e0(param_1);
  }
  (*pcVar4)();
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar2 + 0x135);
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_02d9a2e0(lVar2);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar4 = (code *)**(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x90);
  if ((uVar1 & 1) == 0) {
    FUN_02d9a2e0(lVar3);
  }
  (*pcVar4)();
  FUN_06013f40();
  return 0;
}


