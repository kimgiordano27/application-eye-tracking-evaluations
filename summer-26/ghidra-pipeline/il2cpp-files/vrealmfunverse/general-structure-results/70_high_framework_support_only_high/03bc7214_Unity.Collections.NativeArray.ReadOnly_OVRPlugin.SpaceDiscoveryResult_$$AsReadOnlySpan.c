/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnlySpan
ENTRY_POINT: 03bc7214
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


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__AsReadOnlySpan
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long in_x3;
  long lVar3;
  undefined8 *unaff_x19;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = param_2;
  uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(**(undefined8 **)(param_1 + 0xc0));
  lVar3 = **(long **)(*(long *)(in_x3 + 0x20) + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02b76218(lVar3);
  }
  in_stack_00000020 = unaff_x19[1];
  in_stack_00000018 = *unaff_x19;
  in_stack_00000010 = 0xffffffffffffffff;
  in_stack_00000028 = unaff_x19[2];
  in_stack_00000008 = lVar3;
  uVar1 = thunk_FUN_04dd5180(&stack0x00000008,uVar2,0);
  return uVar1 & 1;
}


