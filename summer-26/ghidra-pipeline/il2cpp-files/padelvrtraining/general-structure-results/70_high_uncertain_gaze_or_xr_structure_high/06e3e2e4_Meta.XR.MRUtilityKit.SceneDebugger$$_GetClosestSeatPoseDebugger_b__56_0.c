/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetClosestSeatPoseDebugger>b__56_0
ENTRY_POINT: 06e3e2e4
PROGRAM: padelvrtraining-libil2cpp.so
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
Meta_XR_MRUtilityKit_SceneDebugger__<GetClosestSeatPoseDebugger>b__56_0(undefined1 param_1 [16])

{
  long unaff_x19;
  
  *(long *)(unaff_x19 + 0x18) = param_1._8_8_;
  *(undefined8 *)(unaff_x19 + 0x10) = param_1._0_8_;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x10));
  *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
  return 1;
}


