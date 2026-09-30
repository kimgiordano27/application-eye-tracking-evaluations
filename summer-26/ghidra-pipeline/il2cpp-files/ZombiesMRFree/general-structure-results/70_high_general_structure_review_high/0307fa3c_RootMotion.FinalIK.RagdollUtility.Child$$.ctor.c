/*
FUNCTION_NAME: RootMotion.FinalIK.RagdollUtility.Child$$.ctor
ENTRY_POINT: 0307fa3c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void RootMotion_FinalIK_RagdollUtility_Child___ctor(void)

{
  undefined *puVar1;
  __shared_count *p_Var2;
  __shared_count *p_Var3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  __shared_count *unaff_x23;
  ulong unaff_x24;
  ulong uVar7;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined *in_stack_00000010;
  
  if (unaff_x23 == (__shared_count *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe82fc();
  }
  std::__ndk1::__shared_count::__add_shared(unaff_x23);
  lVar4 = *unaff_x20;
  uVar5 = *unaff_x26 - lVar4 >> 3;
  if (uVar5 <= unaff_x24) {
    uVar7 = unaff_x24 + 1;
    if (uVar5 < uVar7) {
      FUN_030918c8();
      lVar4 = *unaff_x20;
    }
    else if (uVar7 < uVar5) {
      *unaff_x26 = lVar4 + uVar7 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar4 + unaff_x24 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar4 = *unaff_x20;
  }
  *(__shared_count **)(lVar4 + unaff_x24 * 8) = unaff_x23;
  puVar1 = Meta_XR_ImmersiveDebugger_Manager_WatchManager_<>c_TypeInfo;
  in_stack_00000010 = Meta_XR_ImmersiveDebugger_Manager_WatchManager_<>c_TypeInfo;
  if (*(long *)Meta_XR_ImmersiveDebugger_Manager_WatchManager_<>c_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Meta_XR_ImmersiveDebugger_Manager_WatchManager_<>c_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar5 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe82fc();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var2);
  lVar4 = *unaff_x20;
  uVar6 = *unaff_x26 - lVar4 >> 3;
  if (uVar6 <= uVar7) {
    if (uVar6 < uVar5) {
      FUN_030918c8();
      lVar4 = *unaff_x20;
    }
    else if (uVar5 < uVar6) {
      *unaff_x26 = lVar4 + uVar5 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar4 = *unaff_x20;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  puVar1 = Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo;
  if ((unaff_w22 & 1) != 0) {
    in_stack_00000010 = Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo;
    if (*(long *)Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = UnityEngine_UIElements_VisualElement_TypeData_TypeInfo;
    in_stack_00000010 = UnityEngine_UIElements_VisualElement_TypeData_TypeInfo;
    if (*(long *)UnityEngine_UIElements_VisualElement_TypeData_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_VisualElement_TypeData_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo;
    in_stack_00000010 = UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo;
    if (*(long *)UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = 
    Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnUpdate_000000EA_BurstDirectCall_TypeInfo
    ;
    in_stack_00000010 =
         Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnUpdate_000000EA_BurstDirectCall_TypeInfo
    ;
    if (*(long *)
         Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnUpdate_000000EA_BurstDirectCall_TypeInfo
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnUpdate_000000EA_BurstDirectCall_TypeInfo
                 ,(void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Weapon_<DoDamage>d__55_TypeInfo;
    in_stack_00000010 = Weapon_<DoDamage>d__55_TypeInfo;
    if (*(long *)Weapon_<DoDamage>d__55_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Weapon_<DoDamage>d__55_TypeInfo,(void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = 
    Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnCreate_000000E9_BurstDirectCall_TypeInfo
    ;
    in_stack_00000010 =
         Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnCreate_000000E9_BurstDirectCall_TypeInfo
    ;
    if (*(long *)
         Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnCreate_000000E9_BurstDirectCall_TypeInfo
        != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnCreate_000000E9_BurstDirectCall_TypeInfo
                 ,(void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  }
  puVar1 = WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo;
  if ((unaff_w22 >> 4 & 1) != 0) {
    in_stack_00000010 = WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo;
    if (*(long *)WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo,(void *)(unaff_x29 + -0x18)
                 ,FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo;
    in_stack_00000010 = Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo;
    if (*(long *)Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo;
    in_stack_00000010 = WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo;
    if (*(long *)WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo;
    in_stack_00000010 = WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo;
    if (*(long *)WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo,(void *)(unaff_x29 + -0x18)
                 ,FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo;
    in_stack_00000010 = System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo;
    if (*(long *)System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo;
    in_stack_00000010 = System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo;
    if (*(long *)System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo;
    in_stack_00000010 = Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo;
    if (*(long *)Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo;
    in_stack_00000010 =
         Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo;
    if (*(long *)Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo !=
        -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  }
  puVar1 = UnityEngine_Rendering_VolumeManager_<>c_TypeInfo;
  if ((unaff_w22 >> 1 & 1) != 0) {
    in_stack_00000010 = UnityEngine_Rendering_VolumeManager_<>c_TypeInfo;
    if (*(long *)UnityEngine_Rendering_VolumeManager_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_Rendering_VolumeManager_<>c_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = VLB_VolumetricDustParticles_<>c_TypeInfo;
    in_stack_00000010 = VLB_VolumetricDustParticles_<>c_TypeInfo;
    if (*(long *)VLB_VolumetricDustParticles_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)VLB_VolumetricDustParticles_<>c_TypeInfo,(void *)(unaff_x29 + -0x18),
                 FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo;
    in_stack_00000010 = UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo;
    if (*(long *)UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = UnityEngine_UIElements_VisualElement_UxmlFactory_TypeInfo;
    in_stack_00000010 = UnityEngine_UIElements_VisualElement_UxmlFactory_TypeInfo;
    if (*(long *)UnityEngine_UIElements_VisualElement_UxmlFactory_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_VisualElement_UxmlFactory_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo;
    in_stack_00000010 = UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo;
    if (*(long *)UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo;
    in_stack_00000010 = UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo;
    if (*(long *)UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  }
  puVar1 = Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo;
  if ((unaff_w22 >> 2 & 1) != 0) {
    in_stack_00000010 = Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo;
    if (*(long *)Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo;
    in_stack_00000010 =
         Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo;
    if (*(long *)Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo !=
        -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = System_Data_XDRSchema_NameType_TypeInfo;
    in_stack_00000010 = System_Data_XDRSchema_NameType_TypeInfo;
    if (*(long *)System_Data_XDRSchema_NameType_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)System_Data_XDRSchema_NameType_TypeInfo,(void *)(unaff_x29 + -0x18),
                 FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo;
    in_stack_00000010 = MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo;
    if (*(long *)MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  }
  puVar1 = UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo;
  if ((unaff_w22 >> 5 & 1) != 0) {
    in_stack_00000010 = UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo
    ;
    if (*(long *)UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo != -1)
    {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)
                 UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo;
    in_stack_00000010 = UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo;
    if (*(long *)UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo,
                 (void *)(unaff_x29 + -0x18),FUN_03091a18);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_030918c8();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


