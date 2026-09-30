/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 049b8f98
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__set_Item<OVRPlugin_SpaceQueryResult>(long param_1)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long in_stack_00000008;
  long in_stack_000001c8;
  
  while( true ) {
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_04481fb8(param_1);
    }
    in_stack_00000008 = param_1;
    memcpy(unaff_x22,&stack0x00000138,0x90);
    uVar2 = thunk_FUN_07a98984(&stack0x00000008,unaff_x23,0);
    if ((uVar2 & 1) != 0) break;
    unaff_x25 = unaff_x25 + 1;
    if (unaff_x27 == unaff_x25) {
      iVar1 = thunk_FUN_044574ec();
      iVar1 = iVar1 + -1;
LAB_049b900c:
      if (*(long *)(unaff_x24 + 0x28) == in_stack_000001c8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar1);
    }
    memcpy(&stack0x00000138,(void *)(unaff_x26 + unaff_x25 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    memcpy(&stack0x000000a8,unaff_x21,0x90);
    unaff_x23 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x000000a8
                                  );
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  }
  iVar1 = thunk_FUN_044574ec();
  iVar1 = iVar1 + (int)unaff_x25;
  goto LAB_049b900c;
}


