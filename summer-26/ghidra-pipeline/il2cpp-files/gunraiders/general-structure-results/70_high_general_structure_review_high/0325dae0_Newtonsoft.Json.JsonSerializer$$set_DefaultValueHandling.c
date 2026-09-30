/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_DefaultValueHandling
ENTRY_POINT: 0325dae0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


void Newtonsoft_Json_JsonSerializer__set_DefaultValueHandling(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong unaff_x20;
  
  if ((unaff_x20 & 1) == 0) {
    return;
  }
  uVar2 = FUN_0314e438();
  puVar1 = PTR_DAT_0422fc80;
  if (*(int *)(*(long *)PTR_DAT_0422fc80 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fc80);
  }
  uVar3 = FUN_0325db74(uVar2);
  if ((uVar3 & 1) != 0) {
    FUN_03313b64(*(undefined8 *)
                  Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<IList<AsyncOperationHandle>>_InternalGetDownloadStatus__
                 ,0);
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  Newtonsoft_Json_JsonSerializer__get_MetadataPropertyHandling();
  return;
}


