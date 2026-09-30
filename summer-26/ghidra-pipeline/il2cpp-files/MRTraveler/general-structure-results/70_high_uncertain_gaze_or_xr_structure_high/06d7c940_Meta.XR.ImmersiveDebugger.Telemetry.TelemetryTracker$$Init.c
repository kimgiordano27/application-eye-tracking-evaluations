/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init
ENTRY_POINT: 06d7c940
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__Init(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  thunk_FUN_03d233cc();
  lVar2 = *(long *)(unaff_x20 + 0x60);
  if ((lVar2 != 0) && (lVar1 = *unaff_x19, lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x10);
    *(undefined1 *)(lVar1 + 0x18) = *(undefined1 *)(lVar2 + 0x18);
    *(undefined1 *)(lVar1 + 0x19) = *(undefined1 *)(lVar2 + 0x19);
    *(undefined1 *)(lVar1 + 0x1a) = *(undefined1 *)(lVar2 + 0x1a);
    *(undefined8 *)(lVar1 + 0x2c) = *(undefined8 *)(lVar2 + 0x2c);
    *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar2 + 0x34);
    *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
    thunk_FUN_03d233cc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


