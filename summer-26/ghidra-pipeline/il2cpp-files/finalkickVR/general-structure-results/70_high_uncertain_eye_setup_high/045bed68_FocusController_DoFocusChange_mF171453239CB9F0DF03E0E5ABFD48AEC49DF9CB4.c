/*
FUNCTION_NAME: FocusController_DoFocusChange_mF171453239CB9F0DF03E0E5ABFD48AEC49DF9CB4
ENTRY_POINT: 045bed68
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FocusController_DoFocusChange_mF171453239CB9F0DF03E0E5ABFD48AEC49DF9CB4
               (long param_1,Il2CppObject *param_2,undefined8 param_3)

{
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar1;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar2;
  byte bVar3;
  long lVar4;
  void *pvVar5;
  List_1_t1E327CB749CA1F2F2DA41B2D4DFF57FD6BE0FF66 *pLVar6;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_60;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVStack_58;
  undefined8 local_50;
  undefined1 local_41;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_40;
  undefined8 local_38;
  Il2CppObject *local_30;
  long local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((FocusController_DoFocusChange_mF171453239CB9F0DF03E0E5ABFD48AEC49DF9CB4::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_List_1_Add_m9989CB26C4A11F3FBC18A300F9CC329897595091_RuntimeMethod_var_048de530);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_List_1_Clear_m6E8418F8671E7413DAF4337D72A04C4713AD4E99_RuntimeMethod_var_048de538
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    FocusController_DoFocusChange_mF171453239CB9F0DF03E0E5ABFD48AEC49DF9CB4::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0;
  local_41 = 0;
  local_50 = 0;
  local_60 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0;
  pVStack_58 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0;
  pLVar6 = *(List_1_t1E327CB749CA1F2F2DA41B2D4DFF57FD6BE0FF66 **)(local_28 + 0x20);
  NullCheck(pLVar6);
  List_1_Clear_m6E8418F8671E7413DAF4337D72A04C4713AD4E99_inline
            (pLVar6,*(MethodInfo **)
                     PTR_List_1_Clear_m6E8418F8671E7413DAF4337D72A04C4713AD4E99_RuntimeMethod_var_048de538
            );
  local_40 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
             IsInstClass(local_30,*(Il2CppClass **)
                                   Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__)
  ;
  while (pVVar1 = local_40,
        local_40 != (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0) {
    NullCheck(local_40);
    local_50 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                         (pVVar1,(MethodInfo *)0x0);
    lVar4 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(&local_50,0);
    pVVar1 = local_40;
    if (lVar4 == 0) {
      bVar3 = 1;
    }
    else {
      NullCheck(local_40);
      bVar3 = VisualElement_get_isCompositeRoot_mFA26CBD30A0EB10D5A63758BAC866E05645DDBBA(pVVar1,0);
      bVar3 = bVar3 & 1;
    }
    local_41 = bVar3 != 0;
    if ((bool)local_41) {
      pvVar5 = *(void **)(local_28 + 0x20);
      il2cpp_codegen_initobj(&local_60,0x10);
      local_60 = local_40;
      Il2CppCodeGenWriteBarrier(&local_60,local_40);
      pVStack_58 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)local_30;
      Il2CppCodeGenWriteBarrier(&pVStack_58,local_30);
      pVVar2 = pVStack_58;
      pVVar1 = local_60;
      NullCheck(pvVar5);
      List_1_Add_m9989CB26C4A11F3FBC18A300F9CC329897595091_inline
                (pvVar5,pVVar1,pVVar2,
                 *(undefined8 *)
                  PTR_List_1_Add_m9989CB26C4A11F3FBC18A300F9CC329897595091_RuntimeMethod_var_048de530
                );
      local_30 = (Il2CppObject *)local_40;
    }
    pVVar1 = local_40;
    NullCheck(local_40);
    local_50 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                         (pVVar1,(MethodInfo *)0x0);
    local_40 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
               Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(&local_50,0);
  }
  return;
}


