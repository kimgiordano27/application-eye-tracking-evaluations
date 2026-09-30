/*
FUNCTION_NAME: FUN_02dc69e4
ENTRY_POINT: 02dc69e4
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_10;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_02dc69e4(undefined8 *param_1,long param_2)

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
  *param_1 = &DAT_07e86960;
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
  puVar3 = Method_System_Data_Listeners<DataViewListener>__ctor__;
  *(undefined2 *)(param_1 + 0x24) = 0x4302;
  puVar2 = Method_System_Data_Listeners<DataViewListener>_Add__;
  DAT_086d68e0 = puVar3 + 0x10;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  puVar3 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
  DAT_086d68e8 = 0;
  local_80 = 0;
  local_90 = puVar2;
  puStack_88 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
  if (*(long *)puVar2 != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Data_Listeners<DataViewListener>_Add__,&local_78,FUN_02ddcf8c)
    ;
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d68e0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d68e0;
  puVar2 = Method_System_Data_Listeners<DataViewListener>_get_HasListeners__;
  DAT_086d68f0 = Method_System_Data_Listeners<DataViewListener>_Remove__ + 0x10;
  local_90 = Method_System_Data_Listeners<DataViewListener>_get_HasListeners__;
  puStack_88 = puVar3;
  DAT_086d68f8 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Data_Listeners<DataViewListener>_get_HasListeners__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Data_Listeners<DataViewListener>_get_HasListeners__,&local_78,
               FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d68f0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d68f0;
  puVar2 = Method_System_Collections_Generic_List<BinaryStorageBuffer_Writer_Chunk>_get_Item__;
  DAT_086d6910 = &DAT_012e9e58;
  DAT_086d6900 = Method_System_Collections_Generic_LowLevelDictionary<int,_Task>__ctor__ + 0x10;
  DAT_086d6918 = 0;
  DAT_086d6908 = 0;
  local_90 = Method_System_Collections_Generic_List<BinaryStorageBuffer_Writer_Chunk>_get_Item__;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_List<BinaryStorageBuffer_Writer_Chunk>_get_Item__
      != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_List<BinaryStorageBuffer_Writer_Chunk>_get_Item__,
               &local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6900);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6900;
  puVar2 = Method_System_Collections_Generic_List<DebugUI_Table_Row>_get_Count__;
  DAT_086d6920 = Method_System_Collections_Generic_LowLevelDictionary<int,_Task>_Remove__ + 0x10;
  local_90 = Method_System_Collections_Generic_List<DebugUI_Table_Row>_get_Count__;
  puStack_88 = puVar3;
  DAT_086d6928 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_List<DebugUI_Table_Row>_get_Count__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_List<DebugUI_Table_Row>_get_Count__,
               &local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6920);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6920;
  puVar2 = Method_System_Collections_Generic_LowLevelListWithIList<Exception>__ctor__;
  DAT_086d6930 = Method_System_Collections_Generic_LowLevelDictionary<int,_Task>_set_Item__ + 0x10;
  local_90 = Method_System_Collections_Generic_LowLevelListWithIList<Exception>__ctor__;
  puStack_88 = puVar3;
  DAT_086d6938 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_LowLevelListWithIList<Exception>__ctor__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_LowLevelListWithIList<Exception>__ctor__,
               &local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6930);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6930;
  DAT_086d6940 = Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__
                 + 0x10;
  DAT_086d6948 = 0;
  if (((DAT_086d5f10 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_086d5f10), iVar5 != 0)) {
    DAT_086d5f08 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_086d5f10);
  }
  puVar2 = Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__;
  DAT_086d6950 = DAT_086d5f08;
  local_80 = 0;
  local_90 = Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__;
  puStack_88 = puVar3;
  if (*(long *)
       Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__ != -1)
  {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__
               ,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6940);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6940;
  puVar2 = Method_System_Collections_Generic_LowLevelListWithIList<Task>__ctor__;
  DAT_086d6960 = Method_System_Collections_Generic_LowLevelListWithIList<object>__ctor__ + 0x10;
  local_90 = Method_System_Collections_Generic_LowLevelListWithIList<Task>__ctor__;
  puStack_88 = puVar3;
  DAT_086d6968 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_LowLevelListWithIList<Task>__ctor__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_LowLevelListWithIList<Task>__ctor__,
               &local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6960);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6960;
  puVar2 = Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_Add__;
  DAT_086d6970 = Method_System_Collections_Generic_LowLevelList<Exception>_Add__ + 0x10;
  local_90 = Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_Add__;
  puStack_88 = puVar3;
  DAT_086d6978 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_Add__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_Add__,
               &local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6970);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6970;
  puVar2 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Add__;
  DAT_086d6990 = 0x2c2e;
  DAT_086d6980 = Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_AddRange__ +
                 0x10;
  DAT_086d69a0 = 0;
  DAT_086d69a8 = 0;
  DAT_086d6998 = 0;
  local_90 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Add__;
  puStack_88 = puVar3;
  DAT_086d6988 = 0;
  local_80 = 0;
  if (*(long *)
       Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Add__
      != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Add__
               ,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6980);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6980;
  puVar2 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_RemoveAt__
  ;
  DAT_086d69b0 = Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_get_Count__ +
                 0x10;
  DAT_086d69d0 = 0;
  DAT_086d69d8 = 0;
  DAT_086d69c8 = 0;
  local_90 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_RemoveAt__
  ;
  puStack_88 = puVar3;
  DAT_086d69b8 = 0;
  DAT_086d69c0 = DAT_012e31b0;
  local_80 = 0;
  if (*(long *)
       Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_RemoveAt__
      != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_RemoveAt__
               ,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d69b0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d69b0;
  puVar2 = Method_System_Collections_Generic_List<DebugUI_Table_Row>__ctor__;
  DAT_086d69e0 = Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_get_Item__ +
                 0x10;
  local_90 = Method_System_Collections_Generic_List<DebugUI_Table_Row>__ctor__;
  puStack_88 = puVar3;
  DAT_086d69e8 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_List<DebugUI_Table_Row>__ctor__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_List<DebugUI_Table_Row>__ctor__,&local_78,
               FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d69e0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d69e0;
  puVar2 = 
  Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__;
  DAT_086d69f0 = Method_System_Collections_Generic_LowLevelList<object>_Add__ + 0x10;
  local_90 = 
  Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__;
  puStack_88 = puVar3;
  DAT_086d69f8 = 0;
  local_80 = 0;
  if (*(long *)
       Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__
      != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__
               ,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d69f0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d69f0;
  puVar2 = 
  Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_get_Count__;
  DAT_086d6a00 = Method_System_Collections_Generic_LowLevelList<object>_IndexOf__ + 0x10;
  local_90 = 
  Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_get_Count__;
  puStack_88 = puVar3;
  DAT_086d6a08 = 0;
  local_80 = 0;
  if (*(long *)
       Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_get_Count__
      != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_get_Count__
               ,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6a00);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6a00;
  puVar2 = Method_System_Collections_Generic_List<InstructionList_DebugView_InstructionView>__ctor__
  ;
  DAT_086d6a10 = Method_System_Collections_Generic_LowLevelList<object>_Insert__ + 0x10;
  local_90 = 
  Method_System_Collections_Generic_List<InstructionList_DebugView_InstructionView>__ctor__;
  puStack_88 = puVar3;
  DAT_086d6a18 = 0;
  local_80 = 0;
  if (*(long *)
       Method_System_Collections_Generic_List<InstructionList_DebugView_InstructionView>__ctor__ !=
      -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_List<InstructionList_DebugView_InstructionView>__ctor__
               ,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6a10);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6a10;
  puVar2 = 
  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__;
  DAT_086d6a20 = Method_System_Collections_Generic_LowLevelList<object>_RemoveAll__ + 0x10;
  local_90 = 
  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__;
  puStack_88 = puVar3;
  DAT_086d6a28 = 0;
  local_80 = 0;
  if (*(long *)
       Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__ !=
      -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
               ,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6a20);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6a20;
  puVar2 = 
  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__;
  DAT_086d6a30 = Method_System_Collections_Generic_LowLevelList<object>_get_Capacity__ + 0x10;
  local_90 = 
  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__;
  puStack_88 = puVar3;
  DAT_086d6a38 = 0;
  local_80 = 0;
  if (*(long *)
       Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
      != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
               ,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6a30);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6a30;
  puVar2 = Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedType,_DataRow,_bool>__;
  DAT_086d6a40 = Method_System_Collections_Generic_LowLevelList<object>_get_Count__ + 0x10;
  local_90 = Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedType,_DataRow,_bool>__
  ;
  puStack_88 = puVar3;
  DAT_086d6a48 = 0;
  local_80 = 0;
  if (*(long *)
       Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedType,_DataRow,_bool>__ != -1
     ) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedType,_DataRow,_bool>__
               ,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6a40);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6a40;
  puVar2 = Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedEventArgs,_bool,_bool>__
  ;
  DAT_086d6a50 = Method_System_Collections_Generic_LowLevelList<object>_get_Item__ + 0x10;
  local_90 = 
  Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedEventArgs,_bool,_bool>__;
  puStack_88 = puVar3;
  DAT_086d6a58 = 0;
  local_80 = 0;
  if (*(long *)
       Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedEventArgs,_bool,_bool>__ !=
      -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)
               Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedEventArgs,_bool,_bool>__
               ,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6a50);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6a50;
  puVar2 = Method_System_Collections_Generic_LowLevelList<Task>_Add__;
  DAT_086d6a60 = Method_System_Collections_Generic_LowLevelList<object>_set_Item__ + 0x10;
  local_90 = Method_System_Collections_Generic_LowLevelList<Task>_Add__;
  puStack_88 = puVar3;
  DAT_086d6a68 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_LowLevelList<Task>_Add__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_LowLevelList<Task>_Add__,&local_78,
               FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6a60);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6a60;
  puVar2 = Method_System_Collections_Generic_LowLevelList<Task>_ToArray__;
  DAT_086d6a70 = Method_System_Collections_Generic_LowLevelList<Task>_RemoveAll__ + 0x10;
  local_90 = Method_System_Collections_Generic_LowLevelList<Task>_ToArray__;
  puStack_88 = puVar3;
  DAT_086d6a78 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Collections_Generic_LowLevelList<Task>_ToArray__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Collections_Generic_LowLevelList<Task>_ToArray__,&local_78,
               FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6a70);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6a70;
  puVar2 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_Clone__;
  DAT_086d6a80 = Method_System_Collections_Generic_LowLevelList<Task>_get_Count__ + 0x10;
  local_90 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_Clone__;
  puStack_88 = puVar3;
  DAT_086d6a88 = 0;
  local_80 = 0;
  if (*(long *)Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_Clone__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_Clone__,&local_78,
               FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6a80);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6a80;
  puVar2 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_ReadIntoWriters__;
  DAT_086d6a90 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_Offset__ + 0x10;
  local_90 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_ReadIntoWriters__;
  puStack_88 = puVar3;
  DAT_086d6a98 = 0;
  local_80 = 0;
  if (*(long *)Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_ReadIntoWriters__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_ReadIntoWriters__,&local_78,
               FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6a90);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6a90;
  puVar2 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_get_RingBuffer__;
  DAT_086d6aa0 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_get_AvailableByteCount__ + 0x10;
  DAT_086d6ab0 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_get_AvailableByteCount__ + 0x70;
  local_90 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_get_RingBuffer__;
  puStack_88 = puVar3;
  DAT_086d6aa8 = 0;
  local_80 = 0;
  if (*(long *)Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_get_RingBuffer__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_get_RingBuffer__,&local_78,
               FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6aa0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6aa0;
  puVar2 = Method_System_Memory<byte>__ctor__;
  DAT_086d6ac0 = Method_System_Memory<byte>__ctor__ + 0x10;
  DAT_086d6ad0 = Method_System_Memory<byte>__ctor__ + 0x70;
  local_90 = Method_System_Memory<byte>__ctor__;
  puStack_88 = puVar3;
  DAT_086d6ac8 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Memory<byte>__ctor__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)Method_System_Memory<byte>__ctor__,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6ac0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6ac0;
  puVar2 = Method_System_Memory<byte>_Equals__;
  DAT_086d6ae0 = Method_System_Memory<byte>_Equals__ + 0x10;
  DAT_086d6ae8 = 0;
  if (((DAT_086d5f10 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_086d5f10), iVar5 != 0)) {
    DAT_086d5f08 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_086d5f10);
  }
  puVar4 = Method_System_Memory<byte>_Slice__;
  DAT_086d6af0 = DAT_086d5f08;
  DAT_086d6ae0 = Method_System_Memory<byte>_Pin__ + 0x10;
  local_90 = Method_System_Memory<byte>_Slice__;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)Method_System_Memory<byte>_Slice__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)Method_System_Memory<byte>_Slice__,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar4 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6ae0);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6ae0;
  DAT_086d6b00 = puVar2 + 0x10;
  DAT_086d6b08 = 0;
  if (((DAT_086d5f10 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_086d5f10), iVar5 != 0)) {
    DAT_086d5f08 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_086d5f10);
  }
  puVar2 = Method_System_Memory<byte>_get_Empty__;
  DAT_086d6b10 = DAT_086d5f08;
  DAT_086d6b00 = Method_System_Memory<byte>_ToArray__ + 0x10;
  local_90 = Method_System_Memory<byte>_get_Empty__;
  puStack_88 = puVar3;
  local_80 = 0;
  if (*(long *)Method_System_Memory<byte>_get_Empty__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)Method_System_Memory<byte>_get_Empty__,&local_78,FUN_02ddcf8c)
    ;
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6b00);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6b00;
  puVar2 = Method_System_Memory<byte>_get_Span__;
  DAT_086d6b20 = Method_System_Memory<byte>_get_Length__ + 0x10;
  local_90 = Method_System_Memory<byte>_get_Span__;
  puStack_88 = puVar3;
  DAT_086d6b28 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Memory<byte>_get_Span__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once((ulong *)Method_System_Memory<byte>_get_Span__,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6b20);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6b20;
  puVar2 = Method_System_Memory<byte>_op_Implicit__;
  DAT_086d6b30 = Method_System_Memory<byte>_op_Implicit__ + 0x10;
  local_90 = Method_System_Memory<byte>_op_Implicit__;
  puStack_88 = puVar3;
  DAT_086d6b38 = 0;
  local_80 = 0;
  if (*(long *)Method_System_Memory<byte>_op_Implicit__ != -1) {
    local_70 = &local_90;
    local_78 = &local_70;
    std::__ndk1::__call_once
              ((ulong *)Method_System_Memory<byte>_op_Implicit__,&local_78,FUN_02ddcf8c);
  }
  uVar7 = (ulong)*(int *)(puVar2 + 8);
  uVar11 = uVar7 - 1;
  std::__ndk1::__shared_count::__add_shared((__shared_count *)&DAT_086d6b30);
  lVar8 = *plVar10;
  uVar9 = *plVar12 - lVar8 >> 3;
  if (uVar9 <= uVar11) {
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      if (uVar7 < uVar9) {
        *plVar12 = lVar8 + uVar7 * 8;
      }
    }
    else {
      FUN_02ddce3c(plVar10,uVar7 - uVar9);
      lVar8 = *plVar10;
    }
  }
  p_Var6 = *(__shared_count **)(lVar8 + uVar11 * 8);
  if (p_Var6 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(p_Var6);
    lVar8 = *plVar10;
  }
  *(undefined ***)(lVar8 + uVar11 * 8) = &DAT_086d6b30;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


