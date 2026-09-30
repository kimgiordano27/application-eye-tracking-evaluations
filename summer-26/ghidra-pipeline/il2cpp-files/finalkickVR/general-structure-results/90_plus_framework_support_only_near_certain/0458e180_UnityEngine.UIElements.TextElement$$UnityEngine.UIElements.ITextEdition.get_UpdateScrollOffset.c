/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$UnityEngine.UIElements.ITextEdition.get_UpdateScrollOffset
ENTRY_POINT: 0458e180
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 165
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_19;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_19;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_UIElements_TextElement__UnityEngine_UIElements_ITextEdition_get_UpdateScrollOffset
               (ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *pCVar5;
  EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *pEVar6;
  Il2CppObject *pIVar7;
  ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *pSVar8;
  void *pvVar9;
  Il2CppClass *pIVar10;
  Exception_t *pEVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  MethodInfo *pMVar14;
  long lVar15;
  long unaff_x29;
  undefined1 auVar16 [12];
  undefined4 uStack000000000000003c;
  int iStack0000000000000054;
  undefined8 *in_stack_00000078;
  undefined8 *in_stack_00000080;
  ulong *in_stack_00000088;
  ulong *in_stack_00000090;
  ulong *puStack0000000000000098;
  ulong *puStack00000000000000a0;
  undefined4 in_stack_000000b8;
  undefined4 uStack00000000000000bc;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined8 in_stack_000000e8;
  byte bStack00000000000000f7;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  int iStack000000000000010c;
  Il2CppObject *in_stack_00000110;
  void *in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 uStack000000000000014c;
  undefined4 in_stack_00000150;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  int iStack000000000000018c;
  int in_stack_00000190;
  undefined8 in_stack_000001b0;
  byte bStack00000000000001bb;
  int iStack00000000000001bc;
  int in_stack_000001c0;
  undefined8 in_stack_000001e8;
  Il2CppObject *in_stack_00000210;
  undefined4 in_stack_00000248;
  undefined4 in_stack_000003ac;
  
  puStack00000000000000a0 =
       (ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  *(undefined8 *)(unaff_x29 + -8) = param_2;
  *(undefined8 *)(unaff_x29 + -0x10) = param_4;
  puStack0000000000000098 = param_1;
  if ((ListViewDragger_ApplyDragAndDropUI_mD414F9B1FD970DEB53D832690BF5E0010C26B575::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7_il2cpp_TypeInfo_var_048d8418
              );
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000088);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_Oculus_Interaction_Interactable<DistanceGrabInteractor,_DistanceGrabInteractable>_get_Registry__
              );
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000090);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_ListViewDragger_U3CApplyDragAndDropUIU3Eg__GeometryChangedCallbackU7C27_0_m941C4B71DC02114F847D641A98386CAD4614D5C4_RuntimeMethod_var_048dd498
              );
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000098);
    il2cpp_codegen_initialize_runtime_metadata(puStack00000000000000a0);
    ListViewDragger_ApplyDragAndDropUI_mD414F9B1FD970DEB53D832690BF5E0010C26B575::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined1 *)(unaff_x29 + -0x11) = 0;
  *(undefined1 *)(unaff_x29 + -0x12) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined1 *)(unaff_x29 + -0x31) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined4 *)(unaff_x29 + -0x44) = 0;
  *(undefined4 *)(unaff_x29 + -0x48) = 0;
  *(undefined1 *)(unaff_x29 + -0x49) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined1 *)(unaff_x29 + -0x61) = 0;
  *(undefined4 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(long *)(unaff_x29 + -0x90) = *(long *)(unaff_x29 + -8) + 0x30;
  uVar3 = *in_stack_00000080;
  in_stack_00000078[0x69] = in_stack_00000080[1];
  in_stack_00000078[0x68] = uVar3;
  uVar3 = in_stack_00000080[2];
  in_stack_00000078[0x6b] = in_stack_00000080[3];
  in_stack_00000078[0x6a] = uVar3;
  uVar3 = *(undefined8 *)(unaff_x29 + -0x90);
  in_stack_00000078[99] = in_stack_00000078[0x69];
  in_stack_00000078[0x62] = in_stack_00000078[0x68];
  in_stack_00000078[0x65] = in_stack_00000078[0x6b];
  in_stack_00000078[100] = in_stack_00000078[0x6a];
  bVar1 = DragPosition_Equals_m6185BEC213A54DC167357D9FCAC96F120D6B94BF(uVar3,unaff_x29 + -0xe0,0);
  *(byte *)(unaff_x29 + -0xb1) = bVar1 & 1;
  *(byte *)(unaff_x29 + -0x11) = *(byte *)(unaff_x29 + -0xb1) & 1;
  *(byte *)(unaff_x29 + -0xe1) = *(byte *)(unaff_x29 + -0x11) & 1;
  if ((*(byte *)(unaff_x29 + -0xe1) & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x50);
    *(bool *)(unaff_x29 + -0x12) = *(long *)(unaff_x29 + -0xf0) == 0;
    *(byte *)(unaff_x29 + -0xf1) = *(byte *)(unaff_x29 + -0x12) & 1;
    if ((*(byte *)(unaff_x29 + -0xf1) & 1) != 0) {
      uVar3 = il2cpp_codegen_object_new((Il2CppClass *)*puStack00000000000000a0);
      *(undefined8 *)(unaff_x29 + -0x100) = uVar3;
      VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D
                (*(undefined8 *)(unaff_x29 + -0x100));
      *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x50) = *(undefined8 *)(unaff_x29 + -0x100);
      Il2CppCodeGenWriteBarrier
                ((void **)(*(long *)(unaff_x29 + -8) + 0x50),*(void **)(unaff_x29 + -0x100));
      pvVar9 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000088);
      lVar15 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
      uVar3 = *(undefined8 *)(lVar15 + 0x40);
      NullCheck(pvVar9);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar9,uVar3,0);
      pvVar9 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
      NullCheck(pvVar9);
      pvVar9 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(pvVar9,0);
      pvVar4 = (void *)ListViewDragger_get_targetView_m4DB8D97CBF8ED9B5B004F5A9CA1C4B1993F37FC0
                                 (*(undefined8 *)(unaff_x29 + -8),0);
      NullCheck(pvVar4);
      VisualElement_get_localBound_m449E6720326BE6E4AD69346B0D8D179170ED6EF7(pvVar4,0);
      in_stack_00000078[0x57] = in_stack_00000078[0x55];
      in_stack_00000078[0x56] = in_stack_00000078[0x54];
      in_stack_00000078[0x79] = in_stack_00000078[0x57];
      in_stack_00000078[0x78] = in_stack_00000078[0x56];
      uVar2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline
                        ((Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D *)(unaff_x29 + -0x30),
                         (MethodInfo *)0x0);
      auVar16 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(uVar2,0);
      NullCheck(pvVar9);
      InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8>::Invoke
                ((InterfaceActionInvoker1<StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8> *)
                 0x36,*in_stack_00000090,pvVar9,auVar16._0_8_,
                 CONCAT44(in_stack_000003ac,auVar16._8_4_));
      pvVar9 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
      NullCheck(pvVar9);
      pvVar9 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(pvVar9,0);
      uVar3 = StyleEnum_1_op_Implicit_m31B19E05201FD8DD47FDC5352F7A052FACC3782E
                        (1,(MethodInfo *)*puStack0000000000000098);
      NullCheck(pvVar9);
      InterfaceActionInvoker1<StyleEnum_1_t4ADD569E34B475D3DC8CA33E13A80CA59AA1C07D>::Invoke
                (0x34,*in_stack_00000090,pvVar9,uVar3);
      pvVar9 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
      NullCheck(pvVar9);
      VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar9,1,0);
      pCVar5 = (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)
               ListViewDragger_get_targetView_m4DB8D97CBF8ED9B5B004F5A9CA1C4B1993F37FC0
                         (*(undefined8 *)(unaff_x29 + -8),0);
      pEVar6 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
               il2cpp_codegen_object_new
                         (*(Il2CppClass **)
                           Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__
                         );
      EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
                (pEVar6,*(Il2CppObject **)(unaff_x29 + -8),
                 *(long *)
                  PTR_ListViewDragger_U3CApplyDragAndDropUIU3Eg__GeometryChangedCallbackU7C27_0_m941C4B71DC02114F847D641A98386CAD4614D5C4_RuntimeMethod_var_048dd498
                 ,(MethodInfo *)0x0);
      NullCheck(pCVar5);
      CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
                (pCVar5,pEVar6,0,
                 *(MethodInfo **)
                  Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__);
      pSVar8 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)
               ListViewDragger_get_targetScrollView_m02748BB3D880B454FD1E0EB4137BC5B270F8C7A4
                         (*(undefined8 *)(unaff_x29 + -8),0);
      NullCheck(pSVar8);
      pvVar9 = (void *)ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline
                                 (pSVar8,(MethodInfo *)0x0);
      uVar3 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x50);
      NullCheck(pvVar9);
      VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar9,uVar3,0);
    }
    if (*(long *)(*(long *)(unaff_x29 + -8) + 0x58) == 0) {
      pIVar7 = (Il2CppObject *)
               ListViewDragger_get_targetView_m4DB8D97CBF8ED9B5B004F5A9CA1C4B1993F37FC0
                         (*(undefined8 *)(unaff_x29 + -8),0);
      lVar15 = IsInstClass(pIVar7,*(Il2CppClass **)
                                   PTR_BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7_il2cpp_TypeInfo_var_048d8418
                          );
      *(uint *)(unaff_x29 + -0x68) = (uint)(lVar15 != 0);
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x68) = 0;
    }
    *(bool *)(unaff_x29 + -0x31) = *(int *)(unaff_x29 + -0x68) != 0;
    if ((*(byte *)(unaff_x29 + -0x31) & 1) != 0) {
      pvVar9 = (void *)il2cpp_codegen_object_new((Il2CppClass *)*puStack00000000000000a0);
      VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar9);
      *(void **)(*(long *)(unaff_x29 + -8) + 0x58) = pvVar9;
      Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x58),pvVar9);
      pvVar9 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000088);
      lVar15 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
      uVar3 = *(undefined8 *)(lVar15 + 0x48);
      NullCheck(pvVar9);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar9,uVar3,0);
      pvVar9 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(pvVar9);
      pvVar9 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(pvVar9,0);
      uVar3 = StyleEnum_1_op_Implicit_m31B19E05201FD8DD47FDC5352F7A052FACC3782E
                        (1,(MethodInfo *)*puStack0000000000000098);
      NullCheck(pvVar9);
      InterfaceActionInvoker1<StyleEnum_1_t4ADD569E34B475D3DC8CA33E13A80CA59AA1C07D>::Invoke
                (0x34,*in_stack_00000090,pvVar9,uVar3);
      pvVar9 = *(void **)(*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(pvVar9);
      VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar9,1,0);
      pvVar9 = *(void **)(*(long *)(unaff_x29 + -8) + 0x50);
      uVar3 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x58);
      NullCheck(pvVar9);
      VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar9,uVar3,0);
      pvVar9 = (void *)il2cpp_codegen_object_new((Il2CppClass *)*puStack00000000000000a0);
      VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar9,0);
      *(void **)(*(long *)(unaff_x29 + -8) + 0x60) = pvVar9;
      Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x60),pvVar9);
      pvVar9 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
      lVar15 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
      uVar3 = *(undefined8 *)(lVar15 + 0x48);
      NullCheck(pvVar9);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar9,uVar3,0);
      pvVar9 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
      NullCheck(pvVar9);
      pvVar9 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(pvVar9,0);
      uVar3 = StyleEnum_1_op_Implicit_m31B19E05201FD8DD47FDC5352F7A052FACC3782E
                        (1,(MethodInfo *)*puStack0000000000000098);
      NullCheck(pvVar9);
      InterfaceActionInvoker1<StyleEnum_1_t4ADD569E34B475D3DC8CA33E13A80CA59AA1C07D>::Invoke
                (0x34,*in_stack_00000090,pvVar9,uVar3);
      pvVar9 = *(void **)(*(long *)(unaff_x29 + -8) + 0x60);
      NullCheck(pvVar9);
      VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar9,1,0);
      pSVar8 = (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9 *)
               ListViewDragger_get_targetScrollView_m02748BB3D880B454FD1E0EB4137BC5B270F8C7A4
                         (*(undefined8 *)(unaff_x29 + -8),0);
      NullCheck(pSVar8);
      pvVar9 = (void *)ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline
                                 (pSVar8,(MethodInfo *)0x0);
      uVar3 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x60);
      NullCheck(pvVar9);
      VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar9,uVar3,0);
    }
    VirtualActionInvoker1<bool>::Invoke(10,*(Il2CppObject **)(unaff_x29 + -8),false);
    uVar3 = *in_stack_00000080;
    in_stack_00000078[0x21] = in_stack_00000080[1];
    in_stack_00000078[0x20] = uVar3;
    uVar3 = in_stack_00000080[2];
    in_stack_00000078[0x23] = in_stack_00000080[3];
    in_stack_00000078[0x22] = uVar3;
    lVar15 = *(long *)(unaff_x29 + -8);
    uVar3 = in_stack_00000078[0x20];
    *(undefined8 *)(lVar15 + 0x38) = in_stack_00000078[0x21];
    *(undefined8 *)(lVar15 + 0x30) = uVar3;
    uVar3 = in_stack_00000078[0x22];
    *(undefined8 *)(lVar15 + 0x48) = in_stack_00000078[0x23];
    *(undefined8 *)(lVar15 + 0x40) = uVar3;
    Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x40),(void *)0x0);
    uVar3 = *in_stack_00000080;
    in_stack_00000078[0x1d] = in_stack_00000080[1];
    in_stack_00000078[0x1c] = uVar3;
    uVar3 = in_stack_00000080[2];
    in_stack_00000078[0x1f] = in_stack_00000080[3];
    in_stack_00000078[0x1e] = uVar3;
    *(undefined4 *)(unaff_x29 + -0x48) = in_stack_00000248;
    *(undefined4 *)(unaff_x29 + -0x44) = *(undefined4 *)(unaff_x29 + -0x48);
    iStack0000000000000054 = *(int *)(unaff_x29 + -0x44);
    if (iStack0000000000000054 == 0) {
      uVar3 = *in_stack_00000080;
      in_stack_00000078[0x17] = in_stack_00000080[1];
      in_stack_00000078[0x16] = uVar3;
      uVar3 = in_stack_00000080[2];
      in_stack_00000078[0x19] = in_stack_00000080[3];
      in_stack_00000078[0x18] = uVar3;
      NullCheck(in_stack_00000210);
      pvVar9 = (void *)VirtualFuncInvoker0<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>
                       ::Invoke(4,in_stack_00000210);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000088);
      lVar15 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000088);
      in_stack_000001e8 = *(undefined8 *)(lVar15 + 0x50);
      NullCheck(pvVar9);
      VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1
                (pvVar9,in_stack_000001e8,0);
    }
    else if (iStack0000000000000054 == 1) {
      uVar3 = *in_stack_00000080;
      in_stack_00000078[0xf] = in_stack_00000080[1];
      in_stack_00000078[0xe] = uVar3;
      uVar3 = in_stack_00000080[2];
      in_stack_00000078[0x11] = in_stack_00000080[3];
      in_stack_00000078[0x10] = uVar3;
      iStack00000000000001bc = in_stack_000001c0;
      *(bool *)(unaff_x29 + -0x49) = in_stack_000001c0 == 0;
      bStack00000000000001bb = *(byte *)(unaff_x29 + -0x49) & 1;
      if (bStack00000000000001bb == 0) {
        uVar3 = ListViewDragger_get_targetView_m4DB8D97CBF8ED9B5B004F5A9CA1C4B1993F37FC0
                          (*(undefined8 *)(unaff_x29 + -8));
        uVar12 = *in_stack_00000080;
        in_stack_00000078[9] = in_stack_00000080[1];
        in_stack_00000078[8] = uVar12;
        uVar12 = in_stack_00000080[2];
        in_stack_00000078[0xb] = in_stack_00000080[3];
        in_stack_00000078[10] = uVar12;
        iStack000000000000018c = in_stack_00000190;
        in_stack_000001b0 = uVar3;
        uVar2 = il2cpp_codegen_subtract<int,int>(in_stack_00000190,1);
        in_stack_00000180 =
             ListViewDraggerExtension_GetRecycledItemFromIndex_m2DCBCAD63977E19CCB2888783463D3CCB7956F5C
                       (uVar3,uVar2,0);
        *(undefined8 *)(unaff_x29 + -0x58) = in_stack_00000180;
        in_stack_00000178 =
             ListViewDragger_get_targetView_m4DB8D97CBF8ED9B5B004F5A9CA1C4B1993F37FC0
                       (*(undefined8 *)(unaff_x29 + -8),0);
        uVar3 = *in_stack_00000080;
        in_stack_00000078[1] = in_stack_00000080[1];
        *in_stack_00000078 = uVar3;
        uVar3 = in_stack_00000080[2];
        in_stack_00000078[3] = in_stack_00000080[3];
        in_stack_00000078[2] = uVar3;
        uStack000000000000014c = in_stack_00000150;
        in_stack_00000140 =
             ListViewDraggerExtension_GetRecycledItemFromIndex_m2DCBCAD63977E19CCB2888783463D3CCB7956F5C
                       (in_stack_00000178,in_stack_00000150,0);
        *(undefined8 *)(unaff_x29 + -0x60) = in_stack_00000140;
        in_stack_00000130 = *(long *)(unaff_x29 + -0x58);
        if (in_stack_00000130 == 0) {
          *(undefined8 *)(unaff_x29 + -0x80) = 0;
          *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -8);
          in_stack_00000128 = *(undefined8 *)(unaff_x29 + -0x60);
          *(undefined8 *)(unaff_x29 + -0x70) = in_stack_00000128;
          *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x88);
        }
        else {
          *(long *)(unaff_x29 + -0x70) = in_stack_00000130;
          *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -8);
        }
        in_stack_00000138 = in_stack_00000130;
        NullCheck(*(void **)(unaff_x29 + -0x78));
        ListViewDragger_PlaceHoverBarAtElement_mBC2FA85BF6F4845A5C5B4A809BDE1CE8A81B2488
                  (*(undefined8 *)(unaff_x29 + -0x78),*(undefined8 *)(unaff_x29 + -0x70),0);
      }
      else {
        ListViewDragger_PlaceHoverBarAt_m75ED5016B89F1BE93F61B9391E2BDE5E094B6459
                  (0,0xbf800000,*(undefined8 *)(unaff_x29 + -8),0);
      }
    }
    else {
      if (iStack0000000000000054 != 2) {
        in_stack_000000c8 = in_stack_00000080[1];
        in_stack_000000c0 = *in_stack_00000080;
        _uStack00000000000000d8 = in_stack_00000080[3];
        in_stack_000000d0 = in_stack_00000080[2];
        uStack00000000000000bc = uStack00000000000000d8;
        in_stack_000000b8 = uStack00000000000000d8;
        pIVar10 = (Il2CppClass *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             PTR_DragAndDropPosition_tC9A4DD8C1BF3067240258FF2C81E5F31CEE007AF_il2cpp_TypeInfo_var_048dd4a0
                            );
        uVar3 = Box(pIVar10,&stack0x000000b8);
        pIVar10 = (Il2CppClass *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_RemoveAtWithCapacity__
                            );
        pEVar11 = (Exception_t *)il2cpp_codegen_object_new(pIVar10);
        uVar12 = il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)
                            PTR__stringLiteral339AE633A126FEC69EC6FD596C38D2C566A78441_048dd4a8);
        uVar13 = il2cpp_codegen_initialize_runtime_metadata_inline
                           ((ulong *)
                            PTR__stringLiteralE633DA441A7457CF264DF82F7B1BA15F1A2A835B_048dd4b0);
        ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85
                  (pEVar11,uVar12,uVar3,uVar13,0);
        pMVar14 = (MethodInfo *)
                  il2cpp_codegen_initialize_runtime_metadata_inline
                            ((ulong *)
                             PTR_ListViewDragger_ApplyDragAndDropUI_mD414F9B1FD970DEB53D832690BF5E0010C26B575_RuntimeMethod_var_048dd4b8
                            );
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar11,pMVar14);
      }
      in_stack_00000120 =
           ListViewDragger_get_targetView_m4DB8D97CBF8ED9B5B004F5A9CA1C4B1993F37FC0
                     (0,*(undefined8 *)(unaff_x29 + -8));
      in_stack_00000118 =
           (void *)ListViewDragger_get_targetView_m4DB8D97CBF8ED9B5B004F5A9CA1C4B1993F37FC0
                             (*(undefined8 *)(unaff_x29 + -8),0);
      NullCheck(in_stack_00000118);
      in_stack_00000110 =
           (Il2CppObject *)
           BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496
                     (in_stack_00000118,0);
      NullCheck(in_stack_00000110);
      uStack000000000000003c = 1;
      iStack000000000000010c =
           InterfaceFuncInvoker0<int>::Invoke
                     (1,*(Il2CppClass **)
                         Method_Oculus_Interaction_Interactable<DistanceGrabInteractor,_DistanceGrabInteractable>_get_Registry__
                      ,in_stack_00000110);
      uVar3 = in_stack_00000120;
      uVar2 = il2cpp_codegen_subtract<int,int>(iStack000000000000010c,1);
      in_stack_00000100 =
           ListViewDraggerExtension_GetRecycledItemFromIndex_m2DCBCAD63977E19CCB2888783463D3CCB7956F5C
                     (uVar3,uVar2,0);
      *(undefined8 *)(unaff_x29 + -0x40) = in_stack_00000100;
      in_stack_000000f8 = *(long *)(unaff_x29 + -0x40);
      *(byte *)(unaff_x29 + -0x61) = in_stack_000000f8 != 0 & (byte)uStack000000000000003c;
      bStack00000000000000f7 = *(byte *)(unaff_x29 + -0x61) & (byte)uStack000000000000003c;
      if ((bStack00000000000000f7 & 1) == 0) {
        ListViewDragger_PlaceHoverBarAt_m75ED5016B89F1BE93F61B9391E2BDE5E094B6459
                  (0,0xbf800000,*(undefined8 *)(unaff_x29 + -8),0);
      }
      else {
        in_stack_000000e8 = *(undefined8 *)(unaff_x29 + -0x40);
        ListViewDragger_PlaceHoverBarAtElement_mBC2FA85BF6F4845A5C5B4A809BDE1CE8A81B2488
                  (*(undefined8 *)(unaff_x29 + -8),in_stack_000000e8,0);
      }
    }
  }
  return;
}


