/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0355385c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>
               (long *param_1,undefined8 param_2,void *param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [104];
  undefined8 local_38;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_03293514(param_4);
  }
  local_38 = 0;
  uVar1 = FUN_059a23d4(0);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar2 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    uVar3 = FUN_045ff0cc(param_1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 8));
  }
  uVar3 = FUN_0584f4b4(param_1,uVar3,&local_38,0);
  if (*param_1 == 0) {
    lVar2 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar2 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_032934b8();
    }
    uVar4 = FUN_045ff0cc(param_1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 8));
    memcpy(auStack_a8,param_3,0x68);
    uVar5 = thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(param_4 + 0x38) + 8),auStack_a8);
    FUN_0584f87c(param_1,uVar5,local_38,uVar4,0);
  }
  FUN_0584d7ac(param_2,uVar3,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
  return;
}


