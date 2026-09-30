/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetClosestSeatPoseDebugger
ENTRY_POINT: 06e3a7ec
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


undefined1  [16] Meta_XR_MRUtilityKit_SceneDebugger__GetClosestSeatPoseDebugger(long param_1)

{
  undefined1 auVar1 [16];
  ushort *in_x9;
  long unaff_x19;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x20);
  if ((*in_x9 & 1) == 0) {
    param_1 = FUN_03d8f26c(param_1);
  }
  thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x30),&stack0x0000000c);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  FUN_07143704(&stack0x00000020);
  auVar1._8_8_ = in_stack_00000028;
  auVar1._0_8_ = in_stack_00000020;
  return auVar1;
}


