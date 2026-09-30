/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector4f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03bc7b80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 128
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4f>__System_Collections_IEnumerable_GetEnumerator
               (undefined8 param_1,long param_2,undefined8 *param_3,uint param_4,int param_5,
               long param_6)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  iVar1 = (param_4 - param_5) + 1;
  if (iVar1 <= (int)param_4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
LAB_03bc7c84:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      in_stack_00000058 = param_3[1];
      in_stack_00000050 = *param_3;
      in_stack_00000068 = param_3[3];
      in_stack_00000060 = param_3[2];
      in_stack_00000078 = param_3[5];
      in_stack_00000070 = param_3[4];
      in_stack_00000088 = param_3[7];
      in_stack_00000080 = param_3[6];
      DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                (**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0),&stack0x00000050);
      lVar3 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        FUN_02b76218(lVar3);
      }
      if (*(uint *)(param_2 + 0x18) <= param_4) goto LAB_03bc7c84;
      uVar2 = thunk_FUN_04dd5180();
      if ((uVar2 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
    } while (iVar1 <= (int)param_4);
  }
  return 0xffffffff;
}


