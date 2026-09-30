/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendComponentTracked
ENTRY_POINT: 03145e1c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendComponentTracked(void)

{
  uint uVar1;
  long lVar2;
  long *unaff_x21;
  
  lVar2 = FUN_01dde7f8();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar2 + 0x40)) {
    thunk_FUN_01de290c();
    uVar1 = FUN_03145d38();
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7df0c();
}


