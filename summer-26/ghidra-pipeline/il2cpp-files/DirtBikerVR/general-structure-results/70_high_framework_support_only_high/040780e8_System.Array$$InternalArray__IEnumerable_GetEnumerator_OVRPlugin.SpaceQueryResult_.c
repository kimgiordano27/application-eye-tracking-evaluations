/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 040780e8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  ulong uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  byte unaff_w27;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack0000000000000000;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  
  uVar5 = param_3._8_8_;
  uVar4 = param_3._0_8_;
  uVar3 = param_2._8_8_;
  uVar2 = param_2._0_8_;
  while( true ) {
    *(undefined8 *)(unaff_x25 + 0x18) = uVar3;
    *(undefined8 *)(unaff_x25 + 0x10) = uVar2;
    *(undefined8 *)(unaff_x25 + 0x24) = uVar5;
    *(undefined8 *)(unaff_x25 + 0x1c) = uVar4;
    lStack0000000000000000 = param_1;
    uVar1 = thunk_FUN_067aa794();
    if ((uVar1 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    unaff_w27 = unaff_x23 < unaff_x26;
    if (unaff_x26 == unaff_x23) break;
    memcpy(&stack0x00000050,(void *)(unaff_x24 + unaff_x23 * *(uint *)(*unaff_x21 + 0x104)),
           (ulong)*(uint *)(*unaff_x21 + 0x104));
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    uStack0000000000000044 = uStack0000000000000064;
    uStack0000000000000040 = uStack0000000000000060;
    thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_03ac4090(param_1);
    }
    uVar3 = unaff_x20[1];
    uVar2 = *unaff_x20;
    uVar5 = *(undefined8 *)((long)unaff_x20 + 0x14);
    uVar4 = *(undefined8 *)((long)unaff_x20 + 0xc);
  }
  return unaff_w27 & 1;
}


