/*
FUNCTION_NAME: VisualElement_UpdateHoverPseudoState_m918CA907CE8811A1C54A916A1EBF733E3321FA44
ENTRY_POINT: 04641d90
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_9;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void VisualElement_UpdateHoverPseudoState_m918CA907CE8811A1C54A916A1EBF733E3321FA44
               (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 local_38;
  undefined1 local_29;
  uint local_28;
  undefined1 local_22;
  byte local_21;
  undefined8 local_20;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_18;
  
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableRegisteredEventArgs>_System_IDisposable_Dispose__
  ;
  local_20 = param_2;
  local_18 = param_1;
  if ((VisualElement_UpdateHoverPseudoState_m918CA907CE8811A1C54A916A1EBF733E3321FA44::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<InteractableRegisteredEventArgs>_System_IDisposable_Dispose__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    VisualElement_UpdateHoverPseudoState_m918CA907CE8811A1C54A916A1EBF733E3321FA44::
    s_Il2CppMethodInitialized = 1;
  }
  local_21 = 0;
  local_22 = 0;
  local_28 = 0;
  local_29 = 0;
  local_38 = 0;
  iVar3 = VisualElement_get_containedPointerIds_m84803849BB0BF517C919A0BCA8C2DD95442C23C3_inline
                    (local_18,(MethodInfo *)0x0);
  if (iVar3 == 0) {
    local_22 = true;
  }
  else {
    lVar5 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(local_18,0);
    local_22 = lVar5 == 0;
  }
  if ((bool)local_22) {
    uVar4 = VisualElement_get_pseudoStates_m097622852345CD39779967BAC5F0351E472AEC6E(local_18);
    VisualElement_set_pseudoStates_m58F2D1B61692BA0DC7E4F5F98864E8B6F78989BB
              (local_18,uVar4 & 0xfffffffd,0);
  }
  else {
    local_21 = 0;
    local_28 = 0;
    while( true ) {
      uVar4 = local_28;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      piVar7 = (int *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      if (*piVar7 <= (int)uVar4) break;
      uVar4 = VisualElement_get_containedPointerIds_m84803849BB0BF517C919A0BCA8C2DD95442C23C3_inline
                        (local_18,(MethodInfo *)0x0);
      local_29 = (uVar4 & 1 << (ulong)(local_28 & 0x1f)) != 0;
      if ((bool)local_29) {
        uVar6 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(local_18);
        local_38 = PointerCaptureHelper_GetCapturingElement_m30DED02760CA5544CF35162656E2E3959DC8103E
                             (uVar6,local_28,0);
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                  );
        bVar2 = VisualElement_IsPartOfCapturedChain_m4C6695E59C6F40016706E70FD3891A8F99CF525F
                          (local_18,&local_38,0);
        if ((bVar2 & 1) != 0) {
          local_21 = 1;
          break;
        }
      }
      local_28 = il2cpp_codegen_add<int,int>(local_28,1);
    }
    if ((local_21 & 1) == 0) {
      uVar4 = VisualElement_get_pseudoStates_m097622852345CD39779967BAC5F0351E472AEC6E(local_18);
      VisualElement_set_pseudoStates_m58F2D1B61692BA0DC7E4F5F98864E8B6F78989BB
                (local_18,uVar4 & 0xfffffffd,0);
    }
    else {
      uVar4 = VisualElement_get_pseudoStates_m097622852345CD39779967BAC5F0351E472AEC6E(local_18);
      VisualElement_set_pseudoStates_m58F2D1B61692BA0DC7E4F5F98864E8B6F78989BB(local_18,uVar4 | 2,0)
      ;
    }
  }
  return;
}


