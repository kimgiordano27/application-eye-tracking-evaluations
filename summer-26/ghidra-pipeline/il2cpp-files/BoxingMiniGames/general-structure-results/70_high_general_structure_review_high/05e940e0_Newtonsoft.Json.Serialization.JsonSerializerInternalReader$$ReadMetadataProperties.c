/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 05e940e0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties(void)

{
  undefined *puVar1;
  long lVar2;
  int in_w8;
  long *unaff_x24;
  
  if (in_w8 == 0) {
    thunk_FUN_036a1978();
  }
  if (DAT_07ed8c6b == '\0') {
    FUN_03642964(PTR_DAT_079fd3d0);
    FUN_03642964(PTR_DAT_079f5558);
    DAT_07ed8c6b = '\x01';
  }
  puVar1 = PTR_DAT_079f5558;
  lVar2 = *(long *)PTR_DAT_079f5558;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar2 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_05e8de4c();
    return;
  }
  return;
}


