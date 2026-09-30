/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 04caa2a0
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__get_Current(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  
                    /* try { // try from 04caa2b8 to 04daa2c7 has its CatchHandler @ 04caa2c8 */
  while ((param_1 == 0 ||
         (lVar1 = thunk_FUN_02ef170c(param_1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar1 != 0))) {
    if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
                    /* catch() { ... } // from try @ 04caa238 with catch @ 04caa2c8
                       catch() { ... } // from try @ 04caa2b8 with catch @ 04caa2c8 */
                    /* try { // try from 04caa2cc to 04daa2cf has its CatchHandler @ 04caa2d8 */
    unaff_x22[(long)(int)unaff_w19 + 4] = param_1;
                    /* try { // try from 04caa2d0 to 04daa2db has its CatchHandler @ 04caa01c */
    thunk_FUN_02f411dc(unaff_x22 + (long)(int)unaff_w19 + 4,param_1);
                    /* catch() { ... } // from try @ 04caa21c with catch @ 04caa2d8
                       catch() { ... } // from try @ 04caa2cc with catch @ 04caa2d8 */
    unaff_w19 = unaff_w19 + 1;
    do {
      lVar1 = unaff_x27;
      unaff_x26 = unaff_x26 + 1;
      unaff_x27 = lVar1 + 0x28;
      if (unaff_x23 == unaff_x26) {
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00000068) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
    } while (*(int *)(lVar1 + 0x18) < 0);
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    FUN_03e59ea0(&stack0x00000040,*(undefined8 *)(lVar1 + 0x20));
    param_1 = thunk_FUN_02ef1438(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8));
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
  uVar2 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar2,0);
}


