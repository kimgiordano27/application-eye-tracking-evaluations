/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$SendComponentTracked
ENTRY_POINT: 05ab2554
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__SendComponentTracked
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,long param_5,
               uint param_6,int param_7)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  iVar1 = (param_6 - param_7) + 1;
  if (iVar1 <= (int)param_6) {
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    do {
      if (*(uint *)(param_5 + 0x18) <= param_6) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      lVar3 = param_5 + (long)(int)param_6 * 0xc;
      uVar2 = (**(code **)(*param_4 + 0x1b8))
                        (*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24),
                         *(undefined4 *)(lVar3 + 0x28),param_1,param_2,param_3,param_4,
                         *(undefined8 *)(*param_4 + 0x1c0));
      if ((uVar2 & 1) != 0) {
        return param_6;
      }
      param_6 = param_6 - 1;
    } while (iVar1 <= (int)param_6);
  }
  return 0xffffffff;
}


