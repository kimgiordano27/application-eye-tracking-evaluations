/*
FUNCTION_NAME: RootMotion.FinalIK.FingerRig$$RemoveFinger
ENTRY_POINT: 02f785a8
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


void RootMotion_FinalIK_FingerRig__RemoveFinger
               (long param_1,long *param_2,long *param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  void *pvVar4;
  __shared_count *p_Var5;
  long lVar6;
  undefined8 in_x9;
  long lVar7;
  ulong uVar8;
  long in_x10;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long unaff_x27;
  long unaff_x29;
  long *plStack0000000000000008;
  undefined *in_stack_00000010;
  undefined *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  plStack0000000000000008 = param_2 + 0x22;
  *(undefined8 *)(unaff_x29 + -8) = in_x9;
  *param_2 = in_x10 + 0xed0;
  param_2[1] = param_1;
  param_2[7] = 0;
  param_2[6] = 0;
  plVar10 = param_2 + 2;
  *plVar10 = (long)(param_2 + 6);
  *(undefined1 *)(param_2 + 0x22) = 1;
  param_2[4] = (long)plStack0000000000000008;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_2[0x1d] = 0;
  param_2[0x1c] = 0;
  param_2[0x1f] = 0;
  param_2[0x1e] = 0;
  param_2[0x21] = 0;
  param_2[0x20] = 0;
  plVar12 = param_2 + 3;
  *plVar12 = (long)plStack0000000000000008;
  *(undefined2 *)(param_2 + 0x24) = 0x2a02;
  *(undefined1 *)((long)param_2 + 0x122) = 0;
  if (param_2 != param_3) {
    FUN_02f8a3e4(plVar10,param_3[2],param_3[3]);
  }
  lVar6 = *plVar12;
  lVar7 = *plVar10;
  if (lVar6 != lVar7) {
    uVar8 = 0;
    uVar11 = 1;
    do {
      pvVar4 = *(void **)(lVar7 + uVar8 * 8);
      if (pvVar4 != (void *)0x0) {
        RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
        lVar6 = *plVar12;
        lVar7 = *plVar10;
      }
      bVar3 = uVar11 < (ulong)(lVar6 - lVar7 >> 3);
      uVar8 = uVar11;
      uVar11 = (ulong)((int)uVar11 + 1);
    } while (bVar3);
  }
  puVar2 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  if ((param_5 >> 3 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__;
    in_stack_00000018 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<RectInt>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
  }
  puVar2 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  puVar1 = Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__
  ;
  if ((param_5 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__;
    in_stack_00000018 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
    if (*(long *)
         Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_UnityEngine_UIElements_BaseFieldTraits<bool,_UxmlBoolAttributeDescription>__ctor__
                 ,(void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar1 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar1 = Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__;
    in_stack_00000018 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar1 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar1 = Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__;
    in_stack_00000018 = puVar2;
    if (*(long *)
         Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__ != -1)
    {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_UnityEngine_UIElements_BaseCompositeField<Vector3,_FloatField,_float>__ctor__
                 ,(void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar1 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar1 = Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__;
    in_stack_00000018 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<string>_get_showMixedValue__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar1 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar1 = Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__;
    in_stack_00000018 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<string>_get_visualInput__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar1 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar1 = Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__;
    in_stack_00000018 = puVar2;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar1 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
  }
  puVar2 = Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  if ((param_5 >> 4 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__;
    in_stack_00000018 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<long>_get_rawValue__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<long>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Rect>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<long>_get_visualInput__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
  }
  puVar2 = Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  if ((param_5 >> 1 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__;
    in_stack_00000018 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<int>__ctor__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<int>__ctor__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<int>__ctor__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<int>__ctor__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<Enum>__ctor__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Enum>__ctor__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Enum>__ctor__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Enum>__ctor__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
  }
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  if ((param_5 >> 2 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__;
    in_stack_00000018 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_get_labelElement__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
  }
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
  if ((param_5 >> 5 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
    in_stack_00000018 = Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__;
    if (*(long *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
    puVar2 = Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
    in_stack_00000020 = 0;
    in_stack_00000010 =
         Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__,
                 (void *)(unaff_x29 + -0x18),FUN_02f8a6bc);
    }
    uVar8 = (ulong)*(int *)(puVar2 + 8);
    uVar11 = uVar8 - 1;
    if (((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10) >> 3) <= uVar11) ||
       (pvVar4 = *(void **)(*(long *)(param_4 + 0x10) + uVar11 * 8), pvVar4 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ee9ec0();
    }
    RootMotion_FinalIK_FBIKChain_ChildConstraint__Solve(pvVar4);
    lVar6 = *plVar10;
    uVar9 = *plVar12 - lVar6 >> 3;
    if (uVar9 <= uVar11) {
      if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
        if (uVar8 < uVar9) {
          *plVar12 = lVar6 + uVar8 * 8;
        }
      }
      else {
        FUN_02f8a56c(plVar10,uVar8 - uVar9);
        lVar6 = *plVar10;
      }
    }
    p_Var5 = *(__shared_count **)(lVar6 + uVar11 * 8);
    if (p_Var5 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var5);
      lVar6 = *plVar10;
    }
    *(void **)(lVar6 + uVar11 * 8) = pvVar4;
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


