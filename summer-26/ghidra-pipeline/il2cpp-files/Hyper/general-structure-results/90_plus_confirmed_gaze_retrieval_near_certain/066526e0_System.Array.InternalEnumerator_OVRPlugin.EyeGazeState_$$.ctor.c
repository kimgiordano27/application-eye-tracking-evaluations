/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 066526e0
PROGRAM: Hyper-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>___ctor
               (long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_2 == 0) {
    puVar2 = (undefined8 *)(param_1 + 8);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(uint *)(lVar1 + 0x18) <= param_2 - 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    puVar2 = (undefined8 *)(lVar1 + (ulong)(param_2 - 1U) * 8 + 0x20);
  }
  *puVar2 = param_3;
  return;
}


