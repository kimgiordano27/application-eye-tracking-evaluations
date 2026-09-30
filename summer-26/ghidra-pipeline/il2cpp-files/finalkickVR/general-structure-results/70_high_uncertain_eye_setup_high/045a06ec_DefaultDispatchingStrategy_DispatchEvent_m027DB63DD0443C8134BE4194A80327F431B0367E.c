/*
FUNCTION_NAME: DefaultDispatchingStrategy_DispatchEvent_m027DB63DD0443C8134BE4194A80327F431B0367E
ENTRY_POINT: 045a06ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void DefaultDispatchingStrategy_DispatchEvent_m027DB63DD0443C8134BE4194A80327F431B0367E
               (undefined8 param_1,Il2CppObject *param_2,Il2CppObject *param_3)

{
  bool bVar1;
  byte bVar2;
  Il2CppObject *pIVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DefaultDispatchingStrategy_DispatchEvent_m027DB63DD0443C8134BE4194A80327F431B0367E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_TypeId_m2495A371F7B354A94F5EACBE7B8D97A2B3BDB38B_RuntimeMethod_var_048dd908
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_TypeId_m8552C809034EA01711DE8E6C0B63600457F9A991_RuntimeMethod_var_048dd910
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_t4813BB5FE5327C33AA6E02463510E8D2AA3721BA_il2cpp_TypeInfo_var_048dd918
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventBase_1_tE1B3E6721ACE88C9A37AC57EDA370CC77ED38B6E_il2cpp_TypeInfo_var_048dd920
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_deltaPosition__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    DefaultDispatchingStrategy_DispatchEvent_m027DB63DD0443C8134BE4194A80327F431B0367E::
    s_Il2CppMethodInitialized = 1;
  }
  NullCheck(param_2);
  pIVar3 = (Il2CppObject *)EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_2,0)
  ;
  pvVar4 = (void *)IsInstClass(pIVar3,*(Il2CppClass **)
                                       Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                              );
  if (pvVar4 == (void *)0x0) {
    bVar1 = false;
  }
  else {
    NullCheck(pvVar4);
    pIVar3 = (Il2CppObject *)
             VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(pvVar4,0);
    bVar1 = pIVar3 == param_3;
  }
  if (bVar1) {
    NullCheck(pvVar4);
    bVar2 = *(byte *)((long)pvVar4 + 0x10);
    NullCheck(param_2);
    EventBase_set_propagateToIMGUI_mEE39524D804DF059C390FBC08462CC2892770981(param_2,bVar2 & 1);
    EventDispatchUtilities_PropagateEvent_mD485FF9B77C66DF959832C41519DC93C29D43CFC(param_2,0);
    goto LAB_045a0aa8;
  }
  NullCheck(param_2);
  bVar2 = EventBase_get_isPropagationStopped_m36E1E4831DC04452D18B5339E2CAD8979B6BD6B3(param_2,0);
  if ((bVar2 & 1) != 0 || param_3 == (Il2CppObject *)0x0) goto LAB_045a0aa8;
  NullCheck(param_2);
  bVar2 = EventBase_get_propagateToIMGUI_m59D28D93C3A147615075F78237CA478A4930ABF4(param_2,0);
  if ((bVar2 & 1) == 0) {
    NullCheck(param_2);
    lVar5 = VirtualFuncInvoker0<long>::Invoke(5,param_2);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                PTR_EventBase_1_t4813BB5FE5327C33AA6E02463510E8D2AA3721BA_il2cpp_TypeInfo_var_048dd918
              );
    lVar6 = EventBase_1_TypeId_m8552C809034EA01711DE8E6C0B63600457F9A991
                      (*(MethodInfo **)
                        PTR_EventBase_1_TypeId_m8552C809034EA01711DE8E6C0B63600457F9A991_RuntimeMethod_var_048dd910
                      );
    if (lVar5 == lVar6) goto LAB_045a0a2c;
    NullCheck(param_2);
    lVar5 = VirtualFuncInvoker0<long>::Invoke(5,param_2);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                PTR_EventBase_1_tE1B3E6721ACE88C9A37AC57EDA370CC77ED38B6E_il2cpp_TypeInfo_var_048dd920
              );
    lVar6 = EventBase_1_TypeId_m2495A371F7B354A94F5EACBE7B8D97A2B3BDB38B
                      (*(MethodInfo **)
                        PTR_EventBase_1_TypeId_m2495A371F7B354A94F5EACBE7B8D97A2B3BDB38B_RuntimeMethod_var_048dd908
                      );
    bVar1 = lVar5 == lVar6;
  }
  else {
LAB_045a0a2c:
    bVar1 = true;
  }
  if (bVar1) {
    NullCheck(param_3);
    uVar7 = InterfaceFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>::Invoke
                      (0,*(Il2CppClass **)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_deltaPosition__
                       ,param_3);
    EventDispatchUtilities_PropagateToIMGUIContainer_mE670EED1892A6C6C0607048813E7102E243164D3
              (uVar7,param_2,0);
  }
LAB_045a0aa8:
  NullCheck(param_2);
  EventBase_set_stopDispatch_m4B24B3101AADAEAAEAB2617E3AF8ED4257681870(param_2,1,0);
  return;
}


