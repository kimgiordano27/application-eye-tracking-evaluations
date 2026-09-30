/*
FUNCTION_NAME: FUN_02dcae44
ENTRY_POINT: 02dcae44
PROGRAM: Waifu-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_02dcae44(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

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
  *param_1 = &DAT_07e86960;
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
    FUN_02ddccb4(plVar11,param_2[2],param_2[3]);
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
  puVar3 = Method_System_Data_Listeners<DataViewListener>_Add__;
  puVar2 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
  if ((param_4 >> 3 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_System_Data_Listeners<DataViewListener>_Add__;
    puStack_88 = 
    Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
    if (*(long *)Method_System_Data_Listeners<DataViewListener>_Add__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Data_Listeners<DataViewListener>_Add__,&local_78,
                 FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Data_Listeners<DataViewListener>_get_HasListeners__;
    local_80 = 0;
    local_90 = Method_System_Data_Listeners<DataViewListener>_get_HasListeners__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Data_Listeners<DataViewListener>_get_HasListeners__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Data_Listeners<DataViewListener>_get_HasListeners__,
                 &local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
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
  puVar3 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
  puVar2 = Method_System_Collections_Generic_List<BinaryStorageBuffer_Writer_Chunk>_get_Item__;
  if ((param_4 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_List<BinaryStorageBuffer_Writer_Chunk>_get_Item__;
    puStack_88 = 
    Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
    if (*(long *)Method_System_Collections_Generic_List<BinaryStorageBuffer_Writer_Chunk>_get_Item__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_List<BinaryStorageBuffer_Writer_Chunk>_get_Item__
                 ,&local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = Method_System_Collections_Generic_List<DebugUI_Table_Row>_get_Count__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_List<DebugUI_Table_Row>_get_Count__;
    puStack_88 = puVar3;
    if (*(long *)Method_System_Collections_Generic_List<DebugUI_Table_Row>_get_Count__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_List<DebugUI_Table_Row>_get_Count__,
                 &local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = Method_System_Collections_Generic_LowLevelListWithIList<Exception>__ctor__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_LowLevelListWithIList<Exception>__ctor__;
    puStack_88 = puVar3;
    if (*(long *)Method_System_Collections_Generic_LowLevelListWithIList<Exception>__ctor__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_LowLevelListWithIList<Exception>__ctor__
                 ,&local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = Method_System_Collections_Generic_LowLevelListWithIList<Task>__ctor__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_LowLevelListWithIList<Task>__ctor__;
    puStack_88 = puVar3;
    if (*(long *)Method_System_Collections_Generic_LowLevelListWithIList<Task>__ctor__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_LowLevelListWithIList<Task>__ctor__,
                 &local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_Add__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_Add__;
    puStack_88 = puVar3;
    if (*(long *)Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_Add__ != -1)
    {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_LowLevelList<ExceptionDispatchInfo>_Add__,
                 &local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar2 = Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__;
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__;
    puStack_88 = puVar3;
    if (*(long *)
         Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__ !=
        -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_LowLevelListWithIList<ExceptionDispatchInfo>__ctor__
                 ,&local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar2 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
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
  puVar3 = 
  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__;
  puVar2 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
  if ((param_4 >> 4 & 1) != 0) {
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__;
    puStack_88 = 
    Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
    if (*(long *)
         Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                 ,&local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = 
    Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__;
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__;
    puStack_88 = puVar2;
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
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedType,_DataRow,_bool>__
    ;
    local_80 = 0;
    local_90 = 
    Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedType,_DataRow,_bool>__;
    puStack_88 = puVar2;
    if (*(long *)
         Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedType,_DataRow,_bool>__ !=
        -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedType,_DataRow,_bool>__
                 ,&local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = 
    Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedEventArgs,_bool,_bool>__;
    local_80 = 0;
    local_90 = 
    Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedEventArgs,_bool,_bool>__;
    puStack_88 = puVar2;
    if (*(long *)
         Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedEventArgs,_bool,_bool>__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Data_Listeners<DataViewListener>_Notify<ListChangedEventArgs,_bool,_bool>__
                 ,&local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_LowLevelList<Task>_Add__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_LowLevelList<Task>_Add__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_LowLevelList<Task>_Add__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_LowLevelList<Task>_Add__,&local_78,
                 FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_LowLevelList<Task>_ToArray__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_LowLevelList<Task>_ToArray__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_LowLevelList<Task>_ToArray__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_LowLevelList<Task>_ToArray__,&local_78,
                 FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_Clone__;
    local_80 = 0;
    local_90 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_Clone__;
    puStack_88 = puVar2;
    if (*(long *)Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_Clone__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_Clone__,&local_78,
                 FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_ReadIntoWriters__;
    local_80 = 0;
    local_90 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_ReadIntoWriters__;
    puStack_88 = puVar2;
    if (*(long *)Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_ReadIntoWriters__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_ReadIntoWriters__,&local_78
                 ,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
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
  puVar3 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Add__;
  puVar2 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
  if ((param_4 >> 1 & 1) != 0) {
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Add__;
    puStack_88 = 
    Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
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
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = 
    Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_RemoveAt__
    ;
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_RemoveAt__
    ;
    puStack_88 = puVar2;
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
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Collections_Generic_List<DebugUI_Table_Row>__ctor__;
    local_80 = 0;
    local_90 = Method_System_Collections_Generic_List<DebugUI_Table_Row>__ctor__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Collections_Generic_List<DebugUI_Table_Row>__ctor__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Collections_Generic_List<DebugUI_Table_Row>__ctor__,
                 &local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = 
    Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__;
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>__ctor__;
    puStack_88 = puVar2;
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
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = 
    Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_get_Count__;
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_List<InputControlLayout_Collection_LayoutMatcher>_get_Count__;
    puStack_88 = puVar2;
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
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = 
    Method_System_Collections_Generic_List<InstructionList_DebugView_InstructionView>__ctor__;
    local_80 = 0;
    local_90 = 
    Method_System_Collections_Generic_List<InstructionList_DebugView_InstructionView>__ctor__;
    puStack_88 = puVar2;
    if (*(long *)
         Method_System_Collections_Generic_List<InstructionList_DebugView_InstructionView>__ctor__
        != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)
                 Method_System_Collections_Generic_List<InstructionList_DebugView_InstructionView>__ctor__
                 ,&local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
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
  puVar3 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_get_RingBuffer__;
  puVar2 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
  if ((param_4 >> 2 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_get_RingBuffer__;
    puStack_88 = 
    Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
    if (*(long *)Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_get_RingBuffer__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_Meta_WitAi_Data_RingBuffer_Marker<byte>_get_RingBuffer__,&local_78,
                 FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Memory<byte>__ctor__;
    local_80 = 0;
    local_90 = Method_System_Memory<byte>__ctor__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Memory<byte>__ctor__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once((ulong *)Method_System_Memory<byte>__ctor__,&local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Memory<byte>_Slice__;
    local_80 = 0;
    local_90 = Method_System_Memory<byte>_Slice__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Memory<byte>_Slice__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once((ulong *)Method_System_Memory<byte>_Slice__,&local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Memory<byte>_get_Empty__;
    local_80 = 0;
    local_90 = Method_System_Memory<byte>_get_Empty__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Memory<byte>_get_Empty__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Memory<byte>_get_Empty__,&local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
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
  puVar3 = Method_System_Memory<byte>_get_Span__;
  puVar2 = 
  Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
  if ((param_4 >> 5 & 1) != 0) {
    local_80 = 0;
    local_90 = Method_System_Memory<byte>_get_Span__;
    puStack_88 = 
    Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>__ctor__;
    if (*(long *)Method_System_Memory<byte>_get_Span__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Memory<byte>_get_Span__,&local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
        lVar7 = *plVar11;
      }
    }
    p_Var6 = *(__shared_count **)(lVar7 + uVar12 * 8);
    if (p_Var6 != (__shared_count *)0x0) {
      std::__ndk1::__shared_count::__release_shared(p_Var6);
      lVar7 = *plVar11;
    }
    *(__shared_count **)(lVar7 + uVar12 * 8) = p_Var5;
    puVar3 = Method_System_Memory<byte>_op_Implicit__;
    local_80 = 0;
    local_90 = Method_System_Memory<byte>_op_Implicit__;
    puStack_88 = puVar2;
    if (*(long *)Method_System_Memory<byte>_op_Implicit__ != -1) {
      local_70 = &local_90;
      local_78 = &local_70;
      std::__ndk1::__call_once
                ((ulong *)Method_System_Memory<byte>_op_Implicit__,&local_78,FUN_02ddcf8c);
    }
    uVar9 = (ulong)*(int *)(puVar3 + 8);
    uVar12 = uVar9 - 1;
    if (((ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) <= uVar12) ||
       (p_Var5 = *(__shared_count **)(*(long *)(param_3 + 0x10) + uVar12 * 8),
       p_Var5 == (__shared_count *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_033b8bb0();
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
        FUN_02ddce3c(plVar11,uVar9 - uVar10);
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


