/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$CreateTextureCopyRequestIfNeeded
ENTRY_POINT: 06dfc8a4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_EnvironmentDepthRaycaster__CreateTextureCopyRequestIfNeeded(long param_1,long param_2)

{
  uint in_w9;
  int unaff_w19;
  undefined8 uVar1;
  
  param_1 = param_1 + (ulong)in_w9 * 0x10;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  thunk_FUN_03d1023c(param_2 + 0x18,0);
  return (uint)-unaff_w19 >> 0x1f;
}


