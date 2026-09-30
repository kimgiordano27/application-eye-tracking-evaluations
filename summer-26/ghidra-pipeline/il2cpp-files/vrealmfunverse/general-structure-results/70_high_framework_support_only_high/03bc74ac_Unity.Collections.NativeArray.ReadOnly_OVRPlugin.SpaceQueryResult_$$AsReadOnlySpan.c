/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$AsReadOnlySpan
ENTRY_POINT: 03bc74ac
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


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__AsReadOnlySpan
               (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  int unaff_w24;
  long unaff_x25;
  long unaff_x26;
  int unaff_w27;
  undefined8 uVar4;
  long in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  while (unaff_w19 < *(uint *)(unaff_x22 + 0x18)) {
    puVar3 = (undefined8 *)(unaff_x25 + (long)(int)unaff_w19 * (long)unaff_w27);
    uVar4 = *puVar3;
    uVar2 = puVar3[2];
    *(undefined8 *)(unaff_x26 + 0x18) = puVar3[1];
    *(undefined8 *)(unaff_x26 + 0x10) = uVar4;
    *(undefined8 *)(unaff_x26 + 0x20) = uVar2;
    in_stack_00000008 = param_1;
    uVar1 = thunk_FUN_04dd5180(&stack0x00000008,unaff_x23,0);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    in_stack_00000038 = unaff_x21[1];
    in_stack_00000030 = *unaff_x21;
    in_stack_00000040 = unaff_x21[2];
    unaff_x23 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),&stack0x00000030);
    param_1 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_02b76218(param_1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


