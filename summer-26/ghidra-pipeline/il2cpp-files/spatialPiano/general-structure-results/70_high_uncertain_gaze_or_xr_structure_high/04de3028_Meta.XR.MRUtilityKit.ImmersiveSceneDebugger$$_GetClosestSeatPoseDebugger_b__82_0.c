/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSeatPoseDebugger>b__82_0
ENTRY_POINT: 04de3028
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


undefined2
Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSeatPoseDebugger>b__82_0
          (undefined2 *param_1,long param_2)

{
  undefined2 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02f41e9c(lVar2);
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  uVar1 = *param_1;
  if ((*(ushort *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  return uVar1;
}


