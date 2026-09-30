/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03bc73a4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 145
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,undefined1 param_2 [16])

{
  ulong uVar1;
  undefined8 uVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack0000000000000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  uVar4 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  while( true ) {
    uVar2 = unaff_x26[2];
    *(undefined8 *)(unaff_x25 + 0x18) = uVar4;
    *(undefined8 *)(unaff_x25 + 0x10) = uVar3;
    *(undefined8 *)(unaff_x25 + 0x20) = uVar2;
    lStack0000000000000008 = param_1;
    uVar1 = thunk_FUN_04dd5180(&stack0x00000008,unaff_x23,0);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x24 = unaff_x24 + -1;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x24 == 0) {
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
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    uVar4 = unaff_x26[4];
    uVar3 = unaff_x26[3];
    unaff_x26 = unaff_x26 + 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


