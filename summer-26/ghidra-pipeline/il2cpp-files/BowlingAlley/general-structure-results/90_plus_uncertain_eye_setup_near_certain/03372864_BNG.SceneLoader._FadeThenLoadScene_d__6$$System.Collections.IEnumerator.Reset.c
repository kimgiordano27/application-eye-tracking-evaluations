/*
FUNCTION_NAME: BNG.SceneLoader.<FadeThenLoadScene>d__6$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03372864
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 125
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_8
*/


void BNG_SceneLoader_<FadeThenLoadScene>d__6__System_Collections_IEnumerator_Reset(void)

{
  undefined *puVar1;
  __shared_count *p_Var2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  undefined8 unaff_x23;
  __shared_count *p_Var6;
  long unaff_x24;
  ulong uVar7;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined *puStack0000000000000010;
  undefined8 uStack0000000000000020;
  
  *(undefined8 *)(*unaff_x20 + unaff_x24 * 8) = unaff_x23;
  puVar1 = Method_OVRVirtualKeyboard_OnCommitText__;
  uStack0000000000000020 = 0;
  puStack0000000000000010 = Method_OVRVirtualKeyboard_OnCommitText__;
  if (*(long *)Method_OVRVirtualKeyboard_OnCommitText__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRVirtualKeyboard_OnCommitText__,(void *)(unaff_x29 + -0x18),
               FUN_03383c04);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar4 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var6 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var6 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0332ce64();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var6);
  lVar3 = *unaff_x20;
  uVar5 = *unaff_x26 - lVar3 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar5 < uVar4) {
      FUN_03383ab4();
      lVar3 = *unaff_x20;
    }
    else if (uVar4 < uVar5) {
      *unaff_x26 = lVar3 + uVar4 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(__shared_count **)(lVar3 + uVar7 * 8) = p_Var6;
  puVar1 = Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__;
  uStack0000000000000020 = 0;
  puStack0000000000000010 = Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__;
  if (*(long *)Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar4 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var6 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var6 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0332ce64();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var6);
  lVar3 = *unaff_x20;
  uVar5 = *unaff_x26 - lVar3 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar5 < uVar4) {
      FUN_03383ab4();
      lVar3 = *unaff_x20;
    }
    else if (uVar4 < uVar5) {
      *unaff_x26 = lVar3 + uVar4 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(__shared_count **)(lVar3 + uVar7 * 8) = p_Var6;
  puVar1 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
  uStack0000000000000020 = 0;
  puStack0000000000000010 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
  if (*(long *)Method_OVRTask_WhenAll<OVRPlugin_Result>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTask_WhenAll<OVRPlugin_Result>__,(void *)(unaff_x29 + -0x18),
               FUN_03383c04);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar4 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var6 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var6 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0332ce64();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var6);
  lVar3 = *unaff_x20;
  uVar5 = *unaff_x26 - lVar3 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar5 < uVar4) {
      FUN_03383ab4();
      lVar3 = *unaff_x20;
    }
    else if (uVar4 < uVar5) {
      *unaff_x26 = lVar3 + uVar4 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(__shared_count **)(lVar3 + uVar7 * 8) = p_Var6;
  puVar1 = Method_OVRTouchpadHelper_LocalTouchEventCallback__;
  uStack0000000000000020 = 0;
  puStack0000000000000010 = Method_OVRTouchpadHelper_LocalTouchEventCallback__;
  if (*(long *)Method_OVRTouchpadHelper_LocalTouchEventCallback__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTouchpadHelper_LocalTouchEventCallback__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar4 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var6 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var6 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0332ce64();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var6);
  lVar3 = *unaff_x20;
  uVar5 = *unaff_x26 - lVar3 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar5 < uVar4) {
      FUN_03383ab4();
      lVar3 = *unaff_x20;
    }
    else if (uVar4 < uVar5) {
      *unaff_x26 = lVar3 + uVar4 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(__shared_count **)(lVar3 + uVar7 * 8) = p_Var6;
  puVar1 = Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__;
  uStack0000000000000020 = 0;
  puStack0000000000000010 = Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__;
  if (*(long *)Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar4 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar4 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var6 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var6 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0332ce64();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var6);
  lVar3 = *unaff_x20;
  uVar5 = *unaff_x26 - lVar3 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar5 < uVar4) {
      FUN_03383ab4();
      lVar3 = *unaff_x20;
    }
    else if (uVar4 < uVar5) {
      *unaff_x26 = lVar3 + uVar4 * 8;
    }
  }
  p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    lVar3 = *unaff_x20;
  }
  *(__shared_count **)(lVar3 + uVar7 * 8) = p_Var6;
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
  if ((unaff_w22 >> 2 & 1) != 0) {
    uStack0000000000000020 = 0;
    puStack0000000000000010 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var6 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var6 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_03383ab4();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(__shared_count **)(lVar3 + uVar7 * 8) = p_Var6;
    puVar1 = Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__;
    uStack0000000000000020 = 0;
    puStack0000000000000010 = Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var6 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var6 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_03383ab4();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(__shared_count **)(lVar3 + uVar7 * 8) = p_Var6;
    puVar1 = Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__;
    uStack0000000000000020 = 0;
    puStack0000000000000010 = Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var6 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var6 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_03383ab4();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(__shared_count **)(lVar3 + uVar7 * 8) = p_Var6;
    puVar1 = Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__;
    uStack0000000000000020 = 0;
    puStack0000000000000010 = Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var6 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var6 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_03383ab4();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(__shared_count **)(lVar3 + uVar7 * 8) = p_Var6;
  }
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<TTSWit>__;
  if ((unaff_w22 >> 5 & 1) != 0) {
    uStack0000000000000020 = 0;
    puStack0000000000000010 = Method_UnityEngine_Object_FindObjectOfType<TTSWit>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<TTSWit>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<TTSWit>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var6 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var6 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_03383ab4();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(__shared_count **)(lVar3 + uVar7 * 8) = p_Var6;
    puVar1 = Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__;
    uStack0000000000000020 = 0;
    puStack0000000000000010 = Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar4 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar4 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var6 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var6 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var6);
    lVar3 = *unaff_x20;
    uVar5 = *unaff_x26 - lVar3 >> 3;
    if (uVar5 <= uVar7) {
      if (uVar5 < uVar4) {
        FUN_03383ab4();
        lVar3 = *unaff_x20;
      }
      else if (uVar4 < uVar5) {
        *unaff_x26 = lVar3 + uVar4 * 8;
      }
    }
    p_Var2 = *(__shared_count **)(lVar3 + uVar7 * 8);
    if (p_Var2 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var2);
      lVar3 = *unaff_x20;
    }
    *(__shared_count **)(lVar3 + uVar7 * 8) = p_Var6;
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


