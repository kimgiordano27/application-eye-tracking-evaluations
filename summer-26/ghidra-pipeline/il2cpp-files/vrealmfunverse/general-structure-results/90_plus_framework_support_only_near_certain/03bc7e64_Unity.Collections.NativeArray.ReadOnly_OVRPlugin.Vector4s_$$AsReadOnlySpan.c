/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4s>$$AsReadOnlySpan
ENTRY_POINT: 03bc7e64
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__AsReadOnlySpan(void)

{
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  while (unaff_w19 < *(uint *)(unaff_x22 + 0x18)) {
    in_stack_00000038 = unaff_x21[1];
    in_stack_00000030 = *unaff_x21;
    in_stack_00000048 = unaff_x21[3];
    in_stack_00000040 = unaff_x21[2];
    DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
              (**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),&stack0x00000030);
    lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_02b76218(lVar2);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    uVar3 = *unaff_x26;
    uVar5 = unaff_x26[3];
    uVar4 = unaff_x26[2];
    *(undefined8 *)(unaff_x25 + 0x18) = unaff_x26[1];
    *(undefined8 *)(unaff_x25 + 0x10) = uVar3;
    *(undefined8 *)(unaff_x25 + 0x28) = uVar5;
    *(undefined8 *)(unaff_x25 + 0x20) = uVar4;
    uVar1 = thunk_FUN_04dd5180();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x24 = unaff_x24 + -1;
    unaff_x26 = unaff_x26 + 4;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x24 == 0) {
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


