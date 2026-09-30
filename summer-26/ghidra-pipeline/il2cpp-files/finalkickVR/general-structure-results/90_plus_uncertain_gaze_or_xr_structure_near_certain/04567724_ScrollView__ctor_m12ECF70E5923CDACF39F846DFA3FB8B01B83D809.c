/*
FUNCTION_NAME: ScrollView__ctor_m12ECF70E5923CDACF39F846DFA3FB8B01B83D809
ENTRY_POINT: 04567724
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void ScrollView__ctor_m12ECF70E5923CDACF39F846DFA3FB8B01B83D809
               (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *param_1,undefined4 param_2,
               undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined4 *puVar18;
  void *pvVar19;
  CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *pCVar20;
  EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *pEVar21;
  EventCallback_1_t1FFCCC98AE7C52F427D11F1609ED56BE1E4AEF88 *pEVar22;
  EventCallback_1_tCE5E8F1D2A7EE5EC636D68025C6D899BD17EF38B *pEVar23;
  Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A *pAVar24;
  Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *pSVar25;
  BaseSlider_1_t72796443D058B00401238104911BE7078A9FD0BA *pBVar26;
  ClampedDragger_1_t18A937D027747303C3811CCC9FAD288366DF8DC3 *pCVar27;
  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *pAVar28;
  EventCallback_1_tAC159BB180600020449B0A18CFE8806035ECCAE6 *pEVar29;
  EventCallback_1_t7C6768AD962B0B50514570724A38E07DA18FB1FA *pEVar30;
  EventCallback_1_tE2BCC4FFB156A2716749F7BDD0036A743B039913 *pEVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_28;
  
  puVar16 = PTR_Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8_il2cpp_TypeInfo_var_048dcc00;
  puVar15 = 
  PTR_ScrollView_UpdateElasticBehaviour_m5D1C43E1A85749D0D02DFA3718AB41D7F7651DE3_RuntimeMethod_var_048dcbf8
  ;
  puVar14 = 
  PTR_ScrollView_OnScrollersGeometryChanged_mBDFFFA9280470A57E4A3C294F6C7C5AD52CABBC5_RuntimeMethod_var_048dcbf0
  ;
  puVar13 = 
  PTR_ScrollView_OnGeometryChanged_m4DC0A7647DDE2A43DD1D599B04300500FA5069D9_RuntimeMethod_var_048dcbe8
  ;
  puVar12 = 
  PTR_ClampedDragger_1_add_draggingEnded_mCE611636A9115DE70CA5E5C1C1D6CB7C24D54D29_RuntimeMethod_var_048dcbe0
  ;
  puVar11 = 
  PTR_BaseSlider_1_get_clampedDragger_mB4CE620901AE51393FD475311C2BC49EB8799162_RuntimeMethod_var_048dcbd8
  ;
  puVar10 = 
  PTR_BaseSlider_1_get_dragElement_m032210456947E23683D74C074CC01AFE210169EB_RuntimeMethod_var_048dcbb0
  ;
  puVar9 = Method_Mono_Math_BigInteger_Kernel_RightShift__;
  puVar8 = 
  Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Prev__;
  puVar7 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphObjectPool_SharedObjectPool<MaterialPropertyBlock>_get_sharedPool__
  ;
  puVar6 = Method_System_Collections_Generic_Queue<string>__ctor__;
  puVar5 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__;
  puVar4 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__;
  puVar3 = Method_System_Nullable<InputUserAccountHandle>_get_HasValue__;
  puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
  ;
  local_38 = param_3;
  local_2c = param_2;
  local_28 = param_1;
  if ((ScrollView__ctor_m12ECF70E5923CDACF39F846DFA3FB8B01B83D809::s_Il2CppMethodInitialized & 1) ==
      0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Mono_Math_BigInteger_Kernel_RightShift__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar11);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar10);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_CallbackEventHandler_RegisterCallback_TisWheelEvent_tDD5DB3A6F5F6FDB59AD7FF27491502FF18B9775E_m1E951977C03DE5B5F7D3958D0AFF341FAA5A62C6_RuntimeMethod_var_048dcc08
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar12);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar5);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventCallback_1_tAC159BB180600020449B0A18CFE8806035ECCAE6_il2cpp_TypeInfo_var_048dcc10
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_PointerInteractable<RayInteractor,_RayInteractable>_Start__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ScrollView_OnAttachToPanel_m478DE1554E56B56B42AFF8F8F44181EB5D137E4B_RuntimeMethod_var_048dcc18
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ScrollView_OnDetachFromPanel_mB86BF58CAFC587F7DED8772FAEEE60DE9A349105_RuntimeMethod_var_048dcc20
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar13);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ScrollView_OnHorizontalScrollDragElementChanged_m4589C0A6D501A5BC24DF78DF329D1DA1EAF789B3_RuntimeMethod_var_048dcc28
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ScrollView_OnPointerMove_mB5B8F154C72F4EC477AE2D02DC8F2885763E4AEF_RuntimeMethod_var_048dcc30
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ScrollView_OnPointerUp_mDF05E48E63E261A0A2ABC852038529F1DB9BEE71_RuntimeMethod_var_048dcc38
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ScrollView_OnScrollWheel_mE7FD49102D1BDB3EF2F56F3DE361D7EDD49E5861_RuntimeMethod_var_048dcc40
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar14);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ScrollView_OnVerticalScrollDragElementChanged_m666A41D3FAD03B79440E8FE337827D8ED303D7F5_RuntimeMethod_var_048dcc48
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ScrollView_U3C_ctorU3Eb__126_0_m844B22421C98FA0BA8D12B4102BFD5673A141EBC_RuntimeMethod_var_048dcc50
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ScrollView_U3C_ctorU3Eb__126_1_m750946F1FBB5A2FDB1E7D823798C172C60AFC247_RuntimeMethod_var_048dcc58
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar15);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar8);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar16);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral08A52D1E2B01E1E8CDCF0DDBA9114968D6A3734B_048dcc60);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral3B6947D09D040192E73A930FECC9313A7234C7EC_048dcc68);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral3F5F058869244389389B3130A5A503977758C8EF_048dcc70);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral930C9B5460E622D0D0ADE329473176096F9EFF92_048dcc78);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral97FCF4C5E9B3B166B1D9C1242C020B41F797EFED_048dc9c0);
    ScrollView__ctor_m12ECF70E5923CDACF39F846DFA3FB8B01B83D809::s_Il2CppMethodInitialized = 1;
  }
  local_40 = 0;
  *(undefined4 *)(local_28 + 0x3c8) = 0xffffffff;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar7);
  lVar17 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar7);
  *(undefined4 *)(local_28 + 0x3e0) = *(undefined4 *)(lVar17 + 0x28);
  *(undefined4 *)(local_28 + 0x3f0) = 0x41900000;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar8);
  puVar18 = (undefined4 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
  *(undefined4 *)(local_28 + 0x3f4) = *puVar18;
  *(undefined4 *)(local_28 + 0x3f8) = 0x41200000;
  *(undefined4 *)(local_28 + 0x3fc) = 0x3b888b54;
  lVar17 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
  *(undefined4 *)(local_28 + 0x400) = *(undefined4 *)(lVar17 + 4);
  lVar17 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
  *(undefined8 *)(local_28 + 0x410) = *(undefined8 *)(lVar17 + 8);
  *(undefined4 *)(local_28 + 0x440) = 0;
  *(undefined4 *)(local_28 + 0x444) = 0;
  *(undefined4 *)(local_28 + 0x448) = 0;
  *(undefined4 *)(local_28 + 0x44c) = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(local_28);
  lVar17 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (local_28,*(undefined8 *)(lVar17 + 0x10),0);
  pvVar19 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar19,0);
  NullCheck(pvVar19);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (pvVar19,*(undefined8 *)
                      PTR__stringLiteral3B6947D09D040192E73A930FECC9313A7234C7EC_048dcc68,0);
  *(void **)(local_28 + 0x438) = pvVar19;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x438),pvVar19);
  pvVar19 = *(void **)(local_28 + 0x438);
  lVar17 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
  uVar32 = *(undefined8 *)(lVar17 + 0x38);
  NullCheck(pvVar19);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar19,uVar32,0);
  local_40 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                       (local_28,(MethodInfo *)0x0);
  Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648
            (&local_40,*(undefined8 *)(local_28 + 0x438),0);
  pvVar19 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar19,0);
  NullCheck(pvVar19);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (pvVar19,*(undefined8 *)
                      PTR__stringLiteral3F5F058869244389389B3130A5A503977758C8EF_048dcc70,0);
  *(void **)(local_28 + 0x418) = pvVar19;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x418),pvVar19);
  pvVar19 = (void *)ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline
                              ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                               (MethodInfo *)0x0);
  lVar17 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
  uVar32 = *(undefined8 *)(lVar17 + 0x18);
  NullCheck(pvVar19);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar19,uVar32,0);
  pCVar20 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
            ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline
                      ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                       (MethodInfo *)0x0);
  pEVar21 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar5);
  EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
            (pEVar21,(Il2CppObject *)local_28,*(long *)puVar13,(MethodInfo *)0x0);
  NullCheck(pCVar20);
  CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
            (pCVar20,pEVar21,0,*(MethodInfo **)puVar4);
  pvVar19 = (void *)ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline
                              ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                               (MethodInfo *)0x0);
  NullCheck(pvVar19);
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar19,1,0);
  pCVar20 = *(CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 **)(local_28 + 0x438);
  pEVar22 = (EventCallback_1_t1FFCCC98AE7C52F427D11F1609ED56BE1E4AEF88 *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
                      );
  EventCallback_1__ctor_m929B5D5292DB931820A52428141FECB39016A6B7
            (pEVar22,(Il2CppObject *)local_28,
             *(long *)
              PTR_ScrollView_OnAttachToPanel_m478DE1554E56B56B42AFF8F8F44181EB5D137E4B_RuntimeMethod_var_048dcc18
             ,(MethodInfo *)0x0);
  NullCheck(pCVar20);
  CallbackEventHandler_RegisterCallback_TisAttachToPanelEvent_t95C0BC3DD37F324A7816CB2574B56D976C932B28_mE90FCB724E9E49659FDCAE9A1BB0FC9BA01C9BEF
            (pCVar20,pEVar22,0,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__);
  pCVar20 = *(CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 **)(local_28 + 0x438);
  pEVar23 = (EventCallback_1_tCE5E8F1D2A7EE5EC636D68025C6D899BD17EF38B *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
                      );
  EventCallback_1__ctor_m0407B736C264F06C81E5CBB70EF40FBB975AC634
            (pEVar23,(Il2CppObject *)local_28,
             *(long *)
              PTR_ScrollView_OnDetachFromPanel_mB86BF58CAFC587F7DED8772FAEEE60DE9A349105_RuntimeMethod_var_048dcc20
             ,(MethodInfo *)0x0);
  NullCheck(pCVar20);
  CallbackEventHandler_RegisterCallback_TisDetachFromPanelEvent_t5E26427B0E6AF96F0C522D1FCEDDC078D755E496_mED85B91BE761D1DBE3001231E0050CD612946F2C
            (pCVar20,pEVar23,0,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__);
  pvVar19 = *(void **)(local_28 + 0x438);
  uVar32 = ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline
                     ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                      (MethodInfo *)0x0);
  NullCheck(pvVar19);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar19,uVar32,0);
  pvVar19 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar19,0);
  NullCheck(pvVar19);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (pvVar19,*(undefined8 *)
                      PTR__stringLiteral97FCF4C5E9B3B166B1D9C1242C020B41F797EFED_048dc9c0,0);
  *(void **)(local_28 + 0x430) = pvVar19;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x430),pvVar19);
  pvVar19 = *(void **)(local_28 + 0x430);
  NullCheck(pvVar19);
  VisualElement_set_disableClipping_m3E786643EBFEE5BDC0778C835140934FF3FF80CB(pvVar19,1,0);
  pCVar20 = *(CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 **)(local_28 + 0x430);
  pEVar21 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar5);
  EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
            (pEVar21,(Il2CppObject *)local_28,*(long *)puVar13,(MethodInfo *)0x0);
  NullCheck(pCVar20);
  CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
            (pCVar20,pEVar21,0,*(MethodInfo **)puVar4);
  pvVar19 = *(void **)(local_28 + 0x430);
  lVar17 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
  uVar32 = *(undefined8 *)(lVar17 + 0x40);
  NullCheck(pvVar19);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar19,uVar32,0);
  pvVar19 = *(void **)(local_28 + 0x430);
  NullCheck(pvVar19);
  VisualElement_set_usageHints_mD317223075C8C708C1DB66CF90E81C5F9DE4C5B0(pvVar19,2,0);
  pvVar19 = (void *)ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline
                              ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                               (MethodInfo *)0x0);
  uVar32 = *(undefined8 *)(local_28 + 0x430);
  NullCheck(pvVar19);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar19,uVar32,0);
  ScrollView_SetScrollViewMode_m5BC275E1D403BA55A5BE8CCF75B99B3908D3EB2F(local_28,local_2c,0);
  pAVar24 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar9);
  Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859
            (pAVar24,(Il2CppObject *)local_28,
             *(long *)
              PTR_ScrollView_U3C_ctorU3Eb__126_0_m844B22421C98FA0BA8D12B4102BFD5673A141EBC_RuntimeMethod_var_048dcc50
             ,(MethodInfo *)0x0);
  pvVar19 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar16);
  Scroller__ctor_mEB206478D6D9767E66699F8E673F71562889B841(0,pvVar19,pAVar24,0,0);
  NullCheck(pvVar19);
  VisualElement_set_viewDataKey_m6318C0A701350678B0DBF34939C3BC392134B092
            (pvVar19,*(undefined8 *)
                      PTR__stringLiteral08A52D1E2B01E1E8CDCF0DDBA9114968D6A3734B_048dcc60,0);
  *(void **)(local_28 + 0x420) = pvVar19;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x420),pvVar19);
  pvVar19 = (void *)ScrollView_get_horizontalScroller_mF0791CC587E399B708C24885E89301F2633712E8_inline
                              ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                               (MethodInfo *)0x0);
  lVar17 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
  uVar32 = *(undefined8 *)(lVar17 + 0x60);
  NullCheck(pvVar19);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar19,uVar32,0);
  pvVar19 = (void *)ScrollView_get_horizontalScroller_mF0791CC587E399B708C24885E89301F2633712E8_inline
                              ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                               (MethodInfo *)0x0);
  NullCheck(pvVar19);
  pvVar19 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(pvVar19,0);
  uVar32 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030
                     (1,*(MethodInfo **)puVar6);
  NullCheck(pvVar19);
  InterfaceActionInvoker1<StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69>::Invoke
            (0x12,*(undefined8 *)puVar3,pvVar19,uVar32);
  local_40 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                       (local_28,(MethodInfo *)0x0);
  uVar32 = ScrollView_get_horizontalScroller_mF0791CC587E399B708C24885E89301F2633712E8_inline
                     ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                      (MethodInfo *)0x0);
  Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648(&local_40,uVar32,0);
  pAVar24 = (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar9);
  Action_1__ctor_m770CD2F8BB65F2EDA5128CA2F96D71C35B23E859
            (pAVar24,(Il2CppObject *)local_28,
             *(long *)
              PTR_ScrollView_U3C_ctorU3Eb__126_1_m750946F1FBB5A2FDB1E7D823798C172C60AFC247_RuntimeMethod_var_048dcc58
             ,(MethodInfo *)0x0);
  pvVar19 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar16);
  uVar34 = 0x4f000000;
  Scroller__ctor_mEB206478D6D9767E66699F8E673F71562889B841(0,pvVar19,pAVar24,1,0);
  NullCheck(pvVar19);
  VisualElement_set_viewDataKey_m6318C0A701350678B0DBF34939C3BC392134B092
            (pvVar19,*(undefined8 *)
                      PTR__stringLiteral930C9B5460E622D0D0ADE329473176096F9EFF92_048dcc78,0);
  *(void **)(local_28 + 0x428) = pvVar19;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x428),pvVar19);
  pSVar25 = (Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *)
            ScrollView_get_horizontalScroller_mF0791CC587E399B708C24885E89301F2633712E8_inline
                      ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                       (MethodInfo *)0x0);
  NullCheck(pSVar25);
  pBVar26 = (BaseSlider_1_t72796443D058B00401238104911BE7078A9FD0BA *)
            Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                      (pSVar25,(MethodInfo *)0x0);
  NullCheck(pBVar26);
  pCVar27 = (ClampedDragger_1_t18A937D027747303C3811CCC9FAD288366DF8DC3 *)
            BaseSlider_1_get_clampedDragger_mB4CE620901AE51393FD475311C2BC49EB8799162_inline
                      (pBVar26,*(MethodInfo **)puVar11);
  pAVar28 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(pAVar28,local_28,*(undefined8 *)puVar15,0);
  NullCheck(pCVar27);
  ClampedDragger_1_add_draggingEnded_mCE611636A9115DE70CA5E5C1C1D6CB7C24D54D29
            (pCVar27,pAVar28,*(MethodInfo **)puVar12);
  pSVar25 = (Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *)
            ScrollView_get_verticalScroller_mDCBC1E09B2754C31BF917818CB07E5F36EC0D13A_inline
                      ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                       (MethodInfo *)0x0);
  NullCheck(pSVar25);
  pBVar26 = (BaseSlider_1_t72796443D058B00401238104911BE7078A9FD0BA *)
            Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                      (pSVar25,(MethodInfo *)0x0);
  NullCheck(pBVar26);
  pCVar27 = (ClampedDragger_1_t18A937D027747303C3811CCC9FAD288366DF8DC3 *)
            BaseSlider_1_get_clampedDragger_mB4CE620901AE51393FD475311C2BC49EB8799162_inline
                      (pBVar26,*(MethodInfo **)puVar11);
  pAVar28 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(pAVar28,local_28,*(undefined8 *)puVar15,0);
  NullCheck(pCVar27);
  ClampedDragger_1_add_draggingEnded_mCE611636A9115DE70CA5E5C1C1D6CB7C24D54D29
            (pCVar27,pAVar28,*(MethodInfo **)puVar12);
  pSVar25 = (Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *)
            ScrollView_get_horizontalScroller_mF0791CC587E399B708C24885E89301F2633712E8_inline
                      ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                       (MethodInfo *)0x0);
  NullCheck(pSVar25);
  pvVar19 = (void *)Scroller_get_lowButton_mEE24B127F9A49A61F4EF44FCE89A9ECD41D816F6_inline
                              (pSVar25,(MethodInfo *)0x0);
  uVar32 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(uVar32,local_28,*(undefined8 *)puVar15,0);
  NullCheck(pvVar19);
  RepeatButton_AddAction_m1011B0AEAA1F3A3C5AB0CFEE5C8ED26DF4EC1CD4(pvVar19,uVar32,0);
  pSVar25 = (Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *)
            ScrollView_get_horizontalScroller_mF0791CC587E399B708C24885E89301F2633712E8_inline
                      ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                       (MethodInfo *)0x0);
  NullCheck(pSVar25);
  pvVar19 = (void *)Scroller_get_highButton_mD0FA16C85E115A3789F517B6FFA594F0F47DA8D5_inline
                              (pSVar25,(MethodInfo *)0x0);
  uVar32 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(uVar32,local_28,*(undefined8 *)puVar15,0);
  NullCheck(pvVar19);
  RepeatButton_AddAction_m1011B0AEAA1F3A3C5AB0CFEE5C8ED26DF4EC1CD4(pvVar19,uVar32,0);
  pSVar25 = (Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *)
            ScrollView_get_verticalScroller_mDCBC1E09B2754C31BF917818CB07E5F36EC0D13A_inline
                      ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                       (MethodInfo *)0x0);
  NullCheck(pSVar25);
  pvVar19 = (void *)Scroller_get_lowButton_mEE24B127F9A49A61F4EF44FCE89A9ECD41D816F6_inline
                              (pSVar25,(MethodInfo *)0x0);
  uVar32 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(uVar32,local_28,*(undefined8 *)puVar15,0);
  NullCheck(pvVar19);
  RepeatButton_AddAction_m1011B0AEAA1F3A3C5AB0CFEE5C8ED26DF4EC1CD4(pvVar19,uVar32,0);
  pSVar25 = (Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *)
            ScrollView_get_verticalScroller_mDCBC1E09B2754C31BF917818CB07E5F36EC0D13A_inline
                      ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                       (MethodInfo *)0x0);
  NullCheck(pSVar25);
  pvVar19 = (void *)Scroller_get_highButton_mD0FA16C85E115A3789F517B6FFA594F0F47DA8D5_inline
                              (pSVar25,(MethodInfo *)0x0);
  uVar32 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(uVar32,local_28,*(undefined8 *)puVar15,0);
  NullCheck(pvVar19);
  RepeatButton_AddAction_m1011B0AEAA1F3A3C5AB0CFEE5C8ED26DF4EC1CD4(pvVar19,uVar32,0);
  pvVar19 = (void *)ScrollView_get_verticalScroller_mDCBC1E09B2754C31BF917818CB07E5F36EC0D13A_inline
                              ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                               (MethodInfo *)0x0);
  lVar17 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar8);
  uVar32 = *(undefined8 *)(lVar17 + 0x68);
  NullCheck(pvVar19);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar19,uVar32,0);
  pvVar19 = (void *)ScrollView_get_verticalScroller_mDCBC1E09B2754C31BF917818CB07E5F36EC0D13A_inline
                              ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                               (MethodInfo *)0x0);
  NullCheck(pvVar19);
  pvVar19 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(pvVar19,0);
  uVar32 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030
                     (1,*(MethodInfo **)puVar6);
  NullCheck(pvVar19);
  InterfaceActionInvoker1<StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69>::Invoke
            (0x12,*(undefined8 *)puVar3,pvVar19,uVar32);
  pvVar19 = *(void **)(local_28 + 0x438);
  uVar32 = ScrollView_get_verticalScroller_mDCBC1E09B2754C31BF917818CB07E5F36EC0D13A_inline
                     ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                      (MethodInfo *)0x0);
  NullCheck(pvVar19);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar19,uVar32,0);
  ScrollView_set_touchScrollBehavior_m8B07B5B16849AF0AB95ADB2E9C7DD623D5C39C6D(local_28,2,0);
  pEVar29 = (EventCallback_1_tAC159BB180600020449B0A18CFE8806035ECCAE6 *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        PTR_EventCallback_1_tAC159BB180600020449B0A18CFE8806035ECCAE6_il2cpp_TypeInfo_var_048dcc10
                      );
  EventCallback_1__ctor_m551154C2865969A58DBDF7C2F1932E9D794E94B0
            (pEVar29,(Il2CppObject *)local_28,
             *(long *)
              PTR_ScrollView_OnScrollWheel_mE7FD49102D1BDB3EF2F56F3DE361D7EDD49E5861_RuntimeMethod_var_048dcc40
             ,(MethodInfo *)0x0);
  CallbackEventHandler_RegisterCallback_TisWheelEvent_tDD5DB3A6F5F6FDB59AD7FF27491502FF18B9775E_m1E951977C03DE5B5F7D3958D0AFF341FAA5A62C6
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)local_28,pEVar29,0,
             *(MethodInfo **)
              PTR_CallbackEventHandler_RegisterCallback_TisWheelEvent_tDD5DB3A6F5F6FDB59AD7FF27491502FF18B9775E_m1E951977C03DE5B5F7D3958D0AFF341FAA5A62C6_RuntimeMethod_var_048dcc08
            );
  pCVar20 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
            ScrollView_get_verticalScroller_mDCBC1E09B2754C31BF917818CB07E5F36EC0D13A_inline
                      ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                       (MethodInfo *)0x0);
  pEVar21 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar5);
  EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
            (pEVar21,(Il2CppObject *)local_28,*(long *)puVar14,(MethodInfo *)0x0);
  NullCheck(pCVar20);
  CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
            (pCVar20,pEVar21,0,*(MethodInfo **)puVar4);
  pCVar20 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
            ScrollView_get_horizontalScroller_mF0791CC587E399B708C24885E89301F2633712E8_inline
                      ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                       (MethodInfo *)0x0);
  pEVar21 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar5);
  EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
            (pEVar21,(Il2CppObject *)local_28,*(long *)puVar14,(MethodInfo *)0x0);
  NullCheck(pCVar20);
  CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
            (pCVar20,pEVar21,0,*(MethodInfo **)puVar4);
  ScrollView_set_horizontalPageSize_m2A991FA4A09C32976E4BDF3E7AA80A96BA6EF13C(local_28,0);
  ScrollView_set_verticalPageSize_mAD46F0FC081AC3CFD67D546F1C195F7C7AB21E3C(0xbf800000,local_28,0);
  pSVar25 = (Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *)
            ScrollView_get_horizontalScroller_mF0791CC587E399B708C24885E89301F2633712E8_inline
                      ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                       (MethodInfo *)0x0);
  NullCheck(pSVar25);
  pBVar26 = (BaseSlider_1_t72796443D058B00401238104911BE7078A9FD0BA *)
            Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                      (pSVar25,(MethodInfo *)0x0);
  NullCheck(pBVar26);
  pCVar20 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
            BaseSlider_1_get_dragElement_m032210456947E23683D74C074CC01AFE210169EB_inline
                      (pBVar26,*(MethodInfo **)puVar10);
  pEVar21 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar5);
  EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
            (pEVar21,(Il2CppObject *)local_28,
             *(long *)
              PTR_ScrollView_OnHorizontalScrollDragElementChanged_m4589C0A6D501A5BC24DF78DF329D1DA1EAF789B3_RuntimeMethod_var_048dcc28
             ,(MethodInfo *)0x0);
  NullCheck(pCVar20);
  CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
            (pCVar20,pEVar21,0,*(MethodInfo **)puVar4);
  pSVar25 = (Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *)
            ScrollView_get_verticalScroller_mDCBC1E09B2754C31BF917818CB07E5F36EC0D13A_inline
                      ((ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)local_28,
                       (MethodInfo *)0x0);
  NullCheck(pSVar25);
  pBVar26 = (BaseSlider_1_t72796443D058B00401238104911BE7078A9FD0BA *)
            Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                      (pSVar25,(MethodInfo *)0x0);
  NullCheck(pBVar26);
  pCVar20 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
            BaseSlider_1_get_dragElement_m032210456947E23683D74C074CC01AFE210169EB_inline
                      (pBVar26,*(MethodInfo **)puVar10);
  pEVar21 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar5);
  EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
            (pEVar21,(Il2CppObject *)local_28,
             *(long *)
              PTR_ScrollView_OnVerticalScrollDragElementChanged_m666A41D3FAD03B79440E8FE337827D8ED303D7F5_RuntimeMethod_var_048dcc48
             ,(MethodInfo *)0x0);
  NullCheck(pCVar20);
  CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
            (pCVar20,pEVar21,0,*(MethodInfo **)puVar4);
  pEVar30 = (EventCallback_1_t7C6768AD962B0B50514570724A38E07DA18FB1FA *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
  EventCallback_1__ctor_mF3F9B006713A25FE54BB4DD7611B7A56ABDC7596
            (pEVar30,(Il2CppObject *)local_28,
             *(long *)
              PTR_ScrollView_OnPointerMove_mB5B8F154C72F4EC477AE2D02DC8F2885763E4AEF_RuntimeMethod_var_048dcc30
             ,(MethodInfo *)0x0);
  *(EventCallback_1_t7C6768AD962B0B50514570724A38E07DA18FB1FA **)(local_28 + 0x4a0) = pEVar30;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x4a0),pEVar30);
  pEVar31 = (EventCallback_1_tE2BCC4FFB156A2716749F7BDD0036A743B039913 *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_Oculus_Interaction_PointerInteractable<RayInteractor,_RayInteractable>_Start__
                      );
  EventCallback_1__ctor_mE64B79996B25171AA5DCBD2AFBB71A1A8C38B6E5
            (pEVar31,(Il2CppObject *)local_28,
             *(long *)
              PTR_ScrollView_OnPointerUp_mDF05E48E63E261A0A2ABC852038529F1DB9BEE71_RuntimeMethod_var_048dcc38
             ,(MethodInfo *)0x0);
  *(EventCallback_1_tE2BCC4FFB156A2716749F7BDD0036A743B039913 **)(local_28 + 0x4a8) = pEVar31;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x4a8),pEVar31);
  uVar33 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline((MethodInfo *)0x0);
  ScrollView_set_scrollOffset_m220AFAC09FA2E3784CBB76EB53D6AD71C056A1D5(uVar33,uVar34,local_28,0);
  return;
}


