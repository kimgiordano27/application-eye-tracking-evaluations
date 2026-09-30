/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 04de0440
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>
               (long param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  (*(code *)**(undefined8 **)(param_1 + 8))(param_2,*(undefined8 *)PTR_DAT_08f8b240);
  (*(code *)**(undefined8 **)(*(long *)(unaff_x23 + 0x38) + 0x18))(&stack0x00000008);
  unaff_x19[1] = in_stack_00000010;
  *unaff_x19 = in_stack_00000008;
  unaff_x19[2] = in_stack_00000018;
  return;
}


