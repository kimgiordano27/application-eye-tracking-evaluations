/*
FUNCTION_NAME: AbstractProgressBar__ctor_m2FF27E7A85BEFDB7250BA69E82362E09664C9648
ENTRY_POINT: 0455faf4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void AbstractProgressBar__ctor_m2FF27E7A85BEFDB7250BA69E82362E09664C9648
               (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *pEVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 local_48;
  void *local_40;
  void *local_38;
  undefined8 local_30;
  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115 *local_28;
  
  puVar2 = 
  PTR_AbstractProgressBar_t953B809E5B45C1CF994EDD60757A74B59267BC30_il2cpp_TypeInfo_var_048dc9d8;
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__;
  local_30 = param_2;
  local_28 = param_1;
  if ((AbstractProgressBar__ctor_m2FF27E7A85BEFDB7250BA69E82362E09664C9648::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               PTR_AbstractProgressBar_OnGeometryChanged_m951433FAA604A12DC830C334863234066A0C4363_RuntimeMethod_var_048dc9e0
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Nullable<InputUserAccountHandle>_get_Value__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    AbstractProgressBar__ctor_m2FF27E7A85BEFDB7250BA69E82362E09664C9648::s_Il2CppMethodInitialized =
         1;
  }
  local_38 = (void *)0x0;
  local_40 = (void *)0x0;
  local_48 = 0;
  *(undefined4 *)(local_28 + 0x3f4) = 0x42c80000;
  BindableElement__ctor_m827E1D7852F342FCC582E31E9857F6976D958454(local_28);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(local_28,*puVar3,0);
  pvVar4 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar4,0);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar7 = *puVar3;
  NullCheck(pvVar4);
  VisualElement_set_name_m5ABC7B8D2586B1839DD436E1AAF25D81395759BC(pvVar4,uVar7,0);
  local_38 = pvVar4;
  pvVar4 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar4,0);
  *(void **)(local_28 + 0x3d8) = pvVar4;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x3d8),pvVar4);
  pvVar4 = *(void **)(local_28 + 0x3d8);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar7 = *(undefined8 *)(lVar5 + 0x28);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar7,0);
  pvVar4 = local_38;
  uVar7 = *(undefined8 *)(local_28 + 0x3d8);
  NullCheck(local_38);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar4,uVar7,0);
  pvVar4 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar4,0);
  *(void **)(local_28 + 0x3e0) = pvVar4;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 0x3e0),pvVar4);
  pvVar4 = *(void **)(local_28 + 0x3e0);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar7 = *(undefined8 *)(lVar5 + 0x20);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar7,0);
  pvVar4 = *(void **)(local_28 + 0x3d8);
  uVar7 = *(undefined8 *)(local_28 + 0x3e0);
  NullCheck(pvVar4);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar4,uVar7,0);
  pvVar4 = (void *)il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pvVar4,0);
  local_40 = pvVar4;
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar7 = *(undefined8 *)(lVar5 + 0x18);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar7,0);
  pvVar4 = local_40;
  pvVar8 = *(void **)(local_28 + 0x3d8);
  NullCheck(pvVar8);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar8,pvVar4,0);
  pvVar4 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_System_Nullable<InputUserAccountHandle>_get_Value__);
  Label__ctor_mEC3F9EF41CBD508BAA966A8C6C75EABBED3CB365(pvVar4,0);
  *(void **)(local_28 + 1000) = pvVar4;
  Il2CppCodeGenWriteBarrier((void **)(local_28 + 1000),pvVar4);
  pvVar4 = *(void **)(local_28 + 1000);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar7 = *(undefined8 *)(lVar5 + 0x10);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar7,0);
  pvVar4 = local_40;
  uVar7 = *(undefined8 *)(local_28 + 1000);
  NullCheck(local_40);
  VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(pvVar4,uVar7,0);
  pvVar4 = local_38;
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  uVar7 = *(undefined8 *)(lVar5 + 8);
  NullCheck(pvVar4);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pvVar4,uVar7,0);
  local_48 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline
                       (local_28,(MethodInfo *)0x0);
  Hierarchy_Add_mDDEF4932C9E9FC302755C45A9F7966AEEBC26648(&local_48,local_38,0);
  pEVar6 = (EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__
                     );
  EventCallback_1__ctor_mF06BFBEB6C98B9A486C131579BD98388B38997F5
            (pEVar6,(Il2CppObject *)local_28,
             *(long *)
              PTR_AbstractProgressBar_OnGeometryChanged_m951433FAA604A12DC830C334863234066A0C4363_RuntimeMethod_var_048dc9e0
             ,(MethodInfo *)0x0);
  CallbackEventHandler_RegisterCallback_TisGeometryChangedEvent_tB4A621001850F337A676F8CC27F172B8ADB22A9A_m34764823E27F27068C7C0E4F34879B1C395A117F
            ((CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4 *)local_28,pEVar6,0,
             *(MethodInfo **)
              Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__);
  return;
}


