/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_ShouldShowTelemetryNotification
ENTRY_POINT: 02c4bbd4
PROGRAM: sharks-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_ShouldShowTelemetryNotification(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  
  if ((DAT_03a260f7 & 1) == 0) {
    FUN_017fc350(PTR_DAT_03803f48);
    FUN_017fc350(PTR_DAT_037f9a80);
    DAT_03a260f7 = 1;
  }
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
  }
  else {
    lVar2 = *param_2;
    bVar1 = *(byte *)(*(long *)PTR_DAT_037f9a80 + 0x130);
    if ((*(byte *)(lVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_037f9a80)) {
      if (lVar2 != *(long *)PTR_DAT_03803f48) {
        param_2 = (long *)0x0;
      }
    }
    else {
      param_2 = (long *)FUN_02afcf34(param_2,0);
    }
  }
  *(long **)(param_1 + 0x20) = param_2;
  thunk_FUN_0188fd20();
  FUN_02c4496c(param_1,0);
  return;
}


