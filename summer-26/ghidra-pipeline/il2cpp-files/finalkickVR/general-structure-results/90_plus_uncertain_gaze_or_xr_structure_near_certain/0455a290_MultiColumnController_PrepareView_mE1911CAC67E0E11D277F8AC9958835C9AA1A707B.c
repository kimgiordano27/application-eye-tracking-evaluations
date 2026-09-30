/*
FUNCTION_NAME: MultiColumnController_PrepareView_mE1911CAC67E0E11D277F8AC9958835C9AA1A707B
ENTRY_POINT: 0455a290
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void MultiColumnController_PrepareView_mE1911CAC67E0E11D277F8AC9958835C9AA1A707B
               (Il2CppObject *param_1,
               BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE *param_2,
               undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  long lVar5;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar6;
  ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *pSVar7;
  Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A *pAVar8;
  CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *pCVar9;
  EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *pEVar10;
  undefined8 uVar11;
  BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE *pBVar12;
  MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D *pMVar13;
  undefined8 local_48;
  undefined1 local_39;
  undefined8 local_38;
  BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE *local_30;
  Il2CppObject *local_28;
  
  puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__;
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__;
  puVar1 = Method_System_Nullable<InputUpdateType>_get_HasValue__;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((MultiColumnController_PrepareView_mE1911CAC67E0E11D277F8AC9958835C9AA1A707B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Mono_Math_BigInteger_Kernel_RightShift__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_MultiColumnController_OnColumnContainerGeometryChanged_mA1947A515F6D232DCCC9C15BB1DC7F33AD78DF3F_RuntimeMethod_var_048dc860
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_MultiColumnController_OnHorizontalScrollerValueChanged_mFF5989505D13875F4F2A39ED0E6E00EBF5D72669_RuntimeMethod_var_048dc868
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_MultiColumnController_OnViewportGeometryChanged_mBC1D63E66EFA5E6E71E04CD5CCFD6C982FE938D8_RuntimeMethod_var_048dc870
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral94042AEE17DC8D42AAEA404540B3CF173877EB0F_048dc878);
    MultiColumnController_PrepareView_mE1911CAC67E0E11D277F8AC9958835C9AA1A707B::
    s_Il2CppMethodInitialized = 1;
  }
  local_48 = 0;
  local_39 = *(long *)(local_28 + 0x20) != 0;
  if ((bool)local_39) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)PTR__stringLiteral94042AEE17DC8D42AAEA404540B3CF173877EB0F_048dc878,0)
    ;
  }
  else {
    *(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE **)(local_28 + 0x20) =
         local_30;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x20),local_30);
    pvVar4 = (void *)il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar4);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar11 = *(undefined8 *)(lVar5 + 0x18);
    NullCheck(pvVar4);
    VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(pvVar4,uVar11,0);
    *(void **)(local_28 + 0x28) = pvVar4;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x28),pvVar4);
    pvVar4 = *(void **)(local_28 + 0x28);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar11 = *(undefined8 *)(lVar5 + 0x18);
    NullCheck(pvVar4);
    VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar11,0);
    pvVar4 = *(void **)(local_28 + 0x28);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar11 = *(undefined8 *)(lVar5 + 0x10);
    NullCheck(pvVar4);
    VisualElement_set_viewDataKey_m6318C0A701350678B0DBF34939C3BC392134B092(pvVar4,uVar11,0);
    pBVar12 = local_30;
    NullCheck(local_30);
    pVVar6 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
             BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline
                       (pBVar12,(MethodInfo *)0x0);
    NullCheck(pVVar6);
    local_48 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                         (pVVar6,(MethodInfo *)0x0);
    Hierarchy_Insert_m99CF61B5910EEE72983EC04C0FF49102DC63E32D
              (&local_48,0,*(undefined8 *)(local_28 + 0x28),0);
    pvVar4 = *(void **)(local_28 + 0x28);
    uVar11 = *(undefined8 *)(local_28 + 0x30);
    NullCheck(pvVar4);
    VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar4,uVar11,0);
    pBVar12 = *(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE **)
               (local_28 + 0x20);
    NullCheck(pBVar12);
    pSVar7 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)
             BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline
                       (pBVar12,(MethodInfo *)0x0);
    NullCheck(pSVar7);
    pvVar4 = (void *)ScrollView_get_horizontalScroller_mF0791CC587E399B708C24885E89301F2633712E8_inline
                               (pSVar7,(MethodInfo *)0x0);
    pAVar8 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)Method_Mono_Math_BigInteger_Kernel_RightShift__);
    Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859
              (pAVar8,local_28,
               *(long *)
                PTR_MultiColumnController_OnHorizontalScrollerValueChanged_mFF5989505D13875F4F2A39ED0E6E00EBF5D72669_RuntimeMethod_var_048dc868
               ,(MethodInfo *)0x0);
    NullCheck(pvVar4);
    Scroller_add_valueChanged_mEBE3F410DB7D57597D8A7748805CB4CE4371D42B(pvVar4,pAVar8,0);
    pBVar12 = *(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE **)
               (local_28 + 0x20);
    NullCheck(pBVar12);
    pSVar7 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)
             BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline
                       (pBVar12,(MethodInfo *)0x0);
    NullCheck(pSVar7);
    pCVar9 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
             ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline
                       (pSVar7,(MethodInfo *)0x0);
    pEVar10 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
              il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
    EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
              (pEVar10,local_28,
               *(long *)
                PTR_MultiColumnController_OnViewportGeometryChanged_mBC1D63E66EFA5E6E71E04CD5CCFD6C982FE938D8_RuntimeMethod_var_048dc870
               ,(MethodInfo *)0x0);
    NullCheck(pCVar9);
    CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
              (pCVar9,pEVar10,0,*(MethodInfo **)puVar2);
    pMVar13 = *(MultiColumnCollectionHeader_t0B041BD57A14950E8C33DCD854F3A3C2C3DA706D **)
               (local_28 + 0x30);
    NullCheck(pMVar13);
    pCVar9 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
             MultiColumnCollectionHeader_get_columnContainer_m33E41CBB68DF0781F002B266F332F8B8CF4BF179_inline
                       (pMVar13,(MethodInfo *)0x0);
    pEVar10 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
              il2cpp_codegen_object_new(*(Il2CppClass **)puVar3);
    EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
              (pEVar10,local_28,
               *(long *)
                PTR_MultiColumnController_OnColumnContainerGeometryChanged_mA1947A515F6D232DCCC9C15BB1DC7F33AD78DF3F_RuntimeMethod_var_048dc860
               ,(MethodInfo *)0x0);
    NullCheck(pCVar9);
    CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
              (pCVar9,pEVar10,0,*(MethodInfo **)puVar2);
  }
  return;
}


