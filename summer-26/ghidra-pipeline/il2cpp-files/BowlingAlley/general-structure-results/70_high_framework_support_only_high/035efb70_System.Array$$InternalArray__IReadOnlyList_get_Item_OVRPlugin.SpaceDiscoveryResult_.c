/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 035efb70
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceDiscoveryResult>(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  byte unaff_w25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while (uVar1 = thunk_FUN_0597d930(), (uVar1 & 1) == 0) {
    unaff_x22 = unaff_x22 + 1;
    unaff_w25 = unaff_x22 < unaff_x24;
    if (unaff_x24 == unaff_x22) break;
    memcpy(&stack0x00000030,(void *)(unaff_x23 + unaff_x22 * *(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    in_stack_00000028 = in_stack_00000038;
    in_stack_00000020 = in_stack_00000030;
    thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000020);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_032934b8(lVar2);
    }
  }
  return unaff_w25 & 1;
}


