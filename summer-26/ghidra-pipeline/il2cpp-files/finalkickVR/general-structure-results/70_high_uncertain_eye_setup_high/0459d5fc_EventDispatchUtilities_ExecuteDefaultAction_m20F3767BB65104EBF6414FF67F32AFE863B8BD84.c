/*
FUNCTION_NAME: EventDispatchUtilities_ExecuteDefaultAction_m20F3767BB65104EBF6414FF67F32AFE863B8BD84
ENTRY_POINT: 0459d5fc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void EventDispatchUtilities_ExecuteDefaultAction_m20F3767BB65104EBF6414FF67F32AFE863B8BD84
               (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  Il2CppObject *pIVar3;
  void *pvVar4;
  
  if ((EventDispatchUtilities_ExecuteDefaultAction_m20F3767BB65104EBF6414FF67F32AFE863B8BD84::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3_il2cpp_TypeInfo_var_048d85f8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    EventDispatchUtilities_ExecuteDefaultAction_m20F3767BB65104EBF6414FF67F32AFE863B8BD84::
    s_Il2CppMethodInitialized = 1;
  }
  NullCheck(param_1);
  pIVar3 = (Il2CppObject *)EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_1,0)
  ;
  pvVar4 = (void *)IsInstClass(pIVar3,*(Il2CppClass **)
                                       Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                              );
  if (pvVar4 == (void *)0x0) {
    bVar1 = 0;
  }
  else {
    NullCheck(param_1);
    uVar2 = EventBase_get_eventCategory_mC2145F36B7C98C03CBA60588EA818899F044E543_inline
                      (param_1,(MethodInfo *)0x0);
    NullCheck(pvVar4);
    bVar1 = VisualElement_HasDefaultAction_mCB40F7C7F8C2AFA94B8053E22350F8A286A69470(pvVar4,uVar2,0)
    ;
    bVar1 = bVar1 & 1;
  }
  if (bVar1 != 0) {
    NullCheck(param_1);
    EventBase_set_dispatch_m6FFDCFE9444A5C96E0511099D29F2CE72D8EAAD5(param_1,1);
    NullCheck(param_1);
    pIVar3 = (Il2CppObject *)
             EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_1,0);
    NullCheck(param_1);
    VirtualActionInvoker1<Il2CppObject*>::Invoke(0xb,(Il2CppObject *)param_1,pIVar3);
    NullCheck(param_1);
    EventBase_set_propagationPhase_mC66AE0DFD3D62A90A809387B2BF2833F5CED3B8B_inline
              (param_1,4,(MethodInfo *)0x0);
    NullCheck(param_1);
    pIVar3 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,(Il2CppObject *)param_1);
    NullCheck(pIVar3);
    InterfaceActionInvoker1<EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*>::Invoke
              (1,*(Il2CppClass **)
                  PTR_IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3_il2cpp_TypeInfo_var_048d85f8
               ,pIVar3,param_1);
    NullCheck(param_1);
    EventBase_set_propagationPhase_mC66AE0DFD3D62A90A809387B2BF2833F5CED3B8B_inline
              (param_1,0,(MethodInfo *)0x0);
    NullCheck(param_1);
    VirtualActionInvoker1<Il2CppObject*>::Invoke(0xb,(Il2CppObject *)param_1,(Il2CppObject *)0x0);
    NullCheck(param_1);
    EventBase_set_dispatch_m6FFDCFE9444A5C96E0511099D29F2CE72D8EAAD5(param_1,0,0);
  }
  return;
}


