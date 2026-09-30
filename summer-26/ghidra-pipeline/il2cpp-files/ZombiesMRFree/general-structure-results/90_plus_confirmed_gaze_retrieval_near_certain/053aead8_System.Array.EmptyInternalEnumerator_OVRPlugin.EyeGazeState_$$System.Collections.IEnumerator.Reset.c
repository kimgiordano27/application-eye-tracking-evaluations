/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 053aead8
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
               (ulong param_1)

{
  long lVar1;
  long unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  long *unaff_x26;
  
  while( true ) {
    if (param_1 <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    FUN_053ae36c();
    unaff_x23 = unaff_x23 + 1;
    if ((long)*(int *)(unaff_x22 + 0x18) <= (long)unaff_x23) break;
    param_1 = (ulong)*(uint *)(unaff_x22 + 0x18);
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar1 = FUN_05abbc78(0);
  if (lVar1 != 0) {
    FUN_050e29b8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


