/*
FUNCTION_NAME: FUN_03306714
ENTRY_POINT: 03306714
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 FUN_03306714(long param_1,long *param_2,long *param_3)

{
  if (((*param_2 == *(long *)PTR_DAT_07293900 && param_2[1] == *(long *)(PTR_DAT_07293900 + 8)) ||
      (*param_2 == *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__ &&
       param_2[1] == *(long *)(Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__ + 8)))
     || (*param_2 == *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ &&
         param_2[1] == *(long *)(Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 8))
     ) {
    *param_3 = param_1;
  }
  else {
    if (*param_2 == *(long *)Method_OVRTask_FromResult<OVRResult<OVRColocationSession_Result>>__ &&
        param_2[1] ==
        *(long *)(Method_OVRTask_FromResult<OVRResult<OVRColocationSession_Result>>__ + 8)) {
      param_1 = param_1 + 0x18;
    }
    else if (*param_2 == *(long *)Method_OVRSpaceQuery_ForGroupThrow__ &&
             param_2[1] == *(long *)(Method_OVRSpaceQuery_ForGroupThrow__ + 8)) {
      param_1 = param_1 + 8;
    }
    else {
      if (*param_2 != *(long *)Method_OVRTask_FromResult<OVRResult<OVRPlugin_Result>>__ ||
          param_2[1] != *(long *)(Method_OVRTask_FromResult<OVRResult<OVRPlugin_Result>>__ + 8)) {
        *param_3 = 0;
        return 0x80004002;
      }
      param_1 = param_1 + 0x20;
    }
    *param_3 = param_1;
  }
  FUN_033068c4();
  return 0;
}


