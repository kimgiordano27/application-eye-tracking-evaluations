/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 02f93800
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_SpaceDiscoveryResult>
              (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
              undefined1 *param_4)

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
  long unaff_x26;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  uStack0000000000000048 = param_2._8_8_;
  uStack0000000000000040 = param_2._0_8_;
  uStack0000000000000038 = param_1._8_8_;
  uStack0000000000000030 = param_1._0_8_;
  while( true ) {
    DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
              (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),param_4);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar3);
    }
    *(undefined8 *)(unaff_x25 + 0x18) = in_stack_00000058;
    *(undefined8 *)(unaff_x25 + 0x10) = in_stack_00000050;
    *(undefined8 *)(unaff_x25 + 0x28) = in_stack_00000068;
    *(undefined8 *)(unaff_x25 + 0x20) = in_stack_00000060;
    uVar2 = thunk_FUN_04dd5180();
    if ((uVar2 & 1) != 0) break;
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x26 == unaff_x23) {
      iVar1 = thunk_FUN_02b4b9cc();
      return iVar1 + -1;
    }
    memcpy(&stack0x00000050,(void *)(unaff_x24 + unaff_x23 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    uStack0000000000000038 = unaff_x21[1];
    uStack0000000000000030 = *unaff_x21;
    uStack0000000000000048 = unaff_x21[3];
    uStack0000000000000040 = unaff_x21[2];
    param_4 = (undefined1 *)&stack0x00000030;
  }
  iVar1 = thunk_FUN_02b4b9cc();
  return iVar1 + (int)unaff_x23;
}


