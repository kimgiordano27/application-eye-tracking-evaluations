/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0382ab9c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0382ac30) */

void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_EyeGazeState>(void)

{
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  
  thunk_FUN_036a1978();
  FUN_0382ac84();
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_05d32748(&stack0x00000008,0,0,0);
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
  thunk_FUN_036b7ad0(unaff_x19 + 0x10,0);
  if (*(int *)(*(long *)PTR_DAT_079fb4f8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_05e51188();
  if (in_stack_00000030._4_1_ != '\0') {
    thunk_FUN_036509ac(*in_stack_00000028,0);
  }
  return;
}


