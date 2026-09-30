/*
FUNCTION_NAME: BaseField_1_set_visualInput_m432C3828088600FC8326B9C0E7341001433A5238_gshared
ENTRY_POINT: 0228cfb0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void BaseField_1_set_visualInput_m432C3828088600FC8326B9C0E7341001433A5238_gshared
               (void *param_1,long param_2,long param_3)

{
  Il2CppClass *pIVar1;
  FieldInfo *pFVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *pFVar8;
  
  if ((BaseField_1_set_visualInput_m432C3828088600FC8326B9C0E7341001433A5238_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    BaseField_1_set_visualInput_m432C3828088600FC8326B9C0E7341001433A5238_gshared::
    s_Il2CppMethodInitialized = 1;
  }
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
  pFVar2 = (FieldInfo *)il2cpp_rgctx_field(pIVar1,0x12);
  plVar3 = (long *)il2cpp_codegen_get_instance_field_data_pointer(param_1,pFVar2);
  if (*plVar3 != 0) {
    pIVar1 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
    pFVar2 = (FieldInfo *)il2cpp_rgctx_field(pIVar1,0x12);
    puVar6 = (undefined8 *)il2cpp_codegen_get_instance_field_data_pointer(param_1,pFVar2);
    pvVar4 = (void *)*puVar6;
    NullCheck(pvVar4);
    pvVar4 = (void *)VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000(pvVar4,0);
    if (pvVar4 == param_1) {
      pIVar1 = (Il2CppClass *)
               il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
      pFVar2 = (FieldInfo *)il2cpp_rgctx_field(pIVar1,0x12);
      puVar6 = (undefined8 *)il2cpp_codegen_get_instance_field_data_pointer(param_1,pFVar2);
      pvVar4 = (void *)*puVar6;
      NullCheck(pvVar4);
      VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64(pvVar4,0);
    }
    pIVar1 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
    uVar5 = il2cpp_rgctx_field(pIVar1,0x12);
    il2cpp_codegen_write_instance_field_data<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>
              (param_1,uVar5,0);
  }
  if (param_2 == 0) {
    pvVar4 = (void *)il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar4);
    NullCheck(pvVar4);
    VisualElement_set_pickingMode_m4B12358A0C59640E752A2BB5B3E6F5C76CB9ACD0(pvVar4,1,0);
    pIVar1 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
    uVar5 = il2cpp_rgctx_field(pIVar1,0x12);
    il2cpp_codegen_write_instance_field_data<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>
              (param_1,uVar5,pvVar4);
  }
  else {
    pIVar1 = (Il2CppClass *)
             il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
    uVar5 = il2cpp_rgctx_field(pIVar1,0x12);
    il2cpp_codegen_write_instance_field_data<VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*>
              (param_1,uVar5,param_2);
  }
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
  pFVar2 = (FieldInfo *)il2cpp_rgctx_field(pIVar1,0x12);
  puVar6 = (undefined8 *)il2cpp_codegen_get_instance_field_data_pointer(param_1,pFVar2);
  pFVar8 = (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)*puVar6;
  NullCheck(pFVar8);
  Focusable_set_focusable_m85547438A92A464B90AB91ACBD458677A0BA41CB_inline
            (pFVar8,true,(MethodInfo *)0x0);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
  pFVar2 = (FieldInfo *)il2cpp_rgctx_field(pIVar1,0x12);
  puVar6 = (undefined8 *)il2cpp_codegen_get_instance_field_data_pointer(param_1,pFVar2);
  pvVar4 = (void *)*puVar6;
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),1);
  il2cpp_codegen_runtime_class_init_inline(pIVar1);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),1);
  lVar7 = il2cpp_codegen_static_fields_for(pIVar1);
  uVar5 = *(undefined8 *)(lVar7 + 0x10);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar5,0);
  pIVar1 = (Il2CppClass *)
           il2cpp_rgctx_data_no_init(*(Il2CppRGCTXData **)(*(long *)(param_3 + 0x20) + 0xc0),0);
  pFVar2 = (FieldInfo *)il2cpp_rgctx_field(pIVar1,0x12);
  puVar6 = (undefined8 *)il2cpp_codegen_get_instance_field_data_pointer(param_1,pFVar2);
  uVar5 = *puVar6;
  NullCheck(param_1);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(param_1,uVar5,0);
  return;
}


