/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0361b50c
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_02ef1808();
                    /* try { // try from 0361b518 to 0371b51b has its CatchHandler @ 0361b528 */
  uVar2 = thunk_FUN_02f239f0(PTR_DAT_06d36bb0);
                    /* catch() { ... } // from try @ 0361b518 with catch @ 0361b528 */
  FUN_056130c0(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0361b538 to 0371b53f has its CatchHandler @ 0361b554 */
  FUN_02f07f94(uVar1);
}


