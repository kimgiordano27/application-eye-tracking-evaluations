/*
FUNCTION_NAME: FUN_02f74114
ENTRY_POINT: 02f74114
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_12;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02f74114(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  __shared_count *p_Var6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_06cfbed0;
  param_1[1] = param_2 + -1;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar10 = param_1 + 2;
  *plVar10 = (long)(param_1 + 6);
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[4] = param_1 + 0x22;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  plVar12 = param_1 + 3;
  *plVar12 = *plVar10;
  puVar3 = Method_UnityEngine_UIElements_BaseField<Rect>_get_visualInput__;
  *(undefined2 *)(param_1 + 0x24) = 0x4302;
  puVar2 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__;
  DAT_073ee420 = puVar3 + 0x10;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  puVar3 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  DAT_073ee428 = 0;
  local_80 = 0;
  local_90 = puVar2;
  puStack_88 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  if (*(long *)puVar2 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__,
               &local_78,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee420);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee420;
  puVar2 = Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__;
  DAT_073ee430 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_visualInput__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__;
  puStack_88 = puVar3;
  DAT_073ee438 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__,&local_78,
               FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee430);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee430;
  puVar2 = Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__
  ;
  DAT_073ee450 = &DAT_01b58020;
  DAT_073ee440 = Method_UnityEngine_UIElements_BaseField<float>_get_rawValue__ + 0x10;
  DAT_073ee458 = 0;
  DAT_073ee448 = 0;
  local_90 = 
  Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)
       Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__ !=
      -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__
               ,&local_78,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee440);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee440;
  puVar2 = Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__;
  DAT_073ee460 = Method_UnityEngine_UIElements_BaseField<float>_get_visualInput__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__;
  puStack_88 = puVar3;
  DAT_073ee468 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__,&local_78
               ,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee460);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee460;
  puVar2 = Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__;
  DAT_073ee470 = Method_UnityEngine_UIElements_BaseField<string>_OnViewDataReady__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__;
  puStack_88 = puVar3;
  DAT_073ee478 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__
      != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__,
               &local_78,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee470);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee470;
  DAT_073ee480 = Method_UnityEngine_UIElements_BaseField<string>_SetValueWithoutNotify__ + 0x10;
  DAT_073ee488 = 0;
  if (((DAT_073eda50 & 1) == 0) &&
     (iVar5 = RootMotion_FinalIK_IKSolverFABRIK__SolverRotateChildren(&DAT_073eda50), iVar5 != 0)) {
    DAT_073eda48 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_073eda50);
  }
  puVar2 = Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__;
  DAT_073ee490 = DAT_073eda48;
  local_80 = 0;
  local_90 = Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__;
  puStack_88 = puVar3;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__,&local_78
               ,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee480);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee480;
  puVar2 = Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__;
  DAT_073ee4a0 = Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__;
  puStack_88 = puVar3;
  DAT_073ee4a8 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__,
               &local_78,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee4a0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee4a0;
  puVar2 = Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__;
  DAT_073ee4b0 = Method_UnityEngine_UIElements_BaseField<string>_get_value__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__;
  puStack_88 = puVar3;
  DAT_073ee4b8 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__,&local_78,
               FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee4b0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee4b0;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__;
  DAT_073ee4d0 = 0x2c2e;
  DAT_073ee4c0 = Method_UnityEngine_UIElements_BaseField<string>_set_label__ + 0x10;
  DAT_073ee4e0 = 0;
  DAT_073ee4e8 = 0;
  DAT_073ee4d8 = 0;
  local_90 = Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__;
  puStack_88 = puVar3;
  DAT_073ee4c8 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__,&local_78,
               FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee4c0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee4c0;
  puVar2 = Method_UnityEngine_UIElements_BaseField<int>__ctor__;
  DAT_073ee4f0 = Method_UnityEngine_UIElements_BaseField<string>_set_showMixedValue__ + 0x10;
  DAT_073ee510 = 0;
  DAT_073ee518 = 0;
  DAT_073ee508 = 0;
  local_90 = Method_UnityEngine_UIElements_BaseField<int>__ctor__;
  puStack_88 = puVar3;
  DAT_073ee4f8 = 0;
  DAT_073ee500 = DAT_013f59d8;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<int>__ctor__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<int>__ctor__,&local_78,FUN_02f8a6bc)
    ;
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee4f0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee4f0;
  puVar2 = Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__;
  DAT_073ee520 = Method_UnityEngine_UIElements_BaseField<string>_set_value__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__;
  puStack_88 = puVar3;
  DAT_073ee528 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__,
               &local_78,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee520);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee520;
  puVar2 = Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__;
  DAT_073ee530 = Method_UnityEngine_UIElements_BaseField<uint>_get_labelElement__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__;
  puStack_88 = puVar3;
  DAT_073ee538 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__,&local_78,
               FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee530);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee530;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Enum>__ctor__;
  DAT_073ee540 = Method_UnityEngine_UIElements_BaseField<uint>_get_rawValue__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<Enum>__ctor__;
  puStack_88 = puVar3;
  DAT_073ee548 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Enum>__ctor__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Enum>__ctor__,&local_78,FUN_02f8a6bc
              );
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee540);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee540;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__;
  DAT_073ee550 = Method_UnityEngine_UIElements_BaseField<uint>_get_visualInput__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__;
  puStack_88 = puVar3;
  DAT_073ee558 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__,&local_78,
               FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee550);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee550;
  puVar2 = Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__;
  DAT_073ee560 = Method_UnityEngine_UIElements_BaseField<ulong>_get_labelElement__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__;
  puStack_88 = puVar3;
  DAT_073ee568 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__,&local_78,
               FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee560);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee560;
  puVar2 = Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__;
  DAT_073ee570 = Method_UnityEngine_UIElements_BaseField<ulong>_get_rawValue__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__;
  puStack_88 = puVar3;
  DAT_073ee578 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__,&local_78,
               FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee570);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee570;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__;
  DAT_073ee580 = Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__;
  puStack_88 = puVar3;
  DAT_073ee588 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__,&local_78,
               FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee580);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee580;
  puVar2 = Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__;
  DAT_073ee590 = Method_UnityEngine_UIElements_BaseField<Vector2>__ctor__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__;
  puStack_88 = puVar3;
  DAT_073ee598 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__,&local_78,
               FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee590);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee590;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__;
  DAT_073ee5a0 = Method_UnityEngine_UIElements_BaseField<Vector2>_EndEditing__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__;
  puStack_88 = puVar3;
  DAT_073ee5a8 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__,
               &local_78,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee5a0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee5a0;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__;
  DAT_073ee5b0 = Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__;
  puStack_88 = puVar3;
  DAT_073ee5b8 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__,
               &local_78,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee5b0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee5b0;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
  DAT_073ee5c0 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_rawValue__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
  puStack_88 = puVar3;
  DAT_073ee5c8 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__,&local_78,
               FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee5c0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee5c0;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__;
  DAT_073ee5d0 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__;
  puStack_88 = puVar3;
  DAT_073ee5d8 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__,&local_78,
               FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee5d0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee5d0;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__;
  DAT_073ee5e0 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__ + 0x10;
  DAT_073ee5f0 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__ + 0x70;
  local_90 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__;
  puStack_88 = puVar3;
  DAT_073ee5e8 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__,
               &local_78,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee5e0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee5e0;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__;
  DAT_073ee600 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__ + 0x10;
  DAT_073ee610 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__ + 0x70;
  local_90 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__;
  puStack_88 = puVar3;
  DAT_073ee608 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__,
               &local_78,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee600);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee600;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__;
  DAT_073ee620 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_visualInput__ + 0x10;
  DAT_073ee628 = 0;
  if (((DAT_073eda50 & 1) == 0) &&
     (iVar5 = RootMotion_FinalIK_IKSolverFABRIK__SolverRotateChildren(&DAT_073eda50), iVar5 != 0)) {
    DAT_073eda48 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_073eda50);
  }
  puVar4 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__;
  DAT_073ee630 = DAT_073eda48;
  DAT_073ee620 = Method_UnityEngine_UIElements_BaseField<Vector3>_set_showMixedValue__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__,
               &local_78,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar4 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee620);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee620;
  DAT_073ee640 = puVar2 + 0x10;
  DAT_073ee648 = 0;
  if (((DAT_073eda50 & 1) == 0) &&
     (iVar5 = RootMotion_FinalIK_IKSolverFABRIK__SolverRotateChildren(&DAT_073eda50), iVar5 != 0)) {
    DAT_073eda48 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_073eda50);
  }
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
  DAT_073ee650 = DAT_073eda48;
  DAT_073ee640 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_visualInput__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__,
               &local_78,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee640);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee640;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  DAT_073ee660 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  puStack_88 = puVar3;
  DAT_073ee668 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,&local_78
               ,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee660);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee660;
  puVar2 = Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
  DAT_073ee670 = Method_UnityEngine_UIElements_BaseSlider<int>__ctor__ + 0x10;
  local_90 = Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
  puStack_88 = puVar3;
  DAT_073ee678 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__ !=
      -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__,
               &local_78,FUN_02f8a6bc);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(&DAT_073ee670);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02f8a56c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_073ee670;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


