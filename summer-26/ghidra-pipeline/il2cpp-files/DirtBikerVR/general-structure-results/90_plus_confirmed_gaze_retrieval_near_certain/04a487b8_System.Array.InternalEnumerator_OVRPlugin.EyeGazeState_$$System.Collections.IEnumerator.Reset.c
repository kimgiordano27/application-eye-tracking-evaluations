/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04a487b8
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


void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
               (int *param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iStack000000000000000c;
  
  if (*param_1 == 0) {
    iVar1 = 0;
    *(undefined8 *)(param_1 + 2) = param_2;
  }
  else {
    lVar2 = *(long *)(param_4 + 0x20);
    iStack000000000000000c = *param_1 + -1;
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03ac4090();
    }
    FUN_043d445c(param_1 + 4,&stack0x0000000c,param_2,param_3,
                 *(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0xa0));
    iVar1 = *param_1;
  }
  *param_1 = iVar1 + 1;
  return;
}


