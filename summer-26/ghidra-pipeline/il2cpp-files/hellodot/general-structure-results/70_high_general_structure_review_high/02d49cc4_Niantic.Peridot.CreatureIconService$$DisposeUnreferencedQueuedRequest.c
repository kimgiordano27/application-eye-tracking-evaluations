/*
FUNCTION_NAME: Niantic.Peridot.CreatureIconService$$DisposeUnreferencedQueuedRequest
ENTRY_POINT: 02d49cc4
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Niantic_Peridot_CreatureIconService__DisposeUnreferencedQueuedRequest(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  __shared_count *p_Var4;
  __locale_t p_Var5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong uVar9;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x28;
  long unaff_x29;
  undefined *puStack0000000000000010;
  undefined8 uStack0000000000000020;
  
  *(undefined8 *)(param_1 + unaff_x22 * 8) = unaff_x21;
  puVar1 = UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_TypeInfo;
  DAT_06c9abc0 = Niantic_Peridot_Api_Vector4Range_<>c_TypeInfo + 0x10;
  puStack0000000000000010 = UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_TypeInfo;
  DAT_06c9abc8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_UIR_VectorImageRenderInfoPool_<>c_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_02d5f2e4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9abc0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02d5f194();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_06c9abc0;
  puVar1 = VendingModule_<>c__DisplayClass53_0_TypeInfo;
  DAT_06c9abd0 = VendingModule_<>c_TypeInfo + 0x10;
  puStack0000000000000010 = VendingModule_<>c__DisplayClass53_0_TypeInfo;
  DAT_06c9abd8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)VendingModule_<>c__DisplayClass53_0_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<>c__DisplayClass53_0_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_02d5f2e4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9abd0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02d5f194();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_06c9abd0;
  puVar1 = VendingModule_<>c__DisplayClass55_0_TypeInfo;
  DAT_06c9abe0 = VendingModule_<>c__DisplayClass53_1_TypeInfo + 0x10;
  puStack0000000000000010 = VendingModule_<>c__DisplayClass55_0_TypeInfo;
  DAT_06c9abe8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)VendingModule_<>c__DisplayClass55_0_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<>c__DisplayClass55_0_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_02d5f2e4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9abe0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02d5f194();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_06c9abe0;
  puVar1 = VendingModule_<>c__DisplayClass55_2_TypeInfo;
  DAT_06c9abf0 = VendingModule_<>c__DisplayClass55_1_TypeInfo + 0x10;
  DAT_06c9ac00 = VendingModule_<>c__DisplayClass55_1_TypeInfo + 0x70;
  puStack0000000000000010 = VendingModule_<>c__DisplayClass55_2_TypeInfo;
  DAT_06c9abf8 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)VendingModule_<>c__DisplayClass55_2_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<>c__DisplayClass55_2_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_02d5f2e4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9abf0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02d5f194();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_06c9abf0;
  puVar1 = VendingModule_<>c__DisplayClass57_1_TypeInfo;
  DAT_06c9ac10 = VendingModule_<>c__DisplayClass57_0_TypeInfo + 0x10;
  DAT_06c9ac20 = VendingModule_<>c__DisplayClass57_0_TypeInfo + 0x70;
  puStack0000000000000010 = VendingModule_<>c__DisplayClass57_1_TypeInfo;
  DAT_06c9ac18 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)VendingModule_<>c__DisplayClass57_1_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<>c__DisplayClass57_1_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_02d5f2e4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ac10);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02d5f194();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_06c9ac10;
  puVar1 = VendingModule_<>c__DisplayClass57_2_TypeInfo;
  DAT_06c9ac30 = VendingModule_<>c__DisplayClass57_2_TypeInfo + 0x10;
  DAT_06c9ac38 = 0;
  if (((DAT_06c9a060 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06c9a060), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0x58) = p_Var5;
    __cxa_guard_release(&DAT_06c9a060);
  }
  puVar2 = VendingModule_<>c__DisplayClass57_4_TypeInfo;
  DAT_06c9ac40 = *(undefined8 *)(unaff_x28 + 0x58);
  DAT_06c9ac30 = VendingModule_<>c__DisplayClass57_3_TypeInfo + 0x10;
  puStack0000000000000010 = VendingModule_<>c__DisplayClass57_4_TypeInfo;
  uStack0000000000000020 = 0;
  if (*(long *)VendingModule_<>c__DisplayClass57_4_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<>c__DisplayClass57_4_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_02d5f2e4);
  }
  uVar6 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ac30);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02d5f194();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_06c9ac30;
  DAT_06c9ac50 = puVar1 + 0x10;
  DAT_06c9ac58 = 0;
  if (((DAT_06c9a060 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_06c9a060), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0x58) = p_Var5;
    __cxa_guard_release(&DAT_06c9a060);
  }
  puVar1 = VendingModule_<AnimateExtras>d__46_TypeInfo;
  DAT_06c9ac60 = *(undefined8 *)(unaff_x28 + 0x58);
  DAT_06c9ac50 = VendingModule_<>c__DisplayClass58_0_TypeInfo + 0x10;
  puStack0000000000000010 = VendingModule_<AnimateExtras>d__46_TypeInfo;
  uStack0000000000000020 = 0;
  if (*(long *)VendingModule_<AnimateExtras>d__46_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<AnimateExtras>d__46_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_02d5f2e4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ac50);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02d5f194();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_06c9ac50;
  puVar1 = VendingModule_<HandleSlider>d__59_TypeInfo;
  DAT_06c9ac70 = VendingModule_<HandleScroll>d__49_TypeInfo + 0x10;
  puStack0000000000000010 = VendingModule_<HandleSlider>d__59_TypeInfo;
  DAT_06c9ac78 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)VendingModule_<HandleSlider>d__59_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)VendingModule_<HandleSlider>d__59_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_02d5f2e4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ac70);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02d5f194();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_06c9ac70;
  puVar1 = Google_Protobuf_Compiler_Version_<>c_TypeInfo;
  DAT_06c9ac80 = VendingModule_<OnGrab>d__56_TypeInfo + 0x10;
  puStack0000000000000010 = Google_Protobuf_Compiler_Version_<>c_TypeInfo;
  DAT_06c9ac88 = 0;
  uStack0000000000000020 = 0;
  if (*(long *)Google_Protobuf_Compiler_Version_<>c_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Google_Protobuf_Compiler_Version_<>c_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_02d5f2e4);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_06c9ac80);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_02d5f194();
      lVar7 = *unaff_x20;
    }
    else if (uVar6 < uVar8) {
      *unaff_x24 = lVar7 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(lVar7 + uVar9 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    lVar7 = *unaff_x20;
  }
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_06c9ac80;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


