/*
FUNCTION_NAME: BaseCompositeField_3__ctor_mAD7B7CFE6A1FF6E0FCE6F50D25E6FEFE647B8B47_gshared
ENTRY_POINT: 0228a784
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void BaseCompositeField_3__ctor_mAD7B7CFE6A1FF6E0FCE6F50D25E6FEFE647B8B47_gshared
               (BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *param_1,String_t *param_2,
               int param_3,long param_4)

{
  Il2CppObject *pIVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Il2CppClass *pIVar5;
  MethodInfo *pMVar6;
  Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *pFVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long lVar10;
  List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D *pLVar11;
  U3CU3Ec__DisplayClass24_0_t2CE218D23FFFCC32A872E8F8EFEB4B81D182E6C7 *pUVar12;
  Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0 *pFVar13;
  EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6 *pEVar14;
  FieldInfo *pFVar15;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar16;
  undefined8 uVar17;
  String_t *pSVar18;
  Il2CppObject *pIVar19;
  BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *pBVar20;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  int local_8c;
  undefined8 local_80;
  byte local_72;
  byte local_71;
  Il2CppObject *local_70;
  int local_68;
  byte local_62;
  byte local_61;
  void *local_60;
  int local_54;
  undefined1 local_4f;
  undefined1 local_4e;
  byte local_4d;
  int local_4c;
  void *local_48;
  long local_40;
  int local_34;
  String_t *local_30;
  BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA *local_28;
  
  local_40 = param_4;
  local_34 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((BaseCompositeField_3__ctor_mAD7B7CFE6A1FF6E0FCE6F50D25E6FEFE647B8B47_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    BaseCompositeField_3__ctor_mAD7B7CFE6A1FF6E0FCE6F50D25E6FEFE647B8B47_gshared::
    s_Il2CppMethodInitialized = 1;
  }
  pSVar18 = local_30;
  local_48 = (void *)0x0;
  local_4c = 0;
  local_4d = 0;
  local_4e = 0;
  local_4f = 0;
  local_54 = 0;
  local_60 = (void *)0x0;
  local_61 = 0;
  local_62 = 0;
  local_68 = 0;
  local_70 = (Il2CppObject *)0x0;
  local_71 = 0;
  local_72 = 0;
  local_80 = 0;
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),2);
  il2cpp_codegen_runtime_class_init_inline(pIVar5);
  pBVar20 = local_28;
  pMVar6 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),3);
  BaseField_1__ctor_m69F5F9BA9F0968A515082361B195B40C42FC02E3
            (pBVar20,pSVar18,(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0,pMVar6);
  NullCheck(local_28);
  Focusable_set_delegatesFocus_mC691C4199C88BEF0C55A7F7FD2C6ADDD00402D6F(local_28,0,0);
  NullCheck(local_28);
  pBVar20 = local_28;
  pMVar6 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),4);
  pFVar7 = (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)
           BaseField_1_get_visualInput_m3C49DD38969693017690AFA0966E91B53330661F(pBVar20,pMVar6);
  NullCheck(pFVar7);
  Focusable_set_focusable_m85547438A92A464B90AB91ACBD458677A0BA41CB_inline
            (pFVar7,false,(MethodInfo *)0x0);
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),1);
  il2cpp_codegen_runtime_class_init_inline(pIVar5);
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),1);
  puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for(pIVar5);
  uVar17 = *puVar8;
  NullCheck(local_28);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_28,uVar17,0);
  NullCheck(local_28);
  pBVar20 = local_28;
  pMVar6 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),5);
  pvVar9 = (void *)BaseField_1_get_labelElement_m6931D331B2E0F91AE24A1898F7859E4CB5A6C099_inline
                             (pBVar20,pMVar6);
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),1);
  lVar10 = il2cpp_codegen_static_fields_for(pIVar5);
  uVar17 = *(undefined8 *)(lVar10 + 8);
  NullCheck(pvVar9);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar9,uVar17,0);
  NullCheck(local_28);
  pBVar20 = local_28;
  pMVar6 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),4);
  pvVar9 = (void *)BaseField_1_get_visualInput_m3C49DD38969693017690AFA0966E91B53330661F
                             (pBVar20,pMVar6);
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),1);
  lVar10 = il2cpp_codegen_static_fields_for(pIVar5);
  uVar17 = *(undefined8 *)(lVar10 + 0x10);
  NullCheck(pvVar9);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar9,uVar17,0);
  pBVar20 = local_28;
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0);
  uVar17 = il2cpp_rgctx_field(pIVar5,1);
  il2cpp_codegen_write_instance_field_data<bool>(pBVar20,uVar17,1);
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),6);
  pLVar11 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D *)il2cpp_codegen_object_new(pIVar5);
  pMVar6 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),7);
  List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(pLVar11,pMVar6);
  pBVar20 = local_28;
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0);
  uVar17 = il2cpp_rgctx_field(pIVar5,0);
  il2cpp_codegen_write_instance_field_data<List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*>
            (pBVar20,uVar17,pLVar11);
  pvVar9 = (void *)VirtualFuncInvoker0<FieldDescriptionU5BU5D_t0B94B26613FBCCCEBA66EFAAF4BB0189741D7A0F*>
                   ::Invoke(0x76,(Il2CppObject *)local_28);
  local_4c = 1;
  local_4e = 1 < local_34;
  local_48 = pvVar9;
  if ((bool)local_4e) {
    NullCheck(pvVar9);
    local_4c = 0;
    if (local_34 != 0) {
      local_4c = (int)*(undefined8 *)((long)pvVar9 + 0x18) / local_34;
    }
  }
  local_4d = 0;
  local_4f = 1 < local_4c;
  if ((bool)local_4f) {
    local_4d = 1;
    pIVar5 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),1);
    il2cpp_codegen_runtime_class_init_inline(pIVar5);
    pIVar5 = (Il2CppClass *)
             il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),1);
    lVar10 = il2cpp_codegen_static_fields_for(pIVar5);
    uVar17 = *(undefined8 *)(lVar10 + 0x20);
    NullCheck(local_28);
    VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_28,uVar17,0);
  }
  pBVar20 = local_28;
  pIVar5 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0);
  uVar17 = il2cpp_rgctx_field(pIVar5,3);
  il2cpp_codegen_write_instance_field_data<int>(pBVar20,uVar17,0);
  for (local_54 = 0; pBVar20 = local_28, local_54 < local_4c;
      local_54 = il2cpp_codegen_add<int,int>(local_54,1)) {
    local_60 = (void *)0x0;
    local_62 = local_4d & 1;
    if (local_62 != 0) {
      pvVar9 = (void *)il2cpp_codegen_object_new
                                 (*(Il2CppClass **)
                                   Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__)
      ;
      VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar9);
      local_60 = pvVar9;
      pIVar5 = (Il2CppClass *)
               il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),1);
      il2cpp_codegen_runtime_class_init_inline(pIVar5);
      pIVar5 = (Il2CppClass *)
               il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),1);
      lVar10 = il2cpp_codegen_static_fields_for(pIVar5);
      uVar17 = *(undefined8 *)(lVar10 + 0x28);
      NullCheck(pvVar9);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar9,uVar17,0);
    }
    local_61 = 1;
    local_68 = il2cpp_codegen_multiply<int,int>(local_54,local_34);
    while( true ) {
      iVar3 = local_34;
      iVar4 = local_68;
      iVar2 = il2cpp_codegen_multiply<int,int>(local_54,local_34);
      iVar3 = il2cpp_codegen_add<int,int>(iVar2,iVar3);
      if (iVar3 <= iVar4) break;
      pIVar5 = (Il2CppClass *)
               il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),10);
      pUVar12 = (U3CU3Ec__DisplayClass24_0_t2CE218D23FFFCC32A872E8F8EFEB4B81D182E6C7 *)
                il2cpp_codegen_object_new(pIVar5);
      pMVar6 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0xb);
      U3CU3Ec__DisplayClass24_0__ctor_mE8E76ECB7EFF7650BE149A5AC90E952FD623F388(pUVar12,pMVar6);
      local_70 = (Il2CppObject *)pUVar12;
      NullCheck(pUVar12);
      *(BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA **)(pUVar12 + 0x38) = local_28;
      Il2CppCodeGenWriteBarrier((void **)(pUVar12 + 0x38),local_28);
      pvVar9 = local_48;
      pIVar19 = local_70;
      NullCheck(local_48);
      FieldDescriptionU5BU5D_t0B94B26613FBCCCEBA66EFAAF4BB0189741D7A0F::GetAt((ulong)pvVar9);
      NullCheck(pIVar19);
      *(undefined8 *)(pIVar19 + 0x18) = uStack_168;
      *(undefined8 *)(pIVar19 + 0x10) = local_170;
      *(undefined8 *)(pIVar19 + 0x28) = uStack_158;
      *(undefined8 *)(pIVar19 + 0x20) = local_160;
      Il2CppCodeGenWriteBarrier((void **)(pIVar19 + 0x10),(void *)0x0);
      pIVar19 = local_70;
      pMVar6 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0xd);
      pvVar9 = (void *)Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138
                                 (pMVar6);
      pIVar1 = local_70;
      NullCheck(local_70);
      uVar17 = *(undefined8 *)(pIVar1 + 0x18);
      NullCheck(pvVar9);
      VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(pvVar9,uVar17,0);
      NullCheck(pIVar19);
      *(void **)(pIVar19 + 0x30) = pvVar9;
      Il2CppCodeGenWriteBarrier((void **)(pIVar19 + 0x30),pvVar9);
      pIVar19 = local_70;
      NullCheck(local_70);
      pvVar9 = *(void **)(pIVar19 + 0x30);
      NullCheck(pvVar9);
      Focusable_set_delegatesFocus_mC691C4199C88BEF0C55A7F7FD2C6ADDD00402D6F(pvVar9,1,0);
      pIVar19 = local_70;
      NullCheck(local_70);
      pvVar9 = *(void **)(pIVar19 + 0x30);
      pIVar5 = (Il2CppClass *)
               il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),1);
      il2cpp_codegen_runtime_class_init_inline(pIVar5);
      pIVar5 = (Il2CppClass *)
               il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),1);
      lVar10 = il2cpp_codegen_static_fields_for(pIVar5);
      uVar17 = *(undefined8 *)(lVar10 + 0x30);
      NullCheck(pvVar9);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar9,uVar17,0);
      pIVar19 = local_70;
      local_71 = local_61 & 1;
      if ((local_61 & 1) != 0) {
        NullCheck(local_70);
        pvVar9 = *(void **)(pIVar19 + 0x30);
        pIVar5 = (Il2CppClass *)
                 il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),1);
        il2cpp_codegen_runtime_class_init_inline(pIVar5);
        pIVar5 = (Il2CppClass *)
                 il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),1);
        lVar10 = il2cpp_codegen_static_fields_for(pIVar5);
        uVar17 = *(undefined8 *)(lVar10 + 0x38);
        NullCheck(pvVar9);
        VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar9,uVar17,0);
        local_61 = 0;
      }
      pIVar19 = local_70;
      NullCheck(local_70);
      pIVar1 = local_70;
      pBVar20 = *(BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA **)(pIVar19 + 0x30);
      NullCheck(local_70);
      pSVar18 = *(String_t **)(pIVar1 + 0x10);
      NullCheck(pBVar20);
      pMVar6 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0x10);
      BaseField_1_set_label_m13125181DFA83F348C381EBA1EE2B9122CFC5D67(pBVar20,pSVar18,pMVar6);
      pIVar19 = local_70;
      NullCheck(local_70);
      pIVar1 = local_70;
      pBVar20 = *(BaseField_1_t138FF51687BD46C69284C164DC2E54C531A39AAA **)(pIVar19 + 0x30);
      pIVar5 = (Il2CppClass *)
               il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0x12);
      pFVar13 = (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0 *)
                il2cpp_codegen_object_new(pIVar5);
      lVar10 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0x11);
      pMVar6 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0x13);
      Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169(pFVar13,pIVar1,lVar10,pMVar6);
      NullCheck(pBVar20);
      pMVar6 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0x14);
      BaseField_1_add_onValidateValue_mC000D13E0E0E855227227A83417E4EDAC11AD225
                (pBVar20,pFVar13,pMVar6);
      pIVar19 = local_70;
      NullCheck(local_70);
      pIVar1 = local_70;
      pIVar19 = *(Il2CppObject **)(pIVar19 + 0x30);
      pIVar5 = (Il2CppClass *)
               il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0x16);
      pEVar14 = (EventCallback_1_t424C96066075D21342F190671F3D0ED8AB5900D6 *)
                il2cpp_codegen_object_new(pIVar5);
      lVar10 = il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0x15);
      pMVar6 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0x17);
      EventCallback_1__ctor_mBA3BD165CC35A7B018369B8122344E8EB7C7D868(pEVar14,pIVar1,lVar10,pMVar6);
      pMVar6 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0x18);
      INotifyValueChangedExtensions_RegisterValueChangedCallback_TisIl2CppFullySharedGenericAny_m50E49B3920DDDB55FB3A9A3E3A3C28B944F17A83
                (pIVar19,pEVar14,pMVar6);
      pBVar20 = local_28;
      pIVar5 = (Il2CppClass *)
               il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0)
      ;
      pFVar15 = (FieldInfo *)il2cpp_rgctx_field(pIVar5,0);
      puVar8 = (undefined8 *)il2cpp_codegen_get_instance_field_data_pointer(pBVar20,pFVar15);
      pIVar19 = local_70;
      pLVar11 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D *)*puVar8;
      NullCheck(local_70);
      pIVar19 = *(Il2CppObject **)(pIVar19 + 0x30);
      NullCheck(pLVar11);
      pMVar6 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0x1a);
      List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(pLVar11,pIVar19,pMVar6);
      pvVar9 = local_60;
      pIVar19 = local_70;
      local_72 = local_4d & 1;
      if ((local_4d & 1) == 0) {
        NullCheck(local_28);
        pIVar5 = (Il2CppClass *)
                 il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),2);
        il2cpp_codegen_runtime_class_init_inline(pIVar5);
        pBVar20 = local_28;
        pMVar6 = (MethodInfo *)
                 il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),4);
        pVVar16 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
                  BaseField_1_get_visualInput_m3C49DD38969693017690AFA0966E91B53330661F
                            (pBVar20,pMVar6);
        NullCheck(pVVar16);
        local_80 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                             (pVVar16,(MethodInfo *)0x0);
        pIVar19 = local_70;
        NullCheck(local_70);
        Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648
                  (&local_80,*(undefined8 *)(pIVar19 + 0x30),0);
      }
      else {
        NullCheck(local_70);
        uVar17 = *(undefined8 *)(pIVar19 + 0x30);
        NullCheck(pvVar9);
        VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar9,uVar17,0);
      }
      local_68 = il2cpp_codegen_add<int,int>(local_68,1);
    }
    if (local_34 < 3) {
      iVar4 = il2cpp_codegen_subtract<int,int>(3,local_34);
      for (local_8c = 0; pBVar20 = local_28, pvVar9 = local_60, local_8c < iVar4;
          local_8c = il2cpp_codegen_add<int,int>(local_8c,1)) {
        if ((local_4d & 1) == 0) {
          NullCheck(local_28);
          pIVar5 = (Il2CppClass *)
                   il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),2);
          il2cpp_codegen_runtime_class_init_inline(pIVar5);
          pBVar20 = local_28;
          pMVar6 = (MethodInfo *)
                   il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),4);
          pVVar16 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
                    BaseField_1_get_visualInput_m3C49DD38969693017690AFA0966E91B53330661F
                              (pBVar20,pMVar6);
          NullCheck(pVVar16);
          local_80 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                               (pVVar16,(MethodInfo *)0x0);
          pBVar20 = local_28;
          pMVar6 = (MethodInfo *)
                   il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0x1b
                                      );
          uVar17 = BaseCompositeField_3_GetSpacer_m3588D4EBA9525BC59BC1F71D6EFF6D4FECC81D50
                             ((BaseCompositeField_3_tC755752B71FCEB8E419EAE0F0C2F51EFC8B00053 *)
                              pBVar20,pMVar6);
          Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648(&local_80,uVar17,0);
        }
        else {
          pMVar6 = (MethodInfo *)
                   il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0x1b
                                      );
          uVar17 = BaseCompositeField_3_GetSpacer_m3588D4EBA9525BC59BC1F71D6EFF6D4FECC81D50
                             ((BaseCompositeField_3_tC755752B71FCEB8E419EAE0F0C2F51EFC8B00053 *)
                              pBVar20,pMVar6);
          NullCheck(pvVar9);
          VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar9,uVar17,0);
        }
      }
    }
    if ((local_4d & 1) != 0) {
      NullCheck(local_28);
      pIVar5 = (Il2CppClass *)
               il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),2);
      il2cpp_codegen_runtime_class_init_inline(pIVar5);
      pBVar20 = local_28;
      pMVar6 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),4);
      pVVar16 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
                BaseField_1_get_visualInput_m3C49DD38969693017690AFA0966E91B53330661F
                          (pBVar20,pMVar6);
      NullCheck(pVVar16);
      local_80 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                           (pVVar16,(MethodInfo *)0x0);
      Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648(&local_80,local_60,0);
    }
  }
  pMVar6 = (MethodInfo *)
           il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_40 + 0x20) + 0xc0),0x1c);
  BaseCompositeField_3_UpdateDisplay_mEF57F62AE5FE9492D16A7AD395FEC148D626412C
            ((BaseCompositeField_3_tC755752B71FCEB8E419EAE0F0C2F51EFC8B00053 *)pBVar20,pMVar6);
  return;
}


