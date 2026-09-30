/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 05d9ee60
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeObject(long param_1,long param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar1 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075ea4f8);
    FUN_05d9f164(uVar1,0,*(undefined8 *)PTR_DAT_075ea4f0,0);
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    thunk_FUN_0322fc44(uVar1);
    FUN_031f2114();
    param_2 = *unaff_x20;
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    param_2 = *unaff_x20;
  }
  return *(undefined8 *)(*(long *)(param_2 + 0xb8) + 0x38);
}


