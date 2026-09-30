/*
FUNCTION_NAME: OVRManager$$set_trackingOriginType
ENTRY_POINT: 05655554
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_1;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


bool OVRManager__set_trackingOriginType(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  long unaff_x21;
  
  puVar1 = PTR_DAT_06a0f1a0;
  if ((*(byte *)(unaff_x21 + 0x533) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(System_Collections_Generic_IReadOnlyDictionary<string,_SessionProperty>_TypeInfo);
    FUN_02d965b8(
                System_Collections_Generic_IReadOnlyDictionary<MetricId,_IMetric<TimeSpan>>_TypeInfo
                );
    *(undefined1 *)(unaff_x21 + 0x533) = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  iVar2 = FUN_05646dac(param_1,param_2);
  return iVar2 == 0;
}


