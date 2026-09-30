/*
FUNCTION_NAME: Niantic.Peridot.PaintBucket$$get_Position
ENTRY_POINT: 02d4d3c4
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior
*/


void Niantic_Peridot_PaintBucket__get_Position(void)

{
  undefined *puVar1;
  undefined *puVar2;
  __shared_count *p_Var3;
  __shared_count *p_Var4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  __shared_count *unaff_x23;
  ulong unaff_x24;
  ulong uVar8;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined *in_stack_00000010;
  undefined *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (unaff_x23 == (__shared_count *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02c84db8();
  }
  std::__ndk1::__shared_count::__add_shared(unaff_x23);
  lVar5 = *unaff_x20;
  uVar6 = *unaff_x26 - lVar5 >> 3;
  if (uVar6 <= unaff_x24) {
    uVar8 = unaff_x24 + 1;
    if (uVar6 < uVar8) {
      FUN_02d5f194();
      lVar5 = *unaff_x20;
    }
    else if (uVar8 < uVar6) {
      *unaff_x26 = lVar5 + uVar8 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar5 + unaff_x24 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar5 = *unaff_x20;
  }
  *(__shared_count **)(lVar5 + unaff_x24 * 8) = unaff_x23;
  puVar2 = Unity_VisualScripting_ValueInput_<>c_TypeInfo;
  puVar1 = Oculus_Interaction_UpdateDriverGroup_<>c_TypeInfo;
  if ((unaff_w22 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = Oculus_Interaction_UpdateDriverGroup_<>c_TypeInfo;
    in_stack_00000018 = Unity_VisualScripting_ValueInput_<>c_TypeInfo;
    if (*(long *)Oculus_Interaction_UpdateDriverGroup_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Oculus_Interaction_UpdateDriverGroup_<>c_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar1 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar1 = UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_TypeInfo;
    in_stack_00000018 = puVar2;
    if (*(long *)UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar1 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar1 = UnityEngine_UIElements_UnsignedLongField_UxmlFactory_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = UnityEngine_UIElements_UnsignedLongField_UxmlFactory_TypeInfo;
    in_stack_00000018 = puVar2;
    if (*(long *)UnityEngine_UIElements_UnsignedLongField_UxmlFactory_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_UnsignedLongField_UxmlFactory_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar1 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar1 = UnityEngine_UIElements_Vector3IntField_<>c_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = UnityEngine_UIElements_Vector3IntField_<>c_TypeInfo;
    in_stack_00000018 = puVar2;
    if (*(long *)UnityEngine_UIElements_Vector3IntField_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_Vector3IntField_<>c_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar1 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar1 = Unity_Properties_Internal_Vector3IntPropertyBag_XProperty_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = Unity_Properties_Internal_Vector3IntPropertyBag_XProperty_TypeInfo;
    in_stack_00000018 = puVar2;
    if (*(long *)Unity_Properties_Internal_Vector3IntPropertyBag_XProperty_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Unity_Properties_Internal_Vector3IntPropertyBag_XProperty_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar1 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar1 = UnityEngine_UIElements_Vector3Field_<>c_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = UnityEngine_UIElements_Vector3Field_<>c_TypeInfo;
    in_stack_00000018 = puVar2;
    if (*(long *)UnityEngine_UIElements_Vector3Field_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_Vector3Field_<>c_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar1 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
  }
  puVar2 = UnityEngine_UIElements_Vector2Field_<>c_TypeInfo;
  puVar1 = Unity_VisualScripting_ValueInput_<>c_TypeInfo;
  if ((unaff_w22 >> 4 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = UnityEngine_UIElements_Vector2Field_<>c_TypeInfo;
    in_stack_00000018 = Unity_VisualScripting_ValueInput_<>c_TypeInfo;
    if (*(long *)UnityEngine_UIElements_Vector2Field_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_Vector2Field_<>c_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = Firebase_VariantVariantMap_VariantVariantMapEnumerator_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = Firebase_VariantVariantMap_VariantVariantMapEnumerator_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)Firebase_VariantVariantMap_VariantVariantMapEnumerator_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Firebase_VariantVariantMap_VariantVariantMapEnumerator_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = UnityEngine_UIElements_Vector2IntField_<>c_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = UnityEngine_UIElements_Vector2IntField_<>c_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)UnityEngine_UIElements_Vector2IntField_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_Vector2IntField_<>c_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = UnityEngine_UIElements_Vector2Field_UxmlFactory_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = UnityEngine_UIElements_Vector2Field_UxmlFactory_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)UnityEngine_UIElements_Vector2Field_UxmlFactory_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_Vector2Field_UxmlFactory_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = Niantic_Peridot_Rpc_Vector4Proto_<>c_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = Niantic_Peridot_Rpc_Vector4Proto_<>c_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)Niantic_Peridot_Rpc_Vector4Proto_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Niantic_Peridot_Rpc_Vector4Proto_<>c_TypeInfo,(void *)(unaff_x29 + -0x18),
                 FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = VendingModule_<>c__DisplayClass53_0_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = VendingModule_<>c__DisplayClass53_0_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)VendingModule_<>c__DisplayClass53_0_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)VendingModule_<>c__DisplayClass53_0_TypeInfo,(void *)(unaff_x29 + -0x18),
                 FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = VendingModule_<>c__DisplayClass55_0_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = VendingModule_<>c__DisplayClass55_0_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)VendingModule_<>c__DisplayClass55_0_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)VendingModule_<>c__DisplayClass55_0_TypeInfo,(void *)(unaff_x29 + -0x18),
                 FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
  }
  puVar2 = Unity_VisualScripting_ValueInput_<>c__DisplayClass33_0_TypeInfo;
  puVar1 = Unity_VisualScripting_ValueInput_<>c_TypeInfo;
  if ((unaff_w22 >> 1 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = Unity_VisualScripting_ValueInput_<>c__DisplayClass33_0_TypeInfo;
    in_stack_00000018 = Unity_VisualScripting_ValueInput_<>c_TypeInfo;
    if (*(long *)Unity_VisualScripting_ValueInput_<>c__DisplayClass33_0_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Unity_VisualScripting_ValueInput_<>c__DisplayClass33_0_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = Unity_VisualScripting_ValueOutput_<>c__DisplayClass22_0_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = Unity_VisualScripting_ValueOutput_<>c__DisplayClass22_0_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)Unity_VisualScripting_ValueOutput_<>c__DisplayClass22_0_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Unity_VisualScripting_ValueOutput_<>c__DisplayClass22_0_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = UnityEngine_UIElements_UxmlHash128AttributeDescription_<>c_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = UnityEngine_UIElements_UxmlHash128AttributeDescription_<>c_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)UnityEngine_UIElements_UxmlHash128AttributeDescription_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_UxmlHash128AttributeDescription_<>c_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = UnityEngine_UIElements_UxmlStringAttributeDescription_<>c_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = UnityEngine_UIElements_UxmlStringAttributeDescription_<>c_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)UnityEngine_UIElements_UxmlStringAttributeDescription_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_UxmlStringAttributeDescription_<>c_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = UnityEngine_UIElements_UxmlUnsignedLongAttributeDescription_<>c_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = UnityEngine_UIElements_UxmlUnsignedLongAttributeDescription_<>c_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)UnityEngine_UIElements_UxmlUnsignedLongAttributeDescription_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_UxmlUnsignedLongAttributeDescription_<>c_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = UnityEngine_VFX_Utility_VFXInputTouchBinder_<>c_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = UnityEngine_VFX_Utility_VFXInputTouchBinder_<>c_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)UnityEngine_VFX_Utility_VFXInputTouchBinder_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_VFX_Utility_VFXInputTouchBinder_<>c_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
  }
  puVar2 = VendingModule_<>c__DisplayClass55_2_TypeInfo;
  puVar1 = Unity_VisualScripting_ValueInput_<>c_TypeInfo;
  if ((unaff_w22 >> 2 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = VendingModule_<>c__DisplayClass55_2_TypeInfo;
    in_stack_00000018 = Unity_VisualScripting_ValueInput_<>c_TypeInfo;
    if (*(long *)VendingModule_<>c__DisplayClass55_2_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)VendingModule_<>c__DisplayClass55_2_TypeInfo,(void *)(unaff_x29 + -0x18),
                 FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = VendingModule_<>c__DisplayClass57_1_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = VendingModule_<>c__DisplayClass57_1_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)VendingModule_<>c__DisplayClass57_1_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)VendingModule_<>c__DisplayClass57_1_TypeInfo,(void *)(unaff_x29 + -0x18),
                 FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = VendingModule_<>c__DisplayClass57_4_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = VendingModule_<>c__DisplayClass57_4_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)VendingModule_<>c__DisplayClass57_4_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)VendingModule_<>c__DisplayClass57_4_TypeInfo,(void *)(unaff_x29 + -0x18),
                 FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = VendingModule_<AnimateExtras>d__46_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = VendingModule_<AnimateExtras>d__46_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)VendingModule_<AnimateExtras>d__46_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)VendingModule_<AnimateExtras>d__46_TypeInfo,(void *)(unaff_x29 + -0x18),
                 FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
  }
  puVar2 = VendingModule_<HandleSlider>d__59_TypeInfo;
  puVar1 = Unity_VisualScripting_ValueInput_<>c_TypeInfo;
  if ((unaff_w22 >> 5 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = VendingModule_<HandleSlider>d__59_TypeInfo;
    in_stack_00000018 = Unity_VisualScripting_ValueInput_<>c_TypeInfo;
    if (*(long *)VendingModule_<HandleSlider>d__59_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)VendingModule_<HandleSlider>d__59_TypeInfo,(void *)(unaff_x29 + -0x18),
                 FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = Google_Protobuf_Compiler_Version_<>c_TypeInfo;
    in_stack_00000020 = 0;
    in_stack_00000010 = Google_Protobuf_Compiler_Version_<>c_TypeInfo;
    in_stack_00000018 = puVar1;
    if (*(long *)Google_Protobuf_Compiler_Version_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Google_Protobuf_Compiler_Version_<>c_TypeInfo,(void *)(unaff_x29 + -0x18),
                 FUN_02d5f2e4);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02c84db8();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_02d5f194();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


