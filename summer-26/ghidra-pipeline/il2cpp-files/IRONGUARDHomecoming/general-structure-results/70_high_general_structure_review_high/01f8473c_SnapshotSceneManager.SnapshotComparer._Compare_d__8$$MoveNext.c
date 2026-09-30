/*
FUNCTION_NAME: SnapshotSceneManager.SnapshotComparer.<Compare>d__8$$MoveNext
ENTRY_POINT: 01f8473c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void SnapshotSceneManager_SnapshotComparer_<Compare>d__8__MoveNext(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  __shared_count *p_Var4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong uVar8;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined *puStack0000000000000010;
  undefined8 uStack0000000000000020;
  
  *(undefined8 *)(*unaff_x20 + unaff_x22 * 8) = unaff_x21;
  puVar1 = PTR_id_045943e0;
  DAT_04a58600 = PTR_Method_System_Collections_Generic_Dictionary_KeyCollection<string,_ServicePointScheduler_ConnectionGroup>_CopyTo___04594628
                 + 0x10;
  puStack0000000000000010 = PTR_id_045943e0;
  DAT_04a58608 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_045943e0 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045943e0,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58600);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58600;
  DAT_04a58610 = PTR_Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess___04594630
                 + 0x10;
  DAT_04a58618 = 0;
  if (((DAT_04a57be0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04a57be0), iVar3 != 0)) {
    DAT_04a57bd8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_04a57be0);
  }
  puVar1 = PTR_id_04594638;
  DAT_04a58620 = DAT_04a57bd8;
  uStack0000000000000020 = 0;
  puStack0000000000000010 = PTR_id_04594638;
  if (*(long *)PTR_id_04594638 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594638,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58610);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58610;
  puVar1 = PTR_id_04594648;
  DAT_04a58630 = PTR_Method_System_Collections_Generic_KeyValuePair<int,_SortedList<int,_ValueTuple<ComputeBuffer,_int>>>_get_Value___04594640
                 + 0x10;
  puStack0000000000000010 = PTR_id_04594648;
  DAT_04a58638 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_04594648 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594648,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58630);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58630;
  puVar1 = PTR_id_04594658;
  DAT_04a58640 = PTR_Method_System_Collections_Generic_KeyValuePair<int,_TerrainMap>_get_Value___04594650
                 + 0x10;
  puStack0000000000000010 = PTR_id_04594658;
  DAT_04a58648 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_04594658 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594658,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58640);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58640;
  puVar1 = PTR_id_045945a0;
  DAT_04a58660 = 0x2c2e;
  DAT_04a58650 = PTR_Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_add_WhenPostprocessed___04594660
                 + 0x10;
  DAT_04a58670 = 0;
  DAT_04a58678 = 0;
  DAT_04a58668 = 0;
  puStack0000000000000010 = PTR_id_045945a0;
  DAT_04a58658 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_045945a0 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045945a0,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58650);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58650;
  puVar1 = PTR_id_045945b0;
  DAT_04a58680 = PTR_Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_InteractableSelected___04594668
                 + 0x10;
  DAT_04a586a0 = 0;
  DAT_04a586a8 = 0;
  DAT_04a58698 = 0;
  puStack0000000000000010 = PTR_id_045945b0;
  DAT_04a58688 = 0;
  DAT_04a58690 = DAT_00c8de20;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_045945b0 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045945b0,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58680);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58680;
  puVar1 = PTR_id_04594520;
  DAT_04a586b0 = PTR_Method_System_Collections_Generic_List<ValueTuple<GameObject,_OVRLocatable>>_Add___04594670
                 + 0x10;
  puStack0000000000000010 = PTR_id_04594520;
  DAT_04a586b8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_04594520 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594520,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a586b0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a586b0;
  puVar1 = PTR_id_04594538;
  DAT_04a586c0 = PTR_Method_System_Collections_Generic_List<ValueTuple<string,_object>>_Add___04594678
                 + 0x10;
  puStack0000000000000010 = PTR_id_04594538;
  DAT_04a586c8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_04594538 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594538,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a586c0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a586c0;
  puVar1 = PTR_id_04594548;
  DAT_04a586d0 = PTR_Method_System_Collections_Generic_List<ABSSequentiable>_RemoveAt___04594680 +
                 0x10;
  puStack0000000000000010 = PTR_id_04594548;
  DAT_04a586d8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_04594548 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594548,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a586d0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a586d0;
  puVar1 = PTR_id_04594558;
  DAT_04a586e0 = PTR_Method_System_Collections_Generic_List<AssemblyLoadEventArgs>_get_Count___04594688
                 + 0x10;
  puStack0000000000000010 = PTR_id_04594558;
  DAT_04a586e8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_04594558 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594558,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a586e0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a586e0;
  puVar1 = PTR_id_045945e0;
  DAT_04a586f0 = PTR_Method_System_Collections_Generic_List<DebugUIHandlerPanel>__ctor___04594690 +
                 0x10;
  puStack0000000000000010 = PTR_id_045945e0;
  DAT_04a586f8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_045945e0 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045945e0,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a586f0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a586f0;
  puVar1 = PTR_id_045945d8;
  DAT_04a58700 = PTR_Method_System_Collections_Generic_List<DecalCachedChunk>_GetEnumerator___04594698
                 + 0x10;
  puStack0000000000000010 = PTR_id_045945d8;
  DAT_04a58708 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_045945d8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045945d8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58700);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58700;
  puVar1 = PTR_id_045945f0;
  DAT_04a58710 = PTR_Method_System_Collections_Generic_List<DecalEntityChunk>_GetEnumerator___045946a0
                 + 0x10;
  puStack0000000000000010 = PTR_id_045945f0;
  DAT_04a58718 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_045945f0 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045945f0,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58710);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58710;
  puVar1 = PTR_id_045945e8;
  DAT_04a58720 = PTR_Method_System_Collections_Generic_List<DoublePoint>_get_Item___045946a8 + 0x10;
  puStack0000000000000010 = PTR_id_045945e8;
  DAT_04a58728 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_045945e8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045945e8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58720);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58720;
  puVar1 = PTR_id_045946b8;
  DAT_04a58730 = PTR_Method_System_Collections_Generic_List<GameObject>_Add___045946b0 + 0x10;
  puStack0000000000000010 = PTR_id_045946b8;
  DAT_04a58738 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_045946b8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045946b8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58730);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58730;
  puVar1 = PTR_id_045946c8;
  DAT_04a58740 = PTR_Method_System_Collections_Generic_List<GlyphPairAdjustmentRecord>__ctor___045946c0
                 + 0x10;
  puStack0000000000000010 = PTR_id_045946c8;
  DAT_04a58748 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_045946c8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045946c8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58740);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58740;
  puVar1 = PTR_id_045946d8;
  DAT_04a58750 = PTR_Method_System_Collections_Generic_List<GraphReference>_get_Item___045946d0 +
                 0x10;
  puStack0000000000000010 = PTR_id_045946d8;
  DAT_04a58758 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_045946d8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045946d8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58750);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58750;
  puVar1 = PTR_id_045946e8;
  DAT_04a58760 = PTR_Method_System_Collections_Generic_List<HandGrabPose>__ctor___045946e0 + 0x10;
  puStack0000000000000010 = PTR_id_045946e8;
  DAT_04a58768 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_045946e8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045946e8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58760);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58760;
  puVar1 = PTR_id_045946f8;
  DAT_04a58770 = PTR_Method_System_Collections_Generic_List<AudioClipData>_get_Count___045946f0 +
                 0x10;
  DAT_04a58780 = PTR_Method_System_Collections_Generic_List<AudioClipData>_get_Count___045946f0 +
                 0x70;
  puStack0000000000000010 = PTR_id_045946f8;
  DAT_04a58778 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_045946f8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045946f8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58770);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58770;
  puVar1 = PTR_id_04594708;
  DAT_04a58790 = PTR_Method_System_Collections_Generic_List<BezierControlPoint>_GetEnumerator___04594700
                 + 0x10;
  DAT_04a587a0 = PTR_Method_System_Collections_Generic_List<BezierControlPoint>_GetEnumerator___04594700
                 + 0x70;
  puStack0000000000000010 = PTR_id_04594708;
  DAT_04a58798 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_04594708 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594708,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58790);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58790;
  puVar1 = 
  PTR_Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector___04594710
  ;
  DAT_04a587b0 = PTR_Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector___04594710
                 + 0x10;
  DAT_04a587b8 = 0;
  if (((DAT_04a57be0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04a57be0), iVar3 != 0)) {
    DAT_04a57bd8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_04a57be0);
  }
  puVar2 = PTR_id_04594720;
  DAT_04a587c0 = DAT_04a57bd8;
  DAT_04a587b0 = PTR_Method_System_Collections_Generic_List<Column>_Remove___04594718 + 0x10;
  puStack0000000000000010 = PTR_id_04594720;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_04594720 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594720,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar2 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a587b0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a587b0;
  DAT_04a587d0 = puVar1 + 0x10;
  DAT_04a587d8 = 0;
  if (((DAT_04a57be0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04a57be0), iVar3 != 0)) {
    DAT_04a57bd8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_04a57be0);
  }
  puVar1 = PTR_id_04594730;
  DAT_04a587e0 = DAT_04a57bd8;
  DAT_04a587d0 = PTR_Method_System_Collections_Generic_List<ConstantBufferBase>__ctor___04594728 +
                 0x10;
  puStack0000000000000010 = PTR_id_04594730;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_04594730 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594730,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a587d0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a587d0;
  puVar1 = PTR_id_04594740;
  DAT_04a587f0 = PTR_Method_System_Collections_Generic_List<IActiveState>_ConvertAll<Object>___04594738
                 + 0x10;
  puStack0000000000000010 = PTR_id_04594740;
  DAT_04a587f8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_04594740 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594740,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a587f0);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a587f0;
  puVar1 = PTR_id_04594750;
  DAT_04a58800 = PTR_Method_System_Collections_Generic_List<IBindingRequest>_GetEnumerator___04594748
                 + 0x10;
  puStack0000000000000010 = PTR_id_04594750;
  DAT_04a58808 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)PTR_id_04594750 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594750,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar8 = uVar5 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58800);
  lVar6 = *unaff_x20;
  uVar7 = *unaff_x24 - lVar6 >> 3;
  if (uVar7 <= uVar8) {
    if (uVar7 < uVar5) {
      FUN_01f9a7d4();
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
  *(undefined ***)(lVar6 + uVar8 * 8) = &DAT_04a58800;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


