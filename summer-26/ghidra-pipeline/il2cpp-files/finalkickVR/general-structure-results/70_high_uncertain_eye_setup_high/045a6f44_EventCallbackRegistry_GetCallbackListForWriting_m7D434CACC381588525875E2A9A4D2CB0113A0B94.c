/*
FUNCTION_NAME: EventCallbackRegistry_GetCallbackListForWriting_m7D434CACC381588525875E2A9A4D2CB0113A0B94
ENTRY_POINT: 045a6f44
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
EventCallbackRegistry_GetCallbackListForWriting_m7D434CACC381588525875E2A9A4D2CB0113A0B94
          (long param_1)

{
  undefined *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_30;
  
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__;
  if ((EventCallbackRegistry_GetCallbackListForWriting_m7D434CACC381588525875E2A9A4D2CB0113A0B94::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__);
    EventCallbackRegistry_GetCallbackListForWriting_m7D434CACC381588525875E2A9A4D2CB0113A0B94::
    s_Il2CppMethodInitialized = 1;
  }
  if (*(int *)(param_1 + 0x20) < 1) {
    if (*(long *)(param_1 + 0x10) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      pvVar2 = (void *)EventCallbackRegistry_GetCallbackList_m9ACF5973C90A1B3FB67CD12FB39248E02263FD23
                                 (0);
      *(void **)(param_1 + 0x10) = pvVar2;
      Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x10),pvVar2);
    }
    local_30 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        pvVar2 = (void *)EventCallbackRegistry_GetCallbackList_m9ACF5973C90A1B3FB67CD12FB39248E02263FD23
                                   (0);
        *(void **)(param_1 + 0x18) = pvVar2;
        Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x18),pvVar2);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x10);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        pvVar2 = (void *)EventCallbackRegistry_GetCallbackList_m9ACF5973C90A1B3FB67CD12FB39248E02263FD23
                                   (uVar3,0);
        *(void **)(param_1 + 0x18) = pvVar2;
        Il2CppCodeGenWriteBarrier((void **)(param_1 + 0x18),pvVar2);
      }
    }
    local_30 = *(undefined8 *)(param_1 + 0x18);
  }
  return local_30;
}


