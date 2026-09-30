/*
FUNCTION_NAME: FUN_05025e50
ENTRY_POINT: 05025e50
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_05025e50(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int local_24;
  
  if ((DAT_066cc179 & 1) == 0) {
    FUN_02b3c81c(OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo);
    FUN_02b3c81c(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
    DAT_066cc179 = 1;
  }
  local_24 = 0;
  FUN_05026308(param_1);
  plVar3 = (long *)(param_1 + 0x60);
  if (*plVar3 == 0) {
    local_24 = 0;
    lVar1 = FUN_05024898(*(undefined8 *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo,&local_24);
    if ((lVar1 != 0) && (local_24 == 0)) {
      lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                  OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo);
      FUN_05020684(lVar2,lVar1,0);
      *plVar3 = lVar2;
      thunk_FUN_02bb0e9c(plVar3,lVar2);
    }
  }
  return *plVar3;
}


