/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.EyeGazeState>
ENTRY_POINT: 032fd24c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__Insert<OVRPlugin_EyeGazeState>(undefined8 param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 032fd254 to 033fd27b has its CatchHandler @ 032fd32c */
  uVar1 = thunk_FUN_02dfd288(&DAT_06baaea0);
  FUN_05453f78(param_1,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(param_1);
}


