/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendComponentTracked
ENTRY_POINT: 05a9f380
PROGRAM: vandalizer-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendComponentTracked
               (long *param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  thunk_FUN_0329bf60();
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 7) = param_3;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    param_1[6] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


