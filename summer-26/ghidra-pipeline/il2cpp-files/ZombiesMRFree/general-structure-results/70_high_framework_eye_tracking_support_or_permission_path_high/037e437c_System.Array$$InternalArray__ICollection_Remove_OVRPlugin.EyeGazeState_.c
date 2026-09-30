/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 037e437c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 in_stack_00000060;
  
  puVar1 = PTR_DAT_06f8ea50;
  if ((DAT_073917e2 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f8ea50);
    DAT_073917e2 = 1;
  }
  in_stack_00000060 = *(undefined4 *)(param_3 + 4);
  in_stack_00000048 = param_3[1];
  in_stack_00000040 = *param_3;
  in_stack_00000058 = param_3[3];
  in_stack_00000050 = param_3[2];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_037d3348(&stack0x00000028,param_2);
  param_1[2] = in_stack_00000038;
  param_1[1] = in_stack_00000030;
  *param_1 = in_stack_00000028;
  return;
}


