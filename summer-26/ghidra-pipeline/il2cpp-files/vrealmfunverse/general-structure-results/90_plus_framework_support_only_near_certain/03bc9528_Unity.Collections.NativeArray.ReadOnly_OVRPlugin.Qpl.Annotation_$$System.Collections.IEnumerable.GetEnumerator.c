/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 03bc9528
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


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  undefined1 in_CY;
  ulong uVar1;
  uint unaff_w19;
  long unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  void *unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long in_stack_00000008;
  long in_stack_00000108;
  
  while (!(bool)in_CY) {
    in_stack_00000008 = param_1;
    memcpy((void *)(unaff_x27 + 0x10),unaff_x23,0x78);
    uVar1 = thunk_FUN_04dd5180(&stack0x00000008,unaff_x24,0);
    if ((uVar1 & 1) != 0) {
LAB_03bc9568:
      if (*(long *)(unaff_x25 + 0x28) == in_stack_00000108) {
        return unaff_w19;
      }
      goto LAB_03bc95c4;
    }
    unaff_x26 = unaff_x26 + -1;
    unaff_x23 = (void *)((long)unaff_x23 + 0x78);
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x26 == 0) {
      unaff_w19 = 0xffffffff;
      goto LAB_03bc9568;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    memcpy(&stack0x00000090,unaff_x21,0x78);
    unaff_x24 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),&stack0x00000090);
    param_1 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_02b76218(param_1);
    }
    in_CY = *(uint *)(unaff_x22 + 0x18) <= unaff_w19;
  }
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000108) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_03bc95c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


