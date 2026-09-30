/*
FUNCTION_NAME: FUN_0569293c
ENTRY_POINT: 0569293c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0569293c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo;
  puVar1 = OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo;
  if ((DAT_06dbc7c8 & 1) == 0) {
    FUN_02d965b8(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
    FUN_02d965b8(OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo);
    DAT_06dbc7c8 = 1;
  }
  uVar3 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_04b1a160(uVar3,0,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  LeanTween__value((undefined8 *)(param_1 + 0x50),uVar3);
  thunk_FUN_0634b474(param_1,0);
  return;
}


