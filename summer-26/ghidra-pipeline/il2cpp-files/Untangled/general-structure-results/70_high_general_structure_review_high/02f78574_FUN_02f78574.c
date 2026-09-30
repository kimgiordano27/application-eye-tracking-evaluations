/*
FUNCTION_NAME: FUN_02f78574
ENTRY_POINT: 02f78574
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02f78574(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  void *pvVar5;
  __shared_count *p_Var6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_06cfbed0;
  param_1[1] = 0xffffffffffffffff;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar11 = param_1 + 2;
  *plVar11 = (long)(param_1 + 6);
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
  plVar13 = param_1 + 3;
  *plVar13 = (long)(param_1 + 0x22);
  *(undefined2 *)(param_1 + 0x24) = 0x2a02;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  if (param_1 != param_2) {
    FUN_02f8a3e4(plVar11,param_2[2],param_2[3]);
  }
  lVar7 = *plVar13;
  lVar8 = *plVar11;
  if (lVar7 != lVar8) {
    uVar9 = 0;
    uVar12 = 1;
    do {
      pvVar5 = *(void **)(lVar8 + uVar9 * 8);
      if (pvVar5 != (void *)0x0) {
        RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
        lVar7 = *plVar13;
        lVar8 = *plVar11;
      }
      bVar4 = uVar12 < (ulong)(lVar7 - lVar8 >> 3);
      uVar9 = uVar12;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (bVar4);
  }
  puVar3 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  if ((param_4 >> 3 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__;
    puStack_88 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
  }
  puVar3 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  puVar2 = Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__
  ;
  if ((param_4 & 1) != 0) {
    local_80 = 0;
    local_90 = 
    Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__;
    puStack_88 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
    if (*(long *)
         Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__
                 ,&local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar2 = Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__;
    puStack_88 = puVar3;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar2 = Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__;
    puStack_88 = puVar3;
    if (*(long *)
         Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__ != -1)
    {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__
                 ,&local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar2 = Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__;
    puStack_88 = puVar3;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar2 = Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__;
    puStack_88 = puVar3;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar2 = Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__;
    puStack_88 = puVar3;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
  }
  puVar3 = Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  if ((param_4 >> 4 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__;
    puStack_88 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__,&local_78,
                 FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__,&local_78
                 ,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__,&local_78
                 ,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__,&local_78,
                 FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__,&local_78,
                 FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__,&local_78,
                 FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
  }
  puVar3 = Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  if ((param_4 >> 1 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__;
    puStack_88 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__,&local_78,
                 FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<int>__ctor__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<int>__ctor__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<int>__ctor__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<int>__ctor__,&local_78,
                 FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__,&local_78,
                 FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<Enum>__ctor__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<Enum>__ctor__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Enum>__ctor__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Enum>__ctor__,&local_78,
                 FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__,&local_78
                 ,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
  }
  puVar3 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  if ((param_4 >> 2 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__;
    puStack_88 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
  }
  puVar3 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  if ((param_4 >> 5 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
    puStack_88 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
    puVar3 = Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
    local_80 = 0;
    local_90 = Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__,
                 &local_78,FUN_02f8a6bc);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (pvVar5 = *(void **)(*(long *)(param_3 + 0x10) + uVar12 * 8), pvVar5 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(void **)(lVar7 + uVar12 * 8) = pvVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


