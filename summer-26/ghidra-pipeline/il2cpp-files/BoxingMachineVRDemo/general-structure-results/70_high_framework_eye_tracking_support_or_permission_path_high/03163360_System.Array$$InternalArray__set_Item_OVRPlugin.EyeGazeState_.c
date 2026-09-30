/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03163360
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


int System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined2 unaff_w21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long in_stack_00000008;
  undefined2 in_stack_00000028;
  
  while( true ) {
    if ((bool)in_ZR) {
      iVar1 = thunk_FUN_02d6ff94();
      return iVar1 + -1;
    }
    memcpy(&stack0x0000002c,(void *)(unaff_x24 + unaff_x23 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    in_stack_00000028 = unaff_w21;
    uVar2 = thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000028);
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0(lVar4);
    }
    in_stack_00000008 = lVar4;
    uVar3 = thunk_FUN_0506076c(&stack0x00000008,uVar2,0);
    if ((uVar3 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    in_ZR = unaff_x25 == unaff_x23;
  }
  iVar1 = thunk_FUN_02d6ff94();
  return iVar1 + (int)unaff_x23;
}


