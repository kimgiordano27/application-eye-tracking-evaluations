/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnFocusLost
ENTRY_POINT: 05f21670
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnFocusLost(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  
  if ((*(byte *)(*(long *)(param_1 + 0x30) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  uVar1 = thunk_FUN_037788cc();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678(lVar2);
  }
  FUN_04f046a4(uVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
  return uVar1;
}


