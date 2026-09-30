/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnStart
ENTRY_POINT: 056328ac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnStart(void)

{
  undefined1 in_ZR;
  ulong uVar1;
  uint unaff_w19;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  
  while( true ) {
    if ((bool)in_ZR) {
      return 0xffffffff;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) break;
    uVar1 = (**(code **)(*unaff_x23 + 0x1b8))();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x24 = unaff_x24 + -1;
    in_ZR = unaff_x24 == 0;
    unaff_w19 = unaff_w19 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


