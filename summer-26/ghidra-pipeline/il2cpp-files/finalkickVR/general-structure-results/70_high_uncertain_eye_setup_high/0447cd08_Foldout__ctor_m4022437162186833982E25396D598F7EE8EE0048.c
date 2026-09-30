/*
FUNCTION_NAME: Foldout__ctor_m4022437162186833982E25396D598F7EE8EE0048
ENTRY_POINT: 0447cd08
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Foldout__ctor_m4022437162186833982E25396D598F7EE8EE0048
               (Il2CppObject *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103 *pEVar6;
  long lVar7;
  Action_2_t4FD84D64C1341169AC2F73750A356411BCEAF88A *pAVar8;
  EventCallback_1_t1FFCCC98AE7C52F427D11F1609ED56BE1E4AEF88 *pEVar9;
  Il2CppObject *pIVar10;
  undefined8 uVar11;
  BaseField_1_t33E37D3A182C1DDE900EA4039FE03BF68FD0CD26 *pBVar12;
  undefined8 uVar13;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  Il2CppObject *local_28;
  
  puVar3 = PTR_Foldout_t150CF00C27D0C105EC2831E0BA1C5D8A96EF5DC3_il2cpp_TypeInfo_var_048d85a8;
  puVar2 = 
  PTR_BaseField_1_get_visualInput_m6A3524290300B23D39D5D57B06FEDFC8A8103286_RuntimeMethod_var_048d85a0
  ;
  puVar1 = PTR_Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_il2cpp_TypeInfo_var_048d84a0;
  local_30 = param_2;
  local_28 = param_1;
  if ((Foldout__ctor_m4022437162186833982E25396D598F7EE8EE0048::s_Il2CppMethodInitialized & 1) == 0)
  {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Action_2_t4FD84D64C1341169AC2F73750A356411BCEAF88A_il2cpp_TypeInfo_var_048d89c8);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103_il2cpp_TypeInfo_var_048d85b8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Foldout_Apply_m986F0D86FB830F20B274C436D5713C1FB0A3334B_RuntimeMethod_var_048d9428
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Foldout_OnAttachToPanel_mD7533E9F1E302EA24E18162E66402ECB0C5AED54_RuntimeMethod_var_048d9430
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_Foldout_U3C_ctorU3Eb__29_0_mEB5F969EF4F0C7800F153193DF2A92B082684633_RuntimeMethod_var_048d9438
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90_RuntimeMethod_var_048d85d8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_KeyboardNavigationManipulator_t7E9BA3568ADC1660C4E09B924ECD457E33B835B3_il2cpp_TypeInfo_var_048d8a00
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<Vector4>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)PTR__stringLiteral3FC72EB96BC4752D2217AE6BEE20806E886F8AFB_048d9440);
    Foldout__ctor_m4022437162186833982E25396D598F7EE8EE0048::s_Il2CppMethodInitialized = 1;
  }
  local_38 = (void *)0x0;
  local_40 = 0;
  BindableElement__ctor_m827E1D7852F342FCC582E31E9857F6976D958454(local_28);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_28,*puVar4,0);
  pvVar5 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Toggle__ctor_mE11B7E9846C56B588C2FCECD43BA701104F71676(pvVar5,0);
  *(void **)(local_28 + 0x3d8) = pvVar5;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x3d8),pvVar5);
  pvVar5 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar5,0);
  NullCheck(pvVar5);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC
            (pvVar5,*(undefined8 *)
                     PTR__stringLiteral3FC72EB96BC4752D2217AE6BEE20806E886F8AFB_048d9440,0);
  *(void **)(local_28 + 0x3e0) = pvVar5;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x3e0),pvVar5);
  pIVar10 = *(Il2CppObject **)(local_28 + 0x3d8);
  pEVar6 = (EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       PTR_EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103_il2cpp_TypeInfo_var_048d85b8
                     );
  EventCallback_1__ctor_m2AECF13AF3DE354C723AC2C870875E894C4D96C9
            (pEVar6,local_28,
             *(long *)
              PTR_Foldout_U3C_ctorU3Eb__29_0_mEB5F969EF4F0C7800F153193DF2A92B082684633_RuntimeMethod_var_048d9438
             ,(MethodInfo *)0x0);
  INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90
            (pIVar10,pEVar6,
             *(MethodInfo **)
              PTR_INotifyValueChangedExtensions_RegisterValueChangedCallback_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21346157EFCB13A3F77EDC25116E4898A4C1FB90_RuntimeMethod_var_048d85d8
            );
  pvVar5 = *(void **)(local_28 + 0x3d8);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  uVar11 = *(undefined8 *)(lVar7 + 8);
  NullCheck(pvVar5);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar5,uVar11,0);
  pBVar12 = *(BaseField_1_t33E37D3A182C1DDE900EA4039FE03BF68FD0CD26 **)(local_28 + 0x3d8);
  NullCheck(pBVar12);
  pvVar5 = (void *)BaseField_1_get_visualInput_m6A3524290300B23D39D5D57B06FEDFC8A8103286
                             (pBVar12,*(MethodInfo **)puVar2);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  uVar11 = *(undefined8 *)(lVar7 + 0x18);
  NullCheck(pvVar5);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar5,uVar11,0);
  pBVar12 = *(BaseField_1_t33E37D3A182C1DDE900EA4039FE03BF68FD0CD26 **)(local_28 + 0x3d8);
  NullCheck(pBVar12);
  uVar11 = BaseField_1_get_visualInput_m6A3524290300B23D39D5D57B06FEDFC8A8103286
                     (pBVar12,*(MethodInfo **)puVar2);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  uVar13 = *(undefined8 *)(lVar7 + 0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Nullable<Vector4>_get_HasValue__);
  pvVar5 = (void *)UQueryExtensions_Q_m95306617BF08AC2853EABB5299786D2095BE631E(uVar11,0,uVar13);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  uVar11 = *(undefined8 *)(lVar7 + 0x20);
  NullCheck(pvVar5);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar5,uVar11,0);
  uVar11 = *(undefined8 *)(local_28 + 0x3d8);
  pAVar8 = (Action_2_t4FD84D64C1341169AC2F73750A356411BCEAF88A *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       PTR_Action_2_t4FD84D64C1341169AC2F73750A356411BCEAF88A_il2cpp_TypeInfo_var_048d89c8
                     );
  Action_2__ctor_m56478DC9F2C2C7B89B665FC269F757E9891ADA72
            (pAVar8,local_28,
             *(long *)
              PTR_Foldout_Apply_m986F0D86FB830F20B274C436D5713C1FB0A3334B_RuntimeMethod_var_048d9428
             ,(MethodInfo *)0x0);
  pvVar5 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               PTR_KeyboardNavigationManipulator_t7E9BA3568ADC1660C4E09B924ECD457E33B835B3_il2cpp_TypeInfo_var_048d8a00
                             );
  KeyboardNavigationManipulator__ctor_m7098F151C16E426B7E4272AB0D5ECDB0B45BA7D1(pvVar5,pAVar8,0);
  *(void **)(local_28 + 0x3f0) = pvVar5;
  local_38 = pvVar5;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x3f0),pvVar5);
  VisualElementExtensions_AddManipulator_m3579CA75D8F76245DC3B7C9F5FCB9B769D69E27D
            (uVar11,local_38,0);
  local_40 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                       ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)local_28,
                        (MethodInfo *)0x0);
  Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648
            (&local_40,*(undefined8 *)(local_28 + 0x3d8),0);
  pvVar5 = *(void **)(local_28 + 0x3e0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  uVar11 = *(undefined8 *)(lVar7 + 0x10);
  NullCheck(pvVar5);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar5,uVar11,0);
  local_40 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                       ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)local_28,
                        (MethodInfo *)0x0);
  Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648
            (&local_40,*(undefined8 *)(local_28 + 0x3e0),0);
  pEVar9 = (EventCallback_1_t1FFCCC98AE7C52F427D11F1609ED56BE1E4AEF88 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__)
  ;
  EventCallback_1__ctor_m929B5D5292DB931820A52428141FECB39016A6B7
            (pEVar9,local_28,
             *(long *)
              PTR_Foldout_OnAttachToPanel_mD7533E9F1E302EA24E18162E66402ECB0C5AED54_RuntimeMethod_var_048d9430
             ,(MethodInfo *)0x0);
  CallbackEventHandler_RegisterCallback_TisAttachToPanelEvent_t95C0BC3DD37F324A7816CB2574B56D976C932B28_mE90FCB724E9E49659FDCAE9A1BB0FC9BA01C9BEF
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)local_28,pEVar9,0,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__);
  Foldout_SetValueWithoutNotify_m550EFF72160E027A5B398A5B666A64289F81D203(local_28,1,0);
  return;
}


