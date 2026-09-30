/*
FUNCTION_NAME: System.ArraySegment<quaternion>$$GetHashCode
ENTRY_POINT: 03fc49d4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 136
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_ArraySegment<quaternion>__GetHashCode(void)

{
  long lVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  
  lVar1 = FUN_0367c9fc();
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar1 = System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__Dispose
                    (unaff_w20,**(undefined8 **)(unaff_x19 + 0x38));
  if (lVar1 != 0) {
    FUN_057121c0(lVar1,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


