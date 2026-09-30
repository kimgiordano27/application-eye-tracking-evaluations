/*
FUNCTION_NAME: FocusController_GetFocusableParentForPointerEvent_mB5B3CDF010E6AC4C0E75C3C1172F2053749BB8A9
ENTRY_POINT: 045bf9b8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FocusController_GetFocusableParentForPointerEvent_mB5B3CDF010E6AC4C0E75C3C1172F2053749BB8A9
               (undefined8 param_1,Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *param_2,
               void **param_3,undefined8 param_4)

{
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar1;
  void **ppvVar2;
  byte bVar3;
  Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *pFVar4;
  long lVar5;
  void *pvVar6;
  undefined8 local_60;
  undefined1 local_51;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_50;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  void **local_38;
  Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *local_30;
  undefined8 local_28;
  
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((FocusController_GetFocusableParentForPointerEvent_mB5B3CDF010E6AC4C0E75C3C1172F2053749BB8A9::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    FocusController_GetFocusableParentForPointerEvent_mB5B3CDF010E6AC4C0E75C3C1172F2053749BB8A9::
    s_Il2CppMethodInitialized = 1;
  }
  pFVar4 = local_30;
  local_41 = 0;
  local_42 = 0;
  local_50 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0;
  local_51 = 0;
  local_60 = 0;
  if (local_30 == (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)0x0) {
    local_41 = true;
  }
  else {
    NullCheck(local_30);
    bVar3 = Focusable_get_focusable_m15258DAA1E80EB42FBCF59298080030DA5360F6F_inline
                      (pFVar4,(MethodInfo *)0x0);
    local_41 = (bVar3 & 1) == 0;
  }
  if ((bool)local_41) {
    *local_38 = local_30;
    Il2CppCodeGenWriteBarrier(local_38,local_30);
    return local_30 != (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)0x0;
  }
  *local_38 = local_30;
  Il2CppCodeGenWriteBarrier(local_38,local_30);
  do {
    pFVar4 = (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)
             IsInstClass(*local_38,
                         *(Il2CppClass **)
                          Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    local_50 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)pFVar4;
    if (pFVar4 == (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)0x0) {
LAB_045bfc68:
      local_51 = false;
    }
    else {
      NullCheck(pFVar4);
      bVar3 = VisualElement_get_enabledInHierarchy_mBC4E983E9FD848277D6820F4D7A2743BA38BC412
                        (pFVar4,0);
      pVVar1 = local_50;
      if ((bVar3 & 1) != 0) {
        NullCheck(local_50);
        bVar3 = Focusable_get_focusable_m15258DAA1E80EB42FBCF59298080030DA5360F6F_inline
                          ((Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)pVVar1,
                           (MethodInfo *)0x0);
        if ((bVar3 & 1) != 0) goto LAB_045bfc68;
      }
      pVVar1 = local_50;
      NullCheck(local_50);
      local_60 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                           (pVVar1,(MethodInfo *)0x0);
      lVar5 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(&local_60,0);
      local_51 = lVar5 != 0;
    }
    ppvVar2 = local_38;
    pVVar1 = local_50;
    if (!(bool)local_51) {
      bVar3 = FocusController_IsFocused_mC6FBCB39C59950009902CE0F85A97A96EC09DF53
                        (local_28,*local_38,0);
      return (bVar3 & 1) == 0;
    }
    NullCheck(local_50);
    local_60 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                         (pVVar1,(MethodInfo *)0x0);
    pvVar6 = (void *)Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4(&local_60,0);
    *ppvVar2 = pvVar6;
    Il2CppCodeGenWriteBarrier(ppvVar2,pvVar6);
  } while( true );
}


