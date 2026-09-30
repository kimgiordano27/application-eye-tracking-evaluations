/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$.ctor
ENTRY_POINT: 0643e190
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker___ctor(void)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  
  while( true ) {
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    uVar1 = (**(code **)(*unaff_x22 + 0x1b8))();
    if ((uVar1 & 1) != 0) break;
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w23) {
      return 0xffffffff;
    }
  }
  return unaff_w19;
}


