/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03c56900
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__get_Item<OVRPlugin_SpaceQueryResult>(void)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  ulong uVar5;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  uVar1 = FUN_0625b654();
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      memcpy(&stack0x00000028,
             (void *)((long)unaff_x20 + uVar5 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x20 + 0x104));
      in_stack_00000018 = unaff_x21;
      thunk_FUN_037784fc(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000018);
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        FUN_03775678(lVar4);
      }
      uVar3 = thunk_FUN_0629d330();
      if ((uVar3 & 1) != 0) {
        iVar2 = thunk_FUN_0374ad64();
        return iVar2 + (int)uVar5;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  iVar2 = thunk_FUN_0374ad64();
  return iVar2 + -1;
}


