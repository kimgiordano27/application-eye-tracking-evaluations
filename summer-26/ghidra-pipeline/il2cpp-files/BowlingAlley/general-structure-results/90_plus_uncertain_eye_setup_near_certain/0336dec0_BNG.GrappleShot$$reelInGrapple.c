/*
FUNCTION_NAME: BNG.GrappleShot$$reelInGrapple
ENTRY_POINT: 0336dec0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 113
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;ray_or_cast_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_8
*/


void BNG_GrappleShot__reelInGrapple(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  __shared_count *p_Var4;
  __locale_t p_Var5;
  ulong uVar6;
  long lVar7;
  ulong in_x10;
  ulong uVar8;
  long *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong uVar9;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x28;
  long unaff_x29;
  undefined *in_stack_00000010;
  
  if (in_x10 <= unaff_x22) {
    uVar6 = unaff_x22 + 1;
    if (in_x10 < uVar6) {
      FUN_03383ab4();
      param_1 = *unaff_x20;
    }
    else if (uVar6 < in_x10) {
      *unaff_x24 = param_1 + uVar6 * 8;
    }
  }
  p_Var4 = *(__shared_count **)(param_1 + unaff_x22 * 8);
  if (p_Var4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var4);
    param_1 = *unaff_x20;
  }
  *(undefined8 *)(param_1 + unaff_x22 * 8) = unaff_x21;
  puVar1 = Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__;
  DAT_079016c0 = Method_UnityEngine_Object_FindObjectOfType<AppVoiceExperience>__ + 0x10;
  in_stack_00000010 = Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__;
  DAT_079016c8 = 0;
  if (*(long *)Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079016c0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_079016c0;
  puVar1 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
  DAT_079016d0 = Method_UnityEngine_Object_FindObjectOfType<AudioBuffer>__ + 0x10;
  in_stack_00000010 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
  DAT_079016d8 = 0;
  if (*(long *)Method_OVRTask_WhenAll<OVRPlugin_Result>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTask_WhenAll<OVRPlugin_Result>__,(void *)(unaff_x29 + -0x18),
               FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079016d0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_079016d0;
  puVar1 = Method_OVRTouchpadHelper_LocalTouchEventCallback__;
  DAT_079016e0 = Method_UnityEngine_Object_FindObjectOfType<AudioListener>__ + 0x10;
  in_stack_00000010 = Method_OVRTouchpadHelper_LocalTouchEventCallback__;
  DAT_079016e8 = 0;
  if (*(long *)Method_OVRTouchpadHelper_LocalTouchEventCallback__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTouchpadHelper_LocalTouchEventCallback__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079016e0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_079016e0;
  puVar1 = Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__;
  DAT_079016f0 = Method_UnityEngine_Object_FindObjectOfType<BNGPlayerController>__ + 0x10;
  in_stack_00000010 = Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__;
  DAT_079016f8 = 0;
  if (*(long *)Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079016f0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_079016f0;
  puVar1 = Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__;
  DAT_07901700 = Method_UnityEngine_Object_FindObjectOfType<CallbackRunner>__ + 0x10;
  in_stack_00000010 = Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__;
  DAT_07901708 = 0;
  if (*(long *)Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901700);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_07901700;
  puVar1 = Method_OVRVirtualKeyboard_PopulateCollision__;
  DAT_07901710 = Method_UnityEngine_Object_FindObjectOfType<CharacterController>__ + 0x10;
  in_stack_00000010 = Method_OVRVirtualKeyboard_PopulateCollision__;
  DAT_07901718 = 0;
  if (*(long *)Method_OVRVirtualKeyboard_PopulateCollision__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRVirtualKeyboard_PopulateCollision__,(void *)(unaff_x29 + -0x18),
               FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901710);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_07901710;
  puVar1 = Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__;
  DAT_07901720 = Method_UnityEngine_Object_FindObjectOfType<DebugInterface>__ + 0x10;
  in_stack_00000010 = Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__;
  DAT_07901728 = 0;
  if (*(long *)Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901720);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_07901720;
  puVar1 = Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__;
  DAT_07901730 = Method_UnityEngine_Object_FindObjectOfType<DebugUIHandlerPersistentCanvas>__ + 0x10
  ;
  in_stack_00000010 = Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__;
  DAT_07901738 = 0;
  if (*(long *)Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901730);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_07901730;
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__;
  DAT_07901740 = Method_UnityEngine_Object_FindObjectOfType<DictationService>__ + 0x10;
  in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__;
  DAT_07901748 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901740);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_07901740;
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__;
  DAT_07901750 = Method_UnityEngine_Object_FindObjectOfType<FPSCounter>__ + 0x10;
  in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__;
  DAT_07901758 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901750);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_07901750;
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__;
  DAT_07901760 = Method_UnityEngine_Object_FindObjectOfType<GameManager>__ + 0x10;
  in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__;
  DAT_07901768 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901760);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_07901760;
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<Mic>__;
  DAT_07901770 = Method_UnityEngine_Object_FindObjectOfType<InputBridge>__ + 0x10;
  in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<Mic>__;
  DAT_07901778 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<Mic>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<Mic>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901770);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_07901770;
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
  DAT_07901780 = Method_UnityEngine_Object_FindObjectOfType<OVRCameraRig>__ + 0x10;
  DAT_07901790 = Method_UnityEngine_Object_FindObjectOfType<OVRCameraRig>__ + 0x70;
  in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
  DAT_07901788 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901780);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_07901780;
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__;
  DAT_079017a0 = Method_UnityEngine_Object_FindObjectOfType<OvrAvatarLipSyncContext>__ + 0x10;
  DAT_079017b0 = Method_UnityEngine_Object_FindObjectOfType<OvrAvatarLipSyncContext>__ + 0x70;
  in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__;
  DAT_079017a8 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079017a0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_079017a0;
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<PlayerClimbingXR>__;
  DAT_079017c0 = Method_UnityEngine_Object_FindObjectOfType<PlayerClimbingXR>__ + 0x10;
  DAT_079017c8 = 0;
  if (((DAT_07900bf0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_07900bf0), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0xbe8) = p_Var5;
    __cxa_guard_release(&DAT_07900bf0);
  }
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__;
  DAT_079017d0 = *(undefined8 *)(unaff_x28 + 0xbe8);
  DAT_079017c0 = Method_UnityEngine_Object_FindObjectOfType<RoomMeshEvent>__ + 0x10;
  in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar2 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079017c0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_079017c0;
  DAT_079017e0 = puVar1 + 0x10;
  DAT_079017e8 = 0;
  if (((DAT_07900bf0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_07900bf0), iVar3 != 0)) {
    p_Var5 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    *(__locale_t *)(unaff_x28 + 0xbe8) = p_Var5;
    __cxa_guard_release(&DAT_07900bf0);
  }
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__;
  DAT_079017f0 = *(undefined8 *)(unaff_x28 + 0xbe8);
  DAT_079017e0 = Method_UnityEngine_Object_FindObjectOfType<SharedSpatialAnchorCore>__ + 0x10;
  in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079017e0);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_079017e0;
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<TTSWit>__;
  DAT_07901800 = Method_UnityEngine_Object_FindObjectOfType<TTSDiskCache>__ + 0x10;
  in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<TTSWit>__;
  DAT_07901808 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<TTSWit>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<TTSWit>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901800);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_07901800;
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__;
  DAT_07901810 = Method_UnityEngine_Object_FindObjectOfType<UserInput>__ + 0x10;
  in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__;
  DAT_07901818 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar6 = (ulong)*(int *)(puVar1 + 8);
  uVar9 = uVar6 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901810);
  lVar7 = *unaff_x20;
  uVar8 = *unaff_x24 - lVar7 >> 3;
  if (uVar8 <= uVar9) {
    if (uVar8 < uVar6) {
      FUN_03383ab4();
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
  *(undefined ***)(lVar7 + uVar9 * 8) = &DAT_07901810;
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


