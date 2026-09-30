/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$CreateTextureCopyRequestIfNeeded
ENTRY_POINT: 05acdb3c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_EnvironmentDepthRaycaster__CreateTextureCopyRequestIfNeeded(void)

{
  long lVar1;
  uint in_w9;
  uint in_w10;
  long in_x12;
  long unaff_x19;
  undefined8 uVar2;
  
  lVar1 = in_x12 + (long)(int)in_w10 * 0x58;
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  return in_w10 < in_w9;
}


