/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 030262a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>
               (ushort *param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  void *unaff_x22;
  undefined8 in_stack_00000078;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_02f41e9c();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
                    /* try { // try from 030262cc to 031262e7 has its CatchHandler @ 0302648c */
    thunk_FUN_02f6670c();
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  FUN_03d75ed8();
  memcpy(&stack0x00000008,unaff_x22,0x58);
                    /* try { // try from 03026314 to 0312631f has its CatchHandler @ 03026494 */
  thunk_FUN_02f44ec4(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8),&stack0x00000008);
                    /* try { // try from 03026320 to 03126333 has its CatchHandler @ 03025bf4 */
  FUN_05008e78();
                    /* try { // try from 03026334 to 0312633f has its CatchHandler @ 03026494 */
  FUN_05006c74();
  return;
}


