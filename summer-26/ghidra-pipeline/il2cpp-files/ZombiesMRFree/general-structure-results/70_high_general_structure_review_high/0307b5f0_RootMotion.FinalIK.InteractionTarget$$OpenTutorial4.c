/*
FUNCTION_NAME: RootMotion.FinalIK.InteractionTarget$$OpenTutorial4
ENTRY_POINT: 0307b5f0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void RootMotion_FinalIK_InteractionTarget__OpenTutorial4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  __shared_count *p_Var4;
  ulong uVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  long *unaff_x20;
  long *unaff_x21;
  ulong uVar8;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined8 uStack0000000000000020;
  
  *(long *)(param_1 + 0x8a0) = in_x9 + 0x10;
  *(undefined8 *)(param_1 + 0x8a8) = 0;
  uStack0000000000000020 = 0;
  if (*unaff_x21 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Meta_XR_ImmersiveDebugger_Manager_WatchManager_<>c_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)(int)unaff_x21[1];
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c28a0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined8 **)(lVar6 + uVar8 * 8) = &DAT_075c28a0;
  puVar1 = Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo;
  DAT_075c28c0 = &DAT_01b53328;
  DAT_075c28b0 = Meta_XR_ImmersiveDebugger_Manager_WatchTexture_<>c__DisplayClass0_0_TypeInfo + 0x10
  ;
  DAT_075c28c8 = 0;
  DAT_075c28b8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c28b0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c28b0;
  puVar1 = UnityEngine_UIElements_VisualElement_TypeData_TypeInfo;
  DAT_075c28d0 = Meta_XR_ImmersiveDebugger_Manager_WatchUtils_<>c_TypeInfo + 0x10;
  DAT_075c28d8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)UnityEngine_UIElements_VisualElement_TypeData_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_VisualElement_TypeData_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c28d0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c28d0;
  puVar1 = UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo;
  DAT_075c28e0 = Oculus_Interaction_Demo_WaterSpray_<StampRoutine>d__35_TypeInfo + 0x10;
  DAT_075c28e8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c28e0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c28e0;
  DAT_075c28f0 = Oculus_Interaction_Demo_WaterSpray_NonAlloc_TypeInfo + 0x10;
  DAT_075c28f8 = 0;
  if (((DAT_075c1ec0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_075c1ec0), iVar3 != 0)) {
    DAT_075c1eb8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_075c1ec0);
  }
  puVar1 = 
  Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnCreate_000000E9_BurstDirectCall_TypeInfo
  ;
  DAT_075c2900 = DAT_075c1eb8;
  uStack0000000000000020 = 0;
  if (*(long *)
       Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnCreate_000000E9_BurstDirectCall_TypeInfo
      != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnCreate_000000E9_BurstDirectCall_TypeInfo
               ,(void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c28f0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c28f0;
  puVar1 = 
  Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnUpdate_000000EA_BurstDirectCall_TypeInfo
  ;
  DAT_075c2910 = Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnDestroy_000000EB_BurstDirectCall_TypeInfo
                 + 0x10;
  DAT_075c2918 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)
       Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnUpdate_000000EA_BurstDirectCall_TypeInfo
      != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnUpdate_000000EA_BurstDirectCall_TypeInfo
               ,(void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2910);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2910;
  puVar1 = Weapon_<DoDamage>d__55_TypeInfo;
  DAT_075c2920 = System_ComponentModel_WeakHashtable_WeakKeyComparer_TypeInfo + 0x10;
  DAT_075c2928 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Weapon_<DoDamage>d__55_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Weapon_<DoDamage>d__55_TypeInfo,(void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2920);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2920;
  puVar1 = UnityEngine_Rendering_VolumeManager_<>c_TypeInfo;
  DAT_075c2940 = 0x2c2e;
  DAT_075c2930 = Weapon_<EnableAimAssistanceAfterDelay>d__52_TypeInfo + 0x10;
  DAT_075c2950 = 0;
  DAT_075c2958 = 0;
  DAT_075c2948 = 0;
  DAT_075c2938 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)UnityEngine_Rendering_VolumeManager_<>c_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_Rendering_VolumeManager_<>c_TypeInfo,(void *)(unaff_x29 + -0x18)
               ,FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2930);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2930;
  puVar1 = VLB_VolumetricDustParticles_<>c_TypeInfo;
  DAT_075c2960 = WeaponAimAssist_<EnableAimAssistanceAfterDelay>d__10_TypeInfo + 0x10;
  DAT_075c2980 = 0;
  DAT_075c2988 = 0;
  DAT_075c2978 = 0;
  DAT_075c2968 = 0;
  DAT_075c2970 = DAT_0136b330;
  uStack0000000000000020 = 0;
  if (*(long *)VLB_VolumetricDustParticles_<>c_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)VLB_VolumetricDustParticles_<>c_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2960);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2960;
  puVar1 = UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo;
  DAT_075c2990 = WeaponCollision_<IgnoreAI>d__52_TypeInfo + 0x10;
  DAT_075c2998 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2990);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2990;
  puVar1 = UnityEngine_UIElements_VisualElement_UxmlFactory_TypeInfo;
  DAT_075c29a0 = WeaponExplosion_<>c__DisplayClass36_0_TypeInfo + 0x10;
  DAT_075c29a8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)UnityEngine_UIElements_VisualElement_UxmlFactory_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_VisualElement_UxmlFactory_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c29a0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c29a0;
  puVar1 = UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo;
  DAT_075c29b0 = WeaponExplosion_<ExplosionRoutine>d__36_TypeInfo + 0x10;
  DAT_075c29b8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c29b0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c29b0;
  puVar1 = UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo;
  DAT_075c29c0 = BNG_WeaponSlide_<UnlockSlideRoutine>d__39_TypeInfo + 0x10;
  DAT_075c29c8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c29c0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c29c0;
  puVar1 = WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo;
  DAT_075c29d0 = BNG_WeaponSpinner_<SpinGunRoutine>d__8_TypeInfo + 0x10;
  DAT_075c29d8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c29d0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c29d0;
  puVar1 = Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo;
  DAT_075c29e0 = BayatGames_SaveGamePro_Examples_WebCloudSave_<DoClear>d__17_TypeInfo + 0x10;
  DAT_075c29e8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c29e0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c29e0;
  puVar1 = WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo;
  DAT_075c29f0 = BayatGames_SaveGamePro_Examples_WebCloudSave_<DoLoad>d__15_TypeInfo + 0x10;
  DAT_075c29f8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c29f0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c29f0;
  puVar1 = WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo;
  DAT_075c2a00 = BayatGames_SaveGamePro_Examples_WebCloudSave_<DoSave>d__13_TypeInfo + 0x10;
  DAT_075c2a08 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a00);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2a00;
  puVar1 = System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo;
  DAT_075c2a10 = System_Net_WebConnection_<>c_TypeInfo + 0x10;
  DAT_075c2a18 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a10);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2a10;
  puVar1 = System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo;
  DAT_075c2a20 = System_Net_WebRequest_DesignerWebRequestCreate_TypeInfo + 0x10;
  DAT_075c2a28 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a20);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2a20;
  puVar1 = Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo;
  DAT_075c2a30 = UnityEngine_UIElements_WheelEvent_<>c_TypeInfo + 0x10;
  DAT_075c2a38 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a30);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2a30;
  puVar1 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo;
  DAT_075c2a40 = Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdate_00001437_BurstDirectCall_TypeInfo
                 + 0x10;
  DAT_075c2a48 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo != -1
     ) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a40);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2a40;
  puVar1 = Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo;
  DAT_075c2a50 = System_Security_Cryptography_X509Certificates_X509CertificateCollection_X509CertificateEnumerator_TypeInfo
                 + 0x10;
  DAT_075c2a60 = System_Security_Cryptography_X509Certificates_X509CertificateCollection_X509CertificateEnumerator_TypeInfo
                 + 0x70;
  DAT_075c2a58 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo,(void *)(unaff_x29 + -0x18)
               ,FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a50);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2a50;
  puVar1 = Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo;
  DAT_075c2a70 = Unity_Burst_Intrinsics_X86_DoGetCSRTrampoline_0000012A_BurstDirectCall_TypeInfo +
                 0x10;
  DAT_075c2a80 = Unity_Burst_Intrinsics_X86_DoGetCSRTrampoline_0000012A_BurstDirectCall_TypeInfo +
                 0x70;
  DAT_075c2a78 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo != -1
     ) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a70);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2a70;
  puVar1 = System_Xml_Linq_XContainer_<Nodes>d__18_TypeInfo;
  DAT_075c2a90 = System_Xml_Linq_XContainer_<Nodes>d__18_TypeInfo + 0x10;
  DAT_075c2a98 = 0;
  if (((DAT_075c1ec0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_075c1ec0), iVar3 != 0)) {
    DAT_075c1eb8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_075c1ec0);
  }
  puVar2 = System_Data_XDRSchema_NameType_TypeInfo;
  DAT_075c2aa0 = DAT_075c1eb8;
  DAT_075c2a90 = System_Xml_Linq_XContainer_ContentReader_TypeInfo + 0x10;
  uStack0000000000000020 = 0;
  if (*(long *)System_Data_XDRSchema_NameType_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)System_Data_XDRSchema_NameType_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar2 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a90);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2a90;
  DAT_075c2ab0 = puVar1 + 0x10;
  DAT_075c2ab8 = 0;
  if (((DAT_075c1ec0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_075c1ec0), iVar3 != 0)) {
    DAT_075c1eb8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_075c1ec0);
  }
  puVar1 = MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo;
  DAT_075c2ac0 = DAT_075c1eb8;
  DAT_075c2ab0 = System_Xml_Linq_XElement_<GetAttributes>d__116_TypeInfo + 0x10;
  uStack0000000000000020 = 0;
  if (*(long *)MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2ab0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2ab0;
  puVar1 = UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo;
  DAT_075c2ad0 = UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_TypeInfo + 0x10;
  DAT_075c2ad8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo
               ,(void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2ad0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2ad0;
  puVar1 = UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo;
  DAT_075c2ae0 = UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_TypeInfo + 0x10;
  DAT_075c2ae8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined1 **)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2ae0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_030918c8();
      lVar6 = *unaff_x20;
    }
    else if (uVar5 < uVar7) {
      *unaff_x24 = lVar6 + uVar5 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar8 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_075c2ae0;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


