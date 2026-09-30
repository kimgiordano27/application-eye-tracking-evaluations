/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSeatPoseDebugger>b__82_2
ENTRY_POINT: 04de33a4
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


long Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSeatPoseDebugger>b__82_2(void)

{
  long lVar1;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  lVar1 = FUN_02f41e9c();
  if (*(long *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02f41ef8();
  }
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  return unaff_x20 + unaff_w19 + 2;
}


