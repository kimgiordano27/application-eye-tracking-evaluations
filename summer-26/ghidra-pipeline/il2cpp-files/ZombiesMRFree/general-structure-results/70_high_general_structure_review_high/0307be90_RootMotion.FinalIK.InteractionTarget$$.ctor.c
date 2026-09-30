/*
FUNCTION_NAME: RootMotion.FinalIK.InteractionTarget$$.ctor
ENTRY_POINT: 0307be90
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void RootMotion_FinalIK_InteractionTarget___ctor(long param_1,__shared_count *param_2)

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
  undefined *in_stack_00000010;
  
  if (param_2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(param_2);
    param_1 = *unaff_x20;
  }
  *(undefined8 *)(param_1 + unaff_x22 * 8) = unaff_x21;
  puVar1 = UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo;
  DAT_075c29b0 = WeaponExplosion_<ExplosionRoutine>d__36_TypeInfo + 0x10;
  in_stack_00000010 = UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo;
  DAT_075c29b8 = 0;
  if (*(long *)UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_VisualElementFocusRing_FocusRingRecord_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c29b0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c29b0;
  puVar1 = UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo;
  DAT_075c29c0 = BNG_WeaponSlide_<UnlockSlideRoutine>d__39_TypeInfo + 0x10;
  in_stack_00000010 = UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo;
  DAT_075c29c8 = 0;
  if (*(long *)UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_UIElements_VisualElementUtils_<>c_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c29c0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c29c0;
  puVar1 = WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo;
  DAT_075c29d0 = BNG_WeaponSpinner_<SpinGunRoutine>d__8_TypeInfo + 0x10;
  in_stack_00000010 = WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo;
  DAT_075c29d8 = 0;
  if (*(long *)WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)WFX_BulletHoleDecal_<holeUpdate>d__12_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c29d0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c29d0;
  puVar1 = Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo;
  DAT_075c29e0 = BayatGames_SaveGamePro_Examples_WebCloudSave_<DoClear>d__17_TypeInfo + 0x10;
  in_stack_00000010 = Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo;
  DAT_075c29e8 = 0;
  if (*(long *)Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Pixelplacement_XRTools_VrGuiInput_<Start>d__13_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c29e0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c29e0;
  puVar1 = WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo;
  DAT_075c29f0 = BayatGames_SaveGamePro_Examples_WebCloudSave_<DoLoad>d__15_TypeInfo + 0x10;
  in_stack_00000010 = WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo;
  DAT_075c29f8 = 0;
  if (*(long *)WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)WFX_Demo_New_<CheckForDeletedParticles>d__41_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c29f0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c29f0;
  puVar1 = WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo;
  DAT_075c2a00 = BayatGames_SaveGamePro_Examples_WebCloudSave_<DoSave>d__13_TypeInfo + 0x10;
  in_stack_00000010 = WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo;
  DAT_075c2a08 = 0;
  if (*(long *)WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)WFX_Demo_<RandomSpawnsCoroutine>d__30_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a00);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c2a00;
  puVar1 = System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo;
  DAT_075c2a10 = System_Net_WebConnection_<>c_TypeInfo + 0x10;
  in_stack_00000010 = System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo;
  DAT_075c2a18 = 0;
  if (*(long *)System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)System_Net_WebRequest_<>c__DisplayClass79_0_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a10);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c2a10;
  puVar1 = System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo;
  DAT_075c2a20 = System_Net_WebRequest_DesignerWebRequestCreate_TypeInfo + 0x10;
  in_stack_00000010 = System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo;
  DAT_075c2a28 = 0;
  if (*(long *)System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)System_Net_WebResponseStream_<>c__DisplayClass41_0_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a20);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c2a20;
  puVar1 = Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo;
  DAT_075c2a30 = UnityEngine_UIElements_WheelEvent_<>c_TypeInfo + 0x10;
  in_stack_00000010 = Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo;
  DAT_075c2a38 = 0;
  if (*(long *)Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdateSignature_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a30);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c2a30;
  puVar1 = Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo;
  DAT_075c2a40 = Unity_Entities_WorldUnmanagedImpl_UnmanagedUpdate_00001437_BurstDirectCall_TypeInfo
                 + 0x10;
  in_stack_00000010 =
       Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo;
  DAT_075c2a48 = 0;
  if (*(long *)Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo != -1
     ) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Mono_Security_X509_X509CertificateCollection_X509CertificateEnumerator_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a40);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c2a40;
  puVar1 = Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo;
  DAT_075c2a50 = System_Security_Cryptography_X509Certificates_X509CertificateCollection_X509CertificateEnumerator_TypeInfo
                 + 0x10;
  DAT_075c2a60 = System_Security_Cryptography_X509Certificates_X509CertificateCollection_X509CertificateEnumerator_TypeInfo
                 + 0x70;
  in_stack_00000010 = Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo;
  DAT_075c2a58 = 0;
  if (*(long *)Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Mono_Security_X509_X509Crl_X509CrlEntry_TypeInfo,(void *)(unaff_x29 + -0x18)
               ,FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a50);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c2a50;
  puVar1 = Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo;
  DAT_075c2a70 = Unity_Burst_Intrinsics_X86_DoGetCSRTrampoline_0000012A_BurstDirectCall_TypeInfo +
                 0x10;
  DAT_075c2a80 = Unity_Burst_Intrinsics_X86_DoGetCSRTrampoline_0000012A_BurstDirectCall_TypeInfo +
                 0x70;
  in_stack_00000010 =
       Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo;
  DAT_075c2a78 = 0;
  if (*(long *)Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo != -1
     ) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Unity_Burst_Intrinsics_X86_DoSetCSRTrampoline_00000129_BurstDirectCall_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a70);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c2a70;
  puVar1 = System_Xml_Linq_XContainer_<Nodes>d__18_TypeInfo;
  DAT_075c2a90 = System_Xml_Linq_XContainer_<Nodes>d__18_TypeInfo + 0x10;
  DAT_075c2a98 = 0;
  if (((DAT_075c1ec0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_075c1ec0), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0xeb8) = p_Var5;
    __cxa_guard_release(&DAT_075c1ec0);
  }
  puVar2 = System_Data_XDRSchema_NameType_TypeInfo;
  DAT_075c2aa0 = *(undefined8 *)(unaff_x28 + 0xeb8);
  DAT_075c2a90 = System_Xml_Linq_XContainer_ContentReader_TypeInfo + 0x10;
  in_stack_00000010 = System_Data_XDRSchema_NameType_TypeInfo;
  if (*(long *)System_Data_XDRSchema_NameType_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)System_Data_XDRSchema_NameType_TypeInfo,(void *)(unaff_x29 + -0x18),
               FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2a90);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c2a90;
  DAT_075c2ab0 = puVar1 + 0x10;
  DAT_075c2ab8 = 0;
  if (((DAT_075c1ec0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_075c1ec0), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0xeb8) = p_Var5;
    __cxa_guard_release(&DAT_075c1ec0);
  }
  puVar1 = MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo;
  DAT_075c2ac0 = *(undefined8 *)(unaff_x28 + 0xeb8);
  DAT_075c2ab0 = System_Xml_Linq_XElement_<GetAttributes>d__116_TypeInfo + 0x10;
  in_stack_00000010 = MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo;
  if (*(long *)MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)MS_Internal_Xml_XPath_XPathParser_ParamInfo_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2ab0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c2ab0;
  puVar1 = UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo;
  DAT_075c2ad0 = UnityEngine_InputSystem_XR_XRLayoutBuilder_<>c__DisplayClass5_0_TypeInfo + 0x10;
  in_stack_00000010 = UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo;
  DAT_075c2ad8 = 0;
  if (*(long *)UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_XR_Management_XRManagerSettings_<InitializeLoader>d__24_TypeInfo
               ,(void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2ad0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c2ad0;
  puVar1 = UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo;
  DAT_075c2ae0 = UnityEngine_Rendering_Universal_XROcclusionMeshPass_<>c_TypeInfo + 0x10;
  in_stack_00000010 = UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo;
  DAT_075c2ae8 = 0;
  if (*(long *)UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)UnityEngine_Rendering_Universal_XROcclusionMeshPass_PassData_TypeInfo,
               (void *)(unaff_x29 + -0x18),FUN_03091a18);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_075c2ae0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_030918c8();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_075c2ae0;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


