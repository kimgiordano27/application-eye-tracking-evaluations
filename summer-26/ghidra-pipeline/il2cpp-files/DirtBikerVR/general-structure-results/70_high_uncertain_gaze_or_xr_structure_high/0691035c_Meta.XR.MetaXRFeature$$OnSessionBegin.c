/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 0691035c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionBegin(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  
  __cxa_end_catch();
  *unaff_x19 = 0xfffffffe;
  lVar1 = thunk_FUN_03af1434(PTR_DAT_08488b88);
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d28c(unaff_x19 + 2);
  return;
}


