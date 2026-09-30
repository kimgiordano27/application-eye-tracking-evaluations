/*
FUNCTION_NAME: BaseListView_EnableFooter_mBBD73D66895BE56BCF5AEC0EDDF9D2199920FB63
ENTRY_POINT: 04458954
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void BaseListView_EnableFooter_mBBD73D66895BE56BCF5AEC0EDDF9D2199920FB63
               (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE *param_1,
               byte param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  Il2CppObject *pIVar8;
  undefined8 local_48;
  undefined1 local_3c;
  undefined1 local_3b;
  byte local_3a;
  undefined1 local_39;
  undefined8 local_38;
  byte local_29;
  BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE *local_28;
  
  puVar4 = PTR_Button_t8EC3B431665F84C0B637C11B0EA29236828646C2_il2cpp_TypeInfo_var_048d8700;
  puVar3 = PTR_BaseListView_t325EC1CB0CDB163106851B43AB91FB9EF0A59926_il2cpp_TypeInfo_var_048d83a0;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
  ;
  local_29 = param_2 & 1;
  local_38 = param_3;
  local_28 = param_1;
  if ((BaseListView_EnableFooter_mBBD73D66895BE56BCF5AEC0EDDF9D2199920FB63::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseListView_OnAddClicked_m6355C1856D901C056EA4EAF07F4BF29E2528449F_RuntimeMethod_var_048d8708
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseListView_OnRemoveClicked_mCE6B4B3EEBEF977EFAF59ED1E5E51C1F0CA595DC_RuntimeMethod_var_048d8710
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List_Enumerator<IPAddress>_MoveNext__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_ContainsKey__);
    BaseListView_EnableFooter_mBBD73D66895BE56BCF5AEC0EDDF9D2199920FB63::s_Il2CppMethodInitialized =
         1;
  }
  local_39 = 0;
  local_3a = 0;
  local_3b = 0;
  local_3c = 0;
  local_48 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365
            (local_28,*(undefined8 *)(lVar5 + 0x80),local_29 & 1,0);
  pvVar6 = (void *)BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline
                             (local_28,(MethodInfo *)0x0);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  bVar1 = local_29;
  uVar7 = *(undefined8 *)(lVar5 + 0x88);
  NullCheck(pvVar6);
  VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365
            (pvVar6,uVar7,bVar1 & 1,0);
  local_39 = *(long *)(local_28 + 0x4e0) != 0;
  if ((bool)local_39) {
    pvVar6 = *(void **)(local_28 + 0x4e0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    uVar7 = *(undefined8 *)(lVar5 + 0x70);
    bVar1 = local_29 & 1;
    NullCheck(pvVar6);
    VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365(pvVar6,uVar7,bVar1,0);
  }
  local_3a = local_29 & 1;
  if (local_3a == 0) {
    pvVar6 = *(void **)(local_28 + 0x500);
    if (pvVar6 != (void *)0x0) {
      NullCheck(pvVar6);
      VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64(pvVar6,0);
    }
    pvVar6 = *(void **)(local_28 + 0x4f8);
    if (pvVar6 != (void *)0x0) {
      NullCheck(pvVar6);
      VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64(pvVar6,0);
    }
    pvVar6 = *(void **)(local_28 + 0x4f0);
    if (pvVar6 != (void *)0x0) {
      NullCheck(pvVar6);
      VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64(pvVar6,0);
    }
    *(undefined8 *)(local_28 + 0x500) = 0;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x500),(void *)0x0);
    *(undefined8 *)(local_28 + 0x4f8) = 0;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x4f8),(void *)0x0);
    *(undefined8 *)(local_28 + 0x4f0) = 0;
    Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x4f0),(void *)0x0);
  }
  else {
    local_3b = *(long *)(local_28 + 0x4f0) == 0;
    if ((bool)local_3b) {
      pvVar6 = (void *)il2cpp_codegen_object_new
                                 (*(Il2CppClass **)
                                   Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__)
      ;
      VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar6);
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      uVar7 = *(undefined8 *)(lVar5 + 0x50);
      NullCheck(pvVar6);
      VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(pvVar6,uVar7,0);
      *(void **)(local_28 + 0x4f0) = pvVar6;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x4f0),pvVar6);
      pvVar6 = *(void **)(local_28 + 0x4f0);
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      uVar7 = *(undefined8 *)(lVar5 + 0x50);
      NullCheck(pvVar6);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar6,uVar7,0);
      uVar7 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
      Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
                (uVar7,local_28,
                 *(undefined8 *)
                  PTR_BaseListView_OnRemoveClicked_mCE6B4B3EEBEF977EFAF59ED1E5E51C1F0CA595DC_RuntimeMethod_var_048d8710
                 ,0);
      pIVar8 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      Button__ctor_m301F83F91A3E4793E1EAFA3F80454DF81207B0FF(pIVar8,uVar7,0);
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      uVar7 = *(undefined8 *)(lVar5 + 0x98);
      NullCheck(pIVar8);
      VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(pIVar8,uVar7,0);
      NullCheck(pIVar8);
      VirtualActionInvoker1<String_t*>::Invoke
                (0x9f,pIVar8,
                 *(String_t **)
                  Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_ContainsKey__
                );
      *(Il2CppObject **)(local_28 + 0x500) = pIVar8;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x500),pIVar8);
      pvVar6 = *(void **)(local_28 + 0x4f0);
      uVar7 = *(undefined8 *)(local_28 + 0x500);
      NullCheck(pvVar6);
      VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar6,uVar7,0);
      uVar7 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar2);
      Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
                (uVar7,local_28,
                 *(undefined8 *)
                  PTR_BaseListView_OnAddClicked_m6355C1856D901C056EA4EAF07F4BF29E2528449F_RuntimeMethod_var_048d8708
                 ,0);
      pIVar8 = (Il2CppObject *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
      Button__ctor_m301F83F91A3E4793E1EAFA3F80454DF81207B0FF(pIVar8,uVar7,0);
      lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
      uVar7 = *(undefined8 *)(lVar5 + 0x90);
      NullCheck(pIVar8);
      VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(pIVar8,uVar7,0);
      NullCheck(pIVar8);
      VirtualActionInvoker1<String_t*>::Invoke
                (0x9f,pIVar8,
                 *(String_t **)
                  Method_System_Collections_Generic_List_Enumerator<IPAddress>_MoveNext__);
      *(Il2CppObject **)(local_28 + 0x4f8) = pIVar8;
      Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x4f8),pIVar8);
      pvVar6 = *(void **)(local_28 + 0x4f0);
      uVar7 = *(undefined8 *)(local_28 + 0x4f8);
      NullCheck(pvVar6);
      VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar6,uVar7,0);
    }
    local_3c = *(long *)(local_28 + 0x4d8) != 0;
    if ((bool)local_3c) {
      pIVar8 = *(Il2CppObject **)(local_28 + 0x4d8);
      NullCheck(pIVar8);
      pvVar6 = (void *)VirtualFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>
                       ::Invoke(99,pIVar8);
      uVar7 = *(undefined8 *)(local_28 + 0x4f0);
      NullCheck(pvVar6);
      VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar6,uVar7,0);
    }
    else {
      local_48 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                           ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)local_28,
                            (MethodInfo *)0x0);
      Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648
                (&local_48,*(undefined8 *)(local_28 + 0x4f0),0);
    }
  }
  return;
}


