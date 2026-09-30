/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendStart
ENTRY_POINT: 05189968
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendStart(long param_1)

{
  uint in_w9;
  undefined4 in_register_0000404c;
  long unaff_x19;
  undefined8 uVar1;
  
  if (in_w9 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + CONCAT44(in_register_0000404c,in_w9) * 0x10;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x10),0);
    *(int *)(unaff_x19 + 8) = *(int *)(unaff_x19 + 8) + 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


