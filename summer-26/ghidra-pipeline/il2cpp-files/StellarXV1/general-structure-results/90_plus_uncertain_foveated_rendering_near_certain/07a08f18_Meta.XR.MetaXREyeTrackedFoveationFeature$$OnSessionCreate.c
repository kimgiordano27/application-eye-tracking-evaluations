/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$OnSessionCreate
ENTRY_POINT: 07a08f18
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 114
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__OnSessionCreate
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0x2c) = param_1;
  *(undefined4 *)(param_4 + 0x30) = param_2;
  *(undefined4 *)(param_4 + 0x34) = param_3;
  return;
}


