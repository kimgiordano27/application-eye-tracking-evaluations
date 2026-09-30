/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$MoveNext
ENTRY_POINT: 04a4865c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


int System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__MoveNext(long param_1)

{
  ulong uVar1;
  long lVar2;
  int *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  do {
    if ((ulong)*(uint *)(param_1 + 0x18) <= unaff_x22 - 4U) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    uVar1 = (**(code **)(*unaff_x21 + 0x1b8))();
    if ((uVar1 & 1) != 0) {
      return (int)unaff_x22 + -3;
    }
    lVar2 = unaff_x22 + -3;
    unaff_x22 = unaff_x22 + 1;
    if (*unaff_x20 + -1 <= lVar2) {
      return -1;
    }
    param_1 = *(long *)(unaff_x20 + 4);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


