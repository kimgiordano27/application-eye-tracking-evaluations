/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 052c73dc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__get_Current(ulong param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_031c09d4();
  }
                    /* try { // try from 052c73e4 to 053c73f3 has its CatchHandler @ 052c73f4 */
  if (*unaff_x20 == 0) {
                    /* catch() { ... } // from try @ 052c738c with catch @ 052c73f4
                       catch() { ... } // from try @ 052c73e4 with catch @ 052c73f4 */
    FUN_05950954(0x32,0);
                    /* try { // try from 052c73f8 to 053c73fb has its CatchHandler @ 052c7404 */
  }
                    /* try { // try from 052c73fc to 053c7407 has its CatchHandler @ 052c6fc4 */
  lVar1 = *(long *)(unaff_x21 + 0x20);
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 052c73f8 with catch @ 052c7404
                        */
  *unaff_x19 = 0;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_05431718();
  return;
}


