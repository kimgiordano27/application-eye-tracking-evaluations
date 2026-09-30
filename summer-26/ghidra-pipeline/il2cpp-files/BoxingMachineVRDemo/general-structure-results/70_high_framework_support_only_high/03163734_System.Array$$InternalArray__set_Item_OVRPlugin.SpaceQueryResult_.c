/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03163734
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_SpaceQueryResult>(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    memcpy(&stack0x00000030,(void *)(unaff_x25 + unaff_x24 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    in_stack_00000020 = unaff_x22;
    in_stack_00000028 = unaff_x21;
    thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      FUN_02d9a2e0(lVar3);
    }
    unaff_x27[1] = in_stack_00000038;
    *unaff_x27 = in_stack_00000030;
    uVar2 = thunk_FUN_0506076c();
    if ((uVar2 & 1) != 0) break;
    unaff_x24 = unaff_x24 + 1;
    if (unaff_x26 == unaff_x24) {
      iVar1 = thunk_FUN_02d6ff94();
      return iVar1 + -1;
    }
  }
  iVar1 = thunk_FUN_02d6ff94();
  return iVar1 + (int)unaff_x24;
}


