/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendComponentTracked
ENTRY_POINT: 089f8fb8
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendComponentTracked(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_063d4f5c();
  uVar1 = thunk_FUN_04983f60(*unaff_x23);
  FUN_06ec46b8(uVar1,param_1,*unaff_x22);
  **(undefined8 **)(*unaff_x21 + 0xb8) = uVar1;
  thunk_FUN_049ee3d8(*(undefined8 *)(*unaff_x21 + 0xb8),uVar1);
  return;
}


