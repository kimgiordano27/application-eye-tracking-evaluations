/*
FUNCTION_NAME: FUN_0307f8d0
ENTRY_POINT: 0307f8d0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_0307f8d0(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  __shared_count *p_Var5;
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
  *param_1 = &PTR_FUN_06f67580;
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
    FUN_03091740(plVar11,param_2[2],param_2[3]);
  }
  lVar7 = *plVar13;
  lVar8 = *plVar11;
  if (lVar7 != lVar8) {
    uVar9 = 0;
    uVar12 = 1;
    do {
      p_Var5 = *(__shared_count **)(lVar8 + uVar9 * 8);
      if (p_Var5 != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(p_Var5);
        lVar7 = *plVar13;
        lVar8 = *plVar11;
      }
      bVar4 = uVar12 < (ulong)(lVar7 - lVar8 >> 3);
      uVar9 = uVar12;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (bVar4);
  }
  puVar3 = NodeCanvas_Tasks_Actions_WaitMousePick_ButtonKeys_TypeInfo;
  puVar2 = UnityEngine_Rendering_VolumeComponent_<>c_TypeInfo;
  if ((param_4 >> 3 & 1) != 0) {
    local_80 = 0;
    local_90 = NodeCanvas_Tasks_Actions_WaitMousePick_ButtonKeys_TypeInfo;
    puStack_88 = UnityEngine_Rendering_VolumeComponent_<>c_TypeInfo;
    if (*(long *)NodeCanvas_Tasks_Actions_WaitMousePick_ButtonKeys_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)NodeCanvas_Tasks_Actions_WaitMousePick_ButtonKeys_TypeInfo,&local_78,
                 FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Meta_XR_ImmersiveDebugger_Manager_WatchManager_<>c_TypeInfo;
    local_80 = 0;
    local_90 = Meta_XR_ImmersiveDebugger_Manager_WatchManager_<>c_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)Meta_XR_ImmersiveDebugger_Manager_WatchManager_<>c_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Meta_XR_ImmersiveDebugger_Manager_WatchManager_<>c_TypeInfo,&local_78,
                 FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = UnityEngine_Rendering_VolumeComponent_<>c_TypeInfo;
  puVar2 = Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo;
  if ((param_4 & 1) != 0) {
    local_80 = 0;
    local_90 = Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo;
    puStack_88 = UnityEngine_Rendering_VolumeComponent_<>c_TypeInfo;
    if (*(long *)Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Unity_Properties_Internal_Vector3IntPropertyBag_ZProperty_TypeInfo,
                 &local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = UnityEngine_UIElements_VisualElement_TypeData_TypeInfo;
    local_80 = 0;
    local_90 = UnityEngine_UIElements_VisualElement_TypeData_TypeInfo;
    puStack_88 = puVar3;
    if (*(long *)UnityEngine_UIElements_VisualElement_TypeData_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_VisualElement_TypeData_TypeInfo,&local_78,
                 FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo;
    local_80 = 0;
    local_90 = UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo;
    puStack_88 = puVar3;
    if (*(long *)UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_Vector3IntField_UxmlFactory_TypeInfo,&local_78,
                 FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = 
    Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnUpdate_000000EA_BurstDirectCall_TypeInfo
    ;
    local_80 = 0;
    local_90 = 
    Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnUpdate_000000EA_BurstDirectCall_TypeInfo
    ;
    puStack_88 = puVar3;
    if (*(long *)
         Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnUpdate_000000EA_BurstDirectCall_TypeInfo
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnUpdate_000000EA_BurstDirectCall_TypeInfo
                 ,&local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = Weapon_<DoDamage>d__55_TypeInfo;
    local_80 = 0;
    local_90 = Weapon_<DoDamage>d__55_TypeInfo;
    puStack_88 = puVar3;
    if (*(long *)Weapon_<DoDamage>d__55_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once((ulong *)Weapon_<DoDamage>d__55_TypeInfo,&local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = 
    Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnCreate_000000E9_BurstDirectCall_TypeInfo
    ;
    local_80 = 0;
    local_90 = 
    Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnCreate_000000E9_BurstDirectCall_TypeInfo
    ;
    puStack_88 = puVar3;
    if (*(long *)
         Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnCreate_000000E9_BurstDirectCall_TypeInfo
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Unity_Scenes_WeakAssetReferenceLoadingSystem___codegen__OnCreate_000000E9_BurstDirectCall_TypeInfo
                 ,&local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo;
  puVar2 = UnityEngine_Rendering_VolumeComponent_<>c_TypeInfo;
  if ((param_4 >> 4 & 1) != 0) {
    local_80 = 0;
    local_90 = WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo;
    puStack_88 = UnityEngine_Rendering_VolumeComponent_<>c_TypeInfo;
    if (*(long *)WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo,&local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo;
    local_80 = 0;
    local_90 = Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo,&local_78,
                 FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo;
    local_80 = 0;
    local_90 = WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo,&local_78,
                 FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo;
    local_80 = 0;
    local_90 = WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo,&local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo;
    local_80 = 0;
    local_90 = System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo,&local_78,
                 FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo;
    local_80 = 0;
    local_90 = System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo,&local_78,
                 FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo;
    local_80 = 0;
    local_90 = Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo,
                 &local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo;
    local_80 = 0;
    local_90 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo !=
        -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo,
                 &local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = UnityEngine_Rendering_VolumeManager_<>c_TypeInfo;
  puVar2 = UnityEngine_Rendering_VolumeComponent_<>c_TypeInfo;
  if ((param_4 >> 1 & 1) != 0) {
    local_80 = 0;
    local_90 = UnityEngine_Rendering_VolumeManager_<>c_TypeInfo;
    puStack_88 = UnityEngine_Rendering_VolumeComponent_<>c_TypeInfo;
    if (*(long *)UnityEngine_Rendering_VolumeManager_<>c_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_Rendering_VolumeManager_<>c_TypeInfo,&local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = VLB_VolumetricDustParticles_<>c_TypeInfo;
    local_80 = 0;
    local_90 = VLB_VolumetricDustParticles_<>c_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)VLB_VolumetricDustParticles_<>c_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)VLB_VolumetricDustParticles_<>c_TypeInfo,&local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo;
    local_80 = 0;
    local_90 = UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_VisualElement_SimpleScheduledItem_TypeInfo,
                 &local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = UnityEngine_UIElements_VisualElement_UxmlFactory_TypeInfo;
    local_80 = 0;
    local_90 = UnityEngine_UIElements_VisualElement_UxmlFactory_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)UnityEngine_UIElements_VisualElement_UxmlFactory_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_VisualElement_UxmlFactory_TypeInfo,&local_78,
                 FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo;
    local_80 = 0;
    local_90 = UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo,
                 &local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo;
    local_80 = 0;
    local_90 = UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo,&local_78,
                 FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo;
  puVar2 = UnityEngine_Rendering_VolumeComponent_<>c_TypeInfo;
  if ((param_4 >> 2 & 1) != 0) {
    local_80 = 0;
    local_90 = Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo;
    puStack_88 = UnityEngine_Rendering_VolumeComponent_<>c_TypeInfo;
    if (*(long *)Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo,&local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo;
    local_80 = 0;
    local_90 = Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo !=
        -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo,
                 &local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = System_Data_XDRSchema_NameType_TypeInfo;
    local_80 = 0;
    local_90 = System_Data_XDRSchema_NameType_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)System_Data_XDRSchema_NameType_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)System_Data_XDRSchema_NameType_TypeInfo,&local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo;
    local_80 = 0;
    local_90 = MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo,&local_78,
                 FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo;
  puVar2 = UnityEngine_Rendering_VolumeComponent_<>c_TypeInfo;
  if ((param_4 >> 5 & 1) != 0) {
    local_80 = 0;
    local_90 = UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo;
    puStack_88 = UnityEngine_Rendering_VolumeComponent_<>c_TypeInfo;
    if (*(long *)UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo != -1)
    {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo,
                 &local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo;
    local_80 = 0;
    local_90 = UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo;
    puStack_88 = puVar2;
    if (*(long *)UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo,
                 &local_78,FUN_03091a18);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe82fc();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_030918c8(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


