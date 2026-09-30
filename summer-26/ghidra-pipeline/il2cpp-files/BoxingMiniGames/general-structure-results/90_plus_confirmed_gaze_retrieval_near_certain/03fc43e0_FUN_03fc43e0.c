/*
FUNCTION_NAME: FUN_03fc43e0
ENTRY_POINT: 03fc43e0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 134
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void FUN_03fc43e0(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_0367ca58(param_2);
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar1 = System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__Dispose
                      (*(undefined4 *)(param_1 + 0x18),
                       *(undefined8 *)(*(long *)(param_2 + 0x38) + 8));
    if (lVar1 != 0) {
      FUN_04ef5120(lVar1,param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x30));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


