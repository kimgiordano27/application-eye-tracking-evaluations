/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 05c04834
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__get_Current(long param_1)

{
  bool in_CY;
  undefined8 *unaff_x19;
  uint unaff_w20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (!in_CY) {
    param_1 = param_1 + (ulong)unaff_w20 * 0x38;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
                    /* try { // try from 05c0484c to 05d04857 has its CatchHandler @ 05c04374 */
    unaff_x19[4] = *(undefined8 *)(param_1 + 0x50);
    unaff_x19[1] = uVar4;
    *unaff_x19 = uVar3;
    unaff_x19[3] = uVar2;
    unaff_x19[2] = uVar1;
                    /* try { // try from 05c04858 to 05d0485f has its CatchHandler @ 05c04860 */
    thunk_FUN_037aeb94();
                    /* try { // try from 05c04878 to 05d04a5b has its CatchHandler @ 05c04878
                       catch() { ... } // from try @ 05c04878 with catch @ 05c04878
                       catch() { ... } // from try @ 05c04b2c with catch @ 05c04878
                       catch() { ... } // from try @ 05c04bc0 with catch @ 05c04878
                       catch() { ... } // from try @ 05c04c5c with catch @ 05c04878 */
    return ~unaff_w20 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


