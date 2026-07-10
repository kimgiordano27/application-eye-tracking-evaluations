/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03ce8b00
PROGRAM: AimAssaultDemo-libil2cpp.so
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
  undefined8 *unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  
  while( true ) {
    if (unaff_x25 == unaff_x23) {
      iVar1 = thunk_FUN_0374ad64();
      return iVar1 + -1;
    }
    memcpy(&stack0x00000050,(void *)(unaff_x24 + unaff_x23 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    uStack0000000000000044 = *(undefined8 *)((long)unaff_x21 + 0x14);
    in_stack_00000030 = *unaff_x21;
    uStack0000000000000040 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
    uStack0000000000000038 = (undefined4)unaff_x21[1];
    uStack000000000000003c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
    thunk_FUN_037784fc(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      FUN_03775678(lVar3);
    }
    *(undefined8 *)((long)unaff_x26 + 0x14) = uStack0000000000000064;
    *(ulong *)((long)unaff_x26 + 0xc) = CONCAT44(uStack0000000000000060,uStack000000000000005c);
    unaff_x26[1] = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    *unaff_x26 = in_stack_00000050;
    uVar2 = thunk_FUN_0629d330();
    if ((uVar2 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
  }
  iVar1 = thunk_FUN_0374ad64();
  return iVar1 + (int)unaff_x23;
}


