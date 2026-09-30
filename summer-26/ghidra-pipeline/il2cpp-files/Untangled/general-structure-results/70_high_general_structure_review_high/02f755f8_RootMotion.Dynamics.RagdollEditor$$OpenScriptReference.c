/*
FUNCTION_NAME: RootMotion.Dynamics.RagdollEditor$$OpenScriptReference
ENTRY_POINT: 02f755f8
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_5;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void RootMotion_Dynamics_RagdollEditor__OpenScriptReference(ulong param_1,void *param_2)

{
  undefined *puVar1;
  __shared_count *p_Var2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  undefined8 unaff_x21;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined *in_stack_00000010;
  
  uVar5 = param_1 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(param_2);
  lVar3 = *unaff_x20;
  uVar4 = *unaff_x24 - lVar3 >> 3;
  if (uVar4 <= uVar5) {
    if (uVar4 < param_1) {
      FUN_02f8a56c();
      lVar3 = *unaff_x20;
    }
    else if (param_1 < uVar4) {
      *unaff_x24 = lVar3 + param_1 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar5 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(undefined8 *)(lVar3 + uVar5 * 8) = unaff_x21;
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
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar6 = uVar4 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee660);
  lVar3 = *unaff_x20;
  uVar5 = *unaff_x24 - lVar3 >> 3;
  if (uVar5 <= uVar6) {
    if (uVar5 < uVar4) {
      FUN_02f8a56c();
      lVar3 = *unaff_x20;
    }
    else if (uVar4 < uVar5) {
      *unaff_x24 = lVar3 + uVar4 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar6 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(undefined ***)(lVar3 + uVar6 * 8) = &DAT_073ee660;
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
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar6 = uVar4 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee670);
  lVar3 = *unaff_x20;
  uVar5 = *unaff_x24 - lVar3 >> 3;
  if (uVar5 <= uVar6) {
    if (uVar5 < uVar4) {
      FUN_02f8a56c();
      lVar3 = *unaff_x20;
    }
    else if (uVar4 < uVar5) {
      *unaff_x24 = lVar3 + uVar4 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar6 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(undefined ***)(lVar3 + uVar6 * 8) = &DAT_073ee670;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


