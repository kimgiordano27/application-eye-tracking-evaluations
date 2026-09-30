/*
FUNCTION_NAME: SnapshotSceneManager.<LoadSceneSnapshotAsync>d__6$$MoveNext
ENTRY_POINT: 01f84f04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void SnapshotSceneManager_<LoadSceneSnapshotAsync>d__6__MoveNext(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  __shared_count *p_Var4;
  __locale_t p_Var5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong uVar9;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x28;
  long unaff_x29;
  undefined *in_stack_00000010;
  
  FUN_01f9a7d4();
  lVar6 = *unaff_x20;
  p_Var4 = *(__shared_count **)(lVar6 + unaff_x22 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined8 *)(lVar6 + unaff_x22 * 8) = unaff_x21;
  puVar1 = PTR_id_045945e0;
  DAT_04a586f0 = PTR_Method_System_Collections_Generic_List<DebugUIHandlerPanel>__ctor___04594690 +
                 0x10;
  in_stack_00000010 = PTR_id_045945e0;
  DAT_04a586f8 = 0;
  if (*(long *)PTR_id_045945e0 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045945e0,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a586f0);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a586f0;
  puVar1 = PTR_id_045945d8;
  DAT_04a58700 = PTR_Method_System_Collections_Generic_List<DecalCachedChunk>_GetEnumerator___04594698
                 + 0x10;
  in_stack_00000010 = PTR_id_045945d8;
  DAT_04a58708 = 0;
  if (*(long *)PTR_id_045945d8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045945d8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58700);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a58700;
  puVar1 = PTR_id_045945f0;
  DAT_04a58710 = PTR_Method_System_Collections_Generic_List<DecalEntityChunk>_GetEnumerator___045946a0
                 + 0x10;
  in_stack_00000010 = PTR_id_045945f0;
  DAT_04a58718 = 0;
  if (*(long *)PTR_id_045945f0 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045945f0,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58710);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a58710;
  puVar1 = PTR_id_045945e8;
  DAT_04a58720 = PTR_Method_System_Collections_Generic_List<DoublePoint>_get_Item___045946a8 + 0x10;
  in_stack_00000010 = PTR_id_045945e8;
  DAT_04a58728 = 0;
  if (*(long *)PTR_id_045945e8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045945e8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58720);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a58720;
  puVar1 = PTR_id_045946b8;
  DAT_04a58730 = PTR_Method_System_Collections_Generic_List<GameObject>_Add___045946b0 + 0x10;
  in_stack_00000010 = PTR_id_045946b8;
  DAT_04a58738 = 0;
  if (*(long *)PTR_id_045946b8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045946b8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58730);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a58730;
  puVar1 = PTR_id_045946c8;
  DAT_04a58740 = PTR_Method_System_Collections_Generic_List<GlyphPairAdjustmentRecord>__ctor___045946c0
                 + 0x10;
  in_stack_00000010 = PTR_id_045946c8;
  DAT_04a58748 = 0;
  if (*(long *)PTR_id_045946c8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045946c8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58740);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a58740;
  puVar1 = PTR_id_045946d8;
  DAT_04a58750 = PTR_Method_System_Collections_Generic_List<GraphReference>_get_Item___045946d0 +
                 0x10;
  in_stack_00000010 = PTR_id_045946d8;
  DAT_04a58758 = 0;
  if (*(long *)PTR_id_045946d8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045946d8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58750);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a58750;
  puVar1 = PTR_id_045946e8;
  DAT_04a58760 = PTR_Method_System_Collections_Generic_List<HandGrabPose>__ctor___045946e0 + 0x10;
  in_stack_00000010 = PTR_id_045946e8;
  DAT_04a58768 = 0;
  if (*(long *)PTR_id_045946e8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045946e8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58760);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a58760;
  puVar1 = PTR_id_045946f8;
  DAT_04a58770 = PTR_Method_System_Collections_Generic_List<AudioClipData>_get_Count___045946f0 +
                 0x10;
  DAT_04a58780 = PTR_Method_System_Collections_Generic_List<AudioClipData>_get_Count___045946f0 +
                 0x70;
  in_stack_00000010 = PTR_id_045946f8;
  DAT_04a58778 = 0;
  if (*(long *)PTR_id_045946f8 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_045946f8,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58770);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a58770;
  puVar1 = PTR_id_04594708;
  DAT_04a58790 = PTR_Method_System_Collections_Generic_List<BezierControlPoint>_GetEnumerator___04594700
                 + 0x10;
  DAT_04a587a0 = PTR_Method_System_Collections_Generic_List<BezierControlPoint>_GetEnumerator___04594700
                 + 0x70;
  in_stack_00000010 = PTR_id_04594708;
  DAT_04a58798 = 0;
  if (*(long *)PTR_id_04594708 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594708,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58790);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a58790;
  puVar1 = 
  PTR_Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector___04594710
  ;
  DAT_04a587b0 = PTR_Method_Oculus_Interaction_Interactor<TeleportInteractor,_TeleportInteractable>_set_Selector___04594710
                 + 0x10;
  DAT_04a587b8 = 0;
  if (((DAT_04a57be0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04a57be0), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0xbd8) = p_Var5;
    __cxa_guard_release(&DAT_04a57be0);
  }
  puVar2 = PTR_id_04594720;
  DAT_04a587c0 = *(undefined8 *)(unaff_x28 + 0xbd8);
  DAT_04a587b0 = PTR_Method_System_Collections_Generic_List<Column>_Remove___04594718 + 0x10;
  in_stack_00000010 = PTR_id_04594720;
  if (*(long *)PTR_id_04594720 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594720,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a587b0);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a587b0;
  DAT_04a587d0 = puVar1 + 0x10;
  DAT_04a587d8 = 0;
  if (((DAT_04a57be0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04a57be0), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0xbd8) = p_Var5;
    __cxa_guard_release(&DAT_04a57be0);
  }
  puVar1 = PTR_id_04594730;
  DAT_04a587e0 = *(undefined8 *)(unaff_x28 + 0xbd8);
  DAT_04a587d0 = PTR_Method_System_Collections_Generic_List<ConstantBufferBase>__ctor___04594728 +
                 0x10;
  in_stack_00000010 = PTR_id_04594730;
  if (*(long *)PTR_id_04594730 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594730,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a587d0);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a587d0;
  puVar1 = PTR_id_04594740;
  DAT_04a587f0 = PTR_Method_System_Collections_Generic_List<IActiveState>_ConvertAll<Object>___04594738
                 + 0x10;
  in_stack_00000010 = PTR_id_04594740;
  DAT_04a587f8 = 0;
  if (*(long *)PTR_id_04594740 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594740,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a587f0);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a587f0;
  puVar1 = PTR_id_04594750;
  DAT_04a58800 = PTR_Method_System_Collections_Generic_List<IBindingRequest>_GetEnumerator___04594748
                 + 0x10;
  in_stack_00000010 = PTR_id_04594750;
  DAT_04a58808 = 0;
  if (*(long *)PTR_id_04594750 != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once((ulong *)PTR_id_04594750,(void *)(unaff_x29 + -0x18),FUN_01f9a924);
  }
  uVar7 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_04a58800);
  lVar6 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar6 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar7) {
      FUN_01f9a7d4();
      lVar6 = *unaff_x20;
    }
    else if (uVar7 < uVar8) {
      *unaff_x24 = lVar6 + uVar7 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar6 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar6 = *unaff_x20;
  }
  *(undefined ***)(lVar6 + uVar9 * 8) = &DAT_04a58800;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


