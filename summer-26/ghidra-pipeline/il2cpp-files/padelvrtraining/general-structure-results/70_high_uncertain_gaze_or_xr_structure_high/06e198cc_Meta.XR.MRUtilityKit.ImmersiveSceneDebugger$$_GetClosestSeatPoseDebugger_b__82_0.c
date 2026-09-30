/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSeatPoseDebugger>b__82_0
ENTRY_POINT: 06e198cc
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


undefined1  [16]
Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSeatPoseDebugger>b__82_0
          (long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  long unaff_x19;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_03d8f26c(param_1);
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_07143704(&stack0x00000010,param_2,*(undefined8 *)(unaff_x19 + 0x20),0);
  auVar1._8_8_ = in_stack_00000018;
  auVar1._0_8_ = in_stack_00000010;
  return auVar1;
}


