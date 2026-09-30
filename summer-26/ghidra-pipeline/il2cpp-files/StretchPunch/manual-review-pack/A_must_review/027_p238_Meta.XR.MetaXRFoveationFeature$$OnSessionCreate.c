/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$OnSessionCreate
ENTRY_POINT: 03390d34
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 115
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


ulong Meta_XR_MetaXRFoveationFeature__OnSessionCreate(void)

{
  ulong uVar1;
  int in_w8;
  int in_w9;
  
  if (in_w9 < in_w8) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (ulong)(in_w8 < in_w9);
  }
  return uVar1;
}


