/*
FUNCTION_NAME: RootMotion.Dynamics.RagdollEditor$$OpenTutorial
ENTRY_POINT: 02f75660
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure
*/


void RootMotion_Dynamics_RagdollEditor__OpenTutorial(void)

{
  undefined *puVar1;
  __shared_count *p_Var2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  long *unaff_x20;
  long unaff_x21;
  long *plVar6;
  ulong uVar7;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  long *plStack0000000000000010;
  undefined8 uStack0000000000000020;
  
  plVar6 = *(long **)(unaff_x21 + 0x268);
  DAT_073ee660 = in_x9 + 0x10;
  DAT_073ee668 = 0;
  uStack0000000000000020 = 0;
  plStack0000000000000010 = plVar6;
  if (*plVar6 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(long ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar3 = (ulong)(int)plVar6[1];
  uVar7 = uVar3 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee660);
  lVar4 = *unaff_x20;
  uVar5 = *unaff_x24 - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar5 < uVar3) {
      FUN_02f8a56c();
      lVar4 = *unaff_x20;
    }
    else if (uVar3 < uVar5) {
      *unaff_x24 = lVar4 + uVar3 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar4 = *unaff_x20;
  }
  *(long **)(lVar4 + uVar7 * 8) = &DAT_073ee660;
  puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
  DAT_073ee670 = Method_UnityEngine_UIElements_BaseSlider<int>__ctor__ + 0x10;
  plStack0000000000000010 =
       (long *)Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
  DAT_073ee678 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__ !=
      -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(long ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar3 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar3 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee670);
  lVar4 = *unaff_x20;
  uVar5 = *unaff_x24 - lVar4 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar5 < uVar3) {
      FUN_02f8a56c();
      lVar4 = *unaff_x20;
    }
    else if (uVar3 < uVar5) {
      *unaff_x24 = lVar4 + uVar3 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar4 = *unaff_x20;
  }
  *(undefined ***)(lVar4 + uVar7 * 8) = &DAT_073ee670;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


