/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnDisable
ENTRY_POINT: 0518a238
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnDisable(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_02dfd288();
  uVar1 = thunk_FUN_02dd3144();
  uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a122b0);
  FUN_054e8008(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar1);
}


