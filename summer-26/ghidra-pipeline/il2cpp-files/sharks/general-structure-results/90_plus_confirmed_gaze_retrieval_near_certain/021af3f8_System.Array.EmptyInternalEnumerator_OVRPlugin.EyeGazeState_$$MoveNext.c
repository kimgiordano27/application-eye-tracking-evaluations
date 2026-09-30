/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$MoveNext
ENTRY_POINT: 021af3f8
PROGRAM: sharks-libil2cpp.so
SCORE: 152
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext(void)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x22;
  
  if (0 < *(int *)(unaff_x19 + 0x20)) {
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = 0;
    plVar2 = (long *)(unaff_x22 + 0x30);
    do {
      if (*(uint *)(unaff_x22 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      if ((-1 < (int)plVar2[-2]) && (*plVar2 == 0)) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      plVar2 = plVar2 + 3;
    } while ((long)uVar1 < (long)*(int *)(unaff_x19 + 0x20));
  }
  return 0;
}


