/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetClosestSeatPoseDebugger
ENTRY_POINT: 08a636d4
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_SceneDebugger__GetClosestSeatPoseDebugger(void)

{
  undefined8 *unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  FUN_08c81b38(&stack0x00000008,0);
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  thunk_FUN_049ee3d8((ulong)&stack0x00000020 | 8,0);
  thunk_FUN_049ee3d8(&stack0x00000040);
  in_stack_00000020 = 0xffffffff;
  FUN_05a3c268((ulong)&stack0x00000020 | 8,&stack0x00000020,*unaff_x20);
                    /* try { // try from 08a63730 to 08b6373b has its CatchHandler @ 08a63aa0 */
  FUN_08c7f8c8((ulong)&stack0x00000020 | 8,0);
  return;
}


