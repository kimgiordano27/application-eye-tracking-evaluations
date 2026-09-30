/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnStart
ENTRY_POINT: 05ab24fc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnStart
               (undefined4 param_1,undefined4 param_2)

{
  ulong uVar1;
  code *in_x9;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined4 *unaff_x23;
  
  while( true ) {
    uVar1 = (*in_x9)(param_1,param_2,*unaff_x23);
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x22 = unaff_x22 + -1;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x22 == 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    param_1 = unaff_x23[1];
    param_2 = unaff_x23[2];
    in_x9 = *(code **)(*unaff_x21 + 0x1b8);
    unaff_x23 = unaff_x23 + 3;
  }
  return 0xffffffff;
}


