/*
FUNCTION_NAME: PointerEventDispatchingStrategy_SendEventToTarget_m5602642E9363421A82FAF39651346C4B73EF3FFA
ENTRY_POINT: 045b6264
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void PointerEventDispatchingStrategy_SendEventToTarget_m5602642E9363421A82FAF39651346C4B73EF3FFA
               (void *param_1,long param_2)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  void *pvVar3;
  long lVar4;
  
  if ((PointerEventDispatchingStrategy_SendEventToTarget_m5602642E9363421A82FAF39651346C4B73EF3FFA::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    PointerEventDispatchingStrategy_SendEventToTarget_m5602642E9363421A82FAF39651346C4B73EF3FFA::
    s_Il2CppMethodInitialized = 1;
  }
  NullCheck(param_1);
  pIVar2 = (Il2CppObject *)EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_1,0)
  ;
  pvVar3 = (void *)IsInstClass(pIVar2,*(Il2CppClass **)
                                       Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                              );
  if (pvVar3 == (void *)0x0) {
    bVar1 = false;
  }
  else {
    NullCheck(pvVar3);
    lVar4 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(pvVar3,0);
    bVar1 = lVar4 == param_2;
  }
  if (bVar1) {
    EventDispatchUtilities_PropagateEvent_mD485FF9B77C66DF959832C41519DC93C29D43CFC(param_1,0);
  }
  return;
}


