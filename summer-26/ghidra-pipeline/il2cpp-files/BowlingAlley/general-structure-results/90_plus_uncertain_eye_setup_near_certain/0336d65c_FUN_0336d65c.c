/*
FUNCTION_NAME: FUN_0336d65c
ENTRY_POINT: 0336d65c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 140
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_9;validity_or_gating_hits_21;ray_or_cast_sink_hits_8;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_0336d65c(undefined8 *param_1,long param_2)

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
  *param_1 = &PTR_FUN_07273520;
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
  puVar3 = Method_OVRVirtualKeyboardSampleControls_DestroyKeyboard__;
  *(undefined2 *)(param_1 + 0x24) = 0x4302;
  puVar2 = Method_OVRVirtualKeyboardSampleControls_MoveKeyboardFar__;
  DAT_079015c0 = puVar3 + 0x10;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  puVar3 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
  DAT_079015c8 = 0;
  local_80 = 0;
  local_90 = puVar2;
  puStack_88 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
  if (*(long *)puVar2 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRVirtualKeyboardSampleControls_MoveKeyboardFar__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079015c0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_079015c0;
  puVar2 = Method_OVRVirtualKeyboardSampleControls_OnHideKeyboard__;
  DAT_079015d0 = Method_OVRVirtualKeyboardSampleControls_MoveKeyboardNear__ + 0x10;
  local_90 = Method_OVRVirtualKeyboardSampleControls_OnHideKeyboard__;
  puStack_88 = puVar3;
  DAT_079015d8 = 0;
  local_80 = 0;
  if (*(long *)Method_OVRVirtualKeyboardSampleControls_OnHideKeyboard__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRVirtualKeyboardSampleControls_OnHideKeyboard__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079015d0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_079015d0;
  puVar2 = Method_OVRTask_SetResult<OVRResult<OVRAnchor_ShareResult>>__;
  DAT_079015f0 = &DAT_01be4058;
  DAT_079015e0 = Method_System_Runtime_Remoting_ObjRef__ctor__ + 0x10;
  DAT_079015f8 = 0;
  DAT_079015e8 = 0;
  local_90 = Method_OVRTask_SetResult<OVRResult<OVRAnchor_ShareResult>>__;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_ShareResult>>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_ShareResult>>__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079015e0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_079015e0;
  puVar2 = Method_OVRTask_WhenAll<bool>__;
  DAT_07901600 = Method_System_Runtime_Remoting_ObjRef_SerializeType__ + 0x10;
  local_90 = Method_OVRTask_WhenAll<bool>__;
  puStack_88 = puVar3;
  DAT_07901608 = 0;
  local_80 = 0;
  if (*(long *)Method_OVRTask_WhenAll<bool>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)Method_OVRTask_WhenAll<bool>__,&local_78,FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901600);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901600;
  puVar2 = Method_OVRTask_FromResult<OVRSpatialAnchor_OperationResult>__;
  DAT_07901610 = Method_System_Runtime_Remoting_ObjRef_get_ServerType__ + 0x10;
  local_90 = Method_OVRTask_FromResult<OVRSpatialAnchor_OperationResult>__;
  puStack_88 = puVar3;
  DAT_07901618 = 0;
  local_80 = 0;
  if (*(long *)Method_OVRTask_FromResult<OVRSpatialAnchor_OperationResult>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTask_FromResult<OVRSpatialAnchor_OperationResult>__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901610);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901610;
  DAT_07901620 = Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_GetObjectData__ + 0x10;
  DAT_07901628 = 0;
  if (((DAT_07900bf0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_07900bf0), iVar5 != 0)) {
    DAT_07900be8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_07900bf0);
  }
  puVar2 = Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_SetObjectData__;
  DAT_07901630 = DAT_07900be8;
  local_80 = 0;
  local_90 = Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_SetObjectData__;
  puStack_88 = puVar3;
  if (*(long *)Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_SetObjectData__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_SetObjectData__,
               &local_78,FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901620);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901620;
  puVar2 = Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__;
  DAT_07901640 = Method_UnityEngine_Object_FindAnyObjectByType<EventSystem>__ + 0x10;
  local_90 = Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__;
  puStack_88 = puVar3;
  DAT_07901648 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901640);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901640;
  puVar2 = 
  Method_UnityEngine_Object_FindAnyObjectByType<SpatialAnchorLocalStorageManagerBuildingBlock>__;
  DAT_07901650 = Method_UnityEngine_Object_FindAnyObjectByType<OVRSceneManager>__ + 0x10;
  local_90 = 
  Method_UnityEngine_Object_FindAnyObjectByType<SpatialAnchorLocalStorageManagerBuildingBlock>__;
  puStack_88 = puVar3;
  DAT_07901658 = 0;
  local_80 = 0;
  if (*(long *)
       Method_UnityEngine_Object_FindAnyObjectByType<SpatialAnchorLocalStorageManagerBuildingBlock>__
      != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_UnityEngine_Object_FindAnyObjectByType<SpatialAnchorLocalStorageManagerBuildingBlock>__
               ,&local_78,FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901650);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901650;
  puVar2 = Method_OVRVirtualKeyboard_Awake__;
  DAT_07901670 = 0x2c2e;
  DAT_07901660 = Method_UnityEngine_Object_FindObjectOfType<ARCameraManager>__ + 0x10;
  DAT_07901680 = 0;
  DAT_07901688 = 0;
  DAT_07901678 = 0;
  local_90 = Method_OVRVirtualKeyboard_Awake__;
  puStack_88 = puVar3;
  DAT_07901668 = 0;
  local_80 = 0;
  if (*(long *)Method_OVRVirtualKeyboard_Awake__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)Method_OVRVirtualKeyboard_Awake__,&local_78,FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901660);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901660;
  puVar2 = Method_OVRVirtualKeyboard_OnCommitText__;
  DAT_07901690 = Method_UnityEngine_Object_FindObjectOfType<ARGestureInteractor>__ + 0x10;
  DAT_079016b0 = 0;
  DAT_079016b8 = 0;
  DAT_079016a8 = 0;
  local_90 = Method_OVRVirtualKeyboard_OnCommitText__;
  puStack_88 = puVar3;
  DAT_07901698 = 0;
  DAT_079016a0 = DAT_0139e538;
  local_80 = 0;
  if (*(long *)Method_OVRVirtualKeyboard_OnCommitText__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRVirtualKeyboard_OnCommitText__,&local_78,FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901690);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901690;
  puVar2 = Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__;
  DAT_079016c0 = Method_UnityEngine_Object_FindObjectOfType<AppVoiceExperience>__ + 0x10;
  local_90 = Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__;
  puStack_88 = puVar3;
  DAT_079016c8 = 0;
  local_80 = 0;
  if (*(long *)Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__,
               &local_78,FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079016c0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_079016c0;
  puVar2 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
  DAT_079016d0 = Method_UnityEngine_Object_FindObjectOfType<AudioBuffer>__ + 0x10;
  local_90 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
  puStack_88 = puVar3;
  DAT_079016d8 = 0;
  local_80 = 0;
  if (*(long *)Method_OVRTask_WhenAll<OVRPlugin_Result>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTask_WhenAll<OVRPlugin_Result>__,&local_78,FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079016d0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_079016d0;
  puVar2 = Method_OVRTouchpadHelper_LocalTouchEventCallback__;
  DAT_079016e0 = Method_UnityEngine_Object_FindObjectOfType<AudioListener>__ + 0x10;
  local_90 = Method_OVRTouchpadHelper_LocalTouchEventCallback__;
  puStack_88 = puVar3;
  DAT_079016e8 = 0;
  local_80 = 0;
  if (*(long *)Method_OVRTouchpadHelper_LocalTouchEventCallback__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTouchpadHelper_LocalTouchEventCallback__,&local_78,FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079016e0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_079016e0;
  puVar2 = Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__;
  DAT_079016f0 = Method_UnityEngine_Object_FindObjectOfType<BNGPlayerController>__ + 0x10;
  local_90 = Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__;
  puStack_88 = puVar3;
  DAT_079016f8 = 0;
  local_80 = 0;
  if (*(long *)Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079016f0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_079016f0;
  puVar2 = Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__;
  DAT_07901700 = Method_UnityEngine_Object_FindObjectOfType<CallbackRunner>__ + 0x10;
  local_90 = Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__;
  puStack_88 = puVar3;
  DAT_07901708 = 0;
  local_80 = 0;
  if (*(long *)Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901700);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901700;
  puVar2 = Method_OVRVirtualKeyboard_PopulateCollision__;
  DAT_07901710 = Method_UnityEngine_Object_FindObjectOfType<CharacterController>__ + 0x10;
  local_90 = Method_OVRVirtualKeyboard_PopulateCollision__;
  puStack_88 = puVar3;
  DAT_07901718 = 0;
  local_80 = 0;
  if (*(long *)Method_OVRVirtualKeyboard_PopulateCollision__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRVirtualKeyboard_PopulateCollision__,&local_78,FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901710);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901710;
  puVar2 = Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__;
  DAT_07901720 = Method_UnityEngine_Object_FindObjectOfType<DebugInterface>__ + 0x10;
  local_90 = Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__;
  puStack_88 = puVar3;
  DAT_07901728 = 0;
  local_80 = 0;
  if (*(long *)Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__,
               &local_78,FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901720);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901720;
  puVar2 = Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__;
  DAT_07901730 = Method_UnityEngine_Object_FindObjectOfType<DebugUIHandlerPersistentCanvas>__ + 0x10
  ;
  local_90 = Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__;
  puStack_88 = puVar3;
  DAT_07901738 = 0;
  local_80 = 0;
  if (*(long *)Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901730);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901730;
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__;
  DAT_07901740 = Method_UnityEngine_Object_FindObjectOfType<DictationService>__ + 0x10;
  local_90 = Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__;
  puStack_88 = puVar3;
  DAT_07901748 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__,
               &local_78,FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901740);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901740;
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__;
  DAT_07901750 = Method_UnityEngine_Object_FindObjectOfType<FPSCounter>__ + 0x10;
  local_90 = Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__;
  puStack_88 = puVar3;
  DAT_07901758 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901750);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901750;
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__;
  DAT_07901760 = Method_UnityEngine_Object_FindObjectOfType<GameManager>__ + 0x10;
  local_90 = Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__;
  puStack_88 = puVar3;
  DAT_07901768 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901760);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901760;
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<Mic>__;
  DAT_07901770 = Method_UnityEngine_Object_FindObjectOfType<InputBridge>__ + 0x10;
  local_90 = Method_UnityEngine_Object_FindObjectOfType<Mic>__;
  puStack_88 = puVar3;
  DAT_07901778 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<Mic>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<Mic>__,&local_78,FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901770);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901770;
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
  DAT_07901780 = Method_UnityEngine_Object_FindObjectOfType<OVRCameraRig>__ + 0x10;
  DAT_07901790 = Method_UnityEngine_Object_FindObjectOfType<OVRCameraRig>__ + 0x70;
  local_90 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
  puStack_88 = puVar3;
  DAT_07901788 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901780);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901780;
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__;
  DAT_079017a0 = Method_UnityEngine_Object_FindObjectOfType<OvrAvatarLipSyncContext>__ + 0x10;
  DAT_079017b0 = Method_UnityEngine_Object_FindObjectOfType<OvrAvatarLipSyncContext>__ + 0x70;
  local_90 = Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__;
  puStack_88 = puVar3;
  DAT_079017a8 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__,
               &local_78,FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079017a0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_079017a0;
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<PlayerClimbingXR>__;
  DAT_079017c0 = Method_UnityEngine_Object_FindObjectOfType<PlayerClimbingXR>__ + 0x10;
  DAT_079017c8 = 0;
  if (((DAT_07900bf0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_07900bf0), iVar5 != 0)) {
    DAT_07900be8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_07900bf0);
  }
  puVar4 = Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__;
  DAT_079017d0 = DAT_07900be8;
  DAT_079017c0 = Method_UnityEngine_Object_FindObjectOfType<RoomMeshEvent>__ + 0x10;
  local_90 = Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar4 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079017c0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_079017c0;
  DAT_079017e0 = puVar2 + 0x10;
  DAT_079017e8 = 0;
  if (((DAT_07900bf0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_07900bf0), iVar5 != 0)) {
    DAT_07900be8 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_07900bf0);
  }
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__;
  DAT_079017f0 = DAT_07900be8;
  DAT_079017e0 = Method_UnityEngine_Object_FindObjectOfType<SharedSpatialAnchorCore>__ + 0x10;
  local_90 = Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_079017e0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_079017e0;
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<TTSWit>__;
  DAT_07901800 = Method_UnityEngine_Object_FindObjectOfType<TTSDiskCache>__ + 0x10;
  local_90 = Method_UnityEngine_Object_FindObjectOfType<TTSWit>__;
  puStack_88 = puVar3;
  DAT_07901808 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<TTSWit>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<TTSWit>__,&local_78,FUN_03383c04)
    ;
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901800);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901800;
  puVar2 = Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__;
  DAT_07901810 = Method_UnityEngine_Object_FindObjectOfType<UserInput>__ + 0x10;
  local_90 = Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__;
  puStack_88 = puVar3;
  DAT_07901818 = 0;
  local_80 = 0;
  if (*(long *)Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__,&local_78,
               FUN_03383c04);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_07901810);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_03383ab4(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_07901810;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


