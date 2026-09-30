/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03abf9cc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array__InternalArray__IndexOf<OVRPlugin_EyeGazeState>(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_0322bf50(param_2);
  }
  iVar1 = FUN_05e1a3d8(param_1,0);
  if (iVar1 == 0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar3 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    uVar2 = **(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_044c71a4(&stack0x00000010,param_1,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18));
    uVar2 = thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10));
  }
  return uVar2;
}


