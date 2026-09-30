/*
FUNCTION_NAME: TextInputBase_SetMultiline_m06D5FBE1468F66D6EB3C349CA9A212B19D8A66D0_gshared
ENTRY_POINT: 02418d64
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 118
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_17;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void TextInputBase_SetMultiline_m06D5FBE1468F66D6EB3C349CA9A212B19D8A66D0_gshared
               (TextInputBase_tEC90EE082678B4A2F6AD45223E7A865597BED41D *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  MethodInfo *pMVar8;
  Il2CppObject *pIVar9;
  Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *pSVar10;
  EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A *pEVar11;
  Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *pFVar12;
  CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *pCVar13;
  EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *pEVar14;
  long lVar15;
  void *pvVar16;
  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD *pLVar17;
  Il2CppClass *pIVar18;
  undefined8 uVar19;
  ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *pSVar20;
  String_t *pSVar21;
  
  puVar5 = 
  Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Length__;
  puVar4 = 
  Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Item__;
  puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__;
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__;
  if ((TextInputBase_SetMultiline_m06D5FBE1468F66D6EB3C349CA9A212B19D8A66D0_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Threading_SparselyPopulatedArrayAddInfo<CancellationCallbackInfo>_get_Source__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<string,_object>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Prev__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    TextInputBase_SetMultiline_m06D5FBE1468F66D6EB3C349CA9A212B19D8A66D0_gshared::
    s_Il2CppMethodInitialized = 1;
  }
  pMVar8 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),7);
  pIVar9 = (Il2CppObject *)
           TextInputBase_get_textEdition_mD165CA473233B6D80583BB6B09A1D1DE41936052(param_1,pMVar8);
  NullCheck(pIVar9);
  bVar7 = InterfaceFuncInvoker0<bool>::Invoke
                    (0,*(Il2CppClass **)
                        Method_System_Threading_SparselyPopulatedArrayAddInfo<CancellationCallbackInfo>_get_Source__
                     ,pIVar9);
  if ((bVar7 & 1) != 0) {
    pMVar8 = (MethodInfo *)
             il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x15);
    TextInputBase_RemoveSingleLineComponents_mD6863717ABD59F3E03F8DAFA143D4D97028C4281
              (param_1,pMVar8);
    pMVar8 = (MethodInfo *)
             il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x12);
    TextInputBase_RemoveMultilineComponents_mA271D1F8211F2586186292B76703A65C55E360EC
              (param_1,pMVar8);
    if (*(int *)(param_1 + 0x3f8) == 2) {
      bVar6 = false;
    }
    else {
      bVar6 = *(long *)(param_1 + 0x3d0) == 0;
    }
    if (bVar6) {
      pvVar16 = (void *)il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Prev__
                                  );
      ScrollView__ctor_m24F4FFBEBBA20900EBDFD2F1481ACB133D896280(pvVar16);
      *(void **)(param_1 + 0x3d0) = pvVar16;
      Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x3d0),pvVar16);
      pvVar16 = *(void **)(param_1 + 0x3d0);
      pMVar8 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),1);
      uVar19 = TextInputBase_get_textElement_m5A460ECDAE96E2E1AE90713C3F963E294AFAE211_inline
                         (param_1,pMVar8);
      NullCheck(pvVar16);
      VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar16,uVar19,0);
      uVar19 = *(undefined8 *)(param_1 + 0x3d0);
      NullCheck(param_1);
      VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(param_1,uVar19,0);
      pMVar8 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x16);
      TextInputBase_SetScrollViewMode_mB1548B3A44D8D7D1A16F3A8A9D3B9D1CA097E524(param_1,pMVar8);
      pvVar16 = *(void **)(param_1 + 0x3d0);
      NullCheck(pvVar16);
      ScrollView_set_horizontalScrollerVisibility_m2DA627CB0AE20C96B1F2A5FB0D9B0661486F50DF
                (pvVar16,2,0);
      pvVar16 = *(void **)(param_1 + 0x3d0);
      uVar1 = *(undefined4 *)(param_1 + 0x3f8);
      NullCheck(pvVar16);
      ScrollView_set_verticalScrollerVisibility_mB8DF7D3D2B02DFD3AE337CA1CBBE399D9A49A7DA
                (pvVar16,uVar1,0);
      pvVar16 = *(void **)(param_1 + 0x3d0);
      pIVar18 = (Il2CppClass *)
                il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x13);
      il2cpp_codegen_runtime_class_init_inline(pIVar18);
      pIVar18 = (Il2CppClass *)
                il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x13);
      lVar15 = il2cpp_codegen_static_fields_for(pIVar18);
      uVar19 = *(undefined8 *)(lVar15 + 0x30);
      NullCheck(pvVar16);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar16,uVar19,0);
      pSVar20 = *(ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 **)(param_1 + 0x3d0);
      NullCheck(pSVar20);
      pvVar16 = (void *)ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline
                                  (pSVar20,(MethodInfo *)0x0);
      pIVar18 = (Il2CppClass *)
                il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x13);
      lVar15 = il2cpp_codegen_static_fields_for(pIVar18);
      uVar19 = *(undefined8 *)(lVar15 + 0x38);
      NullCheck(pvVar16);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar16,uVar19,0);
      pIVar9 = *(Il2CppObject **)(param_1 + 0x3d0);
      NullCheck(pIVar9);
      pvVar16 = (void *)VirtualFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>
                        ::Invoke(99,pIVar9);
      pIVar18 = (Il2CppClass *)
                il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x13);
      lVar15 = il2cpp_codegen_static_fields_for(pIVar18);
      uVar19 = *(undefined8 *)(lVar15 + 0x40);
      NullCheck(pvVar16);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar16,uVar19,0);
      pIVar9 = *(Il2CppObject **)(param_1 + 0x3d0);
      NullCheck(pIVar9);
      pCVar13 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
                VirtualFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>::
                Invoke(99,pIVar9);
      pEVar14 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
      lVar15 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x17);
      EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
                (pEVar14,(Il2CppObject *)param_1,lVar15,(MethodInfo *)0x0);
      NullCheck(pCVar13);
      CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
                (pCVar13,pEVar14,0,*(MethodInfo **)puVar2);
      pSVar20 = *(ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 **)(param_1 + 0x3d0);
      NullCheck(pSVar20);
      pSVar10 = (Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *)
                ScrollView_get_verticalScroller_mDCBC1E09B2754C31BF917818CB07E5F36EC0D13A_inline
                          (pSVar20,(MethodInfo *)0x0);
      NullCheck(pSVar10);
      pIVar9 = (Il2CppObject *)
               Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                         (pSVar10,(MethodInfo *)0x0);
      pEVar11 = (EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      lVar15 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x18);
      EventCallback_1__ctor_mAD3EFBC1BCE6A3EF049456DF6224208C2DE3E970
                (pEVar11,(Il2CppObject *)param_1,lVar15,(MethodInfo *)0x0);
      INotifyValueChangedExtensions_RegisterValueChangedCallback_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1C52E6941E310431B149196465705C38CFF0A9E9
                (pIVar9,pEVar11,*(MethodInfo **)puVar5);
      pSVar20 = *(ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 **)(param_1 + 0x3d0);
      NullCheck(pSVar20);
      pSVar10 = (Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *)
                ScrollView_get_verticalScroller_mDCBC1E09B2754C31BF917818CB07E5F36EC0D13A_inline
                          (pSVar20,(MethodInfo *)0x0);
      NullCheck(pSVar10);
      pFVar12 = (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)
                Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                          (pSVar10,(MethodInfo *)0x0);
      NullCheck(pFVar12);
      Focusable_set_focusable_m85547438A92A464B90AB91ACBD458677A0BA41CB_inline
                (pFVar12,false,(MethodInfo *)0x0);
      pSVar20 = *(ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 **)(param_1 + 0x3d0);
      NullCheck(pSVar20);
      pSVar10 = (Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *)
                ScrollView_get_horizontalScroller_mF0791CC587E399B708C24885E89301F2633712E8_inline
                          (pSVar20,(MethodInfo *)0x0);
      NullCheck(pSVar10);
      pIVar9 = (Il2CppObject *)
               Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                         (pSVar10,(MethodInfo *)0x0);
      pEVar11 = (EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      lVar15 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x18);
      EventCallback_1__ctor_mAD3EFBC1BCE6A3EF049456DF6224208C2DE3E970
                (pEVar11,(Il2CppObject *)param_1,lVar15,(MethodInfo *)0x0);
      INotifyValueChangedExtensions_RegisterValueChangedCallback_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1C52E6941E310431B149196465705C38CFF0A9E9
                (pIVar9,pEVar11,*(MethodInfo **)puVar5);
      pSVar20 = *(ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 **)(param_1 + 0x3d0);
      NullCheck(pSVar20);
      pSVar10 = (Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *)
                ScrollView_get_horizontalScroller_mF0791CC587E399B708C24885E89301F2633712E8_inline
                          (pSVar20,(MethodInfo *)0x0);
      NullCheck(pSVar10);
      pFVar12 = (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)
                Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                          (pSVar10,(MethodInfo *)0x0);
      NullCheck(pFVar12);
      Focusable_set_focusable_m85547438A92A464B90AB91ACBD458677A0BA41CB_inline
                (pFVar12,false,(MethodInfo *)0x0);
      pIVar18 = (Il2CppClass *)
                il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0xe);
      il2cpp_codegen_runtime_class_init_inline(pIVar18);
      pIVar18 = (Il2CppClass *)
                il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0xe);
      lVar15 = il2cpp_codegen_static_fields_for(pIVar18);
      uVar19 = *(undefined8 *)(lVar15 + 0x40);
      NullCheck(param_1);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(param_1,uVar19,0);
      pMVar8 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),1);
      pvVar16 = (void *)TextInputBase_get_textElement_m5A460ECDAE96E2E1AE90713C3F963E294AFAE211_inline
                                  (param_1,pMVar8);
      pIVar18 = (Il2CppClass *)
                il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x13);
      lVar15 = il2cpp_codegen_static_fields_for(pIVar18);
      uVar19 = *(undefined8 *)(lVar15 + 0x10);
      NullCheck(pvVar16);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar16,uVar19,0);
    }
    else if (*(long *)(param_1 + 0x3d8) == 0) {
      pMVar8 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),1);
      pCVar13 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
                TextInputBase_get_textElement_m5A460ECDAE96E2E1AE90713C3F963E294AFAE211_inline
                          (param_1,pMVar8);
      pEVar14 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
                il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
      lVar15 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x14);
      EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
                (pEVar14,(Il2CppObject *)param_1,lVar15,(MethodInfo *)0x0);
      NullCheck(pCVar13);
      CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
                (pCVar13,pEVar14,0,*(MethodInfo **)puVar2);
      pvVar16 = (void *)il2cpp_codegen_object_new
                                  (*(Il2CppClass **)
                                    Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                                  );
      VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar16,0);
      NullCheck(pvVar16);
      pLVar17 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD *)
                VisualElement_get_classList_mF29F87BE5A1BFC82854AD0D6355A713D5AC517C1(pvVar16,0);
      pIVar18 = (Il2CppClass *)
                il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0xe);
      il2cpp_codegen_runtime_class_init_inline(pIVar18);
      pIVar18 = (Il2CppClass *)
                il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0xe);
      lVar15 = il2cpp_codegen_static_fields_for(pIVar18);
      pSVar21 = *(String_t **)(lVar15 + 0x28);
      NullCheck(pLVar17);
      List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline
                (pLVar17,pSVar21,
                 *(MethodInfo **)
                  Method_System_Collections_Generic_Dictionary<string,_object>_Clear__);
      *(void **)(param_1 + 0x3d8) = pvVar16;
      Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x3d8),pvVar16);
      pvVar16 = *(void **)(param_1 + 0x3d8);
      pMVar8 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),1);
      uVar19 = TextInputBase_get_textElement_m5A460ECDAE96E2E1AE90713C3F963E294AFAE211_inline
                         (param_1,pMVar8);
      NullCheck(pvVar16);
      VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar16,uVar19,0);
      uVar19 = *(undefined8 *)(param_1 + 0x3d8);
      NullCheck(param_1);
      VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(param_1,uVar19,0);
      pMVar8 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x19);
      TextInputBase_SetMultilineContainerStyle_mF5F1C36AB1B45701490837914CBBB026A05179F2
                (param_1,pMVar8);
      pIVar18 = (Il2CppClass *)
                il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0xe);
      lVar15 = il2cpp_codegen_static_fields_for(pIVar18);
      uVar19 = *(undefined8 *)(lVar15 + 0x38);
      NullCheck(param_1);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(param_1,uVar19,0);
      pMVar8 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),1);
      pvVar16 = (void *)TextInputBase_get_textElement_m5A460ECDAE96E2E1AE90713C3F963E294AFAE211_inline
                                  (param_1,pMVar8);
      pIVar18 = (Il2CppClass *)
                il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x13);
      il2cpp_codegen_runtime_class_init_inline(pIVar18);
      pIVar18 = (Il2CppClass *)
                il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),0x13);
      lVar15 = il2cpp_codegen_static_fields_for(pIVar18);
      uVar19 = *(undefined8 *)(lVar15 + 8);
      NullCheck(pvVar16);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar16,uVar19,0);
    }
  }
  return;
}


