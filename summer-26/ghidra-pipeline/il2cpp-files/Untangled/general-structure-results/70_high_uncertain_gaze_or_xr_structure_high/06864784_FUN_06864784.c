/*
FUNCTION_NAME: FUN_06864784
ENTRY_POINT: 06864784
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint FUN_06864784(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((DAT_071d6baf & 1) == 0) {
    FUN_02f07e70(OVRTelemetryConstants_OVRManager_TypeInfo);
    DAT_071d6baf = 1;
  }
  if ((param_2 == (long *)0x0) || (*param_2 != *(long *)OVRTelemetryConstants_OVRManager_TypeInfo))
  {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined8 *)thunk_FUN_02ef195c(param_2);
    uStack_38 = puVar2[1];
    local_40 = *puVar2;
    local_30 = puVar2[2];
    uVar1 = FUN_06864814(param_1,&local_40);
  }
  return uVar1 & 1;
}


