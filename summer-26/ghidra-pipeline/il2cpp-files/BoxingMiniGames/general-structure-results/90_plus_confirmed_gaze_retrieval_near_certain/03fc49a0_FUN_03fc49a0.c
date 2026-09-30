/*
FUNCTION_NAME: FUN_03fc49a0
ENTRY_POINT: 03fc49a0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 131
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void FUN_03fc49a0(undefined4 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  if (lVar1 == 0) {
    FUN_0367ca58(param_2);
    lVar1 = *(long *)(param_2 + 0x38);
  }
  lVar1 = *(long *)(lVar1 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar1 = System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__Dispose
                    (param_1,**(undefined8 **)(param_2 + 0x38));
  if (lVar1 != 0) {
    FUN_057121c0(lVar1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


