/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 047efbf4
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


bool System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceDiscoveryResult>
               (uint param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x21;
  ulong uVar5;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((int)param_1 < 1) {
    bVar1 = false;
  }
  else {
    uVar5 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000028,
             (void *)((long)unaff_x21 + uVar5 * *(uint *)(*unaff_x21 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x21 + 0x104));
      in_stack_00000020 = in_stack_00000028;
      uVar2 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8(lVar4);
      }
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000008 = lVar4;
      uVar3 = thunk_FUN_07a98984(&stack0x00000008,uVar2,0);
      if ((uVar3 & 1) != 0) {
        return bVar1;
      }
      uVar5 = uVar5 + 1;
      bVar1 = uVar5 < param_1;
    } while (param_1 != uVar5);
  }
  return bVar1;
}


