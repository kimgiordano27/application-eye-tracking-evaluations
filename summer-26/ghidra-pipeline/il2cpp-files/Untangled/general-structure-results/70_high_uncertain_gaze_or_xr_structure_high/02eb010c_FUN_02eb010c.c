/*
FUNCTION_NAME: FUN_02eb010c
ENTRY_POINT: 02eb010c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_02eb010c(undefined8 *param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__;
  puVar2 = Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__;
  uVar3 = 0;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_3;
    puVar2 = param_2;
    uVar3 = param_4;
  }
  *param_1 = puVar2;
  param_1[1] = puVar1;
  param_1[2] = uVar3;
  return;
}


