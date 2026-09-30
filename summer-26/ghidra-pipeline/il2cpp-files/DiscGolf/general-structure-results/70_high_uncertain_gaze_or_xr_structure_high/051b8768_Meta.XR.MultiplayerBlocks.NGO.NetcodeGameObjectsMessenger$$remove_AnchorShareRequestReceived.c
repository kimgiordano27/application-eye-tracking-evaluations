/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.NetcodeGameObjectsMessenger$$remove_AnchorShareRequestReceived
ENTRY_POINT: 051b8768
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_NGO_NetcodeGameObjectsMessenger__remove_AnchorShareRequestReceived
               (ulong param_1,long param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack000000000000002c;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000038 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02dcfd18();
  }
  uVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x28),&stack0x00000038);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_02dcfd18(lVar4);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
  }
  uStack000000000000002c = *(undefined4 *)(unaff_x20 + 0x18);
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02dcfd18(lVar4);
  }
  uVar3 = thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x30),&stack0x0000002c);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  FUN_05488220(&stack0x00000018,uVar2,uVar3,0);
  thunk_FUN_02dd2d7c(DAT_06b320a0);
  return;
}


