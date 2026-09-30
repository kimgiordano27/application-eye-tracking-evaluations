/*
FUNCTION_NAME: RadioButton__ctor_mA19672A120C51D898FC14F051BE441E799150D74
ENTRY_POINT: 04561250
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void RadioButton__ctor_mA19672A120C51D898FC14F051BE441E799150D74
               (BaseField_1_t33E37D3A182C1DDE900EA4039FE03BF68FD0CD26 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  EventCallback_1_t1FFCCC98AE7C52F427D11F1609ED56BE1E4AEF88 *pEVar6;
  EventCallback_1_tCE5E8F1D2A7EE5EC636D68025C6D899BD17EF38B *pEVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_RadioButton_t47B7368AB0B24A865401F69F0AC0BFB54F3CE8C8_il2cpp_TypeInfo_var_048dca50;
  puVar1 = 
  PTR_BaseField_1_get_visualInput_m6A3524290300B23D39D5D57B06FEDFC8A8103286_RuntimeMethod_var_048d85a0
  ;
  if ((RadioButton__ctor_mA19672A120C51D898FC14F051BE441E799150D74::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseField_1_get_labelElement_mA164849E98B4DCBCBD6BEFBE33311022B1967769_RuntimeMethod_var_048dca58
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_RadioButton_OnOptionAttachToPanel_m5900393B0D2B89803BF71E359847C3EF3F8FFE82_RuntimeMethod_var_048dca60
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_RadioButton_OnOptionDetachFromPanel_mE1EE5DF58398D7CA8552ED6D96EB1C80F5192030_RuntimeMethod_var_048dca68
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    RadioButton__ctor_mA19672A120C51D898FC14F051BE441E799150D74::s_Il2CppMethodInitialized = 1;
  }
  BaseBoolField__ctor_m03425F09EE8336FD178562D05EB43ABDFBBAF0BB(param_1,param_2);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(param_1,*puVar3,0);
  pvVar4 = (void *)BaseField_1_get_visualInput_m6A3524290300B23D39D5D57B06FEDFC8A8103286
                             (param_1,*(MethodInfo **)puVar1);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar8 = *(undefined8 *)(lVar5 + 0x10);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar8,0);
  pvVar4 = (void *)BaseField_1_get_labelElement_mA164849E98B4DCBCBD6BEFBE33311022B1967769_inline
                             (param_1,*(MethodInfo **)
                                       PTR_BaseField_1_get_labelElement_mA164849E98B4DCBCBD6BEFBE33311022B1967769_RuntimeMethod_var_048dca58
                             );
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar8 = *(undefined8 *)(lVar5 + 8);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar8,0);
  pvVar4 = *(void **)(param_1 + 0x448);
  NullCheck(pvVar4);
  VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64(pvVar4,0);
  pvVar4 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar4,0);
  NullCheck(pvVar4);
  VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar4,1,0);
  *(void **)(param_1 + 0x460) = pvVar4;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x460),pvVar4);
  pvVar4 = *(void **)(param_1 + 0x460);
  uVar8 = *(undefined8 *)(param_1 + 0x448);
  NullCheck(pvVar4);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar4,uVar8,0);
  pvVar4 = *(void **)(param_1 + 0x460);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar8 = *(undefined8 *)(lVar5 + 0x18);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar8,0);
  pvVar4 = *(void **)(param_1 + 0x448);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar8 = *(undefined8 *)(lVar5 + 0x20);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar8,0);
  pvVar4 = (void *)BaseField_1_get_visualInput_m6A3524290300B23D39D5D57B06FEDFC8A8103286
                             (param_1,*(MethodInfo **)puVar1);
  uVar8 = *(undefined8 *)(param_1 + 0x460);
  NullCheck(pvVar4);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar4,uVar8,0);
  RadioButton_UpdateCheckmark_m6EEE91D7254F56E86BECB96DAC2C99AC8F56CCD2(param_1,0);
  pEVar6 = (EventCallback_1_t1FFCCC98AE7C52F427D11F1609ED56BE1E4AEF88 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__)
  ;
  EventCallback_1__ctor_m929B5D5292DB931820A52428141FECB39016A6B7
            (pEVar6,(Il2CppObject *)param_1,
             *(long *)
              PTR_RadioButton_OnOptionAttachToPanel_m5900393B0D2B89803BF71E359847C3EF3F8FFE82_RuntimeMethod_var_048dca60
             ,(MethodInfo *)0x0);
  CallbackEventHandler_RegisterCallback_TisAttachToPanelEvent_t95C0BC3DD37F324A7816CB2574B56D976C932B28_mE90FCB724E9E49659FDCAE9A1BB0FC9BA01C9BEF
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)param_1,pEVar6,0,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__);
  pEVar7 = (EventCallback_1_tCE5E8F1D2A7EE5EC636D68025C6D899BD17EF38B *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__)
  ;
  EventCallback_1__ctor_m0407B736C264F06C81E5CBB70EF40FBB975AC634
            (pEVar7,(Il2CppObject *)param_1,
             *(long *)
              PTR_RadioButton_OnOptionDetachFromPanel_mE1EE5DF58398D7CA8552ED6D96EB1C80F5192030_RuntimeMethod_var_048dca68
             ,(MethodInfo *)0x0);
  CallbackEventHandler_RegisterCallback_TisDetachFromPanelEvent_t5E26427B0E6AF96F0C522D1FCEDDC078D755E496_mED85B91BE761D1DBE3001231E0050CD612946F2C
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)param_1,pEVar7,0,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__);
  return;
}


