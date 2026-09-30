/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$Dispose
ENTRY_POINT: 04caa294
PROGRAM: Untangled-libil2cpp.so
SCORE: 154
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__Dispose(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
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
  
  while( true ) {
    lVar1 = thunk_FUN_02ef1438(param_1);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_02ef170c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) break;
    if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    unaff_x22[(long)(int)unaff_w19 + 4] = lVar1;
    thunk_FUN_02f411dc(unaff_x22 + (long)(int)unaff_w19 + 4,lVar1);
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
                    /* try { // try from 04caa238 to 04daa24f has its CatchHandler @ 04caa2c8 */
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
    } while (*(int *)(lVar1 + 0x18) < 0);
                    /* try { // try from 04caa250 to 04daa2b7 has its CatchHandler @ 04caa01c */
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    FUN_03e59ea0(&stack0x00000040,*(undefined8 *)(lVar1 + 0x20));
    param_1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa8);
  }
  uVar3 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar3,0);
}


