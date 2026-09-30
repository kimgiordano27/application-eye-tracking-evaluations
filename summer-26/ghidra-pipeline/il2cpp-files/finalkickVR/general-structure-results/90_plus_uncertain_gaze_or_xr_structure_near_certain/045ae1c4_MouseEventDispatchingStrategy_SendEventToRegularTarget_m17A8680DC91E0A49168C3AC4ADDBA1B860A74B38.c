/*
FUNCTION_NAME: MouseEventDispatchingStrategy_SendEventToRegularTarget_m17A8680DC91E0A49168C3AC4ADDBA1B860A74B38
ENTRY_POINT: 045ae1c4
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


byte MouseEventDispatchingStrategy_SendEventToRegularTarget_m17A8680DC91E0A49168C3AC4ADDBA1B860A74B38
               (void *param_1,long param_2)

{
  Il2CppObject *pIVar1;
  void *pvVar2;
  long lVar3;
  undefined1 local_32;
  
  if ((MouseEventDispatchingStrategy_SendEventToRegularTarget_m17A8680DC91E0A49168C3AC4ADDBA1B860A74B38
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    MouseEventDispatchingStrategy_SendEventToRegularTarget_m17A8680DC91E0A49168C3AC4ADDBA1B860A74B38
    ::s_Il2CppMethodInitialized = 1;
  }
  NullCheck(param_1);
  pIVar1 = (Il2CppObject *)EventBase_get_target_m9E5CB6AC9A51E9F61D9540D279BFA53C04AD010E(param_1,0)
  ;
  pvVar2 = (void *)IsInstClass(pIVar1,*(Il2CppClass **)
                                       Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                              );
  if (pvVar2 == (void *)0x0) {
    local_32 = 0;
  }
  else {
    NullCheck(pvVar2);
    lVar3 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(pvVar2,0);
    if (lVar3 == param_2) {
      EventDispatchUtilities_PropagateEvent_mD485FF9B77C66DF959832C41519DC93C29D43CFC(param_1,0);
    }
    local_32 = MouseEventDispatchingStrategy_IsDone_mA1ECE68F27613C2E71607AC809D25862526065EF
                         (param_1,0);
    local_32 = local_32 & 1;
  }
  return local_32;
}


