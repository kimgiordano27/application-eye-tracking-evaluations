/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01f08fc8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_3 + 0x38);
  if (lVar5 == 0) {
    FUN_01dde854(param_3);
    lVar5 = *(long *)(param_3 + 0x38);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = FUN_020a8e80(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(lVar5 + 8));
  lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01dde7f8(lVar5);
  }
  uVar4 = thunk_FUN_01de27b8(lVar5);
  FUN_028bea30(uVar4,uVar1,uVar2,uVar3,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
  return uVar4;
}


