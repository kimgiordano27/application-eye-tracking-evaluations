/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger.<>c$$<GetClosestSeatPoseDebugger>b__82_1
ENTRY_POINT: 04de4a28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<>c__<GetClosestSeatPoseDebugger>b__82_1(long param_1)

{
  int iVar1;
  long unaff_x19;
  undefined2 *unaff_x20;
  long unaff_x21;
  undefined2 unaff_w22;
  long lVar2;
  
  *unaff_x20 = unaff_w22;
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02f41e9c();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x60);
  if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  if (DAT_06bb79d4 == '\0') {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb79d4 = '\x01';
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x128);
  if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  if (DAT_06bb79d1 == '\0') {
    FUN_02f08768(PTR_DAT_067ca1b0);
    DAT_06bb79d1 = '\x01';
  }
  lVar2 = *(long *)(lVar2 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c();
  }
  if (*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  iVar1 = FUN_04de3020();
  FUN_0609bf0c(unaff_x20 + 1,unaff_x19 + 2,(long)iVar1,0);
  return 0;
}


