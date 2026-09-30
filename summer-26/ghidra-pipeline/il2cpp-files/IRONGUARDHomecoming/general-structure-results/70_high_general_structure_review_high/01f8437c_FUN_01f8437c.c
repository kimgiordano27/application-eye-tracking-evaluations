/*
FUNCTION_NAME: FUN_01f8437c
ENTRY_POINT: 01f8437c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01f8437c(undefined8 *param_1,long param_2)

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
  *param_1 = &
             Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_CanSelect__
  ;
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
  puVar3 = 
  PTR_Method_System_Collections_Generic_List<List<UIRenderDevice_AllocToUpdate>>_get_Count___045945f8
  ;
  *(undefined2 *)(param_1 + 0x24) = 0x4302;
  puVar2 = PTR_id_04594600;
  DAT_04a585b0 = puVar3 + 0x10;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  puVar3 = PTR___init_04594598;
  DAT_04a585b8 = 0;
  local_80 = 0;
  local_90 = puVar2;
  puStack_88 = PTR___init_04594598;
  if (*(long *)puVar2 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594600,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a585b0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a585b0;
  puVar2 = PTR_id_04594610;
  DAT_04a585c0 = PTR_Method_System_Collections_Generic_List<ValueTuple<List<OVRSpaceUser>,_List<OVRSpatialAnchor>>>_GetEnumerator___04594608
                 + 0x10;
  local_90 = PTR_id_04594610;
  puStack_88 = puVar3;
  DAT_04a585c8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_04594610 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594610,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a585c0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a585c0;
  puVar2 = PTR_id_045943f8;
  DAT_04a585e0 = &DAT_011971d8;
  DAT_04a585d0 = PTR_Method_Oculus_Interaction_Interactor<GrabInteractor,_GrabInteractable>_get_SelectedInteractable___04594618
                 + 0x10;
  DAT_04a585e8 = 0;
  DAT_04a585d8 = 0;
  local_90 = PTR_id_045943f8;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)PTR_id_045943f8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_045943f8,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a585d0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a585d0;
  puVar2 = PTR_id_04594530;
  DAT_04a585f0 = PTR_Method_OVRSpatialAnchor_InvertedCapture<bool,_OVRSpatialAnchor_UnboundAnchor>_ContinueTaskWith___04594620
                 + 0x10;
  local_90 = PTR_id_04594530;
  puStack_88 = puVar3;
  DAT_04a585f8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_04594530 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594530,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a585f0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a585f0;
  puVar2 = PTR_id_045943e0;
  DAT_04a58600 = PTR_Method_System_Collections_Generic_Dictionary_KeyCollection<string,_ServicePointScheduler_ConnectionGroup>_CopyTo___04594628
                 + 0x10;
  local_90 = PTR_id_045943e0;
  puStack_88 = puVar3;
  DAT_04a58608 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_045943e0 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_045943e0,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58600);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58600;
  DAT_04a58610 = PTR_Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess___04594630
                 + 0x10;
  DAT_04a58618 = 0;
  if (((DAT_04a57be0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04a57be0), iVar5 != 0)) {
    DAT_04a57bd8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_04a57be0);
  }
  puVar2 = PTR_id_04594638;
  DAT_04a58620 = DAT_04a57bd8;
  local_80 = 0;
  local_90 = PTR_id_04594638;
  puStack_88 = puVar3;
  if (*(long *)PTR_id_04594638 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594638,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58610);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58610;
  puVar2 = PTR_id_04594648;
  DAT_04a58630 = PTR_Method_System_Collections_Generic_KeyValuePair<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Value___04594640
                 + 0x10;
  local_90 = PTR_id_04594648;
  puStack_88 = puVar3;
  DAT_04a58638 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_04594648 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594648,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58630);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58630;
  puVar2 = PTR_id_04594658;
  DAT_04a58640 = PTR_Method_System_Collections_Generic_KeyValuePair<int,_TerrainMap>_get_Value___04594650
                 + 0x10;
  local_90 = PTR_id_04594658;
  puStack_88 = puVar3;
  DAT_04a58648 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_04594658 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594658,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58640);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58640;
  puVar2 = PTR_id_045945a0;
  DAT_04a58660 = 0x2c2e;
  DAT_04a58650 = PTR_Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_add_WhenPostprocessed___04594660
                 + 0x10;
  DAT_04a58670 = 0;
  DAT_04a58678 = 0;
  DAT_04a58668 = 0;
  local_90 = PTR_id_045945a0;
  puStack_88 = puVar3;
  DAT_04a58658 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_045945a0 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_045945a0,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58650);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58650;
  puVar2 = PTR_id_045945b0;
  DAT_04a58680 = PTR_Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_InteractableSelected___04594668
                 + 0x10;
  DAT_04a586a0 = 0;
  DAT_04a586a8 = 0;
  DAT_04a58698 = 0;
  local_90 = PTR_id_045945b0;
  puStack_88 = puVar3;
  DAT_04a58688 = 0;
  DAT_04a58690 = DAT_00c8de20;
  local_80 = 0;
  if (*(long *)PTR_id_045945b0 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_045945b0,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58680);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58680;
  puVar2 = PTR_id_04594520;
  DAT_04a586b0 = PTR_Method_System_Collections_Generic_List<ValueTuple<GameObject,_OVRLocatable>>_Add___04594670
                 + 0x10;
  local_90 = PTR_id_04594520;
  puStack_88 = puVar3;
  DAT_04a586b8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_04594520 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594520,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a586b0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a586b0;
  puVar2 = PTR_id_04594538;
  DAT_04a586c0 = PTR_Method_System_Collections_Generic_List<ValueTuple<string,_object>>_Add___04594678
                 + 0x10;
  local_90 = PTR_id_04594538;
  puStack_88 = puVar3;
  DAT_04a586c8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_04594538 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594538,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a586c0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a586c0;
  puVar2 = PTR_id_04594548;
  DAT_04a586d0 = PTR_Method_System_Collections_Generic_List<ABSSequentiable>_RemoveAt___04594680 +
                 0x10;
  local_90 = PTR_id_04594548;
  puStack_88 = puVar3;
  DAT_04a586d8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_04594548 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594548,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a586d0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a586d0;
  puVar2 = PTR_id_04594558;
  DAT_04a586e0 = PTR_Method_System_Collections_Generic_List<AssemblyLoadEventArgs>_get_Count___04594688
                 + 0x10;
  local_90 = PTR_id_04594558;
  puStack_88 = puVar3;
  DAT_04a586e8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_04594558 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594558,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a586e0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a586e0;
  puVar2 = PTR_id_045945e0;
  DAT_04a586f0 = PTR_Method_System_Collections_Generic_List<DebugUIHandlerPanel>__ctor___04594690 +
                 0x10;
  local_90 = PTR_id_045945e0;
  puStack_88 = puVar3;
  DAT_04a586f8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_045945e0 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_045945e0,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a586f0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a586f0;
  puVar2 = PTR_id_045945d8;
  DAT_04a58700 = PTR_Method_System_Collections_Generic_List<DecalCachedChunk>_GetEnumerator___04594698
                 + 0x10;
  local_90 = PTR_id_045945d8;
  puStack_88 = puVar3;
  DAT_04a58708 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_045945d8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_045945d8,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58700);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58700;
  puVar2 = PTR_id_045945f0;
  DAT_04a58710 = PTR_Method_System_Collections_Generic_List<DecalEntityChunk>_GetEnumerator___045946a0
                 + 0x10;
  local_90 = PTR_id_045945f0;
  puStack_88 = puVar3;
  DAT_04a58718 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_045945f0 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_045945f0,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58710);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58710;
  puVar2 = PTR_id_045945e8;
  DAT_04a58720 = PTR_Method_System_Collections_Generic_List<DoublePoint>_get_Item___045946a8 + 0x10;
  local_90 = PTR_id_045945e8;
  puStack_88 = puVar3;
  DAT_04a58728 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_045945e8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_045945e8,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58720);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58720;
  puVar2 = PTR_id_045946b8;
  DAT_04a58730 = PTR_Method_System_Collections_Generic_List<GameObject>_Add___045946b0 + 0x10;
  local_90 = PTR_id_045946b8;
  puStack_88 = puVar3;
  DAT_04a58738 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_045946b8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_045946b8,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58730);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58730;
  puVar2 = PTR_id_045946c8;
  DAT_04a58740 = PTR_Method_System_Collections_Generic_List<GlyphPairAdjustmentRecord>__ctor___045946c0
                 + 0x10;
  local_90 = PTR_id_045946c8;
  puStack_88 = puVar3;
  DAT_04a58748 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_045946c8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_045946c8,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58740);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58740;
  puVar2 = PTR_id_045946d8;
  DAT_04a58750 = PTR_Method_System_Collections_Generic_List<GraphReference>_get_Item___045946d0 +
                 0x10;
  local_90 = PTR_id_045946d8;
  puStack_88 = puVar3;
  DAT_04a58758 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_045946d8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_045946d8,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58750);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58750;
  puVar2 = PTR_id_045946e8;
  DAT_04a58760 = PTR_Method_System_Collections_Generic_List<HandGrabPose>__ctor___045946e0 + 0x10;
  local_90 = PTR_id_045946e8;
  puStack_88 = puVar3;
  DAT_04a58768 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_045946e8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_045946e8,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58760);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58760;
  puVar2 = PTR_id_045946f8;
  DAT_04a58770 = PTR_Method_System_Collections_Generic_List<AudioClipData>_get_Count___045946f0 +
                 0x10;
  DAT_04a58780 = PTR_Method_System_Collections_Generic_List<AudioClipData>_get_Count___045946f0 +
                 0x70;
  local_90 = PTR_id_045946f8;
  puStack_88 = puVar3;
  DAT_04a58778 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_045946f8 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_045946f8,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58770);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58770;
  puVar2 = PTR_id_04594708;
  DAT_04a58790 = PTR_Method_System_Collections_Generic_List<BezierControlPoint>_GetEnumerator___04594700
                 + 0x10;
  DAT_04a587a0 = PTR_Method_System_Collections_Generic_List<BezierControlPoint>_GetEnumerator___04594700
                 + 0x70;
  local_90 = PTR_id_04594708;
  puStack_88 = puVar3;
  DAT_04a58798 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_04594708 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594708,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58790);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58790;
  puVar2 = 
  PTR_Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector___04594710
  ;
  DAT_04a587b0 = PTR_Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector___04594710
                 + 0x10;
  DAT_04a587b8 = 0;
  if (((DAT_04a57be0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04a57be0), iVar5 != 0)) {
    DAT_04a57bd8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_04a57be0);
  }
  puVar4 = PTR_id_04594720;
  DAT_04a587c0 = DAT_04a57bd8;
  DAT_04a587b0 = PTR_Method_System_Collections_Generic_List<Column>_Remove___04594718 + 0x10;
  local_90 = PTR_id_04594720;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)PTR_id_04594720 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594720,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar4 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a587b0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a587b0;
  DAT_04a587d0 = puVar2 + 0x10;
  DAT_04a587d8 = 0;
  if (((DAT_04a57be0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04a57be0), iVar5 != 0)) {
    DAT_04a57bd8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_04a57be0);
  }
  puVar2 = PTR_id_04594730;
  DAT_04a587e0 = DAT_04a57bd8;
  DAT_04a587d0 = PTR_Method_System_Collections_Generic_List<ConstantBufferBase>__ctor___04594728 +
                 0x10;
  local_90 = PTR_id_04594730;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)PTR_id_04594730 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594730,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a587d0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a587d0;
  puVar2 = PTR_id_04594740;
  DAT_04a587f0 = PTR_Method_System_Collections_Generic_List<IActiveState>_ConvertAll<Object>___04594738
                 + 0x10;
  local_90 = PTR_id_04594740;
  puStack_88 = puVar3;
  DAT_04a587f8 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_04594740 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594740,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a587f0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a587f0;
  puVar2 = PTR_id_04594750;
  DAT_04a58800 = PTR_Method_System_Collections_Generic_List<IBindingRequest>_GetEnumerator___04594748
                 + 0x10;
  local_90 = PTR_id_04594750;
  puStack_88 = puVar3;
  DAT_04a58808 = 0;
  local_80 = 0;
  if (*(long *)PTR_id_04594750 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)PTR_id_04594750,&local_78,FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58800);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_01f9a7d4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_04a58800;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


