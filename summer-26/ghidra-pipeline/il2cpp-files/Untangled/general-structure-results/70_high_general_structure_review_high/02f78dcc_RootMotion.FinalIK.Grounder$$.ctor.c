/*
FUNCTION_NAME: RootMotion.FinalIK.Grounder$$.ctor
ENTRY_POINT: 02f78dcc
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void RootMotion_FinalIK_Grounder___ctor(void)

{
  undefined *puVar1;
  __shared_count *p_Var2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  undefined8 unaff_x23;
  void *pvVar6;
  long unaff_x24;
  ulong uVar7;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined *in_stack_00000010;
  
  lVar3 = *unaff_x20;
  p_Var2 = *(__shared_count **)(lVar3 + unaff_x24 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(undefined8 *)(lVar3 + unaff_x24 * 8) = unaff_x23;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__;
  in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar4 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ee9ec0();
  }
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
  lVar3 = *unaff_x20;
  uVar5 = *unaff_x26 - lVar3 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar5 < uVar4) {
      FUN_02f8a56c();
      lVar3 = *unaff_x20;
    }
    else if (uVar4 < uVar5) {
      *unaff_x26 = lVar3 + uVar4 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(void **)(lVar3 + uVar7 * 8) = pvVar6;
  puVar1 = Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__;
  in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar4 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ee9ec0();
  }
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
  lVar3 = *unaff_x20;
  uVar5 = *unaff_x26 - lVar3 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar5 < uVar4) {
      FUN_02f8a56c();
      lVar3 = *unaff_x20;
    }
    else if (uVar4 < uVar5) {
      *unaff_x26 = lVar3 + uVar4 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(void **)(lVar3 + uVar7 * 8) = pvVar6;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__;
  in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar4 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ee9ec0();
  }
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
  lVar3 = *unaff_x20;
  uVar5 = *unaff_x26 - lVar3 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar5 < uVar4) {
      FUN_02f8a56c();
      lVar3 = *unaff_x20;
    }
    else if (uVar4 < uVar5) {
      *unaff_x26 = lVar3 + uVar4 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(void **)(lVar3 + uVar7 * 8) = pvVar6;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__;
  in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar4 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ee9ec0();
  }
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
  lVar3 = *unaff_x20;
  uVar5 = *unaff_x26 - lVar3 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar5 < uVar4) {
      FUN_02f8a56c();
      lVar3 = *unaff_x20;
    }
    else if (uVar4 < uVar5) {
      *unaff_x26 = lVar3 + uVar4 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(void **)(lVar3 + uVar7 * 8) = pvVar6;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
  in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar4 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ee9ec0();
  }
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
  lVar3 = *unaff_x20;
  uVar5 = *unaff_x26 - lVar3 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar5 < uVar4) {
      FUN_02f8a56c();
      lVar3 = *unaff_x20;
    }
    else if (uVar4 < uVar5) {
      *unaff_x26 = lVar3 + uVar4 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(void **)(lVar3 + uVar7 * 8) = pvVar6;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__;
  in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar4 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ee9ec0();
  }
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
  lVar3 = *unaff_x20;
  uVar5 = *unaff_x26 - lVar3 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar5 < uVar4) {
      FUN_02f8a56c();
      lVar3 = *unaff_x20;
    }
    else if (uVar4 < uVar5) {
      *unaff_x26 = lVar3 + uVar4 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(void **)(lVar3 + uVar7 * 8) = pvVar6;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__;
  if ((unaff_w22 >> 1 & 1) != 0) {
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_02f8a56c();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(void **)(lVar3 + uVar7 * 8) = pvVar6;
    puVar1 = Method_UnityEngine_UIElements_BaseField<int>__ctor__;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<int>__ctor__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<int>__ctor__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<int>__ctor__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_02f8a56c();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(void **)(lVar3 + uVar7 * 8) = pvVar6;
    puVar1 = Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_02f8a56c();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(void **)(lVar3 + uVar7 * 8) = pvVar6;
    puVar1 = Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_02f8a56c();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(void **)(lVar3 + uVar7 * 8) = pvVar6;
    puVar1 = Method_UnityEngine_UIElements_BaseField<Enum>__ctor__;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Enum>__ctor__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Enum>__ctor__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Enum>__ctor__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_02f8a56c();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(void **)(lVar3 + uVar7 * 8) = pvVar6;
    puVar1 = Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_02f8a56c();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(void **)(lVar3 + uVar7 * 8) = pvVar6;
  }
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__;
  if ((unaff_w22 >> 2 & 1) != 0) {
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_02f8a56c();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(void **)(lVar3 + uVar7 * 8) = pvVar6;
    puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_02f8a56c();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(void **)(lVar3 + uVar7 * 8) = pvVar6;
    puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_02f8a56c();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(void **)(lVar3 + uVar7 * 8) = pvVar6;
    puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_02f8a56c();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(void **)(lVar3 + uVar7 * 8) = pvVar6;
  }
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  if ((unaff_w22 >> 5 & 1) != 0) {
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_02f8a56c();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(void **)(lVar3 + uVar7 * 8) = pvVar6;
    puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
    in_stack_00000010 =
         Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
    if (*(long *)Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (pvVar6 = *(void **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8), pvVar6 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_02f8a56c();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(void **)(lVar3 + uVar7 * 8) = pvVar6;
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


