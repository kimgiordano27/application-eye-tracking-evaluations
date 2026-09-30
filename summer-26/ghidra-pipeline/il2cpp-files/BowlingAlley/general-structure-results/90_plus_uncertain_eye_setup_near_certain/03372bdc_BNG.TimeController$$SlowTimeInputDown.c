/*
FUNCTION_NAME: BNG.TimeController$$SlowTimeInputDown
ENTRY_POINT: 03372bdc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 125
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void BNG_TimeController__SlowTimeInputDown(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  __shared_count *p_Var3;
  __shared_count *p_Var4;
  long lVar5;
  ulong uVar6;
  ulong in_x10;
  ulong uVar7;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  undefined8 unaff_x23;
  long unaff_x24;
  ulong uVar8;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined *in_stack_00000010;
  undefined *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  uVar6 = unaff_x24 + 1;
  if (in_x10 < uVar6) {
    FUN_03383ab4();
    param_1 = *unaff_x20;
  }
  else if (uVar6 < in_x10) {
    *unaff_x26 = param_1 + uVar6 * 8;
  }
  p_Var3 = *(__shared_count **)(param_1 + unaff_x24 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    param_1 = *unaff_x20;
  }
  *(undefined8 *)(param_1 + unaff_x24 * 8) = unaff_x23;
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
  puVar1 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
  if ((unaff_w22 >> 2 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
    in_stack_00000018 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_03383ab4();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_03383ab4();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_03383ab4();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_03383ab4();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
  }
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<TTSWit>__;
  puVar1 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
  if ((unaff_w22 >> 5 & 1) != 0) {
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<TTSWit>__;
    in_stack_00000018 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<TTSWit>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<TTSWit>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_03383ab4();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
    puVar2 = Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__;
    in_stack_00000020 = 0;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__;
    in_stack_00000018 = puVar1;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar6 = (ulong)*(int *)(puVar2 + 8);
    uVar8 = uVar6 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar8) ||
       (p_Var3 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar8 * 8),
       p_Var3 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var3);
    lVar5 = *unaff_x20;
    uVar7 = *unaff_x26 - lVar5 >> 3;
    if (uVar7 <= uVar8) {
      if (uVar7 < uVar6) {
        FUN_03383ab4();
        lVar5 = *unaff_x20;
      }
      else if (uVar6 < uVar7) {
        *unaff_x26 = lVar5 + uVar6 * 8;
      }
    }
    p_Var4 = *(__shared_count **)(lVar5 + uVar8 * 8);
    if (p_Var4 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var4);
      lVar5 = *unaff_x20;
    }
    *(__shared_count **)(lVar5 + uVar8 * 8) = p_Var3;
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


