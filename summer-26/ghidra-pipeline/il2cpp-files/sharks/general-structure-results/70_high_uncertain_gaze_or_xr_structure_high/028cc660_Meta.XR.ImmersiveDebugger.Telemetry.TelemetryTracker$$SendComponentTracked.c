/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendComponentTracked
ENTRY_POINT: 028cc660
PROGRAM: sharks-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendComponentTracked(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if (lVar4 != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *unaff_x20;
    uVar2 = unaff_x20[1];
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0185daa4();
    }
    FUN_02156cc0(lVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1d8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


