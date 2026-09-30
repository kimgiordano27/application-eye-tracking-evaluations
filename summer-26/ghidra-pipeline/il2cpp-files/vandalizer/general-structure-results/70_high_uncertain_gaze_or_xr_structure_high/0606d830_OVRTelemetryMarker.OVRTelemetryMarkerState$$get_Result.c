/*
FUNCTION_NAME: OVRTelemetryMarker.OVRTelemetryMarkerState$$get_Result
ENTRY_POINT: 0606d830
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 OVRTelemetryMarker_OVRTelemetryMarkerState__get_Result(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  puVar1 = PTR_DAT_0759bb00;
  if ((DAT_07a48c23 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f7be0);
    FUN_031f20f4(PTR_DAT_0759bb00);
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(PTR_DAT_075f89e0);
    FUN_031f20f4(PTR_DAT_075f89e8);
    DAT_07a48c23 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (DAT_07a3ca89 == '\0') {
    FUN_031f20f4(PTR_DAT_0759bb00);
    DAT_07a3ca89 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar4 = *(long *)puVar1;
  }
  puVar3 = PTR_DAT_075f89e8;
  puVar2 = PTR_DAT_075f89e0;
  pcVar7 = *(char **)(lVar4 + 0xb8);
  if (*pcVar7 == '\0') {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      pcVar7 = *(char **)(*(long *)puVar1 + 0xb8);
    }
    uVar6 = *(undefined8 *)(pcVar7 + 8);
    if (*(int *)(*(long *)PTR_DAT_0759b238 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_06deed24(uVar6,0);
    uVar6 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_075f7be0 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar5 = OVRPlugin_OVRP_1_78_0__ovrp_GetPassthroughCapabilityFlags(param_1);
    uVar6 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
    FUN_04fd7708(uVar6,uVar5,*(undefined8 *)puVar2);
  }
  return uVar6;
}


