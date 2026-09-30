/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 04c927b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


int System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>
              (undefined8 *param_1,undefined8 param_2,size_t param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  while( true ) {
    memcpy(param_1,(void *)(unaff_x24 + unaff_x23 * param_3),param_3);
    in_stack_00000038 = unaff_x21[1];
    in_stack_00000030 = *unaff_x21;
    in_stack_00000048 = unaff_x21[3];
    in_stack_00000040 = unaff_x21[2];
    thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_040b1acc(lVar3);
    }
    *(undefined8 *)(unaff_x25 + 0x18) = in_stack_00000058;
    *(undefined8 *)(unaff_x25 + 0x10) = in_stack_00000050;
    *(undefined8 *)(unaff_x25 + 0x28) = in_stack_00000068;
    *(undefined8 *)(unaff_x25 + 0x20) = in_stack_00000060;
    uVar2 = thunk_FUN_076d5148();
    if ((uVar2 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x26 == unaff_x23) {
      iVar1 = thunk_FUN_04086950();
      return iVar1 + -1;
    }
    param_1 = &stack0x00000050;
    param_3 = (size_t)*(uint *)(*unaff_x20 + 0x104);
  }
  iVar1 = thunk_FUN_04086950();
  return iVar1 + (int)unaff_x23;
}


