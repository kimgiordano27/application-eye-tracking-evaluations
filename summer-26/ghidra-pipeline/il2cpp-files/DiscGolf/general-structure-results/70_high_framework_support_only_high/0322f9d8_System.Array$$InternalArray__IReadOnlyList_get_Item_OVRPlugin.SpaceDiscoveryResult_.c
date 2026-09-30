/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0322f9d8
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


byte System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceDiscoveryResult>
               (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ushort in_w9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  byte unaff_w27;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
    if ((in_w9 & 1) == 0) {
      param_1 = FUN_02dcfd18(param_1);
    }
    uVar3 = *unaff_x20;
    uVar5 = unaff_x20[3];
    uVar4 = unaff_x20[2];
    uVar2 = unaff_x20[4];
    *(undefined8 *)(unaff_x25 + 0x18) = unaff_x20[1];
    *(undefined8 *)(unaff_x25 + 0x10) = uVar3;
    *(undefined8 *)(unaff_x25 + 0x28) = uVar5;
    *(undefined8 *)(unaff_x25 + 0x20) = uVar4;
    *(undefined8 *)(unaff_x25 + 0x30) = uVar2;
    in_stack_00000008 = param_1;
    uVar1 = thunk_FUN_05542350(&stack0x00000008,unaff_x22,0);
    if ((uVar1 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    unaff_w27 = unaff_x23 < unaff_x26;
    if (unaff_x26 == unaff_x23) break;
    memcpy(&stack0x00000070,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    in_stack_00000048 = in_stack_00000078;
    in_stack_00000040 = in_stack_00000070;
    in_stack_00000058 = in_stack_00000088;
    in_stack_00000050 = in_stack_00000080;
    in_stack_00000060 = in_stack_00000090;
    unaff_x22 = thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000040
                                  );
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    in_w9 = *(ushort *)(param_1 + 0x135);
  }
  return unaff_w27 & 1;
}


