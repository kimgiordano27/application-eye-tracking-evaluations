/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 047efaa0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


bool System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>
               (long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  bVar1 = true;
  while( true ) {
    memcpy(&stack0x00000050,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      FUN_04481fb8(lVar3);
    }
    uVar6 = *unaff_x20;
    uVar5 = unaff_x20[3];
    uVar4 = unaff_x20[2];
    *(undefined8 *)(param_1 + 0x18) = unaff_x20[1];
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    uVar2 = thunk_FUN_07a98984();
    if ((uVar2 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    bVar1 = unaff_x23 < (param_2 & 0xffffffff);
    if ((param_2 & 0xffffffff) == unaff_x23) {
      return bVar1;
    }
  }
  return bVar1;
}


