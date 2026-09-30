/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Awake
ENTRY_POINT: 04d39f68
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


undefined8 Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Awake(long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02d9a2e0();
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x188);
  if ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  if (DAT_06b77979 == '\0') {
    FUN_02d6084c(PTR_DAT_067680f8);
    DAT_06b77979 = '\x01';
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02d9a2e0();
  }
  if (*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  iVar1 = FUN_04d37f4c();
  FUN_06013f40(unaff_x19 + 4,unaff_x20 + 4,(long)iVar1,0);
  return 0;
}


