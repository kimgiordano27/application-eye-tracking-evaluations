/*
FUNCTION_NAME: BaseTreeViewController_OnItemPointerUp_mAE59545C52C0713B2DF882F178F8510828581610
ENTRY_POINT: 0444af44
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 159
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_14;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_14
*/


void BaseTreeViewController_OnItemPointerUp_mAE59545C52C0713B2DF882F178F8510828581610
               (Il2CppObject *param_1,Il2CppObject *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  Il2CppObject *pIVar6;
  HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2 *pHVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  void *pvVar11;
  ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086 *pRVar12;
  BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7 *pBVar13;
  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73 *pLVar14;
  undefined1 auVar15 [16];
  Il2CppObject **local_168;
  FinallyHelper<BaseTreeViewController_OnItemPointerUp_mAE59545C52C0713B2DF882F178F8510828581610::__15,false>
  aFStack_160 [16];
  Il2CppObject *local_150;
  Il2CppObject *local_148;
  Il2CppObject *local_140;
  Il2CppObject *local_138;
  int local_12c;
  byte local_125;
  int local_124;
  HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2 *local_120;
  byte local_115;
  int local_114;
  HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2 *local_110;
  byte local_102;
  byte local_101;
  HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2 *local_100;
  Il2CppObject *local_f8;
  BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7 *local_f0;
  undefined1 local_e2;
  byte local_e1;
  int local_e0;
  byte local_d9;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  Il2CppObject *local_c8;
  void *local_c0;
  void *local_b8;
  String_t *local_b0;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_a8;
  Il2CppObject *local_a0;
  Il2CppObject *local_98;
  undefined1 local_8d;
  uint local_8c;
  Il2CppObject *local_88;
  byte local_7e;
  byte local_7d;
  int local_7c;
  Il2CppObject *local_78;
  byte local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  Il2CppObject *local_68;
  HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2 *local_60;
  byte local_51;
  int local_50;
  int local_4c;
  void *local_48;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_40;
  undefined8 local_38;
  Il2CppObject *local_30;
  Il2CppObject *local_28;
  
  puVar4 = 
  PTR_ReusableTreeViewItem_tB602EA1975446F78F764D2A40DE200C9D8418B3F_il2cpp_TypeInfo_var_048d8448;
  puVar3 = PTR_BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7_il2cpp_TypeInfo_var_048d8418;
  puVar2 = Method_System_Collections_Generic_Queue<SocketIOEvent>_Enqueue__;
  puVar1 = Method_Unity_Properties_Property<BoundsInt,_Vector3Int>__ctor__;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((BaseTreeViewController_OnItemPointerUp_mAE59545C52C0713B2DF882F178F8510828581610::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7_il2cpp_TypeInfo_var_048d8418
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<IntPoint>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_HashSet_1__ctor_m3F29A5426149F521CEE6900B9A4097810124ED8E_RuntimeMethod_var_048d8488
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Properties_Property<Bounds,_Vector3>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>__ctor__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_Get__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_PointerEventBase_1_get_modifiers_m3DC8162B17BCC9798C05E8AAABF915B1866A1E7F_RuntimeMethod_var_048d8490
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA_RuntimeMethod_var_048d8498
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<Vector4>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    BaseTreeViewController_OnItemPointerUp_mAE59545C52C0713B2DF882F178F8510828581610::
    s_Il2CppMethodInitialized = 1;
  }
  local_40 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0;
  local_48 = (void *)0x0;
  local_4c = 0;
  local_50 = 0;
  local_51 = 0;
  local_60 = (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2 *)0x0;
  local_68 = (Il2CppObject *)0x0;
  local_69 = 0;
  local_6a = 0;
  local_6b = 0;
  local_78 = (Il2CppObject *)0x0;
  local_7c = 0;
  local_7d = 0;
  local_7e = 0;
  local_88 = local_30;
  NullCheck(local_30);
  local_8c = PointerEventBase_1_get_modifiers_m3DC8162B17BCC9798C05E8AAABF915B1866A1E7F_inline
                       ((PointerEventBase_1_t2DFB78320E5810F8163F6CF5D3C5537CF40B2496 *)local_88,
                        *(MethodInfo **)
                         PTR_PointerEventBase_1_get_modifiers_m3DC8162B17BCC9798C05E8AAABF915B1866A1E7F_RuntimeMethod_var_048d8490
                       );
  local_8d = (local_8c & 4) == 0;
  if (!(bool)local_8d) {
    local_98 = local_30;
    local_69 = local_8d;
    NullCheck(local_30);
    local_a0 = (Il2CppObject *)VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,local_98);
    local_a8 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)
               IsInstClass(local_a0,*(Il2CppClass **)
                                     Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                          );
    local_40 = local_a8;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    lVar10 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    local_b0 = *(String_t **)(lVar10 + 0x10);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Nullable<Vector4>_get_HasValue__);
    local_c0 = (void *)UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA
                                 (local_a8,local_b0,(String_t *)0x0,
                                  *(MethodInfo **)
                                   PTR_UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA_RuntimeMethod_var_048d8498
                                 );
    local_b8 = local_c0;
    local_48 = local_c0;
    NullCheck(local_c0);
    local_c8 = (Il2CppObject *)
               VisualElement_get_userData_mB304DD064D255F64BB5A2EBC9233E2468B79ECE4(local_c0,0);
    pvVar11 = (void *)CastclassClass(local_c8,*(Il2CppClass **)puVar4);
    NullCheck(pvVar11);
    pRVar12 = (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086 *)
              CastclassClass(local_c8,*(Il2CppClass **)puVar4);
    local_d0 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline
                         (pRVar12,(MethodInfo *)0x0);
    local_cc = local_d0;
    local_4c = local_d0;
    local_d4 = VirtualFuncInvoker1<int,int>::Invoke(0xc,local_28,local_d0);
    local_d8 = local_4c;
    local_50 = local_d4;
    local_d9 = BaseTreeViewController_IsExpandedByIndex_m0F1678DE8EF19BB43918C865B80224FD35ABFD66
                         (local_28,local_4c,0);
    local_d9 = local_d9 & 1;
    local_e0 = local_4c;
    local_51 = local_d9;
    bVar8 = BaseTreeViewController_HasChildrenByIndex_m9318EA9496370F8F2E68D7718F5ED56C3B7BA796
                      (local_28,local_4c,0);
    local_e1 = bVar8 & 1;
    local_e2 = (bVar8 & 1) == 0;
    if (!(bool)local_e2) {
      local_6a = local_e2;
      local_f0 = (BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7 *)
                 BaseTreeViewController_get_baseTreeView_m0ADC79785331F5C71B1B33A39473441A99F64CA6
                           (local_28);
      NullCheck(local_f0);
      local_f8 = (Il2CppObject *)
                 BaseTreeView_get_expandedItemIds_mA308EA9D469B853BC0AFE25D6081B5DE390E712B_inline
                           (local_f0,(MethodInfo *)0x0);
      local_100 = (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2 *)
                  il2cpp_codegen_object_new
                            (*(Il2CppClass **)
                              Method_Unity_Properties_Property<Bounds,_Vector3>__ctor__);
      HashSet_1__ctor_m3F29A5426149F521CEE6900B9A4097810124ED8E
                (local_100,local_f8,
                 *(MethodInfo **)
                  PTR_HashSet_1__ctor_m3F29A5426149F521CEE6900B9A4097810124ED8E_RuntimeMethod_var_048d8488
                );
      local_60 = local_100;
      local_102 = local_51 & 1;
      local_101 = local_102;
      local_6b = local_102;
      if (local_102 == 0) {
        local_120 = local_100;
        local_124 = local_50;
        NullCheck(local_100);
        local_125 = HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB
                              (local_120,local_124,*(MethodInfo **)puVar1);
        local_125 = local_125 & 1;
      }
      else {
        local_110 = local_100;
        local_114 = local_50;
        NullCheck(local_100);
        local_115 = HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65
                              (local_110,local_114,*(MethodInfo **)puVar2);
        local_115 = local_115 & 1;
      }
      local_12c = local_4c;
      local_140 = (Il2CppObject *)
                  BaseTreeViewController_GetChildrenIdsByIndex_mAA7B7E75FE5834B8C0DD719AB95094ACFBECF8F4
                            (local_28,local_4c,0);
      local_138 = local_140;
      local_68 = local_140;
      local_148 = (Il2CppObject *)
                  VirtualFuncInvoker1<Il2CppObject*,Il2CppObject*>::Invoke(0x16,local_28,local_140);
      NullCheck(local_148);
      auVar15 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                          (0,*(Il2CppClass **)
                              Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>__ctor__
                           ,local_148);
      local_150 = auVar15._0_8_;
      local_168 = &local_78;
      local_78 = local_150;
      il2cpp::utils::
      Finally<BaseTreeViewController_OnItemPointerUp_mAE59545C52C0713B2DF882F178F8510828581610::__15>
                ((utils *)&local_168,auVar15._8_8_);
      while( true ) {
        pIVar6 = local_78;
        NullCheck(local_78);
        uVar9 = InterfaceFuncInvoker0<bool>::Invoke
                          (0,*(Il2CppClass **)
                              Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                           ,pIVar6);
        pIVar6 = local_78;
        if ((uVar9 & 1) == 0) break;
        NullCheck(local_78);
        local_7c = InterfaceFuncInvoker0<int>::Invoke
                             (0,*(Il2CppClass **)
                                 Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_Get__
                              ,pIVar6);
        bVar8 = VirtualFuncInvoker1<bool,int>::Invoke(0x1a,local_28,local_7c);
        pHVar7 = local_60;
        iVar5 = local_7c;
        local_7d = bVar8 & 1;
        if ((bVar8 & 1) != 0) {
          local_7e = local_51 & 1;
          if (local_7e == 0) {
            NullCheck(local_60);
            HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB
                      (pHVar7,iVar5,*(MethodInfo **)puVar1);
          }
          else {
            NullCheck(local_60);
            HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65
                      (pHVar7,iVar5,*(MethodInfo **)puVar2);
          }
        }
      }
      il2cpp::utils::
      FinallyHelper<BaseTreeViewController_OnItemPointerUp_mAE59545C52C0713B2DF882F178F8510828581610::$_15,false>
      ::~FinallyHelper(aFStack_160);
      pBVar13 = (BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7 *)
                BaseTreeViewController_get_baseTreeView_m0ADC79785331F5C71B1B33A39473441A99F64CA6
                          (local_28);
      pLVar14 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73 *)
                Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC
                          ((Il2CppObject *)local_60,
                           *(MethodInfo **)Method_System_Collections_Generic_List<IntPoint>__ctor__)
      ;
      NullCheck(pBVar13);
      BaseTreeView_set_expandedItemIds_m43C10938A0A478F080145817ECB56BBCB5F3E488_inline
                (pBVar13,pLVar14,(MethodInfo *)0x0);
      BaseTreeViewController_RegenerateWrappers_mB8AAD16453FCA5A2333C451F1429AF41318C60CE
                (local_28,0);
      pvVar11 = (void *)BaseTreeViewController_get_baseTreeView_m0ADC79785331F5C71B1B33A39473441A99F64CA6
                                  (local_28,0);
      NullCheck(pvVar11);
      BaseVerticalCollectionView_RefreshItems_m53943EBC70FFE5C66EE6A7FEF5ECA33DE80AC0D6(pvVar11,0);
      pIVar6 = local_30;
      NullCheck(local_30);
      EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB(pIVar6,0);
    }
  }
  return;
}


