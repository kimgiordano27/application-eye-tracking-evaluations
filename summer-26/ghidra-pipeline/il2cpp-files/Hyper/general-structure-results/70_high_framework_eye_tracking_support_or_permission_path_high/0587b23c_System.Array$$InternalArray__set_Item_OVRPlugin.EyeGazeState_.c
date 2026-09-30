/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0587b23c
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


int System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>(long param_1)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lStack0000000000000000;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    *(undefined8 *)(unaff_x26 + 0x18) = in_stack_00000038;
    *(undefined8 *)(unaff_x26 + 0x10) = in_stack_00000030;
    lStack0000000000000000 = param_1;
    uVar2 = thunk_FUN_08dd7094();
    if ((uVar2 & 1) != 0) {
      iVar1 = thunk_FUN_049556bc();
      return iVar1 + (int)unaff_x24;
    }
    unaff_x24 = unaff_x24 + 1;
    if (unaff_x27 == unaff_x24) break;
    memcpy(&stack0x00000030,(void *)(unaff_x25 + unaff_x24 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    in_stack_00000020 = unaff_x22;
    in_stack_00000028 = unaff_x21;
    thunk_FUN_04983b98(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_04980b34(param_1);
    }
  }
  iVar1 = thunk_FUN_049556bc();
  return iVar1 + -1;
}


