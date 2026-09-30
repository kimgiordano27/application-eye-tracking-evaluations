/*
FUNCTION_NAME: FUN_061a3694
ENTRY_POINT: 061a3694
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_061a3694(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x24) != '\0') {
    return;
  }
  uVar1 = thunk_FUN_02c7737c(OVRTelemetry_QPLTelemetryClient_TypeInfo);
  uVar1 = FUN_0615c9d4(uVar1,0);
  uVar2 = thunk_FUN_02c7737c(OVRTelemetryConstants_OVRManager_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar1,uVar2);
}


