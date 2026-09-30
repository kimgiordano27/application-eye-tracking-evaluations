/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$SetPostValueState
ENTRY_POINT: 0760d6b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonReader__SetPostValueState(long param_1,long param_2)

{
  undefined *puVar1;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xdaf) & 1) == 0) {
    FUN_04077588(PTR_DAT_09285978);
    *(undefined1 *)(unaff_x21 + 0xdaf) = 1;
  }
  puVar1 = PTR_DAT_09285978;
  FUN_076a226c(param_1,0);
  if (param_2 == 0) {
    param_2 = *(long *)puVar1;
    *(long *)(param_1 + 0x18) = param_2;
  }
  else {
    *(long *)(param_1 + 0x18) = param_2;
  }
  thunk_FUN_040ec700(param_1 + 0x18,param_2);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)puVar1;
  thunk_FUN_040ec700();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)puVar1;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0x20));
  return;
}


