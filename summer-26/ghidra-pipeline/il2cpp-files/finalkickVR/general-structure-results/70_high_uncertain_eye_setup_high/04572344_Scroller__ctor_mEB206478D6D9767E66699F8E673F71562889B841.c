/*
FUNCTION_NAME: Scroller__ctor_mEB206478D6D9767E66699F8E673F71562889B841
ENTRY_POINT: 04572344
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Scroller__ctor_mEB206478D6D9767E66699F8E673F71562889B841
               (undefined4 param_1,undefined4 param_2,
               Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 *param_3,void *param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  Slider_t5891706383A14955E3FAD68A79829F3234681652 *pSVar5;
  void *pvVar6;
  long lVar7;
  Il2CppObject *pIVar8;
  EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A *pEVar9;
  RepeatButton_t2CF59798FF30EF6DB8030E2D93CD346E38DDF981 *pRVar10;
  undefined8 uVar11;
  
  puVar3 = PTR_Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8_il2cpp_TypeInfo_var_048dcc00;
  puVar2 = PTR_RepeatButton_t2CF59798FF30EF6DB8030E2D93CD346E38DDF981_il2cpp_TypeInfo_var_048dcb78;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
  ;
  if ((Scroller__ctor_mEB206478D6D9767E66699F8E673F71562889B841::s_Il2CppMethodInitialized & 1) == 0
     ) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Length__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ScrollerSlider_t9E2F7FDBE4107F3A9E7294597D336BEA67DEB59C_il2cpp_TypeInfo_var_048dce30
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Scroller_OnSliderValueChange_m7A415D7C561E8DB2113D080827BFAB46B487A214_RuntimeMethod_var_048dce38
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Scroller_ScrollPageDown_mF0129BF306030AEF6F00F17A8DFD0AF360581569_RuntimeMethod_var_048dce40
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Scroller_ScrollPageUp_mD73E8F66251191D809F27656225B521AC341AF92_RuntimeMethod_var_048dce48
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F_048d5c38);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteralBE0A31A6C4D3B145E7B1FA25CFACE595B88306DC_048dce50);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteralC9564DB70D7AFD271BA99559FE6295FCA88E9958_048dce58);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteralDA0880A6DD2B8C069E0AAC34003F6EFCC086907A_048dce60);
    Scroller__ctor_mEB206478D6D9767E66699F8E673F71562889B841::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(param_3);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(param_3,*puVar4,0);
  pSVar5 = (Slider_t5891706383A14955E3FAD68A79829F3234681652 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       PTR_ScrollerSlider_t9E2F7FDBE4107F3A9E7294597D336BEA67DEB59C_il2cpp_TypeInfo_var_048dce30
                     );
  ScrollerSlider__ctor_m4E0CD275544346C5AF03B70F38CBCFA8BB3ABF98
            (param_1,param_2,0x41a00000,pSVar5,param_5,0);
  NullCheck(pSVar5);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (pSVar5,*(undefined8 *)
                     PTR__stringLiteralBE0A31A6C4D3B145E7B1FA25CFACE595B88306DC_048dce50,0);
  NullCheck(pSVar5);
  VisualElement_set_viewDataKey_m6318C0A701350678B0DBF34939C3BC392134B092
            (pSVar5,*(undefined8 *)
                     PTR__stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F_048d5c38,0);
  Scroller_set_slider_mF52370E08E3B811C4504C67D83E349BABA11E9E9_inline
            (param_3,pSVar5,(MethodInfo *)0x0);
  pvVar6 = (void *)Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                             (param_3,(MethodInfo *)0x0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  uVar11 = *(undefined8 *)(lVar7 + 0x18);
  NullCheck(pvVar6);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar6,uVar11,0);
  pIVar8 = (Il2CppObject *)
           Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                     (param_3,(MethodInfo *)0x0);
  pEVar9 = (EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Item__
                     );
  EventCallback_1__ctor_mAD3EFBC1BCE6A3EF049456DF6224208C2DE3E970
            (pEVar9,(Il2CppObject *)param_3,
             *(long *)
              PTR_Scroller_OnSliderValueChange_m7A415D7C561E8DB2113D080827BFAB46B487A214_RuntimeMethod_var_048dce38
             ,(MethodInfo *)0x0);
  INotifyValueChangedExtensions_RegisterValueChangedCallback_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1C52E6941E310431B149196465705C38CFF0A9E9
            (pIVar8,pEVar9,
             *(MethodInfo **)
              Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Length__
            );
  uVar11 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar11,param_3,
             *(undefined8 *)
              PTR_Scroller_ScrollPageUp_mD73E8F66251191D809F27656225B521AC341AF92_RuntimeMethod_var_048dce48
             ,0);
  pRVar10 = (RepeatButton_t2CF59798FF30EF6DB8030E2D93CD346E38DDF981 *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  RepeatButton__ctor_m8F591936C14586F53751543513E5F440D0F92C0E(pRVar10,uVar11,0xfa,0x1e,0);
  NullCheck(pRVar10);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (pRVar10,*(undefined8 *)
                      PTR__stringLiteralDA0880A6DD2B8C069E0AAC34003F6EFCC086907A_048dce60,0);
  Scroller_set_lowButton_m3AF2B077BCE5EB59161BF34EA832F80BB10584C8_inline
            (param_3,pRVar10,(MethodInfo *)0x0);
  pvVar6 = (void *)Scroller_get_lowButton_mEE24B127F9A49A61F4EF44FCE89A9ECD41D816F6_inline
                             (param_3,(MethodInfo *)0x0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  uVar11 = *(undefined8 *)(lVar7 + 0x20);
  NullCheck(pvVar6);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar6,uVar11,0);
  uVar11 = Scroller_get_lowButton_mEE24B127F9A49A61F4EF44FCE89A9ECD41D816F6_inline
                     (param_3,(MethodInfo *)0x0);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(param_3,uVar11,0);
  uVar11 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar11,param_3,
             *(undefined8 *)
              PTR_Scroller_ScrollPageDown_mF0129BF306030AEF6F00F17A8DFD0AF360581569_RuntimeMethod_var_048dce40
             ,0);
  pRVar10 = (RepeatButton_t2CF59798FF30EF6DB8030E2D93CD346E38DDF981 *)
            il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  RepeatButton__ctor_m8F591936C14586F53751543513E5F440D0F92C0E(pRVar10,uVar11,0xfa,0x1e,0);
  NullCheck(pRVar10);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (pRVar10,*(undefined8 *)
                      PTR__stringLiteralC9564DB70D7AFD271BA99559FE6295FCA88E9958_048dce58,0);
  Scroller_set_highButton_m2271E7225756F12AEDA40F18E49B3604B181ED8D_inline
            (param_3,pRVar10,(MethodInfo *)0x0);
  pvVar6 = (void *)Scroller_get_highButton_mD0FA16C85E115A3789F517B6FFA594F0F47DA8D5_inline
                             (param_3,(MethodInfo *)0x0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  uVar11 = *(undefined8 *)(lVar7 + 0x28);
  NullCheck(pvVar6);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar6,uVar11,0);
  uVar11 = Scroller_get_highButton_mD0FA16C85E115A3789F517B6FFA594F0F47DA8D5_inline
                     (param_3,(MethodInfo *)0x0);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(param_3,uVar11,0);
  uVar11 = Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                     (param_3,(MethodInfo *)0x0);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(param_3,uVar11,0);
  Scroller_set_direction_mDFD47FC6B3FC6AD05239E443FB8B7E13A6A76412(param_3,param_5,0);
  *(void **)(param_3 + 0x3c8) = param_4;
  Il2CppCodeGenWriteBarrier((void **)(param_3 + 0x3c8),param_4);
  return;
}


