/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03178124
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 152
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    FUN_02f41ef8(param_3);
    param_1 = *(long *)(param_3 + 0x38);
  }
  if ((*(ushort *)(*(long *)(param_1 + 8) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  uVar2 = thunk_FUN_02f45270();
  lVar4 = **(long **)(param_3 + 0x38);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
  }
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_02f45174(param_2,lVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2,lVar4);
    }
  }
  FUN_04d9d3b4(uVar2,lVar3,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
  lVar4 = *(long *)(param_3 + 0x20);
  *(undefined8 *)(param_2 + 0x368) = uVar2;
  uVar1 = FUN_0436b268(param_2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xf0));
  FUN_04391690(param_2,(uVar1 ^ 0xffffffff) & 1,
               *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8));
  return;
}


