/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionDestroy
ENTRY_POINT: 05717f94
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MetaXRFeature__OnSessionDestroy(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_06d56eb8;
  if ((bRam00000000071c3805 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d56eb8);
    bRam00000000071c3805 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (cRam00000000071c388e == '\0') {
    FUN_02f07e70(PTR_DAT_06d56eb8);
    cRam00000000071c388e = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}


