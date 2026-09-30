/*
FUNCTION_NAME: BasePopupField_2__ctor_m4B197545E0ECA05FA3E6700ED495F08B110771DD_gshared
ENTRY_POINT: 022942b4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_10;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void BasePopupField_2__ctor_m4B197545E0ECA05FA3E6700ED495F08B110771DD_gshared
               (BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *param_1,String_t *param_2,
               long param_3)

{
  Il2CppClass *pIVar1;
  MethodInfo *pMVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  PopupTextElement_t6E5BB59D987F4D2B6989AFA53F762ADE9A822B3C *pPVar6;
  FieldInfo *pFVar7;
  undefined8 uVar8;
  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A *pLVar9;
  EventCallback_1_tBC1DA4FF1E26FC091E77AD11B6F780C5D237AF2C *pEVar10;
  EventCallback_1_t7C6768AD962B0B50514570724A38E07DA18FB1FA *pEVar11;
  EventCallback_1_tDFA2360CDCE536A2DE7FA625C0295865A67D40B4 *pEVar12;
  undefined8 uVar13;
  Il2CppObject *pIVar14;
  undefined8 local_40;
  
  if ((BasePopupField_2__ctor_m4B197545E0ECA05FA3E6700ED495F08B110771DD_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_Init__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PostDispatch__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_button__)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    BasePopupField_2__ctor_m4B197545E0ECA05FA3E6700ED495F08B110771DD_gshared::
    s_Il2CppMethodInitialized = 1;
  }
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),8);
  il2cpp_codegen_runtime_class_init_inline(pIVar1);
  pMVar2 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),7);
  BaseField_1__ctor_m69F5F9BA9F0968A515082361B195B40C42FC02E3
            (param_1,param_2,(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0,pMVar2);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),9);
  il2cpp_codegen_runtime_class_init_inline(pIVar1);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),9);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(pIVar1);
  uVar13 = *puVar3;
  NullCheck(param_1);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(param_1,uVar13,0);
  NullCheck(param_1);
  pMVar2 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),10);
  pvVar4 = (void *)BaseField_1_get_labelElement_m6931D331B2E0F91AE24A1898F7859E4CB5A6C099_inline
                             (param_1,pMVar2);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),9);
  lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
  uVar13 = *(undefined8 *)(lVar5 + 0x18);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar13,0);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0xb);
  pPVar6 = (PopupTextElement_t6E5BB59D987F4D2B6989AFA53F762ADE9A822B3C *)
           il2cpp_codegen_object_new(pIVar1);
  pMVar2 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0xc);
  PopupTextElement__ctor_m6688B3A98E9B7A65789457365B655E892944A34D(pPVar6,pMVar2);
  NullCheck(pPVar6);
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pPVar6,1,0);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
  uVar13 = il2cpp_rgctx_field(pIVar1,1);
  il2cpp_codegen_write_instance_field_data<TextElement_tD56C5044CCC5552285DC8A9950CC60448C80FEE0*>
            (param_1,uVar13,pPVar6);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
  pFVar7 = (FieldInfo *)il2cpp_rgctx_field(pIVar1,1);
  puVar3 = (undefined8 *)il2cpp_codegen_get_instance_field_data_pointer(param_1,pFVar7);
  pvVar4 = (void *)*puVar3;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),9);
  lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
  uVar13 = *(undefined8 *)(lVar5 + 8);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar13,0);
  NullCheck(param_1);
  pMVar2 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0xd);
  pvVar4 = (void *)BaseField_1_get_visualInput_m3C49DD38969693017690AFA0966E91B53330661F
                             (param_1,pMVar2);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),9);
  lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
  uVar13 = *(undefined8 *)(lVar5 + 0x20);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar13,0);
  NullCheck(param_1);
  pMVar2 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0xd);
  pvVar4 = (void *)BaseField_1_get_visualInput_m3C49DD38969693017690AFA0966E91B53330661F
                             (param_1,pMVar2);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
  pFVar7 = (FieldInfo *)il2cpp_rgctx_field(pIVar1,1);
  puVar3 = (undefined8 *)il2cpp_codegen_get_instance_field_data_pointer(param_1,pFVar7);
  uVar13 = *puVar3;
  NullCheck(pvVar4);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar4,uVar13,0);
  uVar13 = il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(uVar13,0);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
  uVar8 = il2cpp_rgctx_field(pIVar1,2);
  il2cpp_codegen_write_instance_field_data<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>
            (param_1,uVar8,uVar13);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
  pFVar7 = (FieldInfo *)il2cpp_rgctx_field(pIVar1,2);
  puVar3 = (undefined8 *)il2cpp_codegen_get_instance_field_data_pointer(param_1,pFVar7);
  pvVar4 = (void *)*puVar3;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),9);
  lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
  uVar13 = *(undefined8 *)(lVar5 + 0x10);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar13,0);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
  pFVar7 = (FieldInfo *)il2cpp_rgctx_field(pIVar1,2);
  puVar3 = (undefined8 *)il2cpp_codegen_get_instance_field_data_pointer(param_1,pFVar7);
  pvVar4 = (void *)*puVar3;
  NullCheck(pvVar4);
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar4,1,0);
  NullCheck(param_1);
  pMVar2 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0xd);
  pvVar4 = (void *)BaseField_1_get_visualInput_m3C49DD38969693017690AFA0966E91B53330661F
                             (param_1,pMVar2);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
  pFVar7 = (FieldInfo *)il2cpp_rgctx_field(pIVar1,2);
  puVar3 = (undefined8 *)il2cpp_codegen_get_instance_field_data_pointer(param_1,pFVar7);
  uVar13 = *puVar3;
  NullCheck(pvVar4);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar4,uVar13,0);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),1);
  pLVar9 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A *)il2cpp_codegen_object_new(pIVar1);
  pMVar2 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0xe);
  List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374(pLVar9,pMVar2);
  VirtualActionInvoker1<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>::Invoke
            (0x79,(Il2CppObject *)param_1,pLVar9);
  pEVar10 = (EventCallback_1_tBC1DA4FF1E26FC091E77AD11B6F780C5D237AF2C *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_Init__);
  lVar5 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0x10);
  EventCallback_1__ctor_mCDF2316FE391D783EF33C433EB59E5DF474C5398
            (pEVar10,(Il2CppObject *)param_1,lVar5,(MethodInfo *)0x0);
  NullCheck(param_1);
  CallbackEventHandler_RegisterCallback_TisPointerDownEvent_tABAAD1BACBB98156D6BCCED51E11883EAFE03A51_mB50EABDE414D7C266411468DE2497738C902B820
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)param_1,pEVar10,0,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
  pEVar11 = (EventCallback_1_t7C6768AD962B0B50514570724A38E07DA18FB1FA *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
  lVar5 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0x11);
  EventCallback_1__ctor_mF3F9B006713A25FE54BB4DD7611B7A56ABDC7596
            (pEVar11,(Il2CppObject *)param_1,lVar5,(MethodInfo *)0x0);
  NullCheck(param_1);
  CallbackEventHandler_RegisterCallback_TisPointerMoveEvent_t2C1E2E20A07034638F48C3EB94B8520549D770C3_mA3E722BB63A92FD6550289D5155483E408E4795B
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)param_1,pEVar11,0,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0x13);
  il2cpp_codegen_runtime_class_init_inline(pIVar1);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0x13);
  lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
  local_40 = *(EventCallback_1_tED92C39D3D539693A36E8EB8A1D9EE15E2CBEB17 **)(lVar5 + 8);
  if (local_40 == (EventCallback_1_tED92C39D3D539693A36E8EB8A1D9EE15E2CBEB17 *)0x0) {
    pIVar1 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0x13);
    il2cpp_codegen_runtime_class_init_inline(pIVar1);
    pIVar1 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0x13);
    puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(pIVar1);
    pIVar14 = (Il2CppObject *)*puVar3;
    local_40 = (EventCallback_1_tED92C39D3D539693A36E8EB8A1D9EE15E2CBEB17 *)
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_button__
                         );
    lVar5 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0x14);
    EventCallback_1__ctor_m709C5400BF973916ABE27FC11BD3B70EA36C5CE1
              (local_40,pIVar14,lVar5,(MethodInfo *)0x0);
    pIVar1 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0x13);
    lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
    *(EventCallback_1_tED92C39D3D539693A36E8EB8A1D9EE15E2CBEB17 **)(lVar5 + 8) = local_40;
    pIVar1 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0x13);
    lVar5 = il2cpp_codegen_static_fields_for(pIVar1);
    Il2CppCodeGenWriteBarrier((void **)(lVar5 + 8),local_40);
  }
  NullCheck(param_1);
  CallbackEventHandler_RegisterCallback_TisMouseDownEvent_tD798610B9C34C7D1CA93C66034A67D330D4A83CD_mAC1E05B609A9515A8FA74F4B59DE2B04920BCC24
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)param_1,local_40,0,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
  pEVar12 = (EventCallback_1_tDFA2360CDCE536A2DE7FA625C0295865A67D40B4 *)
            il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PostDispatch__
                      );
  lVar5 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0x15);
  EventCallback_1__ctor_m4E7961405589FC27108EC6DF77536A6F71787A8A
            (pEVar12,(Il2CppObject *)param_1,lVar5,(MethodInfo *)0x0);
  NullCheck(param_1);
  CallbackEventHandler_RegisterCallback_TisNavigationSubmitEvent_t193DCBDB6CBC8FF9F0A545B48962188505665BB1_mE3AEBEE052ADD6289D44E50FBAB102AF11F8F443
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)param_1,pEVar12,0,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
  return;
}


