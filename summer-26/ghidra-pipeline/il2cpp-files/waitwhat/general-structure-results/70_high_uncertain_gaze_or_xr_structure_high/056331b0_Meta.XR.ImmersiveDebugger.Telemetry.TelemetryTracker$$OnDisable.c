/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$OnDisable
ENTRY_POINT: 056331b0
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


undefined8 Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__OnDisable(uint param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x24;
  long unaff_x25;
  
  uVar1 = 1 << (ulong)(param_1 & 0x1f);
  if ((uVar1 & 0x740) == 0) {
    if ((uVar1 & 0x1800) == 0) {
      if (param_1 == 7) {
        lVar2 = *(long *)(unaff_x25 + 0xe0);
        puVar3 = (undefined8 *)PTR_DAT_070f64b8;
      }
      else {
        if (param_1 != 5) {
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_031c09d4();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_031c09d4(lVar2);
          }
          FUN_0474a3c0(uVar4,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
          return uVar4;
        }
        lVar2 = *(long *)(unaff_x25 + 0xe0);
        puVar3 = (undefined8 *)PTR_DAT_070f64b0;
      }
    }
    else {
      lVar2 = *(long *)(unaff_x25 + 0xe0);
      puVar3 = (undefined8 *)PTR_DAT_070f64a0;
    }
  }
  else {
    lVar2 = *(long *)(unaff_x25 + 0xe0);
    puVar3 = (undefined8 *)PTR_DAT_070f6480;
  }
  uVar4 = *puVar3;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar4 = FUN_0593e698(uVar4,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x24);
  }
  uVar4 = FUN_0597090c(uVar4);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4(lVar2);
  }
  uVar4 = FUN_02d37100(uVar4,lVar2);
  return uVar4;
}


