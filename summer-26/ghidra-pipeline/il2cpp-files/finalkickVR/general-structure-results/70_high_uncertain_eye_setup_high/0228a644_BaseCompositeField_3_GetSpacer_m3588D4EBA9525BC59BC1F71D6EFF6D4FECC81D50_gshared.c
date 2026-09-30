/*
FUNCTION_NAME: BaseCompositeField_3_GetSpacer_m3588D4EBA9525BC59BC1F71D6EFF6D4FECC81D50_gshared
ENTRY_POINT: 0228a644
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *
BaseCompositeField_3_GetSpacer_m3588D4EBA9525BC59BC1F71D6EFF6D4FECC81D50_gshared
          (undefined8 param_1,long param_2)

{
  Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *pFVar1;
  Il2CppClass *pIVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((BaseCompositeField_3_GetSpacer_m3588D4EBA9525BC59BC1F71D6EFF6D4FECC81D50_gshared::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    BaseCompositeField_3_GetSpacer_m3588D4EBA9525BC59BC1F71D6EFF6D4FECC81D50_gshared::
    s_Il2CppMethodInitialized = 1;
  }
  pFVar1 = (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0 *)
           il2cpp_codegen_object_new
                     (*(Il2CppClass **)
                       Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
  VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(pFVar1,0);
  pIVar2 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),1);
  il2cpp_codegen_runtime_class_init_inline(pIVar2);
  pIVar2 = (Il2CppClass *)
           il2cpp_rgctx_data(*(Il2CppRGCTXData **)(*(long *)(param_2 + 0x20) + 0xc0),1);
  lVar3 = il2cpp_codegen_static_fields_for(pIVar2);
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  NullCheck(pFVar1);
  VisualElement_AddToClassList_mAF0DD8D8CFD5130229A0471DD260E01ED82117F1(pFVar1,uVar4,0);
  NullCheck(pFVar1);
  VisualElement_set_visible_m02861A5BE4F26942CB5EE857FF4FDB584009E9C3(pFVar1,0,0);
  NullCheck(pFVar1);
  Focusable_set_focusable_m85547438A92A464B90AB91ACBD458677A0BA41CB_inline
            (pFVar1,false,(MethodInfo *)0x0);
  return pFVar1;
}


