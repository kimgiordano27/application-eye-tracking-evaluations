/*
FUNCTION_NAME: RootMotion.Dynamics.RagdollEditor$$OpenUserManual
ENTRY_POINT: 02f75590
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


void RootMotion_Dynamics_RagdollEditor__OpenUserManual(void)

{
  undefined *puVar1;
  undefined *puVar2;
  __shared_count *p_Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long *unaff_x21;
  ulong uVar7;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x28;
  long unaff_x29;
  undefined *puStack0000000000000010;
  undefined8 uStack0000000000000020;
  
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__;
  unaff_x21[2] = *(long *)(unaff_x28 + 0xa48);
  *unaff_x21 = (long)(puVar1 + 0x10);
  puStack0000000000000010 = puVar2;
  uStack0000000000000020 = 0;
  if (*(long *)puVar2 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar4 = (ulong)*(int *)(puVar2 + 8);
  uVar7 = uVar4 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee640);
  lVar5 = *unaff_x20;
  uVar6 = *unaff_x24 - lVar5 >> 3;
  if (uVar6 <= uVar7) {
    if (uVar6 < uVar4) {
      FUN_02f8a56c();
      lVar5 = *unaff_x20;
    }
    else if (uVar4 < uVar6) {
      *unaff_x24 = lVar5 + uVar4 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar5 + uVar7 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *unaff_x20;
  }
  *(undefined8 **)(lVar5 + uVar7 * 8) = &DAT_073ee640;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  DAT_073ee660 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__ + 0x10;
  puStack0000000000000010 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  DAT_073ee668 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar4 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee660);
  lVar5 = *unaff_x20;
  uVar6 = *unaff_x24 - lVar5 >> 3;
  if (uVar6 <= uVar7) {
    if (uVar6 < uVar4) {
      FUN_02f8a56c();
      lVar5 = *unaff_x20;
    }
    else if (uVar4 < uVar6) {
      *unaff_x24 = lVar5 + uVar4 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar5 + uVar7 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *unaff_x20;
  }
  *(undefined ***)(lVar5 + uVar7 * 8) = &DAT_073ee660;
  puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
  DAT_073ee670 = Method_UnityEngine_UIElements_BaseSlider<int>__ctor__ + 0x10;
  puStack0000000000000010 =
       Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
  DAT_073ee678 = 0;
  uStack0000000000000020 = 0;
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
  uVar7 = uVar4 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee670);
  lVar5 = *unaff_x20;
  uVar6 = *unaff_x24 - lVar5 >> 3;
  if (uVar6 <= uVar7) {
    if (uVar6 < uVar4) {
      FUN_02f8a56c();
      lVar5 = *unaff_x20;
    }
    else if (uVar4 < uVar6) {
      *unaff_x24 = lVar5 + uVar4 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar5 + uVar7 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *unaff_x20;
  }
  *(undefined ***)(lVar5 + uVar7 * 8) = &DAT_073ee670;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


