/*
FUNCTION_NAME: EventCallbackRegistry_InvokeCallbacks_mB1B282F6F91C0E10E00F0A963223649BB4676EA9
ENTRY_POINT: 045a7398
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_9;functionality_eye_api_context_without_clear_sink_hits_4
*/


void EventCallbackRegistry_InvokeCallbacks_mB1B282F6F91C0E10E00F0A963223649BB4676EA9
               (long param_1,Il2CppObject *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  EventCallbackFunctorBase_tEFE8404D9A89369B0A322FA7743CDA068A0BB568 *pEVar6;
  Il2CppObject *pIVar7;
  void *pvVar8;
  undefined8 uVar9;
  int local_58;
  
  if ((EventCallbackRegistry_InvokeCallbacks_mB1B282F6F91C0E10E00F0A963223649BB4676EA9::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    EventCallbackRegistry_InvokeCallbacks_mB1B282F6F91C0E10E00F0A963223649BB4676EA9::
    s_Il2CppMethodInitialized = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  uVar4 = il2cpp_codegen_add<int,int>(*(int *)(param_1 + 0x20),1);
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  NullCheck(param_2);
  bVar3 = EventBase_get_skipDisabledElements_m92D25C10EE0BE65D488B27481A746791E7C36814(param_2,0);
  if ((bVar3 & 1) != 0) {
    NullCheck(param_2);
    pIVar7 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,param_2);
    pvVar8 = (void *)IsInstClass(pIVar7,*(Il2CppClass **)
                                         Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                                );
    if (pvVar8 != (void *)0x0) {
      NullCheck(pvVar8);
      bVar3 = VisualElement_get_enabledInHierarchy_mBC4E983E9FD848277D6820F4D7A2743BA38BC412
                        (pvVar8,0);
      bVar1 = (bVar3 & 1) == 0;
      goto LAB_045a7540;
    }
  }
  bVar1 = false;
LAB_045a7540:
  local_58 = 0;
  while( true ) {
    pvVar8 = *(void **)(param_1 + 0x10);
    NullCheck(pvVar8);
    iVar5 = EventCallbackList_get_Count_m2431721D83AFE7454CB2920D15C03B7825500670(pvVar8,0);
    if (iVar5 <= local_58) break;
    NullCheck(param_2);
    bVar3 = EventBase_get_isImmediatePropagationStopped_m23F718E5FA5FB49FE12BA560B8362B95E0C7F5D3
                      (param_2,0);
    if ((bVar3 & 1) != 0) break;
    if (bVar1) {
      pvVar8 = *(void **)(param_1 + 0x10);
      NullCheck(pvVar8);
      pEVar6 = (EventCallbackFunctorBase_tEFE8404D9A89369B0A322FA7743CDA068A0BB568 *)
               EventCallbackList_get_Item_mDB9D16B9C9E12B1260CB6C7DAC3A07E4DD4A62A2(pvVar8,local_58)
      ;
      NullCheck(pEVar6);
      iVar5 = EventCallbackFunctorBase_get_invokePolicy_m7465E70C33AC6326DCA4F9C3C9A4BC7671930053_inline
                        (pEVar6,(MethodInfo *)0x0);
      bVar2 = iVar5 != 1;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      pvVar8 = *(void **)(param_1 + 0x10);
      NullCheck(pvVar8);
      pIVar7 = (Il2CppObject *)
               EventCallbackList_get_Item_mDB9D16B9C9E12B1260CB6C7DAC3A07E4DD4A62A2
                         (pvVar8,local_58,0);
      NullCheck(pIVar7);
      VirtualActionInvoker2<EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*,int>::Invoke
                (4,pIVar7,(EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *)param_2,param_3);
    }
    local_58 = il2cpp_codegen_add<int,int>(local_58,1);
  }
  uVar4 = il2cpp_codegen_subtract<int,int>(*(int *)(param_1 + 0x20),1);
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  if ((*(int *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__);
    EventCallbackRegistry_ReleaseCallbackList_m781EC82FE1F90A0F32998738AB57BA7ACA9B8374(uVar9);
    pvVar8 = (void *)EventCallbackRegistry_GetCallbackList_m9ACF5973C90A1B3FB67CD12FB39248E02263FD23
                               (*(undefined8 *)(param_1 + 0x18),0);
    *(void **)(param_1 + 0x10) = pvVar8;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x10),pvVar8);
    EventCallbackRegistry_ReleaseCallbackList_m781EC82FE1F90A0F32998738AB57BA7ACA9B8374
              (*(undefined8 *)(param_1 + 0x18),0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x18),(void *)0x0);
  }
  return;
}


