/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.NetcodeGameObjectsMessenger$$add_AnchorShareRequestCompleted
ENTRY_POINT: 051b8818
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


void Meta_XR_MultiplayerBlocks_NGO_NetcodeGameObjectsMessenger__add_AnchorShareRequestCompleted
               (ushort *param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  uVar2 = *param_1;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    FUN_02dcfd18();
    param_2 = *(long *)(unaff_x19 + 0x20);
    uVar2 = *(ushort *)(param_2 + 0x135);
  }
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  if ((uVar2 & 1) == 0) {
    param_2 = FUN_02dcfd18();
  }
  FUN_03e4a168(uVar4,&stack0x00000018,uVar1,*(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x38));
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
  return;
}


