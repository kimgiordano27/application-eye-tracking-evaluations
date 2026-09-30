/*
FUNCTION_NAME: TTSServiceLogging_OnEnable_mB5761CBB8EA224E5E6DCA63AE465B287D64472B5
ENTRY_POINT: 0473fd78
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_12
*/


void TTSServiceLogging_OnEnable_mB5761CBB8EA224E5E6DCA63AE465B287D64472B5
               (TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7 *param_1)

{
  TTSServiceLogging_t02035BF228328724EC11D16EFA30637D4F133EB7 TVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D *pTVar6;
  void *pvVar7;
  UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *pUVar8;
  UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B *pUVar9;
  Il2CppObject *pIVar10;
  UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8 *pUVar11;
  UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC *pUVar12;
  
  puVar3 = Method_System_Array_Reverse<int>__;
  puVar2 = Method_System_Array_Resize<OVRPlugin_Vector3f>__;
  if ((TTSServiceLogging_OnEnable_mB5761CBB8EA224E5E6DCA63AE465B287D64472B5::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var_048e1b78
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_TTSServiceLogging_OnRequestBegin_m556775CDF19AF575A878B1CB76A02F34E3933245_RuntimeMethod_var_048e21f8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_TTSServiceLogging_OnRequestCancel_m8BE61F8D30DFFC9A8B3A84AC3D39865448609331_RuntimeMethod_var_048e2200
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_TTSServiceLogging_OnRequestComplete_m9550AE3127C6B5786C71229DFA2FCA59C3D1E602_RuntimeMethod_var_048e2208
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_TTSServiceLogging_OnRequestError_mF6C261823983A6ACA3A7B245931079B00F812AFD_RuntimeMethod_var_048e2210
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_TTSServiceLogging_OnRequestFirstResponse_m407B49045E82665355331C61A1DC5F375A3C20D3_RuntimeMethod_var_048e2218
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_TTSServiceLogging_OnRequestReady_m2C33A60627A914B3A79B51E047B405B25FD65173_RuntimeMethod_var_048e2220
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Reverse<byte>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Reverse<byte>__);
    TTSServiceLogging_OnEnable_mB5761CBB8EA224E5E6DCA63AE465B287D64472B5::s_Il2CppMethodInitialized
         = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    pIVar10 = *(Il2CppObject **)(param_1 + 0x30);
    TVar1 = param_1[0x20];
    NullCheck(pIVar10);
    InterfaceActionInvoker1<bool>::Invoke
              (3,*(Il2CppClass **)
                  PTR_IVoiceSDKLogger_t8A0710A01D6E9FAA8D2FFE4190C3BD848CA655C0_il2cpp_TypeInfo_var_048e1b78
               ,pIVar10,(bool)((byte)TVar1 & 1));
  }
  uVar5 = TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline
                    (param_1,(MethodInfo *)0x0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bVar4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar5,0);
  if ((bVar4 & 1) != 0) {
    pTVar6 = (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D *)
             TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline
                       (param_1,(MethodInfo *)0x0);
    NullCheck(pTVar6);
    pvVar7 = (void *)TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline
                               (pTVar6,(MethodInfo *)0x0);
    NullCheck(pvVar7);
    pvVar7 = *(void **)((long)pvVar7 + 0x20);
    NullCheck(pvVar7);
    pUVar12 = *(UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC **)((long)pvVar7 + 0x10);
    pUVar8 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
    UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
              (pUVar8,(Il2CppObject *)param_1,
               *(long *)
                PTR_TTSServiceLogging_OnRequestBegin_m556775CDF19AF575A878B1CB76A02F34E3933245_RuntimeMethod_var_048e21f8
               ,(MethodInfo *)0x0);
    NullCheck(pUVar12);
    UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061
              (pUVar12,pUVar8,*(MethodInfo **)puVar3);
    pTVar6 = (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D *)
             TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline
                       (param_1,(MethodInfo *)0x0);
    NullCheck(pTVar6);
    pvVar7 = (void *)TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline
                               (pTVar6,(MethodInfo *)0x0);
    NullCheck(pvVar7);
    pvVar7 = *(void **)((long)pvVar7 + 0x20);
    NullCheck(pvVar7);
    pUVar12 = *(UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC **)((long)pvVar7 + 0x18);
    pUVar8 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
    UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
              (pUVar8,(Il2CppObject *)param_1,
               *(long *)
                PTR_TTSServiceLogging_OnRequestCancel_m8BE61F8D30DFFC9A8B3A84AC3D39865448609331_RuntimeMethod_var_048e2200
               ,(MethodInfo *)0x0);
    NullCheck(pUVar12);
    UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061
              (pUVar12,pUVar8,*(MethodInfo **)puVar3);
    pTVar6 = (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D *)
             TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline
                       (param_1,(MethodInfo *)0x0);
    NullCheck(pTVar6);
    pvVar7 = (void *)TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline
                               (pTVar6,(MethodInfo *)0x0);
    NullCheck(pvVar7);
    pvVar7 = *(void **)((long)pvVar7 + 0x20);
    NullCheck(pvVar7);
    pUVar11 = *(UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8 **)((long)pvVar7 + 0x20);
    pUVar9 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B *)
             il2cpp_codegen_object_new(*(Il2CppClass **)Method_System_Array_Reverse<byte>__);
    UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3
              (pUVar9,(Il2CppObject *)param_1,
               *(long *)
                PTR_TTSServiceLogging_OnRequestError_mF6C261823983A6ACA3A7B245931079B00F812AFD_RuntimeMethod_var_048e2210
               ,(MethodInfo *)0x0);
    NullCheck(pUVar11);
    UnityEvent_2_AddListener_mB9AFAC2C94982D7679B6F7B53D69E9CA550A8183
              (pUVar11,pUVar9,*(MethodInfo **)Method_System_Array_Reverse<byte>__);
    pTVar6 = (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D *)
             TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline
                       (param_1,(MethodInfo *)0x0);
    NullCheck(pTVar6);
    pvVar7 = (void *)TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline
                               (pTVar6,(MethodInfo *)0x0);
    NullCheck(pvVar7);
    pvVar7 = *(void **)((long)pvVar7 + 0x20);
    NullCheck(pvVar7);
    pUVar12 = *(UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC **)((long)pvVar7 + 0x28);
    pUVar8 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
    UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
              (pUVar8,(Il2CppObject *)param_1,
               *(long *)
                PTR_TTSServiceLogging_OnRequestFirstResponse_m407B49045E82665355331C61A1DC5F375A3C20D3_RuntimeMethod_var_048e2218
               ,(MethodInfo *)0x0);
    NullCheck(pUVar12);
    UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061
              (pUVar12,pUVar8,*(MethodInfo **)puVar3);
    pTVar6 = (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D *)
             TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline
                       (param_1,(MethodInfo *)0x0);
    NullCheck(pTVar6);
    pvVar7 = (void *)TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline
                               (pTVar6,(MethodInfo *)0x0);
    NullCheck(pvVar7);
    pvVar7 = *(void **)((long)pvVar7 + 0x20);
    NullCheck(pvVar7);
    pUVar12 = *(UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC **)((long)pvVar7 + 0x30);
    pUVar8 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
    UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
              (pUVar8,(Il2CppObject *)param_1,
               *(long *)
                PTR_TTSServiceLogging_OnRequestReady_m2C33A60627A914B3A79B51E047B405B25FD65173_RuntimeMethod_var_048e2220
               ,(MethodInfo *)0x0);
    NullCheck(pUVar12);
    UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061
              (pUVar12,pUVar8,*(MethodInfo **)puVar3);
    pTVar6 = (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D *)
             TTSServiceLogging_get_Service_m5A7A54A00A8F4E439D405429C0F68CAA644164C8_inline
                       (param_1,(MethodInfo *)0x0);
    NullCheck(pTVar6);
    pvVar7 = (void *)TTSService_get_Events_m1C3A579398F83877EC2DE6CCB93D17C736E1D4A5_inline
                               (pTVar6,(MethodInfo *)0x0);
    NullCheck(pvVar7);
    pvVar7 = *(void **)((long)pvVar7 + 0x20);
    NullCheck(pvVar7);
    pUVar12 = *(UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC **)((long)pvVar7 + 0x38);
    pUVar8 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
             il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
    UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
              (pUVar8,(Il2CppObject *)param_1,
               *(long *)
                PTR_TTSServiceLogging_OnRequestComplete_m9550AE3127C6B5786C71229DFA2FCA59C3D1E602_RuntimeMethod_var_048e2208
               ,(MethodInfo *)0x0);
    NullCheck(pUVar12);
    UnityEvent_1_AddListener_m3542371DC031A8A2172BE89C0D58CC2A2AAA5061
              (pUVar12,pUVar8,*(MethodInfo **)puVar3);
  }
  return;
}


