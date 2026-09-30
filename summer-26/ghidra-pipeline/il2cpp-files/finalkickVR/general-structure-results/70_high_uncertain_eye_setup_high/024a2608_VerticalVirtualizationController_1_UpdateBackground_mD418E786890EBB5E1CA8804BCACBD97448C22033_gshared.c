/*
FUNCTION_NAME: VerticalVirtualizationController_1_UpdateBackground_mD418E786890EBB5E1CA8804BCACBD97448C22033_gshared
ENTRY_POINT: 024a2608
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void VerticalVirtualizationController_1_UpdateBackground_mD418E786890EBB5E1CA8804BCACBD97448C22033_gshared
               (Il2CppObject *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Il2CppObject *pIVar7;
  MethodInfo *pMVar8;
  long lVar9;
  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD *pLVar10;
  ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086 *pRVar11;
  void *pvVar12;
  void *pvVar13;
  String_t *pSVar14;
  ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *pSVar15;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [12];
  undefined4 uStack_2b4;
  int local_ac;
  int local_74;
  undefined8 local_70;
  undefined1 local_61;
  void *local_60;
  int local_54;
  int local_50;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  long local_30;
  Il2CppObject *local_28;
  
  puVar3 = Method_System_Collections_Generic_Queue<object>_get_Count__;
  puVar2 = Method_System_Nullable<InputUserAccountHandle>_get_HasValue__;
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_30 = param_2;
  local_28 = param_1;
  if ((VerticalVirtualizationController_1_UpdateBackground_mD418E786890EBB5E1CA8804BCACBD97448C22033_gshared
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Queue<object>_get_Count__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUserAccountHandle>_GetValueOrDefault__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<string,_object>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    VerticalVirtualizationController_1_UpdateBackground_mD418E786890EBB5E1CA8804BCACBD97448C22033_gshared
    ::s_Il2CppMethodInitialized = 1;
  }
  local_34 = 0.0;
  local_38 = 0.0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_45 = 0;
  local_46 = 0;
  local_47 = 0;
  local_48 = 0;
  local_49 = 0;
  local_50 = 0;
  local_54 = 0;
  local_60 = (void *)0x0;
  local_61 = 0;
  local_70 = 0;
  pvVar13 = *(void **)(local_28 + 0x20);
  NullCheck(pvVar13);
  iVar4 = BaseVerticalCollectionView_get_showAlternatingRowBackgrounds_m47BFEE57E56D46D6C705C7F7DD6C8BA5DBB2B97A
                    (pvVar13,0);
  if (iVar4 == 2) {
    pSVar15 = *(ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 **)(local_28 + 0x10);
    NullCheck(pSVar15);
    pvVar13 = (void *)ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline
                                (pSVar15,(MethodInfo *)0x0);
    NullCheck(pvVar13);
    pIVar7 = (Il2CppObject *)
             VisualElement_get_resolvedStyle_m3885B7534A94E0BCE024A9621465A0F273DA0AEB(pvVar13,0);
    NullCheck(pIVar7);
    fVar18 = (float)InterfaceFuncInvoker0<float>::Invoke
                              (0x13,*(Il2CppClass **)
                                     Method_System_Nullable<InputUserAccountHandle>_GetValueOrDefault__
                               ,pIVar7);
    NullCheck(local_28);
    fVar19 = (float)VirtualFuncInvoker0<float>::Invoke(0xd,local_28);
    local_34 = (float)il2cpp_codegen_subtract<float,float>(fVar18,fVar19);
    local_45 = local_34 <= 0.0;
  }
  else {
    local_45 = true;
  }
  pIVar7 = local_28;
  if ((bool)local_45) {
    pvVar13 = *(void **)(local_28 + 0x58);
    if (pvVar13 != (void *)0x0) {
      NullCheck(pvVar13);
      VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64(pvVar13,0);
    }
  }
  else {
    pMVar8 = (MethodInfo *)
             il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_30 + 0x20) + 0xc0),0x22);
    lVar9 = VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659
                      ((VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345
                        *)pIVar7,pMVar8);
    local_46 = lVar9 == 0;
    if (!(bool)local_46) {
      local_47 = *(long *)(local_28 + 0x58) == 0;
      if ((bool)local_47) {
        pvVar13 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
        VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar13);
        NullCheck(pvVar13);
        pLVar10 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD *)
                  VisualElement_get_classList_mF29F87BE5A1BFC82854AD0D6355A713D5AC517C1(pvVar13,0);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        pSVar14 = *(String_t **)(lVar9 + 0x70);
        NullCheck(pLVar10);
        List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline
                  (pLVar10,pSVar14,
                   *(MethodInfo **)
                    Method_System_Collections_Generic_Dictionary<string,_object>_Clear__);
        *(void **)(local_28 + 0x58) = pvVar13;
        Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x58),pvVar13);
      }
      pvVar13 = *(void **)(local_28 + 0x58);
      NullCheck(pvVar13);
      lVar9 = VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000(pvVar13,0);
      local_48 = lVar9 == 0;
      if ((bool)local_48) {
        pSVar15 = *(ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 **)(local_28 + 0x10);
        NullCheck(pSVar15);
        pvVar13 = (void *)ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline
                                    (pSVar15,(MethodInfo *)0x0);
        uVar17 = *(undefined8 *)(local_28 + 0x58);
        NullCheck(pvVar13);
        VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar13,uVar17,0);
      }
      NullCheck(local_28);
      local_38 = (float)VirtualFuncInvoker1<float,int>::Invoke(0xc,local_28,-1);
      iVar4 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline
                        (local_34 / local_38,(MethodInfo *)0x0);
      iVar5 = il2cpp_codegen_add<int,int>(iVar4,1);
      pvVar13 = *(void **)(local_28 + 0x58);
      local_3c = iVar5;
      NullCheck(pvVar13);
      iVar6 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(pvVar13,0);
      iVar4 = local_3c;
      local_49 = iVar6 < iVar5;
      if ((bool)local_49) {
        pvVar13 = *(void **)(local_28 + 0x58);
        NullCheck(pvVar13);
        iVar5 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(pvVar13,0);
        local_50 = il2cpp_codegen_subtract<int,int>(iVar4,iVar5);
        for (local_54 = 0; local_61 = local_54 < local_50, (bool)local_61;
            local_54 = il2cpp_codegen_add<int,int>(local_54,1)) {
          pvVar13 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
          VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar13);
          local_60 = pvVar13;
          NullCheck(pvVar13);
          pvVar13 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224
                                      (pvVar13,0);
          uVar17 = StyleFloat_op_Implicit_m534A028510332FD68BBBAF6C96028FAE936A2DDB(0,0);
          NullCheck(pvVar13);
          InterfaceActionInvoker1<StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841>::Invoke
                    (0x16,*(undefined8 *)puVar2,pvVar13,uVar17);
          pvVar13 = local_60;
          pvVar12 = *(void **)(local_28 + 0x58);
          NullCheck(pvVar12);
          VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar12,pvVar13,0);
        }
      }
      pIVar7 = local_28;
      pMVar8 = (MethodInfo *)
               il2cpp_rgctx_method(*(Il2CppRGCTXData **)(*(long *)(local_30 + 0x20) + 0xc0),0x22);
      pRVar11 = (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086 *)
                VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659
                          ((VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345
                            *)pIVar7,pMVar8);
      if (pRVar11 == (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086 *)0x0) {
        local_ac = -1;
      }
      else {
        NullCheck(pRVar11);
        local_ac = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline
                             (pRVar11,(MethodInfo *)0x0);
      }
      local_40 = local_ac;
      pVVar16 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 **)(local_28 + 0x58);
      NullCheck(pVVar16);
      local_70 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                           (pVVar16,(MethodInfo *)0x0);
      local_44 = Hierarchy_get_childCount_mAD31B42C0FF9B64AAF6A8CF23F22024B3F9542D5(&local_70,0);
      for (local_74 = 0; local_74 < local_44; local_74 = il2cpp_codegen_add<int,int>(local_74,1)) {
        pVVar16 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 **)(local_28 + 0x58);
        NullCheck(pVVar16);
        local_70 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                             (pVVar16,(MethodInfo *)0x0);
        pvVar13 = (void *)Hierarchy_get_Item_mBA5811C28D9E7FA48D0F10603A95F8CF248C3467
                                    (&local_70,local_74,0);
        local_40 = il2cpp_codegen_add<int,int>(local_40,1);
        NullCheck(pvVar13);
        pvVar12 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224
                                    (pvVar13,0);
        auVar20 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(local_38,0);
        NullCheck(pvVar12);
        InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8>::Invoke
                  ((InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> *
                   )0x18,*(undefined8 *)puVar2,pvVar12,auVar20._0_8_,
                   CONCAT44(uStack_2b4,auVar20._8_4_));
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
        lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
        iVar4 = local_40;
        uVar17 = *(undefined8 *)(lVar9 + 0x60);
        NullCheck(pvVar13);
        VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365
                  (pvVar13,uVar17,iVar4 % 2 == 1,0);
      }
    }
  }
  return;
}


