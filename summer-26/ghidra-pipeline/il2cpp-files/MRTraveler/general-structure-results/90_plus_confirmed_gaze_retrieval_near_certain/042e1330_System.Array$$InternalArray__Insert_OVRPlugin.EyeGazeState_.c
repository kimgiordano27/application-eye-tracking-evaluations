/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.EyeGazeState>
ENTRY_POINT: 042e1330
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__Insert<OVRPlugin_EyeGazeState>(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  void *unaff_x22;
  undefined8 in_stack_00000058;
  
  if (param_1 == 0) {
    FUN_03cf12a0();
  }
  in_stack_00000058 = 0;
  uVar1 = FUN_071820a0(0);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    uVar3 = FUN_063cd414(param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 8));
  }
  FUN_0701e3ec(param_2,uVar3,&stack0x00000058,0);
  if (*param_2 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244();
    }
    uVar3 = FUN_063cd414(param_2,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 8));
    memcpy(&stack0x00000000,unaff_x22,0x50);
    uVar4 = thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8));
    FUN_0701e7b4(param_2,uVar4,in_stack_00000058,uVar3,0);
  }
  FUN_0677e014();
  return;
}


