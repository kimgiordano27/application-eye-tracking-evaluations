/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart
ENTRY_POINT: 04a2e634
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendStart(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_02ba3594(*(undefined8 *)(param_1 + 0xb90));
  uVar1 = thunk_FUN_02b79644();
  uVar2 = thunk_FUN_02ba3594(PTR_DAT_06320980);
  FUN_04cee07c(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar1);
}


