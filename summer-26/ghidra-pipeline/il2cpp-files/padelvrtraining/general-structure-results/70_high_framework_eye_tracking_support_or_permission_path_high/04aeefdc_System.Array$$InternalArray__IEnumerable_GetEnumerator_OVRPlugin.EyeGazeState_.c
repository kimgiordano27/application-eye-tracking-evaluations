/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.EyeGazeState>
ENTRY_POINT: 04aeefdc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


bool System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_EyeGazeState>(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x27;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x25 == unaff_x23) {
      return unaff_x23 < unaff_x25;
    }
    memcpy(&stack0x00000048,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    in_stack_00000038 = in_stack_00000050;
    in_stack_00000030 = in_stack_00000048;
    in_stack_00000040 = in_stack_00000058;
    uVar1 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c(lVar3);
    }
    uVar5 = unaff_x20[1];
    uVar4 = *unaff_x20;
    unaff_x27[2] = unaff_x20[2];
    unaff_x27[1] = uVar5;
    *unaff_x27 = uVar4;
    in_stack_00000008 = lVar3;
    uVar2 = thunk_FUN_071d4ed8(&stack0x00000008,uVar1,0);
  } while ((uVar2 & 1) == 0);
  return unaff_x23 < unaff_x25;
}


