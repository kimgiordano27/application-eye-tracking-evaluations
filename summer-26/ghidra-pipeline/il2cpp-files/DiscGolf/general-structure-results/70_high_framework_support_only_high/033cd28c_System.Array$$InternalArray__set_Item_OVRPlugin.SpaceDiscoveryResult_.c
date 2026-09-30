/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 033cd28c
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


int System_Array__InternalArray__set_Item<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  
  while( true ) {
    lVar3 = *(long *)(param_1 + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    *(undefined8 *)(unaff_x25 + 0x18) = in_stack_00000050;
    *(undefined8 *)(unaff_x25 + 0x10) = in_stack_00000048;
    *(undefined4 *)(unaff_x25 + 0x20) = in_stack_00000058;
    in_stack_00000008 = lVar3;
    uVar2 = thunk_FUN_05542350(&stack0x00000008,unaff_x22,0);
    if ((uVar2 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x26 == unaff_x23) {
      iVar1 = thunk_FUN_02da5698();
      return iVar1 + -1;
    }
    memcpy(&stack0x00000048,(void *)(unaff_x24 + unaff_x23 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    in_stack_00000038 = unaff_x21[1];
    in_stack_00000030 = *unaff_x21;
    in_stack_00000040 = *(undefined4 *)(unaff_x21 + 2);
    unaff_x22 = thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030
                                  );
    param_1 = *(long *)(unaff_x19 + 0x38);
  }
  iVar1 = thunk_FUN_02da5698();
  return iVar1 + (int)unaff_x23;
}


