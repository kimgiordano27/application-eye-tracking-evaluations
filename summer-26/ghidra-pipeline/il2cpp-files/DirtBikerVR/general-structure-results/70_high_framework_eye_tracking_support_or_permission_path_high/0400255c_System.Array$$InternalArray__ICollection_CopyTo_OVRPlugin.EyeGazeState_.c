/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0400255c
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


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_EyeGazeState>(void)

{
  long unaff_x20;
  void *unaff_x22;
  undefined8 in_stack_00000068;
  
  memcpy(&stack0x00000000,unaff_x22,0x50);
  thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8));
  FUN_0666fc48();
  FUN_0666da78();
  return;
}


