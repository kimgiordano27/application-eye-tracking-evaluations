/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 05732a44
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined4
System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>__get_Current
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long unaff_x19;
  uint uVar3;
  
  if ((param_1 == 0) || (*(int *)(unaff_x19 + 0xe0) + -1 < 1)) {
    return param_3;
  }
  uVar3 = 0;
  do {
    if (*(uint *)(param_1 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar2 = *(long **)(param_1 + (long)(int)uVar3 * 8 + 0x20);
    if (plVar2 == (long *)0x0) break;
    uVar1 = (**(code **)(*plVar2 + 0x1a8))();
    uVar3 = uVar3 + 1;
    if (*(int *)(unaff_x19 + 0xe0) + -1 <= (int)uVar3) {
      return uVar1;
    }
    param_1 = *(long *)(unaff_x19 + 0xf0);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


