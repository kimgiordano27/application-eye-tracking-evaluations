/*
FUNCTION_NAME: ReusableTreeViewItem_InitExpandHierarchy_mCDC8EAA2A7C8DD446319BD4236A3A07F58873B9A
ENTRY_POINT: 04453c4c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_6;functionality_gaze_interaction_hits_6
*/


void ReusableTreeViewItem_InitExpandHierarchy_mCDC8EAA2A7C8DD446319BD4236A3A07F58873B9A
               (long param_1,void *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *pVVar12;
  BaseField_1_t33E37D3A182C1DDE900EA4039FE03BF68FD0CD26 *pBVar13;
  undefined8 uVar14;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  puVar7 = 
  PTR_StyleEnum_1_op_Implicit_m9CC7BE6DFC463FD482DC9D6E3A496FCD0017FCCD_RuntimeMethod_var_048d85b0;
  puVar6 = PTR_Foldout_t150CF00C27D0C105EC2831E0BA1C5D8A96EF5DC3_il2cpp_TypeInfo_var_048d85a8;
  puVar5 = 
  PTR_BaseField_1_get_visualInput_m6A3524290300B23D39D5D57B06FEDFC8A8103286_RuntimeMethod_var_048d85a0
  ;
  puVar4 = PTR_Toggle_t27BE43456B97DD7A793D272D3318F9FE682B844C_il2cpp_TypeInfo_var_048d84a0;
  puVar3 = PTR_BaseTreeView_t4B72EA959CB8F22C78269844A43D51C4AB360DD7_il2cpp_TypeInfo_var_048d8418;
  puVar2 = Method_System_Nullable<InputUserAccountHandle>_get_HasValue__;
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if ((ReusableTreeViewItem_InitExpandHierarchy_mCDC8EAA2A7C8DD446319BD4236A3A07F58873B9A::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseField_1_get_visualInput_m6A3524290300B23D39D5D57B06FEDFC8A8103286_RuntimeMethod_var_048d85a0
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar6);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar7);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<Vector4>_get_HasValue__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    ReusableTreeViewItem_InitExpandHierarchy_mCDC8EAA2A7C8DD446319BD4236A3A07F58873B9A::
    s_Il2CppMethodInitialized = 1;
  }
  local_48 = 0;
  *(void **)(local_28 + 0x50) = local_30;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x50),local_30);
  pvVar11 = *(void **)(local_28 + 0x50);
  NullCheck(pvVar11);
  pvVar11 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(pvVar11);
  uVar8 = StyleEnum_1_op_Implicit_m9CC7BE6DFC463FD482DC9D6E3A496FCD0017FCCD
                    (2,*(MethodInfo **)puVar7);
  NullCheck(pvVar11);
  InterfaceActionInvoker1<StyleEnum_1_t4C47F320FF81E91A50EC2AD0D70A3D620362BBAE>::Invoke
            (0x14,*(undefined8 *)puVar2,pvVar11,uVar8);
  pvVar11 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar11,0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  uVar8 = *(undefined8 *)(lVar9 + 0x20);
  NullCheck(pvVar11);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(pvVar11,uVar8,0);
  NullCheck(pvVar11);
  pvVar10 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(pvVar11,0);
  uVar8 = StyleEnum_1_op_Implicit_m9CC7BE6DFC463FD482DC9D6E3A496FCD0017FCCD
                    (2,*(MethodInfo **)puVar7);
  NullCheck(pvVar10);
  InterfaceActionInvoker1<StyleEnum_1_t4C47F320FF81E91A50EC2AD0D70A3D620362BBAE>::Invoke
            (0x14,*(undefined8 *)puVar2,pvVar10,uVar8);
  *(void **)(local_28 + 0x58) = pvVar11;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x58),pvVar11);
  pVVar12 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 **)(local_28 + 0x50);
  NullCheck(pVVar12);
  local_48 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                       (pVVar12,(MethodInfo *)0x0);
  Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648
            (&local_48,*(undefined8 *)(local_28 + 0x58),0);
  pvVar11 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar4);
  Toggle__ctor_mE11B7E9846C56B588C2FCECD43BA701104F71676(pvVar11,0);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  uVar8 = *(undefined8 *)(lVar9 + 0x10);
  NullCheck(pvVar11);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(pvVar11,uVar8,0);
  NullCheck(pvVar11);
  VisualElement_set_userData_mBE9192EE3470BC5B061DFB86B7A38C97DB816F66(pvVar11,local_28,0);
  *(void **)(local_28 + 0x48) = pvVar11;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x48),pvVar11);
  pvVar11 = *(void **)(local_28 + 0x48);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar6);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar6);
  uVar8 = *(undefined8 *)(lVar9 + 8);
  NullCheck(pvVar11);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar11,uVar8,0);
  pvVar11 = *(void **)(local_28 + 0x48);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  uVar8 = *(undefined8 *)(lVar9 + 0x10);
  NullCheck(pvVar11);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar11,uVar8,0);
  pBVar13 = *(BaseField_1_t33E37D3A182C1DDE900EA4039FE03BF68FD0CD26 **)(local_28 + 0x48);
  NullCheck(pBVar13);
  pvVar11 = (void *)BaseField_1_get_visualInput_m6A3524290300B23D39D5D57B06FEDFC8A8103286
                              (pBVar13,*(MethodInfo **)puVar5);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar6);
  uVar8 = *(undefined8 *)(lVar9 + 0x18);
  NullCheck(pvVar11);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar11,uVar8,0);
  pBVar13 = *(BaseField_1_t33E37D3A182C1DDE900EA4039FE03BF68FD0CD26 **)(local_28 + 0x48);
  NullCheck(pBVar13);
  uVar8 = BaseField_1_get_visualInput_m6A3524290300B23D39D5D57B06FEDFC8A8103286
                    (pBVar13,*(MethodInfo **)puVar5);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
  uVar14 = *(undefined8 *)(lVar9 + 0x20);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Nullable<Vector4>_get_HasValue__);
  pvVar11 = (void *)UQueryExtensions_Q_m95306617BF08AC2853EABB5299786D2095BE631E(uVar8,0,uVar14);
  *(void **)(local_28 + 0x68) = pvVar11;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x68),pvVar11);
  pvVar11 = *(void **)(local_28 + 0x68);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar6);
  uVar8 = *(undefined8 *)(lVar9 + 0x20);
  NullCheck(pvVar11);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar11,uVar8,0);
  pVVar12 = *(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 **)(local_28 + 0x50);
  NullCheck(pVVar12);
  local_48 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                       (pVVar12,(MethodInfo *)0x0);
  Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648
            (&local_48,*(undefined8 *)(local_28 + 0x48),0);
  pvVar11 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar11,0);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  NullCheck(pvVar11);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(pvVar11,uVar8,0);
  NullCheck(pvVar11);
  pvVar10 = (void *)VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(pvVar11,0);
  uVar8 = StyleFloat_op_Implicit_m534A028510332FD68BBBAF6C96028FAE936A2DDB(0x3f800000,0);
  NullCheck(pvVar10);
  InterfaceActionInvoker1<StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841>::Invoke
            (0x15,*(undefined8 *)puVar2,pvVar10,uVar8);
  *(void **)(local_28 + 0x60) = pvVar11;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x60),pvVar11);
  pvVar11 = *(void **)(local_28 + 0x60);
  lVar9 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  NullCheck(pvVar11);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar11,uVar8,0);
  pvVar11 = *(void **)(local_28 + 0x50);
  uVar8 = *(undefined8 *)(local_28 + 0x60);
  NullCheck(pvVar11);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar11,uVar8,0);
  uVar8 = local_38;
  pvVar11 = *(void **)(local_28 + 0x60);
  NullCheck(pvVar11);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar11,uVar8,0);
  return;
}


