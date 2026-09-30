/*
FUNCTION_NAME: Virtence.OpenTypeCS.Post$$.ctor
ENTRY_POINT: 02e19190
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


byte Virtence_OpenTypeCS_Post___ctor(long param_1)

{
  byte bVar1;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)**(undefined8 **)(param_1 + 0xe20));
  bVar1 = OVRPlugin_get_positionTracked_m2CDA85E3B5D4C1672B87AA635F1A659E9B2BDB71(0);
  return bVar1 & 1;
}


