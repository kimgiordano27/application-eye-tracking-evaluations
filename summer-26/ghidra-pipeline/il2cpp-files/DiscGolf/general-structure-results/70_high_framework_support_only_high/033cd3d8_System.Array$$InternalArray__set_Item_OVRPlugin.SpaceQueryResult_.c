/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 033cd3d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_SpaceQueryResult>(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  while( true ) {
    memcpy(&stack0x00000030,(void *)(unaff_x25 + unaff_x24 * *(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    in_stack_00000020 = unaff_x22;
    thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_02dcfd18(lVar3);
    }
    *(undefined8 *)(unaff_x26 + 0x10) = in_stack_00000030;
    *(undefined4 *)(unaff_x26 + 0x18) = in_stack_00000038;
    uVar2 = thunk_FUN_05542350();
    if ((uVar2 & 1) != 0) break;
    unaff_x24 = unaff_x24 + 1;
    if ((param_1 & 0xffffffff) == unaff_x24) {
      iVar1 = thunk_FUN_02da5698();
      return iVar1 + -1;
    }
  }
  iVar1 = thunk_FUN_02da5698();
  return iVar1 + (int)unaff_x24;
}


