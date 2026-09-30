/*
FUNCTION_NAME: UnityEngine.UIElements.MinMaxSlider.UxmlTraits$$.ctor
ENTRY_POINT: 0444af74
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_16;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_14
*/


void UnityEngine_UIElements_MinMaxSlider_UxmlTraits___ctor
               (ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086 *pRVar8;
  BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7 *pBVar9;
  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73 *pLVar10;
  HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2 *pHVar11;
  Il2CppObject *pIVar12;
  long unaff_x29;
  undefined1 auVar13 [16];
  int iStack000000000000003c;
  ulong *in_stack_00000040;
  ulong *in_stack_00000048;
  ulong *puStack0000000000000050;
  ulong *puStack0000000000000058;
  undefined4 uStack000000000000008c;
  long in_stack_000000e8;
  undefined8 in_stack_00000100;
  Il2CppObject *in_stack_00000108;
  Il2CppObject *in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 uStack0000000000000124;
  undefined8 in_stack_00000128;
  
  puStack0000000000000058 =
       (ulong *)
       PTR_ReusableTreeViewItem_tB602EA1975446F78F764D2A40DE200C9D8418B3F_il2cpp_TypeInfo_var_048d8448
  ;
  *(undefined8 *)(unaff_x29 + -8) = param_2;
  *(undefined8 *)(unaff_x29 + -0x10) = param_3;
  *(undefined8 *)(unaff_x29 + -0x18) = param_4;
  puStack0000000000000050 = param_1;
  if ((BaseTreeViewController_OnItemPointerUp_mAE59545C52C0713B2DF882F178F8510828581610::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000040);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<IntPoint>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000048);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000050);
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
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000058);
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
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  iStack000000000000003c = 0;
  *(undefined4 *)(unaff_x29 + -0x2c) = 0;
  *(undefined4 *)(unaff_x29 + -0x30) = 0;
  *(undefined1 *)(unaff_x29 + -0x31) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined1 *)(unaff_x29 + -0x49) = 0;
  *(undefined1 *)(unaff_x29 + -0x4a) = 0;
  *(undefined1 *)(unaff_x29 + -0x4b) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined4 *)(unaff_x29 + -0x5c) = 0;
  *(undefined1 *)(unaff_x29 + -0x5d) = 0;
  *(undefined1 *)(unaff_x29 + -0x5e) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = *(undefined8 *)(unaff_x29 + -0x10);
  NullCheck(*(void **)(unaff_x29 + -0x68));
  uVar3 = PointerEventBase_1_get_modifiers_m3DC8162B17BCC9798C05E8AAABF915B1866A1E7F_inline
                    (*(PointerEventBase_1_t2DFB78320E5810F8163F6CF5D3C5537CF40B2496 **)
                      (unaff_x29 + -0x68),
                     *(MethodInfo **)
                      PTR_PointerEventBase_1_get_modifiers_m3DC8162B17BCC9798C05E8AAABF915B1866A1E7F_RuntimeMethod_var_048d8490
                    );
  *(undefined4 *)(unaff_x29 + -0x6c) = uVar3;
  iVar1 = iStack000000000000003c;
  if ((*(uint *)(unaff_x29 + -0x6c) & 4) == 0) {
    iVar1 = 1;
  }
  *(bool *)(unaff_x29 + -0x49) = iVar1 != 0;
  *(byte *)(unaff_x29 + -0x6d) = *(byte *)(unaff_x29 + -0x49) & 1;
  if ((*(byte *)(unaff_x29 + -0x6d) & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x10);
    NullCheck(*(void **)(unaff_x29 + -0x78));
    uVar5 = VirtualFuncInvoker0<Il2CppObject*>::Invoke(10,*(Il2CppObject **)(unaff_x29 + -0x78));
    *(undefined8 *)(unaff_x29 + -0x80) = uVar5;
    uVar5 = IsInstClass(*(Il2CppObject **)(unaff_x29 + -0x80),
                        *(Il2CppClass **)
                         Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar5;
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x20);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000040);
    lVar6 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000040);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(lVar6 + 0x10);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Nullable<Vector4>_get_HasValue__);
    uVar5 = UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA
                      (*(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 **)
                        (unaff_x29 + -0x88),*(String_t **)(unaff_x29 + -0x90),(String_t *)0x0,
                       *(MethodInfo **)
                        PTR_UQueryExtensions_Q_TisToggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_m5E8F6142F47C5B5A96F866B2955BAD07AEA28ECA_RuntimeMethod_var_048d8498
                      );
    *(undefined8 *)(unaff_x29 + -0x98) = uVar5;
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x28);
    NullCheck(*(void **)(unaff_x29 + -0xa0));
    uVar5 = VisualElement_get_userData_mB304DD064D255F64BB5A2EBC9233E2468B79ECE4
                      (*(undefined8 *)(unaff_x29 + -0xa0),0);
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar5;
    pvVar7 = (void *)CastclassClass(*(Il2CppObject **)(unaff_x29 + -0xa8),
                                    (Il2CppClass *)*puStack0000000000000058);
    NullCheck(pvVar7);
    pRVar8 = (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086 *)
             CastclassClass(*(Il2CppObject **)(unaff_x29 + -0xa8),
                            (Il2CppClass *)*puStack0000000000000058);
    uVar3 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline
                      (pRVar8,(MethodInfo *)0x0);
    *(undefined4 *)(unaff_x29 + -0xac) = uVar3;
    *(undefined4 *)(unaff_x29 + -0x2c) = *(undefined4 *)(unaff_x29 + -0xac);
    *(undefined4 *)(unaff_x29 + -0xb0) = *(undefined4 *)(unaff_x29 + -0x2c);
    uVar3 = VirtualFuncInvoker1<int,int>::Invoke
                      (0xc,*(Il2CppObject **)(unaff_x29 + -8),*(int *)(unaff_x29 + -0xb0));
    *(undefined4 *)(unaff_x29 + -0xb4) = uVar3;
    *(undefined4 *)(unaff_x29 + -0x30) = *(undefined4 *)(unaff_x29 + -0xb4);
    *(undefined4 *)(unaff_x29 + -0xb8) = *(undefined4 *)(unaff_x29 + -0x2c);
    bVar2 = BaseTreeViewController_IsExpandedByIndex_m0F1678DE8EF19BB43918C865B80224FD35ABFD66
                      (*(undefined8 *)(unaff_x29 + -8),*(undefined4 *)(unaff_x29 + -0xb8),0);
    *(byte *)(unaff_x29 + -0xb9) = bVar2 & 1;
    *(byte *)(unaff_x29 + -0x31) = *(byte *)(unaff_x29 + -0xb9) & 1;
    *(undefined4 *)(unaff_x29 + -0xc0) = *(undefined4 *)(unaff_x29 + -0x2c);
    bVar2 = BaseTreeViewController_HasChildrenByIndex_m9318EA9496370F8F2E68D7718F5ED56C3B7BA796
                      (*(undefined8 *)(unaff_x29 + -8),*(undefined4 *)(unaff_x29 + -0xc0),0);
    *(byte *)(unaff_x29 + -0xc1) = bVar2 & 1;
    *(bool *)(unaff_x29 + -0x4a) = (*(byte *)(unaff_x29 + -0xc1) & 1) == 0;
    *(byte *)(unaff_x29 + -0xc2) = *(byte *)(unaff_x29 + -0x4a) & 1;
    if ((*(byte *)(unaff_x29 + -0xc2) & 1) == 0) {
      uVar5 = BaseTreeViewController_get_baseTreeView_m0ADC79785331F5C71B1B33A39473441A99F64CA6
                        (*(undefined8 *)(unaff_x29 + -8));
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar5;
      NullCheck(*(void **)(unaff_x29 + -0xd0));
      uVar5 = BaseTreeView_get_expandedItemIds_mA308EA9D469B853BC0AFE25D6081B5DE390E712B_inline
                        (*(BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7 **)
                          (unaff_x29 + -0xd0),(MethodInfo *)0x0);
      *(undefined8 *)(unaff_x29 + -0xd8) = uVar5;
      uVar5 = il2cpp_codegen_object_new
                        (*(Il2CppClass **)Method_Unity_Properties_Property<Bounds,_Vector3>__ctor__)
      ;
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar5;
      HashSet_1__ctor_m3F29A5426149F521CEE6900B9A4097810124ED8E
                (*(HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2 **)(unaff_x29 + -0xe0),
                 *(Il2CppObject **)(unaff_x29 + -0xd8),
                 *(MethodInfo **)
                  PTR_HashSet_1__ctor_m3F29A5426149F521CEE6900B9A4097810124ED8E_RuntimeMethod_var_048d8488
                );
      *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0xe0);
      *(byte *)(unaff_x29 + -0xe1) = *(byte *)(unaff_x29 + -0x31) & 1;
      *(byte *)(unaff_x29 + -0x4b) = *(byte *)(unaff_x29 + -0xe1) & 1;
      *(byte *)(unaff_x29 + -0xe2) = *(byte *)(unaff_x29 + -0x4b) & 1;
      if ((*(byte *)(unaff_x29 + -0xe2) & 1) == 0) {
        *(undefined8 *)(unaff_x29 + -0x100) = *(undefined8 *)(unaff_x29 + -0x40);
        in_stack_00000128._4_4_ = *(int *)(unaff_x29 + -0x30);
        NullCheck(*(void **)(unaff_x29 + -0x100));
        in_stack_00000128._3_1_ =
             HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB
                       (*(HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2 **)
                         (unaff_x29 + -0x100),in_stack_00000128._4_4_,
                        (MethodInfo *)*in_stack_00000048);
        in_stack_00000128._3_1_ = in_stack_00000128._3_1_ & 1;
      }
      else {
        *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0x40);
        *(undefined4 *)(unaff_x29 + -0xf4) = *(undefined4 *)(unaff_x29 + -0x30);
        NullCheck(*(void **)(unaff_x29 + -0xf0));
        bVar2 = HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65
                          (*(HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2 **)
                            (unaff_x29 + -0xf0),*(int *)(unaff_x29 + -0xf4),
                           (MethodInfo *)*puStack0000000000000050);
        *(byte *)(unaff_x29 + -0xf5) = bVar2 & 1;
      }
      uStack0000000000000124 = *(undefined4 *)(unaff_x29 + -0x2c);
      in_stack_00000118 =
           BaseTreeViewController_GetChildrenIdsByIndex_mAA7B7E75FE5834B8C0DD719AB95094ACFBECF8F4
                     (*(undefined8 *)(unaff_x29 + -8),uStack0000000000000124,0);
      *(undefined8 *)(unaff_x29 + -0x48) = in_stack_00000118;
      in_stack_00000110 = *(Il2CppObject **)(unaff_x29 + -0x48);
      in_stack_00000108 =
           (Il2CppObject *)
           VirtualFuncInvoker1<Il2CppObject*,Il2CppObject*>::Invoke
                     (0x16,*(Il2CppObject **)(unaff_x29 + -8),in_stack_00000110);
      NullCheck(in_stack_00000108);
      auVar13 = InterfaceFuncInvoker0<Il2CppObject*>::Invoke
                          (0,*(Il2CppClass **)
                              Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>__ctor__
                           ,in_stack_00000108);
      in_stack_00000100 = auVar13._0_8_;
      in_stack_000000e8 = unaff_x29 + -0x58;
      *(undefined8 *)(unaff_x29 + -0x58) = in_stack_00000100;
      il2cpp::utils::
      Finally<BaseTreeViewController_OnItemPointerUp_mAE59545C52C0713B2DF882F178F8510828581610::__15>
                ((utils *)&stack0x000000e8,auVar13._8_8_);
      while( true ) {
        pIVar12 = *(Il2CppObject **)(unaff_x29 + -0x58);
        NullCheck(pIVar12);
        uVar4 = InterfaceFuncInvoker0<bool>::Invoke
                          (0,*(Il2CppClass **)
                              Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_TryGetValue__
                           ,pIVar12);
        if ((uVar4 & 1) == 0) break;
        pIVar12 = *(Il2CppObject **)(unaff_x29 + -0x58);
        NullCheck(pIVar12);
        uVar3 = InterfaceFuncInvoker0<int>::Invoke
                          (0,*(Il2CppClass **)
                              Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_Get__
                           ,pIVar12);
        *(undefined4 *)(unaff_x29 + -0x5c) = uVar3;
        bVar2 = VirtualFuncInvoker1<bool,int>::Invoke
                          (0x1a,*(Il2CppObject **)(unaff_x29 + -8),*(int *)(unaff_x29 + -0x5c));
        *(byte *)(unaff_x29 + -0x5d) = bVar2 & 1;
        if ((*(byte *)(unaff_x29 + -0x5d) & 1) != 0) {
          *(byte *)(unaff_x29 + -0x5e) = *(byte *)(unaff_x29 + -0x31) & 1;
          if ((*(byte *)(unaff_x29 + -0x5e) & 1) == 0) {
            pHVar11 = *(HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2 **)(unaff_x29 + -0x40);
            iVar1 = *(int *)(unaff_x29 + -0x5c);
            NullCheck(pHVar11);
            HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB
                      (pHVar11,iVar1,(MethodInfo *)*in_stack_00000048);
          }
          else {
            pHVar11 = *(HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2 **)(unaff_x29 + -0x40);
            iVar1 = *(int *)(unaff_x29 + -0x5c);
            NullCheck(pHVar11);
            HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65
                      (pHVar11,iVar1,(MethodInfo *)*puStack0000000000000050);
          }
        }
      }
      uStack000000000000008c = 0xc;
      il2cpp::utils::
      FinallyHelper<BaseTreeViewController_OnItemPointerUp_mAE59545C52C0713B2DF882F178F8510828581610::$_15,false>
      ::~FinallyHelper((FinallyHelper<BaseTreeViewController_OnItemPointerUp_mAE59545C52C0713B2DF882F178F8510828581610::__15,false>
                        *)&stack0x000000f0);
      pBVar9 = (BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7 *)
               BaseTreeViewController_get_baseTreeView_m0ADC79785331F5C71B1B33A39473441A99F64CA6
                         (*(undefined8 *)(unaff_x29 + -8));
      pLVar10 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73 *)
                Enumerable_ToList_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3E9A8F467117CBA5D91E50BC524DEA85E532EAAC
                          (*(Il2CppObject **)(unaff_x29 + -0x40),
                           *(MethodInfo **)Method_System_Collections_Generic_List<IntPoint>__ctor__)
      ;
      NullCheck(pBVar9);
      BaseTreeView_set_expandedItemIds_m43C10938A0A478F080145817ECB56BBCB5F3E488_inline
                (pBVar9,pLVar10,(MethodInfo *)0x0);
      BaseTreeViewController_RegenerateWrappers_mB8AAD16453FCA5A2333C451F1429AF41318C60CE
                (*(undefined8 *)(unaff_x29 + -8),0);
      pvVar7 = (void *)BaseTreeViewController_get_baseTreeView_m0ADC79785331F5C71B1B33A39473441A99F64CA6
                                 (*(undefined8 *)(unaff_x29 + -8),0);
      NullCheck(pvVar7);
      BaseVerticalCollectionView_RefreshItems_m53943EBC70FFE5C66EE6A7FEF5ECA33DE80AC0D6(pvVar7,0);
      pvVar7 = *(void **)(unaff_x29 + -0x10);
      NullCheck(pvVar7);
      EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB(pvVar7,0);
    }
  }
  return;
}


