/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 049b8bc4
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


void System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  void *unaff_x21;
  long unaff_x24;
  ulong uVar4;
  long in_stack_000001a8;
  
  uVar4 = 0;
  while( true ) {
    memcpy(&stack0x00000120,(void *)((long)unaff_x20 + uVar4 * *(uint *)(*unaff_x20 + 0x104) + 0x20)
           ,(ulong)*(uint *)(*unaff_x20 + 0x104));
    memcpy(&stack0x00000098,unaff_x21,0x88);
    thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000098);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      FUN_04481fb8(lVar3);
    }
    memcpy(&stack0x00000010,&stack0x00000120,0x88);
    uVar2 = thunk_FUN_07a98984();
    if ((uVar2 & 1) != 0) break;
    uVar4 = uVar4 + 1;
    if ((param_1 & 0xffffffff) == uVar4) {
      iVar1 = thunk_FUN_044574ec();
      iVar1 = iVar1 + -1;
LAB_049b8c94:
      if (*(long *)(unaff_x24 + 0x28) == in_stack_000001a8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar1);
    }
  }
  iVar1 = thunk_FUN_044574ec();
  iVar1 = iVar1 + (int)uVar4;
  goto LAB_049b8c94;
}


