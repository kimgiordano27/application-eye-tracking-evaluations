/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendComponentTracked
ENTRY_POINT: 05632904
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendComponentTracked
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  uint unaff_w19;
  long unaff_x22;
  int unaff_w24;
  
  while( true ) {
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    lVar1 = unaff_x22 + (long)(int)unaff_w19 * 0x10;
    uVar2 = (**(code **)(*param_1 + 0x1b8))
                      (param_1,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),param_3);
    if ((uVar2 & 1) != 0) break;
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w24) {
      return 0xffffffff;
    }
  }
  return unaff_w19;
}


