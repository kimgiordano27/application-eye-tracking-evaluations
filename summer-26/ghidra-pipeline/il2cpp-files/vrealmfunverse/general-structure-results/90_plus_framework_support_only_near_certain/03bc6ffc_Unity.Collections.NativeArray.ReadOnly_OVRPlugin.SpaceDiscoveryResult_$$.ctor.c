/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03bc6ffc
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


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>___ctor
               (undefined1 param_1 [16])

{
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar4 = param_1._8_8_;
  uVar3 = param_1._0_8_;
  while( true ) {
    *(undefined8 *)(unaff_x26 + 0x18) = uVar4;
    *(undefined8 *)(unaff_x26 + 0x10) = uVar3;
    uVar1 = thunk_FUN_04dd5180();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x25 = unaff_x25 + -1;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x25 == 0) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w19) break;
    in_stack_00000020 = unaff_x22;
    in_stack_00000028 = unaff_x21;
    DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
              (**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),&stack0x00000020);
    lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar2);
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w19) break;
    uVar4 = unaff_x27[3];
    uVar3 = unaff_x27[2];
    unaff_x27 = unaff_x27 + 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


