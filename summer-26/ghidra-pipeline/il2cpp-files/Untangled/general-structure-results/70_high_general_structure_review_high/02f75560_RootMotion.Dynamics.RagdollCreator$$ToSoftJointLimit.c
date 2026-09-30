/*
FUNCTION_NAME: RootMotion.Dynamics.RagdollCreator$$ToSoftJointLimit
ENTRY_POINT: 02f75560
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_5;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void RootMotion_Dynamics_RagdollCreator__ToSoftJointLimit(long param_1,__shared_count *param_2)

{
  undefined *puVar1;
  int iVar2;
  __shared_count *p_Var3;
  __locale_t p_Var4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong uVar8;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined *in_stack_00000010;
  
  if (param_2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(param_2);
    param_1 = *unaff_x20;
  }
  *(undefined8 *)(param_1 + unaff_x27 * 8) = unaff_x21;
  DAT_073ee640 = (undefined *)(unaff_x22 + 0x10);
  DAT_073ee648 = 0;
  if (((DAT_073eda50 & 1) == 0) &&
     (iVar2 = RootMotion_FinalIK_IKSolverFABRIK__SolverRotateChildren(&DAT_073eda50), iVar2 != 0)) {
    p_Var4 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0xa48) = p_Var4;
    __cxa_guard_release(&DAT_073eda50);
  }
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
  DAT_073ee650 = *(undefined8 *)(unaff_x28 + 0xa48);
  DAT_073ee640 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__ + 0x10;
  in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee640);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_02f8a56c();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_073ee640;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  DAT_073ee660 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__ + 0x10;
  in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  DAT_073ee668 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee660);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_02f8a56c();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_073ee660;
  puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
  DAT_073ee670 = Method_UnityEngine_UIElements_BaseSlider<int>__ctor__ + 0x10;
  in_stack_00000010 =
       Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
  DAT_073ee678 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__ !=
      -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee670);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_02f8a56c();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_073ee670;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


