/*
FUNCTION_NAME: RadioButtonGroup__ctor_m0F5732D9CA12364850BA19098EA91D5436B30637
ENTRY_POINT: 04562d10
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


void RadioButtonGroup__ctor_m0F5732D9CA12364850BA19098EA91D5436B30637
               (BaseField_1_tB351B262306464787F5A31B33CDC431E89796615 *param_1,String_t *param_2,
               undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  List_1_t83677DD3658C07F0F0DD73BD808F8F9EE45CDDE4 *pLVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103 *pEVar8;
  Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *pFVar9;
  undefined8 uVar10;
  
  puVar2 = 
  PTR_RadioButtonGroup_t92E82155D2102EA368B854C8F088737BED188DDE_il2cpp_TypeInfo_var_048dcae8;
  puVar1 = 
  PTR_BaseField_1_get_visualInput_m62476B58AAA085A7BC0CC8BB4CE125A196C280CF_RuntimeMethod_var_048dc3f8
  ;
  if ((RadioButtonGroup__ctor_m0F5732D9CA12364850BA19098EA91D5436B30637::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseField_1__ctor_m8F97B29A1539FF5F3EFD6CC93B64213AAB062218_RuntimeMethod_var_048dcaf0
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_BaseField_1_tB351B262306464787F5A31B33CDC431E89796615_il2cpp_TypeInfo_var_048d8d10
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103_il2cpp_TypeInfo_var_048d85b8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_List_1__ctor_m328081AD0B796B22D4CA5F149252070633C882AA_RuntimeMethod_var_048dcaf8
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_List_1_t83677DD3658C07F0F0DD73BD808F8F9EE45CDDE4_il2cpp_TypeInfo_var_048dcb00);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_RadioButtonGroup_RadioButtonValueChangedCallback_m9C6870FCC0CB7CC8714ED0A2ADFC8B04C94ACA82_RuntimeMethod_var_048dcb08
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    RadioButtonGroup__ctor_m0F5732D9CA12364850BA19098EA91D5436B30637::s_Il2CppMethodInitialized = 1;
  }
  pLVar3 = (List_1_t83677DD3658C07F0F0DD73BD808F8F9EE45CDDE4 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       PTR_List_1_t83677DD3658C07F0F0DD73BD808F8F9EE45CDDE4_il2cpp_TypeInfo_var_048dcb00
                     );
  List_1__ctor_m328081AD0B796B22D4CA5F149252070633C882AA
            (pLVar3,*(MethodInfo **)
                     PTR_List_1__ctor_m328081AD0B796B22D4CA5F149252070633C882AA_RuntimeMethod_var_048dcaf8
            );
  *(List_1_t83677DD3658C07F0F0DD73BD808F8F9EE45CDDE4 **)(param_1 + 0x440) = pLVar3;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x440),pLVar3);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              PTR_BaseField_1_tB351B262306464787F5A31B33CDC431E89796615_il2cpp_TypeInfo_var_048d8d10
            );
  BaseField_1__ctor_m8F97B29A1539FF5F3EFD6CC93B64213AAB062218
            (param_1,param_2,(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *)0x0,
             *(MethodInfo **)
              PTR_BaseField_1__ctor_m8F97B29A1539FF5F3EFD6CC93B64213AAB062218_RuntimeMethod_var_048dcaf0
            );
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(param_1,*puVar4,0);
  pvVar5 = (void *)BaseField_1_get_visualInput_m62476B58AAA085A7BC0CC8BB4CE125A196C280CF
                             (param_1,*(MethodInfo **)puVar1);
  pvVar6 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar6,0);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar10 = *(undefined8 *)(lVar7 + 8);
  NullCheck(pvVar6);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(pvVar6,uVar10,0);
  *(void **)(param_1 + 0x450) = pvVar6;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x450),pvVar6);
  NullCheck(pvVar5);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar5,pvVar6,0);
  pvVar5 = *(void **)(param_1 + 0x450);
  lVar7 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar10 = *(undefined8 *)(lVar7 + 8);
  NullCheck(pvVar5);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar5,uVar10,0);
  pEVar8 = (EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       PTR_EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103_il2cpp_TypeInfo_var_048d85b8
                     );
  EventCallback_1__ctor_m2AECF13AF3DE354C723AC2C870875E894C4D96C9
            (pEVar8,(Il2CppObject *)param_1,
             *(long *)
              PTR_RadioButtonGroup_RadioButtonValueChangedCallback_m9C6870FCC0CB7CC8714ED0A2ADFC8B04C94ACA82_RuntimeMethod_var_048dcb08
             ,(MethodInfo *)0x0);
  *(EventCallback_1_t0FE3F70E94CC4C4904A9F1C171A3DE56EE41F103 **)(param_1 + 0x448) = pEVar8;
  Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x448),pEVar8);
  RadioButtonGroup_set_choices_m67A6FABD7E22F1C7997C52F5E68FEE69C6DED64C(param_1,param_3,0);
  VirtualActionInvoker1<int>::Invoke(0x6c,(Il2CppObject *)param_1,-1);
  pFVar9 = (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)
           BaseField_1_get_visualInput_m62476B58AAA085A7BC0CC8BB4CE125A196C280CF
                     (param_1,*(MethodInfo **)puVar1);
  NullCheck(pFVar9);
  Focusable_set_focusable_m85547438A92A464B90AB91ACBD458677A0BA41CB_inline
            (pFVar9,false,(MethodInfo *)0x0);
  Focusable_set_delegatesFocus_mC691C4199C88BEF0C55A7F7FD2C6ADDD00402D6F(param_1,1,0);
  return;
}


