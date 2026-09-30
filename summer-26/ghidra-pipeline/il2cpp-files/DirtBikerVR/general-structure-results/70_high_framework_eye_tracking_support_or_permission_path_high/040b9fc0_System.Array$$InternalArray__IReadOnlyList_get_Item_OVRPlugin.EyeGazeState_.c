/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 040b9fc0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


byte System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>(ulong param_1)

{
  long unaff_x19;
  long *unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  byte unaff_w25;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  while ((param_1 & 1) == 0) {
    unaff_x22 = unaff_x22 + 1;
    unaff_w25 = unaff_x22 < unaff_x24;
    if (unaff_x24 == unaff_x22) break;
    memcpy(&stack0x00000030,(void *)(unaff_x23 + unaff_x22 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
    param_1 = FUN_07e238c4();
  }
  return unaff_w25 & 1;
}


