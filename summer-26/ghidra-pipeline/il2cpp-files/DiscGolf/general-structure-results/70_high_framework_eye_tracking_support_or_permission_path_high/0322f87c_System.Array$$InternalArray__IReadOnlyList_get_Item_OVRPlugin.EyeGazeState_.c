/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0322f87c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


byte System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  ulong uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  byte unaff_w27;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack0000000000000000;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  uVar5 = param_3._8_8_;
  uVar4 = param_3._0_8_;
  uVar3 = param_2._8_8_;
  uVar2 = param_2._0_8_;
  while( true ) {
    *(undefined8 *)(unaff_x25 + 0x18) = uVar3;
    *(undefined8 *)(unaff_x25 + 0x10) = uVar2;
    *(undefined8 *)(unaff_x25 + 0x28) = uVar5;
    *(undefined8 *)(unaff_x25 + 0x20) = uVar4;
    lStack0000000000000000 = param_1;
    uVar1 = thunk_FUN_05542350();
    if ((uVar1 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    unaff_w27 = unaff_x23 < unaff_x26;
    if (unaff_x26 == unaff_x23) break;
    memcpy(&stack0x00000050,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    in_stack_00000048 = in_stack_00000068;
    in_stack_00000040 = in_stack_00000060;
    thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_02dcfd18(param_1);
    }
    uVar3 = unaff_x20[1];
    uVar2 = *unaff_x20;
    uVar5 = unaff_x20[3];
    uVar4 = unaff_x20[2];
  }
  return unaff_w27 & 1;
}


