/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03bc7af8
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


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1)

{
  ulong uVar1;
  ushort in_w9;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  while( true ) {
    if ((in_w9 & 1) == 0) {
      FUN_02b76218(param_1);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    uVar2 = *unaff_x26;
    uVar4 = unaff_x26[3];
    uVar3 = unaff_x26[2];
    *(undefined8 *)(unaff_x25 + 0x18) = unaff_x26[1];
    *(undefined8 *)(unaff_x25 + 0x10) = uVar2;
    *(undefined8 *)(unaff_x25 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x25 + 0x20) = uVar3;
    uVar4 = unaff_x26[4];
    uVar3 = unaff_x26[7];
    uVar2 = unaff_x26[6];
    *(undefined8 *)(unaff_x25 + 0x38) = unaff_x26[5];
    *(undefined8 *)(unaff_x25 + 0x30) = uVar4;
    *(undefined8 *)(unaff_x25 + 0x48) = uVar3;
    *(undefined8 *)(unaff_x25 + 0x40) = uVar2;
    uVar1 = thunk_FUN_04dd5180();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x24 = unaff_x24 + -1;
    unaff_x26 = unaff_x26 + 8;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x24 == 0) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    in_stack_00000058 = unaff_x21[1];
    in_stack_00000050 = *unaff_x21;
    in_stack_00000068 = unaff_x21[3];
    in_stack_00000060 = unaff_x21[2];
    in_stack_00000078 = unaff_x21[5];
    in_stack_00000070 = unaff_x21[4];
    in_stack_00000088 = unaff_x21[7];
    in_stack_00000080 = unaff_x21[6];
    DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
              (**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),&stack0x00000050);
    param_1 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    in_w9 = *(ushort *)(param_1 + 0x135);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


