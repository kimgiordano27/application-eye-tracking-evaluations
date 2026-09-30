/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.cctor
ENTRY_POINT: 015e5dac
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x60);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    lVar2 = thunk_FUN_0124bba8();
    FUN_01c61414(lVar2,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x10));
    *plVar1 = lVar2;
    thunk_FUN_01286abc(plVar1,lVar2);
  }
  return lVar2;
}


