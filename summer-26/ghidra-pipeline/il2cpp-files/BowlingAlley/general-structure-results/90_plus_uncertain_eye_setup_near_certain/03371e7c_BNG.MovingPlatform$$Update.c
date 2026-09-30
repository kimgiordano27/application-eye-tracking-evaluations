/*
FUNCTION_NAME: BNG.MovingPlatform$$Update
ENTRY_POINT: 03371e7c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 131
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


void BNG_MovingPlatform__Update(long param_1)

{
  undefined *puVar1;
  __shared_count *p_Var2;
  __shared_count *p_Var3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  undefined8 unaff_x23;
  ulong unaff_x24;
  ulong uVar7;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined *in_stack_00000010;
  
                    /* try { // try from 03371e80 to 03471eb3 has its CatchHandler @ 03371e80
                       catch() { ... } // from try @ 03371e80 with catch @ 03371e80
                       catch() { ... } // from try @ 03371ecc with catch @ 03371e80 */
  uVar5 = in_x9 - param_1 >> 3;
  if (uVar5 <= unaff_x24) {
    uVar7 = unaff_x24 + 1;
    if (uVar5 < uVar7) {
      FUN_03383ab4();
      param_1 = *unaff_x20;
    }
    else if (uVar7 < uVar5) {
      *unaff_x26 = param_1 + uVar7 * 8;
    }
  }
                    /* try { // try from 03371eb4 to 03471ecb has its CatchHandler @ 03371ee8 */
  p_Var2 = *(__shared_count **)(param_1 + unaff_x24 * 8);
  if (p_Var2 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var2);
    param_1 = *unaff_x20;
  }
  *(undefined8 *)(param_1 + unaff_x24 * 8) = unaff_x23;
  puVar1 = Method_OVRTask_FromResult<OVRSpatialAnchor_OperationResult>__;
                    /* try { // try from 03371ecc to 03471efb has its CatchHandler @ 03371e80 */
  in_stack_00000010 = Method_OVRTask_FromResult<OVRSpatialAnchor_OperationResult>__;
  if (*(long *)Method_OVRTask_FromResult<OVRSpatialAnchor_OperationResult>__ != -1) {
                    /* catch() { ... } // from try @ 03371eb4 with catch @ 03371ee8 */
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTask_FromResult<OVRSpatialAnchor_OperationResult>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar5 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0332ce64();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var2);
  lVar4 = *unaff_x20;
  uVar6 = *unaff_x26 - lVar4 >> 3;
  if (uVar6 <= uVar7) {
    if (uVar6 < uVar5) {
      FUN_03383ab4();
      lVar4 = *unaff_x20;
    }
    else if (uVar5 < uVar6) {
      *unaff_x26 = lVar4 + uVar5 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar4 = *unaff_x20;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  puVar1 = Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__;
  in_stack_00000010 = Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__;
  if (*(long *)Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar5 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0332ce64();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var2);
  lVar4 = *unaff_x20;
  uVar6 = *unaff_x26 - lVar4 >> 3;
  if (uVar6 <= uVar7) {
    if (uVar6 < uVar5) {
      FUN_03383ab4();
      lVar4 = *unaff_x20;
    }
    else if (uVar5 < uVar6) {
      *unaff_x26 = lVar4 + uVar5 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar4 = *unaff_x20;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  puVar1 = 
  Method_UnityEngine_Object_FindAnyObjectByType<SpatialAnchorLocalStorageManagerBuildingBlock>__;
  in_stack_00000010 =
       Method_UnityEngine_Object_FindAnyObjectByType<SpatialAnchorLocalStorageManagerBuildingBlock>__
  ;
  if (*(long *)
       Method_UnityEngine_Object_FindAnyObjectByType<SpatialAnchorLocalStorageManagerBuildingBlock>__
      != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)
               Method_UnityEngine_Object_FindAnyObjectByType<SpatialAnchorLocalStorageManagerBuildingBlock>__
               ,(void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar5 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0332ce64();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var2);
  lVar4 = *unaff_x20;
  uVar6 = *unaff_x26 - lVar4 >> 3;
  if (uVar6 <= uVar7) {
    if (uVar6 < uVar5) {
      FUN_03383ab4();
      lVar4 = *unaff_x20;
    }
    else if (uVar5 < uVar6) {
      *unaff_x26 = lVar4 + uVar5 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar4 = *unaff_x20;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  puVar1 = Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_SetObjectData__;
  in_stack_00000010 = Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_SetObjectData__;
  if (*(long *)Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_SetObjectData__ != -1) {
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
    *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_SetObjectData__,
               (void *)(unaff_x29 + -0x18),FUN_03383c04);
  }
  uVar5 = (ulong)*(int *)(puVar1 + 8);
  uVar7 = uVar5 - 1;
  if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
     (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
     p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0332ce64();
  }
  std::__ndk1::__shared_count::__add_shared(p_Var2);
  lVar4 = *unaff_x20;
  uVar6 = *unaff_x26 - lVar4 >> 3;
  if (uVar6 <= uVar7) {
    if (uVar6 < uVar5) {
      FUN_03383ab4();
      lVar4 = *unaff_x20;
    }
    else if (uVar5 < uVar6) {
      *unaff_x26 = lVar4 + uVar5 * 8;
    }
  }
  p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
  if (p_Var3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var3);
    lVar4 = *unaff_x20;
  }
  *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  puVar1 = Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__;
  if ((unaff_w22 >> 4 & 1) != 0) {
    in_stack_00000010 = Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__;
    if (*(long *)Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_OVRVirtualKeyboard_PopulateCollision__;
    in_stack_00000010 = Method_OVRVirtualKeyboard_PopulateCollision__;
    if (*(long *)Method_OVRVirtualKeyboard_PopulateCollision__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRVirtualKeyboard_PopulateCollision__,(void *)(unaff_x29 + -0x18),
                 FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__;
    in_stack_00000010 = Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__;
    if (*(long *)Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__;
    in_stack_00000010 = Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__;
    if (*(long *)Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__
                 ,(void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_UnityEngine_Object_FindObjectOfType<Mic>__;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<Mic>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<Mic>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<Mic>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  }
  puVar1 = Method_OVRVirtualKeyboard_Awake__;
  if ((unaff_w22 >> 1 & 1) != 0) {
    in_stack_00000010 = Method_OVRVirtualKeyboard_Awake__;
    if (*(long *)Method_OVRVirtualKeyboard_Awake__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRVirtualKeyboard_Awake__,(void *)(unaff_x29 + -0x18),FUN_03383c04
                );
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_OVRVirtualKeyboard_OnCommitText__;
    in_stack_00000010 = Method_OVRVirtualKeyboard_OnCommitText__;
    if (*(long *)Method_OVRVirtualKeyboard_OnCommitText__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRVirtualKeyboard_OnCommitText__,(void *)(unaff_x29 + -0x18),
                 FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__;
    in_stack_00000010 = Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__;
    if (*(long *)Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
    in_stack_00000010 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
    if (*(long *)Method_OVRTask_WhenAll<OVRPlugin_Result>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRTask_WhenAll<OVRPlugin_Result>__,(void *)(unaff_x29 + -0x18),
                 FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_OVRTouchpadHelper_LocalTouchEventCallback__;
    in_stack_00000010 = Method_OVRTouchpadHelper_LocalTouchEventCallback__;
    if (*(long *)Method_OVRTouchpadHelper_LocalTouchEventCallback__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRTouchpadHelper_LocalTouchEventCallback__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__;
    in_stack_00000010 = Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__;
    if (*(long *)Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  }
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
  if ((unaff_w22 >> 2 & 1) != 0) {
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  }
  puVar1 = Method_UnityEngine_Object_FindObjectOfType<TTSWit>__;
  if ((unaff_w22 >> 5 & 1) != 0) {
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<TTSWit>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<TTSWit>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<TTSWit>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
    puVar1 = Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__;
    in_stack_00000010 = Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__ != -1) {
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x10;
      *(undefined ***)(unaff_x29 + -0x10) = &stack0x00000010;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__,
                 (void *)(unaff_x29 + -0x18),FUN_03383c04);
    }
    uVar5 = (ulong)*(int *)(puVar1 + 8);
    uVar7 = uVar5 - 1;
    if (((ulong)(*(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10) >> 3) <= uVar7) ||
       (p_Var2 = *(__shared_count **)(*(long *)(unaff_x21 + 0x10) + uVar7 * 8),
       p_Var2 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var2);
    lVar4 = *unaff_x20;
    uVar6 = *unaff_x26 - lVar4 >> 3;
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar5) {
        FUN_03383ab4();
        lVar4 = *unaff_x20;
      }
      else if (uVar5 < uVar6) {
        *unaff_x26 = lVar4 + uVar5 * 8;
      }
    }
    p_Var3 = *(__shared_count **)(lVar4 + uVar7 * 8);
    if (p_Var3 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var3);
      lVar4 = *unaff_x20;
    }
    *(__shared_count **)(lVar4 + uVar7 * 8) = p_Var2;
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


