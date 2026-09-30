/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryDimensions
ENTRY_POINT: 02cb4554
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


void OVRPlugin__GetBoundaryDimensions(undefined8 *param_1)

{
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  CAPI_ovr_ApplicationOptions_SetMatchSessionId_m6A0170DAEE32F06BFE49CB30805DCF5387C10A01
            (in_stack_00000010,in_stack_00000008,0);
  return;
}


