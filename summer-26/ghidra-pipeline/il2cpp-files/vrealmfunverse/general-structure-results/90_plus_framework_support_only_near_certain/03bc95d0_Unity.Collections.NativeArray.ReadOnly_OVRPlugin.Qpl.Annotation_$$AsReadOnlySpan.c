/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$AsReadOnlySpan
ENTRY_POINT: 03bc95d0
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


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__AsReadOnlySpan
               (undefined8 param_1,long param_2,void *param_3,uint param_4,int param_5,long param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack0000000000000108;
  
  lVar2 = tpidr_el0;
  lStack0000000000000108 = *(long *)(lVar2 + 0x28);
  iVar1 = (param_4 - param_5) + 1;
  if (iVar1 <= (int)param_4) {
    if (param_2 == 0) {
      if (*(long *)(lVar2 + 0x28) == lStack0000000000000108) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_03bc9724;
    }
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
LAB_03bc96fc:
        if (*(long *)(lVar2 + 0x28) == lStack0000000000000108) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_03bc9724;
      }
      memcpy(&stack0x00000090,param_3,0x78);
      uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0),&stack0x00000090);
      lVar5 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02b76218(lVar5);
      }
      if (*(uint *)(param_2 + 0x18) <= param_4) goto LAB_03bc96fc;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000008 = lVar5;
      memcpy(&stack0x00000018,(void *)(param_2 + 0x20 + (long)(int)param_4 * 0x78),0x78);
      uVar4 = thunk_FUN_04dd5180(&stack0x00000008,uVar3,0);
      if ((uVar4 & 1) != 0) goto LAB_03bc96c8;
      param_4 = param_4 - 1;
    } while (iVar1 <= (int)param_4);
  }
  param_4 = 0xffffffff;
LAB_03bc96c8:
  if (*(long *)(lVar2 + 0x28) == lStack0000000000000108) {
    return param_4;
  }
LAB_03bc9724:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


