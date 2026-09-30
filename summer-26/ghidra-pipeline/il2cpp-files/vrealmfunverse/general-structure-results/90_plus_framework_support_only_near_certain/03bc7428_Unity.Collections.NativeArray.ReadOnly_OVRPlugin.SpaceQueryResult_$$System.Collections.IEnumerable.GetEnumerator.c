/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03bc7428
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 148
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (undefined8 param_1,long param_2,undefined8 *param_3,uint param_4,undefined8 param_5,
               long param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int unaff_w24;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  if (unaff_w24 <= (int)param_4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
LAB_03bc751c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      in_stack_00000038 = param_3[1];
      in_stack_00000030 = *param_3;
      in_stack_00000040 = param_3[2];
      uVar1 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0),&stack0x00000030);
      lVar3 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02b76218(lVar3);
      }
      if (*(uint *)(param_2 + 0x18) <= param_4) goto LAB_03bc751c;
      in_stack_00000010 = 0xffffffffffffffff;
      puVar4 = (undefined8 *)(param_2 + 0x20 + (long)(int)param_4 * 0x18);
      in_stack_00000020 = puVar4[1];
      in_stack_00000018 = *puVar4;
      in_stack_00000028 = puVar4[2];
      in_stack_00000008 = lVar3;
      uVar2 = thunk_FUN_04dd5180(&stack0x00000008,uVar1,0);
      if ((uVar2 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
    } while (unaff_w24 <= (int)param_4);
  }
  return 0xffffffff;
}


