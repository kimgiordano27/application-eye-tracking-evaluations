/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart
ENTRY_POINT: 052c3428
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


float Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendStart
                (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  
  fVar2 = param_2;
  fVar3 = param_3;
  fVar4 = param_4;
  fVar1 = (float)FUN_052c3304();
  return (param_2 * fVar3 + param_4 * fVar1 + unaff_s8 * fVar4) - param_3 * fVar2;
}


