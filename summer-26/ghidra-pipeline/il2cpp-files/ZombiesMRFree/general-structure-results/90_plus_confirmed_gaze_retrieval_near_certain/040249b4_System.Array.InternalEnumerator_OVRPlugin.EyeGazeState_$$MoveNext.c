/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$MoveNext
ENTRY_POINT: 040249b4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong in_x9;
  int *unaff_x19;
  long unaff_x20;
  ulong unaff_x22;
  
  while( true ) {
    if (in_x9 <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04024a24 to 04124a3b has its CatchHandler @ 04024b14 */
      FUN_02fe94f0();
    }
    if (param_2 == (long *)0x0) break;
    uVar2 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(param_1 + unaff_x22 * 8 + 0x20))
    ;
    unaff_x22 = unaff_x22 + 1;
    if ((uVar2 & 1) != 0) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 040249ec to 041249f3 has its CatchHandler @ 04024a08 */
        FUN_02feb2c4();
      }
                    /* try { // try from 040249f4 to 04124a23 has its CatchHandler @ 04024868 */
      FUN_04024b78();
      return;
    }
    if ((long)(*unaff_x19 + -1) <= (long)unaff_x22) {
      return;
    }
    lVar1 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    param_2 = (long *)FUN_03b188f4(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x80));
    param_1 = *(long *)(unaff_x19 + 4);
    if (param_1 == 0) break;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


