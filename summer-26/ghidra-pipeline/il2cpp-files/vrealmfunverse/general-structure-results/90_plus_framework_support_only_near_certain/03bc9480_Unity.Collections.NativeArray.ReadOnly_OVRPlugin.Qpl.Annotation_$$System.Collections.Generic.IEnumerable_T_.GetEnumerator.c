/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 03bc9480
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


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 param_1,long param_2,void *param_3,uint param_4,int param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  void *__src;
  long lVar5;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack0000000000000108;
  
  lVar1 = tpidr_el0;
  lStack0000000000000108 = *(long *)(lVar1 + 0x28);
  if ((int)param_4 < (int)(param_5 + param_4)) {
    if (param_2 == 0) {
      if (*(long *)(lVar1 + 0x28) == lStack0000000000000108) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_03bc95c4;
    }
    lVar5 = (long)(int)(param_5 + param_4) - (long)(int)param_4;
    __src = (void *)(param_2 + (long)(int)param_4 * 0x78 + 0x20);
    do {
      if (*(uint *)(param_2 + 0x18) <= param_4) {
LAB_03bc959c:
        if (*(long *)(lVar1 + 0x28) == lStack0000000000000108) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        goto LAB_03bc95c4;
      }
      memcpy(&stack0x00000090,param_3,0x78);
      uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (**(undefined8 **)(*(long *)(param_6 + 0x20) + 0xc0),&stack0x00000090);
      lVar4 = **(long **)(*(long *)(param_6 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218(lVar4);
      }
      if (*(uint *)(param_2 + 0x18) <= param_4) goto LAB_03bc959c;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000008 = lVar4;
      memcpy(&stack0x00000018,__src,0x78);
      uVar3 = thunk_FUN_04dd5180(&stack0x00000008,uVar2,0);
      if ((uVar3 & 1) != 0) goto LAB_03bc9568;
      lVar5 = lVar5 + -1;
      __src = (void *)((long)__src + 0x78);
      param_4 = param_4 + 1;
    } while (lVar5 != 0);
  }
  param_4 = 0xffffffff;
LAB_03bc9568:
  if (*(long *)(lVar1 + 0x28) == lStack0000000000000108) {
    return param_4;
  }
LAB_03bc95c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


