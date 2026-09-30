/*
FUNCTION_NAME: FUN_03371abc
ENTRY_POINT: 03371abc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 125
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_03371abc(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  __shared_count *p_Var5;
  __shared_count *p_Var6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_07273520;
  param_1[1] = 0xffffffffffffffff;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar11 = param_1 + 2;
  *plVar11 = (long)(param_1 + 6);
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
  plVar13 = param_1 + 3;
  *plVar13 = (long)(param_1 + 0x22);
  *(undefined2 *)(param_1 + 0x24) = 0x2a02;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  if (param_1 != param_2) {
    FUN_0338392c(plVar11,param_2[2],param_2[3]);
  }
  lVar7 = *plVar13;
  lVar8 = *plVar11;
  if (lVar7 != lVar8) {
    uVar9 = 0;
    uVar12 = 1;
    do {
      p_Var5 = *(__shared_count **)(lVar8 + uVar9 * 8);
      if (p_Var5 != (__shared_count *)0x0) {
        std::__ndk1::__shared_count::__add_shared(p_Var5);
        lVar7 = *plVar13;
        lVar8 = *plVar11;
      }
      bVar4 = uVar12 < (ulong)(lVar7 - lVar8 >> 3);
      uVar9 = uVar12;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (bVar4);
  }
  puVar3 = Method_OVRVirtualKeyboardSampleControls_MoveKeyboardFar__;
  puVar2 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
  if ((param_4 >> 3 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_OVRVirtualKeyboardSampleControls_MoveKeyboardFar__;
    puStack_88 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
    if (*(long *)Method_OVRVirtualKeyboardSampleControls_MoveKeyboardFar__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRVirtualKeyboardSampleControls_MoveKeyboardFar__,&local_78,
                 FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_OVRVirtualKeyboardSampleControls_OnHideKeyboard__;
    local_80 = 0;
    local_90 = Method_OVRVirtualKeyboardSampleControls_OnHideKeyboard__;
    puStack_88 = puVar2;
    if (*(long *)Method_OVRVirtualKeyboardSampleControls_OnHideKeyboard__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRVirtualKeyboardSampleControls_OnHideKeyboard__,&local_78,
                 FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
  puVar2 = Method_OVRTask_SetResult<OVRResult<OVRAnchor_ShareResult>>__;
  if ((param_4 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_OVRTask_SetResult<OVRResult<OVRAnchor_ShareResult>>__;
    puStack_88 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
    if (*(long *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_ShareResult>>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_ShareResult>>__,&local_78,
                 FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = Method_OVRTask_WhenAll<bool>__;
    local_80 = 0;
    local_90 = Method_OVRTask_WhenAll<bool>__;
    puStack_88 = puVar3;
    if (*(long *)Method_OVRTask_WhenAll<bool>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once((ulong *)Method_OVRTask_WhenAll<bool>__,&local_78,FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = Method_OVRTask_FromResult<OVRSpatialAnchor_OperationResult>__;
    local_80 = 0;
    local_90 = Method_OVRTask_FromResult<OVRSpatialAnchor_OperationResult>__;
    puStack_88 = puVar3;
    if (*(long *)Method_OVRTask_FromResult<OVRSpatialAnchor_OperationResult>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRTask_FromResult<OVRSpatialAnchor_OperationResult>__,&local_78,
                 FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__;
    local_80 = 0;
    local_90 = Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__;
    puStack_88 = puVar3;
    if (*(long *)Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindAnyObjectByType<OVRCameraRig>__,&local_78,
                 FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = 
    Method_UnityEngine_Object_FindAnyObjectByType<SpatialAnchorLocalStorageManagerBuildingBlock>__;
    local_80 = 0;
    local_90 = 
    Method_UnityEngine_Object_FindAnyObjectByType<SpatialAnchorLocalStorageManagerBuildingBlock>__;
    puStack_88 = puVar3;
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
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = Method_System_Runtime_Remoting_Messaging_ObjRefSurrogate_SetObjectData__;
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
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__;
  puVar2 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
  if ((param_4 >> 4 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__;
    puStack_88 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
    if (*(long *)Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRVirtualKeyboard_SendVirtualKeyboardDirectInput__,&local_78,
                 FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_OVRVirtualKeyboard_PopulateCollision__;
    local_80 = 0;
    local_90 = Method_OVRVirtualKeyboard_PopulateCollision__;
    puStack_88 = puVar2;
    if (*(long *)Method_OVRVirtualKeyboard_PopulateCollision__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRVirtualKeyboard_PopulateCollision__,&local_78,FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__;
    local_80 = 0;
    local_90 = Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__;
    puStack_88 = puVar2;
    if (*(long *)Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRVirtualKeyboardInputFieldTextHandler_ProxyOnValueChanged__,
                 &local_78,FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__;
    local_80 = 0;
    local_90 = Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__;
    puStack_88 = puVar2;
    if (*(long *)Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRVirtualKeyboard_SendVirtualKeyboardRayInput__,&local_78,
                 FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__;
    local_80 = 0;
    local_90 = Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<DynamicEntityKeywordRegistry>__
                 ,&local_78,FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__;
    local_80 = 0;
    local_90 = Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<FadeScreen>__,&local_78,
                 FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__;
    local_80 = 0;
    local_90 = Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<HandModelSelector>__,&local_78,
                 FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_UnityEngine_Object_FindObjectOfType<Mic>__;
    local_80 = 0;
    local_90 = Method_UnityEngine_Object_FindObjectOfType<Mic>__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<Mic>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<Mic>__,&local_78,FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = Method_OVRVirtualKeyboard_Awake__;
  puVar2 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
  if ((param_4 >> 1 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_OVRVirtualKeyboard_Awake__;
    puStack_88 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
    if (*(long *)Method_OVRVirtualKeyboard_Awake__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once((ulong *)Method_OVRVirtualKeyboard_Awake__,&local_78,FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_OVRVirtualKeyboard_OnCommitText__;
    local_80 = 0;
    local_90 = Method_OVRVirtualKeyboard_OnCommitText__;
    puStack_88 = puVar2;
    if (*(long *)Method_OVRVirtualKeyboard_OnCommitText__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRVirtualKeyboard_OnCommitText__,&local_78,FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__;
    local_80 = 0;
    local_90 = Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__;
    puStack_88 = puVar2;
    if (*(long *)Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRTask_TryGetPendingTask<OVRSpatialAnchor_UnboundAnchor[]>__,
                 &local_78,FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
    local_80 = 0;
    local_90 = Method_OVRTask_WhenAll<OVRPlugin_Result>__;
    puStack_88 = puVar2;
    if (*(long *)Method_OVRTask_WhenAll<OVRPlugin_Result>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRTask_WhenAll<OVRPlugin_Result>__,&local_78,FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_OVRTouchpadHelper_LocalTouchEventCallback__;
    local_80 = 0;
    local_90 = Method_OVRTouchpadHelper_LocalTouchEventCallback__;
    puStack_88 = puVar2;
    if (*(long *)Method_OVRTouchpadHelper_LocalTouchEventCallback__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRTouchpadHelper_LocalTouchEventCallback__,&local_78,FUN_03383c04)
      ;
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__;
    local_80 = 0;
    local_90 = Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__;
    puStack_88 = puVar2;
    if (*(long *)Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_OVRTrackedKeyboardHands_TrackedKeyboardVisibilityChanged__,
                 &local_78,FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
  puVar2 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
  if ((param_4 >> 2 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_UnityEngine_Object_FindObjectOfType<OVRManager>__;
    puStack_88 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<OVRManager>__,&local_78,
                 FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__;
    local_80 = 0;
    local_90 = Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<PlaneCollisionHandler>__,
                 &local_78,FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__;
    local_80 = 0;
    local_90 = Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<ScreenFader>__,&local_78,
                 FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__;
    local_80 = 0;
    local_90 = Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<SimpleAvatarCreator>__,
                 &local_78,FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  puVar3 = Method_UnityEngine_Object_FindObjectOfType<TTSWit>__;
  puVar2 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
  if ((param_4 >> 5 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_UnityEngine_Object_FindObjectOfType<TTSWit>__;
    puStack_88 = Method_OVRVirtualKeyboard_AnimationStatesBufferProvider__;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<TTSWit>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<TTSWit>__,&local_78,
                 FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__;
    local_80 = 0;
    local_90 = Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__;
    puStack_88 = puVar2;
    if (*(long *)Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_UnityEngine_Object_FindObjectOfType<VRKeyboard>__,&local_78,
                 FUN_03383c04);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0332ce64();
    }
    std::__ndk1::__shared_count::__add_shared(p_Var5);
    lVar7 = *plVar11;
    uVar10 = *plVar13 - lVar7 >> 3;
    if (uVar10 <= uVar12) {
      if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
        if (uVar9 < uVar10) {
          *plVar13 = lVar7 + uVar9 * 8;
        }
      }
      else {
        FUN_03383ab4(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


