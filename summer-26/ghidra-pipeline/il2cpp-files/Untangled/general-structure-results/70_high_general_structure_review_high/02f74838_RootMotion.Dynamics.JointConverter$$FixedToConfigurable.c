/*
FUNCTION_NAME: RootMotion.Dynamics.JointConverter$$FixedToConfigurable
ENTRY_POINT: 02f74838
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void RootMotion_Dynamics_JointConverter__FixedToConfigurable(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  __shared_count *p_Var4;
  __locale_t p_Var5;
  ulong uVar6;
  long lVar7;
  undefined8 in_x9;
  ulong uVar8;
  long *unaff_x20;
  long *unaff_x21;
  ulong uVar9;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x28;
  long unaff_x29;
  undefined8 uStack0000000000000020;
  
  param_1[3] = 0;
  *param_1 = in_x9;
  param_1[1] = 0;
  uStack0000000000000020 = 0;
  if (*unaff_x21 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)(int)unaff_x21[1];
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee4c0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined8 **)(lVar7 + uVar9 * 8) = &DAT_073ee4c0;
  puVar1 = Method_UnityEngine_UIElements_BaseField<int>__ctor__;
  DAT_073ee4f0 = Method_UnityEngine_UIElements_BaseField<string>_set_showMixedValue__ + 0x10;
  DAT_073ee510 = 0;
  DAT_073ee518 = 0;
  DAT_073ee508 = 0;
  DAT_073ee4f8 = 0;
  DAT_073ee500 = DAT_013f59d8;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<int>__ctor__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<int>__ctor__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee4f0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee4f0;
  puVar1 = Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__;
  DAT_073ee520 = Method_UnityEngine_UIElements_BaseField<string>_set_value__ + 0x10;
  DAT_073ee528 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee520);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee520;
  puVar1 = Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__;
  DAT_073ee530 = Method_UnityEngine_UIElements_BaseField<uint>_get_labelElement__ + 0x10;
  DAT_073ee538 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee530);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee530;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Enum>__ctor__;
  DAT_073ee540 = Method_UnityEngine_UIElements_BaseField<uint>_get_rawValue__ + 0x10;
  DAT_073ee548 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Enum>__ctor__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Enum>__ctor__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee540);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee540;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__;
  DAT_073ee550 = Method_UnityEngine_UIElements_BaseField<uint>_get_visualInput__ + 0x10;
  DAT_073ee558 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee550);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee550;
  puVar1 = Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__;
  DAT_073ee560 = Method_UnityEngine_UIElements_BaseField<ulong>_get_labelElement__ + 0x10;
  DAT_073ee568 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee560);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee560;
  puVar1 = Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__;
  DAT_073ee570 = Method_UnityEngine_UIElements_BaseField<ulong>_get_rawValue__ + 0x10;
  DAT_073ee578 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee570);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee570;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__;
  DAT_073ee580 = Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__ + 0x10;
  DAT_073ee588 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee580);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee580;
  puVar1 = Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__;
  DAT_073ee590 = Method_UnityEngine_UIElements_BaseField<Vector2>__ctor__ + 0x10;
  DAT_073ee598 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee590);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee590;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__;
  DAT_073ee5a0 = Method_UnityEngine_UIElements_BaseField<Vector2>_EndEditing__ + 0x10;
  DAT_073ee5a8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee5a0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee5a0;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__;
  DAT_073ee5b0 = Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__ + 0x10;
  DAT_073ee5b8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee5b0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee5b0;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
  DAT_073ee5c0 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_rawValue__ + 0x10;
  DAT_073ee5c8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee5c0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee5c0;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__;
  DAT_073ee5d0 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__ + 0x10;
  DAT_073ee5d8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee5d0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee5d0;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__;
  DAT_073ee5e0 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__ + 0x10;
  DAT_073ee5f0 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__ + 0x70;
  DAT_073ee5e8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee5e0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee5e0;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__;
  DAT_073ee600 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__ + 0x10;
  DAT_073ee610 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__ + 0x70;
  DAT_073ee608 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee600);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee600;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__;
  DAT_073ee620 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__ + 0x10;
  DAT_073ee628 = 0;
  if (((DAT_073eda50 & 1) == 0) &&
     (iVar3 = RootMotion_FinalIK_IKSolverFABRIK__SolverRotateChildren(&DAT_073eda50), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0xa48) = p_Var5;
    __cxa_guard_release(&DAT_073eda50);
  }
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__;
  DAT_073ee630 = *(undefined8 *)(unaff_x28 + 0xa48);
  DAT_073ee620 = Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__ + 0x10;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee620);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee620;
  DAT_073ee640 = puVar1 + 0x10;
  DAT_073ee648 = 0;
  if (((DAT_073eda50 & 1) == 0) &&
     (iVar3 = RootMotion_FinalIK_IKSolverFABRIK__SolverRotateChildren(&DAT_073eda50), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0xa48) = p_Var5;
    __cxa_guard_release(&DAT_073eda50);
  }
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
  DAT_073ee650 = *(undefined8 *)(unaff_x28 + 0xa48);
  DAT_073ee640 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__ + 0x10;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee640);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee640;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  DAT_073ee660 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__ + 0x10;
  DAT_073ee668 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee660);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee660;
  puVar1 = Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
  DAT_073ee670 = Method_UnityEngine_UIElements_BaseSlider<int>__ctor__ + 0x10;
  DAT_073ee678 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__ !=
      -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__,
               (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee670);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02f8a56c();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_073ee670;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


