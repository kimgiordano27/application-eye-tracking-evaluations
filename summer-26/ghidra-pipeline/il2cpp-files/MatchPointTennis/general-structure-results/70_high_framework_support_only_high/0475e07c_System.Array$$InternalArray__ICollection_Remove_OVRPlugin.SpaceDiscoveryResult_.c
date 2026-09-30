/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0475e07c
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


byte System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x22;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  byte unaff_w27;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),param_2);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
                    /* try { // try from 0475e098 to 0485e0a7 has its CatchHandler @ 0475e180 */
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_04481fb8(lVar2);
    }
    uVar1 = thunk_FUN_07a98984();
                    /* try { // try from 0475e0c0 to 0485e0e3 has its CatchHandler @ 0475e188 */
    if ((uVar1 & 1) != 0) break;
    unaff_x24 = unaff_x24 + 1;
    unaff_w27 = unaff_x24 < unaff_x26;
    if (unaff_x26 == unaff_x24) break;
    memcpy(&stack0x00000030,(void *)(unaff_x25 + unaff_x24 * *(uint *)(*unaff_x22 + 0x104)),
           (ulong)*(uint *)(*unaff_x22 + 0x104));
    param_2 = &stack0x00000020;
    in_stack_00000028 = in_stack_00000038;
    in_stack_00000020 = in_stack_00000030;
  }
  return unaff_w27 & 1;
}


