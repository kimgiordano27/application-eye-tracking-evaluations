/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$.ctor
ENTRY_POINT: 076d3640
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker___ctor(void)

{
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x22;
  
  while( true ) {
    FUN_078bb7b4();
    FUN_078bb7b4();
    unaff_x22 = unaff_x22 + 1;
    if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x22) {
      (**(code **)(*unaff_x20 + 0x168))();
      return;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x22) break;
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


