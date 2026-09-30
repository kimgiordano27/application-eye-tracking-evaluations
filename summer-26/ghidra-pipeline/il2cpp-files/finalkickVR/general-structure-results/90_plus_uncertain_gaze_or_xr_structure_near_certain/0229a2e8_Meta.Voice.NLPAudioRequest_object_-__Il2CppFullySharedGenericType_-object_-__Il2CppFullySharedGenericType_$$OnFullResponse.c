/*
FUNCTION_NAME: Meta.Voice.NLPAudioRequest<object,-__Il2CppFullySharedGenericType,-object,-__Il2CppFullySharedGenericType>$$OnFullResponse
ENTRY_POINT: 0229a2e8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_Voice_NLPAudioRequest<object,___Il2CppFullySharedGenericType,_object,___Il2CppFullySharedGenericType>__OnFullResponse
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  MethodInfo *pMVar3;
  undefined8 uVar4;
  Il2CppClass *pIVar5;
  long lVar6;
  ulong uVar7;
  Il2CppRGCTXData *pIVar8;
  CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *pCVar9;
  undefined8 uVar10;
  EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *pEVar11;
  undefined8 *unaff_x19;
  long unaff_x29;
  
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_1 + 0x20) + 0xc0),0x1a);
  uVar4 = BaseField_1_get_visualInput_m3C49DD38969693017690AFA0966E91B53330661F
                    ((BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *)unaff_x19[0x4e],pMVar3
                    );
  iVar1 = *(int *)((long)unaff_x19 + 0x27c);
  *(undefined8 *)(unaff_x29 + -0x90) = uVar4;
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                              (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),iVar1);
  lVar6 = il2cpp_codegen_static_fields_for(pIVar5);
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(lVar6 + 0x10);
  NullCheck(*(void **)(unaff_x29 + -0x90));
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (*(undefined8 *)(unaff_x29 + -0x90),*(undefined8 *)(unaff_x29 + -0x98),unaff_x19[0x50]);
  *(undefined4 *)(unaff_x29 + -0x9c) = *(undefined4 *)(unaff_x29 + -0x2c);
  unaff_x19[0x52] = *(undefined8 *)(unaff_x29 + -0x10);
  *(undefined4 *)((long)unaff_x19 + 0x28c) = *(undefined4 *)(unaff_x29 + -0x9c);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x1b);
  BaseSlider_1_set_direction_m2652FE7EB8E544F07495992F18DD55B389CDC029
            ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x52],
             *(int *)((long)unaff_x19 + 0x28c),pMVar3);
  *(undefined4 *)(unaff_x29 + -0xa0) = *(undefined4 *)(unaff_x29 + -0x30);
  VirtualActionInvoker1<float>::Invoke
            (0x7c,*(Il2CppObject **)(unaff_x29 + -0x10),*(float *)(unaff_x29 + -0xa0));
  unaff_x19[0x54] = *(undefined8 *)(unaff_x29 + -0x48);
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                      *(int *)((long)unaff_x19 + 0x29c));
  uVar7 = il2cpp_codegen_class_is_value_type(pIVar5);
  if ((uVar7 & 1) == 0) {
    unaff_x19[0x46] = unaff_x29 + -0x20;
  }
  else {
    unaff_x19[0x46] = *(undefined8 *)(unaff_x29 + -0x20);
  }
  il2cpp_codegen_memcpy
            ((void *)unaff_x19[0x54],(void *)unaff_x19[0x46],(ulong)*(uint *)(unaff_x29 + -0x3c));
  unaff_x19[0x45] = *(undefined8 *)(unaff_x29 + -0x10);
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),1
                     );
  uVar7 = il2cpp_codegen_class_is_value_type(pIVar5);
  if ((uVar7 & 1) == 0) {
    unaff_x19[0x44] = **(undefined8 **)(unaff_x29 + -0x48);
  }
  else {
    uVar4 = il2cpp_codegen_memcpy
                      (*(void **)(unaff_x29 + -0x50),*(void **)(unaff_x29 + -0x48),
                       (ulong)*(uint *)(unaff_x29 + -0x3c));
    unaff_x19[0x44] = uVar4;
  }
  unaff_x19[0x42] = unaff_x19[0x44];
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x1d);
  BaseSlider_1_set_lowValue_m006FEBAAA1D97EFCEB7A253ADD60A743C6584772
            ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x45],
             (void *)unaff_x19[0x42],pMVar3);
  unaff_x19[0x43] = *(undefined8 *)(unaff_x29 + -0x58);
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),1
                     );
  uVar7 = il2cpp_codegen_class_is_value_type(pIVar5);
  if ((uVar7 & 1) == 0) {
    unaff_x19[0x41] = unaff_x29 + -0x28;
  }
  else {
    unaff_x19[0x41] = *(undefined8 *)(unaff_x29 + -0x28);
  }
  il2cpp_codegen_memcpy
            ((void *)unaff_x19[0x43],(void *)unaff_x19[0x41],(ulong)*(uint *)(unaff_x29 + -0x3c));
  unaff_x19[0x40] = *(undefined8 *)(unaff_x29 + -0x10);
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init
                     (*(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),1
                     );
  uVar7 = il2cpp_codegen_class_is_value_type(pIVar5);
  if ((uVar7 & 1) == 0) {
    unaff_x19[0x3f] = **(undefined8 **)(unaff_x29 + -0x58);
  }
  else {
    uVar4 = il2cpp_codegen_memcpy
                      (*(void **)(unaff_x29 + -0x60),*(void **)(unaff_x29 + -0x58),
                       (ulong)*(uint *)(unaff_x29 + -0x3c));
    unaff_x19[0x3f] = uVar4;
  }
  *unaff_x19 = unaff_x19[0x3f];
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x1e);
  BaseSlider_1_set_highValue_m2B98CCB9B3B35244718227A3D529CF2D62DAD058
            ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x40],
             (void *)*unaff_x19,pMVar3);
  NullCheck(*(void **)(unaff_x29 + -0x10));
  uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
  *(undefined4 *)((long)unaff_x19 + 0xb4) = 1;
  unaff_x19[0x3e] = 0;
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(uVar4);
  puVar2 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  unaff_x19[0x15] = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  uVar4 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  uVar10 = unaff_x19[0x3e];
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar4;
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D
            (*(undefined8 *)(unaff_x29 + -0xa8),uVar10);
  *(undefined8 *)(unaff_x29 + -0xb0) = *(undefined8 *)(unaff_x29 + -0xa8);
  NullCheck(*(void **)(unaff_x29 + -0xb0));
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (*(undefined8 *)(unaff_x29 + -0xb0),
             *(undefined8 *)
              Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_remove_WhenPointerEventRaised__
             ,unaff_x19[0x3e]);
  unaff_x19[2] = *(undefined8 *)(unaff_x29 + -0x10);
  unaff_x19[1] = *(undefined8 *)(unaff_x29 + -0xb0);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x1f);
  BaseSlider_1_set_dragContainer_m0DD3722333681AE90B24BE069727216B079A9B83_inline
            ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[2],
             (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)unaff_x19[1],pMVar3);
  unaff_x19[3] = *(undefined8 *)(unaff_x29 + -0x10);
  pIVar8 = *(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
  *(undefined4 *)((long)unaff_x19 + 0x184) = 0x20;
  pMVar3 = (MethodInfo *)il2cpp_rgctx_method(pIVar8,0x20);
  uVar4 = BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[3],pMVar3);
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar4;
  pIVar8 = *(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
  *(undefined4 *)((long)unaff_x19 + 0x104) = 0x16;
  pIVar5 = (Il2CppClass *)il2cpp_rgctx_data(pIVar8,0x16);
  lVar6 = il2cpp_codegen_static_fields_for(pIVar5);
  *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(lVar6 + 0x28);
  NullCheck(*(void **)(unaff_x29 + -0xb8));
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (*(undefined8 *)(unaff_x29 + -0xb8),*(undefined8 *)(unaff_x29 + -0xc0),unaff_x19[0x3e]);
  unaff_x19[4] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                               *(int *)((long)unaff_x19 + 0x184));
  uVar4 = BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[4],pMVar3);
  *(undefined8 *)(unaff_x29 + -200) = uVar4;
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__;
  unaff_x19[0x1a] = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__;
  uVar4 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar4;
  unaff_x19[6] = *(undefined8 *)(unaff_x29 + -0xd0);
  unaff_x19[5] = *(undefined8 *)(unaff_x29 + -0x10);
  pIVar8 = *(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
  *(undefined4 *)((long)unaff_x19 + 0xdc) = 0x21;
  lVar6 = il2cpp_rgctx_method(pIVar8,0x21);
  EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
            ((EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)unaff_x19[6],
             (Il2CppObject *)unaff_x19[5],lVar6,(MethodInfo *)unaff_x19[0x3e]);
  NullCheck(*(void **)(unaff_x29 + -200));
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__;
  pCVar9 = *(CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 **)(unaff_x29 + -200);
  pEVar11 = *(EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 **)(unaff_x29 + -0xd0);
  unaff_x19[0x1e] = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__;
  pMVar3 = *(MethodInfo **)puVar2;
  *(undefined4 *)((long)unaff_x19 + 0x1bc) = 0;
  CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
            (pCVar9,pEVar11,0,pMVar3);
  NullCheck(*(void **)(unaff_x29 + -0x10));
  unaff_x19[7] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x1a);
  uVar4 = BaseField_1_get_visualInput_m3C49DD38969693017690AFA0966E91B53330661F
                    ((BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *)unaff_x19[7],pMVar3);
  iVar1 = *(int *)((long)unaff_x19 + 0x184);
  *(undefined8 *)(unaff_x29 + -0xd8) = uVar4;
  unaff_x19[8] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),iVar1);
  uVar4 = BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[8],pMVar3);
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar4;
  NullCheck(*(void **)(unaff_x29 + -0xd8));
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F
            (*(undefined8 *)(unaff_x29 + -0xd8),*(undefined8 *)(unaff_x29 + -0xe0),unaff_x19[0x3e]);
  uVar4 = il2cpp_codegen_object_new(*(Il2CppClass **)unaff_x19[0x15]);
  uVar10 = unaff_x19[0x3e];
  *(undefined8 *)(unaff_x29 + -0xe8) = uVar4;
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D
            (*(undefined8 *)(unaff_x29 + -0xe8),uVar10);
  *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0xe8);
  NullCheck(*(void **)(unaff_x29 + -0xf0));
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (*(undefined8 *)(unaff_x29 + -0xf0),
             *(undefined8 *)
              Method_Oculus_Interaction_PointerInteractable<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>__ctor__
             ,unaff_x19[0x3e]);
  *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x29 + -0xf0);
  NullCheck(*(void **)(unaff_x29 + -0xf8));
  VisualElement_set_usageHints_mD317223075C8C708C1DB66CF90E81C5F9DE4C5B0
            (*(undefined8 *)(unaff_x29 + -0xf8),8,unaff_x19[0x3e]);
  unaff_x19[10] = *(undefined8 *)(unaff_x29 + -0x10);
  unaff_x19[9] = *(undefined8 *)(unaff_x29 + -0xf8);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x22);
  BaseSlider_1_set_trackElement_mBA9AF3EACA73C10AD02324056C04778978539545_inline
            ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[10],
             (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)unaff_x19[9],pMVar3);
  unaff_x19[0xb] = *(undefined8 *)(unaff_x29 + -0x10);
  pIVar8 = *(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
  *(undefined4 *)((long)unaff_x19 + 0x6c) = 0x23;
  pMVar3 = (MethodInfo *)il2cpp_rgctx_method(pIVar8,0x23);
  uVar4 = BaseSlider_1_get_trackElement_mE54F1716397F79773786BE2C6E0CAE3AF2FFD3FC_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0xb],pMVar3
                    );
  iVar1 = *(int *)((long)unaff_x19 + 0x104);
  *(undefined8 *)(unaff_x29 + -0x100) = uVar4;
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                              (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),iVar1);
  lVar6 = il2cpp_codegen_static_fields_for(pIVar5);
  unaff_x19[0x73] = *(undefined8 *)(lVar6 + 0x30);
  NullCheck(*(void **)(unaff_x29 + -0x100));
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (*(undefined8 *)(unaff_x29 + -0x100),unaff_x19[0x73],unaff_x19[0x3e]);
  unaff_x19[0xc] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                               *(int *)((long)unaff_x19 + 0x184));
  uVar4 = BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0xc],pMVar3
                    );
  unaff_x19[0x72] = uVar4;
  unaff_x19[0xe] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                               *(int *)((long)unaff_x19 + 0x6c));
  uVar4 = BaseSlider_1_get_trackElement_mE54F1716397F79773786BE2C6E0CAE3AF2FFD3FC_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0xe],pMVar3
                    );
  unaff_x19[0x71] = uVar4;
  NullCheck((void *)unaff_x19[0x72]);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F
            (unaff_x19[0x72],unaff_x19[0x71],unaff_x19[0x3e]);
  uVar4 = il2cpp_codegen_object_new(*(Il2CppClass **)unaff_x19[0x15]);
  unaff_x19[0x70] = uVar4;
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(unaff_x19[0x70],unaff_x19[0x3e]);
  unaff_x19[0x6f] = unaff_x19[0x70];
  NullCheck((void *)unaff_x19[0x6f]);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (unaff_x19[0x6f],
             *(undefined8 *)
              Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_add_WhenPointerEventRaised__
             ,unaff_x19[0x3e]);
  unaff_x19[0x10] = *(undefined8 *)(unaff_x29 + -0x10);
  unaff_x19[0xf] = unaff_x19[0x6f];
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x24);
  BaseSlider_1_set_dragBorderElement_m96F851BFF940904402E2EF4CFC77F1CE1ECC1FAA_inline
            ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x10],
             (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)unaff_x19[0xf],pMVar3);
  unaff_x19[0x11] = *(undefined8 *)(unaff_x29 + -0x10);
  pIVar8 = *(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
  *(undefined4 *)((long)unaff_x19 + 0x9c) = 0x25;
  pMVar3 = (MethodInfo *)il2cpp_rgctx_method(pIVar8,0x25);
  uVar4 = BaseSlider_1_get_dragBorderElement_m39041CF5BB090006F850CE3D165FE0358E7F9BD0_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x11],
                     pMVar3);
  unaff_x19[0x6e] = uVar4;
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                              (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                             *(int *)((long)unaff_x19 + 0x104));
  lVar6 = il2cpp_codegen_static_fields_for(pIVar5);
  unaff_x19[0x6d] = *(undefined8 *)(lVar6 + 0x40);
  NullCheck((void *)unaff_x19[0x6e]);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (unaff_x19[0x6e],unaff_x19[0x6d],unaff_x19[0x3e]);
  unaff_x19[0x12] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                               *(int *)((long)unaff_x19 + 0x184));
  uVar4 = BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x12],
                     pMVar3);
  unaff_x19[0x6c] = uVar4;
  unaff_x19[0x14] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                               *(int *)((long)unaff_x19 + 0x9c));
  uVar4 = BaseSlider_1_get_dragBorderElement_m39041CF5BB090006F850CE3D165FE0358E7F9BD0_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x14],
                     pMVar3);
  unaff_x19[0x6b] = uVar4;
  NullCheck((void *)unaff_x19[0x6c]);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F
            (unaff_x19[0x6c],unaff_x19[0x6b],unaff_x19[0x3e]);
  uVar4 = il2cpp_codegen_object_new(*(Il2CppClass **)unaff_x19[0x15]);
  unaff_x19[0x6a] = uVar4;
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(unaff_x19[0x6a],unaff_x19[0x3e]);
  unaff_x19[0x69] = unaff_x19[0x6a];
  NullCheck((void *)unaff_x19[0x69]);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (unaff_x19[0x69],
             *(undefined8 *)
              Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_get_PointableElement__
             ,unaff_x19[0x3e]);
  unaff_x19[0x68] = unaff_x19[0x69];
  NullCheck((void *)unaff_x19[0x68]);
  VisualElement_set_usageHints_mD317223075C8C708C1DB66CF90E81C5F9DE4C5B0
            (unaff_x19[0x68],*(undefined4 *)((long)unaff_x19 + 0xb4),unaff_x19[0x3e]);
  unaff_x19[0x18] = *(undefined8 *)(unaff_x29 + -0x10);
  unaff_x19[0x17] = unaff_x19[0x68];
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x26);
  BaseSlider_1_set_dragElement_m7C1EAC49E11A2BFC78CACAB3829FE68D541DBC27_inline
            ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x18],
             (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)unaff_x19[0x17],pMVar3);
  unaff_x19[0x19] = *(undefined8 *)(unaff_x29 + -0x10);
  pIVar8 = *(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
  *(undefined4 *)((long)unaff_x19 + 0x114) = 0x27;
  pMVar3 = (MethodInfo *)il2cpp_rgctx_method(pIVar8,0x27);
  uVar4 = BaseSlider_1_get_dragElement_m075CD1029F96F95EE53EC3C01891323774E7E9B0_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x19],
                     pMVar3);
  unaff_x19[0x67] = uVar4;
  uVar4 = il2cpp_codegen_object_new(*(Il2CppClass **)unaff_x19[0x1a]);
  unaff_x19[0x66] = uVar4;
  unaff_x19[0x1d] = unaff_x19[0x66];
  unaff_x19[0x1c] = *(undefined8 *)(unaff_x29 + -0x10);
  lVar6 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                               (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                              *(int *)((long)unaff_x19 + 0xdc));
  EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
            ((EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)unaff_x19[0x1d],
             (Il2CppObject *)unaff_x19[0x1c],lVar6,(MethodInfo *)unaff_x19[0x3e]);
  NullCheck((void *)unaff_x19[0x67]);
  CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)unaff_x19[0x67],
             (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)unaff_x19[0x66],
             *(int *)((long)unaff_x19 + 0x1bc),*(MethodInfo **)unaff_x19[0x1e]);
  unaff_x19[0x1f] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                               *(int *)((long)unaff_x19 + 0x114));
  uVar4 = BaseSlider_1_get_dragElement_m075CD1029F96F95EE53EC3C01891323774E7E9B0_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x1f],
                     pMVar3);
  unaff_x19[0x65] = uVar4;
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                              (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                             *(int *)((long)unaff_x19 + 0x104));
  lVar6 = il2cpp_codegen_static_fields_for(pIVar5);
  unaff_x19[100] = *(undefined8 *)(lVar6 + 0x38);
  NullCheck((void *)unaff_x19[0x65]);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (unaff_x19[0x65],unaff_x19[100],unaff_x19[0x3e]);
  unaff_x19[0x21] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                               *(int *)((long)unaff_x19 + 0x184));
  uVar4 = BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x21],
                     pMVar3);
  unaff_x19[99] = uVar4;
  unaff_x19[0x23] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                               *(int *)((long)unaff_x19 + 0x114));
  uVar4 = BaseSlider_1_get_dragElement_m075CD1029F96F95EE53EC3C01891323774E7E9B0_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x23],
                     pMVar3);
  unaff_x19[0x62] = uVar4;
  NullCheck((void *)unaff_x19[99]);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F
            (unaff_x19[99],unaff_x19[0x62],unaff_x19[0x3e]);
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
  ;
  unaff_x19[0x26] =
       Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
  ;
  uVar4 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
  unaff_x19[0x61] = uVar4;
  unaff_x19[0x25] = unaff_x19[0x61];
  unaff_x19[0x24] = *(undefined8 *)(unaff_x29 + -0x10);
  uVar4 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                               (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x28);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (unaff_x19[0x25],unaff_x19[0x24],uVar4,unaff_x19[0x3e]);
  uVar4 = il2cpp_codegen_object_new(*(Il2CppClass **)unaff_x19[0x26]);
  unaff_x19[0x60] = uVar4;
  unaff_x19[0x28] = unaff_x19[0x60];
  unaff_x19[0x27] = *(undefined8 *)(unaff_x29 + -0x10);
  uVar4 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                               (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x29);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (unaff_x19[0x28],unaff_x19[0x27],uVar4,unaff_x19[0x3e]);
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                              (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0xe);
  uVar4 = il2cpp_codegen_object_new(pIVar5);
  unaff_x19[0x5f] = uVar4;
  unaff_x19[0x2c] = unaff_x19[0x5f];
  unaff_x19[0x29] = *(undefined8 *)(unaff_x29 + -0x10);
  unaff_x19[0x2a] = unaff_x19[0x61];
  unaff_x19[0x2b] = unaff_x19[0x60];
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x2a);
  ClampedDragger_1__ctor_mB6000EF6E44DD4ED0BBF02BAAD1EC9EF50FF73B8
            ((ClampedDragger_1_t973E90F6E05885A35FDE10C29188A3EE27255F64 *)unaff_x19[0x2c],
             (BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x29],
             (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)unaff_x19[0x2a],
             (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07 *)unaff_x19[0x2b],pMVar3);
  unaff_x19[0x2e] = *(undefined8 *)(unaff_x29 + -0x10);
  unaff_x19[0x2d] = unaff_x19[0x5f];
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x2b);
  BaseSlider_1_set_clampedDragger_m9216151AD4BBEEB4BA6B00F05FFB7F04179DEA49_inline
            ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x2e],
             (ClampedDragger_1_t973E90F6E05885A35FDE10C29188A3EE27255F64 *)unaff_x19[0x2d],pMVar3);
  unaff_x19[0x2f] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                               *(int *)((long)unaff_x19 + 0x184));
  uVar4 = BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x2f],
                     pMVar3);
  unaff_x19[0x5e] = uVar4;
  NullCheck((void *)unaff_x19[0x5e]);
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0
            (unaff_x19[0x5e],*(undefined4 *)((long)unaff_x19 + 0x1bc),unaff_x19[0x3e]);
  unaff_x19[0x31] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                               *(int *)((long)unaff_x19 + 0x184));
  uVar4 = BaseSlider_1_get_dragContainer_m1CDAB9C9C3EF4D946382536CD4890E3CFB57E38C_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x31],
                     pMVar3);
  unaff_x19[0x5d] = uVar4;
  unaff_x19[0x32] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x2c);
  uVar4 = BaseSlider_1_get_clampedDragger_m81DB5D2B7DB0C58573FB05D6A6B79C14A1C4D529_inline
                    ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x32],
                     pMVar3);
  unaff_x19[0x5c] = uVar4;
  VisualElementExtensions_AddManipulator_m3579CA75D8F76245DC3B7C9F5FCB9B769D69E27D
            (unaff_x19[0x5d],unaff_x19[0x5c],unaff_x19[0x3e]);
  uVar4 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_Awake__
                    );
  unaff_x19[0x5b] = uVar4;
  unaff_x19[0x34] = unaff_x19[0x5b];
  unaff_x19[0x33] = *(undefined8 *)(unaff_x29 + -0x10);
  lVar6 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                               (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x2d);
  EventCallback_1__ctor_m9784A8620A12F32140DB764C2DAC0CD4AE9A91CF
            ((EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C *)unaff_x19[0x34],
             (Il2CppObject *)unaff_x19[0x33],lVar6,(MethodInfo *)unaff_x19[0x3e]);
  NullCheck(*(void **)(unaff_x29 + -0x10));
  CallbackEventHandler_RegisterCallback_TisKeyDownEvent_t1971978254C8EE65CDDD992AF86B44E442CDD18C_m046581E97BE6F7CECB84314566EB164BC15C9A66
            (*(CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 **)(unaff_x29 + -0x10)
             ,(EventCallback_1_tF213A6C7DEAE29A9970B73DB52E8778214E5CD9C *)unaff_x19[0x5b],
             *(int *)((long)unaff_x19 + 0x1bc),
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerUpLinkTagEvent>_Init__);
  uVar4 = il2cpp_codegen_object_new
                    (*(Il2CppClass **)
                      Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_Start__
                    );
  unaff_x19[0x5a] = uVar4;
  unaff_x19[0x36] = unaff_x19[0x5a];
  unaff_x19[0x35] = *(undefined8 *)(unaff_x29 + -0x10);
  lVar6 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                               (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x2e);
  EventCallback_1__ctor_m3614A719AC839708929B273F4E694C78B0825BF2
            ((EventCallback_1_tF39C691B05308835A836D33741E4656809B44C3C *)unaff_x19[0x36],
             (Il2CppObject *)unaff_x19[0x35],lVar6,(MethodInfo *)unaff_x19[0x3e]);
  NullCheck(*(void **)(unaff_x29 + -0x10));
  CallbackEventHandler_RegisterCallback_TisNavigationMoveEvent_t70F4AAAE0B5287449430A2A7A2DC78A2AF1364DF_m7E875C04D0CAF6D09162404E056A982D2361AA56
            (*(CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 **)(unaff_x29 + -0x10)
             ,(EventCallback_1_tF39C691B05308835A836D33741E4656809B44C3C *)unaff_x19[0x5a],
             *(int *)((long)unaff_x19 + 0x1bc),
             *(MethodInfo **)
              Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>__ctor__
            );
  unaff_x19[0x38] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0xd);
  BaseSlider_1_UpdateTextFieldVisibility_m7D9697F95D96F22D07E12DBE998ECC3A322AA2C7
            ((BaseSlider_1_t316E0BEC7EEA7DB85F0A813E83E76B1CF896EFD9 *)unaff_x19[0x38],pMVar3);
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                              (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x2f);
  uVar4 = il2cpp_codegen_object_new(pIVar5);
  unaff_x19[0x59] = uVar4;
  unaff_x19[0x3a] = unaff_x19[0x59];
  unaff_x19[0x39] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x30);
  FieldMouseDragger_1__ctor_m2C8A088664476F3D34682BF71DD9B74187D284F8
            ((FieldMouseDragger_1_tC567589469BCED065F4E66A16363416F0C030B9F *)unaff_x19[0x3a],
             (Il2CppObject *)unaff_x19[0x39],pMVar3);
  *(undefined8 *)(unaff_x29 + -0x68) = unaff_x19[0x59];
  unaff_x19[0x58] = *(undefined8 *)(unaff_x29 + -0x68);
  NullCheck(*(void **)(unaff_x29 + -0x10));
  unaff_x19[0x3b] = *(undefined8 *)(unaff_x29 + -0x10);
  pIVar8 = *(Il2CppRGCTXData **)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
  *(undefined4 *)((long)unaff_x19 + 0x1e4) = 0x19;
  pMVar3 = (MethodInfo *)il2cpp_rgctx_method(pIVar8,0x19);
  uVar4 = BaseField_1_get_labelElement_m6931D331B2E0F91AE24A1898F7859E4CB5A6C099_inline
                    ((BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *)unaff_x19[0x3b],pMVar3
                    );
  unaff_x19[0x57] = uVar4;
  NullCheck((void *)unaff_x19[0x58]);
  BaseFieldMouseDragger_SetDragZone_mA2AD28007BAB5E6A75EEC40C3FBA69A42AA5A0DF
            (unaff_x19[0x58],unaff_x19[0x57],unaff_x19[0x3e]);
  NullCheck(*(void **)(unaff_x29 + -0x10));
  unaff_x19[0x3d] = *(undefined8 *)(unaff_x29 + -0x10);
  pMVar3 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)
                                (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),
                               *(int *)((long)unaff_x19 + 0x1e4));
  uVar4 = BaseField_1_get_labelElement_m6931D331B2E0F91AE24A1898F7859E4CB5A6C099_inline
                    ((BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *)unaff_x19[0x3d],pMVar3
                    );
  unaff_x19[0x56] = uVar4;
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)
                              (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0),0x17);
  lVar6 = il2cpp_codegen_static_fields_for(pIVar5);
  unaff_x19[0x55] = *(undefined8 *)(lVar6 + 0x20);
  NullCheck((void *)unaff_x19[0x56]);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
            (unaff_x19[0x56],unaff_x19[0x55],unaff_x19[0x3e]);
  lVar6 = tpidr_el0;
  lVar6 = *(long *)(lVar6 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar6);
}


