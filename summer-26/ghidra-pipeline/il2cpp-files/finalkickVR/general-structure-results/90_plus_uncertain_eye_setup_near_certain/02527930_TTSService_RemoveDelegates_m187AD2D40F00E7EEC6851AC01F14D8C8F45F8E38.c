/*
FUNCTION_NAME: TTSService_RemoveDelegates_m187AD2D40F00E7EEC6851AC01F14D8C8F45F8E38
ENTRY_POINT: 02527930
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_3;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_21;functionality_eye_api_context_without_clear_sink_hits_3
*/


void TTSService_RemoveDelegates_m187AD2D40F00E7EEC6851AC01F14D8C8F45F8E38(Il2CppObject *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  Il2CppObject *pIVar9;
  void *pvVar10;
  UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *pUVar11;
  UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B *pUVar12;
  UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D *pUVar13;
  UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA *pUVar14;
  UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC *pUVar15;
  UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8 *pUVar16;
  
  puVar7 = Method_System_Array_Copy__;
  puVar6 = Method_System_Array_Copy__;
  puVar5 = Method_System_Array_Reverse<byte>__;
  puVar4 = Method_System_Array_Resize<OVRPlugin_Vector3f>__;
  puVar3 = Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__;
  puVar2 = Method_System_Array_Resize<OVRPlugin_Quatf>__;
  puVar1 = Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__;
  if ((TTSService_RemoveDelegates_m187AD2D40F00E7EEC6851AC01F14D8C8F45F8E38::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_Resize<InputManager_StateChangeMonitorsForDevice>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Reverse<object>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Sort<int>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Sort<object>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Sort<RaycastHit>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Sort<int,_int>__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Array_Sort<XmlTextReaderImpl_NodeData>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Sort<string,_int>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Sort<ulong,_string>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Sort<RaycastHit>__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_BinarySearch__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_BinarySearch__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_BinarySearch__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_System_Array_Copy__);
    TTSService_RemoveDelegates_m187AD2D40F00E7EEC6851AC01F14D8C8F45F8E38::s_Il2CppMethodInitialized
         = 1;
  }
  if (((byte)param_1[0x30] & 1) != 0) {
    param_1[0x30] = (Il2CppObject)0x0;
    lVar8 = VirtualFuncInvoker0<Il2CppObject*>::Invoke(4,param_1);
    if (lVar8 != 0) {
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(4,param_1);
      NullCheck(pIVar9);
      pUVar15 = (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC *)
                InterfaceFuncInvoker0<TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*>::
                Invoke(0,*(Il2CppClass **)puVar2,pIVar9);
      pUVar11 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      lVar8 = GetVirtualMethodInfo(param_1,0x19);
      UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
                (pUVar11,param_1,lVar8,(MethodInfo *)0x0);
      NullCheck(pUVar15);
      UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282
                (pUVar15,pUVar11,*(MethodInfo **)puVar6);
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(4,param_1);
      NullCheck(pIVar9);
      pUVar15 = (UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC *)
                InterfaceFuncInvoker0<TTSClipEvent_t0C9F8CBB0FBCD9667A0F33D12833AF655FD55D40*>::
                Invoke(2,*(Il2CppClass **)puVar2,pIVar9);
      pUVar11 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      lVar8 = GetVirtualMethodInfo(param_1,0x1a);
      UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
                (pUVar11,param_1,lVar8,(MethodInfo *)0x0);
      NullCheck(pUVar15);
      UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282
                (pUVar15,pUVar11,*(MethodInfo **)puVar6);
    }
    lVar8 = VirtualFuncInvoker0<Il2CppObject*>::Invoke(5,param_1);
    if (lVar8 != 0) {
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(5,param_1);
      NullCheck(pIVar9);
      pvVar10 = (void *)InterfaceFuncInvoker0<TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*>
                        ::Invoke(0,*(Il2CppClass **)puVar1,pIVar9);
      NullCheck(pvVar10);
      pUVar15 = *(UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC **)((long)pvVar10 + 0x10);
      pUVar11 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
                (pUVar11,param_1,*(long *)Method_System_Array_Reverse<object>__,(MethodInfo *)0x0);
      NullCheck(pUVar15);
      UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282
                (pUVar15,pUVar11,*(MethodInfo **)puVar6);
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(5,param_1);
      NullCheck(pIVar9);
      pvVar10 = (void *)InterfaceFuncInvoker0<TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*>
                        ::Invoke(0,*(Il2CppClass **)puVar1,pIVar9);
      NullCheck(pvVar10);
      pUVar15 = *(UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC **)((long)pvVar10 + 0x30);
      pUVar11 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
                (pUVar11,param_1,*(long *)Method_System_Array_Sort<int>__,(MethodInfo *)0x0);
      NullCheck(pUVar15);
      UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282
                (pUVar15,pUVar11,*(MethodInfo **)puVar6);
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(5,param_1);
      NullCheck(pIVar9);
      pvVar10 = (void *)InterfaceFuncInvoker0<TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*>
                        ::Invoke(0,*(Il2CppClass **)puVar1,pIVar9);
      NullCheck(pvVar10);
      pUVar15 = *(UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC **)((long)pvVar10 + 0x18);
      pUVar11 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
                (pUVar11,param_1,*(long *)Method_System_Array_Sort<RaycastHit>__,(MethodInfo *)0x0);
      NullCheck(pUVar15);
      UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282
                (pUVar15,pUVar11,*(MethodInfo **)puVar6);
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(5,param_1);
      NullCheck(pIVar9);
      pvVar10 = (void *)InterfaceFuncInvoker0<TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*>
                        ::Invoke(0,*(Il2CppClass **)puVar1,pIVar9);
      NullCheck(pvVar10);
      pUVar16 = *(UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8 **)((long)pvVar10 + 0x38);
      pUVar12 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar5);
      UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3
                (pUVar12,param_1,*(long *)Method_System_Array_Sort<object>__,(MethodInfo *)0x0);
      NullCheck(pUVar16);
      UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C
                (pUVar16,pUVar12,*(MethodInfo **)puVar7);
    }
    lVar8 = VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,param_1);
    if (lVar8 != 0) {
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,param_1);
      NullCheck(pIVar9);
      pvVar10 = (void *)InterfaceFuncInvoker0<TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*>
                        ::Invoke(1,*(Il2CppClass **)puVar3,pIVar9);
      NullCheck(pvVar10);
      pUVar15 = *(UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC **)((long)pvVar10 + 0x10);
      pUVar11 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
                (pUVar11,param_1,*(long *)Method_System_Array_Sort<RaycastHit>__,(MethodInfo *)0x0);
      NullCheck(pUVar15);
      UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282
                (pUVar15,pUVar11,*(MethodInfo **)puVar6);
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,param_1);
      NullCheck(pIVar9);
      pvVar10 = (void *)InterfaceFuncInvoker0<TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*>
                        ::Invoke(1,*(Il2CppClass **)puVar3,pIVar9);
      NullCheck(pvVar10);
      pUVar15 = *(UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC **)((long)pvVar10 + 0x30);
      pUVar11 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
                (pUVar11,param_1,*(long *)Method_System_Array_BinarySearch__,(MethodInfo *)0x0);
      NullCheck(pUVar15);
      UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282
                (pUVar15,pUVar11,*(MethodInfo **)puVar6);
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,param_1);
      NullCheck(pIVar9);
      pvVar10 = (void *)InterfaceFuncInvoker0<TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*>
                        ::Invoke(1,*(Il2CppClass **)puVar3,pIVar9);
      NullCheck(pvVar10);
      pUVar15 = *(UnityEvent_1_tB5A108005350A1D135736101AA3F9B005F244BDC **)((long)pvVar10 + 0x18);
      pUVar11 = (UnityAction_1_t51A0A0331440D6D036F7A016CA10C5B54E99C809 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      UnityAction_1__ctor_mC26DA1E1FE7439877A7BE949B1E2042217DCEAA4
                (pUVar11,param_1,*(long *)Method_System_Array_BinarySearch__,(MethodInfo *)0x0);
      NullCheck(pUVar15);
      UnityEvent_1_RemoveListener_mD12C38D30E8DAC8D5258E9DA2F6EB22B44AA3282
                (pUVar15,pUVar11,*(MethodInfo **)puVar6);
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,param_1);
      NullCheck(pIVar9);
      pvVar10 = (void *)InterfaceFuncInvoker0<TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6*>
                        ::Invoke(1,*(Il2CppClass **)puVar3,pIVar9);
      NullCheck(pvVar10);
      pUVar16 = *(UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8 **)((long)pvVar10 + 0x38);
      pUVar12 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar5);
      UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3
                (pUVar12,param_1,*(long *)Method_System_Array_BinarySearch__,(MethodInfo *)0x0);
      NullCheck(pUVar16);
      UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C
                (pUVar16,pUVar12,*(MethodInfo **)puVar7);
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,param_1);
      NullCheck(pIVar9);
      pvVar10 = (void *)InterfaceFuncInvoker0<TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089*>
                        ::Invoke(5,*(Il2CppClass **)puVar3,pIVar9);
      NullCheck(pvVar10);
      pUVar16 = *(UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8 **)((long)pvVar10 + 0x10);
      pUVar12 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar5);
      UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3
                (pUVar12,param_1,*(long *)Method_System_Array_Sort<int,_int>__,(MethodInfo *)0x0);
      NullCheck(pUVar16);
      UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C
                (pUVar16,pUVar12,*(MethodInfo **)puVar7);
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,param_1);
      NullCheck(pIVar9);
      pvVar10 = (void *)InterfaceFuncInvoker0<TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089*>
                        ::Invoke(5,*(Il2CppClass **)puVar3,pIVar9);
      NullCheck(pvVar10);
      pUVar16 = *(UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8 **)((long)pvVar10 + 0x20);
      pUVar12 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar5);
      UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3
                (pUVar12,param_1,*(long *)Method_System_Array_Sort<XmlTextReaderImpl_NodeData>__,
                 (MethodInfo *)0x0);
      NullCheck(pUVar16);
      UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C
                (pUVar16,pUVar12,*(MethodInfo **)puVar7);
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,param_1);
      NullCheck(pIVar9);
      pvVar10 = (void *)InterfaceFuncInvoker0<TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089*>
                        ::Invoke(5,*(Il2CppClass **)puVar3,pIVar9);
      NullCheck(pvVar10);
      pUVar16 = *(UnityEvent_2_t32A1988A0478933681890479EFF584B5C1D1BEC8 **)((long)pvVar10 + 0x18);
      pUVar12 = (UnityAction_2_tC20760D89780A105537DDF1A078D83E4F913729B *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar5);
      UnityAction_2__ctor_m4B8D2480719115C5963BC4A03ABE0AA4B42AE1A3
                (pUVar12,param_1,*(long *)Method_System_Array_Sort<ulong,_string>__,
                 (MethodInfo *)0x0);
      NullCheck(pUVar16);
      UnityEvent_2_RemoveListener_mBD3BAD7D84E79C46731123EB99C3E10A2C81163C
                (pUVar16,pUVar12,*(MethodInfo **)puVar7);
      pIVar9 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(6,param_1);
      NullCheck(pIVar9);
      pvVar10 = (void *)InterfaceFuncInvoker0<TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089*>
                        ::Invoke(5,*(Il2CppClass **)puVar3,pIVar9);
      NullCheck(pvVar10);
      pUVar14 = *(UnityEvent_3_tA7209BD4DC7621A3CB3D6025C884F9CEA0617FFA **)((long)pvVar10 + 0x28);
      pUVar13 = (UnityAction_3_t9856F5DFDEC93068DB8D7C0522248FD4263A270D *)
                il2cpp_codegen_object_new(*(Il2CppClass **)Method_System_Array_Clear__);
      UnityAction_3__ctor_m59FF18B95CC81D01531FE501948FF6E4B01527B5
                (pUVar13,param_1,*(long *)Method_System_Array_Sort<string,_int>__,(MethodInfo *)0x0)
      ;
      NullCheck(pUVar14);
      UnityEvent_3_RemoveListener_m6B6AF183A3CFC5EA94FA42DF9691FEBB048F1945
                (pUVar14,pUVar13,*(MethodInfo **)Method_System_Array_Copy__);
    }
  }
  return;
}


