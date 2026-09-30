/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03f639d0
PROGRAM: vandalizer-libil2cpp.so
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
  FUN_05e1e4ac(&stack0x0000000c,0,param_2,*(undefined8 *)(param_1 + 8));
  FUN_05c94b84();
  return;
}


