/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionTracked
ENTRY_POINT: 02cae930
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin__GetNodePositionTracked(undefined8 param_1)

{
  long unaff_x29;
  void *in_stack_00000000;
  
  *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x10) = param_1;
  Il2CppCodeGenWriteBarrier((void **)(*(long *)(unaff_x29 + -8) + 0x10),in_stack_00000000);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
  Callback_AddRequest_m75C53DEDEF38D1DEB5ECA1420074B58D7D675B79(*(undefined8 *)(unaff_x29 + -8),0);
  return *(undefined8 *)(unaff_x29 + -8);
}


