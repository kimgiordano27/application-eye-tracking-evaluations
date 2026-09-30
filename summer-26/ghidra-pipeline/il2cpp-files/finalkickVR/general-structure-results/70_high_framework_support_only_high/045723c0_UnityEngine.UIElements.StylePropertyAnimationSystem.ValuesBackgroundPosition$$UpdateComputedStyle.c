/*
FUNCTION_NAME: UnityEngine.UIElements.StylePropertyAnimationSystem.ValuesBackgroundPosition$$UpdateComputedStyle
ENTRY_POINT: 045723c0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_11
*/


void UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundPosition__UpdateComputedStyle
               (ulong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  RepeatButton_t2CF59798FF30EF6DB8030E2D93CD346E38DDF981 *pRVar6;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong *in_stack_00000030;
  undefined4 uStack0000000000000044;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
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
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000030);
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
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(*(undefined8 *)(unaff_x29 + -8));
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000030);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
  *(undefined8 *)(unaff_x29 + -0x30) = *puVar2;
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (*(undefined8 *)(unaff_x29 + -8),*(undefined8 *)(unaff_x29 + -0x30),0);
  *(undefined4 *)(unaff_x29 + -0x34) = *(undefined4 *)(unaff_x29 + -0xc);
  *(undefined4 *)(unaff_x29 + -0x38) = *(undefined4 *)(unaff_x29 + -0x10);
  *(undefined4 *)(unaff_x29 + -0x3c) = *(undefined4 *)(unaff_x29 + -0x1c);
  uVar3 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      PTR_ScrollerSlider_t9E2F7FDBE4107F3A9E7294597D336BEA67DEB59C_il2cpp_TypeInfo_var_048dce30
                    );
  *(undefined8 *)(unaff_x29 + -0x48) = uVar3;
  ScrollerSlider__ctor_m4E0CD275544346C5AF03B70F38CBCFA8BB3ABF98
            (*(undefined4 *)(unaff_x29 + -0x34),*(undefined4 *)(unaff_x29 + -0x38),0x41a00000,
             *(undefined8 *)(unaff_x29 + -0x48),*(undefined4 *)(unaff_x29 + -0x3c),0);
  *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)(unaff_x29 + -0x48);
  NullCheck(*(void **)(unaff_x29 + -0x50));
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (*(undefined8 *)(unaff_x29 + -0x50),
             *(undefined8 *)PTR__stringLiteralBE0A31A6C4D3B145E7B1FA25CFACE595B88306DC_048dce50,0);
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x50);
  NullCheck(*(void **)(unaff_x29 + -0x58));
  VisualElement_set_viewDataKey_m6318C0A701350678B0DBF34939C3BC392134B092
            (*(undefined8 *)(unaff_x29 + -0x58),
             *(undefined8 *)PTR__stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F_048d5c38,0);
  Scroller_set_slider_mF52370E08E3B811C4504C67D83E349BABA11E9E9_inline
            (*(Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 **)(unaff_x29 + -8),
             *(Slider_t5891706383A14955E3FAD68A79829F3234681652 **)(unaff_x29 + -0x58),
             (MethodInfo *)0x0);
  uVar3 = Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                    (*(Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 **)(unaff_x29 + -8),
                     (MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x60) = uVar3;
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(lVar4 + 0x18);
  NullCheck(*(void **)(unaff_x29 + -0x60));
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (*(undefined8 *)(unaff_x29 + -0x60),*(undefined8 *)(unaff_x29 + -0x68),0);
  uVar3 = Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                    (*(Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 **)(unaff_x29 + -8),
                     (MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x70) = uVar3;
  uVar3 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Item__
                    );
  *(undefined8 *)(unaff_x29 + -0x78) = uVar3;
  EventCallback_1__ctor_mAD3EFBC1BCE6A3EF049456DF6224208C2DE3E970
            (*(EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A **)(unaff_x29 + -0x78),
             *(Il2CppObject **)(unaff_x29 + -8),
             *(long *)
              PTR_Scroller_OnSliderValueChange_m7A415D7C561E8DB2113D080827BFAB46B487A214_RuntimeMethod_var_048dce38
             ,(MethodInfo *)0x0);
  bVar1 = INotifyValueChangedExtensions_RegisterValueChangedCallback_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1C52E6941E310431B149196465705C38CFF0A9E9
                    (*(Il2CppObject **)(unaff_x29 + -0x70),
                     *(EventCallback_1_t4FC683FD40564304A8A351F88D0698DAF61F8A8A **)
                      (unaff_x29 + -0x78),
                     *(MethodInfo **)
                      Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Length__
                    );
  *(byte *)(unaff_x29 + -0x79) = bVar1 & 1;
  uVar3 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000020);
  *(undefined8 *)(unaff_x29 + -0x88) = uVar3;
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (*(undefined8 *)(unaff_x29 + -0x88),*(undefined8 *)(unaff_x29 + -8),
             *(undefined8 *)
              PTR_Scroller_ScrollPageUp_mD73E8F66251191D809F27656225B521AC341AF92_RuntimeMethod_var_048dce48
             ,0);
  uVar3 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000028);
  *(undefined8 *)(unaff_x29 + -0x90) = uVar3;
  RepeatButton__ctor_m8F591936C14586F53751543513E5F440D0F92C0E
            (*(undefined8 *)(unaff_x29 + -0x90),*(undefined8 *)(unaff_x29 + -0x88),0xfa,0x1e,0);
  pRVar6 = *(RepeatButton_t2CF59798FF30EF6DB8030E2D93CD346E38DDF981 **)(unaff_x29 + -0x90);
  NullCheck(pRVar6);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (pRVar6,*(undefined8 *)
                     PTR__stringLiteralDA0880A6DD2B8C069E0AAC34003F6EFCC086907A_048dce60,0);
  Scroller_set_lowButton_m3AF2B077BCE5EB59161BF34EA832F80BB10584C8_inline
            (*(Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 **)(unaff_x29 + -8),pRVar6,
             (MethodInfo *)0x0);
  pvVar5 = (void *)Scroller_get_lowButton_mEE24B127F9A49A61F4EF44FCE89A9ECD41D816F6_inline
                             (*(Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 **)
                               (unaff_x29 + -8),(MethodInfo *)0x0);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
  uVar3 = *(undefined8 *)(lVar4 + 0x20);
  NullCheck(pvVar5);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar5,uVar3,0);
  uVar3 = Scroller_get_lowButton_mEE24B127F9A49A61F4EF44FCE89A9ECD41D816F6_inline
                    (*(Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 **)(unaff_x29 + -8),
                     (MethodInfo *)0x0);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F
            (*(undefined8 *)(unaff_x29 + -8),uVar3,0);
  uVar3 = il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000020);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar3,*(undefined8 *)(unaff_x29 + -8),
             *(undefined8 *)
              PTR_Scroller_ScrollPageDown_mF0129BF306030AEF6F00F17A8DFD0AF360581569_RuntimeMethod_var_048dce40
             ,0);
  pRVar6 = (RepeatButton_t2CF59798FF30EF6DB8030E2D93CD346E38DDF981 *)
           il2cpp_codegen_object_new((Il2CppClass *)*in_stack_00000028);
  RepeatButton__ctor_m8F591936C14586F53751543513E5F440D0F92C0E(pRVar6,uVar3,0xfa,0x1e,0);
  NullCheck(pRVar6);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (pRVar6,*(undefined8 *)
                     PTR__stringLiteralC9564DB70D7AFD271BA99559FE6295FCA88E9958_048dce58,0);
  Scroller_set_highButton_m2271E7225756F12AEDA40F18E49B3604B181ED8D_inline
            (*(Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 **)(unaff_x29 + -8),pRVar6,
             (MethodInfo *)0x0);
  pvVar5 = (void *)Scroller_get_highButton_mD0FA16C85E115A3789F517B6FFA594F0F47DA8D5_inline
                             (*(Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 **)
                               (unaff_x29 + -8),(MethodInfo *)0x0);
  lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000030);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  NullCheck(pvVar5);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar5,uVar3,0);
  uVar3 = Scroller_get_highButton_mD0FA16C85E115A3789F517B6FFA594F0F47DA8D5_inline
                    (*(Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 **)(unaff_x29 + -8),
                     (MethodInfo *)0x0);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F
            (*(undefined8 *)(unaff_x29 + -8),uVar3,0);
  uVar3 = Scroller_get_slider_mE18FB3CD0B7E2817E27C245324A129C70E1FE27C_inline
                    (*(Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8 **)(unaff_x29 + -8),
                     (MethodInfo *)0x0);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F
            (*(undefined8 *)(unaff_x29 + -8),uVar3,0);
  uStack0000000000000044 = *(undefined4 *)(unaff_x29 + -0x1c);
  Scroller_set_direction_mDFD47FC6B3FC6AD05239E443FB8B7E13A6A76412
            (*(undefined8 *)(unaff_x29 + -8),uStack0000000000000044,0);
  pvVar5 = *(void **)(unaff_x29 + -0x18);
  *(void **)(*(long *)(unaff_x29 + -8) + 0x3c8) = pvVar5;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x3c8),pvVar5);
  return;
}


