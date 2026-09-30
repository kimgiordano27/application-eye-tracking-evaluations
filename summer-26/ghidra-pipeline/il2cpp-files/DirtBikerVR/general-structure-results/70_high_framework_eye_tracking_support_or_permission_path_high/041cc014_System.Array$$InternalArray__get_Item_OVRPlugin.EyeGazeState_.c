/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 041cc014
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


int System_Array__InternalArray__get_Item<OVRPlugin_EyeGazeState>(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long in_stack_00000008;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  while( true ) {
    memcpy(&stack0x00000070,(void *)(unaff_x24 + unaff_x23 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    in_stack_00000048 = unaff_x21[1];
    in_stack_00000040 = *unaff_x21;
    in_stack_00000058 = unaff_x21[3];
    in_stack_00000050 = unaff_x21[2];
    in_stack_00000060 = unaff_x21[4];
    uVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000040);
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090(lVar4);
    }
    *(undefined8 *)(unaff_x25 + 0x18) = in_stack_00000078;
    *(undefined8 *)(unaff_x25 + 0x10) = in_stack_00000070;
    *(undefined8 *)(unaff_x25 + 0x28) = in_stack_00000088;
    *(undefined8 *)(unaff_x25 + 0x20) = in_stack_00000080;
    *(undefined8 *)(unaff_x25 + 0x30) = in_stack_00000090;
    in_stack_00000008 = lVar4;
    uVar3 = thunk_FUN_067aa794(&stack0x00000008,uVar2,0);
    if ((uVar3 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x26 == unaff_x23) {
      iVar1 = thunk_FUN_03a9981c();
      return iVar1 + -1;
    }
  }
  iVar1 = thunk_FUN_03a9981c();
  return iVar1 + (int)unaff_x23;
}


