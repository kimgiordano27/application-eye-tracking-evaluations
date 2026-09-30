/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$.ctor
ENTRY_POINT: 05603930
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  long unaff_x23;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  puVar1 = PTR_DAT_072817f0;
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_3;
  if ((*(byte *)(unaff_x23 + 0x84a) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072817f0);
    *(undefined1 *)(unaff_x23 + 0x84a) = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_06c15a2c();
  return uVar2 & 1;
}


